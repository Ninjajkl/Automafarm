// Fill out your copyright notice in the Description page of Project Settings.

//Header for this Class
#include "Items/InteractableBlock.h"
//Custom Classes
#include "UI/PlayerHud.h"
#include "Characters/AutomafarmPlayerController.h"
#include "Game/FarmGameStateBase.h"
//Other Classes
#include "Kismet/GameplayStatics.h"


AInteractableBlock::AInteractableBlock()
{
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMesh");
	SetRootComponent(StaticMesh);
	StaticMesh->ComponentTags = { FName(TEXT("Interactable")) };

	// Create an Inventory Component
	Inventory = CreateDefaultSubobject<UInventory>("Inventory");
}

// Called when the game starts
void AInteractableBlock::BeginPlay()
{
	Super::BeginPlay();
	//By default, every Interactable block can be Broken and Placed
	Placeable = true;
	Renamable = true;
	FarmGameState = GetWorld() != NULL ? GetWorld()->GetGameState<AFarmGameStateBase>() : NULL;
	ItemStruct = FarmGameState->GetItemStructFromClass(GetClass());
}


// Called every frame
void AInteractableBlock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AInteractableBlock::Interact_Implementation()
{
	AAutomafarmPlayerController* PlayerController = Cast<AAutomafarmPlayerController>(UGameplayStatics::GetPlayerController(this, 0));
	PlayerController->PlayerHud->ShowContainer(this);
}

void AInteractableBlock::Dismantle(UInventory* breakingInventory)
{
	if(!Placeable)
	{
		return;
	}
	if(RemoveFromGrid())
	{
		breakingInventory->AddItemArrayToInventory(Inventory->ConvertInventoryToArray(Inventory));
		breakingInventory->AddItemToInventory(1, ItemStruct);
		Destroy();
	}
}

bool AInteractableBlock::RemoveFromGrid()
{
	if (FarmGameState->LevelMap.Remove(GridLocation) > 0)
	{
		return true;
	}
	return false;
}