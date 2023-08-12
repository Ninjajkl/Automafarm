// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//Custom Classes
#include "InventoryGrid.h"
//Other Classes
#include "Blueprint/UserWidget.h"
#include "CoreMinimal.h"
#include "Components/EditableTextBox.h"
#include "Items/InteractableBlock.h"
//Generated File
#include "ContainerInventory.generated.h"

UCLASS()
class AUTOMAFARM_API UContainerInventory : public UUserWidget
{
	GENERATED_BODY()

public:

	UContainerInventory(const FObjectInitializer& ObjectInitializer);
	
	UFUNCTION(BlueprintCallable, Category = "Inventory")
		void Init(UInventory* InInventory, AInteractableBlock* InContainer);

protected:
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;
	virtual FReply NativeOnKeyDown(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		int MaxContainerNameLength = 5;
	UPROPERTY(BlueprintReadOnly, Category = "Inventory")
		UInventory* Inventory = nullptr;
	UPROPERTY(BlueprintReadOnly, Category = "Inventory")
		AInteractableBlock* Container = nullptr;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget), Category = "Inventory")
		UInventoryGrid* PlayerInventoryGrid = nullptr;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget), Category = "Inventory")
		UInventoryGrid* ContainerInventoryGrid = nullptr;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget), Category = "Container")
		UEditableTextBox* ContainerNameTextBox = nullptr;

	UFUNCTION(BlueprintCallable, Category = "Container")
		void OnCNameTextChanged(const FText& InText);
	UFUNCTION(BlueprintCallable, Category = "Container")
		void OnCNameTextCommitted(const FText& InText, ETextCommit::Type CommitMethod);
};
