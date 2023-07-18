// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlaceableObject.h"
#include "Inventory.h"
#include "Interactable.h"
#include "InteractableBlock.generated.h"

/**
 * 
 */
UCLASS()
class AUTOMAFARM_API AInteractableBlock : public APlaceableObject, public IInteractable
{
	GENERATED_BODY()
public:
	AInteractableBlock();

	UPROPERTY(EditAnywhere, Meta = (ClampMin = 0.000001), Category = "InteractableBlock")
		float TileLength = 100.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InteractableBlock")
		UStaticMeshComponent* StaticMesh;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UInventory* Inventory;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void Interact_Implementation() override;
};
