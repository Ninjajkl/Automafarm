// Fill out your copyright notice in the Description page of Project Settings.


#include "PlaceableObject.h"


APlaceableObject::APlaceableObject()
{
	PrimaryActorTick.bCanEverTick = true;
	Placeable = true;
}

// Called when the game starts
void APlaceableObject::BeginPlay()
{
	Super::BeginPlay();
}


// Called every frame
void APlaceableObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

