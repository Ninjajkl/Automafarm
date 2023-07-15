// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FarmGameStateBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTimespan;
#ifdef AUTOMAFARM_FarmGameStateBase_generated_h
#error "FarmGameStateBase.generated.h already included, missing '#pragma once' in FarmGameStateBase.h"
#endif
#define AUTOMAFARM_FarmGameStateBase_generated_h

#define FID_Projects_Automafarm_5_2_Source_Automafarm_FarmGameStateBase_h_14_DELEGATE \
AUTOMAFARM_API void FKFOnHourPassed_DelegateWrapper(const FMulticastScriptDelegate& KFOnHourPassed, FTimespan GameTimePassed);


#define FID_Projects_Automafarm_5_2_Source_Automafarm_FarmGameStateBase_h_19_SPARSE_DATA
#define FID_Projects_Automafarm_5_2_Source_Automafarm_FarmGameStateBase_h_19_RPC_WRAPPERS
#define FID_Projects_Automafarm_5_2_Source_Automafarm_FarmGameStateBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Projects_Automafarm_5_2_Source_Automafarm_FarmGameStateBase_h_19_ACCESSORS
#define FID_Projects_Automafarm_5_2_Source_Automafarm_FarmGameStateBase_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFarmGameStateBase(); \
	friend struct Z_Construct_UClass_AFarmGameStateBase_Statics; \
public: \
	DECLARE_CLASS(AFarmGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Automafarm"), NO_API) \
	DECLARE_SERIALIZER(AFarmGameStateBase)


#define FID_Projects_Automafarm_5_2_Source_Automafarm_FarmGameStateBase_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAFarmGameStateBase(); \
	friend struct Z_Construct_UClass_AFarmGameStateBase_Statics; \
public: \
	DECLARE_CLASS(AFarmGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Automafarm"), NO_API) \
	DECLARE_SERIALIZER(AFarmGameStateBase)


#define FID_Projects_Automafarm_5_2_Source_Automafarm_FarmGameStateBase_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFarmGameStateBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFarmGameStateBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFarmGameStateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFarmGameStateBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFarmGameStateBase(AFarmGameStateBase&&); \
	NO_API AFarmGameStateBase(const AFarmGameStateBase&); \
public: \
	NO_API virtual ~AFarmGameStateBase();


#define FID_Projects_Automafarm_5_2_Source_Automafarm_FarmGameStateBase_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFarmGameStateBase(AFarmGameStateBase&&); \
	NO_API AFarmGameStateBase(const AFarmGameStateBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFarmGameStateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFarmGameStateBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFarmGameStateBase) \
	NO_API virtual ~AFarmGameStateBase();


#define FID_Projects_Automafarm_5_2_Source_Automafarm_FarmGameStateBase_h_16_PROLOG
#define FID_Projects_Automafarm_5_2_Source_Automafarm_FarmGameStateBase_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Automafarm_5_2_Source_Automafarm_FarmGameStateBase_h_19_SPARSE_DATA \
	FID_Projects_Automafarm_5_2_Source_Automafarm_FarmGameStateBase_h_19_RPC_WRAPPERS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_FarmGameStateBase_h_19_ACCESSORS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_FarmGameStateBase_h_19_INCLASS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_FarmGameStateBase_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_Automafarm_5_2_Source_Automafarm_FarmGameStateBase_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Automafarm_5_2_Source_Automafarm_FarmGameStateBase_h_19_SPARSE_DATA \
	FID_Projects_Automafarm_5_2_Source_Automafarm_FarmGameStateBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_FarmGameStateBase_h_19_ACCESSORS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_FarmGameStateBase_h_19_INCLASS_NO_PURE_DECLS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_FarmGameStateBase_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOMAFARM_API UClass* StaticClass<class AFarmGameStateBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Automafarm_5_2_Source_Automafarm_FarmGameStateBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
