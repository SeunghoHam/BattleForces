// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTLEFORCES_Camera_generated_h
#error "Camera.generated.h already included, missing '#pragma once' in Camera.h"
#endif
#define BATTLEFORCES_Camera_generated_h

#define BattleForces_Source_BattleForces_Public_Camera_h_13_SPARSE_DATA
#define BattleForces_Source_BattleForces_Public_Camera_h_13_RPC_WRAPPERS
#define BattleForces_Source_BattleForces_Public_Camera_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define BattleForces_Source_BattleForces_Public_Camera_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACamera(); \
	friend struct Z_Construct_UClass_ACamera_Statics; \
public: \
	DECLARE_CLASS(ACamera, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattleForces"), NO_API) \
	DECLARE_SERIALIZER(ACamera) \
	virtual UObject* _getUObject() const override { return const_cast<ACamera*>(this); }


#define BattleForces_Source_BattleForces_Public_Camera_h_13_INCLASS \
private: \
	static void StaticRegisterNativesACamera(); \
	friend struct Z_Construct_UClass_ACamera_Statics; \
public: \
	DECLARE_CLASS(ACamera, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattleForces"), NO_API) \
	DECLARE_SERIALIZER(ACamera) \
	virtual UObject* _getUObject() const override { return const_cast<ACamera*>(this); }


#define BattleForces_Source_BattleForces_Public_Camera_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACamera(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACamera) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACamera); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACamera(ACamera&&); \
	NO_API ACamera(const ACamera&); \
public:


#define BattleForces_Source_BattleForces_Public_Camera_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACamera(ACamera&&); \
	NO_API ACamera(const ACamera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACamera); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACamera)


#define BattleForces_Source_BattleForces_Public_Camera_h_13_PRIVATE_PROPERTY_OFFSET
#define BattleForces_Source_BattleForces_Public_Camera_h_10_PROLOG
#define BattleForces_Source_BattleForces_Public_Camera_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleForces_Source_BattleForces_Public_Camera_h_13_PRIVATE_PROPERTY_OFFSET \
	BattleForces_Source_BattleForces_Public_Camera_h_13_SPARSE_DATA \
	BattleForces_Source_BattleForces_Public_Camera_h_13_RPC_WRAPPERS \
	BattleForces_Source_BattleForces_Public_Camera_h_13_INCLASS \
	BattleForces_Source_BattleForces_Public_Camera_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleForces_Source_BattleForces_Public_Camera_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleForces_Source_BattleForces_Public_Camera_h_13_PRIVATE_PROPERTY_OFFSET \
	BattleForces_Source_BattleForces_Public_Camera_h_13_SPARSE_DATA \
	BattleForces_Source_BattleForces_Public_Camera_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleForces_Source_BattleForces_Public_Camera_h_13_INCLASS_NO_PURE_DECLS \
	BattleForces_Source_BattleForces_Public_Camera_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTLEFORCES_API UClass* StaticClass<class ACamera>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleForces_Source_BattleForces_Public_Camera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
