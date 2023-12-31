// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../ConnectMysql/Public/MySqlLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMySqlLibrary() {}
// Cross Module References
	CONNECTMYSQL_API UClass* Z_Construct_UClass_UMySqlLibrary();
	CONNECTMYSQL_API UClass* Z_Construct_UClass_UMySqlLibrary_NoRegister();
	CONNECTMYSQL_API UClass* Z_Construct_UClass_UMySqlObject_NoRegister();
	CONNECTMYSQL_API UScriptStruct* Z_Construct_UScriptStruct_FQueryResultRow();
	CONNECTMYSQL_API UScriptStruct* Z_Construct_UScriptStruct_FQueryResultRows();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ConnectMysql();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QueryResultRow;
class UScriptStruct* FQueryResultRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QueryResultRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QueryResultRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQueryResultRow, (UObject*)Z_Construct_UPackage__Script_ConnectMysql(), TEXT("QueryResultRow"));
	}
	return Z_Registration_Info_UScriptStruct_QueryResultRow.OuterSingleton;
}
template<> CONNECTMYSQL_API UScriptStruct* StaticStruct<FQueryResultRow>()
{
	return FQueryResultRow::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQueryResultRow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_RowValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RowValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueryResultRow_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MySqlLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQueryResultRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQueryResultRow>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQueryResultRow_Statics::NewProp_RowValue_Inner = { "RowValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueryResultRow_Statics::NewProp_RowValue_MetaData[] = {
		{ "Category", "MySQL|Result Row Value" },
		{ "ModuleRelativePath", "Public/MySqlLibrary.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQueryResultRow_Statics::NewProp_RowValue = { "RowValue", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQueryResultRow, RowValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQueryResultRow_Statics::NewProp_RowValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueryResultRow_Statics::NewProp_RowValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQueryResultRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueryResultRow_Statics::NewProp_RowValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueryResultRow_Statics::NewProp_RowValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQueryResultRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConnectMysql,
		nullptr,
		&NewStructOps,
		"QueryResultRow",
		sizeof(FQueryResultRow),
		alignof(FQueryResultRow),
		Z_Construct_UScriptStruct_FQueryResultRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueryResultRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQueryResultRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueryResultRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQueryResultRow()
	{
		if (!Z_Registration_Info_UScriptStruct_QueryResultRow.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QueryResultRow.InnerSingleton, Z_Construct_UScriptStruct_FQueryResultRow_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_QueryResultRow.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QueryResultRows;
class UScriptStruct* FQueryResultRows::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QueryResultRows.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QueryResultRows.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQueryResultRows, (UObject*)Z_Construct_UPackage__Script_ConnectMysql(), TEXT("QueryResultRows"));
	}
	return Z_Registration_Info_UScriptStruct_QueryResultRows.OuterSingleton;
}
template<> CONNECTMYSQL_API UScriptStruct* StaticStruct<FQueryResultRows>()
{
	return FQueryResultRows::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQueryResultRows_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_RowsValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowsValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RowsValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueryResultRows_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MySqlLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQueryResultRows_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQueryResultRows>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQueryResultRows_Statics::NewProp_RowsValue_Inner = { "RowsValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQueryResultRow, METADATA_PARAMS(nullptr, 0) }; // 2704029692
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueryResultRows_Statics::NewProp_RowsValue_MetaData[] = {
		{ "Category", "MySQL|Result Rows Value" },
		{ "ModuleRelativePath", "Public/MySqlLibrary.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQueryResultRows_Statics::NewProp_RowsValue = { "RowsValue", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQueryResultRows, RowsValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQueryResultRows_Statics::NewProp_RowsValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueryResultRows_Statics::NewProp_RowsValue_MetaData)) }; // 2704029692
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQueryResultRows_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueryResultRows_Statics::NewProp_RowsValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueryResultRows_Statics::NewProp_RowsValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQueryResultRows_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConnectMysql,
		nullptr,
		&NewStructOps,
		"QueryResultRows",
		sizeof(FQueryResultRows),
		alignof(FQueryResultRows),
		Z_Construct_UScriptStruct_FQueryResultRows_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueryResultRows_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQueryResultRows_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueryResultRows_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQueryResultRows()
	{
		if (!Z_Registration_Info_UScriptStruct_QueryResultRows.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QueryResultRows.InnerSingleton, Z_Construct_UScriptStruct_FQueryResultRows_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_QueryResultRows.InnerSingleton;
	}
	DEFINE_FUNCTION(UMySqlLibrary::execSelectSingleDataQuery)
	{
		P_GET_OBJECT(UMySqlObject,Z_Param_ConnectionObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_SqlQuery);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMySqlLibrary::SelectSingleDataQuery(Z_Param_ConnectionObject,Z_Param_SqlQuery,Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMySqlLibrary::execSelectCountQuery)
	{
		P_GET_OBJECT(UMySqlObject,Z_Param_ConnectionObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_SqlQuery);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMySqlLibrary::SelectCountQuery(Z_Param_ConnectionObject,Z_Param_SqlQuery);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMySqlLibrary::execSelectData)
	{
		P_GET_OBJECT(UMySqlObject,Z_Param_ConnectionObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_SqlQuery);
		P_GET_STRUCT_REF(FQueryResultRows,Z_Param_Out_ResultRows);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMySqlLibrary::SelectData(Z_Param_ConnectionObject,Z_Param_SqlQuery,Z_Param_Out_ResultRows);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMySqlLibrary::execExectuceData)
	{
		P_GET_OBJECT(UMySqlObject,Z_Param_ConnectionObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_SqlQuery);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMySqlLibrary::ExectuceData(Z_Param_ConnectionObject,Z_Param_SqlQuery);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMySqlLibrary::execConnectToMySQL)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ConnectMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMySqlObject**)Z_Param__Result=UMySqlLibrary::ConnectToMySQL(Z_Param_Out_ConnectMessage);
		P_NATIVE_END;
	}
	void UMySqlLibrary::StaticRegisterNativesUMySqlLibrary()
	{
		UClass* Class = UMySqlLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConnectToMySQL", &UMySqlLibrary::execConnectToMySQL },
			{ "ExectuceData", &UMySqlLibrary::execExectuceData },
			{ "SelectCountQuery", &UMySqlLibrary::execSelectCountQuery },
			{ "SelectData", &UMySqlLibrary::execSelectData },
			{ "SelectSingleDataQuery", &UMySqlLibrary::execSelectSingleDataQuery },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMySqlLibrary_ConnectToMySQL_Statics
	{
		struct MySqlLibrary_eventConnectToMySQL_Parms
		{
			FString ConnectMessage;
			UMySqlObject* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectMessage;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySqlLibrary_ConnectToMySQL_Statics::NewProp_ConnectMessage = { "ConnectMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySqlLibrary_eventConnectToMySQL_Parms, ConnectMessage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMySqlLibrary_ConnectToMySQL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySqlLibrary_eventConnectToMySQL_Parms, ReturnValue), Z_Construct_UClass_UMySqlObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySqlLibrary_ConnectToMySQL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySqlLibrary_ConnectToMySQL_Statics::NewProp_ConnectMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySqlLibrary_ConnectToMySQL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySqlLibrary_ConnectToMySQL_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySQL|Utils" },
		{ "ModuleRelativePath", "Public/MySqlLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySqlLibrary_ConnectToMySQL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySqlLibrary, nullptr, "ConnectToMySQL", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMySqlLibrary_ConnectToMySQL_Statics::MySqlLibrary_eventConnectToMySQL_Parms), Z_Construct_UFunction_UMySqlLibrary_ConnectToMySQL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySqlLibrary_ConnectToMySQL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySqlLibrary_ConnectToMySQL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySqlLibrary_ConnectToMySQL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySqlLibrary_ConnectToMySQL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMySqlLibrary_ConnectToMySQL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMySqlLibrary_ExectuceData_Statics
	{
		struct MySqlLibrary_eventExectuceData_Parms
		{
			UMySqlObject* ConnectionObject;
			FString SqlQuery;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConnectionObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SqlQuery;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMySqlLibrary_ExectuceData_Statics::NewProp_ConnectionObject = { "ConnectionObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySqlLibrary_eventExectuceData_Parms, ConnectionObject), Z_Construct_UClass_UMySqlObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySqlLibrary_ExectuceData_Statics::NewProp_SqlQuery = { "SqlQuery", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySqlLibrary_eventExectuceData_Parms, SqlQuery), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMySqlLibrary_ExectuceData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MySqlLibrary_eventExectuceData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMySqlLibrary_ExectuceData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MySqlLibrary_eventExectuceData_Parms), &Z_Construct_UFunction_UMySqlLibrary_ExectuceData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySqlLibrary_ExectuceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySqlLibrary_ExectuceData_Statics::NewProp_ConnectionObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySqlLibrary_ExectuceData_Statics::NewProp_SqlQuery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySqlLibrary_ExectuceData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySqlLibrary_ExectuceData_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySQL|Utils" },
		{ "ModuleRelativePath", "Public/MySqlLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySqlLibrary_ExectuceData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySqlLibrary, nullptr, "ExectuceData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMySqlLibrary_ExectuceData_Statics::MySqlLibrary_eventExectuceData_Parms), Z_Construct_UFunction_UMySqlLibrary_ExectuceData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySqlLibrary_ExectuceData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySqlLibrary_ExectuceData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySqlLibrary_ExectuceData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySqlLibrary_ExectuceData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMySqlLibrary_ExectuceData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMySqlLibrary_SelectCountQuery_Statics
	{
		struct MySqlLibrary_eventSelectCountQuery_Parms
		{
			UMySqlObject* ConnectionObject;
			FString SqlQuery;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConnectionObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SqlQuery;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMySqlLibrary_SelectCountQuery_Statics::NewProp_ConnectionObject = { "ConnectionObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySqlLibrary_eventSelectCountQuery_Parms, ConnectionObject), Z_Construct_UClass_UMySqlObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySqlLibrary_SelectCountQuery_Statics::NewProp_SqlQuery = { "SqlQuery", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySqlLibrary_eventSelectCountQuery_Parms, SqlQuery), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMySqlLibrary_SelectCountQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySqlLibrary_eventSelectCountQuery_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySqlLibrary_SelectCountQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySqlLibrary_SelectCountQuery_Statics::NewProp_ConnectionObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySqlLibrary_SelectCountQuery_Statics::NewProp_SqlQuery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySqlLibrary_SelectCountQuery_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySqlLibrary_SelectCountQuery_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySQL|Utils" },
		{ "ModuleRelativePath", "Public/MySqlLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySqlLibrary_SelectCountQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySqlLibrary, nullptr, "SelectCountQuery", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMySqlLibrary_SelectCountQuery_Statics::MySqlLibrary_eventSelectCountQuery_Parms), Z_Construct_UFunction_UMySqlLibrary_SelectCountQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySqlLibrary_SelectCountQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySqlLibrary_SelectCountQuery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySqlLibrary_SelectCountQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySqlLibrary_SelectCountQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMySqlLibrary_SelectCountQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMySqlLibrary_SelectData_Statics
	{
		struct MySqlLibrary_eventSelectData_Parms
		{
			UMySqlObject* ConnectionObject;
			FString SqlQuery;
			FQueryResultRows ResultRows;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConnectionObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SqlQuery;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultRows;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMySqlLibrary_SelectData_Statics::NewProp_ConnectionObject = { "ConnectionObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySqlLibrary_eventSelectData_Parms, ConnectionObject), Z_Construct_UClass_UMySqlObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySqlLibrary_SelectData_Statics::NewProp_SqlQuery = { "SqlQuery", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySqlLibrary_eventSelectData_Parms, SqlQuery), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMySqlLibrary_SelectData_Statics::NewProp_ResultRows = { "ResultRows", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySqlLibrary_eventSelectData_Parms, ResultRows), Z_Construct_UScriptStruct_FQueryResultRows, METADATA_PARAMS(nullptr, 0) }; // 1214749526
	void Z_Construct_UFunction_UMySqlLibrary_SelectData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MySqlLibrary_eventSelectData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMySqlLibrary_SelectData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MySqlLibrary_eventSelectData_Parms), &Z_Construct_UFunction_UMySqlLibrary_SelectData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySqlLibrary_SelectData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySqlLibrary_SelectData_Statics::NewProp_ConnectionObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySqlLibrary_SelectData_Statics::NewProp_SqlQuery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySqlLibrary_SelectData_Statics::NewProp_ResultRows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySqlLibrary_SelectData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySqlLibrary_SelectData_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySQL|Utils" },
		{ "ModuleRelativePath", "Public/MySqlLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySqlLibrary_SelectData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySqlLibrary, nullptr, "SelectData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMySqlLibrary_SelectData_Statics::MySqlLibrary_eventSelectData_Parms), Z_Construct_UFunction_UMySqlLibrary_SelectData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySqlLibrary_SelectData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySqlLibrary_SelectData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySqlLibrary_SelectData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySqlLibrary_SelectData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMySqlLibrary_SelectData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMySqlLibrary_SelectSingleDataQuery_Statics
	{
		struct MySqlLibrary_eventSelectSingleDataQuery_Parms
		{
			UMySqlObject* ConnectionObject;
			FString SqlQuery;
			FString Result;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConnectionObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SqlQuery;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Result;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMySqlLibrary_SelectSingleDataQuery_Statics::NewProp_ConnectionObject = { "ConnectionObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySqlLibrary_eventSelectSingleDataQuery_Parms, ConnectionObject), Z_Construct_UClass_UMySqlObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySqlLibrary_SelectSingleDataQuery_Statics::NewProp_SqlQuery = { "SqlQuery", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySqlLibrary_eventSelectSingleDataQuery_Parms, SqlQuery), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySqlLibrary_SelectSingleDataQuery_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySqlLibrary_eventSelectSingleDataQuery_Parms, Result), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMySqlLibrary_SelectSingleDataQuery_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MySqlLibrary_eventSelectSingleDataQuery_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMySqlLibrary_SelectSingleDataQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MySqlLibrary_eventSelectSingleDataQuery_Parms), &Z_Construct_UFunction_UMySqlLibrary_SelectSingleDataQuery_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySqlLibrary_SelectSingleDataQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySqlLibrary_SelectSingleDataQuery_Statics::NewProp_ConnectionObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySqlLibrary_SelectSingleDataQuery_Statics::NewProp_SqlQuery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySqlLibrary_SelectSingleDataQuery_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySqlLibrary_SelectSingleDataQuery_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySqlLibrary_SelectSingleDataQuery_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySQL|Utils" },
		{ "ModuleRelativePath", "Public/MySqlLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySqlLibrary_SelectSingleDataQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySqlLibrary, nullptr, "SelectSingleDataQuery", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMySqlLibrary_SelectSingleDataQuery_Statics::MySqlLibrary_eventSelectSingleDataQuery_Parms), Z_Construct_UFunction_UMySqlLibrary_SelectSingleDataQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySqlLibrary_SelectSingleDataQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySqlLibrary_SelectSingleDataQuery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySqlLibrary_SelectSingleDataQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySqlLibrary_SelectSingleDataQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMySqlLibrary_SelectSingleDataQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMySqlLibrary);
	UClass* Z_Construct_UClass_UMySqlLibrary_NoRegister()
	{
		return UMySqlLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMySqlLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMySqlLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ConnectMysql,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMySqlLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMySqlLibrary_ConnectToMySQL, "ConnectToMySQL" }, // 1577704571
		{ &Z_Construct_UFunction_UMySqlLibrary_ExectuceData, "ExectuceData" }, // 1415326302
		{ &Z_Construct_UFunction_UMySqlLibrary_SelectCountQuery, "SelectCountQuery" }, // 1370204105
		{ &Z_Construct_UFunction_UMySqlLibrary_SelectData, "SelectData" }, // 2295640315
		{ &Z_Construct_UFunction_UMySqlLibrary_SelectSingleDataQuery, "SelectSingleDataQuery" }, // 424744702
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySqlLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MySqlLibrary.h" },
		{ "ModuleRelativePath", "Public/MySqlLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMySqlLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMySqlLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMySqlLibrary_Statics::ClassParams = {
		&UMySqlLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMySqlLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMySqlLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMySqlLibrary()
	{
		if (!Z_Registration_Info_UClass_UMySqlLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMySqlLibrary.OuterSingleton, Z_Construct_UClass_UMySqlLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMySqlLibrary.OuterSingleton;
	}
	template<> CONNECTMYSQL_API UClass* StaticClass<UMySqlLibrary>()
	{
		return UMySqlLibrary::StaticClass();
	}
	UMySqlLibrary::UMySqlLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMySqlLibrary);
	UMySqlLibrary::~UMySqlLibrary() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlLibrary_h_Statics::ScriptStructInfo[] = {
		{ FQueryResultRow::StaticStruct, Z_Construct_UScriptStruct_FQueryResultRow_Statics::NewStructOps, TEXT("QueryResultRow"), &Z_Registration_Info_UScriptStruct_QueryResultRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQueryResultRow), 2704029692U) },
		{ FQueryResultRows::StaticStruct, Z_Construct_UScriptStruct_FQueryResultRows_Statics::NewStructOps, TEXT("QueryResultRows"), &Z_Registration_Info_UScriptStruct_QueryResultRows, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQueryResultRows), 1214749526U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMySqlLibrary, UMySqlLibrary::StaticClass, TEXT("UMySqlLibrary"), &Z_Registration_Info_UClass_UMySqlLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMySqlLibrary), 254410941U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlLibrary_h_1322387709(TEXT("/Script/ConnectMysql"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
