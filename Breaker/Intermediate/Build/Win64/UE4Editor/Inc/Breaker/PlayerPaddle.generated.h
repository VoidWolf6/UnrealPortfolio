// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BREAKER_PlayerPaddle_generated_h
#error "PlayerPaddle.generated.h already included, missing '#pragma once' in PlayerPaddle.h"
#endif
#define BREAKER_PlayerPaddle_generated_h

#define Breaker_Source_Breaker_PlayerPaddle_h_14_SPARSE_DATA
#define Breaker_Source_Breaker_PlayerPaddle_h_14_RPC_WRAPPERS
#define Breaker_Source_Breaker_PlayerPaddle_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Breaker_Source_Breaker_PlayerPaddle_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerPaddle(); \
	friend struct Z_Construct_UClass_APlayerPaddle_Statics; \
public: \
	DECLARE_CLASS(APlayerPaddle, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Breaker"), NO_API) \
	DECLARE_SERIALIZER(APlayerPaddle)


#define Breaker_Source_Breaker_PlayerPaddle_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerPaddle(); \
	friend struct Z_Construct_UClass_APlayerPaddle_Statics; \
public: \
	DECLARE_CLASS(APlayerPaddle, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Breaker"), NO_API) \
	DECLARE_SERIALIZER(APlayerPaddle)


#define Breaker_Source_Breaker_PlayerPaddle_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerPaddle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerPaddle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPaddle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPaddle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPaddle(APlayerPaddle&&); \
	NO_API APlayerPaddle(const APlayerPaddle&); \
public:


#define Breaker_Source_Breaker_PlayerPaddle_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPaddle(APlayerPaddle&&); \
	NO_API APlayerPaddle(const APlayerPaddle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPaddle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPaddle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerPaddle)


#define Breaker_Source_Breaker_PlayerPaddle_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__static_Paddle() { return STRUCT_OFFSET(APlayerPaddle, static_Paddle); } \
	FORCEINLINE static uint32 __PPO__movingPawn() { return STRUCT_OFFSET(APlayerPaddle, movingPawn); }


#define Breaker_Source_Breaker_PlayerPaddle_h_11_PROLOG
#define Breaker_Source_Breaker_PlayerPaddle_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Breaker_Source_Breaker_PlayerPaddle_h_14_PRIVATE_PROPERTY_OFFSET \
	Breaker_Source_Breaker_PlayerPaddle_h_14_SPARSE_DATA \
	Breaker_Source_Breaker_PlayerPaddle_h_14_RPC_WRAPPERS \
	Breaker_Source_Breaker_PlayerPaddle_h_14_INCLASS \
	Breaker_Source_Breaker_PlayerPaddle_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Breaker_Source_Breaker_PlayerPaddle_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Breaker_Source_Breaker_PlayerPaddle_h_14_PRIVATE_PROPERTY_OFFSET \
	Breaker_Source_Breaker_PlayerPaddle_h_14_SPARSE_DATA \
	Breaker_Source_Breaker_PlayerPaddle_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Breaker_Source_Breaker_PlayerPaddle_h_14_INCLASS_NO_PURE_DECLS \
	Breaker_Source_Breaker_PlayerPaddle_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BREAKER_API UClass* StaticClass<class APlayerPaddle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Breaker_Source_Breaker_PlayerPaddle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
