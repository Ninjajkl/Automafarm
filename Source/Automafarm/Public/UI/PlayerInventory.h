// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//Custom Classes
#include "InventoryGrid.h"
//Other Classes
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
//Generated File
#include "PlayerInventory.generated.h"

UCLASS()
class AUTOMAFARM_API UPlayerInventory : public UUserWidget
{
	GENERATED_BODY()

public:

	UPlayerInventory(const FObjectInitializer& ObjectInitializer);

protected:
	virtual void NativePreConstruct() override;
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;
	virtual FReply NativeOnKeyDown(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		TSubclassOf<UInventoryGrid> InventoryGridClass;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget), Category = "Inventory")
		UInventoryGrid* InventoryGrid = nullptr;
};
