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

	ProceduralMesh = CreateDefaultSubobject<UProceduralMeshComponent>("ProceduralMesh");
	ProceduralMesh->SetupAttachment(GetRootComponent());
	TestBlock = CreateDefaultSubobject<UBaseBlock>("BaseBlock");
	TestBlock->SetupAttachment(GetRootComponent());
}

void ATerrainGenerator::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	if (IsValid(TestBlock->BlockMesh)&&IsValid(StaticMesh)) {
		TestBlock->BlockMesh->SetStaticMesh(StaticMesh);
		UE_LOG(LogTemp, Warning, TEXT("Yes"));
	}
	UE_LOG(LogTemp, Warning, TEXT("No"));
	TestBlock->ClearBlocks();

	for (int X = 0; X <= XSize; ++X)
	{
		for (int Y = 0; Y <= YSize; ++Y)
		{
			TestBlock->AddBlock(FVector(X*TileLength+50, Y*TileLength+50, -50));
		}
	}
	/*
	Vertices.Reset();
	Triangles.Reset();
	UV0.Reset();

	CreateVertices();
	CreateTriangles();

	UKismetProceduralMeshLibrary::CalculateTangentsForMesh(Vertices, Triangles, UV0, Normals, Tangents);

	ProceduralMesh->CreateMeshSection(0, Vertices, Triangles, Normals, UV0, TArray<FColor>(), Tangents, true);
	ProceduralMesh->SetMaterial(0, Material);
	*/
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

void ATerrainGenerator::CreateVertices()
{
	for (int X = 0; X <= XSize; ++X)
	{
		for (int Y = 0; Y <= YSize; ++Y)
		{
			Vertices.Add(FVector(X * TileLength, Y * TileLength, 0));
			UV0.Add(FVector2D(X * UVScale, Y * UVScale));

			//Debug
			//DrawDebugSphere(GetWorld(), FVector(X * Scale, Y * Scale, 0), 25.0f, 16, FColor::Red, true, -1.0f, 0U, 0.0f);
		}
	}
}

void ATerrainGenerator::CreateTriangles()
{
	int Vertex = 0;
	for (int X = 0; X < XSize; ++X)
	{
		for (int Y = 0; Y < YSize; ++Y)
		{
			tempBool ? ProceduralMesh->SetMaterial(0, Material) : ProceduralMesh->SetMaterial(0, SecondaryMaterial);
			tempBool = !tempBool;
			Triangles.Add(Vertex); //Bottom Left Corner
			Triangles.Add(Vertex + 1); //Bottom Right Corner
			Triangles.Add(Vertex + YSize + 1); //Top Left Corner
			Triangles.Add(Vertex + 1); //Bottom Right Corner
			Triangles.Add(Vertex + YSize + 2); //Top Right Corner
			Triangles.Add(Vertex + YSize + 1); //Top Left Corner

			++Vertex;
		}
		++Vertex;
	}
}