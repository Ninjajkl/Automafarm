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
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Terrain")
		TArray<TSubclassOf<UBaseBlock>> InitializedBlocks;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Terrain")
		TMap<TSubclassOf<UBaseBlock>, UBaseBlock*> BlockMap;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Terrain")
		AActor* TerrainHolder;

	bool InitilizeUniqueBlock(TSubclassOf<UBaseBlock> BlockClass, FVector TileKey);
	void InitializeTerrain();
};
