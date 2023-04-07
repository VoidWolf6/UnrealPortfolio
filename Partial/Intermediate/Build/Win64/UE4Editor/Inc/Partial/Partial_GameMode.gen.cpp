// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Partial/Partial_GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePartial_GameMode() {}
// Cross Module References
	PARTIAL_API UClass* Z_Construct_UClass_APartial_GameMode_NoRegister();
	PARTIAL_API UClass* Z_Construct_UClass_APartial_GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_Partial();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	void APartial_GameMode::StaticRegisterNativesAPartial_GameMode()
	{
	}
	UClass* Z_Construct_UClass_APartial_GameMode_NoRegister()
	{
		return APartial_GameMode::StaticClass();
	}
	struct Z_Construct_UClass_APartial_GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerRecharger_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlayerRecharger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawn_X_Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spawn_X_Min;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawn_X_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spawn_X_Max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawn_Y_Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spawn_Y_Min;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawn_Y_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spawn_Y_Max;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APartial_GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_Partial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartial_GameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Partial_GameMode.h" },
		{ "ModuleRelativePath", "Partial_GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartial_GameMode_Statics::NewProp_PlayerRecharger_MetaData[] = {
		{ "Category", "Partial_GameMode" },
		{ "ModuleRelativePath", "Partial_GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APartial_GameMode_Statics::NewProp_PlayerRecharger = { "PlayerRecharger", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APartial_GameMode, PlayerRecharger), Z_Construct_UClass_APawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APartial_GameMode_Statics::NewProp_PlayerRecharger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APartial_GameMode_Statics::NewProp_PlayerRecharger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartial_GameMode_Statics::NewProp_Spawn_X_Min_MetaData[] = {
		{ "Category", "Partial_GameMode" },
		{ "Comment", "//how high are we spawning our player?\n" },
		{ "ModuleRelativePath", "Partial_GameMode.h" },
		{ "ToolTip", "how high are we spawning our player?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APartial_GameMode_Statics::NewProp_Spawn_X_Min = { "Spawn_X_Min", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APartial_GameMode, Spawn_X_Min), METADATA_PARAMS(Z_Construct_UClass_APartial_GameMode_Statics::NewProp_Spawn_X_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APartial_GameMode_Statics::NewProp_Spawn_X_Min_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartial_GameMode_Statics::NewProp_Spawn_X_Max_MetaData[] = {
		{ "Category", "Partial_GameMode" },
		{ "ModuleRelativePath", "Partial_GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APartial_GameMode_Statics::NewProp_Spawn_X_Max = { "Spawn_X_Max", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APartial_GameMode, Spawn_X_Max), METADATA_PARAMS(Z_Construct_UClass_APartial_GameMode_Statics::NewProp_Spawn_X_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APartial_GameMode_Statics::NewProp_Spawn_X_Max_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartial_GameMode_Statics::NewProp_Spawn_Y_Min_MetaData[] = {
		{ "Category", "Partial_GameMode" },
		{ "ModuleRelativePath", "Partial_GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APartial_GameMode_Statics::NewProp_Spawn_Y_Min = { "Spawn_Y_Min", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APartial_GameMode, Spawn_Y_Min), METADATA_PARAMS(Z_Construct_UClass_APartial_GameMode_Statics::NewProp_Spawn_Y_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APartial_GameMode_Statics::NewProp_Spawn_Y_Min_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartial_GameMode_Statics::NewProp_Spawn_Y_Max_MetaData[] = {
		{ "Category", "Partial_GameMode" },
		{ "ModuleRelativePath", "Partial_GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APartial_GameMode_Statics::NewProp_Spawn_Y_Max = { "Spawn_Y_Max", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APartial_GameMode, Spawn_Y_Max), METADATA_PARAMS(Z_Construct_UClass_APartial_GameMode_Statics::NewProp_Spawn_Y_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APartial_GameMode_Statics::NewProp_Spawn_Y_Max_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APartial_GameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartial_GameMode_Statics::NewProp_PlayerRecharger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartial_GameMode_Statics::NewProp_Spawn_X_Min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartial_GameMode_Statics::NewProp_Spawn_X_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartial_GameMode_Statics::NewProp_Spawn_Y_Min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartial_GameMode_Statics::NewProp_Spawn_Y_Max,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APartial_GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APartial_GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APartial_GameMode_Statics::ClassParams = {
		&APartial_GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APartial_GameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APartial_GameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APartial_GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APartial_GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APartial_GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APartial_GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APartial_GameMode, 2463272562);
	template<> PARTIAL_API UClass* StaticClass<APartial_GameMode>()
	{
		return APartial_GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APartial_GameMode(Z_Construct_UClass_APartial_GameMode, &APartial_GameMode::StaticClass, TEXT("/Script/Partial"), TEXT("APartial_GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APartial_GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
