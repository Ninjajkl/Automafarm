// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//Custom Classes
#include "../Library/AutomafarmEnums.h"
#include "Item.h"
//Other Classes
#include "CoreMinimal.h"
//Generated File
#include "PlaceableObject.generated.h"

UCLASS(ClassGroup = (Item), meta = (BlueprintSpawnableComponent))
class AUTOMAFARM_API APlaceableObject : public AItem
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	APlaceableObject();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlaceableObject")
		TArray<FVector> TilesToFill;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlaceableObject")
		TArray<FVector> FilledTiles;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlaceableObject")
		ETileType TileType = ETileType::DEFAULT;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};