// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConnectMysql/Public/MysqlFunctionLibrary.h"
#include "ConnectMysql/Public/MySqlObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMysqlFunctionLibrary() {}
// Cross Module References
	CONNECTMYSQL_API UClass* Z_Construct_UClass_UMysqlFunctionLibrary();
	CONNECTMYSQL_API UClass* Z_Construct_UClass_UMysqlFunctionLibrary_NoRegister();
	CONNECTMYSQL_API UScriptStruct* Z_Construct_UScriptStruct_FArtdTableBP();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ConnectMysql();
// End Cross Module References
	DEFINE_FUNCTION(UMysqlFunctionLibrary::execOperatorMySql)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SqlStr);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMysqlFunctionLibrary::OperatorMySql(Z_Param_SqlStr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMysqlFunctionLibrary::execSelectMySql)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SqlStr);
		P_GET_TARRAY_REF(FArtdTableBP,Z_Param_Out_Table);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMysqlFunctionLibrary::SelectMySql(Z_Param_SqlStr,Z_Param_Out_Table);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMysqlFunctionLibrary::execConnectMySql)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Server);
		P_GET_PROPERTY(FStrProperty,Z_Param_UserName);
		P_GET_PROPERTY(FStrProperty,Z_Param_PW);
		P_GET_PROPERTY(FStrProperty,Z_Param_TableName);
		P_GET_PROPERTY(FIntProperty,Z_Param_port);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMysqlFunctionLibrary::ConnectMySql(Z_Param_Server,Z_Param_UserName,Z_Param_PW,Z_Param_TableName,Z_Param_port);
		P_NATIVE_END;
	}
	void UMysqlFunctionLibrary::StaticRegisterNativesUMysqlFunctionLibrary()
	{
		UClass* Class = UMysqlFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConnectMySql", &UMysqlFunctionLibrary::execConnectMySql },
			{ "OperatorMySql", &UMysqlFunctionLibrary::execOperatorMySql },
			{ "SelectMySql", &UMysqlFunctionLibrary::execSelectMySql },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMysqlFunctionLibrary_ConnectMySql_Statics
	{
		struct MysqlFunctionLibrary_eventConnectMySql_Parms
		{
			FString Server;
			FString UserName;
			FString PW;
			FString TableName;
			int32 port;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Server_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Server;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PW_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PW;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TableName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TableName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_port;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMysqlFunctionLibrary_ConnectMySql_Statics::NewProp_Server_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMysqlFunctionLibrary_ConnectMySql_Statics::NewProp_Server = { "Server", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MysqlFunctionLibrary_eventConnectMySql_Parms, Server), METADATA_PARAMS(Z_Construct_UFunction_UMysqlFunctionLibrary_ConnectMySql_Statics::NewProp_Server_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMysqlFunctionLibrary_ConnectMySql_Statics::NewProp_Server_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMysqlFunctionLibrary_ConnectMySql_Statics::NewProp_UserName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMysqlFunctionLibrary_ConnectMySql_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MysqlFunctionLibrary_eventConnectMySql_Parms, UserName), METADATA_PARAMS(Z_Construct_UFunction_UMysqlFunctionLibrary_ConnectMySql_Statics::NewProp_UserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMysqlFunctionLibrary_ConnectMySql_Statics::NewProp_UserName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMysqlFunctionLibrary_ConnectMySql_Statics::NewProp_PW_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMysqlFunctionLibrary_ConnectMySql_Statics::NewProp_PW = { "PW", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MysqlFunctionLibrary_eventConnectMySql_Parms, PW), METADATA_PARAMS(Z_Construct_UFunction_UMysqlFunctionLibrary_ConnectMySql_Statics::NewProp_PW_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMysqlFunctionLibrary_ConnectMySql_Statics::NewProp_PW_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMysqlFunctionLibrary_ConnectMySql_Statics::NewProp_TableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMysqlFunctionLibrary_ConnectMySql_Statics::NewProp_TableName = { "TableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MysqlFunctionLibrary_eventConnectMySql_Parms, TableName), METADATA_PARAMS(Z_Construct_UFunction_UMysqlFunctionLibrary_ConnectMySql_Statics::NewProp_TableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMysqlFunctionLibrary_ConnectMySql_Statics::NewProp_TableName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMysqlFunctionLibrary_ConnectMySql_Statics::NewProp_port = { "port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MysqlFunctionLibrary_eventConnectMySql_Parms, port), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMysqlFunctionLibrary_ConnectMySql_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MysqlFunctionLibrary_eventConnectMySql_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMysqlFunctionLibrary_ConnectMySql_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MysqlFunctionLibrary_eventConnectMySql_Parms), &Z_Construct_UFunction_UMysqlFunctionLibrary_ConnectMySql_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMysqlFunctionLibrary_ConnectMySql_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMysqlFunctionLibrary_ConnectMySql_Statics::NewProp_Server,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMysqlFunctionLibrary_ConnectMySql_Statics::NewProp_UserName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMysqlFunctionLibrary_ConnectMySql_Statics::NewProp_PW,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMysqlFunctionLibrary_ConnectMySql_Statics::NewProp_TableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMysqlFunctionLibrary_ConnectMySql_Statics::NewProp_port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMysqlFunctionLibrary_ConnectMySql_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMysqlFunctionLibrary_ConnectMySql_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MysqlFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMysqlFunctionLibrary_ConnectMySql_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMysqlFunctionLibrary, nullptr, "ConnectMySql", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMysqlFunctionLibrary_ConnectMySql_Statics::MysqlFunctionLibrary_eventConnectMySql_Parms), Z_Construct_UFunction_UMysqlFunctionLibrary_ConnectMySql_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMysqlFunctionLibrary_ConnectMySql_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMysqlFunctionLibrary_ConnectMySql_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMysqlFunctionLibrary_ConnectMySql_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMysqlFunctionLibrary_ConnectMySql()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMysqlFunctionLibrary_ConnectMySql_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMysqlFunctionLibrary_OperatorMySql_Statics
	{
		struct MysqlFunctionLibrary_eventOperatorMySql_Parms
		{
			FString SqlStr;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SqlStr_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SqlStr;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMysqlFunctionLibrary_OperatorMySql_Statics::NewProp_SqlStr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMysqlFunctionLibrary_OperatorMySql_Statics::NewProp_SqlStr = { "SqlStr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MysqlFunctionLibrary_eventOperatorMySql_Parms, SqlStr), METADATA_PARAMS(Z_Construct_UFunction_UMysqlFunctionLibrary_OperatorMySql_Statics::NewProp_SqlStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMysqlFunctionLibrary_OperatorMySql_Statics::NewProp_SqlStr_MetaData)) };
	void Z_Construct_UFunction_UMysqlFunctionLibrary_OperatorMySql_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MysqlFunctionLibrary_eventOperatorMySql_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMysqlFunctionLibrary_OperatorMySql_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MysqlFunctionLibrary_eventOperatorMySql_Parms), &Z_Construct_UFunction_UMysqlFunctionLibrary_OperatorMySql_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMysqlFunctionLibrary_OperatorMySql_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMysqlFunctionLibrary_OperatorMySql_Statics::NewProp_SqlStr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMysqlFunctionLibrary_OperatorMySql_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMysqlFunctionLibrary_OperatorMySql_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MysqlFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMysqlFunctionLibrary_OperatorMySql_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMysqlFunctionLibrary, nullptr, "OperatorMySql", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMysqlFunctionLibrary_OperatorMySql_Statics::MysqlFunctionLibrary_eventOperatorMySql_Parms), Z_Construct_UFunction_UMysqlFunctionLibrary_OperatorMySql_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMysqlFunctionLibrary_OperatorMySql_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMysqlFunctionLibrary_OperatorMySql_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMysqlFunctionLibrary_OperatorMySql_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMysqlFunctionLibrary_OperatorMySql()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMysqlFunctionLibrary_OperatorMySql_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMysqlFunctionLibrary_SelectMySql_Statics
	{
		struct MysqlFunctionLibrary_eventSelectMySql_Parms
		{
			FString SqlStr;
			TArray<FArtdTableBP> Table;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SqlStr_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SqlStr;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Table_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Table;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMysqlFunctionLibrary_SelectMySql_Statics::NewProp_SqlStr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMysqlFunctionLibrary_SelectMySql_Statics::NewProp_SqlStr = { "SqlStr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MysqlFunctionLibrary_eventSelectMySql_Parms, SqlStr), METADATA_PARAMS(Z_Construct_UFunction_UMysqlFunctionLibrary_SelectMySql_Statics::NewProp_SqlStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMysqlFunctionLibrary_SelectMySql_Statics::NewProp_SqlStr_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMysqlFunctionLibrary_SelectMySql_Statics::NewProp_Table_Inner = { "Table", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FArtdTableBP, METADATA_PARAMS(nullptr, 0) }; // 119518151
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMysqlFunctionLibrary_SelectMySql_Statics::NewProp_Table = { "Table", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MysqlFunctionLibrary_eventSelectMySql_Parms, Table), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 119518151
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMysqlFunctionLibrary_SelectMySql_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MysqlFunctionLibrary_eventSelectMySql_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMysqlFunctionLibrary_SelectMySql_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMysqlFunctionLibrary_SelectMySql_Statics::NewProp_SqlStr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMysqlFunctionLibrary_SelectMySql_Statics::NewProp_Table_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMysqlFunctionLibrary_SelectMySql_Statics::NewProp_Table,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMysqlFunctionLibrary_SelectMySql_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMysqlFunctionLibrary_SelectMySql_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MysqlFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMysqlFunctionLibrary_SelectMySql_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMysqlFunctionLibrary, nullptr, "SelectMySql", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMysqlFunctionLibrary_SelectMySql_Statics::MysqlFunctionLibrary_eventSelectMySql_Parms), Z_Construct_UFunction_UMysqlFunctionLibrary_SelectMySql_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMysqlFunctionLibrary_SelectMySql_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMysqlFunctionLibrary_SelectMySql_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMysqlFunctionLibrary_SelectMySql_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMysqlFunctionLibrary_SelectMySql()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMysqlFunctionLibrary_SelectMySql_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMysqlFunctionLibrary);
	UClass* Z_Construct_UClass_UMysqlFunctionLibrary_NoRegister()
	{
		return UMysqlFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMysqlFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMysqlFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ConnectMysql,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMysqlFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMysqlFunctionLibrary_ConnectMySql, "ConnectMySql" }, // 2031236446
		{ &Z_Construct_UFunction_UMysqlFunctionLibrary_OperatorMySql, "OperatorMySql" }, // 3313726117
		{ &Z_Construct_UFunction_UMysqlFunctionLibrary_SelectMySql, "SelectMySql" }, // 2371046940
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMysqlFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MysqlFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/MysqlFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMysqlFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMysqlFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMysqlFunctionLibrary_Statics::ClassParams = {
		&UMysqlFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMysqlFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMysqlFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMysqlFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UMysqlFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMysqlFunctionLibrary.OuterSingleton, Z_Construct_UClass_UMysqlFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMysqlFunctionLibrary.OuterSingleton;
	}
	template<> CONNECTMYSQL_API UClass* StaticClass<UMysqlFunctionLibrary>()
	{
		return UMysqlFunctionLibrary::StaticClass();
	}
	UMysqlFunctionLibrary::UMysqlFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMysqlFunctionLibrary);
	UMysqlFunctionLibrary::~UMysqlFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_SLGPro_Plugins_ConnectMysql_Source_ConnectMysql_Public_MysqlFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SLGPro_Plugins_ConnectMysql_Source_ConnectMysql_Public_MysqlFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMysqlFunctionLibrary, UMysqlFunctionLibrary::StaticClass, TEXT("UMysqlFunctionLibrary"), &Z_Registration_Info_UClass_UMysqlFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMysqlFunctionLibrary), 1234576993U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SLGPro_Plugins_ConnectMysql_Source_ConnectMysql_Public_MysqlFunctionLibrary_h_1348570274(TEXT("/Script/ConnectMysql"),
		Z_CompiledInDeferFile_FID_SLGPro_Plugins_ConnectMysql_Source_ConnectMysql_Public_MysqlFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SLGPro_Plugins_ConnectMysql_Source_ConnectMysql_Public_MysqlFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
