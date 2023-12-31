// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MysqlFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class CONNECTMYSQL_API UMysqlFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	static bool ConnectMySql(const FString& Server, const FString& UserName, const FString& PW, const FString& TableName, int32 port);
	UFUNCTION(BlueprintCallable)
	static int32 SelectMySql(const FString& SqlStr, TArray<FArtdTableBP>& Table);
	UFUNCTION(BlueprintCallable)
		static bool OperatorMySql(const FString& SqlStr);
};
