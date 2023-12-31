// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../ConnectMysql/Public/MySqlObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMySqlObject() {}
// Cross Module References
	CONNECTMYSQL_API UClass* Z_Construct_UClass_UMySqlObject();
	CONNECTMYSQL_API UClass* Z_Construct_UClass_UMySqlObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ConnectMysql();
// End Cross Module References
	void UMySqlObject::StaticRegisterNativesUMySqlObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMySqlObject);
	UClass* Z_Construct_UClass_UMySqlObject_NoRegister()
	{
		return UMySqlObject::StaticClass();
	}
	struct Z_Construct_UClass_UMySqlObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMySqlObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ConnectMysql,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySqlObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MySqlObject.h" },
		{ "ModuleRelativePath", "Public/MySqlObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMySqlObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMySqlObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMySqlObject_Statics::ClassParams = {
		&UMySqlObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMySqlObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMySqlObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMySqlObject()
	{
		if (!Z_Registration_Info_UClass_UMySqlObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMySqlObject.OuterSingleton, Z_Construct_UClass_UMySqlObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMySqlObject.OuterSingleton;
	}
	template<> CONNECTMYSQL_API UClass* StaticClass<UMySqlObject>()
	{
		return UMySqlObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMySqlObject);
	UMySqlObject::~UMySqlObject() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMySqlObject, UMySqlObject::StaticClass, TEXT("UMySqlObject"), &Z_Registration_Info_UClass_UMySqlObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMySqlObject), 3455325806U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlObject_h_982906376(TEXT("/Script/ConnectMysql"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
