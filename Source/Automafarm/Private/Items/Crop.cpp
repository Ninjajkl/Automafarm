// Fill out your copyright notice in the Description page of Project Settings.

//Header for this Class
#include "Items/Crop.h"
//Custom Classes
#include "Game/FarmGameStateBase.h"
//Other Classes

// Sets default values
ACrop::ACrop()
{

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

	for (const auto& AnimStart : GrowthStages)
	{
		if (AnimStart.Key <= CropTimespan.GetTotalHours() && AnimStart.Key >= floorKey)
		{
			floorKey = AnimStart.Key;
			FoundBook = AnimStart.Value;
		}
	}
	Sprite->SetFlipbook(FoundBook);
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
			//breakingInventory->AddItemToInventory(1, *breakingInventory->ItemDataTable->FindRow<FItemStruct>(BlockName, TEXT("")));
		}
		Destroy();
	}
}