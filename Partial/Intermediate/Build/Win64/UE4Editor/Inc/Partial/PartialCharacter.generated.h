// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PARTIAL_PartialCharacter_generated_h
#error "PartialCharacter.generated.h already included, missing '#pragma once' in PartialCharacter.h"
#endif
#define PARTIAL_PartialCharacter_generated_h

#define Partial_Source_Partial_PartialCharacter_h_12_SPARSE_DATA
#define Partial_Source_Partial_PartialCharacter_h_12_RPC_WRAPPERS
#define Partial_Source_Partial_PartialCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Partial_Source_Partial_PartialCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPartialCharacter(); \
	friend struct Z_Construct_UClass_APartialCharacter_Statics; \
public: \
	DECLARE_CLASS(APartialCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Partial"), NO_API) \
	DECLARE_SERIALIZER(APartialCharacter)


#define Partial_Source_Partial_PartialCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPartialCharacter(); \
	friend struct Z_Construct_UClass_APartialCharacter_Statics; \
public: \
	DECLARE_CLASS(APartialCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Partial"), NO_API) \
	DECLARE_SERIALIZER(APartialCharacter)


#define Partial_Source_Partial_PartialCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APartialCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APartialCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APartialCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APartialCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APartialCharacter(APartialCharacter&&); \
	NO_API APartialCharacter(const APartialCharacter&); \
public:


#define Partial_Source_Partial_PartialCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APartialCharacter(APartialCharacter&&); \
	NO_API APartialCharacter(const APartialCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APartialCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APartialCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APartialCharacter)


#define Partial_Source_Partial_PartialCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(APartialCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(APartialCharacter, FollowCamera); }


#define Partial_Source_Partial_PartialCharacter_h_9_PROLOG
#define Partial_Source_Partial_PartialCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Partial_Source_Partial_PartialCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Partial_Source_Partial_PartialCharacter_h_12_SPARSE_DATA \
	Partial_Source_Partial_PartialCharacter_h_12_RPC_WRAPPERS \
	Partial_Source_Partial_PartialCharacter_h_12_INCLASS \
	Partial_Source_Partial_PartialCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Partial_Source_Partial_PartialCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Partial_Source_Partial_PartialCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Partial_Source_Partial_PartialCharacter_h_12_SPARSE_DATA \
	Partial_Source_Partial_PartialCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Partial_Source_Partial_PartialCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Partial_Source_Partial_PartialCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARTIAL_API UClass* StaticClass<class APartialCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Partial_Source_Partial_PartialCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
