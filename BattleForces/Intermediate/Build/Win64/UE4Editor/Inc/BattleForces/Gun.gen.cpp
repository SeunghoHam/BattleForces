// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleForces/Public/Gun.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGun() {}
// Cross Module References
	BATTLEFORCES_API UClass* Z_Construct_UClass_AGun_NoRegister();
	BATTLEFORCES_API UClass* Z_Construct_UClass_AGun();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BattleForces();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(AGun::execGetMuzzleLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetMuzzleLocation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGun::execIsReloading)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsReloading_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGun::execCanReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanReload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGun::execEndReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndReload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGun::execMulticastStartReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastStartReload_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGun::execServerStartReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerStartReload_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGun::execCanFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanFire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGun::execMulticastFire)
	{
		P_GET_UBOOL(Z_Param_NeedIncludeAutonomousProxy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastFire_Implementation(Z_Param_NeedIncludeAutonomousProxy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGun::execServerFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerFire_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AGun_GetMuzzleLocation = FName(TEXT("GetMuzzleLocation"));
	FVector AGun::GetMuzzleLocation() const
	{
		Gun_eventGetMuzzleLocation_Parms Parms;
		const_cast<AGun*>(this)->ProcessEvent(FindFunctionChecked(NAME_AGun_GetMuzzleLocation),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AGun_IsReloading = FName(TEXT("IsReloading"));
	bool AGun::IsReloading() const
	{
		Gun_eventIsReloading_Parms Parms;
		const_cast<AGun*>(this)->ProcessEvent(FindFunctionChecked(NAME_AGun_IsReloading),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AGun_MulticastFire = FName(TEXT("MulticastFire"));
	void AGun::MulticastFire(bool NeedIncludeAutonomousProxy)
	{
		Gun_eventMulticastFire_Parms Parms;
		Parms.NeedIncludeAutonomousProxy=NeedIncludeAutonomousProxy ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AGun_MulticastFire),&Parms);
	}
	static FName NAME_AGun_MulticastStartReload = FName(TEXT("MulticastStartReload"));
	void AGun::MulticastStartReload()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGun_MulticastStartReload),NULL);
	}
	static FName NAME_AGun_OnEndReload = FName(TEXT("OnEndReload"));
	void AGun::OnEndReload()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGun_OnEndReload),NULL);
	}
	static FName NAME_AGun_OnFire = FName(TEXT("OnFire"));
	void AGun::OnFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGun_OnFire),NULL);
	}
	static FName NAME_AGun_OnStartReload = FName(TEXT("OnStartReload"));
	void AGun::OnStartReload()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGun_OnStartReload),NULL);
	}
	static FName NAME_AGun_ServerFire = FName(TEXT("ServerFire"));
	void AGun::ServerFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGun_ServerFire),NULL);
	}
	static FName NAME_AGun_ServerStartReload = FName(TEXT("ServerStartReload"));
	void AGun::ServerStartReload()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGun_ServerStartReload),NULL);
	}
	void AGun::StaticRegisterNativesAGun()
	{
		UClass* Class = AGun::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanFire", &AGun::execCanFire },
			{ "CanReload", &AGun::execCanReload },
			{ "EndReload", &AGun::execEndReload },
			{ "GetMuzzleLocation", &AGun::execGetMuzzleLocation },
			{ "IsReloading", &AGun::execIsReloading },
			{ "MulticastFire", &AGun::execMulticastFire },
			{ "MulticastStartReload", &AGun::execMulticastStartReload },
			{ "ServerFire", &AGun::execServerFire },
			{ "ServerStartReload", &AGun::execServerStartReload },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGun_CanFire_Statics
	{
		struct Gun_eventCanFire_Parms
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
	void Z_Construct_UFunction_AGun_CanFire_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Gun_eventCanFire_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGun_CanFire_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Gun_eventCanFire_Parms), &Z_Construct_UFunction_AGun_CanFire_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGun_CanFire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGun_CanFire_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGun_CanFire_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ???? ?\xdf\xbb? ???????? \xc3\xbc\xc5\xa9\n" },
		{ "ModuleRelativePath", "Public/Gun.h" },
		{ "ToolTip", "???? ?\xdf\xbb? ???????? \xc3\xbc\xc5\xa9" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGun_CanFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGun, nullptr, "CanFire", nullptr, nullptr, sizeof(Gun_eventCanFire_Parms), Z_Construct_UFunction_AGun_CanFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_CanFire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGun_CanFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_CanFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGun_CanFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGun_CanFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGun_CanReload_Statics
	{
		struct Gun_eventCanReload_Parms
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
	void Z_Construct_UFunction_AGun_CanReload_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Gun_eventCanReload_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGun_CanReload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Gun_eventCanReload_Parms), &Z_Construct_UFunction_AGun_CanReload_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGun_CanReload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGun_CanReload_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGun_CanReload_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Reload???????? \xc3\xbc\xc5\xa9\n" },
		{ "ModuleRelativePath", "Public/Gun.h" },
		{ "ToolTip", "Reload???????? \xc3\xbc\xc5\xa9" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGun_CanReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGun, nullptr, "CanReload", nullptr, nullptr, sizeof(Gun_eventCanReload_Parms), Z_Construct_UFunction_AGun_CanReload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_CanReload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGun_CanReload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_CanReload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGun_CanReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGun_CanReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGun_EndReload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGun_EndReload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGun_EndReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGun, nullptr, "EndReload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGun_EndReload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_EndReload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGun_EndReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGun_EndReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGun_GetMuzzleLocation_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGun_GetMuzzleLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Gun_eventGetMuzzleLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGun_GetMuzzleLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGun_GetMuzzleLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGun_GetMuzzleLocation_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ?\xd1\xbe??? ?\xdf\xbb??? ??\xc4\xa1 ??\xc8\xaf\n" },
		{ "ModuleRelativePath", "Public/Gun.h" },
		{ "ToolTip", "?\xd1\xbe??? ?\xdf\xbb??? ??\xc4\xa1 ??\xc8\xaf" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGun_GetMuzzleLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGun, nullptr, "GetMuzzleLocation", nullptr, nullptr, sizeof(Gun_eventGetMuzzleLocation_Parms), Z_Construct_UFunction_AGun_GetMuzzleLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_GetMuzzleLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGun_GetMuzzleLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_GetMuzzleLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGun_GetMuzzleLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGun_GetMuzzleLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGun_IsReloading_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGun_IsReloading_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Gun_eventIsReloading_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGun_IsReloading_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Gun_eventIsReloading_Parms), &Z_Construct_UFunction_AGun_IsReloading_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGun_IsReloading_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGun_IsReloading_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGun_IsReloading_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ???? Reloading ???????? \xc3\xbc\xc5\xa9\n// BlueprintNativeEvent = ?\xe2\xba\xbb?????? ????????\xc6\xae???? ?????? ?\xd4\xbc??? ????,\n// \xc8\xa3?????? ?\xca\xbe\xd2\xb4\xd9\xb8? c++???\xd6\xb4? ?\xd4\xbc? ???\xc7\xb0? \xc8\xa3??\n" },
		{ "ModuleRelativePath", "Public/Gun.h" },
		{ "ToolTip", "???? Reloading ???????? \xc3\xbc\xc5\xa9\nBlueprintNativeEvent = ?\xe2\xba\xbb?????? ????????\xc6\xae???? ?????? ?\xd4\xbc??? ????,\n\xc8\xa3?????? ?\xca\xbe\xd2\xb4\xd9\xb8? c++???\xd6\xb4? ?\xd4\xbc? ???\xc7\xb0? \xc8\xa3??" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGun_IsReloading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGun, nullptr, "IsReloading", nullptr, nullptr, sizeof(Gun_eventIsReloading_Parms), Z_Construct_UFunction_AGun_IsReloading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_IsReloading_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGun_IsReloading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_IsReloading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGun_IsReloading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGun_IsReloading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGun_MulticastFire_Statics
	{
		static void NewProp_NeedIncludeAutonomousProxy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NeedIncludeAutonomousProxy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGun_MulticastFire_Statics::NewProp_NeedIncludeAutonomousProxy_SetBit(void* Obj)
	{
		((Gun_eventMulticastFire_Parms*)Obj)->NeedIncludeAutonomousProxy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGun_MulticastFire_Statics::NewProp_NeedIncludeAutonomousProxy = { "NeedIncludeAutonomousProxy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Gun_eventMulticastFire_Parms), &Z_Construct_UFunction_AGun_MulticastFire_Statics::NewProp_NeedIncludeAutonomousProxy_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGun_MulticastFire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGun_MulticastFire_Statics::NewProp_NeedIncludeAutonomousProxy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGun_MulticastFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGun_MulticastFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGun, nullptr, "MulticastFire", nullptr, nullptr, sizeof(Gun_eventMulticastFire_Parms), Z_Construct_UFunction_AGun_MulticastFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_MulticastFire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGun_MulticastFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_MulticastFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGun_MulticastFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGun_MulticastFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGun_MulticastStartReload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGun_MulticastStartReload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGun_MulticastStartReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGun, nullptr, "MulticastStartReload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGun_MulticastStartReload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_MulticastStartReload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGun_MulticastStartReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGun_MulticastStartReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGun_OnEndReload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGun_OnEndReload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGun_OnEndReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGun, nullptr, "OnEndReload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGun_OnEndReload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_OnEndReload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGun_OnEndReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGun_OnEndReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGun_OnFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGun_OnFire_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Fire ???? ?\xd4\xbc?*/// ?\xd9\xb8? \xc5\xac???\xcc\xbe?\xc6\xae???? ????\xc8\xad\n" },
		{ "ModuleRelativePath", "Public/Gun.h" },
		{ "ToolTip", "Fire ???? ?\xd4\xbc?// ?\xd9\xb8? \xc5\xac???\xcc\xbe?\xc6\xae???? ????\xc8\xad" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGun_OnFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGun, nullptr, "OnFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGun_OnFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_OnFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGun_OnFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGun_OnFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGun_OnStartReload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGun_OnStartReload_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Reload ????*/" },
		{ "ModuleRelativePath", "Public/Gun.h" },
		{ "ToolTip", "Reload ????" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGun_OnStartReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGun, nullptr, "OnStartReload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGun_OnStartReload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_OnStartReload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGun_OnStartReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGun_OnStartReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGun_ServerFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGun_ServerFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGun_ServerFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGun, nullptr, "ServerFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGun_ServerFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_ServerFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGun_ServerFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGun_ServerFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGun_ServerStartReload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGun_ServerStartReload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGun_ServerStartReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGun, nullptr, "ServerStartReload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGun_ServerStartReload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGun_ServerStartReload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGun_ServerStartReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGun_ServerStartReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGun_NoRegister()
	{
		return AGun::StaticClass();
	}
	struct Z_Construct_UClass_AGun_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_GunName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsStartedReload_MetaData[];
#endif
		static void NewProp_bIsStartedReload_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStartedReload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamagePerBullet_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_DamagePerBullet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAmmoPerMagazine_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxAmmoPerMagazine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialAmmoCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InitialAmmoCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLeftAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentLeftAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftAmmoInMagazine_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_LeftAmmoInMagazine;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleForces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGun_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGun_CanFire, "CanFire" }, // 1075878389
		{ &Z_Construct_UFunction_AGun_CanReload, "CanReload" }, // 1542333014
		{ &Z_Construct_UFunction_AGun_EndReload, "EndReload" }, // 1565594517
		{ &Z_Construct_UFunction_AGun_GetMuzzleLocation, "GetMuzzleLocation" }, // 2477492925
		{ &Z_Construct_UFunction_AGun_IsReloading, "IsReloading" }, // 1560095404
		{ &Z_Construct_UFunction_AGun_MulticastFire, "MulticastFire" }, // 3570743758
		{ &Z_Construct_UFunction_AGun_MulticastStartReload, "MulticastStartReload" }, // 459077494
		{ &Z_Construct_UFunction_AGun_OnEndReload, "OnEndReload" }, // 1400301828
		{ &Z_Construct_UFunction_AGun_OnFire, "OnFire" }, // 2385073423
		{ &Z_Construct_UFunction_AGun_OnStartReload, "OnStartReload" }, // 1558199602
		{ &Z_Construct_UFunction_AGun_ServerFire, "ServerFire" }, // 1115791631
		{ &Z_Construct_UFunction_AGun_ServerStartReload, "ServerStartReload" }, // 3415270557
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Gun.h" },
		{ "ModuleRelativePath", "Public/Gun.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_GunName_MetaData[] = {
		{ "Category", "Gun" },
		{ "Comment", "// ?? ?\xcc\xb8? EditDefaultsOnly\n" },
		{ "ModuleRelativePath", "Public/Gun.h" },
		{ "ToolTip", "?? ?\xcc\xb8? EditDefaultsOnly" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_GunName = { "GunName", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, GunName), METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_GunName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_GunName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_bIsStartedReload_MetaData[] = {
		{ "Category", "Gun" },
		{ "Comment", "// ???\xce\xb5\xe5\xb0\xa1 ?????\xdf\xb4???\n" },
		{ "ModuleRelativePath", "Public/Gun.h" },
		{ "ToolTip", "???\xce\xb5\xe5\xb0\xa1 ?????\xdf\xb4???" },
	};
#endif
	void Z_Construct_UClass_AGun_Statics::NewProp_bIsStartedReload_SetBit(void* Obj)
	{
		((AGun*)Obj)->bIsStartedReload = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_bIsStartedReload = { "bIsStartedReload", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGun), &Z_Construct_UClass_AGun_Statics::NewProp_bIsStartedReload_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_bIsStartedReload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_bIsStartedReload_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_DamagePerBullet_MetaData[] = {
		{ "Category", "Gun" },
		{ "Comment", "/*Bullet Damage ????*/// ?\xd1\xbe? ?\xd1\xb9? ?????? ??\n" },
		{ "ModuleRelativePath", "Public/Gun.h" },
		{ "ToolTip", "Bullet Damage ????// ?\xd1\xbe? ?\xd1\xb9? ?????? ??" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_DamagePerBullet = { "DamagePerBullet", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, DamagePerBullet), METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_DamagePerBullet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_DamagePerBullet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_MaxAmmoPerMagazine_MetaData[] = {
		{ "Category", "Gun" },
		{ "Comment", "/*Bullet ???? ????*/// \xc5\xba\xc3\xa2 ?? ?\xd6\xb4? \xc5\xba ????\n" },
		{ "ModuleRelativePath", "Public/Gun.h" },
		{ "ToolTip", "Bullet ???? ????// \xc5\xba\xc3\xa2 ?? ?\xd6\xb4? \xc5\xba ????" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_MaxAmmoPerMagazine = { "MaxAmmoPerMagazine", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, MaxAmmoPerMagazine), METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_MaxAmmoPerMagazine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_MaxAmmoPerMagazine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_InitialAmmoCount_MetaData[] = {
		{ "Category", "Gun" },
		{ "Comment", "// \xc3\xb3?? ???? ?? ?????? ?? \xc5\xba ????\n" },
		{ "ModuleRelativePath", "Public/Gun.h" },
		{ "ToolTip", "\xc3\xb3?? ???? ?? ?????? ?? \xc5\xba ????" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_InitialAmmoCount = { "InitialAmmoCount", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, InitialAmmoCount), METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_InitialAmmoCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_InitialAmmoCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_CurrentLeftAmmo_MetaData[] = {
		{ "Category", "Gun" },
		{ "Comment", "// ???? ?????? ?\xd6\xb4? ???? \xc5\xba ????\n" },
		{ "ModuleRelativePath", "Public/Gun.h" },
		{ "ToolTip", "???? ?????? ?\xd6\xb4? ???? \xc5\xba ????" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_CurrentLeftAmmo = { "CurrentLeftAmmo", nullptr, (EPropertyFlags)0x0020080000030035, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, CurrentLeftAmmo), METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_CurrentLeftAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_CurrentLeftAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_LeftAmmoInMagazine_MetaData[] = {
		{ "Category", "Gun" },
		{ "Comment", "// ???? \xc5\xba\xc3\xa2?? ???? ?\xd1\xbe? ????\n" },
		{ "ModuleRelativePath", "Public/Gun.h" },
		{ "ToolTip", "???? \xc5\xba\xc3\xa2?? ???? ?\xd1\xbe? ????" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_LeftAmmoInMagazine = { "LeftAmmoInMagazine", nullptr, (EPropertyFlags)0x0020080000010035, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, LeftAmmoInMagazine), METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_LeftAmmoInMagazine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_LeftAmmoInMagazine_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGun_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_GunName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_bIsStartedReload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_DamagePerBullet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_MaxAmmoPerMagazine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_InitialAmmoCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_CurrentLeftAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_LeftAmmoInMagazine,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGun>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGun_Statics::ClassParams = {
		&AGun::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGun_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGun()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGun_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGun, 2739512537);
	template<> BATTLEFORCES_API UClass* StaticClass<AGun>()
	{
		return AGun::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGun(Z_Construct_UClass_AGun, &AGun::StaticClass, TEXT("/Script/BattleForces"), TEXT("AGun"), false, nullptr, nullptr, nullptr);

	void AGun::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentLeftAmmo(TEXT("CurrentLeftAmmo"));
		static const FName Name_LeftAmmoInMagazine(TEXT("LeftAmmoInMagazine"));

		const bool bIsValid = true
			&& Name_CurrentLeftAmmo == ClassReps[(int32)ENetFields_Private::CurrentLeftAmmo].Property->GetFName()
			&& Name_LeftAmmoInMagazine == ClassReps[(int32)ENetFields_Private::LeftAmmoInMagazine].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AGun"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGun);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
