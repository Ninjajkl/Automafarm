// Fill out your copyright notice in the Description page of Project Settings.

//Header for this Class
#include "UI/SlotPreview.h"
//Custom Classes
#include "Library/Structs.h"
//Other Classes
#include "Components/Image.h"
#include "Engine/DataTable.h"

USlotPreview::USlotPreview(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void USlotPreview::Init(const FSlotStruct& InSlotStruct)
{
	RefreshSlot(InSlotStruct);
}

void USlotPreview::RefreshSlot(const FSlotStruct& InSlotStruct)
{
	SlotStruct = InSlotStruct;
	if (SlotStruct.ItemID.DataTable) {
		FTableRowBase* TableRow = SlotStruct.ItemID.DataTable->FindRow<FTableRowBase>(SlotStruct.ItemID.RowName, FString("ContextString"), true);
		if (TableRow)
		{
			FItemStruct* ItemData = StaticCast<FItemStruct*>(TableRow);
			IMGIcon->SetBrushFromTexture(ItemData->Thumbnail.Get(), true);
		}
	}
	TXTQuantity->SetVisibility(SlotStruct.Quantity != 1 ? ESlateVisibility::SelfHitTestInvisible : ESlateVisibility::Hidden);
	TXTQuantity->SetText(FText::AsNumber(SlotStruct.Quantity));
	SetVisibility(SlotStruct.Quantity > 0 ? ESlateVisibility::SelfHitTestInvisible : ESlateVisibility::Hidden);
}