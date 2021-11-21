// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleForces/Public/AOTPlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAOTPlayerState() {}
// Cross Module References
	BATTLEFORCES_API UClass* Z_Construct_UClass_AAOTPlayerState_NoRegister();
	BATTLEFORCES_API UClass* Z_Construct_UClass_AAOTPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_BattleForces();
// End Cross Module References
	DEFINE_FUNCTION(AAOTPlayerState::execOnRep_TeamId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_TeamId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAOTPlayerState::execGetUniqueIdString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetUniqueIdString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAOTPlayerState::execServerSetTeam)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InTeamId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetTeam_Implementation(Z_Param_InTeamId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAOTPlayerState::execSetTeam)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InTeamId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTeam(Z_Param_InTeamId);
		P_NATIVE_END;
	}
	static FName NAME_AAOTPlayerState_OnTeamChanged = FName(TEXT("OnTeamChanged"));
	void AAOTPlayerState::OnTeamChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAOTPlayerState_OnTeamChanged),NULL);
	}
	static FName NAME_AAOTPlayerState_ServerSetTeam = FName(TEXT("ServerSetTeam"));
	void AAOTPlayerState::ServerSetTeam(int32 InTeamId)
	{
		AOTPlayerState_eventServerSetTeam_Parms Parms;
		Parms.InTeamId=InTeamId;
		ProcessEvent(FindFunctionChecked(NAME_AAOTPlayerState_ServerSetTeam),&Parms);
	}
	void AAOTPlayerState::StaticRegisterNativesAAOTPlayerState()
	{
		UClass* Class = AAOTPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUniqueIdString", &AAOTPlayerState::execGetUniqueIdString },
			{ "OnRep_TeamId", &AAOTPlayerState::execOnRep_TeamId },
			{ "ServerSetTeam", &AAOTPlayerState::execServerSetTeam },
			{ "SetTeam", &AAOTPlayerState::execSetTeam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAOTPlayerState_GetUniqueIdString_Statics
	{
		struct AOTPlayerState_eventGetUniqueIdString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AAOTPlayerState_GetUniqueIdString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOTPlayerState_eventGetUniqueIdString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAOTPlayerState_GetUniqueIdString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAOTPlayerState_GetUniqueIdString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAOTPlayerState_GetUniqueIdString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AOTPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAOTPlayerState_GetUniqueIdString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAOTPlayerState, nullptr, "GetUniqueIdString", nullptr, nullptr, sizeof(AOTPlayerState_eventGetUniqueIdString_Parms), Z_Construct_UFunction_AAOTPlayerState_GetUniqueIdString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAOTPlayerState_GetUniqueIdString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAOTPlayerState_GetUniqueIdString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAOTPlayerState_GetUniqueIdString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAOTPlayerState_GetUniqueIdString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAOTPlayerState_GetUniqueIdString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAOTPlayerState_OnRep_TeamId_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAOTPlayerState_OnRep_TeamId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AOTPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAOTPlayerState_OnRep_TeamId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAOTPlayerState, nullptr, "OnRep_TeamId", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAOTPlayerState_OnRep_TeamId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAOTPlayerState_OnRep_TeamId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAOTPlayerState_OnRep_TeamId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAOTPlayerState_OnRep_TeamId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAOTPlayerState_OnTeamChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAOTPlayerState_OnTeamChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AOTPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAOTPlayerState_OnTeamChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAOTPlayerState, nullptr, "OnTeamChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAOTPlayerState_OnTeamChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAOTPlayerState_OnTeamChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAOTPlayerState_OnTeamChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAOTPlayerState_OnTeamChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAOTPlayerState_ServerSetTeam_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InTeamId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAOTPlayerState_ServerSetTeam_Statics::NewProp_InTeamId = { "InTeamId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOTPlayerState_eventServerSetTeam_Parms, InTeamId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAOTPlayerState_ServerSetTeam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAOTPlayerState_ServerSetTeam_Statics::NewProp_InTeamId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAOTPlayerState_ServerSetTeam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AOTPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAOTPlayerState_ServerSetTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAOTPlayerState, nullptr, "ServerSetTeam", nullptr, nullptr, sizeof(AOTPlayerState_eventServerSetTeam_Parms), Z_Construct_UFunction_AAOTPlayerState_ServerSetTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAOTPlayerState_ServerSetTeam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAOTPlayerState_ServerSetTeam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAOTPlayerState_ServerSetTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAOTPlayerState_ServerSetTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAOTPlayerState_ServerSetTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAOTPlayerState_SetTeam_Statics
	{
		struct AOTPlayerState_eventSetTeam_Parms
		{
			int32 InTeamId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InTeamId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAOTPlayerState_SetTeam_Statics::NewProp_InTeamId = { "InTeamId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOTPlayerState_eventSetTeam_Parms, InTeamId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAOTPlayerState_SetTeam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAOTPlayerState_SetTeam_Statics::NewProp_InTeamId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAOTPlayerState_SetTeam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AOTPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAOTPlayerState_SetTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAOTPlayerState, nullptr, "SetTeam", nullptr, nullptr, sizeof(AOTPlayerState_eventSetTeam_Parms), Z_Construct_UFunction_AAOTPlayerState_SetTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAOTPlayerState_SetTeam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAOTPlayerState_SetTeam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAOTPlayerState_SetTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAOTPlayerState_SetTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAOTPlayerState_SetTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAOTPlayerState_NoRegister()
	{
		return AAOTPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AAOTPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamId_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TeamId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAOTPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleForces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAOTPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAOTPlayerState_GetUniqueIdString, "GetUniqueIdString" }, // 2980010178
		{ &Z_Construct_UFunction_AAOTPlayerState_OnRep_TeamId, "OnRep_TeamId" }, // 1392357750
		{ &Z_Construct_UFunction_AAOTPlayerState_OnTeamChanged, "OnTeamChanged" }, // 277150199
		{ &Z_Construct_UFunction_AAOTPlayerState_ServerSetTeam, "ServerSetTeam" }, // 2409772476
		{ &Z_Construct_UFunction_AAOTPlayerState_SetTeam, "SetTeam" }, // 3594114929
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAOTPlayerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AOTPlayerState.h" },
		{ "ModuleRelativePath", "Public/AOTPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAOTPlayerState_Statics::NewProp_TeamId_MetaData[] = {
		{ "Category", "AOTPlayerState" },
		{ "Comment", "// ?? ??\xc3\xbc ?\xd4\xbc?\n" },
		{ "ModuleRelativePath", "Public/AOTPlayerState.h" },
		{ "ToolTip", "?? ??\xc3\xbc ?\xd4\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAOTPlayerState_Statics::NewProp_TeamId = { "TeamId", "OnRep_TeamId", (EPropertyFlags)0x0020080100000034, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAOTPlayerState, TeamId), METADATA_PARAMS(Z_Construct_UClass_AAOTPlayerState_Statics::NewProp_TeamId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAOTPlayerState_Statics::NewProp_TeamId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAOTPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAOTPlayerState_Statics::NewProp_TeamId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAOTPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAOTPlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAOTPlayerState_Statics::ClassParams = {
		&AAOTPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAOTPlayerState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAOTPlayerState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAOTPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAOTPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAOTPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAOTPlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAOTPlayerState, 4111906064);
	template<> BATTLEFORCES_API UClass* StaticClass<AAOTPlayerState>()
	{
		return AAOTPlayerState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAOTPlayerState(Z_Construct_UClass_AAOTPlayerState, &AAOTPlayerState::StaticClass, TEXT("/Script/BattleForces"), TEXT("AAOTPlayerState"), false, nullptr, nullptr, nullptr);

	void AAOTPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_TeamId(TEXT("TeamId"));

		const bool bIsValid = true
			&& Name_TeamId == ClassReps[(int32)ENetFields_Private::TeamId].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AAOTPlayerState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAOTPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
