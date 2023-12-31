#include "MySqlLibrary.h"
#include "mysql.h"
#include <string>

#define INIMYSQL() \
MYSQL_RES* m_Res = nullptr;\
MYSQL_ROW m_Column;\
const std::string m_SqlQuery(TCHAR_TO_UTF8(*SqlQuery));\
if (!ConnectionObject || !ConnectionObject->ConnectSQL) { return false; }

UMySqlObject* UMySqlLibrary::ConnectToMySQL(FString& ConnectMessage)
{
	UMySqlObject* ConnectionObject = NewObject<UMySqlObject>();
	// Init DataBase Connection Object
	ConnectionObject->ConnectSQL = mysql_init(nullptr);

	const std::string m_Host(TCHAR_TO_UTF8(*ConnectionObject->ServerName));
	const std::string m_UserName(TCHAR_TO_UTF8(*ConnectionObject->UserName));
	const std::string m_PassWord(TCHAR_TO_UTF8(*ConnectionObject->PW));
	const std::string m_DBName(TCHAR_TO_UTF8(*ConnectionObject->DBName));
	const uint32 m_Port = ConnectionObject->Port;

	// Judge Connection Status And Return ConnectMessage
	if (mysql_real_connect(ConnectionObject->ConnectSQL, m_Host.c_str(), m_UserName.c_str(), m_PassWord.c_str(),
		m_DBName.c_str(), m_Port, nullptr, 0))
	{
		ConnectMessage = TEXT("Connect Succeed");
	}
	else
	{
		ConnectMessage = mysql_error(ConnectionObject->ConnectSQL);
	}

	// Return MySQL Connection Object
	return ConnectionObject;
}

bool UMySqlLibrary::ExectuceData(UMySqlObject* ConnectionObject, FString SqlQuery)
{
	const std::string m_SqlQuery(TCHAR_TO_UTF8(*SqlQuery));

	// Judge MySQL Is Connected
	if (!ConnectionObject)
	{
		return false;
	}
	// Judge SqlQuery Is Apply Succeed
	if (mysql_query(ConnectionObject->ConnectSQL, m_SqlQuery.c_str()) == 0)
	{
		return true;
	}
	return true;
}


bool UMySqlLibrary::SelectData(UMySqlObject* ConnectionObject, FString SqlQuery, FQueryResultRows& ResultRows)
{
	INIMYSQL();
	if (!mysql_query(ConnectionObject->ConnectSQL, m_SqlQuery.c_str()))
	{
		ResultRows = {};
		m_Res = mysql_store_result(ConnectionObject->ConnectSQL);
		const int m_Columns = mysql_num_fields(m_Res);

		while ((m_Column = mysql_fetch_row(m_Res)) != nullptr)
		{
			FQueryResultRow m_Row;
			for (int i = 0; i < m_Columns; ++i)
			{
				m_Row.RowValue.Add(UTF8_TO_TCHAR(m_Column[i]));
			}
			ResultRows.RowsValue.Add(m_Row);
		}
	}

	mysql_free_result(m_Res);
	return true;
}


int32 UMySqlLibrary::SelectCountQuery(UMySqlObject* ConnectionObject, FString SqlQuery)
{
	int32 Count = 0;
	MYSQL_RES* m_Res = nullptr;
	const std::string m_SqlQuery(TCHAR_TO_UTF8(*SqlQuery));
	if (!ConnectionObject || !ConnectionObject->ConnectSQL) { return Count; }

	if (!mysql_query(ConnectionObject->ConnectSQL, m_SqlQuery.c_str()))
	{
		m_Res = mysql_store_result(ConnectionObject->ConnectSQL);
		Count = mysql_num_fields(m_Res);
	}
	mysql_free_result(m_Res);
	return Count;
}

bool UMySqlLibrary::SelectSingleDataQuery(UMySqlObject* ConnectionObject, FString SqlQuery, FString& Result)
{
	INIMYSQL();

	if (!mysql_query(ConnectionObject->ConnectSQL, m_SqlQuery.c_str()))
	{
		m_Res = mysql_store_result(ConnectionObject->ConnectSQL);
		const int m_Columns = mysql_num_fields(m_Res);
		while ((m_Column = mysql_fetch_row(m_Res)) != nullptr)
		{
			Result = UTF8_TO_TCHAR(m_Column[0]);
			break;
		}
		return true;
	}
	return false;
}


