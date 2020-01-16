// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEALTHGAME_FPSOBJ_generated_h
#error "FPSOBJ.generated.h already included, missing '#pragma once' in FPSOBJ.h"
#endif
#define STEALTHGAME_FPSOBJ_generated_h

#define StealthGame_Source_StealthGame_Public_FPSOBJ_h_15_SPARSE_DATA
#define StealthGame_Source_StealthGame_Public_FPSOBJ_h_15_RPC_WRAPPERS
#define StealthGame_Source_StealthGame_Public_FPSOBJ_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define StealthGame_Source_StealthGame_Public_FPSOBJ_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSOBJ(); \
	friend struct Z_Construct_UClass_AFPSOBJ_Statics; \
public: \
	DECLARE_CLASS(AFPSOBJ, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StealthGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSOBJ)


#define StealthGame_Source_StealthGame_Public_FPSOBJ_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFPSOBJ(); \
	friend struct Z_Construct_UClass_AFPSOBJ_Statics; \
public: \
	DECLARE_CLASS(AFPSOBJ, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StealthGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSOBJ)


#define StealthGame_Source_StealthGame_Public_FPSOBJ_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSOBJ(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSOBJ) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSOBJ); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSOBJ); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSOBJ(AFPSOBJ&&); \
	NO_API AFPSOBJ(const AFPSOBJ&); \
public:


#define StealthGame_Source_StealthGame_Public_FPSOBJ_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSOBJ(AFPSOBJ&&); \
	NO_API AFPSOBJ(const AFPSOBJ&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSOBJ); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSOBJ); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSOBJ)


#define StealthGame_Source_StealthGame_Public_FPSOBJ_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(AFPSOBJ, MeshComp); } \
	FORCEINLINE static uint32 __PPO__SphereComp() { return STRUCT_OFFSET(AFPSOBJ, SphereComp); } \
	FORCEINLINE static uint32 __PPO__PickupFX() { return STRUCT_OFFSET(AFPSOBJ, PickupFX); }


#define StealthGame_Source_StealthGame_Public_FPSOBJ_h_12_PROLOG
#define StealthGame_Source_StealthGame_Public_FPSOBJ_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_StealthGame_Public_FPSOBJ_h_15_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_StealthGame_Public_FPSOBJ_h_15_SPARSE_DATA \
	StealthGame_Source_StealthGame_Public_FPSOBJ_h_15_RPC_WRAPPERS \
	StealthGame_Source_StealthGame_Public_FPSOBJ_h_15_INCLASS \
	StealthGame_Source_StealthGame_Public_FPSOBJ_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StealthGame_Source_StealthGame_Public_FPSOBJ_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_StealthGame_Public_FPSOBJ_h_15_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_StealthGame_Public_FPSOBJ_h_15_SPARSE_DATA \
	StealthGame_Source_StealthGame_Public_FPSOBJ_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	StealthGame_Source_StealthGame_Public_FPSOBJ_h_15_INCLASS_NO_PURE_DECLS \
	StealthGame_Source_StealthGame_Public_FPSOBJ_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEALTHGAME_API UClass* StaticClass<class AFPSOBJ>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StealthGame_Source_StealthGame_Public_FPSOBJ_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
