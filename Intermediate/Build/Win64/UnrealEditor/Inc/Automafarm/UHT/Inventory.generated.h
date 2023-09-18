// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Systems/Inventory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInventory;
struct FItemStruct;
struct FSlotStruct;
#ifdef AUTOMAFARM_Inventory_generated_h
#error "Inventory.generated.h already included, missing '#pragma once' in Inventory.h"
#endif
#define AUTOMAFARM_Inventory_generated_h

#define FID_Projects_Automafarm_Source_Automafarm_Public_Systems_Inventory_h_15_DELEGATE \
AUTOMAFARM_API void FKFOnInventoryUpdated_DelegateWrapper(const FMulticastScriptDelegate& KFOnInventoryUpdated, UInventory* Inventory);


#define FID_Projects_Automafarm_Source_Automafarm_Public_Systems_Inventory_h_20_SPARSE_DATA
#define FID_Projects_Automafarm_Source_Automafarm_Public_Systems_Inventory_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_Automafarm_Source_Automafarm_Public_Systems_Inventory_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_Automafarm_Source_Automafarm_Public_Systems_Inventory_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConvertInventoryToArray); \
	DECLARE_FUNCTION(execTransferSlots); \
	DECLARE_FUNCTION(execIncreaseSlotByAmount); \
	DECLARE_FUNCTION(execGetRandomItems); \
	DECLARE_FUNCTION(execGetRandomItem); \
	DECLARE_FUNCTION(execAddItemArrayToInventory); \
	DECLARE_FUNCTION(execAddItemToInventoryBySlot); \
	DECLARE_FUNCTION(execAddItemToInventory); \
	DECLARE_FUNCTION(execReduceSlotByAmount); \
	DECLARE_FUNCTION(execEmptySlot);


#define FID_Projects_Automafarm_Source_Automafarm_Public_Systems_Inventory_h_20_ACCESSORS
#define FID_Projects_Automafarm_Source_Automafarm_Public_Systems_Inventory_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventory(); \
	friend struct Z_Construct_UClass_UInventory_Statics; \
public: \
	DECLARE_CLASS(UInventory, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Automafarm"), NO_API) \
	DECLARE_SERIALIZER(UInventory)


#define FID_Projects_Automafarm_Source_Automafarm_Public_Systems_Inventory_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventory(UInventory&&); \
	NO_API UInventory(const UInventory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventory) \
	NO_API virtual ~UInventory();


#define FID_Projects_Automafarm_Source_Automafarm_Public_Systems_Inventory_h_17_PROLOG
#define FID_Projects_Automafarm_Source_Automafarm_Public_Systems_Inventory_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Automafarm_Source_Automafarm_Public_Systems_Inventory_h_20_SPARSE_DATA \
	FID_Projects_Automafarm_Source_Automafarm_Public_Systems_Inventory_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_Automafarm_Source_Automafarm_Public_Systems_Inventory_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_Automafarm_Source_Automafarm_Public_Systems_Inventory_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Automafarm_Source_Automafarm_Public_Systems_Inventory_h_20_ACCESSORS \
	FID_Projects_Automafarm_Source_Automafarm_Public_Systems_Inventory_h_20_INCLASS_NO_PURE_DECLS \
	FID_Projects_Automafarm_Source_Automafarm_Public_Systems_Inventory_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOMAFARM_API UClass* StaticClass<class UInventory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Automafarm_Source_Automafarm_Public_Systems_Inventory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
