// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleForces/Public/AOTDefenceGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAOTDefenceGameState() {}
// Cross Module References
	BATTLEFORCES_API UClass* Z_Construct_UClass_AAOTDefenceGameState_NoRegister();
	BATTLEFORCES_API UClass* Z_Construct_UClass_AAOTDefenceGameState();
	BATTLEFORCES_API UClass* Z_Construct_UClass_AAOTGameState();
	UPackage* Z_Construct_UPackage__Script_BattleForces();
// End Cross Module References
	DEFINE_FUNCTION(AAOTDefenceGameState::execOnRep_IsRoundEnded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsRoundEnded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAOTDefenceGameState::execGetPreparatoryRemainTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPreparatoryRemainTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAOTDefenceGameState::execGetBTeamPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetBTeamPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAOTDefenceGameState::execGetATeamPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetATeamPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAOTDefenceGameState::execGetIsRoundEnded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsRoundEnded();
		P_NATIVE_END;
	}
	void AAOTDefenceGameState::StaticRegisterNativesAAOTDefenceGameState()
	{
		UClass* Class = AAOTDefenceGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetATeamPoint", &AAOTDefenceGameState::execGetATeamPoint },
			{ "GetBTeamPoint", &AAOTDefenceGameState::execGetBTeamPoint },
			{ "GetIsRoundEnded", &AAOTDefenceGameState::execGetIsRoundEnded },
			{ "GetPreparatoryRemainTime", &AAOTDefenceGameState::execGetPreparatoryRemainTime },
			{ "OnRep_IsRoundEnded", &AAOTDefenceGameState::execOnRep_IsRoundEnded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAOTDefenceGameState_GetATeamPoint_Statics
	{
		struct AOTDefenceGameState_eventGetATeamPoint_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AAOTDefenceGameState_GetATeamPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOTDefenceGameState_eventGetATeamPoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAOTDefenceGameState_GetATeamPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAOTDefenceGameState_GetATeamPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAOTDefenceGameState_GetATeamPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AOTDefenceGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAOTDefenceGameState_GetATeamPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAOTDefenceGameState, nullptr, "GetATeamPoint", nullptr, nullptr, sizeof(AOTDefenceGameState_eventGetATeamPoint_Parms), Z_Construct_UFunction_AAOTDefenceGameState_GetATeamPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAOTDefenceGameState_GetATeamPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAOTDefenceGameState_GetATeamPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAOTDefenceGameState_GetATeamPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAOTDefenceGameState_GetATeamPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAOTDefenceGameState_GetATeamPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAOTDefenceGameState_GetBTeamPoint_Statics
	{
		struct AOTDefenceGameState_eventGetBTeamPoint_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AAOTDefenceGameState_GetBTeamPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOTDefenceGameState_eventGetBTeamPoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAOTDefenceGameState_GetBTeamPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAOTDefenceGameState_GetBTeamPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAOTDefenceGameState_GetBTeamPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AOTDefenceGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAOTDefenceGameState_GetBTeamPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAOTDefenceGameState, nullptr, "GetBTeamPoint", nullptr, nullptr, sizeof(AOTDefenceGameState_eventGetBTeamPoint_Parms), Z_Construct_UFunction_AAOTDefenceGameState_GetBTeamPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAOTDefenceGameState_GetBTeamPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAOTDefenceGameState_GetBTeamPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAOTDefenceGameState_GetBTeamPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAOTDefenceGameState_GetBTeamPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAOTDefenceGameState_GetBTeamPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAOTDefenceGameState_GetIsRoundEnded_Statics
	{
		struct AOTDefenceGameState_eventGetIsRoundEnded_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAOTDefenceGameState_GetIsRoundEnded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AOTDefenceGameState_eventGetIsRoundEnded_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAOTDefenceGameState_GetIsRoundEnded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AOTDefenceGameState_eventGetIsRoundEnded_Parms), &Z_Construct_UFunction_AAOTDefenceGameState_GetIsRoundEnded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAOTDefenceGameState_GetIsRoundEnded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAOTDefenceGameState_GetIsRoundEnded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAOTDefenceGameState_GetIsRoundEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AOTDefenceGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAOTDefenceGameState_GetIsRoundEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAOTDefenceGameState, nullptr, "GetIsRoundEnded", nullptr, nullptr, sizeof(AOTDefenceGameState_eventGetIsRoundEnded_Parms), Z_Construct_UFunction_AAOTDefenceGameState_GetIsRoundEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAOTDefenceGameState_GetIsRoundEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAOTDefenceGameState_GetIsRoundEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAOTDefenceGameState_GetIsRoundEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAOTDefenceGameState_GetIsRoundEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAOTDefenceGameState_GetIsRoundEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAOTDefenceGameState_GetPreparatoryRemainTime_Statics
	{
		struct AOTDefenceGameState_eventGetPreparatoryRemainTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAOTDefenceGameState_GetPreparatoryRemainTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOTDefenceGameState_eventGetPreparatoryRemainTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAOTDefenceGameState_GetPreparatoryRemainTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAOTDefenceGameState_GetPreparatoryRemainTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAOTDefenceGameState_GetPreparatoryRemainTime_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Prepartion = ?\xd8\xba????? ??\n" },
		{ "ModuleRelativePath", "Public/AOTDefenceGameState.h" },
		{ "ToolTip", "Prepartion = ?\xd8\xba????? ??" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAOTDefenceGameState_GetPreparatoryRemainTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAOTDefenceGameState, nullptr, "GetPreparatoryRemainTime", nullptr, nullptr, sizeof(AOTDefenceGameState_eventGetPreparatoryRemainTime_Parms), Z_Construct_UFunction_AAOTDefenceGameState_GetPreparatoryRemainTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAOTDefenceGameState_GetPreparatoryRemainTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAOTDefenceGameState_GetPreparatoryRemainTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAOTDefenceGameState_GetPreparatoryRemainTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAOTDefenceGameState_GetPreparatoryRemainTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAOTDefenceGameState_GetPreparatoryRemainTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAOTDefenceGameState_OnRep_IsRoundEnded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAOTDefenceGameState_OnRep_IsRoundEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AOTDefenceGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAOTDefenceGameState_OnRep_IsRoundEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAOTDefenceGameState, nullptr, "OnRep_IsRoundEnded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAOTDefenceGameState_OnRep_IsRoundEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAOTDefenceGameState_OnRep_IsRoundEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAOTDefenceGameState_OnRep_IsRoundEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAOTDefenceGameState_OnRep_IsRoundEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAOTDefenceGameState_NoRegister()
	{
		return AAOTDefenceGameState::StaticClass();
	}
	struct Z_Construct_UClass_AAOTDefenceGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreparatoryRemainTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreparatoryRemainTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsRoundEnded_MetaData[];
#endif
		static void NewProp_IsRoundEnded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRoundEnded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastRoundWinnerTeam_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_LastRoundWinnerTeam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ATeamPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ATeamPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BTeamPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BTeamPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAOTDefenceGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAOTGameState,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleForces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAOTDefenceGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAOTDefenceGameState_GetATeamPoint, "GetATeamPoint" }, // 1944907323
		{ &Z_Construct_UFunction_AAOTDefenceGameState_GetBTeamPoint, "GetBTeamPoint" }, // 3468671202
		{ &Z_Construct_UFunction_AAOTDefenceGameState_GetIsRoundEnded, "GetIsRoundEnded" }, // 3727261758
		{ &Z_Construct_UFunction_AAOTDefenceGameState_GetPreparatoryRemainTime, "GetPreparatoryRemainTime" }, // 2462861543
		{ &Z_Construct_UFunction_AAOTDefenceGameState_OnRep_IsRoundEnded, "OnRep_IsRoundEnded" }, // 3932543076
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAOTDefenceGameState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AOTDefenceGameState.h" },
		{ "ModuleRelativePath", "Public/AOTDefenceGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAOTDefenceGameState_Statics::NewProp_PreparatoryRemainTime_MetaData[] = {
		{ "Comment", "// ?\xd8\xba? ?\xdc\xb0? \xc5\xb8?\xcc\xb8??? ???? ?\xc3\xb0?\n" },
		{ "ModuleRelativePath", "Public/AOTDefenceGameState.h" },
		{ "ToolTip", "?\xd8\xba? ?\xdc\xb0? \xc5\xb8?\xcc\xb8??? ???? ?\xc3\xb0?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAOTDefenceGameState_Statics::NewProp_PreparatoryRemainTime = { "PreparatoryRemainTime", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAOTDefenceGameState, PreparatoryRemainTime), METADATA_PARAMS(Z_Construct_UClass_AAOTDefenceGameState_Statics::NewProp_PreparatoryRemainTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAOTDefenceGameState_Statics::NewProp_PreparatoryRemainTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAOTDefenceGameState_Statics::NewProp_IsRoundEnded_MetaData[] = {
		{ "ModuleRelativePath", "Public/AOTDefenceGameState.h" },
	};
#endif
	void Z_Construct_UClass_AAOTDefenceGameState_Statics::NewProp_IsRoundEnded_SetBit(void* Obj)
	{
		((AAOTDefenceGameState*)Obj)->IsRoundEnded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAOTDefenceGameState_Statics::NewProp_IsRoundEnded = { "IsRoundEnded", "OnRep_IsRoundEnded", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAOTDefenceGameState), &Z_Construct_UClass_AAOTDefenceGameState_Statics::NewProp_IsRoundEnded_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAOTDefenceGameState_Statics::NewProp_IsRoundEnded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAOTDefenceGameState_Statics::NewProp_IsRoundEnded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAOTDefenceGameState_Statics::NewProp_LastRoundWinnerTeam_MetaData[] = {
		{ "ModuleRelativePath", "Public/AOTDefenceGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAOTDefenceGameState_Statics::NewProp_LastRoundWinnerTeam = { "LastRoundWinnerTeam", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAOTDefenceGameState, LastRoundWinnerTeam), METADATA_PARAMS(Z_Construct_UClass_AAOTDefenceGameState_Statics::NewProp_LastRoundWinnerTeam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAOTDefenceGameState_Statics::NewProp_LastRoundWinnerTeam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAOTDefenceGameState_Statics::NewProp_ATeamPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/AOTDefenceGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAOTDefenceGameState_Statics::NewProp_ATeamPoint = { "ATeamPoint", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAOTDefenceGameState, ATeamPoint), METADATA_PARAMS(Z_Construct_UClass_AAOTDefenceGameState_Statics::NewProp_ATeamPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAOTDefenceGameState_Statics::NewProp_ATeamPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAOTDefenceGameState_Statics::NewProp_BTeamPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/AOTDefenceGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAOTDefenceGameState_Statics::NewProp_BTeamPoint = { "BTeamPoint", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAOTDefenceGameState, BTeamPoint), METADATA_PARAMS(Z_Construct_UClass_AAOTDefenceGameState_Statics::NewProp_BTeamPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAOTDefenceGameState_Statics::NewProp_BTeamPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAOTDefenceGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAOTDefenceGameState_Statics::NewProp_PreparatoryRemainTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAOTDefenceGameState_Statics::NewProp_IsRoundEnded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAOTDefenceGameState_Statics::NewProp_LastRoundWinnerTeam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAOTDefenceGameState_Statics::NewProp_ATeamPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAOTDefenceGameState_Statics::NewProp_BTeamPoint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAOTDefenceGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAOTDefenceGameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAOTDefenceGameState_Statics::ClassParams = {
		&AAOTDefenceGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAOTDefenceGameState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAOTDefenceGameState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAOTDefenceGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAOTDefenceGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAOTDefenceGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAOTDefenceGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAOTDefenceGameState, 3971802681);
	template<> BATTLEFORCES_API UClass* StaticClass<AAOTDefenceGameState>()
	{
		return AAOTDefenceGameState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAOTDefenceGameState(Z_Construct_UClass_AAOTDefenceGameState, &AAOTDefenceGameState::StaticClass, TEXT("/Script/BattleForces"), TEXT("AAOTDefenceGameState"), false, nullptr, nullptr, nullptr);

	void AAOTDefenceGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_PreparatoryRemainTime(TEXT("PreparatoryRemainTime"));
		static const FName Name_IsRoundEnded(TEXT("IsRoundEnded"));
		static const FName Name_LastRoundWinnerTeam(TEXT("LastRoundWinnerTeam"));
		static const FName Name_ATeamPoint(TEXT("ATeamPoint"));
		static const FName Name_BTeamPoint(TEXT("BTeamPoint"));

		const bool bIsValid = true
			&& Name_PreparatoryRemainTime == ClassReps[(int32)ENetFields_Private::PreparatoryRemainTime].Property->GetFName()
			&& Name_IsRoundEnded == ClassReps[(int32)ENetFields_Private::IsRoundEnded].Property->GetFName()
			&& Name_LastRoundWinnerTeam == ClassReps[(int32)ENetFields_Private::LastRoundWinnerTeam].Property->GetFName()
			&& Name_ATeamPoint == ClassReps[(int32)ENetFields_Private::ATeamPoint].Property->GetFName()
			&& Name_BTeamPoint == ClassReps[(int32)ENetFields_Private::BTeamPoint].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AAOTDefenceGameState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAOTDefenceGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
