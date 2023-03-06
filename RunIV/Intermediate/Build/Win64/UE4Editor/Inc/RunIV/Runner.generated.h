// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RUNIV_Runner_generated_h
#error "Runner.generated.h already included, missing '#pragma once' in Runner.h"
#endif
#define RUNIV_Runner_generated_h

#define RunIV_Source_RunIV_Runner_h_12_SPARSE_DATA
#define RunIV_Source_RunIV_Runner_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddCoin); \
	DECLARE_FUNCTION(execDrop); \
	DECLARE_FUNCTION(execChangeLaneRight); \
	DECLARE_FUNCTION(execChangeLaneLeft); \
	DECLARE_FUNCTION(execOnDeath); \
	DECLARE_FUNCTION(execDeath); \
	DECLARE_FUNCTION(execSwitchLaneFinished); \
	DECLARE_FUNCTION(execSwitchLaneUpdate);


#define RunIV_Source_RunIV_Runner_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddCoin); \
	DECLARE_FUNCTION(execDrop); \
	DECLARE_FUNCTION(execChangeLaneRight); \
	DECLARE_FUNCTION(execChangeLaneLeft); \
	DECLARE_FUNCTION(execOnDeath); \
	DECLARE_FUNCTION(execDeath); \
	DECLARE_FUNCTION(execSwitchLaneFinished); \
	DECLARE_FUNCTION(execSwitchLaneUpdate);


#define RunIV_Source_RunIV_Runner_h_12_EVENT_PARMS
#define RunIV_Source_RunIV_Runner_h_12_CALLBACK_WRAPPERS
#define RunIV_Source_RunIV_Runner_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARunner(); \
	friend struct Z_Construct_UClass_ARunner_Statics; \
public: \
	DECLARE_CLASS(ARunner, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RunIV"), NO_API) \
	DECLARE_SERIALIZER(ARunner)


#define RunIV_Source_RunIV_Runner_h_12_INCLASS \
private: \
	static void StaticRegisterNativesARunner(); \
	friend struct Z_Construct_UClass_ARunner_Statics; \
public: \
	DECLARE_CLASS(ARunner, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RunIV"), NO_API) \
	DECLARE_SERIALIZER(ARunner)


#define RunIV_Source_RunIV_Runner_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARunner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARunner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARunner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARunner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARunner(ARunner&&); \
	NO_API ARunner(const ARunner&); \
public:


#define RunIV_Source_RunIV_Runner_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARunner(ARunner&&); \
	NO_API ARunner(const ARunner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARunner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARunner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARunner)


#define RunIV_Source_RunIV_Runner_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraArm() { return STRUCT_OFFSET(ARunner, CameraArm); } \
	FORCEINLINE static uint32 __PPO__CameraBase() { return STRUCT_OFFSET(ARunner, CameraBase); } \
	FORCEINLINE static uint32 __PPO__GameMode() { return STRUCT_OFFSET(ARunner, GameMode); } \
	FORCEINLINE static uint32 __PPO__RestartTimerHandle() { return STRUCT_OFFSET(ARunner, RestartTimerHandle); } \
	FORCEINLINE static uint32 __PPO__dead() { return STRUCT_OFFSET(ARunner, dead); }


#define RunIV_Source_RunIV_Runner_h_9_PROLOG \
	RunIV_Source_RunIV_Runner_h_12_EVENT_PARMS


#define RunIV_Source_RunIV_Runner_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RunIV_Source_RunIV_Runner_h_12_PRIVATE_PROPERTY_OFFSET \
	RunIV_Source_RunIV_Runner_h_12_SPARSE_DATA \
	RunIV_Source_RunIV_Runner_h_12_RPC_WRAPPERS \
	RunIV_Source_RunIV_Runner_h_12_CALLBACK_WRAPPERS \
	RunIV_Source_RunIV_Runner_h_12_INCLASS \
	RunIV_Source_RunIV_Runner_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RunIV_Source_RunIV_Runner_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RunIV_Source_RunIV_Runner_h_12_PRIVATE_PROPERTY_OFFSET \
	RunIV_Source_RunIV_Runner_h_12_SPARSE_DATA \
	RunIV_Source_RunIV_Runner_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	RunIV_Source_RunIV_Runner_h_12_CALLBACK_WRAPPERS \
	RunIV_Source_RunIV_Runner_h_12_INCLASS_NO_PURE_DECLS \
	RunIV_Source_RunIV_Runner_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNIV_API UClass* StaticClass<class ARunner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RunIV_Source_RunIV_Runner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
