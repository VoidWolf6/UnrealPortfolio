// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RunIV/RunIVGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRunIVGameModeBase() {}
// Cross Module References
	RUNIV_API UClass* Z_Construct_UClass_ARunIVGameModeBase_NoRegister();
	RUNIV_API UClass* Z_Construct_UClass_ARunIVGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_RunIV();
	RUNIV_API UClass* Z_Construct_UClass_AFloorTile_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	DEFINE_FUNCTION(ARunIVGameModeBase::execAddCoin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCoin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARunIVGameModeBase::execAddFloorTile)
	{
		P_GET_UBOOL(Z_Param_SpawnItems);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AFloorTile**)Z_Param__Result=P_THIS->AddFloorTile(Z_Param_SpawnItems);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARunIVGameModeBase::execCreateInitialFloorTiles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateInitialFloorTiles();
		P_NATIVE_END;
	}
	void ARunIVGameModeBase::StaticRegisterNativesARunIVGameModeBase()
	{
		UClass* Class = ARunIVGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCoin", &ARunIVGameModeBase::execAddCoin },
			{ "AddFloorTile", &ARunIVGameModeBase::execAddFloorTile },
			{ "CreateInitialFloorTiles", &ARunIVGameModeBase::execCreateInitialFloorTiles },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARunIVGameModeBase_AddCoin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunIVGameModeBase_AddCoin_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//this is the place where the main game functionality is, such as adding items\n" },
		{ "ModuleRelativePath", "RunIVGameModeBase.h" },
		{ "ToolTip", "this is the place where the main game functionality is, such as adding items" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARunIVGameModeBase_AddCoin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARunIVGameModeBase, nullptr, "AddCoin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARunIVGameModeBase_AddCoin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunIVGameModeBase_AddCoin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARunIVGameModeBase_AddCoin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARunIVGameModeBase_AddCoin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARunIVGameModeBase_AddFloorTile_Statics
	{
		struct RunIVGameModeBase_eventAddFloorTile_Parms
		{
			bool SpawnItems;
			AFloorTile* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnItems_MetaData[];
#endif
		static void NewProp_SpawnItems_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SpawnItems;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunIVGameModeBase_AddFloorTile_Statics::NewProp_SpawnItems_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ARunIVGameModeBase_AddFloorTile_Statics::NewProp_SpawnItems_SetBit(void* Obj)
	{
		((RunIVGameModeBase_eventAddFloorTile_Parms*)Obj)->SpawnItems = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARunIVGameModeBase_AddFloorTile_Statics::NewProp_SpawnItems = { "SpawnItems", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RunIVGameModeBase_eventAddFloorTile_Parms), &Z_Construct_UFunction_ARunIVGameModeBase_AddFloorTile_Statics::NewProp_SpawnItems_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ARunIVGameModeBase_AddFloorTile_Statics::NewProp_SpawnItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunIVGameModeBase_AddFloorTile_Statics::NewProp_SpawnItems_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARunIVGameModeBase_AddFloorTile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RunIVGameModeBase_eventAddFloorTile_Parms, ReturnValue), Z_Construct_UClass_AFloorTile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARunIVGameModeBase_AddFloorTile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARunIVGameModeBase_AddFloorTile_Statics::NewProp_SpawnItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARunIVGameModeBase_AddFloorTile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunIVGameModeBase_AddFloorTile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RunIVGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARunIVGameModeBase_AddFloorTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARunIVGameModeBase, nullptr, "AddFloorTile", nullptr, nullptr, sizeof(RunIVGameModeBase_eventAddFloorTile_Parms), Z_Construct_UFunction_ARunIVGameModeBase_AddFloorTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunIVGameModeBase_AddFloorTile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARunIVGameModeBase_AddFloorTile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunIVGameModeBase_AddFloorTile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARunIVGameModeBase_AddFloorTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARunIVGameModeBase_AddFloorTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARunIVGameModeBase_CreateInitialFloorTiles_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunIVGameModeBase_CreateInitialFloorTiles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RunIVGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARunIVGameModeBase_CreateInitialFloorTiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARunIVGameModeBase, nullptr, "CreateInitialFloorTiles", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARunIVGameModeBase_CreateInitialFloorTiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunIVGameModeBase_CreateInitialFloorTiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARunIVGameModeBase_CreateInitialFloorTiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARunIVGameModeBase_CreateInitialFloorTiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARunIVGameModeBase_NoRegister()
	{
		return ARunIVGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ARunIVGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameHUDclass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameHUDclass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_coinTotal_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_coinTotal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_initialTileNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_initialTileNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nextSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_nextSpawn;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LaneValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaneValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LaneValues;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARunIVGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RunIV,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARunIVGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARunIVGameModeBase_AddCoin, "AddCoin" }, // 1832924292
		{ &Z_Construct_UFunction_ARunIVGameModeBase_AddFloorTile, "AddFloorTile" }, // 90055196
		{ &Z_Construct_UFunction_ARunIVGameModeBase_CreateInitialFloorTiles, "CreateInitialFloorTiles" }, // 3954374699
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunIVGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RunIVGameModeBase.h" },
		{ "ModuleRelativePath", "RunIVGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunIVGameModeBase_Statics::NewProp_GameHUDclass_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "RunIVGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARunIVGameModeBase_Statics::NewProp_GameHUDclass = { "GameHUDclass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunIVGameModeBase, GameHUDclass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ARunIVGameModeBase_Statics::NewProp_GameHUDclass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunIVGameModeBase_Statics::NewProp_GameHUDclass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunIVGameModeBase_Statics::NewProp_TileClass_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "//used to spawn the blueprint, with all the defined aspects\n" },
		{ "ModuleRelativePath", "RunIVGameModeBase.h" },
		{ "ToolTip", "used to spawn the blueprint, with all the defined aspects" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARunIVGameModeBase_Statics::NewProp_TileClass = { "TileClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunIVGameModeBase, TileClass), Z_Construct_UClass_AFloorTile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ARunIVGameModeBase_Statics::NewProp_TileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunIVGameModeBase_Statics::NewProp_TileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunIVGameModeBase_Statics::NewProp_coinTotal_MetaData[] = {
		{ "Category", "RunIVGameModeBase" },
		{ "ModuleRelativePath", "RunIVGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARunIVGameModeBase_Statics::NewProp_coinTotal = { "coinTotal", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunIVGameModeBase, coinTotal), METADATA_PARAMS(Z_Construct_UClass_ARunIVGameModeBase_Statics::NewProp_coinTotal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunIVGameModeBase_Statics::NewProp_coinTotal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunIVGameModeBase_Statics::NewProp_initialTileNum_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "RunIVGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARunIVGameModeBase_Statics::NewProp_initialTileNum = { "initialTileNum", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunIVGameModeBase, initialTileNum), METADATA_PARAMS(Z_Construct_UClass_ARunIVGameModeBase_Statics::NewProp_initialTileNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunIVGameModeBase_Statics::NewProp_initialTileNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunIVGameModeBase_Statics::NewProp_nextSpawn_MetaData[] = {
		{ "Category", "Runtime" },
		{ "ModuleRelativePath", "RunIVGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARunIVGameModeBase_Statics::NewProp_nextSpawn = { "nextSpawn", nullptr, (EPropertyFlags)0x0010000000020801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunIVGameModeBase, nextSpawn), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_ARunIVGameModeBase_Statics::NewProp_nextSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunIVGameModeBase_Statics::NewProp_nextSpawn_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARunIVGameModeBase_Statics::NewProp_LaneValues_Inner = { "LaneValues", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunIVGameModeBase_Statics::NewProp_LaneValues_MetaData[] = {
		{ "Category", "Runtime" },
		{ "ModuleRelativePath", "RunIVGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARunIVGameModeBase_Statics::NewProp_LaneValues = { "LaneValues", nullptr, (EPropertyFlags)0x0010000000020801, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunIVGameModeBase, LaneValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARunIVGameModeBase_Statics::NewProp_LaneValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunIVGameModeBase_Statics::NewProp_LaneValues_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARunIVGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunIVGameModeBase_Statics::NewProp_GameHUDclass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunIVGameModeBase_Statics::NewProp_TileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunIVGameModeBase_Statics::NewProp_coinTotal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunIVGameModeBase_Statics::NewProp_initialTileNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunIVGameModeBase_Statics::NewProp_nextSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunIVGameModeBase_Statics::NewProp_LaneValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunIVGameModeBase_Statics::NewProp_LaneValues,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARunIVGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARunIVGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARunIVGameModeBase_Statics::ClassParams = {
		&ARunIVGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARunIVGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARunIVGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARunIVGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARunIVGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARunIVGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARunIVGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARunIVGameModeBase, 1326436626);
	template<> RUNIV_API UClass* StaticClass<ARunIVGameModeBase>()
	{
		return ARunIVGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARunIVGameModeBase(Z_Construct_UClass_ARunIVGameModeBase, &ARunIVGameModeBase::StaticClass, TEXT("/Script/RunIV"), TEXT("ARunIVGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARunIVGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
