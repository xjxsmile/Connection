#include "MySqlObject.h"

FString UMySqlObject::ServerName = TEXT("database1.cxdgchrltxrk.eu-west-3.rds.amazonaws.com");
FString UMySqlObject::UserName = TEXT("root");
FString UMySqlObject::PW = TEXT("xxx123123");
FString UMySqlObject::DBName = TEXT("MyBase");
int32 UMySqlObject::Port = 3306;

UMySqlObject::UMySqlObject()
{
	ConnectSQL = nullptr;
}
