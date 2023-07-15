// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOMAFARM_Inventory_generated_h
#error "Inventory.generated.h already included, missing '#pragma once' in Inventory.h"
#endif
#define AUTOMAFARM_Inventory_generated_h

#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Inventory_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSlotStruct_Statics; \
	AUTOMAFARM_API static class UScriptStruct* StaticStruct();


template<> AUTOMAFARM_API UScriptStruct* StaticStruct<struct FSlotStruct>();

#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Inventory_h_27_SPARSE_DATA
#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Inventory_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveFromInventory); \
	DECLARE_FUNCTION(execAddToInventory);


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Inventory_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveFromInventory); \
	DECLARE_FUNCTION(execAddToInventory);


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Inventory_h_27_ACCESSORS
#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Inventory_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventory(); \
	friend struct Z_Construct_UClass_UInventory_Statics; \
public: \
	DECLARE_CLASS(UInventory, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Automafarm"), NO_API) \
	DECLARE_SERIALIZER(UInventory)


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Inventory_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUInventory(); \
	friend struct Z_Construct_UClass_UInventory_Statics; \
public: \
	DECLARE_CLASS(UInventory, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Automafarm"), NO_API) \
	DECLARE_SERIALIZER(UInventory)


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Inventory_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventory(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventory(UInventory&&); \
	NO_API UInventory(const UInventory&); \
public: \
	NO_API virtual ~UInventory();


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Inventory_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventory(UInventory&&); \
	NO_API UInventory(const UInventory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventory) \
	NO_API virtual ~UInventory();


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Inventory_h_24_PROLOG
#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Inventory_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Inventory_h_27_SPARSE_DATA \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Inventory_h_27_RPC_WRAPPERS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Inventory_h_27_ACCESSORS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Inventory_h_27_INCLASS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Inventory_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Inventory_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Inventory_h_27_SPARSE_DATA \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Inventory_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Inventory_h_27_ACCESSORS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Inventory_h_27_INCLASS_NO_PURE_DECLS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Inventory_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOMAFARM_API UClass* StaticClass<class UInventory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Inventory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS