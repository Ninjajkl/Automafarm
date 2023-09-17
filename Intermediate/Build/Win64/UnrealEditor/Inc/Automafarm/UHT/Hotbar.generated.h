// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Hotbar.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInventory;
#ifdef AUTOMAFARM_Hotbar_generated_h
#error "Hotbar.generated.h already included, missing '#pragma once' in Hotbar.h"
#endif
#define AUTOMAFARM_Hotbar_generated_h

#define FID_Projects_Automafarm_Source_Automafarm_Public_UI_Hotbar_h_17_SPARSE_DATA
#define FID_Projects_Automafarm_Source_Automafarm_Public_UI_Hotbar_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_Automafarm_Source_Automafarm_Public_UI_Hotbar_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_Automafarm_Source_Automafarm_Public_UI_Hotbar_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRefreshHotbar); \
	DECLARE_FUNCTION(execHotbarSlotUpdated); \
	DECLARE_FUNCTION(execInit);


#define FID_Projects_Automafarm_Source_Automafarm_Public_UI_Hotbar_h_17_ACCESSORS
#define FID_Projects_Automafarm_Source_Automafarm_Public_UI_Hotbar_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHotbar(); \
	friend struct Z_Construct_UClass_UHotbar_Statics; \
public: \
	DECLARE_CLASS(UHotbar, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Automafarm"), NO_API) \
	DECLARE_SERIALIZER(UHotbar)


#define FID_Projects_Automafarm_Source_Automafarm_Public_UI_Hotbar_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHotbar(UHotbar&&); \
	NO_API UHotbar(const UHotbar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHotbar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHotbar); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHotbar) \
	NO_API virtual ~UHotbar();


#define FID_Projects_Automafarm_Source_Automafarm_Public_UI_Hotbar_h_14_PROLOG
#define FID_Projects_Automafarm_Source_Automafarm_Public_UI_Hotbar_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Automafarm_Source_Automafarm_Public_UI_Hotbar_h_17_SPARSE_DATA \
	FID_Projects_Automafarm_Source_Automafarm_Public_UI_Hotbar_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_Automafarm_Source_Automafarm_Public_UI_Hotbar_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_Automafarm_Source_Automafarm_Public_UI_Hotbar_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Automafarm_Source_Automafarm_Public_UI_Hotbar_h_17_ACCESSORS \
	FID_Projects_Automafarm_Source_Automafarm_Public_UI_Hotbar_h_17_INCLASS_NO_PURE_DECLS \
	FID_Projects_Automafarm_Source_Automafarm_Public_UI_Hotbar_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOMAFARM_API UClass* StaticClass<class UHotbar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Automafarm_Source_Automafarm_Public_UI_Hotbar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
