#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "mysql.h"
#include "MySqlObject.generated.h"

UCLASS(BlueprintType)
class CONNECTMYSQL_API UMySqlObject : public UObject
{
	GENERATED_BODY()
private:
	UMySqlObject();

public:
	MYSQL* ConnectSQL;
public:
	static FString ServerName;
	static FString UserName;
	static FString PW;
	static FString DBName;
	static int32 Port;
};


