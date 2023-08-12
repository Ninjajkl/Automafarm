// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//Custom Classes
#include "InventorySlot.h"
//Other Classes
#include "Components/Image.h"
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
//Generated File
#include "Hotbar.generated.h"

UCLASS()
class AUTOMAFARM_API UHotbar : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UHotbar(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
		void Init(UInventory* InInventory);

protected:
	virtual void NativeConstruct() override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		UInventory* Inventory;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		int CurrHotbarSlot = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		int HotbarSlotGap = 0;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget), Category = "Inventory")
		UImage* IMGHotbarSelector = nullptr;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget), Category = "Inventory")
		TArray<UInventorySlot*> InventorySlots;

	UFUNCTION(BlueprintCallable, Category = "Inventory")
		void HotbarSlotUpdated(int InCurrHotbarSlot);
	UFUNCTION(BlueprintCallable, Category = "Inventory")
		void RefreshHotbar(UInventory* refreshInventory);
};
