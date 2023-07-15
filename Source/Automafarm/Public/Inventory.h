// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Item.h"
#include "Structs.h"
#include "Engine/DataTable.h"
#include "Inventory.generated.h"

UCLASS( ClassGroup=(Inventory), meta=(BlueprintSpawnableComponent) )
class AUTOMAFARM_API UInventory : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventory();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	virtual void OnRegister() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//Inventory Properties and Functions
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		int NumRows;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		int NumCols;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		TMap<int,FSlotStruct> Content;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		UDataTable* ItemDataTable;

	UFUNCTION(BlueprintCallable, Category = "Inventory")
		void EmptySlot(int slotNum);
	UFUNCTION(BlueprintCallable, Category = "Inventory")
		void ReduceSlotByAmount(int slotNum, int amount);
	UFUNCTION(BlueprintCallable, Category = "Inventory")
		bool TryIncreaseSlotByAmount(int slotNum, int amount);
};