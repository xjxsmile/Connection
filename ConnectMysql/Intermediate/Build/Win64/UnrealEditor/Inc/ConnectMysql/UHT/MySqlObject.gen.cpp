// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConnectMysql/Public/MySqlObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMySqlObject() {}
// Cross Module References
	CONNECTMYSQL_API UClass* Z_Construct_UClass_UMySqlObject();
	CONNECTMYSQL_API UClass* Z_Construct_UClass_UMySqlObject_NoRegister();
	CONNECTMYSQL_API UScriptStruct* Z_Construct_UScriptStruct_FArtdTableBP();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ConnectMysql();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArtdTableBP;
class UScriptStruct* FArtdTableBP::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArtdTableBP.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArtdTableBP.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArtdTableBP, (UObject*)Z_Construct_UPackage__Script_ConnectMysql(), TEXT("ArtdTableBP"));
	}
	return Z_Registration_Info_UScriptStruct_ArtdTableBP.OuterSingleton;
}
template<> CONNECTMYSQL_API UScriptStruct* StaticStruct<FArtdTableBP>()
{
	return FArtdTableBP::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FArtdTableBP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PassWord_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PassWord;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArtdTableBP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MySqlObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FArtdTableBP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArtdTableBP>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArtdTableBP_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "ArtdTableBP" },
		{ "ModuleRelativePath", "Public/MySqlObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArtdTableBP_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FArtdTableBP, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FArtdTableBP_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArtdTableBP_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArtdTableBP_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "ArtdTableBP" },
		{ "ModuleRelativePath", "Public/MySqlObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArtdTableBP_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FArtdTableBP, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FArtdTableBP_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArtdTableBP_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArtdTableBP_Statics::NewProp_PassWord_MetaData[] = {
		{ "Category", "ArtdTableBP" },
		{ "ModuleRelativePath", "Public/MySqlObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FArtdTableBP_Statics::NewProp_PassWord = { "PassWord", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FArtdTableBP, PassWord), METADATA_PARAMS(Z_Construct_UScriptStruct_FArtdTableBP_Statics::NewProp_PassWord_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArtdTableBP_Statics::NewProp_PassWord_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArtdTableBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArtdTableBP_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArtdTableBP_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArtdTableBP_Statics::NewProp_PassWord,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArtdTableBP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConnectMysql,
		nullptr,
		&NewStructOps,
		"ArtdTableBP",
		sizeof(FArtdTableBP),
		alignof(FArtdTableBP),
		Z_Construct_UScriptStruct_FArtdTableBP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArtdTableBP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FArtdTableBP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArtdTableBP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FArtdTableBP()
	{
		if (!Z_Registration_Info_UScriptStruct_ArtdTableBP.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArtdTableBP.InnerSingleton, Z_Construct_UScriptStruct_FArtdTableBP_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ArtdTableBP.InnerSingleton;
	}
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
	struct Z_CompiledInDeferFile_FID_SLGPro_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlObject_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SLGPro_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlObject_h_Statics::ScriptStructInfo[] = {
		{ FArtdTableBP::StaticStruct, Z_Construct_UScriptStruct_FArtdTableBP_Statics::NewStructOps, TEXT("ArtdTableBP"), &Z_Registration_Info_UScriptStruct_ArtdTableBP, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArtdTableBP), 119518151U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SLGPro_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMySqlObject, UMySqlObject::StaticClass, TEXT("UMySqlObject"), &Z_Registration_Info_UClass_UMySqlObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMySqlObject), 3455325806U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SLGPro_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlObject_h_2719866551(TEXT("/Script/ConnectMysql"),
		Z_CompiledInDeferFile_FID_SLGPro_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SLGPro_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlObject_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_SLGPro_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SLGPro_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlObject_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
