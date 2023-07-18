// Fill out your copyright notice in the Description page of Project Settings.

#include "Inventory.h"

#include "Engine/DataTable.h"

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
	OnInventoryUpdated.Broadcast();
}

void UInventory::ReduceSlotByAmount(int slotNum, int amount)
{
	Content[slotNum].Quantity -= amount;
	if (Content[slotNum].Quantity <= 0)
	{
		EmptySlot(slotNum);
	}
	OnInventoryUpdated.Broadcast();
}

bool UInventory::TryIncreaseSlotByAmount(int slotNum, int amount)
{
	int MaxSlotSize = ItemDataTable->FindRow<FItemStruct>(Content[slotNum].ItemID.RowName, TEXT(""))->MaxStackSize;
	if(Content[slotNum].Quantity + amount > MaxSlotSize)
	{
		return false;
	}
	Content[slotNum].Quantity += amount;
	OnInventoryUpdated.Broadcast();
	return true;
}

bool UInventory::TransferSlots(int slotFrom, UInventory* fromInv, int slotTo, UInventory* toInv)
{
	if(!IsValid(fromInv) || !IsValid(toInv))
	{
		return false;
	}
	if((slotFrom >= 0 && slotFrom < fromInv->NumRows * fromInv->NumCols) && (slotTo >= 0 && slotTo < toInv->NumRows * toInv->NumCols))
	{
		if(fromInv->Content.Contains(slotFrom))
		{
			if(toInv->Content.Contains(slotTo))
			{
				FSlotStruct tempSlot = fromInv->Content[slotFrom];
				fromInv->Content[slotFrom] = toInv->Content[slotTo];
				toInv->Content[slotTo] = tempSlot;
			}
			else
			{
				toInv->Content.Add(slotTo, fromInv->Content[slotFrom]);
				fromInv->Content.Remove(slotFrom);
			}
			toInv->OnInventoryUpdated.Broadcast();
			fromInv->OnInventoryUpdated.Broadcast();
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}
