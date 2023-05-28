// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseBlock.h"

#include "Components/InstancedStaticMeshComponent.h"

// Sets default values
UBaseBlock::UBaseBlock()
{
	BlockMesh = CreateDefaultSubobject<UInstancedStaticMeshComponent>("BlockMesh");
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
