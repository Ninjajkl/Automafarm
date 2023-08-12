// Fill out your copyright notice in the Description page of Project Settings.

//Header for this Class
#include "Systems/Inventory.h"
//Custom Classes
//Other Classes
#include "Engine/DataTable.h"

// Sets default values for this component's properties
UInventory::UInventory()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
	//static ConstructorHelpers::FObjectFinder<UDataTable> DataTableAsset(TEXT("/Game/Blueprints/DT_ItemDataTable"));
	ItemDataTable = LoadObject<UDataTable>(nullptr,TEXT("/Game/Blueprints/DT_ItemDataTable"));
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
	OnInventoryUpdated.Broadcast(this);
}

void UInventory::ReduceSlotByAmount(int slotNum, int amount)
{
	Content[slotNum].Quantity -= amount;
	if (Content[slotNum].Quantity <= 0)
	{
		EmptySlot(slotNum);
	}
	OnInventoryUpdated.Broadcast(this);
}

//Returns excess amount
int UInventory::IncreaseSlotByAmount(int slotNum, UInventory* Inventory, int amount)
{
	int MaxSlotSize = Inventory->ItemDataTable->FindRow<FItemStruct>(Inventory->Content[slotNum].ItemID.RowName, TEXT(""))->MaxStackSize;
	int addAmount = Inventory->Content[slotNum].Quantity + amount;
	int excess = FMath::Max(addAmount-MaxSlotSize,0);
	Inventory->Content[slotNum].Quantity = FMath::Min(addAmount, MaxSlotSize);
	Inventory->OnInventoryUpdated.Broadcast(Inventory);
	return excess;
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
				if(fromInv->Content[slotFrom].ItemID == toInv->Content[slotTo].ItemID)
				{
					int excess = IncreaseSlotByAmount(slotTo, toInv, fromInv->Content[slotFrom].Quantity);
					fromInv->Content[slotFrom].Quantity = excess;
				}
				else
				{
					FSlotStruct tempSlot = fromInv->Content[slotFrom];
					fromInv->Content[slotFrom] = toInv->Content[slotTo];
					toInv->Content[slotTo] = tempSlot;
				}
			}
			else
			{
				toInv->Content.Add(slotTo, fromInv->Content[slotFrom]);
				fromInv->Content.Remove(slotFrom);
			}
			toInv->OnInventoryUpdated.Broadcast(toInv);
			fromInv->OnInventoryUpdated.Broadcast(fromInv);
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
