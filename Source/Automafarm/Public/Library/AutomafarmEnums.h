// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//Custom Classes
//Other Classes
#include "CoreMinimal.h"
//Generated File
#include "AutomafarmEnums.generated.h"

UENUM(BlueprintType)
enum class ETileType : uint8 {
	BASEBLOCK UMETA(DisplayName = "BaseBlock"),
	INTERACTABLEBLOCK UMETA(DisplayName = "InteractableBlock"),
	PIVOTPAPER UMETA(DisplayName = "PivotPaper"),
	REFERENCER UMETA(DisplayName = "Referencer"),
	DEFAULT UMETA(DisplayName = "Default")
};
