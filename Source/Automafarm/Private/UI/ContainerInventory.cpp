// Fill out your copyright notice in the Description page of Project Settings.

//Header for this Class
#include "UI/ContainerInventory.h"
//Custom Classes
#include "Characters/AutomafarmCharacter.h"
//Other Classes
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Kismet/GameplayStatics.h"

UContainerInventory::UContainerInventory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SetIsFocusable(true);
}

void UContainerInventory::Init(UInventory* InInventory, AInteractableBlock* InContainer)
{
	Inventory = InInventory;
	Container = InContainer;
	AAutomafarmCharacter* pChar = Cast<AAutomafarmCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	if (pChar && Container && Inventory) {
		PlayerInventoryGrid->RefreshInventory(pChar->PlayerInventory);
		ContainerInventoryGrid->RefreshInventory(Inventory);
		ContainerNameTextBox->OnTextChanged.AddDynamic(this, &UContainerInventory::OnCNameTextChanged);
		ContainerNameTextBox->OnTextCommitted.AddDynamic(this, &UContainerInventory::OnCNameTextCommitted);
		ContainerNameTextBox->SetText(Container->Name);
		ContainerNameTextBox->SetIsReadOnly(!Container->Renamable);
	}
}


void UContainerInventory::NativeConstruct()
{
	APlayerController* playerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(
		playerController,
		this,
		EMouseLockMode::DoNotLock,
		false);
	playerController->SetShowMouseCursor(true);
}

void UContainerInventory::NativeDestruct()
{
	APlayerController* playerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	if (playerController)
	{
		UWidgetBlueprintLibrary::SetInputMode_GameOnly(playerController, false);
		playerController->SetShowMouseCursor(false);
	}
}

void UContainerInventory::OnCNameTextChanged(const FText& InText)
{
	FString TextString = InText.ToString();
	if(TextString.Len() >= MaxContainerNameLength)
	{
		ContainerNameTextBox->SetText(FText::FromString(TextString.Left(MaxContainerNameLength)));
	}
}

void UContainerInventory::OnCNameTextCommitted(const FText& InText, ETextCommit::Type CommitMethod)
{
	Container->Name = InText;
}