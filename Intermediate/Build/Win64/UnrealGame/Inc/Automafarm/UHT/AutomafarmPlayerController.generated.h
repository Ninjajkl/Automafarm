// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/AutomafarmPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionValue;
#ifdef AUTOMAFARM_AutomafarmPlayerController_generated_h
#error "AutomafarmPlayerController.generated.h already included, missing '#pragma once' in AutomafarmPlayerController.h"
#endif
#define AUTOMAFARM_AutomafarmPlayerController_generated_h

#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmPlayerController_h_17_SPARSE_DATA
#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmPlayerController_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInventory); \
	DECLARE_FUNCTION(execInteract); \
	DECLARE_FUNCTION(execLook); \
	DECLARE_FUNCTION(execMove); \
	DECLARE_FUNCTION(execStopJumping); \
	DECLARE_FUNCTION(execJump);


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmPlayerController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInventory); \
	DECLARE_FUNCTION(execInteract); \
	DECLARE_FUNCTION(execLook); \
	DECLARE_FUNCTION(execMove); \
	DECLARE_FUNCTION(execStopJumping); \
	DECLARE_FUNCTION(execJump);


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmPlayerController_h_17_ACCESSORS
#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmPlayerController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAutomafarmPlayerController(); \
	friend struct Z_Construct_UClass_AAutomafarmPlayerController_Statics; \
public: \
	DECLARE_CLASS(AAutomafarmPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Automafarm"), NO_API) \
	DECLARE_SERIALIZER(AAutomafarmPlayerController)


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmPlayerController_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAAutomafarmPlayerController(); \
	friend struct Z_Construct_UClass_AAutomafarmPlayerController_Statics; \
public: \
	DECLARE_CLASS(AAutomafarmPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Automafarm"), NO_API) \
	DECLARE_SERIALIZER(AAutomafarmPlayerController)


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmPlayerController_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAutomafarmPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAutomafarmPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAutomafarmPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAutomafarmPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAutomafarmPlayerController(AAutomafarmPlayerController&&); \
	NO_API AAutomafarmPlayerController(const AAutomafarmPlayerController&); \
public: \
	NO_API virtual ~AAutomafarmPlayerController();


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmPlayerController_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAutomafarmPlayerController(AAutomafarmPlayerController&&); \
	NO_API AAutomafarmPlayerController(const AAutomafarmPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAutomafarmPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAutomafarmPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAutomafarmPlayerController) \
	NO_API virtual ~AAutomafarmPlayerController();


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmPlayerController_h_14_PROLOG
#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmPlayerController_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmPlayerController_h_17_SPARSE_DATA \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmPlayerController_h_17_RPC_WRAPPERS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmPlayerController_h_17_ACCESSORS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmPlayerController_h_17_INCLASS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmPlayerController_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmPlayerController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmPlayerController_h_17_SPARSE_DATA \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmPlayerController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmPlayerController_h_17_ACCESSORS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmPlayerController_h_17_INCLASS_NO_PURE_DECLS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmPlayerController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOMAFARM_API UClass* StaticClass<class AAutomafarmPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
