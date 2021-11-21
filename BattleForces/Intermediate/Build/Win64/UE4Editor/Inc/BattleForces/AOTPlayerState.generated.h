// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTLEFORCES_AOTPlayerState_generated_h
#error "AOTPlayerState.generated.h already included, missing '#pragma once' in AOTPlayerState.h"
#endif
#define BATTLEFORCES_AOTPlayerState_generated_h

#define BattleForces_Source_BattleForces_Public_AOTPlayerState_h_15_SPARSE_DATA
#define BattleForces_Source_BattleForces_Public_AOTPlayerState_h_15_RPC_WRAPPERS \
	virtual void ServerSetTeam_Implementation(int32 InTeamId); \
 \
	DECLARE_FUNCTION(execOnRep_TeamId); \
	DECLARE_FUNCTION(execGetUniqueIdString); \
	DECLARE_FUNCTION(execServerSetTeam); \
	DECLARE_FUNCTION(execSetTeam);


#define BattleForces_Source_BattleForces_Public_AOTPlayerState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerSetTeam_Implementation(int32 InTeamId); \
 \
	DECLARE_FUNCTION(execOnRep_TeamId); \
	DECLARE_FUNCTION(execGetUniqueIdString); \
	DECLARE_FUNCTION(execServerSetTeam); \
	DECLARE_FUNCTION(execSetTeam);


#define BattleForces_Source_BattleForces_Public_AOTPlayerState_h_15_EVENT_PARMS \
	struct AOTPlayerState_eventServerSetTeam_Parms \
	{ \
		int32 InTeamId; \
	};


#define BattleForces_Source_BattleForces_Public_AOTPlayerState_h_15_CALLBACK_WRAPPERS
#define BattleForces_Source_BattleForces_Public_AOTPlayerState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAOTPlayerState(); \
	friend struct Z_Construct_UClass_AAOTPlayerState_Statics; \
public: \
	DECLARE_CLASS(AAOTPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattleForces"), NO_API) \
	DECLARE_SERIALIZER(AAOTPlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TeamId=NETFIELD_REP_START, \
		NETFIELD_REP_END=TeamId	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define BattleForces_Source_BattleForces_Public_AOTPlayerState_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAAOTPlayerState(); \
	friend struct Z_Construct_UClass_AAOTPlayerState_Statics; \
public: \
	DECLARE_CLASS(AAOTPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattleForces"), NO_API) \
	DECLARE_SERIALIZER(AAOTPlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TeamId=NETFIELD_REP_START, \
		NETFIELD_REP_END=TeamId	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define BattleForces_Source_BattleForces_Public_AOTPlayerState_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAOTPlayerState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAOTPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAOTPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAOTPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAOTPlayerState(AAOTPlayerState&&); \
	NO_API AAOTPlayerState(const AAOTPlayerState&); \
public:


#define BattleForces_Source_BattleForces_Public_AOTPlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAOTPlayerState(AAOTPlayerState&&); \
	NO_API AAOTPlayerState(const AAOTPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAOTPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAOTPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAOTPlayerState)


#define BattleForces_Source_BattleForces_Public_AOTPlayerState_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TeamId() { return STRUCT_OFFSET(AAOTPlayerState, TeamId); }


#define BattleForces_Source_BattleForces_Public_AOTPlayerState_h_12_PROLOG \
	BattleForces_Source_BattleForces_Public_AOTPlayerState_h_15_EVENT_PARMS


#define BattleForces_Source_BattleForces_Public_AOTPlayerState_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleForces_Source_BattleForces_Public_AOTPlayerState_h_15_PRIVATE_PROPERTY_OFFSET \
	BattleForces_Source_BattleForces_Public_AOTPlayerState_h_15_SPARSE_DATA \
	BattleForces_Source_BattleForces_Public_AOTPlayerState_h_15_RPC_WRAPPERS \
	BattleForces_Source_BattleForces_Public_AOTPlayerState_h_15_CALLBACK_WRAPPERS \
	BattleForces_Source_BattleForces_Public_AOTPlayerState_h_15_INCLASS \
	BattleForces_Source_BattleForces_Public_AOTPlayerState_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleForces_Source_BattleForces_Public_AOTPlayerState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleForces_Source_BattleForces_Public_AOTPlayerState_h_15_PRIVATE_PROPERTY_OFFSET \
	BattleForces_Source_BattleForces_Public_AOTPlayerState_h_15_SPARSE_DATA \
	BattleForces_Source_BattleForces_Public_AOTPlayerState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleForces_Source_BattleForces_Public_AOTPlayerState_h_15_CALLBACK_WRAPPERS \
	BattleForces_Source_BattleForces_Public_AOTPlayerState_h_15_INCLASS_NO_PURE_DECLS \
	BattleForces_Source_BattleForces_Public_AOTPlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTLEFORCES_API UClass* StaticClass<class AAOTPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleForces_Source_BattleForces_Public_AOTPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
