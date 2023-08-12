// Fill out your copyright notice in the Description page of Project Settings.

//Header for this Class
#include "Game/FarmGameStateBase.h"
//Custom Classes
#include "Characters/AutomafarmCharacter.h"
#include "Items/BaseBlock.h"
//Other Classes

double gameSecondsPassed;

AFarmGameStateBase::AFarmGameStateBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AFarmGameStateBase::BeginPlay()
{
	gameSecondsPassed = 0;
	GameTimeSpan = FTimespan::FromHours(StartingHour);
	OnHourPassed.Broadcast(GameTimeSpan);
}

//General Game Functions

void AFarmGameStateBase::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	GameTimeSpan += FTimespan::FromSeconds(DeltaSeconds * TimeMultiplier);
	gameSecondsPassed += DeltaSeconds*TimeMultiplier;
	//Number of seconds in an hour
	if(gameSecondsPassed >= 3600)
	{
		gameSecondsPassed -= 3600;
		OnHourPassed.Broadcast(GameTimeSpan);
	}
}


//Terrain Functions

bool AFarmGameStateBase::InitializeInstanceableObject(TSubclassOf<APlaceableObject> instanceableClass)
{
	if (InstancedObjectMap.Contains(instanceableClass)) { return true; }
	InitializeTerrain();
	InstancedObjects.AddUnique(instanceableClass);
	InstancedObjectMap.Add(instanceableClass, GetWorld()->SpawnActor<APlaceableObject>(instanceableClass));
	return true;
}

APivotPaper* AFarmGameStateBase::AddPivotPaper(TSubclassOf<APlaceableObject> PivotClass, FVector TileLoc, FVector PlayerLocation)
{
	APivotPaper* newPivotPaper = GetWorld()->SpawnActor<APivotPaper>(PivotClass, FTransform(TileLoc));
	newPivotPaper->PlayerMoved(PlayerLocation);
	return newPivotPaper;
}

AInteractableBlock* AFarmGameStateBase::AddInteractableBlock(TSubclassOf<APlaceableObject> BlockClass, FVector TileLoc)
{
	AInteractableBlock* newIB = GetWorld()->SpawnActor<AInteractableBlock>(BlockClass, FTransform(TileLoc));
	return newIB;
}

void AFarmGameStateBase::InitializeTerrain()
{
	if(!TerrainHolder->IsValidLowLevelFast())
	{
		TerrainHolder = GetWorld()->SpawnActor<AActor>();
		TerrainHolder->SetActorLabel(TEXT("TerrainHolder"));
		TerrainHolder->AddComponentByClass(UPrimitiveComponent::StaticClass(), 0, FTransform(FVector(0, 0, 0)), 0);
		//UPrimitiveComponent* newPrim = Cast<UPrimitiveComponent>(TerrainHolder->AddComponentByClass(UPrimitiveComponent::StaticClass(), 0, FTransform(FVector(0, 0, 0)), 0));
		//newPrim->SetupAttachment(TerrainHolder->GetRootComponent());
	}
}