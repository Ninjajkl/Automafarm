// Fill out your copyright notice in the Description page of Project Settings.

//Header for this Class
#include "UI/TruckSlot.h"
//Custom Classes
//Other Classes

UTruckSlot::UTruckSlot(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

bool UTruckSlot::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	Super::Super::NativeOnDrop(InGeometry, InDragDropEvent, InOperation);

	UDragDropInventorySlot* DragDropSlot = Cast<UDragDropInventorySlot>(InOperation);
	if (DragDropSlot->ContentIndex != ContentIndex || DragDropSlot->Inventory != Inventory)
	{
		if(Inventory->Content.Contains(ContentIndex))
		{
			DragDropSlot->Inventory->AddItemArrayToInventory(Inventory->GetRandomItems(Inventory->Content[ContentIndex].Quantity));
			Inventory->EmptySlot(ContentIndex);
			Inventory->OnInventoryUpdated.Broadcast(Inventory);
		}
		return UInventory::TransferSlots(DragDropSlot->ContentIndex, DragDropSlot->Inventory, ContentIndex, Inventory);
	}
	return false;
}
