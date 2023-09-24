// Fill out your copyright notice in the Description page of Project Settings.

//Header for this Class
#include "Items/Farmtruck.h"
//Custom Classes
//Other Classes

AFarmtruck::AFarmtruck()
{
}

void AFarmtruck::BeginPlay()
{
	Super::Super::BeginPlay();

	//Make sure the truck cannot be placed or dismantled
	Placeable = false;
	Renamable = false;
}