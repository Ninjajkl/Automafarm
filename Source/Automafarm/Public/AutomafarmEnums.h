// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AutomafarmEnums.generated.h"

UENUM(BlueprintType)
enum class ETileType : uint8 {
	BLOCK UMETA(DisplayName = "Block"),
	PIVOTPAPER UMETA(DisplayName = "PivotPaper"),
	DEFAULT UMETA(DisplayName = "Default")
};
