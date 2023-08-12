// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//Custom Classes
#include "../Systems/Inventory.h"
#include "InventorySlot.h"
//Other Classes
#include "Blueprint/UserWidget.h"
#include "CoreMinimal.h"
#include "Components/GridPanel.h"
//Generated File
#include "InventoryGrid.generated.h"

UCLASS()
class AUTOMAFARM_API UInventoryGrid : public UUserWidget
{
	GENERATED_BODY()

public:

	UInventoryGrid(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
		void Init(UInventory* InInventory, UGridPanel* InSlotHolder);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		TSubclassOf<UInventorySlot> InventorySlotClass;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		UInventory* Inventory;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		bool IsPlayerInventory = false;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget), Category = "Inventory")
		UGridPanel* SlotHolder = nullptr;

	UFUNCTION(BlueprintCallable, Category = "Inventory")
		void RefreshInventory(UInventory* refreshInventory);
};
