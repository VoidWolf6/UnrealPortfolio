// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Breaker/PlayerPaddle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerPaddle() {}
// Cross Module References
	BREAKER_API UClass* Z_Construct_UClass_APlayerPaddle_NoRegister();
	BREAKER_API UClass* Z_Construct_UClass_APlayerPaddle();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Breaker();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
// End Cross Module References
	void APlayerPaddle::StaticRegisterNativesAPlayerPaddle()
	{
	}
	UClass* Z_Construct_UClass_APlayerPaddle_NoRegister()
	{
		return APlayerPaddle::StaticClass();
	}
	struct Z_Construct_UClass_APlayerPaddle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_static_Paddle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_static_Paddle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_movingPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_movingPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerPaddle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Breaker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPaddle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//has to be forward declared \n" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerPaddle.h" },
		{ "ModuleRelativePath", "PlayerPaddle.h" },
		{ "ToolTip", "has to be forward declared" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPaddle_Statics::NewProp_static_Paddle_MetaData[] = {
		{ "Category", "PlayerPaddle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerPaddle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPaddle_Statics::NewProp_static_Paddle = { "static_Paddle", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPaddle, static_Paddle), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerPaddle_Statics::NewProp_static_Paddle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPaddle_Statics::NewProp_static_Paddle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPaddle_Statics::NewProp_movingPawn_MetaData[] = {
		{ "Category", "PlayerPaddle" },
		{ "Comment", "//variable for the paddle's mesh\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerPaddle.h" },
		{ "ToolTip", "variable for the paddle's mesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPaddle_Statics::NewProp_movingPawn = { "movingPawn", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPaddle, movingPawn), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerPaddle_Statics::NewProp_movingPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPaddle_Statics::NewProp_movingPawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerPaddle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPaddle_Statics::NewProp_static_Paddle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPaddle_Statics::NewProp_movingPawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerPaddle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerPaddle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerPaddle_Statics::ClassParams = {
		&APlayerPaddle::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlayerPaddle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPaddle_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerPaddle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPaddle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerPaddle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerPaddle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerPaddle, 1491188335);
	template<> BREAKER_API UClass* StaticClass<APlayerPaddle>()
	{
		return APlayerPaddle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerPaddle(Z_Construct_UClass_APlayerPaddle, &APlayerPaddle::StaticClass, TEXT("/Script/Breaker"), TEXT("APlayerPaddle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerPaddle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
