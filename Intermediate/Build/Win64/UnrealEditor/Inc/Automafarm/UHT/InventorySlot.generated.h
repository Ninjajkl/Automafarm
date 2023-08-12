// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/InventorySlot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInventory;
struct FSlotStruct;
#ifdef AUTOMAFARM_InventorySlot_generated_h
#error "InventorySlot.generated.h already included, missing '#pragma once' in InventorySlot.h"
#endif
#define AUTOMAFARM_InventorySlot_generated_h

#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_InventorySlot_h_21_SPARSE_DATA
#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_InventorySlot_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRefreshSlot); \
	DECLARE_FUNCTION(execInit);


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_InventorySlot_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRefreshSlot); \
	DECLARE_FUNCTION(execInit);


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_InventorySlot_h_21_ACCESSORS
#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_InventorySlot_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventorySlot(); \
	friend struct Z_Construct_UClass_UInventorySlot_Statics; \
public: \
	DECLARE_CLASS(UInventorySlot, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Automafarm"), NO_API) \
	DECLARE_SERIALIZER(UInventorySlot)


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_InventorySlot_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUInventorySlot(); \
	friend struct Z_Construct_UClass_UInventorySlot_Statics; \
public: \
	DECLARE_CLASS(UInventorySlot, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Automafarm"), NO_API) \
	DECLARE_SERIALIZER(UInventorySlot)


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_InventorySlot_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventorySlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventorySlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventorySlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventorySlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventorySlot(UInventorySlot&&); \
	NO_API UInventorySlot(const UInventorySlot&); \
public: \
	NO_API virtual ~UInventorySlot();


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_InventorySlot_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventorySlot(UInventorySlot&&); \
	NO_API UInventorySlot(const UInventorySlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventorySlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventorySlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventorySlot) \
	NO_API virtual ~UInventorySlot();


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_InventorySlot_h_18_PROLOG
#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_InventorySlot_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_InventorySlot_h_21_SPARSE_DATA \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_InventorySlot_h_21_RPC_WRAPPERS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_InventorySlot_h_21_ACCESSORS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_InventorySlot_h_21_INCLASS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_InventorySlot_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_InventorySlot_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_InventorySlot_h_21_SPARSE_DATA \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_InventorySlot_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_InventorySlot_h_21_ACCESSORS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_InventorySlot_h_21_INCLASS_NO_PURE_DECLS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_InventorySlot_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOMAFARM_API UClass* StaticClass<class UInventorySlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_InventorySlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
