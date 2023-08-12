// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//Custom Classes
#include "../Systems/Interactable.h"
#include "../Systems/Inventory.h"
#include "PlaceableObject.h"
//Other Classes
#include "CoreMinimal.h"
//Generated File
#include "InteractableBlock.generated.h"

UCLASS()
class AUTOMAFARM_API AInteractableBlock : public APlaceableObject, public IInteractable
{
	GENERATED_BODY()

public:
	AInteractableBlock();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UInventory* Inventory;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InteractableBlock")
		UStaticMeshComponent* StaticMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InteractableBlock")
		FText Name;

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void Interact_Implementation() override;
};
