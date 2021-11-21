// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTLEFORCES_AOTDefenceGameState_generated_h
#error "AOTDefenceGameState.generated.h already included, missing '#pragma once' in AOTDefenceGameState.h"
#endif
#define BATTLEFORCES_AOTDefenceGameState_generated_h

#define BattleForces_Source_BattleForces_Public_AOTDefenceGameState_h_15_SPARSE_DATA
#define BattleForces_Source_BattleForces_Public_AOTDefenceGameState_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_IsRoundEnded); \
	DECLARE_FUNCTION(execGetPreparatoryRemainTime); \
	DECLARE_FUNCTION(execGetBTeamPoint); \
	DECLARE_FUNCTION(execGetATeamPoint); \
	DECLARE_FUNCTION(execGetIsRoundEnded);


#define BattleForces_Source_BattleForces_Public_AOTDefenceGameState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_IsRoundEnded); \
	DECLARE_FUNCTION(execGetPreparatoryRemainTime); \
	DECLARE_FUNCTION(execGetBTeamPoint); \
	DECLARE_FUNCTION(execGetATeamPoint); \
	DECLARE_FUNCTION(execGetIsRoundEnded);


#define BattleForces_Source_BattleForces_Public_AOTDefenceGameState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAOTDefenceGameState(); \
	friend struct Z_Construct_UClass_AAOTDefenceGameState_Statics; \
public: \
	DECLARE_CLASS(AAOTDefenceGameState, AAOTGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattleForces"), NO_API) \
	DECLARE_SERIALIZER(AAOTDefenceGameState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PreparatoryRemainTime=NETFIELD_REP_START, \
		IsRoundEnded, \
		LastRoundWinnerTeam, \
		ATeamPoint, \
		BTeamPoint, \
		NETFIELD_REP_END=BTeamPoint	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define BattleForces_Source_BattleForces_Public_AOTDefenceGameState_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAAOTDefenceGameState(); \
	friend struct Z_Construct_UClass_AAOTDefenceGameState_Statics; \
public: \
	DECLARE_CLASS(AAOTDefenceGameState, AAOTGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattleForces"), NO_API) \
	DECLARE_SERIALIZER(AAOTDefenceGameState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PreparatoryRemainTime=NETFIELD_REP_START, \
		IsRoundEnded, \
		LastRoundWinnerTeam, \
		ATeamPoint, \
		BTeamPoint, \
		NETFIELD_REP_END=BTeamPoint	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define BattleForces_Source_BattleForces_Public_AOTDefenceGameState_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAOTDefenceGameState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAOTDefenceGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAOTDefenceGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAOTDefenceGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAOTDefenceGameState(AAOTDefenceGameState&&); \
	NO_API AAOTDefenceGameState(const AAOTDefenceGameState&); \
public:


#define BattleForces_Source_BattleForces_Public_AOTDefenceGameState_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAOTDefenceGameState(AAOTDefenceGameState&&); \
	NO_API AAOTDefenceGameState(const AAOTDefenceGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAOTDefenceGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAOTDefenceGameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAOTDefenceGameState)


#define BattleForces_Source_BattleForces_Public_AOTDefenceGameState_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PreparatoryRemainTime() { return STRUCT_OFFSET(AAOTDefenceGameState, PreparatoryRemainTime); } \
	FORCEINLINE static uint32 __PPO__IsRoundEnded() { return STRUCT_OFFSET(AAOTDefenceGameState, IsRoundEnded); } \
	FORCEINLINE static uint32 __PPO__LastRoundWinnerTeam() { return STRUCT_OFFSET(AAOTDefenceGameState, LastRoundWinnerTeam); } \
	FORCEINLINE static uint32 __PPO__ATeamPoint() { return STRUCT_OFFSET(AAOTDefenceGameState, ATeamPoint); } \
	FORCEINLINE static uint32 __PPO__BTeamPoint() { return STRUCT_OFFSET(AAOTDefenceGameState, BTeamPoint); }


#define BattleForces_Source_BattleForces_Public_AOTDefenceGameState_h_12_PROLOG
#define BattleForces_Source_BattleForces_Public_AOTDefenceGameState_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleForces_Source_BattleForces_Public_AOTDefenceGameState_h_15_PRIVATE_PROPERTY_OFFSET \
	BattleForces_Source_BattleForces_Public_AOTDefenceGameState_h_15_SPARSE_DATA \
	BattleForces_Source_BattleForces_Public_AOTDefenceGameState_h_15_RPC_WRAPPERS \
	BattleForces_Source_BattleForces_Public_AOTDefenceGameState_h_15_INCLASS \
	BattleForces_Source_BattleForces_Public_AOTDefenceGameState_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleForces_Source_BattleForces_Public_AOTDefenceGameState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleForces_Source_BattleForces_Public_AOTDefenceGameState_h_15_PRIVATE_PROPERTY_OFFSET \
	BattleForces_Source_BattleForces_Public_AOTDefenceGameState_h_15_SPARSE_DATA \
	BattleForces_Source_BattleForces_Public_AOTDefenceGameState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleForces_Source_BattleForces_Public_AOTDefenceGameState_h_15_INCLASS_NO_PURE_DECLS \
	BattleForces_Source_BattleForces_Public_AOTDefenceGameState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTLEFORCES_API UClass* StaticClass<class AAOTDefenceGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleForces_Source_BattleForces_Public_AOTDefenceGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
