// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef BATTLEFORCES_Gun_generated_h
#error "Gun.generated.h already included, missing '#pragma once' in Gun.h"
#endif
#define BATTLEFORCES_Gun_generated_h

#define BattleForces_Source_BattleForces_Public_Gun_h_11_SPARSE_DATA
#define BattleForces_Source_BattleForces_Public_Gun_h_11_RPC_WRAPPERS \
	virtual FVector GetMuzzleLocation_Implementation() const; \
	virtual bool IsReloading_Implementation() const; \
	virtual void MulticastStartReload_Implementation(); \
	virtual void ServerStartReload_Implementation(); \
	virtual void MulticastFire_Implementation(bool NeedIncludeAutonomousProxy); \
	virtual void ServerFire_Implementation(); \
 \
	DECLARE_FUNCTION(execGetMuzzleLocation); \
	DECLARE_FUNCTION(execIsReloading); \
	DECLARE_FUNCTION(execCanReload); \
	DECLARE_FUNCTION(execEndReload); \
	DECLARE_FUNCTION(execMulticastStartReload); \
	DECLARE_FUNCTION(execServerStartReload); \
	DECLARE_FUNCTION(execCanFire); \
	DECLARE_FUNCTION(execMulticastFire); \
	DECLARE_FUNCTION(execServerFire);


#define BattleForces_Source_BattleForces_Public_Gun_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FVector GetMuzzleLocation_Implementation() const; \
	virtual bool IsReloading_Implementation() const; \
	virtual void MulticastStartReload_Implementation(); \
	virtual void ServerStartReload_Implementation(); \
	virtual void MulticastFire_Implementation(bool NeedIncludeAutonomousProxy); \
	virtual void ServerFire_Implementation(); \
 \
	DECLARE_FUNCTION(execGetMuzzleLocation); \
	DECLARE_FUNCTION(execIsReloading); \
	DECLARE_FUNCTION(execCanReload); \
	DECLARE_FUNCTION(execEndReload); \
	DECLARE_FUNCTION(execMulticastStartReload); \
	DECLARE_FUNCTION(execServerStartReload); \
	DECLARE_FUNCTION(execCanFire); \
	DECLARE_FUNCTION(execMulticastFire); \
	DECLARE_FUNCTION(execServerFire);


#define BattleForces_Source_BattleForces_Public_Gun_h_11_EVENT_PARMS \
	struct Gun_eventGetMuzzleLocation_Parms \
	{ \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Gun_eventGetMuzzleLocation_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct Gun_eventIsReloading_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Gun_eventIsReloading_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct Gun_eventMulticastFire_Parms \
	{ \
		bool NeedIncludeAutonomousProxy; \
	};


#define BattleForces_Source_BattleForces_Public_Gun_h_11_CALLBACK_WRAPPERS
#define BattleForces_Source_BattleForces_Public_Gun_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGun(); \
	friend struct Z_Construct_UClass_AGun_Statics; \
public: \
	DECLARE_CLASS(AGun, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattleForces"), NO_API) \
	DECLARE_SERIALIZER(AGun) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentLeftAmmo=NETFIELD_REP_START, \
		LeftAmmoInMagazine, \
		NETFIELD_REP_END=LeftAmmoInMagazine	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define BattleForces_Source_BattleForces_Public_Gun_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAGun(); \
	friend struct Z_Construct_UClass_AGun_Statics; \
public: \
	DECLARE_CLASS(AGun, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattleForces"), NO_API) \
	DECLARE_SERIALIZER(AGun) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentLeftAmmo=NETFIELD_REP_START, \
		LeftAmmoInMagazine, \
		NETFIELD_REP_END=LeftAmmoInMagazine	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define BattleForces_Source_BattleForces_Public_Gun_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGun(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGun) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGun); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGun); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGun(AGun&&); \
	NO_API AGun(const AGun&); \
public:


#define BattleForces_Source_BattleForces_Public_Gun_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGun(AGun&&); \
	NO_API AGun(const AGun&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGun); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGun); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGun)


#define BattleForces_Source_BattleForces_Public_Gun_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsStartedReload() { return STRUCT_OFFSET(AGun, bIsStartedReload); } \
	FORCEINLINE static uint32 __PPO__CurrentLeftAmmo() { return STRUCT_OFFSET(AGun, CurrentLeftAmmo); } \
	FORCEINLINE static uint32 __PPO__LeftAmmoInMagazine() { return STRUCT_OFFSET(AGun, LeftAmmoInMagazine); }


#define BattleForces_Source_BattleForces_Public_Gun_h_8_PROLOG \
	BattleForces_Source_BattleForces_Public_Gun_h_11_EVENT_PARMS


#define BattleForces_Source_BattleForces_Public_Gun_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleForces_Source_BattleForces_Public_Gun_h_11_PRIVATE_PROPERTY_OFFSET \
	BattleForces_Source_BattleForces_Public_Gun_h_11_SPARSE_DATA \
	BattleForces_Source_BattleForces_Public_Gun_h_11_RPC_WRAPPERS \
	BattleForces_Source_BattleForces_Public_Gun_h_11_CALLBACK_WRAPPERS \
	BattleForces_Source_BattleForces_Public_Gun_h_11_INCLASS \
	BattleForces_Source_BattleForces_Public_Gun_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleForces_Source_BattleForces_Public_Gun_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleForces_Source_BattleForces_Public_Gun_h_11_PRIVATE_PROPERTY_OFFSET \
	BattleForces_Source_BattleForces_Public_Gun_h_11_SPARSE_DATA \
	BattleForces_Source_BattleForces_Public_Gun_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleForces_Source_BattleForces_Public_Gun_h_11_CALLBACK_WRAPPERS \
	BattleForces_Source_BattleForces_Public_Gun_h_11_INCLASS_NO_PURE_DECLS \
	BattleForces_Source_BattleForces_Public_Gun_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTLEFORCES_API UClass* StaticClass<class AGun>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleForces_Source_BattleForces_Public_Gun_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
