// Fill out your copyright notice in the Description page of Project Settings.


#include "PlaceableObject.h"


UPlaceableObject::UPlaceableObject()
{
}

// Called when the game starts
void UPlaceableObject::BeginPlay()
{
	Super::BeginPlay();
}


// Called every frame
void UPlaceableObject::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

