// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../TestMysql/Public/MySqlLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMySqlLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	TESTMYSQL_API UClass* Z_Construct_UClass_UMySqlLibrary();
	TESTMYSQL_API UClass* Z_Construct_UClass_UMySqlLibrary_NoRegister();
	TESTMYSQL_API UClass* Z_Construct_UClass_UMySqlObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TestMysql();
// End Cross Module References
	DEFINE_FUNCTION(UMySqlLibrary::execActionOnTableData)
	{
		P_GET_OBJECT(UMySqlObject,Z_Param_ConnectionObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_SqlQuery);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMySqlLibrary::ActionOnTableData(Z_Param_ConnectionObject,Z_Param_SqlQuery);
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
			{ "ActionOnTableData", &UMySqlLibrary::execActionOnTableData },
			{ "ConnectToMySQL", &UMySqlLibrary::execConnectToMySQL },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMySqlLibrary_ActionOnTableData_Statics
	{
		struct MySqlLibrary_eventActionOnTableData_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMySqlLibrary_ActionOnTableData_Statics::NewProp_ConnectionObject = { "ConnectionObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySqlLibrary_eventActionOnTableData_Parms, ConnectionObject), Z_Construct_UClass_UMySqlObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMySqlLibrary_ActionOnTableData_Statics::NewProp_SqlQuery = { "SqlQuery", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySqlLibrary_eventActionOnTableData_Parms, SqlQuery), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMySqlLibrary_ActionOnTableData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MySqlLibrary_eventActionOnTableData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMySqlLibrary_ActionOnTableData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MySqlLibrary_eventActionOnTableData_Parms), &Z_Construct_UFunction_UMySqlLibrary_ActionOnTableData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySqlLibrary_ActionOnTableData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySqlLibrary_ActionOnTableData_Statics::NewProp_ConnectionObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySqlLibrary_ActionOnTableData_Statics::NewProp_SqlQuery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySqlLibrary_ActionOnTableData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySqlLibrary_ActionOnTableData_Statics::Function_MetaDataParams[] = {
		{ "Category", "MySQL|Utils" },
		{ "ModuleRelativePath", "Public/MySqlLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySqlLibrary_ActionOnTableData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySqlLibrary, nullptr, "ActionOnTableData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMySqlLibrary_ActionOnTableData_Statics::MySqlLibrary_eventActionOnTableData_Parms), Z_Construct_UFunction_UMySqlLibrary_ActionOnTableData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySqlLibrary_ActionOnTableData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySqlLibrary_ActionOnTableData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySqlLibrary_ActionOnTableData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySqlLibrary_ActionOnTableData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMySqlLibrary_ActionOnTableData_Statics::FuncParams);
		}
		return ReturnFunction;
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
		(UObject* (*)())Z_Construct_UPackage__Script_TestMysql,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMySqlLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMySqlLibrary_ActionOnTableData, "ActionOnTableData" }, // 3715654775
		{ &Z_Construct_UFunction_UMySqlLibrary_ConnectToMySQL, "ConnectToMySQL" }, // 1577704571
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
	template<> TESTMYSQL_API UClass* StaticClass<UMySqlLibrary>()
	{
		return UMySqlLibrary::StaticClass();
	}
	UMySqlLibrary::UMySqlLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMySqlLibrary);
	UMySqlLibrary::~UMySqlLibrary() {}
	struct Z_CompiledInDeferFile_FID_SLGPro_Plugins_TestMysql_Source_TestMysql_Public_MySqlLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SLGPro_Plugins_TestMysql_Source_TestMysql_Public_MySqlLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMySqlLibrary, UMySqlLibrary::StaticClass, TEXT("UMySqlLibrary"), &Z_Registration_Info_UClass_UMySqlLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMySqlLibrary), 1779314612U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SLGPro_Plugins_TestMysql_Source_TestMysql_Public_MySqlLibrary_h_2072116168(TEXT("/Script/TestMysql"),
		Z_CompiledInDeferFile_FID_SLGPro_Plugins_TestMysql_Source_TestMysql_Public_MySqlLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SLGPro_Plugins_TestMysql_Source_TestMysql_Public_MySqlLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
