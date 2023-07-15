// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Crop.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTimespan;
#ifdef AUTOMAFARM_Crop_generated_h
#error "Crop.generated.h already included, missing '#pragma once' in Crop.h"
#endif
#define AUTOMAFARM_Crop_generated_h

#define FID_Projects_Automafarm_5_2_Source_Automafarm_Crop_h_15_SPARSE_DATA
#define FID_Projects_Automafarm_5_2_Source_Automafarm_Crop_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateCurrentAnimSeq); \
	DECLARE_FUNCTION(execUpdateTime);


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Crop_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateCurrentAnimSeq); \
	DECLARE_FUNCTION(execUpdateTime);


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Crop_h_15_ACCESSORS
#define FID_Projects_Automafarm_5_2_Source_Automafarm_Crop_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACrop(); \
	friend struct Z_Construct_UClass_ACrop_Statics; \
public: \
	DECLARE_CLASS(ACrop, APivotPaper, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Automafarm"), NO_API) \
	DECLARE_SERIALIZER(ACrop)


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Crop_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACrop(); \
	friend struct Z_Construct_UClass_ACrop_Statics; \
public: \
	DECLARE_CLASS(ACrop, APivotPaper, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Automafarm"), NO_API) \
	DECLARE_SERIALIZER(ACrop)


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Crop_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACrop(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACrop) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACrop); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACrop); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACrop(ACrop&&); \
	NO_API ACrop(const ACrop&); \
public: \
	NO_API virtual ~ACrop();


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Crop_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACrop(ACrop&&); \
	NO_API ACrop(const ACrop&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACrop); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACrop); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACrop) \
	NO_API virtual ~ACrop();


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Crop_h_12_PROLOG
#define FID_Projects_Automafarm_5_2_Source_Automafarm_Crop_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Crop_h_15_SPARSE_DATA \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Crop_h_15_RPC_WRAPPERS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Crop_h_15_ACCESSORS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Crop_h_15_INCLASS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Crop_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Crop_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Crop_h_15_SPARSE_DATA \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Crop_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Crop_h_15_ACCESSORS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Crop_h_15_INCLASS_NO_PURE_DECLS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Crop_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOMAFARM_API UClass* StaticClass<class ACrop>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Automafarm_5_2_Source_Automafarm_Crop_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
