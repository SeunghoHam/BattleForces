// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTLEFORCES_BaseCharacter_generated_h
#error "BaseCharacter.generated.h already included, missing '#pragma once' in BaseCharacter.h"
#endif
#define BATTLEFORCES_BaseCharacter_generated_h

#define BattleForces_Source_BattleForces_Public_BaseCharacter_h_13_SPARSE_DATA
#define BattleForces_Source_BattleForces_Public_BaseCharacter_h_13_RPC_WRAPPERS \
	virtual void MulticastGrappingR_Implementation(bool NeedIncludeAutonomousProxy); \
	virtual void ServerGrappingR_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_IsDead); \
	DECLARE_FUNCTION(execMulticastGrappingR); \
	DECLARE_FUNCTION(execServerGrappingR); \
	DECLARE_FUNCTION(execOnRep_WeaponActor);


#define BattleForces_Source_BattleForces_Public_BaseCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastGrappingR_Implementation(bool NeedIncludeAutonomousProxy); \
	virtual void ServerGrappingR_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_IsDead); \
	DECLARE_FUNCTION(execMulticastGrappingR); \
	DECLARE_FUNCTION(execServerGrappingR); \
	DECLARE_FUNCTION(execOnRep_WeaponActor);


#define BattleForces_Source_BattleForces_Public_BaseCharacter_h_13_EVENT_PARMS \
	struct BaseCharacter_eventMulticastGrappingR_Parms \
	{ \
		bool NeedIncludeAutonomousProxy; \
	};


#define BattleForces_Source_BattleForces_Public_BaseCharacter_h_13_CALLBACK_WRAPPERS
#define BattleForces_Source_BattleForces_Public_BaseCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattleForces"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WeaponActor=NETFIELD_REP_START, \
		IsDead, \
		NETFIELD_REP_END=IsDead	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define BattleForces_Source_BattleForces_Public_BaseCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattleForces"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WeaponActor=NETFIELD_REP_START, \
		IsDead, \
		NETFIELD_REP_END=IsDead	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define BattleForces_Source_BattleForces_Public_BaseCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public:


#define BattleForces_Source_BattleForces_Public_BaseCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseCharacter)


#define BattleForces_Source_BattleForces_Public_BaseCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponActor() { return STRUCT_OFFSET(ABaseCharacter, WeaponActor); } \
	FORCEINLINE static uint32 __PPO__MaxHealth() { return STRUCT_OFFSET(ABaseCharacter, MaxHealth); } \
	FORCEINLINE static uint32 __PPO__CurrentHealth() { return STRUCT_OFFSET(ABaseCharacter, CurrentHealth); } \
	FORCEINLINE static uint32 __PPO__IsDead() { return STRUCT_OFFSET(ABaseCharacter, IsDead); }


#define BattleForces_Source_BattleForces_Public_BaseCharacter_h_10_PROLOG \
	BattleForces_Source_BattleForces_Public_BaseCharacter_h_13_EVENT_PARMS


#define BattleForces_Source_BattleForces_Public_BaseCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleForces_Source_BattleForces_Public_BaseCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	BattleForces_Source_BattleForces_Public_BaseCharacter_h_13_SPARSE_DATA \
	BattleForces_Source_BattleForces_Public_BaseCharacter_h_13_RPC_WRAPPERS \
	BattleForces_Source_BattleForces_Public_BaseCharacter_h_13_CALLBACK_WRAPPERS \
	BattleForces_Source_BattleForces_Public_BaseCharacter_h_13_INCLASS \
	BattleForces_Source_BattleForces_Public_BaseCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleForces_Source_BattleForces_Public_BaseCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleForces_Source_BattleForces_Public_BaseCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	BattleForces_Source_BattleForces_Public_BaseCharacter_h_13_SPARSE_DATA \
	BattleForces_Source_BattleForces_Public_BaseCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleForces_Source_BattleForces_Public_BaseCharacter_h_13_CALLBACK_WRAPPERS \
	BattleForces_Source_BattleForces_Public_BaseCharacter_h_13_INCLASS_NO_PURE_DECLS \
	BattleForces_Source_BattleForces_Public_BaseCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTLEFORCES_API UClass* StaticClass<class ABaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleForces_Source_BattleForces_Public_BaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
