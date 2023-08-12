// Fill out your copyright notice in the Description page of Project Settings.

//Header for this Class
#include "UI/PlayerHud.h"
//Custom Classes
//Other Classes
#include "Blueprint/WidgetBlueprintLibrary.h"

UPlayerHud::UPlayerHud(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

void UPlayerHud::Init(UInventory* InInventory)
{
	Hotbar->Init(InInventory);
}

void UPlayerHud::DisplayPlayerInventory()
{
	PlayerInventory = CreateWidget<UPlayerInventory>(this, PlayerInventoryClass);
	PlayerInventory->AddToViewport();
}

void UPlayerHud::ShowContainer(AInteractableBlock* Container)
{
	ContainerInventory = CreateWidget<UContainerInventory>(this, ContainerInventoryClass);
	ContainerInventory->Init(Container->Inventory, Container);
	ContainerInventory->AddToViewport();
}