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
#ifdef PARTIAL_MyNewCharacter_generated_h
#error "MyNewCharacter.generated.h already included, missing '#pragma once' in MyNewCharacter.h"
#endif
#define PARTIAL_MyNewCharacter_generated_h

#define Partial_Source_Partial_MyNewCharacter_h_20_SPARSE_DATA
#define Partial_Source_Partial_MyNewCharacter_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define Partial_Source_Partial_MyNewCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define Partial_Source_Partial_MyNewCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyNewCharacter(); \
	friend struct Z_Construct_UClass_AMyNewCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyNewCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Partial"), NO_API) \
	DECLARE_SERIALIZER(AMyNewCharacter)


#define Partial_Source_Partial_MyNewCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAMyNewCharacter(); \
	friend struct Z_Construct_UClass_AMyNewCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyNewCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Partial"), NO_API) \
	DECLARE_SERIALIZER(AMyNewCharacter)


#define Partial_Source_Partial_MyNewCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyNewCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyNewCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyNewCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyNewCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyNewCharacter(AMyNewCharacter&&); \
	NO_API AMyNewCharacter(const AMyNewCharacter&); \
public:


#define Partial_Source_Partial_MyNewCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyNewCharacter(AMyNewCharacter&&); \
	NO_API AMyNewCharacter(const AMyNewCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyNewCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyNewCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyNewCharacter)


#define Partial_Source_Partial_MyNewCharacter_h_20_PRIVATE_PROPERTY_OFFSET
#define Partial_Source_Partial_MyNewCharacter_h_17_PROLOG
#define Partial_Source_Partial_MyNewCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Partial_Source_Partial_MyNewCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	Partial_Source_Partial_MyNewCharacter_h_20_SPARSE_DATA \
	Partial_Source_Partial_MyNewCharacter_h_20_RPC_WRAPPERS \
	Partial_Source_Partial_MyNewCharacter_h_20_INCLASS \
	Partial_Source_Partial_MyNewCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Partial_Source_Partial_MyNewCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Partial_Source_Partial_MyNewCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	Partial_Source_Partial_MyNewCharacter_h_20_SPARSE_DATA \
	Partial_Source_Partial_MyNewCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Partial_Source_Partial_MyNewCharacter_h_20_INCLASS_NO_PURE_DECLS \
	Partial_Source_Partial_MyNewCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARTIAL_API UClass* StaticClass<class AMyNewCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Partial_Source_Partial_MyNewCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
