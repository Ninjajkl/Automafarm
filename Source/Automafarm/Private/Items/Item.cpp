// Fill out your copyright notice in the Description page of Project Settings.

//Header for this Class
#include "Items/Item.h"
//Custom Classes
//Other Classes

// Sets default values for this component's properties
AItem::AItem()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryActorTick.bCanEverTick = false;
}


// Called when the game starts
void AItem::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

