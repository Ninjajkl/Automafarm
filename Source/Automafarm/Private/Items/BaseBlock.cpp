// Fill out your copyright notice in the Description page of Project Settings.

//Header for this Class
#include "Items/BaseBlock.h"
//Custom Classes
#include "Game/FarmGameStateBase.h"
#include "Library/GameConstants.h"
//Other Classes
#include "Components/InstancedStaticMeshComponent.h"

// Sets default values
ABaseBlock::ABaseBlock()
{
	BlockMesh = CreateDefaultSubobject<UInstancedStaticMeshComponent>("BlockMesh");
	BlockMesh->ComponentTags = { FName(TEXT("BlockMesh")) };

	//Get the Game State and store its reference
	FarmGameState = GetWorld() != NULL ? GetWorld()->GetGameState<AFarmGameStateBase>() : NULL;
}

void ABaseBlock::BeginPlay()
{
	Super::BeginPlay();
	ItemStruct = FarmGameState->GetItemStructFromClass(GetClass());
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

void ABaseBlock::Dismantle(FVector GridLocation, UInventory* breakingInventory)
{
	if(RemoveBlockInstance(GridLocation))
	{
		breakingInventory->AddItemToInventory(1, ItemStruct);
	}
}

bool ABaseBlock::RemoveBlockInstance(FVector GridLocation)
{
	int32* InstanceIndexPtr = GridLocationInstanceMap.Find(GridLocation);
	if (!InstanceIndexPtr || !BlockMesh->RemoveInstance(*InstanceIndexPtr))
	{
		return false;
	}

	FarmGameState->LevelMap.Remove(GridLocation);
	GridLocationInstanceMap.Remove(GridLocation);
	for (auto& Pair : GridLocationInstanceMap)
	{
		if (Pair.Value > *InstanceIndexPtr)
		{
			Pair.Value -= 1;
		}
	}
	return true;
}