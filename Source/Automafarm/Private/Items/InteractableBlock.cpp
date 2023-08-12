// Fill out your copyright notice in the Description page of Project Settings.

//Header for this Class
#include "Items/InteractableBlock.h"
//Custom Classes
#include "Characters/AutomafarmPlayerController.h"
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