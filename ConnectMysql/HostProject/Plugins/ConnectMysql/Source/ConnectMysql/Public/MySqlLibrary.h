#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MySqlObject.h"
#include "MySqlLibrary.generated.h"

USTRUCT(BlueprintType)
struct FQueryResultRow
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, Category = "MySQL|Result Row Value")
		TArray<FString> RowValue;
};

USTRUCT(BlueprintType)
struct FQueryResultRows
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, Category = "MySQL|Result Rows Value")
		TArray<FQueryResultRow> RowsValue;
};


UCLASS(BlueprintType)
class CONNECTMYSQL_API UMySqlLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "MySQL|Utils")
		static UMySqlObject* ConnectToMySQL(FString& ConnectMessage);

	UFUNCTION(BlueprintCallable, Category = "MySQL|Utils")
		static bool ExectuceData(UMySqlObject* ConnectionObject, FString SqlQuery);

	UFUNCTION(BlueprintCallable, Category = "MySQL|Utils")
		static bool SelectData(UMySqlObject* ConnectionObject, FString SqlQuery, FQueryResultRows& ResultRows);

	UFUNCTION(BlueprintCallable, Category = "MySQL|Utils")
		static int32 SelectCountQuery(UMySqlObject* ConnectionObject, FString SqlQuery);

	UFUNCTION(BlueprintCallable, Category = "MySQL|Utils")
		static bool SelectSingleDataQuery(UMySqlObject* ConnectionObject, FString SqlQuery, FString& Result);

};