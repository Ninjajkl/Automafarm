// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//Custom Classes
#include "../Items/Item.h"
#include "../Library/Structs.h"
//Other Classes
#include "Components/ActorComponent.h"
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
//Generated File
#include "Inventory.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKFOnInventoryUpdated, UInventory*, Inventory);

UCLASS( ClassGroup=(Inventory), meta=(BlueprintSpawnableComponent) )
class AUTOMAFARM_API UInventory : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventory();

	UPROPERTY(BlueprintAssignable)
		FKFOnInventoryUpdated OnInventoryUpdated;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	virtual void OnRegister() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//Inventory Properties and Functions
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		int NumRows = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		int NumCols = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		TMap<int,FSlotStruct> Content;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		UDataTable* ItemDataTable = nullptr;

	UFUNCTION(BlueprintCallable, Category = "Inventory")
		void EmptySlot(int slotNum);
	UFUNCTION(BlueprintCallable, Category = "Inventory")
		void ReduceSlotByAmount(int slotNum, int amount);
	UFUNCTION(BlueprintCallable, Category = "Inventory")
		void AddItemToInventory(int amount, FItemStruct itemType);
	UFUNCTION(BlueprintCallable, Category = "Inventory")
		void AddItemToInventoryBySlot(FSlotStruct itemSlot);
	UFUNCTION(BlueprintCallable, Category = "Inventory")
		void AddItemArrayToInventory(TArray<FSlotStruct> itemArray);
	UFUNCTION(BlueprintCallable, Category = "Inventory")
		static int IncreaseSlotByAmount(int slotNum, UInventory* Inventory, int amount);
	UFUNCTION(BlueprintCallable, Category = "Inventory")
		static bool TransferSlots(int slotFrom, UInventory* fromInv, int slotTo, UInventory* toInv);
	UFUNCTION(BlueprintCallable, Category = "Inventory")
		static TArray<FSlotStruct> ConvertInventoryToArray(UInventory* fromInv);
};