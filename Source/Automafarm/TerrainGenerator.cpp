// Fill out your copyright notice in the Description page of Project Settings.


#include "TerrainGenerator.h"
#include "ProceduralMeshComponent.h"
#include "BaseBlock.h"
#include "KismetProceduralMeshLibrary.h"


bool tempBool = 0;
UBaseBlock* TestBlock;

// Sets default values
ATerrainGenerator::ATerrainGenerator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	TestBlock = CreateDefaultSubobject<UBaseBlock>("BaseBlock");
	TestBlock->SetupAttachment(GetRootComponent());
}

//Generates Floor of Blocks
void ATerrainGenerator::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	TestBlock->ClearBlocks();

	for (int X = 0; X <= XSize; ++X)
	{
		for (int Y = 0; Y <= YSize; ++Y)
		{
			TestBlock->AddBlock(FVector(X*TileLength+50, Y*TileLength+50, -50));
		}
	}
}

// Called when the game starts or when spawned
void ATerrainGenerator::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATerrainGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}