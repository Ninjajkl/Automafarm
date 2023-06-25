// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../BaseBlock.h"
#include "../PivotPaper.h"
#include "AutomafarmEnums.h"
#include "TileHolder.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FTileHolder
{
	GENERATED_BODY()

	//Defaults to PivotPaper
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		ETileType TileType = ETileType::DEFAULT;
	UPROPERTY()
		UBaseBlock* CoreBlock = nullptr;
	UPROPERTY()
		UPivotPaper* CorePivotPaper = nullptr;
};