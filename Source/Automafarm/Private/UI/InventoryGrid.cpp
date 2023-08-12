// Fill out your copyright notice in the Description page of Project Settings.

//Header for this Class
#include "UI/InventoryGrid.h"
//Custom Classes
//Other Classes
#include "Components/GridPanel.h"

UInventoryGrid::UInventoryGrid(const FObjectInitializer& ObjectInitializer) 
	: Super(ObjectInitializer)
{

}

void UInventoryGrid::Init(UInventory* InInventory, UGridPanel* InSlotHolder)
{
	Inventory = InInventory;
	SlotHolder = InSlotHolder;
	RefreshInventory(Inventory);
}

void UInventoryGrid::RefreshInventory(UInventory* refreshInventory)
{
	Inventory = refreshInventory;
	SlotHolder->ClearChildren();
	if(Inventory && InventorySlotClass)
	{
		Inventory->OnInventoryUpdated.AddUniqueDynamic(this, &UInventoryGrid::RefreshInventory);
		for (int r = IsPlayerInventory ? 1 : 0; r < Inventory->NumRows; r++)
		{
			for (int c = 0; c < Inventory->NumCols; c++)
			{
				FSlotStruct* pSlotStruct = Inventory->Content.Find((r * Inventory->NumCols) + c);
				FSlotStruct slotStruct = pSlotStruct ? *pSlotStruct : FSlotStruct();
				UInventorySlot* inventorySlot = CreateWidget<UInventorySlot>(this, InventorySlotClass);
				inventorySlot->Init(Inventory, slotStruct, (r * Inventory->NumCols) + c);
				inventorySlot->RefreshSlot();
				SlotHolder->AddChildToGrid(inventorySlot, r, c);
			}
		}
	}
}
