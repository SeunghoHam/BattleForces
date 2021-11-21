// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleForces/Public/Gadget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGadget() {}
// Cross Module References
	BATTLEFORCES_API UClass* Z_Construct_UClass_UGadget_NoRegister();
	BATTLEFORCES_API UClass* Z_Construct_UClass_UGadget();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_BattleForces();
// End Cross Module References
	void UGadget::StaticRegisterNativesUGadget()
	{
	}
	UClass* Z_Construct_UClass_UGadget_NoRegister()
	{
		return UGadget::StaticClass();
	}
	struct Z_Construct_UClass_UGadget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGadget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleForces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGadget_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gadget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGadget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGadget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGadget_Statics::ClassParams = {
		&UGadget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGadget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGadget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGadget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGadget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGadget, 1173261421);
	template<> BATTLEFORCES_API UClass* StaticClass<UGadget>()
	{
		return UGadget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGadget(Z_Construct_UClass_UGadget, &UGadget::StaticClass, TEXT("/Script/BattleForces"), TEXT("UGadget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGadget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
