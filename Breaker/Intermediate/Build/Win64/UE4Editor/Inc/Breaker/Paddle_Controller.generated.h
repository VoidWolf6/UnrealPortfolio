// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BREAKER_Paddle_Controller_generated_h
#error "Paddle_Controller.generated.h already included, missing '#pragma once' in Paddle_Controller.h"
#endif
#define BREAKER_Paddle_Controller_generated_h

#define Breaker_Source_Breaker_Paddle_Controller_h_15_SPARSE_DATA
#define Breaker_Source_Breaker_Paddle_Controller_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetupInputComponent);


#define Breaker_Source_Breaker_Paddle_Controller_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetupInputComponent);


#define Breaker_Source_Breaker_Paddle_Controller_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPaddle_Controller(); \
	friend struct Z_Construct_UClass_APaddle_Controller_Statics; \
public: \
	DECLARE_CLASS(APaddle_Controller, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Breaker"), NO_API) \
	DECLARE_SERIALIZER(APaddle_Controller)


#define Breaker_Source_Breaker_Paddle_Controller_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPaddle_Controller(); \
	friend struct Z_Construct_UClass_APaddle_Controller_Statics; \
public: \
	DECLARE_CLASS(APaddle_Controller, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Breaker"), NO_API) \
	DECLARE_SERIALIZER(APaddle_Controller)


#define Breaker_Source_Breaker_Paddle_Controller_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APaddle_Controller(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APaddle_Controller) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaddle_Controller); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaddle_Controller); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaddle_Controller(APaddle_Controller&&); \
	NO_API APaddle_Controller(const APaddle_Controller&); \
public:


#define Breaker_Source_Breaker_Paddle_Controller_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaddle_Controller(APaddle_Controller&&); \
	NO_API APaddle_Controller(const APaddle_Controller&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaddle_Controller); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaddle_Controller); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APaddle_Controller)


#define Breaker_Source_Breaker_Paddle_Controller_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BallObject() { return STRUCT_OFFSET(APaddle_Controller, BallObject); }


#define Breaker_Source_Breaker_Paddle_Controller_h_12_PROLOG
#define Breaker_Source_Breaker_Paddle_Controller_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Breaker_Source_Breaker_Paddle_Controller_h_15_PRIVATE_PROPERTY_OFFSET \
	Breaker_Source_Breaker_Paddle_Controller_h_15_SPARSE_DATA \
	Breaker_Source_Breaker_Paddle_Controller_h_15_RPC_WRAPPERS \
	Breaker_Source_Breaker_Paddle_Controller_h_15_INCLASS \
	Breaker_Source_Breaker_Paddle_Controller_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Breaker_Source_Breaker_Paddle_Controller_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Breaker_Source_Breaker_Paddle_Controller_h_15_PRIVATE_PROPERTY_OFFSET \
	Breaker_Source_Breaker_Paddle_Controller_h_15_SPARSE_DATA \
	Breaker_Source_Breaker_Paddle_Controller_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Breaker_Source_Breaker_Paddle_Controller_h_15_INCLASS_NO_PURE_DECLS \
	Breaker_Source_Breaker_Paddle_Controller_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BREAKER_API UClass* StaticClass<class APaddle_Controller>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Breaker_Source_Breaker_Paddle_Controller_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
