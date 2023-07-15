// Fill out your copyright notice in the Description page of Project Settings.

#include "FarmGameStateBase.h"
#include "Kismet/GameplayStatics.h"
#include "PaperZDAnimationComponent.h"
#include "Crop.h"

AFarmGameStateBase* FarmGameState;

// Sets default values
ACrop::ACrop()
{
	PrimaryActorTick.bCanEverTick = true;
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
}

void ACrop::UpdateTime(FTimespan GameTimeSpan)
{
	CropTimespan = GameTimeSpan - CropCreationTime;
	UpdateCurrentFlipBook();
}

void ACrop::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACrop::UpdateCurrentFlipBook()
{
	float floorKey = -100.0f;
	TSoftObjectPtr<UPaperFlipbook> FoundBook = nullptr;

	for (const auto& AnimStart : GrowthStages)
	{
		if (AnimStart.Key <= CropTimespan.GetTotalHours() && AnimStart.Key >= floorKey)
		{
			floorKey = AnimStart.Key;
			FoundBook = AnimStart.Value;
		}
	}
	Sprite->SetFlipbook(FoundBook.LoadSynchronous());
}