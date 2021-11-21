// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleForces/Public/AOTDefenceGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAOTDefenceGameMode() {}
// Cross Module References
	BATTLEFORCES_API UClass* Z_Construct_UClass_AAOTDefenceGameMode_NoRegister();
	BATTLEFORCES_API UClass* Z_Construct_UClass_AAOTDefenceGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_BattleForces();
// End Cross Module References
	DEFINE_FUNCTION(AAOTDefenceGameMode::execEndRound)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WinnerTeam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndRound(Z_Param_WinnerTeam);
		P_NATIVE_END;
	}
	void AAOTDefenceGameMode::StaticRegisterNativesAAOTDefenceGameMode()
	{
		UClass* Class = AAOTDefenceGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndRound", &AAOTDefenceGameMode::execEndRound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAOTDefenceGameMode_EndRound_Statics
	{
		struct AOTDefenceGameMode_eventEndRound_Parms
		{
			int32 WinnerTeam;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_WinnerTeam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AAOTDefenceGameMode_EndRound_Statics::NewProp_WinnerTeam = { "WinnerTeam", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOTDefenceGameMode_eventEndRound_Parms, WinnerTeam), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAOTDefenceGameMode_EndRound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAOTDefenceGameMode_EndRound_Statics::NewProp_WinnerTeam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAOTDefenceGameMode_EndRound_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ?????? \xc3\xb3?? ????\n" },
		{ "ModuleRelativePath", "Public/AOTDefenceGameMode.h" },
		{ "ToolTip", "?????? \xc3\xb3?? ????" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAOTDefenceGameMode_EndRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAOTDefenceGameMode, nullptr, "EndRound", nullptr, nullptr, sizeof(AOTDefenceGameMode_eventEndRound_Parms), Z_Construct_UFunction_AAOTDefenceGameMode_EndRound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAOTDefenceGameMode_EndRound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAOTDefenceGameMode_EndRound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAOTDefenceGameMode_EndRound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAOTDefenceGameMode_EndRound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAOTDefenceGameMode_EndRound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAOTDefenceGameMode_NoRegister()
	{
		return AAOTDefenceGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AAOTDefenceGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreparationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreparationTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundSwitchDelayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RoundSwitchDelayTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAOTDefenceGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleForces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAOTDefenceGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAOTDefenceGameMode_EndRound, "EndRound" }, // 2075201197
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAOTDefenceGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AOTDefenceGameMode.h" },
		{ "ModuleRelativePath", "Public/AOTDefenceGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAOTDefenceGameMode_Statics::NewProp_PreparationTime_MetaData[] = {
		{ "Category", "AOTDefenceGameMode" },
		{ "Comment", "// ?? ?????? ?? ?\xd8\xba??\xc3\xb0?\n" },
		{ "ModuleRelativePath", "Public/AOTDefenceGameMode.h" },
		{ "ToolTip", "?? ?????? ?? ?\xd8\xba??\xc3\xb0?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAOTDefenceGameMode_Statics::NewProp_PreparationTime = { "PreparationTime", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAOTDefenceGameMode, PreparationTime), METADATA_PARAMS(Z_Construct_UClass_AAOTDefenceGameMode_Statics::NewProp_PreparationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAOTDefenceGameMode_Statics::NewProp_PreparationTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAOTDefenceGameMode_Statics::NewProp_RoundSwitchDelayTime_MetaData[] = {
		{ "Category", "AOTDefenceGameMode" },
		{ "Comment", "// ?????? ???? ?? ??\xc8\xaf?????? ?\xc3\xb0?\n" },
		{ "ModuleRelativePath", "Public/AOTDefenceGameMode.h" },
		{ "ToolTip", "?????? ???? ?? ??\xc8\xaf?????? ?\xc3\xb0?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAOTDefenceGameMode_Statics::NewProp_RoundSwitchDelayTime = { "RoundSwitchDelayTime", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAOTDefenceGameMode, RoundSwitchDelayTime), METADATA_PARAMS(Z_Construct_UClass_AAOTDefenceGameMode_Statics::NewProp_RoundSwitchDelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAOTDefenceGameMode_Statics::NewProp_RoundSwitchDelayTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAOTDefenceGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAOTDefenceGameMode_Statics::NewProp_PreparationTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAOTDefenceGameMode_Statics::NewProp_RoundSwitchDelayTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAOTDefenceGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAOTDefenceGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAOTDefenceGameMode_Statics::ClassParams = {
		&AAOTDefenceGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAOTDefenceGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAOTDefenceGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AAOTDefenceGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAOTDefenceGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAOTDefenceGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAOTDefenceGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAOTDefenceGameMode, 2703346658);
	template<> BATTLEFORCES_API UClass* StaticClass<AAOTDefenceGameMode>()
	{
		return AAOTDefenceGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAOTDefenceGameMode(Z_Construct_UClass_AAOTDefenceGameMode, &AAOTDefenceGameMode::StaticClass, TEXT("/Script/BattleForces"), TEXT("AAOTDefenceGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAOTDefenceGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
