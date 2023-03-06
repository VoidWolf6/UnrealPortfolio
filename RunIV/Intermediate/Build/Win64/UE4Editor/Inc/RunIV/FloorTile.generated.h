// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UArrowComponent;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef RUNIV_FloorTile_generated_h
#error "FloorTile.generated.h already included, missing '#pragma once' in FloorTile.h"
#endif
#define RUNIV_FloorTile_generated_h

#define RunIV_Source_RunIV_FloorTile_h_20_SPARSE_DATA
#define RunIV_Source_RunIV_FloorTile_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDestroyTile); \
	DECLARE_FUNCTION(execSpawnInLane); \
	DECLARE_FUNCTION(execOnTriggerBoxOverlap); \
	DECLARE_FUNCTION(execItemSpawn);


#define RunIV_Source_RunIV_FloorTile_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDestroyTile); \
	DECLARE_FUNCTION(execSpawnInLane); \
	DECLARE_FUNCTION(execOnTriggerBoxOverlap); \
	DECLARE_FUNCTION(execItemSpawn);


#define RunIV_Source_RunIV_FloorTile_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFloorTile(); \
	friend struct Z_Construct_UClass_AFloorTile_Statics; \
public: \
	DECLARE_CLASS(AFloorTile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RunIV"), NO_API) \
	DECLARE_SERIALIZER(AFloorTile)


#define RunIV_Source_RunIV_FloorTile_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAFloorTile(); \
	friend struct Z_Construct_UClass_AFloorTile_Statics; \
public: \
	DECLARE_CLASS(AFloorTile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RunIV"), NO_API) \
	DECLARE_SERIALIZER(AFloorTile)


#define RunIV_Source_RunIV_FloorTile_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFloorTile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFloorTile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFloorTile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFloorTile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFloorTile(AFloorTile&&); \
	NO_API AFloorTile(const AFloorTile&); \
public:


#define RunIV_Source_RunIV_FloorTile_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFloorTile(AFloorTile&&); \
	NO_API AFloorTile(const AFloorTile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFloorTile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFloorTile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFloorTile)


#define RunIV_Source_RunIV_FloorTile_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GameMode() { return STRUCT_OFFSET(AFloorTile, GameMode); } \
	FORCEINLINE static uint32 __PPO__DestroyHandle() { return STRUCT_OFFSET(AFloorTile, DestroyHandle); }


#define RunIV_Source_RunIV_FloorTile_h_17_PROLOG
#define RunIV_Source_RunIV_FloorTile_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RunIV_Source_RunIV_FloorTile_h_20_PRIVATE_PROPERTY_OFFSET \
	RunIV_Source_RunIV_FloorTile_h_20_SPARSE_DATA \
	RunIV_Source_RunIV_FloorTile_h_20_RPC_WRAPPERS \
	RunIV_Source_RunIV_FloorTile_h_20_INCLASS \
	RunIV_Source_RunIV_FloorTile_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RunIV_Source_RunIV_FloorTile_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RunIV_Source_RunIV_FloorTile_h_20_PRIVATE_PROPERTY_OFFSET \
	RunIV_Source_RunIV_FloorTile_h_20_SPARSE_DATA \
	RunIV_Source_RunIV_FloorTile_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	RunIV_Source_RunIV_FloorTile_h_20_INCLASS_NO_PURE_DECLS \
	RunIV_Source_RunIV_FloorTile_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNIV_API UClass* StaticClass<class AFloorTile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RunIV_Source_RunIV_FloorTile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
