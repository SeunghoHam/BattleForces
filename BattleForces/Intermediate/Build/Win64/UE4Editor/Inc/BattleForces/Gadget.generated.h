// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTLEFORCES_Gadget_generated_h
#error "Gadget.generated.h already included, missing '#pragma once' in Gadget.h"
#endif
#define BATTLEFORCES_Gadget_generated_h

#define BattleForces_Source_BattleForces_Public_Gadget_h_13_SPARSE_DATA
#define BattleForces_Source_BattleForces_Public_Gadget_h_13_RPC_WRAPPERS
#define BattleForces_Source_BattleForces_Public_Gadget_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define BattleForces_Source_BattleForces_Public_Gadget_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BATTLEFORCES_API UGadget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGadget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BATTLEFORCES_API, UGadget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGadget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BATTLEFORCES_API UGadget(UGadget&&); \
	BATTLEFORCES_API UGadget(const UGadget&); \
public:


#define BattleForces_Source_BattleForces_Public_Gadget_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BATTLEFORCES_API UGadget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BATTLEFORCES_API UGadget(UGadget&&); \
	BATTLEFORCES_API UGadget(const UGadget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BATTLEFORCES_API, UGadget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGadget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGadget)


#define BattleForces_Source_BattleForces_Public_Gadget_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGadget(); \
	friend struct Z_Construct_UClass_UGadget_Statics; \
public: \
	DECLARE_CLASS(UGadget, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BattleForces"), BATTLEFORCES_API) \
	DECLARE_SERIALIZER(UGadget)


#define BattleForces_Source_BattleForces_Public_Gadget_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	BattleForces_Source_BattleForces_Public_Gadget_h_13_GENERATED_UINTERFACE_BODY() \
	BattleForces_Source_BattleForces_Public_Gadget_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleForces_Source_BattleForces_Public_Gadget_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	BattleForces_Source_BattleForces_Public_Gadget_h_13_GENERATED_UINTERFACE_BODY() \
	BattleForces_Source_BattleForces_Public_Gadget_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleForces_Source_BattleForces_Public_Gadget_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGadget() {} \
public: \
	typedef UGadget UClassType; \
	typedef IGadget ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define BattleForces_Source_BattleForces_Public_Gadget_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IGadget() {} \
public: \
	typedef UGadget UClassType; \
	typedef IGadget ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define BattleForces_Source_BattleForces_Public_Gadget_h_10_PROLOG
#define BattleForces_Source_BattleForces_Public_Gadget_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleForces_Source_BattleForces_Public_Gadget_h_13_SPARSE_DATA \
	BattleForces_Source_BattleForces_Public_Gadget_h_13_RPC_WRAPPERS \
	BattleForces_Source_BattleForces_Public_Gadget_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleForces_Source_BattleForces_Public_Gadget_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleForces_Source_BattleForces_Public_Gadget_h_13_SPARSE_DATA \
	BattleForces_Source_BattleForces_Public_Gadget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleForces_Source_BattleForces_Public_Gadget_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTLEFORCES_API UClass* StaticClass<class UGadget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleForces_Source_BattleForces_Public_Gadget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
