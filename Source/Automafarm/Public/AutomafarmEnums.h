// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AutomafarmEnums.generated.h"

UENUM(BlueprintType)
enum class ETileType : uint8 {
	BASEBLOCK UMETA(DisplayName = "BaseBlock"),
	INTERACTABLEBLOCK UMETA(DisplayName = "InteractableBlock"),
	PIVOTPAPER UMETA(DisplayName = "PivotPaper"),
	DEFAULT UMETA(DisplayName = "Default")
};
