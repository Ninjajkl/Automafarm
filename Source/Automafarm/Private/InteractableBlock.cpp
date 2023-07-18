// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableBlock.h"

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
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("This is a debug message."));
}