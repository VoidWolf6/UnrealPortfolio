// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMeshComponent;
#ifdef BREAKER_MovingBall_generated_h
#error "MovingBall.generated.h already included, missing '#pragma once' in MovingBall.h"
#endif
#define BREAKER_MovingBall_generated_h

#define Breaker_Source_Breaker_MovingBall_h_14_SPARSE_DATA
#define Breaker_Source_Breaker_MovingBall_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBall);


#define Breaker_Source_Breaker_MovingBall_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBall);


#define Breaker_Source_Breaker_MovingBall_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMovingBall(); \
	friend struct Z_Construct_UClass_AMovingBall_Statics; \
public: \
	DECLARE_CLASS(AMovingBall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Breaker"), NO_API) \
	DECLARE_SERIALIZER(AMovingBall)


#define Breaker_Source_Breaker_MovingBall_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMovingBall(); \
	friend struct Z_Construct_UClass_AMovingBall_Statics; \
public: \
	DECLARE_CLASS(AMovingBall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Breaker"), NO_API) \
	DECLARE_SERIALIZER(AMovingBall)


#define Breaker_Source_Breaker_MovingBall_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMovingBall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMovingBall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovingBall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovingBall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMovingBall(AMovingBall&&); \
	NO_API AMovingBall(const AMovingBall&); \
public:


#define Breaker_Source_Breaker_MovingBall_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMovingBall(AMovingBall&&); \
	NO_API AMovingBall(const AMovingBall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovingBall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovingBall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMovingBall)


#define Breaker_Source_Breaker_MovingBall_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ball_Mesh() { return STRUCT_OFFSET(AMovingBall, ball_Mesh); } \
	FORCEINLINE static uint32 __PPO__ball_Movement() { return STRUCT_OFFSET(AMovingBall, ball_Movement); }


#define Breaker_Source_Breaker_MovingBall_h_11_PROLOG
#define Breaker_Source_Breaker_MovingBall_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Breaker_Source_Breaker_MovingBall_h_14_PRIVATE_PROPERTY_OFFSET \
	Breaker_Source_Breaker_MovingBall_h_14_SPARSE_DATA \
	Breaker_Source_Breaker_MovingBall_h_14_RPC_WRAPPERS \
	Breaker_Source_Breaker_MovingBall_h_14_INCLASS \
	Breaker_Source_Breaker_MovingBall_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Breaker_Source_Breaker_MovingBall_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Breaker_Source_Breaker_MovingBall_h_14_PRIVATE_PROPERTY_OFFSET \
	Breaker_Source_Breaker_MovingBall_h_14_SPARSE_DATA \
	Breaker_Source_Breaker_MovingBall_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Breaker_Source_Breaker_MovingBall_h_14_INCLASS_NO_PURE_DECLS \
	Breaker_Source_Breaker_MovingBall_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BREAKER_API UClass* StaticClass<class AMovingBall>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Breaker_Source_Breaker_MovingBall_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
