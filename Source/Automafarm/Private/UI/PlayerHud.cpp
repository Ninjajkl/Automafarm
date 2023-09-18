// Fill out your copyright notice in the Description page of Project Settings.

//Header for this Class
#include "UI/PlayerHud.h"
//Custom Classes
//Other Classes
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Kismet/GameplayStatics.h"

UPlayerHud::UPlayerHud(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

void UPlayerHud::NativeConstruct()
{
	PlayerController = Cast<AAutomafarmPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
}

void UPlayerHud::Init(UInventory* InInventory)
{
	Hotbar->Init(InInventory);
}

void UPlayerHud::DisplayPlayerInventory()
{
	PlayerController->InMenu = true;
	PlayerInventory = CreateWidget<UPlayerInventory>(this, PlayerInventoryClass);
	PlayerInventory->AddToViewport();
}

void UPlayerHud::ShowContainer(AInteractableBlock* Container)
{
	PlayerController->InMenu = true;
	ContainerInventory = CreateWidget<UContainerInventory>(this, Container->ContainerInventoryClass);
	ContainerInventory->Init(Container->Inventory, Container);
	ContainerInventory->AddToViewport();
}

void UPlayerHud::ExitMenu()
{
	if(PlayerInventory)
	{
		PlayerInventory->RemoveFromParent();
	}
	if(ContainerInventory)
	{
		ContainerInventory->RemoveFromParent();
	}
	PlayerController->InMenu = false;
}