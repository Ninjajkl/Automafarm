// Fill out your copyright notice in the Description page of Project Settings.

//Header for this Class
#include "UI/InventorySlot.h"
//Custom Classes
#include "Library/Structs.h"
#include "UI/DragDropInventorySlot.h"
#include "UI/DragPreview.h"
//Other Classes
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Engine/DataTable.h"

UInventorySlot::UInventorySlot(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UInventorySlot::Init(UInventory* InInventory, const FSlotStruct& InSlotStruct, int InContentIndex)
{
	Inventory = InInventory;
	SlotStruct = InSlotStruct;
	ContentIndex = InContentIndex;
}

void UInventorySlot::RefreshSlot()
{
	SlotPreview->RefreshSlot(SlotStruct);
}

void UInventorySlot::NativePreConstruct()
{
	Super::NativePreConstruct();

	InventorySlotBorder->SetPadding(ShowBorder ? 4 : 0);
	InventorySlotBorder->SetBrushColor(FLinearColor(1, 1, 1, ShowBorder));
}

void UInventorySlot::NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation)
{
	Super::NativeOnDragDetected(InGeometry, InMouseEvent, OutOperation);

	UDragPreview* DragPreviewWidget = CreateWidget<UDragPreview>(this, DragPreviewWidgetClass);
	DragPreviewWidget->Init(SlotStruct);
	UDragDropInventorySlot* DragDropSlot = Cast<UDragDropInventorySlot>(UWidgetBlueprintLibrary::CreateDragDropOperation(DragDropSlotClass));
	DragDropSlot->Init(Inventory, ContentIndex, DragPreviewWidget);
	OutOperation = DragDropSlot;
}

FReply UInventorySlot::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	Super::NativeOnPreviewMouseButtonDown(InGeometry, InMouseEvent);

	if (!SlotStruct.ItemID.DataTable)
	{
		return FReply::Unhandled();
	}
	FTableRowBase* TableRow = SlotStruct.ItemID.DataTable->FindRow<FTableRowBase>(SlotStruct.ItemID.RowName, FString("ContextString"), true);
	if (TableRow || !InMouseEvent.IsMouseButtonDown(FKey(EKeys::LeftMouseButton)))
	{
		return UWidgetBlueprintLibrary::DetectDragIfPressed(InMouseEvent, this, EKeys::LeftMouseButton).NativeReply;
	}
	else
	{
		return FReply::Unhandled();
	}
}

bool UInventorySlot::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	Super::NativeOnDrop(InGeometry, InDragDropEvent, InOperation);

	UDragDropInventorySlot* DragDropSlot = Cast<UDragDropInventorySlot>(InOperation);
	if(DragDropSlot->ContentIndex!=ContentIndex || DragDropSlot->Inventory!=Inventory)
	{
		return UInventory::TransferSlots(DragDropSlot->ContentIndex, DragDropSlot->Inventory, ContentIndex, Inventory);
	}
	return false;
}
