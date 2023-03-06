// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFloorTile;
#ifdef RUNIV_RunIVGameModeBase_generated_h
#error "RunIVGameModeBase.generated.h already included, missing '#pragma once' in RunIVGameModeBase.h"
#endif
#define RUNIV_RunIVGameModeBase_generated_h

#define RunIV_Source_RunIV_RunIVGameModeBase_h_18_SPARSE_DATA
#define RunIV_Source_RunIV_RunIVGameModeBase_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddCoin); \
	DECLARE_FUNCTION(execAddFloorTile); \
	DECLARE_FUNCTION(execCreateInitialFloorTiles);


#define RunIV_Source_RunIV_RunIVGameModeBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddCoin); \
	DECLARE_FUNCTION(execAddFloorTile); \
	DECLARE_FUNCTION(execCreateInitialFloorTiles);


#define RunIV_Source_RunIV_RunIVGameModeBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARunIVGameModeBase(); \
	friend struct Z_Construct_UClass_ARunIVGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ARunIVGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/RunIV"), NO_API) \
	DECLARE_SERIALIZER(ARunIVGameModeBase)


#define RunIV_Source_RunIV_RunIVGameModeBase_h_18_INCLASS \
private: \
	static void StaticRegisterNativesARunIVGameModeBase(); \
	friend struct Z_Construct_UClass_ARunIVGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ARunIVGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/RunIV"), NO_API) \
	DECLARE_SERIALIZER(ARunIVGameModeBase)


#define RunIV_Source_RunIV_RunIVGameModeBase_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARunIVGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARunIVGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARunIVGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARunIVGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARunIVGameModeBase(ARunIVGameModeBase&&); \
	NO_API ARunIVGameModeBase(const ARunIVGameModeBase&); \
public:


#define RunIV_Source_RunIV_RunIVGameModeBase_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARunIVGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARunIVGameModeBase(ARunIVGameModeBase&&); \
	NO_API ARunIVGameModeBase(const ARunIVGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARunIVGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARunIVGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARunIVGameModeBase)


#define RunIV_Source_RunIV_RunIVGameModeBase_h_18_PRIVATE_PROPERTY_OFFSET
#define RunIV_Source_RunIV_RunIVGameModeBase_h_15_PROLOG
#define RunIV_Source_RunIV_RunIVGameModeBase_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RunIV_Source_RunIV_RunIVGameModeBase_h_18_PRIVATE_PROPERTY_OFFSET \
	RunIV_Source_RunIV_RunIVGameModeBase_h_18_SPARSE_DATA \
	RunIV_Source_RunIV_RunIVGameModeBase_h_18_RPC_WRAPPERS \
	RunIV_Source_RunIV_RunIVGameModeBase_h_18_INCLASS \
	RunIV_Source_RunIV_RunIVGameModeBase_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RunIV_Source_RunIV_RunIVGameModeBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RunIV_Source_RunIV_RunIVGameModeBase_h_18_PRIVATE_PROPERTY_OFFSET \
	RunIV_Source_RunIV_RunIVGameModeBase_h_18_SPARSE_DATA \
	RunIV_Source_RunIV_RunIVGameModeBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	RunIV_Source_RunIV_RunIVGameModeBase_h_18_INCLASS_NO_PURE_DECLS \
	RunIV_Source_RunIV_RunIVGameModeBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNIV_API UClass* StaticClass<class ARunIVGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RunIV_Source_RunIV_RunIVGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
