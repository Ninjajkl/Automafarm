// Fill out your copyright notice in the Description page of Project Settings.

//Header for this Class
#include "UI/DragDropInventorySlot.h"
//Custom Classes
//Other Classes

UDragDropInventorySlot::UDragDropInventorySlot(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

void UDragDropInventorySlot::Init(UInventory* InInventory, int InContentIndex, UWidget* InDefaultDragVisual)
{
	Inventory = InInventory;
	ContentIndex = InContentIndex;
	DefaultDragVisual = InDefaultDragVisual;
}