// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/InventoryGrid.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGridPanel;
class UInventory;
#ifdef AUTOMAFARM_InventoryGrid_generated_h
#error "InventoryGrid.generated.h already included, missing '#pragma once' in InventoryGrid.h"
#endif
#define AUTOMAFARM_InventoryGrid_generated_h

#define FID_Projects_Automafarm_Source_Automafarm_Public_UI_InventoryGrid_h_18_SPARSE_DATA
#define FID_Projects_Automafarm_Source_Automafarm_Public_UI_InventoryGrid_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_Automafarm_Source_Automafarm_Public_UI_InventoryGrid_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_Automafarm_Source_Automafarm_Public_UI_InventoryGrid_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRefreshInventory); \
	DECLARE_FUNCTION(execInit);


#define FID_Projects_Automafarm_Source_Automafarm_Public_UI_InventoryGrid_h_18_ACCESSORS
#define FID_Projects_Automafarm_Source_Automafarm_Public_UI_InventoryGrid_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryGrid(); \
	friend struct Z_Construct_UClass_UInventoryGrid_Statics; \
public: \
	DECLARE_CLASS(UInventoryGrid, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Automafarm"), NO_API) \
	DECLARE_SERIALIZER(UInventoryGrid)


#define FID_Projects_Automafarm_Source_Automafarm_Public_UI_InventoryGrid_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryGrid(UInventoryGrid&&); \
	NO_API UInventoryGrid(const UInventoryGrid&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryGrid); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryGrid); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryGrid) \
	NO_API virtual ~UInventoryGrid();


#define FID_Projects_Automafarm_Source_Automafarm_Public_UI_InventoryGrid_h_15_PROLOG
#define FID_Projects_Automafarm_Source_Automafarm_Public_UI_InventoryGrid_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Automafarm_Source_Automafarm_Public_UI_InventoryGrid_h_18_SPARSE_DATA \
	FID_Projects_Automafarm_Source_Automafarm_Public_UI_InventoryGrid_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_Automafarm_Source_Automafarm_Public_UI_InventoryGrid_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_Automafarm_Source_Automafarm_Public_UI_InventoryGrid_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Automafarm_Source_Automafarm_Public_UI_InventoryGrid_h_18_ACCESSORS \
	FID_Projects_Automafarm_Source_Automafarm_Public_UI_InventoryGrid_h_18_INCLASS_NO_PURE_DECLS \
	FID_Projects_Automafarm_Source_Automafarm_Public_UI_InventoryGrid_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOMAFARM_API UClass* StaticClass<class UInventoryGrid>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Automafarm_Source_Automafarm_Public_UI_InventoryGrid_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
