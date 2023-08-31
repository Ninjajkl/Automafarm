// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/SlotPreview.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSlotStruct;
#ifdef AUTOMAFARM_SlotPreview_generated_h
#error "SlotPreview.generated.h already included, missing '#pragma once' in SlotPreview.h"
#endif
#define AUTOMAFARM_SlotPreview_generated_h

#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_SlotPreview_h_19_SPARSE_DATA
#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_SlotPreview_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRefreshSlot); \
	DECLARE_FUNCTION(execInit);


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_SlotPreview_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRefreshSlot); \
	DECLARE_FUNCTION(execInit);


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_SlotPreview_h_19_ACCESSORS
#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_SlotPreview_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSlotPreview(); \
	friend struct Z_Construct_UClass_USlotPreview_Statics; \
public: \
	DECLARE_CLASS(USlotPreview, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Automafarm"), NO_API) \
	DECLARE_SERIALIZER(USlotPreview)


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_SlotPreview_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUSlotPreview(); \
	friend struct Z_Construct_UClass_USlotPreview_Statics; \
public: \
	DECLARE_CLASS(USlotPreview, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Automafarm"), NO_API) \
	DECLARE_SERIALIZER(USlotPreview)


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_SlotPreview_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USlotPreview(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlotPreview) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlotPreview); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlotPreview); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USlotPreview(USlotPreview&&); \
	NO_API USlotPreview(const USlotPreview&); \
public: \
	NO_API virtual ~USlotPreview();


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_SlotPreview_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USlotPreview(USlotPreview&&); \
	NO_API USlotPreview(const USlotPreview&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlotPreview); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlotPreview); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlotPreview) \
	NO_API virtual ~USlotPreview();


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_SlotPreview_h_16_PROLOG
#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_SlotPreview_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_SlotPreview_h_19_SPARSE_DATA \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_SlotPreview_h_19_RPC_WRAPPERS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_SlotPreview_h_19_ACCESSORS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_SlotPreview_h_19_INCLASS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_SlotPreview_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_SlotPreview_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_SlotPreview_h_19_SPARSE_DATA \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_SlotPreview_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_SlotPreview_h_19_ACCESSORS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_SlotPreview_h_19_INCLASS_NO_PURE_DECLS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_SlotPreview_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOMAFARM_API UClass* StaticClass<class USlotPreview>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_SlotPreview_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
