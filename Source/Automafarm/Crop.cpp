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
	UpdateCurrentAnimSeq();
}

void ACrop::UpdateTime(FTimespan GameTimeSpan)
{
	CropTimespan = GameTimeSpan - CropCreationTime;
	UpdateCurrentAnimSeq();
}

void ACrop::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACrop::UpdateCurrentAnimSeq()
{
	float floorKey = -100.0f;
	TSoftObjectPtr<UPaperZDAnimSequence> FoundSequence = nullptr;

	for (const auto& AnimStart : GrowthStages)
	{
		if (AnimStart.Key <= CropTimespan.GetTotalHours() && AnimStart.Key >= floorKey)
		{
			floorKey = AnimStart.Key;
			FoundSequence = AnimStart.Value;
		}
	}
	CurrAnimSeq = FoundSequence;
}