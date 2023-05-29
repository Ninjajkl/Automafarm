// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "TileHolder.h"
#include "FarmGameStateBase.generated.h"

/**
 * 
 */
UCLASS()
class AUTOMAFARM_API AFarmGameStateBase : public AGameStateBase
{
	GENERATED_BODY()

public:
	AFarmGameStateBase();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Terrain")
		TMap<FVector, FTileHolder> LevelMap;
};
