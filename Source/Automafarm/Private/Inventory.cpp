// Fill out your copyright notice in the Description page of Project Settings.

#include "Engine/DataTable.h"
#include "Inventory.h"

// Sets default values for this component's properties
UInventory::UInventory()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
	SetIsReplicated(true);
	static ConstructorHelpers::FObjectFinder<UDataTable> DataTableAsset(TEXT("/Game/Blueprints/ItemDataTable"));
	ItemDataTable = DataTableAsset.Object;
}

void UInventory::OnRegister()
{
	Super::OnRegister();
	SetIsReplicated(true);
}

// Called when the game starts
void UInventory::BeginPlay()
{
	Super::BeginPlay();
	
}


// Called every frame
void UInventory::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

//Inventory Properties and Functions
void UInventory::EmptySlot(int slotNum) 
{
	Content.Remove(slotNum);
}

void UInventory::ReduceSlotByAmount(int slotNum, int amount)
{
	Content[slotNum].Quantity -= amount;
	if (Content[slotNum].Quantity <= 0)
	{
		EmptySlot(slotNum);
	}
}

bool UInventory::TryIncreaseSlotByAmount(int slotNum, int amount)
{
	int MaxSlotSize = ItemDataTable->FindRow<FItemStruct>(Content[slotNum].ItemID.RowName, TEXT(""))->MaxStackSize;
	if(Content[slotNum].Quantity + amount > MaxSlotSize)
	{
		return false;
	}
	Content[slotNum].Quantity += amount;
	return true;
}
