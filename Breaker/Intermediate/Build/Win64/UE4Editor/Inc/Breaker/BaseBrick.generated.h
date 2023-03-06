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
#ifdef BREAKER_BaseBrick_generated_h
#error "BaseBrick.generated.h already included, missing '#pragma once' in BaseBrick.h"
#endif
#define BREAKER_BaseBrick_generated_h

#define Breaker_Source_Breaker_BaseBrick_h_14_SPARSE_DATA
#define Breaker_Source_Breaker_BaseBrick_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Breaker_Source_Breaker_BaseBrick_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Breaker_Source_Breaker_BaseBrick_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseBrick(); \
	friend struct Z_Construct_UClass_ABaseBrick_Statics; \
public: \
	DECLARE_CLASS(ABaseBrick, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Breaker"), NO_API) \
	DECLARE_SERIALIZER(ABaseBrick)


#define Breaker_Source_Breaker_BaseBrick_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABaseBrick(); \
	friend struct Z_Construct_UClass_ABaseBrick_Statics; \
public: \
	DECLARE_CLASS(ABaseBrick, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Breaker"), NO_API) \
	DECLARE_SERIALIZER(ABaseBrick)


#define Breaker_Source_Breaker_BaseBrick_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseBrick(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseBrick) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseBrick); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseBrick); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseBrick(ABaseBrick&&); \
	NO_API ABaseBrick(const ABaseBrick&); \
public:


#define Breaker_Source_Breaker_BaseBrick_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseBrick(ABaseBrick&&); \
	NO_API ABaseBrick(const ABaseBrick&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseBrick); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseBrick); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseBrick)


#define Breaker_Source_Breaker_BaseBrick_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__brickMesh() { return STRUCT_OFFSET(ABaseBrick, brickMesh); } \
	FORCEINLINE static uint32 __PPO__boxCollider() { return STRUCT_OFFSET(ABaseBrick, boxCollider); }


#define Breaker_Source_Breaker_BaseBrick_h_11_PROLOG
#define Breaker_Source_Breaker_BaseBrick_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Breaker_Source_Breaker_BaseBrick_h_14_PRIVATE_PROPERTY_OFFSET \
	Breaker_Source_Breaker_BaseBrick_h_14_SPARSE_DATA \
	Breaker_Source_Breaker_BaseBrick_h_14_RPC_WRAPPERS \
	Breaker_Source_Breaker_BaseBrick_h_14_INCLASS \
	Breaker_Source_Breaker_BaseBrick_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Breaker_Source_Breaker_BaseBrick_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Breaker_Source_Breaker_BaseBrick_h_14_PRIVATE_PROPERTY_OFFSET \
	Breaker_Source_Breaker_BaseBrick_h_14_SPARSE_DATA \
	Breaker_Source_Breaker_BaseBrick_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Breaker_Source_Breaker_BaseBrick_h_14_INCLASS_NO_PURE_DECLS \
	Breaker_Source_Breaker_BaseBrick_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BREAKER_API UClass* StaticClass<class ABaseBrick>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Breaker_Source_Breaker_BaseBrick_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
