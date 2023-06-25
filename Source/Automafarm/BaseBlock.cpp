// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseBlock.h"
#include "FarmGameStateBase.h"

#include "Components/InstancedStaticMeshComponent.h"

#define PlaceTrace ECC_GameTraceChannel1

// Sets default values
UBaseBlock::UBaseBlock()
{
	AFarmGameStateBase* myGameState;
	BlockMesh = CreateDefaultSubobject<UInstancedStaticMeshComponent>("BlockMesh");
	myGameState = GetWorld() != NULL ? GetWorld()->GetGameState<AFarmGameStateBase>() : NULL;
}

//Creates an instance of the block
void UBaseBlock::AddBlock(FTransform BlockTransform) 
{
	BlockMesh->AddInstance(BlockTransform);
}

//Creates an instance of the block
void UBaseBlock::AddBlock(FVector BlockLocation)
{
	AddBlock(FTransform(BlockLocation));
}

//Clears all blocks of this instance
void UBaseBlock::ClearBlocks() 
{
	BlockMesh->ClearInstances();
}
