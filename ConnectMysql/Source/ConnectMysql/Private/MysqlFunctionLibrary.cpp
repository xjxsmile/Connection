// Fill out your copyright notice in the Description page of Project Settings.
#include "MysqlFunctionLibrary.h"
#include "MySqlObject.h"
#include "MySqlLibrary.h"


bool UMysqlFunctionLibrary::ConnectMySql(const FString& Server, const FString& UserName, const FString& PW, const FString& TableName, int32 port) {
	if (UMySqlLibrary::ImportDLL())
	{
		std::string serv(TCHAR_TO_UTF8(*Server));
		std::string User(TCHAR_TO_UTF8(*UserName));
		std::string p(TCHAR_TO_UTF8(*PW));
		std::string  Table(TCHAR_TO_UTF8(*TableName));
		return UMySqlLibrary::Bind_ConnectMySql(serv.c_str(), User.c_str(),p.c_str(), Table.c_str(), port);
	}

	return false;
}

int32 UMysqlFunctionLibrary::SelectMySql(const FString& SqlStr, TArray<FArtdTableBP>& Table) {
	std::string sql(TCHAR_TO_UTF8(*SqlStr));
	FArtdTable* _Table = new FArtdTable[10];
	int32 Row=UMySqlLibrary::Bind_Select(sql.c_str(), &_Table);
	Table.SetNum(Row);
	for (int32 i = 0; i < Row; ++i)
	{
		Table[i].ID = _Table[i].ID;
			Table[i].Name = _Table[i].Name;
			Table[i].PassWord = _Table[i].PassWord;
	}
	return Row;
}

bool UMysqlFunctionLibrary::OperatorMySql(const FString& SqlStr)
{
	std::string sql(TCHAR_TO_UTF8(*SqlStr));

	return UMySqlLibrary::Bind_Update(sql.c_str());
}