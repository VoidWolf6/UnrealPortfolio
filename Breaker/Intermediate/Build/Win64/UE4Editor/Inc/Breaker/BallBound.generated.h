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
#ifdef BREAKER_BallBound_generated_h
#error "BallBound.generated.h already included, missing '#pragma once' in BallBound.h"
#endif
#define BREAKER_BallBound_generated_h

#define Breaker_Source_Breaker_BallBound_h_15_SPARSE_DATA
#define Breaker_Source_Breaker_BallBound_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Breaker_Source_Breaker_BallBound_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Breaker_Source_Breaker_BallBound_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABallBound(); \
	friend struct Z_Construct_UClass_ABallBound_Statics; \
public: \
	DECLARE_CLASS(ABallBound, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Breaker"), NO_API) \
	DECLARE_SERIALIZER(ABallBound)


#define Breaker_Source_Breaker_BallBound_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABallBound(); \
	friend struct Z_Construct_UClass_ABallBound_Statics; \
public: \
	DECLARE_CLASS(ABallBound, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Breaker"), NO_API) \
	DECLARE_SERIALIZER(ABallBound)


#define Breaker_Source_Breaker_BallBound_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABallBound(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABallBound) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABallBound); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABallBound); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABallBound(ABallBound&&); \
	NO_API ABallBound(const ABallBound&); \
public:


#define Breaker_Source_Breaker_BallBound_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABallBound(ABallBound&&); \
	NO_API ABallBound(const ABallBound&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABallBound); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABallBound); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABallBound)


#define Breaker_Source_Breaker_BallBound_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__boxCollider() { return STRUCT_OFFSET(ABallBound, boxCollider); }


#define Breaker_Source_Breaker_BallBound_h_12_PROLOG
#define Breaker_Source_Breaker_BallBound_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Breaker_Source_Breaker_BallBound_h_15_PRIVATE_PROPERTY_OFFSET \
	Breaker_Source_Breaker_BallBound_h_15_SPARSE_DATA \
	Breaker_Source_Breaker_BallBound_h_15_RPC_WRAPPERS \
	Breaker_Source_Breaker_BallBound_h_15_INCLASS \
	Breaker_Source_Breaker_BallBound_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Breaker_Source_Breaker_BallBound_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Breaker_Source_Breaker_BallBound_h_15_PRIVATE_PROPERTY_OFFSET \
	Breaker_Source_Breaker_BallBound_h_15_SPARSE_DATA \
	Breaker_Source_Breaker_BallBound_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Breaker_Source_Breaker_BallBound_h_15_INCLASS_NO_PURE_DECLS \
	Breaker_Source_Breaker_BallBound_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BREAKER_API UClass* StaticClass<class ABallBound>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Breaker_Source_Breaker_BallBound_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
