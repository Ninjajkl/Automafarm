// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//Custom Classes
#include "../Characters/AutomafarmPlayerController.h"
#include "Items/InteractableBlock.h"
#include "UI/PlayerInventory.h"
#include "UI/ContainerInventory.h"
#include "UI/Hotbar.h"
//Other Classes
#include "Blueprint/UserWidget.h"
#include "CoreMinimal.h"
//Generated File
#include "PlayerHud.generated.h"

UCLASS()
class AUTOMAFARM_API UPlayerHud : public UUserWidget
{
	GENERATED_BODY()
	
public:

	UPlayerHud(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
		void Init(UInventory* InInventory);

	AAutomafarmPlayerController* PlayerController;
protected:

public:
	virtual void NativeConstruct() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		TSubclassOf<UPlayerInventory> PlayerInventoryClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		TSubclassOf<UContainerInventory> ContainerInventoryClass;

	UPROPERTY(BlueprintReadOnly, Category = "Inventory")
		UPlayerInventory* PlayerInventory = nullptr;

	UPROPERTY(BlueprintReadOnly, Category = "Inventory")
		UContainerInventory* ContainerInventory = nullptr;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget), Category = "Inventory")
		UHotbar* Hotbar = nullptr;

	UFUNCTION(BlueprintCallable, Category = "Inventory")
		void DisplayPlayerInventory();
	UFUNCTION(BlueprintCallable, Category = "Inventory")
		void ShowContainer(AInteractableBlock* Container);
	UFUNCTION(BlueprintCallable, Category = "Inventory")
		void ExitMenu();
};
