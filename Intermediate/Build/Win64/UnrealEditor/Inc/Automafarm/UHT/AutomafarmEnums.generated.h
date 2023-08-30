// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Library/AutomafarmEnums.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOMAFARM_AutomafarmEnums_generated_h
#error "AutomafarmEnums.generated.h already included, missing '#pragma once' in AutomafarmEnums.h"
#endif
#define AUTOMAFARM_AutomafarmEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Ninja_OneDrive_Documents_Programming_Unreal_Projects_Automafarm_Source_Automafarm_Public_Library_AutomafarmEnums_h


#define FOREACH_ENUM_ETILETYPE(op) \
	op(ETileType::BASEBLOCK) \
	op(ETileType::INTERACTABLEBLOCK) \
	op(ETileType::PIVOTPAPER) \
	op(ETileType::DEFAULT) 

enum class ETileType : uint8;
template<> struct TIsUEnumClass<ETileType> { enum { Value = true }; };
template<> AUTOMAFARM_API UEnum* StaticEnum<ETileType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
