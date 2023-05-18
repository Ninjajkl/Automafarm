// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AutomafarmProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef AUTOMAFARM_AutomafarmProjectile_generated_h
#error "AutomafarmProjectile.generated.h already included, missing '#pragma once' in AutomafarmProjectile.h"
#endif
#define AUTOMAFARM_AutomafarmProjectile_generated_h

#define FID_Projects_Automafarm_5_2_Source_Automafarm_AutomafarmProjectile_h_15_SPARSE_DATA
#define FID_Projects_Automafarm_5_2_Source_Automafarm_AutomafarmProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Projects_Automafarm_5_2_Source_Automafarm_AutomafarmProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Projects_Automafarm_5_2_Source_Automafarm_AutomafarmProjectile_h_15_ACCESSORS
#define FID_Projects_Automafarm_5_2_Source_Automafarm_AutomafarmProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAutomafarmProjectile(); \
	friend struct Z_Construct_UClass_AAutomafarmProjectile_Statics; \
public: \
	DECLARE_CLASS(AAutomafarmProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Automafarm"), NO_API) \
	DECLARE_SERIALIZER(AAutomafarmProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Projects_Automafarm_5_2_Source_Automafarm_AutomafarmProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAAutomafarmProjectile(); \
	friend struct Z_Construct_UClass_AAutomafarmProjectile_Statics; \
public: \
	DECLARE_CLASS(AAutomafarmProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Automafarm"), NO_API) \
	DECLARE_SERIALIZER(AAutomafarmProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Projects_Automafarm_5_2_Source_Automafarm_AutomafarmProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAutomafarmProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAutomafarmProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAutomafarmProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAutomafarmProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAutomafarmProjectile(AAutomafarmProjectile&&); \
	NO_API AAutomafarmProjectile(const AAutomafarmProjectile&); \
public: \
	NO_API virtual ~AAutomafarmProjectile();


#define FID_Projects_Automafarm_5_2_Source_Automafarm_AutomafarmProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAutomafarmProjectile(AAutomafarmProjectile&&); \
	NO_API AAutomafarmProjectile(const AAutomafarmProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAutomafarmProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAutomafarmProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAutomafarmProjectile) \
	NO_API virtual ~AAutomafarmProjectile();


#define FID_Projects_Automafarm_5_2_Source_Automafarm_AutomafarmProjectile_h_12_PROLOG
#define FID_Projects_Automafarm_5_2_Source_Automafarm_AutomafarmProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Automafarm_5_2_Source_Automafarm_AutomafarmProjectile_h_15_SPARSE_DATA \
	FID_Projects_Automafarm_5_2_Source_Automafarm_AutomafarmProjectile_h_15_RPC_WRAPPERS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_AutomafarmProjectile_h_15_ACCESSORS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_AutomafarmProjectile_h_15_INCLASS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_AutomafarmProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_Automafarm_5_2_Source_Automafarm_AutomafarmProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Automafarm_5_2_Source_Automafarm_AutomafarmProjectile_h_15_SPARSE_DATA \
	FID_Projects_Automafarm_5_2_Source_Automafarm_AutomafarmProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_AutomafarmProjectile_h_15_ACCESSORS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_AutomafarmProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_AutomafarmProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOMAFARM_API UClass* StaticClass<class AAutomafarmProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Automafarm_5_2_Source_Automafarm_AutomafarmProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
