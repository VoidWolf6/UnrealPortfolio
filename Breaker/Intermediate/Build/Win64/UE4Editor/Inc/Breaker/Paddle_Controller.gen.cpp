// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Breaker/Paddle_Controller.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaddle_Controller() {}
// Cross Module References
	BREAKER_API UClass* Z_Construct_UClass_APaddle_Controller_NoRegister();
	BREAKER_API UClass* Z_Construct_UClass_APaddle_Controller();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Breaker();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	BREAKER_API UClass* Z_Construct_UClass_AMovingBall_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APaddle_Controller::execSetupInputComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupInputComponent();
		P_NATIVE_END;
	}
	void APaddle_Controller::StaticRegisterNativesAPaddle_Controller()
	{
		UClass* Class = APaddle_Controller::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetupInputComponent", &APaddle_Controller::execSetupInputComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APaddle_Controller_SetupInputComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APaddle_Controller_SetupInputComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Paddle_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APaddle_Controller_SetupInputComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APaddle_Controller, nullptr, "SetupInputComponent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APaddle_Controller_SetupInputComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APaddle_Controller_SetupInputComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APaddle_Controller_SetupInputComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APaddle_Controller_SetupInputComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APaddle_Controller_NoRegister()
	{
		return APaddle_Controller::StaticClass();
	}
	struct Z_Construct_UClass_APaddle_Controller_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BallObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BallObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaddle_Controller_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Breaker,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APaddle_Controller_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APaddle_Controller_SetupInputComponent, "SetupInputComponent" }, // 1916282136
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaddle_Controller_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Paddle_Controller.h" },
		{ "ModuleRelativePath", "Paddle_Controller.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaddle_Controller_Statics::NewProp_BallObject_MetaData[] = {
		{ "Category", "Paddle_Controller" },
		{ "ModuleRelativePath", "Paddle_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APaddle_Controller_Statics::NewProp_BallObject = { "BallObject", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APaddle_Controller, BallObject), Z_Construct_UClass_AMovingBall_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APaddle_Controller_Statics::NewProp_BallObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APaddle_Controller_Statics::NewProp_BallObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APaddle_Controller_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaddle_Controller_Statics::NewProp_BallObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaddle_Controller_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaddle_Controller>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaddle_Controller_Statics::ClassParams = {
		&APaddle_Controller::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APaddle_Controller_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APaddle_Controller_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APaddle_Controller_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaddle_Controller_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaddle_Controller()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaddle_Controller_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaddle_Controller, 3324959881);
	template<> BREAKER_API UClass* StaticClass<APaddle_Controller>()
	{
		return APaddle_Controller::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaddle_Controller(Z_Construct_UClass_APaddle_Controller, &APaddle_Controller::StaticClass, TEXT("/Script/Breaker"), TEXT("APaddle_Controller"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaddle_Controller);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
