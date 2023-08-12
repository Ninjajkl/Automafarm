// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//Custom Classes
#include "../Systems/Inventory.h"
//Other Classes
#include "Blueprint/DragDropOperation.h"
#include "CoreMinimal.h"
//Generated File
#include "DragDropInventorySlot.generated.h"

UCLASS()
class AUTOMAFARM_API UDragDropInventorySlot : public UDragDropOperation
{
	GENERATED_BODY()

public:
	UDragDropInventorySlot(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
		void Init(UInventory* Inventory, int ContentIndex, UWidget* InDefaultDragVisual);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		UInventory* Inventory;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		int ContentIndex;
};
