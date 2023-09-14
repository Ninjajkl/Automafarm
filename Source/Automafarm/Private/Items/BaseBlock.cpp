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
	int32 InstanceIndex = BlockMesh->AddInstance(FTransform(UGC::GridToWorldPosition(GridLocation)));
	GridLocationInstanceMap.Add(GridLocation, InstanceIndex);
}

//Clears all blocks of this instance
void ABaseBlock::ClearBlocks() 
{
	BlockMesh->ClearInstances();
}

void ABaseBlock::RemoveBlockAt(FVector GridLocation)
{
	int32* InstanceIndexPtr = GridLocationInstanceMap.Find(GridLocation);
	if (InstanceIndexPtr)
	{
		BlockMesh->RemoveInstance(*InstanceIndexPtr);
		blockGameState->LevelMap.Remove(GridLocation);
		GridLocationInstanceMap.Remove(GridLocation);
		for (auto& Pair : GridLocationInstanceMap)
		{
			if(Pair.Value > *InstanceIndexPtr)
			{
				Pair.Value -= 1;
			}
		}
	}
}