#pragma once

#include "CoreMinimal.h"
#include "MySqlObject.h"

struct FArtdTable
{
	char* ID;
	char* Name;
	char* PassWord;
};




class UMySqlLibrary 
{
public:

	static bool ImportDLL();

	static void FreeDLL();

	static bool Bind_ConnectMySql(const char* Server, const char* UserName, const char* PW, const char* TableName, int port);

	static int Bind_Select(const char* SqlStr, FArtdTable** table);

	static bool Bind_Insert(const char* SqlStr);
	
	static bool Bind_Update(const char* SqlStr);

};
