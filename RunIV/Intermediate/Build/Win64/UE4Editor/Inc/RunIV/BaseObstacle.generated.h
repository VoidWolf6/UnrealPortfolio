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
struct FVector;
struct FHitResult;
#ifdef RUNIV_BaseObstacle_generated_h
#error "BaseObstacle.generated.h already included, missing '#pragma once' in BaseObstacle.h"
#endif
#define RUNIV_BaseObstacle_generated_h

#define RunIV_Source_RunIV_BaseObstacle_h_12_SPARSE_DATA
#define RunIV_Source_RunIV_BaseObstacle_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnObstacleHit);


#define RunIV_Source_RunIV_BaseObstacle_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnObstacleHit);


#define RunIV_Source_RunIV_BaseObstacle_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseObstacle(); \
	friend struct Z_Construct_UClass_ABaseObstacle_Statics; \
public: \
	DECLARE_CLASS(ABaseObstacle, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RunIV"), NO_API) \
	DECLARE_SERIALIZER(ABaseObstacle)


#define RunIV_Source_RunIV_BaseObstacle_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABaseObstacle(); \
	friend struct Z_Construct_UClass_ABaseObstacle_Statics; \
public: \
	DECLARE_CLASS(ABaseObstacle, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RunIV"), NO_API) \
	DECLARE_SERIALIZER(ABaseObstacle)


#define RunIV_Source_RunIV_BaseObstacle_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseObstacle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseObstacle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseObstacle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseObstacle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseObstacle(ABaseObstacle&&); \
	NO_API ABaseObstacle(const ABaseObstacle&); \
public:


#define RunIV_Source_RunIV_BaseObstacle_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseObstacle(ABaseObstacle&&); \
	NO_API ABaseObstacle(const ABaseObstacle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseObstacle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseObstacle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseObstacle)


#define RunIV_Source_RunIV_BaseObstacle_h_12_PRIVATE_PROPERTY_OFFSET
#define RunIV_Source_RunIV_BaseObstacle_h_9_PROLOG
#define RunIV_Source_RunIV_BaseObstacle_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RunIV_Source_RunIV_BaseObstacle_h_12_PRIVATE_PROPERTY_OFFSET \
	RunIV_Source_RunIV_BaseObstacle_h_12_SPARSE_DATA \
	RunIV_Source_RunIV_BaseObstacle_h_12_RPC_WRAPPERS \
	RunIV_Source_RunIV_BaseObstacle_h_12_INCLASS \
	RunIV_Source_RunIV_BaseObstacle_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RunIV_Source_RunIV_BaseObstacle_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RunIV_Source_RunIV_BaseObstacle_h_12_PRIVATE_PROPERTY_OFFSET \
	RunIV_Source_RunIV_BaseObstacle_h_12_SPARSE_DATA \
	RunIV_Source_RunIV_BaseObstacle_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	RunIV_Source_RunIV_BaseObstacle_h_12_INCLASS_NO_PURE_DECLS \
	RunIV_Source_RunIV_BaseObstacle_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNIV_API UClass* StaticClass<class ABaseObstacle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RunIV_Source_RunIV_BaseObstacle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
