// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/PlayerHud.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AInteractableBlock;
class UInventory;
#ifdef AUTOMAFARM_PlayerHud_generated_h
#error "PlayerHud.generated.h already included, missing '#pragma once' in PlayerHud.h"
#endif
#define AUTOMAFARM_PlayerHud_generated_h

#define FID_Projects_Automafarm_Source_Automafarm_Public_UI_PlayerHud_h_19_SPARSE_DATA
#define FID_Projects_Automafarm_Source_Automafarm_Public_UI_PlayerHud_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_Automafarm_Source_Automafarm_Public_UI_PlayerHud_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_Automafarm_Source_Automafarm_Public_UI_PlayerHud_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execShowContainer); \
	DECLARE_FUNCTION(execDisplayPlayerInventory); \
	DECLARE_FUNCTION(execInit);


#define FID_Projects_Automafarm_Source_Automafarm_Public_UI_PlayerHud_h_19_ACCESSORS
#define FID_Projects_Automafarm_Source_Automafarm_Public_UI_PlayerHud_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerHud(); \
	friend struct Z_Construct_UClass_UPlayerHud_Statics; \
public: \
	DECLARE_CLASS(UPlayerHud, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Automafarm"), NO_API) \
	DECLARE_SERIALIZER(UPlayerHud)


#define FID_Projects_Automafarm_Source_Automafarm_Public_UI_PlayerHud_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerHud(UPlayerHud&&); \
	NO_API UPlayerHud(const UPlayerHud&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerHud); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerHud); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerHud) \
	NO_API virtual ~UPlayerHud();


#define FID_Projects_Automafarm_Source_Automafarm_Public_UI_PlayerHud_h_16_PROLOG
#define FID_Projects_Automafarm_Source_Automafarm_Public_UI_PlayerHud_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Automafarm_Source_Automafarm_Public_UI_PlayerHud_h_19_SPARSE_DATA \
	FID_Projects_Automafarm_Source_Automafarm_Public_UI_PlayerHud_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_Automafarm_Source_Automafarm_Public_UI_PlayerHud_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_Automafarm_Source_Automafarm_Public_UI_PlayerHud_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Automafarm_Source_Automafarm_Public_UI_PlayerHud_h_19_ACCESSORS \
	FID_Projects_Automafarm_Source_Automafarm_Public_UI_PlayerHud_h_19_INCLASS_NO_PURE_DECLS \
	FID_Projects_Automafarm_Source_Automafarm_Public_UI_PlayerHud_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOMAFARM_API UClass* StaticClass<class UPlayerHud>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Automafarm_Source_Automafarm_Public_UI_PlayerHud_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
