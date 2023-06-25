// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AutomafarmEnums.h"
#include "Item.h"
#include "PlaceableObject.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Item), meta = (BlueprintSpawnableComponent))
class AUTOMAFARM_API UPlaceableObject : public UItem
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UPlaceableObject();
	
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
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
};