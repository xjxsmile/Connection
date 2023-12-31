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
struct FQueryResultRows;
#ifdef CONNECTMYSQL_MySqlLibrary_generated_h
#error "MySqlLibrary.generated.h already included, missing '#pragma once' in MySqlLibrary.h"
#endif
#define CONNECTMYSQL_MySqlLibrary_generated_h

#define FID_HostProject_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlLibrary_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQueryResultRow_Statics; \
	CONNECTMYSQL_API static class UScriptStruct* StaticStruct();


template<> CONNECTMYSQL_API UScriptStruct* StaticStruct<struct FQueryResultRow>();

#define FID_HostProject_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlLibrary_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQueryResultRows_Statics; \
	CONNECTMYSQL_API static class UScriptStruct* StaticStruct();


template<> CONNECTMYSQL_API UScriptStruct* StaticStruct<struct FQueryResultRows>();

#define FID_HostProject_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlLibrary_h_30_SPARSE_DATA
#define FID_HostProject_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlLibrary_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSelectSingleDataQuery); \
	DECLARE_FUNCTION(execSelectCountQuery); \
	DECLARE_FUNCTION(execSelectData); \
	DECLARE_FUNCTION(execExectuceData); \
	DECLARE_FUNCTION(execConnectToMySQL);


#define FID_HostProject_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlLibrary_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSelectSingleDataQuery); \
	DECLARE_FUNCTION(execSelectCountQuery); \
	DECLARE_FUNCTION(execSelectData); \
	DECLARE_FUNCTION(execExectuceData); \
	DECLARE_FUNCTION(execConnectToMySQL);


#define FID_HostProject_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlLibrary_h_30_ACCESSORS
#define FID_HostProject_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlLibrary_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMySqlLibrary(); \
	friend struct Z_Construct_UClass_UMySqlLibrary_Statics; \
public: \
	DECLARE_CLASS(UMySqlLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ConnectMysql"), NO_API) \
	DECLARE_SERIALIZER(UMySqlLibrary)


#define FID_HostProject_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlLibrary_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUMySqlLibrary(); \
	friend struct Z_Construct_UClass_UMySqlLibrary_Statics; \
public: \
	DECLARE_CLASS(UMySqlLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ConnectMysql"), NO_API) \
	DECLARE_SERIALIZER(UMySqlLibrary)


#define FID_HostProject_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlLibrary_h_30_STANDARD_CONSTRUCTORS \
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


#define FID_HostProject_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlLibrary_h_30_ENHANCED_CONSTRUCTORS \
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


#define FID_HostProject_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlLibrary_h_27_PROLOG
#define FID_HostProject_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlLibrary_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlLibrary_h_30_SPARSE_DATA \
	FID_HostProject_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlLibrary_h_30_RPC_WRAPPERS \
	FID_HostProject_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlLibrary_h_30_ACCESSORS \
	FID_HostProject_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlLibrary_h_30_INCLASS \
	FID_HostProject_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlLibrary_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlLibrary_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlLibrary_h_30_SPARSE_DATA \
	FID_HostProject_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlLibrary_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlLibrary_h_30_ACCESSORS \
	FID_HostProject_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlLibrary_h_30_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlLibrary_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONNECTMYSQL_API UClass* StaticClass<class UMySqlLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ConnectMysql_Source_ConnectMysql_Public_MySqlLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
