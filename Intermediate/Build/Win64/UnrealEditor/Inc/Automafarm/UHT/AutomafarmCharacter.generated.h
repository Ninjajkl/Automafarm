// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/AutomafarmCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlaceableObject;
class UCameraComponent;
class USkeletalMeshComponent;
struct FInputActionValue;
#ifdef AUTOMAFARM_AutomafarmCharacter_generated_h
#error "AutomafarmCharacter.generated.h already included, missing '#pragma once' in AutomafarmCharacter.h"
#endif
#define AUTOMAFARM_AutomafarmCharacter_generated_h

#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmCharacter_h_14_DELEGATE \
AUTOMAFARM_API void FKFOnPlayerMoved_DelegateWrapper(const FMulticastScriptDelegate& KFOnPlayerMoved, FVector PlayerLoc);


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmCharacter_h_19_SPARSE_DATA
#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmCharacter_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCurrHotbarSlot); \
	DECLARE_FUNCTION(execRotateByYaw); \
	DECLARE_FUNCTION(execRoundVector); \
	DECLARE_FUNCTION(execPlaceHeldItem); \
	DECLARE_FUNCTION(execValidPlacement); \
	DECLARE_FUNCTION(execAbsoluteToGrid); \
	DECLARE_FUNCTION(execGetFirstPersonCameraComponent); \
	DECLARE_FUNCTION(execGetMesh1P); \
	DECLARE_FUNCTION(execInteract); \
	DECLARE_FUNCTION(execLook); \
	DECLARE_FUNCTION(execMove);


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCurrHotbarSlot); \
	DECLARE_FUNCTION(execRotateByYaw); \
	DECLARE_FUNCTION(execRoundVector); \
	DECLARE_FUNCTION(execPlaceHeldItem); \
	DECLARE_FUNCTION(execValidPlacement); \
	DECLARE_FUNCTION(execAbsoluteToGrid); \
	DECLARE_FUNCTION(execGetFirstPersonCameraComponent); \
	DECLARE_FUNCTION(execGetMesh1P); \
	DECLARE_FUNCTION(execInteract); \
	DECLARE_FUNCTION(execLook); \
	DECLARE_FUNCTION(execMove);


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmCharacter_h_19_ACCESSORS
#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmCharacter_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAutomafarmCharacter(); \
	friend struct Z_Construct_UClass_AAutomafarmCharacter_Statics; \
public: \
	DECLARE_CLASS(AAutomafarmCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Automafarm"), NO_API) \
	DECLARE_SERIALIZER(AAutomafarmCharacter)


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmCharacter_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAAutomafarmCharacter(); \
	friend struct Z_Construct_UClass_AAutomafarmCharacter_Statics; \
public: \
	DECLARE_CLASS(AAutomafarmCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Automafarm"), NO_API) \
	DECLARE_SERIALIZER(AAutomafarmCharacter)


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmCharacter_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAutomafarmCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAutomafarmCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAutomafarmCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAutomafarmCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAutomafarmCharacter(AAutomafarmCharacter&&); \
	NO_API AAutomafarmCharacter(const AAutomafarmCharacter&); \
public: \
	NO_API virtual ~AAutomafarmCharacter();


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAutomafarmCharacter(AAutomafarmCharacter&&); \
	NO_API AAutomafarmCharacter(const AAutomafarmCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAutomafarmCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAutomafarmCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAutomafarmCharacter) \
	NO_API virtual ~AAutomafarmCharacter();


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmCharacter_h_16_PROLOG
#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmCharacter_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmCharacter_h_19_SPARSE_DATA \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmCharacter_h_19_RPC_WRAPPERS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmCharacter_h_19_ACCESSORS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmCharacter_h_19_INCLASS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmCharacter_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmCharacter_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmCharacter_h_19_SPARSE_DATA \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmCharacter_h_19_ACCESSORS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmCharacter_h_19_INCLASS_NO_PURE_DECLS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOMAFARM_API UClass* StaticClass<class AAutomafarmCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
