// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//Custom Classes
#include "../Items/BaseBlock.h"
//Other Classes
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
//Generated File
#include "TerrainGenerator.generated.h"

UCLASS(Blueprintable)
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
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<ABaseBlock> PrimaryBlockType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<ABaseBlock> SecondaryBlockType;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void OnConstruction(const FTransform& Transform) override;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
