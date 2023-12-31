#include "MySqlLibrary.h"
#include <string>
#include "Misc/Paths.h"
#include "Windows/WindowsPlatformProcess.h"



typedef bool(*_OpenSQL)(const char* Server, const char* UserName, const char* PW, const char* TableName, int port);
_OpenSQL					m_OpenSQL;

typedef int(*_SelectSQL)(const char* SqlStr, FArtdTable** Table);
_SelectSQL			m_SelectSQL;

typedef bool(*_InsertSQL)(const char* SqlStr);
_InsertSQL			m_InsertSQL;

void* v_SqlHandle;
void* v_SqlHandle1;

bool UMySqlLibrary::ImportDLL()
{
	if (v_SqlHandle != nullptr)
		return true;
	FString filePath = FPaths::Combine(*FPaths::ProjectDir(), TEXT("Binaries/libmysql.dll"));
	//FString filePath = FPaths::Combine(*FPaths::ProjectPluginsDir(), TEXT("ConnectMysql/Binaries/libmysql.dll"));

	if (FPaths::FileExists(filePath))
	{
		v_SqlHandle1 = FPlatformProcess::GetDllHandle(*filePath);
		//filePath = FPaths::Combine(*FPaths::ProjectPluginsDir(), TEXT("ConnectMysql/Binaries/MySqlConnection.dll"));
		filePath = FPaths::Combine(*FPaths::ProjectDir(), TEXT("Binaries/MySqlConnection.dll"));
		v_SqlHandle = FPlatformProcess::GetDllHandle(*filePath);

		if (v_SqlHandle != nullptr) {
			UE_LOG(LogTemp, Log, TEXT("v_SqlHandle is not valid"));
			return true;
		}
		else {
			UE_LOG(LogTemp, Log, TEXT("v_SqlHandle is valid "));
		}
	}
	return false;

}

void UMySqlLibrary::FreeDLL()
{
	FPlatformProcess::FreeDllHandle(v_SqlHandle);
	v_SqlHandle = nullptr;
	FPlatformProcess::FreeDllHandle(v_SqlHandle1);
	v_SqlHandle1 = nullptr;
}

template<typename T>
bool ImportMethod(FString MethodName, T& method)
{
	if (v_SqlHandle != nullptr)
	{
		method = (T)FPlatformProcess::GetDllExport(v_SqlHandle,*MethodName);
		if (method)
		{
			return true;
		}

	}
	return false;
}

bool UMySqlLibrary::Bind_ConnectMySql(const char* Server, const char* UserName, const char* PW, const char* TableName, int port)
{
	if (ImportMethod<_OpenSQL>("Bind_ConnectMySql", m_OpenSQL))
	{
		return m_OpenSQL(Server, UserName, PW, TableName, port);
	}
	return false;
}

int UMySqlLibrary::Bind_Select(const char* SqlStr, FArtdTable** table)
{
	if (ImportMethod<_SelectSQL>("Bind_Select", m_SelectSQL))
	{
		return m_SelectSQL(SqlStr, table);
	}
	return 0;
}


bool UMySqlLibrary::Bind_Insert(const char* SqlStr) 
{
	if (ImportMethod<_InsertSQL>("Bind_InsertValue", m_InsertSQL))
	{
		return m_InsertSQL(SqlStr);
	}
	return false;
}

bool UMySqlLibrary::Bind_Update(const char* SqlStr)
{
	if (ImportMethod<_InsertSQL>("Bind_InsertValue", m_InsertSQL))
	{
		return !m_InsertSQL(SqlStr);
	}
	return false;
}
















//#define INIMYSQL() \
//MYSQL_RES* m_Res = nullptr;\
//MYSQL_ROW m_Column;\
//const std::string m_SqlQuery(TCHAR_TO_UTF8(*SqlQuery));\
//if (!ConnectionObject || !ConnectionObject->ConnectSQL) { return false; }

//UMySqlObject* UMySqlLibrary::ConnectToMySQL(FString& ConnectMessage)
//{
//	UMySqlObject* ConnectionObject = NewObject<UMySqlObject>();
//	// Init DataBase Connection Object
//	MYSQL myCont;
//	mysql_init(&myCont);
//
//	/*const std::string m_Host(TCHAR_TO_UTF8(*ConnectionObject->ServerName));
//	const std::string m_UserName(TCHAR_TO_UTF8(*ConnectionObject->UserName));
//	const std::string m_PassWord(TCHAR_TO_UTF8(*ConnectionObject->PW));
//	const std::string m_DBName(TCHAR_TO_UTF8(*ConnectionObject->DBName));
//	const uint32 m_Port = ConnectionObject->Port;*/
//
//	// Judge Connection Status And Return ConnectMessage
//	if (mysql_real_connect(&myCont, "database1.cxdgchrltxrk.eu-west-3.rds.amazonaws.com", "root", "xxx123123",
//		"MyBase", 3306, nullptr, 0))
//	{
//		ConnectMessage = TEXT("Connect Succeed");
//	}
//	else
//	{
//		ConnectMessage = mysql_error(&ConnectionObject->ConnectSQL);
//	}
//
//	// Return MySQL Connection Object
//	return ConnectionObject;
//}

//bool UMySqlLibrary::ExectuceData(UMySqlObject* ConnectionObject, FString SqlQuery)
//{
//	const std::string m_SqlQuery(TCHAR_TO_UTF8(*SqlQuery));
//
//	// Judge MySQL Is Connected
//	if (!ConnectionObject)
//	{
//		return false;
//	}
//	// Judge SqlQuery Is Apply Succeed
//	if (mysql_query(ConnectionObject->ConnectSQL, m_SqlQuery.c_str()) == 0)
//	{
//		return true;
//	}
//	return true;
//}
//
//
//bool UMySqlLibrary::SelectData(UMySqlObject* ConnectionObject, FString SqlQuery, FQueryResultRows& ResultRows)
//{
//	INIMYSQL();
//	if (!mysql_query(ConnectionObject->ConnectSQL, m_SqlQuery.c_str()))
//	{
//		ResultRows = {};
//		m_Res = mysql_store_result(ConnectionObject->ConnectSQL);
//		const int m_Columns = mysql_num_fields(m_Res);
//
//		while ((m_Column = mysql_fetch_row(m_Res)) != nullptr)
//		{
//			FQueryResultRow m_Row;
//			for (int i = 0; i < m_Columns; ++i)
//			{
//				m_Row.RowValue.Add(UTF8_TO_TCHAR(m_Column[i]));
//			}
//			ResultRows.RowsValue.Add(m_Row);
//		}
//	}
//
//	mysql_free_result(m_Res);
//	return true;
//}
//
//
//int32 UMySqlLibrary::SelectCountQuery(UMySqlObject* ConnectionObject, FString SqlQuery)
//{
//	int32 Count = 0;
//	MYSQL_RES* m_Res = nullptr;
//	const std::string m_SqlQuery(TCHAR_TO_UTF8(*SqlQuery));
//	if (!ConnectionObject || !ConnectionObject->ConnectSQL) { return Count; }
//
//	if (!mysql_query(ConnectionObject->ConnectSQL, m_SqlQuery.c_str()))
//	{
//		m_Res = mysql_store_result(ConnectionObject->ConnectSQL);
//		Count = mysql_num_fields(m_Res);
//	}
//	mysql_free_result(m_Res);
//	return Count;
//}
//
//bool UMySqlLibrary::SelectSingleDataQuery(UMySqlObject* ConnectionObject, FString SqlQuery, FString& Result)
//{
//	INIMYSQL();
//
//	if (!mysql_query(ConnectionObject->ConnectSQL, m_SqlQuery.c_str()))
//	{
//		m_Res = mysql_store_result(ConnectionObject->ConnectSQL);
//		const int m_Columns = mysql_num_fields(m_Res);
//		while ((m_Column = mysql_fetch_row(m_Res)) != nullptr)
//		{
//			Result = UTF8_TO_TCHAR(m_Column[0]);
//			break;
//		}
//		return true;
//	}
//	return false;
//}


