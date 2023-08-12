// Fill out your copyright notice in the Description page of Project Settings.

//Header for this Class
#include "UI/Hotbar.h"
//Custom Classes
#include "Characters/AutomafarmPlayerController.h"
#include "Characters/AutomafarmCharacter.h"
#include "Components/Image.h"
#include "Components/OverlaySlot.h"
//Other Classes
#include "Blueprint/WidgetBlueprintLibrary.h"

UHotbar::UHotbar(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

void UHotbar::NativeConstruct()
{
	APlayerController* Controller = GetOwningPlayer();
	if (Controller)
	{
		//Add Delegate
		Cast<AAutomafarmPlayerController>(Controller)->OnHotbarSlotChanged.AddDynamic(this, &UHotbar::HotbarSlotUpdated);
	}
}

void UHotbar::Init(UInventory* InInventory)
{
	Inventory = InInventory;
	Inventory->OnInventoryUpdated.AddUniqueDynamic(this, &UHotbar::RefreshHotbar);
	for (int32 SlotIndex = 0; SlotIndex < 10; ++SlotIndex)
	{
		FString SlotName = FString::Printf(TEXT("Slot%d"), SlotIndex);
		UInventorySlot* InventorySlot = Cast<UInventorySlot>(GetWidgetFromName(*SlotName));
		if (InventorySlot)
		{
			InventorySlots.Add(InventorySlot);
		}
	}
	RefreshHotbar(Inventory);
}

void UHotbar::RefreshHotbar(UInventory* refreshInventory)
{
	Inventory = refreshInventory;
	for (int i = 0; i < InventorySlots.Num(); i++)
	{
		int AdjustedIndex = i == 0 ? 9 : i - 1;
		FSlotStruct* pSlotStruct = Inventory->Content.Find(AdjustedIndex);
		FSlotStruct slotStruct = pSlotStruct ? *pSlotStruct : FSlotStruct();
		InventorySlots[i]->Init(Inventory, slotStruct, AdjustedIndex);
		InventorySlots[i]->RefreshSlot();
	}
}

void UHotbar::HotbarSlotUpdated(int InCurrHotbarSlot)
{
	CurrHotbarSlot = InCurrHotbarSlot == 0 ? 9 : InCurrHotbarSlot - 1;
	FMargin HotbarPadding = FMargin(HotbarSlotGap * CurrHotbarSlot,0,0,0);
	Cast<UOverlaySlot>(IMGHotbarSelector->Slot)->SetPadding(HotbarPadding);
}