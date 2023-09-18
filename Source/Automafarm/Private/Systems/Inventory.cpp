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

void UInventory::AddItemToInventory(int amount, FItemStruct itemType)
{
	for (TPair<int, FSlotStruct>& SlotPair : Content)
	{
		if (SlotPair.Value.ItemID.RowName == itemType.Name)
		{
			int SpaceRemaining = itemType.MaxStackSize - SlotPair.Value.Quantity;

			if (SpaceRemaining >= amount)
			{
				SlotPair.Value.Quantity += amount;
				OnInventoryUpdated.Broadcast(this);
				return;
			}
			else if (SpaceRemaining > 0)
			{
				SlotPair.Value.Quantity += SpaceRemaining;
				amount -= SpaceRemaining;
			}
		}
	}
	//If reached this point, the remaining amount needs to be added to a new slot(s)
	for(int i = 0; i < (NumRows*NumCols-Content.Num()); i++)
	{
		FSlotStruct NewSlot;
		FDataTableRowHandle newRowHandle;
		newRowHandle.DataTable = ItemDataTable;
		newRowHandle.RowName = itemType.Name;
		NewSlot.ItemID = newRowHandle;

		NewSlot.Quantity = FMath::Min(amount, itemType.MaxStackSize);
		amount -= NewSlot.Quantity;

		for(int j = 0; j < NumRows * NumCols; j++)
		{
			if(!Content.Find(j))
			{
				Content.Add(j, NewSlot);
				break;
			}
		}
		if(amount == 0)
		{
			OnInventoryUpdated.Broadcast(this);
			return;
		}
	}
	OnInventoryUpdated.Broadcast(this);
}

void UInventory::AddItemToInventoryBySlot(FSlotStruct itemSlot)
{
	AddItemToInventory(itemSlot.Quantity, *ItemDataTable->FindRow<FItemStruct>(itemSlot.ItemID.RowName, TEXT("")));
}

void UInventory::AddItemArrayToInventory(TArray<FSlotStruct> itemArray)
{
	for (FSlotStruct item : itemArray)
	{
		AddItemToInventoryBySlot(item);
	}
}

FSlotStruct UInventory::GetRandomItem()
{
	TArray<FItemStruct*> ItemTableRows;
	ItemDataTable->GetAllRows<FItemStruct>("ContextString", ItemTableRows);
	int32 RandomIndex = FMath::RandRange(0, ItemTableRows.Num() - 1);

	FSlotStruct NewSlot;
	FDataTableRowHandle newRowHandle;
	newRowHandle.DataTable = ItemDataTable;
	newRowHandle.RowName = (*ItemTableRows[RandomIndex]).Name;
	NewSlot.ItemID = newRowHandle;
	NewSlot.Quantity = 1;
	return NewSlot;
}

TArray<FSlotStruct> UInventory::GetRandomItems(int amount)
{
	TArray<FSlotStruct> RandomItems;
	TArray<FItemStruct*> ItemTableRows;
	ItemDataTable->GetAllRows<FItemStruct>("ContextString", ItemTableRows);

	for (int32 i = 0; i < ItemTableRows.Num(); ++i)
	{
		// Create a new SlotStruct.
		FSlotStruct NewSlot;
		FDataTableRowHandle newRowHandle;
		newRowHandle.DataTable = ItemDataTable;
		newRowHandle.RowName = (*ItemTableRows[i]).Name;
		NewSlot.ItemID = newRowHandle;
		// Initialize the quantity to 0 initially.
		NewSlot.Quantity = 0;
		// Add the new SlotStruct to the list.
		RandomItems.Add(NewSlot);
	}

	int32 RemainingAmount = amount;
	while (RemainingAmount > 0)
	{
		int32 RandomQuantity = FMath::RandRange(1, RemainingAmount);
		int32 RandomIndex = FMath::RandRange(0, ItemTableRows.Num()-1);
		// Add the random quantity to a slot in RandomItems.
		RandomItems[RandomIndex].Quantity += RandomQuantity;

		// Reduce the remaining amount by the quantity added.
		RemainingAmount -= RandomQuantity;
	}
	return RandomItems;
}

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

TArray<FSlotStruct> UInventory::ConvertInventoryToArray(UInventory* fromInv)
{
	TArray<FSlotStruct> InvArray;
	for(TPair<int, FSlotStruct>& SlotPair : fromInv->Content)
	{
		InvArray.Add(SlotPair.Value);
	}
	return InvArray;
}