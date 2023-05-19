// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "TerrainGenerator.generated.h"

UCLASS()
class AUTOMAFARM_API ATerrainGenerator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATerrainGenerator();

	UPROPERTY(EditAnywhere, Meta = (ClampMin = 0))
		int XSize = 0; //Number of squares along X axis
	UPROPERTY(EditAnywhere, Meta = (ClampMin = 0))
		int YSize = 0; //Number of squares along Y axis
	UPROPERTY(EditAnywhere, Meta = (ClampMin = 0.000001))
		float TileLength = 100.0f;
	UPROPERTY(EditAnywhere, Meta = (ClampMin = 0.000001))
		float UVScale = 1.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMesh* StaticMesh;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void OnConstruction(const FTransform& Transform) override;

	UPROPERTY(EditAnywhere)
		UMaterialInterface* Material;
	UPROPERTY(EditAnywhere)
		UMaterialInterface* SecondaryMaterial;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
