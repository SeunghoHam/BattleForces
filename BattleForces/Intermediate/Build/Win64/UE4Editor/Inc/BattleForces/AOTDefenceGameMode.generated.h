// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTLEFORCES_AOTDefenceGameMode_generated_h
#error "AOTDefenceGameMode.generated.h already included, missing '#pragma once' in AOTDefenceGameMode.h"
#endif
#define BATTLEFORCES_AOTDefenceGameMode_generated_h

#define BattleForces_Source_BattleForces_Public_AOTDefenceGameMode_h_15_SPARSE_DATA
#define BattleForces_Source_BattleForces_Public_AOTDefenceGameMode_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndRound);


#define BattleForces_Source_BattleForces_Public_AOTDefenceGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndRound);


#define BattleForces_Source_BattleForces_Public_AOTDefenceGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAOTDefenceGameMode(); \
	friend struct Z_Construct_UClass_AAOTDefenceGameMode_Statics; \
public: \
	DECLARE_CLASS(AAOTDefenceGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattleForces"), NO_API) \
	DECLARE_SERIALIZER(AAOTDefenceGameMode)


#define BattleForces_Source_BattleForces_Public_AOTDefenceGameMode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAAOTDefenceGameMode(); \
	friend struct Z_Construct_UClass_AAOTDefenceGameMode_Statics; \
public: \
	DECLARE_CLASS(AAOTDefenceGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattleForces"), NO_API) \
	DECLARE_SERIALIZER(AAOTDefenceGameMode)


#define BattleForces_Source_BattleForces_Public_AOTDefenceGameMode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAOTDefenceGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAOTDefenceGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAOTDefenceGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAOTDefenceGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAOTDefenceGameMode(AAOTDefenceGameMode&&); \
	NO_API AAOTDefenceGameMode(const AAOTDefenceGameMode&); \
public:


#define BattleForces_Source_BattleForces_Public_AOTDefenceGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAOTDefenceGameMode(AAOTDefenceGameMode&&); \
	NO_API AAOTDefenceGameMode(const AAOTDefenceGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAOTDefenceGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAOTDefenceGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAOTDefenceGameMode)


#define BattleForces_Source_BattleForces_Public_AOTDefenceGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PreparationTime() { return STRUCT_OFFSET(AAOTDefenceGameMode, PreparationTime); } \
	FORCEINLINE static uint32 __PPO__RoundSwitchDelayTime() { return STRUCT_OFFSET(AAOTDefenceGameMode, RoundSwitchDelayTime); }


#define BattleForces_Source_BattleForces_Public_AOTDefenceGameMode_h_12_PROLOG
#define BattleForces_Source_BattleForces_Public_AOTDefenceGameMode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleForces_Source_BattleForces_Public_AOTDefenceGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	BattleForces_Source_BattleForces_Public_AOTDefenceGameMode_h_15_SPARSE_DATA \
	BattleForces_Source_BattleForces_Public_AOTDefenceGameMode_h_15_RPC_WRAPPERS \
	BattleForces_Source_BattleForces_Public_AOTDefenceGameMode_h_15_INCLASS \
	BattleForces_Source_BattleForces_Public_AOTDefenceGameMode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleForces_Source_BattleForces_Public_AOTDefenceGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleForces_Source_BattleForces_Public_AOTDefenceGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	BattleForces_Source_BattleForces_Public_AOTDefenceGameMode_h_15_SPARSE_DATA \
	BattleForces_Source_BattleForces_Public_AOTDefenceGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleForces_Source_BattleForces_Public_AOTDefenceGameMode_h_15_INCLASS_NO_PURE_DECLS \
	BattleForces_Source_BattleForces_Public_AOTDefenceGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTLEFORCES_API UClass* StaticClass<class AAOTDefenceGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleForces_Source_BattleForces_Public_AOTDefenceGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
