// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleForces/Public/AOTGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAOTGameState() {}
// Cross Module References
	BATTLEFORCES_API UClass* Z_Construct_UClass_AAOTGameState_NoRegister();
	BATTLEFORCES_API UClass* Z_Construct_UClass_AAOTGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameState();
	UPackage* Z_Construct_UPackage__Script_BattleForces();
// End Cross Module References
	static FName NAME_AAOTGameState_OnHandleMatchHasStarted = FName(TEXT("OnHandleMatchHasStarted"));
	void AAOTGameState::OnHandleMatchHasStarted()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAOTGameState_OnHandleMatchHasStarted),NULL);
	}
	static FName NAME_AAOTGameState_OnHandleMatchWaitingToStart = FName(TEXT("OnHandleMatchWaitingToStart"));
	void AAOTGameState::OnHandleMatchWaitingToStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAOTGameState_OnHandleMatchWaitingToStart),NULL);
	}
	void AAOTGameState::StaticRegisterNativesAAOTGameState()
	{
	}
	struct Z_Construct_UFunction_AAOTGameState_OnHandleMatchHasStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAOTGameState_OnHandleMatchHasStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AOTGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAOTGameState_OnHandleMatchHasStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAOTGameState, nullptr, "OnHandleMatchHasStarted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAOTGameState_OnHandleMatchHasStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAOTGameState_OnHandleMatchHasStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAOTGameState_OnHandleMatchHasStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAOTGameState_OnHandleMatchHasStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAOTGameState_OnHandleMatchWaitingToStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAOTGameState_OnHandleMatchWaitingToStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AOTGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAOTGameState_OnHandleMatchWaitingToStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAOTGameState, nullptr, "OnHandleMatchWaitingToStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAOTGameState_OnHandleMatchWaitingToStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAOTGameState_OnHandleMatchWaitingToStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAOTGameState_OnHandleMatchWaitingToStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAOTGameState_OnHandleMatchWaitingToStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAOTGameState_NoRegister()
	{
		return AAOTGameState::StaticClass();
	}
	struct Z_Construct_UClass_AAOTGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAOTGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameState,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleForces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAOTGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAOTGameState_OnHandleMatchHasStarted, "OnHandleMatchHasStarted" }, // 3975442380
		{ &Z_Construct_UFunction_AAOTGameState_OnHandleMatchWaitingToStart, "OnHandleMatchWaitingToStart" }, // 1156892937
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAOTGameState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AOTGameState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AOTGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAOTGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAOTGameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAOTGameState_Statics::ClassParams = {
		&AAOTGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAOTGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAOTGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAOTGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAOTGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAOTGameState, 3233892766);
	template<> BATTLEFORCES_API UClass* StaticClass<AAOTGameState>()
	{
		return AAOTGameState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAOTGameState(Z_Construct_UClass_AAOTGameState, &AAOTGameState::StaticClass, TEXT("/Script/BattleForces"), TEXT("AAOTGameState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAOTGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
