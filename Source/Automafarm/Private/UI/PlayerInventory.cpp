// Fill out your copyright notice in the Description page of Project Settings.

//Header for this Class
#include "UI/PlayerInventory.h"
//Custom Classes
#include "Characters/AutomafarmCharacter.h"
//Other Classes
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Kismet/GameplayStatics.h"

UPlayerInventory::UPlayerInventory(const FObjectInitializer& ObjectInitializer) 
	: Super(ObjectInitializer)
{

}

void UPlayerInventory::NativePreConstruct()
{
	AAutomafarmCharacter* pChar = Cast<AAutomafarmCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	if (pChar) {
		InventoryGrid->RefreshInventory(pChar->PlayerInventory);
	}

}

void UPlayerInventory::NativeConstruct()
{
	APlayerController* playerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(
		playerController,
		this,
		EMouseLockMode::DoNotLock,
		false);
	playerController->SetShowMouseCursor(true);
}

void UPlayerInventory::NativeDestruct()
{
	APlayerController* playerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	if(playerController)
	{
		UWidgetBlueprintLibrary::SetInputMode_GameOnly(playerController, false);
		playerController->SetShowMouseCursor(false);
	}
}