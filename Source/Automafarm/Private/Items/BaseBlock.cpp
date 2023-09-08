// Fill out your copyright notice in the Description page of Project Settings.

//Header for this Class
#include "Items/BaseBlock.h"
//Custom Classes
#include "Game/FarmGameStateBase.h"
#include "Library/GameConstants.h"
//Other Classes
#include "Components/InstancedStaticMeshComponent.h"

#define PlaceTrace ECC_GameTraceChannel1

AFarmGameStateBase* blockGameState;

// Sets default values
ABaseBlock::ABaseBlock()
{
	BlockMesh = CreateDefaultSubobject<UInstancedStaticMeshComponent>("BlockMesh");
	BlockMesh->ComponentTags = { FName(TEXT("BlockMesh")) };

	//Get the Game State and store its reference
	blockGameState = GetWorld() != NULL ? GetWorld()->GetGameState<AFarmGameStateBase>() : NULL;
}

//Creates an instance of the block
void ABaseBlock::AddBlock(FVector GridLocation)
{
	UE_LOG(LogTemp, Warning, TEXT("add gridlocation: %s"), *GridLocation.ToString());
	int32 InstanceIndex = BlockMesh->AddInstance(FTransform(GridLocation * UGC::TileLength + UGC::TileOffset));
	GridLocationInstanceMap.Add(GridLocation, InstanceIndex);
}

//Clears all blocks of this instance
void ABaseBlock::ClearBlocks() 
{
	BlockMesh->ClearInstances();
}

void ABaseBlock::RemoveBlockAt(FVector GridLocation)
{
	/*BlockMesh->RemoveInstance(*GridLocationInstanceMap.Find(GridLocation));
	GridLocationInstanceMap.Remove(GridLocation);
	blockGameState->LevelMap.Remove(GridLocation);
	*/
	UE_LOG(LogTemp, Warning, TEXT("RemoveBlockAt- %s"), *GridLocation.ToString());
	int32* InstanceIndexPtr = GridLocationInstanceMap.Find(GridLocation);
	if (InstanceIndexPtr)
	{
		BlockMesh->RemoveInstance(*InstanceIndexPtr);
		UE_LOG(LogTemp, Error, TEXT("%d keys removed."), GridLocationInstanceMap.Remove(GridLocation));
		blockGameState->LevelMap.Remove(GridLocation);
	}
	else
	{
		// Handle the case where GridLocation was not found in the map.
		// Log a debug message indicating the failure.
		UE_LOG(LogTemp, Warning, TEXT("remove gridlocation- %s"), *GridLocation.ToString());
	}
}