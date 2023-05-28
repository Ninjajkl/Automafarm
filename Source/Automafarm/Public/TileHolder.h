// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TileHolder.generated.h"

/**
 * 
 */
UCLASS()
class AUTOMAFARM_API UTileHolder : public UClass
{
	GENERATED_BODY()
public:
	UTileHolder();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		TileTypeEnum TileType;
};

UENUM(BlueprintType)
enum class TileTypeEnum : uint8 {
	BLOCK = 0 UMETA(DisplayName = "Block"),
	PIVOTPAPER = 1 UMETA(DisplayName = "PivotPaper"),
	FILLER = 2 UMETA(DisplayName = "Filler")
};
