// Fill out your copyright notice in the Description page of Project Settings.


#include "FarmGameStateBase.h"

#include "BaseBlock.h"

AFarmGameStateBase::AFarmGameStateBase()
{

}

bool AFarmGameStateBase::InitilizeUniqueBlock(TSubclassOf<UBaseBlock> BlockClass, FVector TileKey)
{
	if (BlockMap.Contains(BlockClass)) { return true; }
	InitializeTerrain();
	InitializedBlocks.AddUnique(BlockClass);
	BlockMap.Add(BlockClass, Cast<UBaseBlock>(TerrainHolder->AddComponentByClass(BlockClass, 0, FTransform(FVector(0, 0, 0)), 0)));
	return true;
}

void AFarmGameStateBase::InitializeTerrain()
{
	if(!TerrainHolder->IsValidLowLevelFast())
	{
		TerrainHolder = GetWorld()->SpawnActor<AActor>();
	}
}