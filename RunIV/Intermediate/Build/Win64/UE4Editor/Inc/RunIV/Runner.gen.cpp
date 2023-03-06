// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RunIV/Runner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRunner() {}
// Cross Module References
	RUNIV_API UClass* Z_Construct_UClass_ARunner_NoRegister();
	RUNIV_API UClass* Z_Construct_UClass_ARunner();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_RunIV();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	RUNIV_API UClass* Z_Construct_UClass_ARunIVGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
	DEFINE_FUNCTION(ARunner::execAddCoin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCoin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARunner::execDrop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Drop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARunner::execChangeLaneRight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeLaneRight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARunner::execChangeLaneLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeLaneLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARunner::execOnDeath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDeath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARunner::execDeath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Death();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARunner::execSwitchLaneFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchLaneFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARunner::execSwitchLaneUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchLaneUpdate(Z_Param_Value);
		P_NATIVE_END;
	}
	static FName NAME_ARunner_SwitchLane = FName(TEXT("SwitchLane"));
	void ARunner::SwitchLane()
	{
		ProcessEvent(FindFunctionChecked(NAME_ARunner_SwitchLane),NULL);
	}
	void ARunner::StaticRegisterNativesARunner()
	{
		UClass* Class = ARunner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCoin", &ARunner::execAddCoin },
			{ "ChangeLaneLeft", &ARunner::execChangeLaneLeft },
			{ "ChangeLaneRight", &ARunner::execChangeLaneRight },
			{ "Death", &ARunner::execDeath },
			{ "Drop", &ARunner::execDrop },
			{ "OnDeath", &ARunner::execOnDeath },
			{ "SwitchLaneFinished", &ARunner::execSwitchLaneFinished },
			{ "SwitchLaneUpdate", &ARunner::execSwitchLaneUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARunner_AddCoin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunner_AddCoin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Runner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARunner_AddCoin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARunner, nullptr, "AddCoin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARunner_AddCoin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunner_AddCoin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARunner_AddCoin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARunner_AddCoin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARunner_ChangeLaneLeft_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunner_ChangeLaneLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Runner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARunner_ChangeLaneLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARunner, nullptr, "ChangeLaneLeft", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARunner_ChangeLaneLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunner_ChangeLaneLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARunner_ChangeLaneLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARunner_ChangeLaneLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARunner_ChangeLaneRight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunner_ChangeLaneRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Runner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARunner_ChangeLaneRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARunner, nullptr, "ChangeLaneRight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARunner_ChangeLaneRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunner_ChangeLaneRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARunner_ChangeLaneRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARunner_ChangeLaneRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARunner_Death_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunner_Death_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Runner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARunner_Death_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARunner, nullptr, "Death", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARunner_Death_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunner_Death_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARunner_Death()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARunner_Death_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARunner_Drop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunner_Drop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Runner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARunner_Drop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARunner, nullptr, "Drop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARunner_Drop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunner_Drop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARunner_Drop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARunner_Drop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARunner_OnDeath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunner_OnDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Runner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARunner_OnDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARunner, nullptr, "OnDeath", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARunner_OnDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunner_OnDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARunner_OnDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARunner_OnDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARunner_SwitchLane_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunner_SwitchLane_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion" },
		{ "ModuleRelativePath", "Runner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARunner_SwitchLane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARunner, nullptr, "SwitchLane", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARunner_SwitchLane_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunner_SwitchLane_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARunner_SwitchLane()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARunner_SwitchLane_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARunner_SwitchLaneFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunner_SwitchLaneFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion" },
		{ "ModuleRelativePath", "Runner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARunner_SwitchLaneFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARunner, nullptr, "SwitchLaneFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARunner_SwitchLaneFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunner_SwitchLaneFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARunner_SwitchLaneFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARunner_SwitchLaneFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARunner_SwitchLaneUpdate_Statics
	{
		struct Runner_eventSwitchLaneUpdate_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARunner_SwitchLaneUpdate_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Runner_eventSwitchLaneUpdate_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARunner_SwitchLaneUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARunner_SwitchLaneUpdate_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunner_SwitchLaneUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion" },
		{ "ModuleRelativePath", "Runner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARunner_SwitchLaneUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARunner, nullptr, "SwitchLaneUpdate", nullptr, nullptr, sizeof(Runner_eventSwitchLaneUpdate_Parms), Z_Construct_UFunction_ARunner_SwitchLaneUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunner_SwitchLaneUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARunner_SwitchLaneUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunner_SwitchLaneUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARunner_SwitchLaneUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARunner_SwitchLaneUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARunner_NoRegister()
	{
		return ARunner::StaticClass();
	}
	struct Z_Construct_UClass_ARunner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_deathParticleSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_deathParticleSystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_deathSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_deathSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DropImpulse_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DropImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLane_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentLane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextLane_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NextLane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestartTimerHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RestartTimerHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dead_MetaData[];
#endif
		static void NewProp_dead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_dead;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARunner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_RunIV,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARunner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARunner_AddCoin, "AddCoin" }, // 2279054893
		{ &Z_Construct_UFunction_ARunner_ChangeLaneLeft, "ChangeLaneLeft" }, // 3355151924
		{ &Z_Construct_UFunction_ARunner_ChangeLaneRight, "ChangeLaneRight" }, // 1942746946
		{ &Z_Construct_UFunction_ARunner_Death, "Death" }, // 316762097
		{ &Z_Construct_UFunction_ARunner_Drop, "Drop" }, // 784221779
		{ &Z_Construct_UFunction_ARunner_OnDeath, "OnDeath" }, // 1577976490
		{ &Z_Construct_UFunction_ARunner_SwitchLane, "SwitchLane" }, // 1451096967
		{ &Z_Construct_UFunction_ARunner_SwitchLaneFinished, "SwitchLaneFinished" }, // 1066895816
		{ &Z_Construct_UFunction_ARunner_SwitchLaneUpdate, "SwitchLaneUpdate" }, // 2127338638
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunner_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Runner.h" },
		{ "ModuleRelativePath", "Runner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunner_Statics::NewProp_CameraArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Runner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARunner_Statics::NewProp_CameraArm = { "CameraArm", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunner, CameraArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARunner_Statics::NewProp_CameraArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunner_Statics::NewProp_CameraArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunner_Statics::NewProp_CameraBase_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Runner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARunner_Statics::NewProp_CameraBase = { "CameraBase", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunner, CameraBase), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARunner_Statics::NewProp_CameraBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunner_Statics::NewProp_CameraBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunner_Statics::NewProp_GameMode_MetaData[] = {
		{ "Category", "Runner" },
		{ "ModuleRelativePath", "Runner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARunner_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0040000000020801, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunner, GameMode), Z_Construct_UClass_ARunIVGameModeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARunner_Statics::NewProp_GameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunner_Statics::NewProp_GameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunner_Statics::NewProp_deathParticleSystem_MetaData[] = {
		{ "Category", "Assets" },
		{ "ModuleRelativePath", "Runner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARunner_Statics::NewProp_deathParticleSystem = { "deathParticleSystem", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunner, deathParticleSystem), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARunner_Statics::NewProp_deathParticleSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunner_Statics::NewProp_deathParticleSystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunner_Statics::NewProp_deathSound_MetaData[] = {
		{ "Category", "Assets" },
		{ "ModuleRelativePath", "Runner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARunner_Statics::NewProp_deathSound = { "deathSound", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunner, deathSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARunner_Statics::NewProp_deathSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunner_Statics::NewProp_deathSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunner_Statics::NewProp_DropImpulse_MetaData[] = {
		{ "Category", "Runner" },
		{ "ModuleRelativePath", "Runner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARunner_Statics::NewProp_DropImpulse = { "DropImpulse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunner, DropImpulse), METADATA_PARAMS(Z_Construct_UClass_ARunner_Statics::NewProp_DropImpulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunner_Statics::NewProp_DropImpulse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunner_Statics::NewProp_CurrentLane_MetaData[] = {
		{ "Category", "Runner" },
		{ "ModuleRelativePath", "Runner.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARunner_Statics::NewProp_CurrentLane = { "CurrentLane", nullptr, (EPropertyFlags)0x0010000000020805, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunner, CurrentLane), METADATA_PARAMS(Z_Construct_UClass_ARunner_Statics::NewProp_CurrentLane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunner_Statics::NewProp_CurrentLane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunner_Statics::NewProp_NextLane_MetaData[] = {
		{ "Category", "Runner" },
		{ "ModuleRelativePath", "Runner.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARunner_Statics::NewProp_NextLane = { "NextLane", nullptr, (EPropertyFlags)0x0010000000020805, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunner, NextLane), METADATA_PARAMS(Z_Construct_UClass_ARunner_Statics::NewProp_NextLane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunner_Statics::NewProp_NextLane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunner_Statics::NewProp_RestartTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Runner.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARunner_Statics::NewProp_RestartTimerHandle = { "RestartTimerHandle", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunner, RestartTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ARunner_Statics::NewProp_RestartTimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunner_Statics::NewProp_RestartTimerHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunner_Statics::NewProp_dead_MetaData[] = {
		{ "ModuleRelativePath", "Runner.h" },
	};
#endif
	void Z_Construct_UClass_ARunner_Statics::NewProp_dead_SetBit(void* Obj)
	{
		((ARunner*)Obj)->dead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARunner_Statics::NewProp_dead = { "dead", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARunner), &Z_Construct_UClass_ARunner_Statics::NewProp_dead_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARunner_Statics::NewProp_dead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunner_Statics::NewProp_dead_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARunner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunner_Statics::NewProp_CameraArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunner_Statics::NewProp_CameraBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunner_Statics::NewProp_GameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunner_Statics::NewProp_deathParticleSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunner_Statics::NewProp_deathSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunner_Statics::NewProp_DropImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunner_Statics::NewProp_CurrentLane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunner_Statics::NewProp_NextLane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunner_Statics::NewProp_RestartTimerHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunner_Statics::NewProp_dead,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARunner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARunner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARunner_Statics::ClassParams = {
		&ARunner::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARunner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARunner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARunner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARunner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARunner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARunner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARunner, 872892222);
	template<> RUNIV_API UClass* StaticClass<ARunner>()
	{
		return ARunner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARunner(Z_Construct_UClass_ARunner, &ARunner::StaticClass, TEXT("/Script/RunIV"), TEXT("ARunner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARunner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
