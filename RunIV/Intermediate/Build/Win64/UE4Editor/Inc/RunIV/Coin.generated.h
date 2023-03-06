// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef RUNIV_Coin_generated_h
#error "Coin.generated.h already included, missing '#pragma once' in Coin.h"
#endif
#define RUNIV_Coin_generated_h

#define RunIV_Source_RunIV_Coin_h_12_SPARSE_DATA
#define RunIV_Source_RunIV_Coin_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSphereOverlap);


#define RunIV_Source_RunIV_Coin_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSphereOverlap);


#define RunIV_Source_RunIV_Coin_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACoin(); \
	friend struct Z_Construct_UClass_ACoin_Statics; \
public: \
	DECLARE_CLASS(ACoin, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RunIV"), NO_API) \
	DECLARE_SERIALIZER(ACoin)


#define RunIV_Source_RunIV_Coin_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACoin(); \
	friend struct Z_Construct_UClass_ACoin_Statics; \
public: \
	DECLARE_CLASS(ACoin, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RunIV"), NO_API) \
	DECLARE_SERIALIZER(ACoin)


#define RunIV_Source_RunIV_Coin_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACoin(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACoin) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoin); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoin); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACoin(ACoin&&); \
	NO_API ACoin(const ACoin&); \
public:


#define RunIV_Source_RunIV_Coin_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACoin(ACoin&&); \
	NO_API ACoin(const ACoin&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoin); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoin); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACoin)


#define RunIV_Source_RunIV_Coin_h_12_PRIVATE_PROPERTY_OFFSET
#define RunIV_Source_RunIV_Coin_h_9_PROLOG
#define RunIV_Source_RunIV_Coin_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RunIV_Source_RunIV_Coin_h_12_PRIVATE_PROPERTY_OFFSET \
	RunIV_Source_RunIV_Coin_h_12_SPARSE_DATA \
	RunIV_Source_RunIV_Coin_h_12_RPC_WRAPPERS \
	RunIV_Source_RunIV_Coin_h_12_INCLASS \
	RunIV_Source_RunIV_Coin_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RunIV_Source_RunIV_Coin_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RunIV_Source_RunIV_Coin_h_12_PRIVATE_PROPERTY_OFFSET \
	RunIV_Source_RunIV_Coin_h_12_SPARSE_DATA \
	RunIV_Source_RunIV_Coin_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	RunIV_Source_RunIV_Coin_h_12_INCLASS_NO_PURE_DECLS \
	RunIV_Source_RunIV_Coin_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNIV_API UClass* StaticClass<class ACoin>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RunIV_Source_RunIV_Coin_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
