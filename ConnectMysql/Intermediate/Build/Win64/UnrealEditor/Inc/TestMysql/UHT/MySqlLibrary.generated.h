// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MySqlLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMySqlObject;
#ifdef TESTMYSQL_MySqlLibrary_generated_h
#error "MySqlLibrary.generated.h already included, missing '#pragma once' in MySqlLibrary.h"
#endif
#define TESTMYSQL_MySqlLibrary_generated_h

#define FID_SLGPro_Plugins_TestMysql_Source_TestMysql_Public_MySqlLibrary_h_12_SPARSE_DATA
#define FID_SLGPro_Plugins_TestMysql_Source_TestMysql_Public_MySqlLibrary_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execActionOnTableData); \
	DECLARE_FUNCTION(execConnectToMySQL);


#define FID_SLGPro_Plugins_TestMysql_Source_TestMysql_Public_MySqlLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execActionOnTableData); \
	DECLARE_FUNCTION(execConnectToMySQL);


#define FID_SLGPro_Plugins_TestMysql_Source_TestMysql_Public_MySqlLibrary_h_12_ACCESSORS
#define FID_SLGPro_Plugins_TestMysql_Source_TestMysql_Public_MySqlLibrary_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMySqlLibrary(); \
	friend struct Z_Construct_UClass_UMySqlLibrary_Statics; \
public: \
	DECLARE_CLASS(UMySqlLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TestMysql"), NO_API) \
	DECLARE_SERIALIZER(UMySqlLibrary)


#define FID_SLGPro_Plugins_TestMysql_Source_TestMysql_Public_MySqlLibrary_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUMySqlLibrary(); \
	friend struct Z_Construct_UClass_UMySqlLibrary_Statics; \
public: \
	DECLARE_CLASS(UMySqlLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TestMysql"), NO_API) \
	DECLARE_SERIALIZER(UMySqlLibrary)


#define FID_SLGPro_Plugins_TestMysql_Source_TestMysql_Public_MySqlLibrary_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMySqlLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMySqlLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMySqlLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMySqlLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMySqlLibrary(UMySqlLibrary&&); \
	NO_API UMySqlLibrary(const UMySqlLibrary&); \
public: \
	NO_API virtual ~UMySqlLibrary();


#define FID_SLGPro_Plugins_TestMysql_Source_TestMysql_Public_MySqlLibrary_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMySqlLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMySqlLibrary(UMySqlLibrary&&); \
	NO_API UMySqlLibrary(const UMySqlLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMySqlLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMySqlLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMySqlLibrary) \
	NO_API virtual ~UMySqlLibrary();


#define FID_SLGPro_Plugins_TestMysql_Source_TestMysql_Public_MySqlLibrary_h_8_PROLOG
#define FID_SLGPro_Plugins_TestMysql_Source_TestMysql_Public_MySqlLibrary_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SLGPro_Plugins_TestMysql_Source_TestMysql_Public_MySqlLibrary_h_12_SPARSE_DATA \
	FID_SLGPro_Plugins_TestMysql_Source_TestMysql_Public_MySqlLibrary_h_12_RPC_WRAPPERS \
	FID_SLGPro_Plugins_TestMysql_Source_TestMysql_Public_MySqlLibrary_h_12_ACCESSORS \
	FID_SLGPro_Plugins_TestMysql_Source_TestMysql_Public_MySqlLibrary_h_12_INCLASS \
	FID_SLGPro_Plugins_TestMysql_Source_TestMysql_Public_MySqlLibrary_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SLGPro_Plugins_TestMysql_Source_TestMysql_Public_MySqlLibrary_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SLGPro_Plugins_TestMysql_Source_TestMysql_Public_MySqlLibrary_h_12_SPARSE_DATA \
	FID_SLGPro_Plugins_TestMysql_Source_TestMysql_Public_MySqlLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SLGPro_Plugins_TestMysql_Source_TestMysql_Public_MySqlLibrary_h_12_ACCESSORS \
	FID_SLGPro_Plugins_TestMysql_Source_TestMysql_Public_MySqlLibrary_h_12_INCLASS_NO_PURE_DECLS \
	FID_SLGPro_Plugins_TestMysql_Source_TestMysql_Public_MySqlLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTMYSQL_API UClass* StaticClass<class UMySqlLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SLGPro_Plugins_TestMysql_Source_TestMysql_Public_MySqlLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
