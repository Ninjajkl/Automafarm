// Fill out your copyright notice in the Description page of Project Settings.

//Header for this Class
#include "Items/Crop.h"
//Custom Classes
#include "Game/FarmGameStateBase.h"
//Other Classes

// Sets default values
ACrop::ACrop()
{
	FarmGameState = GetWorld() != NULL ? GetWorld()->GetGameState<AFarmGameStateBase>() : NULL;
}

void ACrop::BeginPlay()
{
	Super::BeginPlay();
	if(FarmGameState){
		FarmGameState->OnHourPassed.AddDynamic(this, &ACrop::UpdateTime);
		CropCreationTime = FTimespan() + FarmGameState->GameTimeSpan;
	}
	CropTimespan = FTimespan();
	UpdateCurrentFlipBook();

	SeedsStruct = FarmGameState->GetItemStructFromClass(SeedsItem);
	HarvestStruct = FarmGameState->GetItemStructFromClass(HarvestItem);
}

void ACrop::UpdateTime(FTimespan GameTimeSpan)
{
	CropTimespan = GameTimeSpan - CropCreationTime;
	UpdateCurrentFlipBook();
}

void ACrop::UpdateCurrentFlipBook()
{
	float floorKey = -100.0f;
	TObjectPtr<UPaperFlipbook> FoundBook = nullptr;

	float biggestKey = -FLT_MAX;
	for (const auto& AnimStart : GrowthStages)
	{
		if (AnimStart.Key <= CropTimespan.GetTotalHours() && AnimStart.Key >= floorKey)
		{
			floorKey = AnimStart.Key;
			FoundBook = AnimStart.Value;
		}
		if (AnimStart.Key > biggestKey)
		{
			biggestKey = AnimStart.Key;
		}
	}
	Sprite->SetFlipbook(FoundBook);
	if (floorKey == biggestKey)
	{
		Harvestable = true;
	}
}

void ACrop::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACrop::Load() 
{
	UpdateCurrentFlipBook();
}

void ACrop::Dismantle(UInventory* breakingInventory)
{
	if (RemoveFromGrid())
	{
		if(Harvestable)
		{
			breakingInventory->AddItemToInventory(2, SeedsStruct);
			breakingInventory->AddItemToInventory(4, HarvestStruct);
		}
		Destroy();
	}
}