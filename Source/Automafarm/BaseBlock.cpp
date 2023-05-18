// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/InstancedStaticMeshComponent.h"
#include "BaseBlock.h"

// Sets default values
UBaseBlock::UBaseBlock()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;

	BlockMesh = CreateDefaultSubobject<UInstancedStaticMeshComponent>("BlockMesh");
	//static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("E:/Epic_Unreal/Unreal/UE_5.2/Engine/Content/BasicShapes/Cube.uasset"));
	//BlockMesh->SetStaticMesh(MeshAsset.Object);
}

/*
void ABaseBlock::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	BlockMesh->SetStaticMesh(StaticMesh);
	ClearBlocks();
	AddBlock(FVector(0, 0, 0));
}
*/

void UBaseBlock::AddBlock(FTransform BlockTransform) 
{
	BlockMesh->AddInstance(BlockTransform);
}

void UBaseBlock::AddBlock(FVector BlockLocation)
{
	BlockMesh->AddInstance(FTransform(BlockLocation));
}

void UBaseBlock::ClearBlocks() 
{
	BlockMesh->ClearInstances();
}

/*
// Called when the game starts or when spawned
void ABaseBlock::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseBlock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
*/
