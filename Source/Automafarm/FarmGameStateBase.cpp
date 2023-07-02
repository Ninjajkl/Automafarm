// Fill out your copyright notice in the Description page of Project Settings.


#include "FarmGameStateBase.h"
#include "Kismet/GameplayStatics.h"
#include "AutomafarmCharacter.h"
#include "GameFramework/Character.h"
#include "BaseBlock.h"

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

bool AFarmGameStateBase::InitializeInstanceableObject(TSubclassOf<UPlaceableObject> instanceableClass)
{
	if (InstancedObjectMap.Contains(instanceableClass)) { return true; }
	InitializeTerrain();
	InstancedObjects.AddUnique(instanceableClass);
	InstancedObjectMap.Add(instanceableClass, Cast<UBaseBlock>(TerrainHolder->AddComponentByClass(instanceableClass, 0, FTransform(FVector(0, 0, 0)), 0)));
	return true;
}
void AFarmGameStateBase::AddPivotPaperComponent(TSubclassOf<UPlaceableObject> PivotClass, FVector TileLoc, FVector PlayerLocation)
{
	InitializeTerrain();
	UPivotPaper* NewPivotPaper = Cast<UPivotPaper>(TerrainHolder->AddComponentByClass(PivotClass, 0, FTransform(TileLoc), 0));
	NewPivotPaper->FlipbookComp->SetRelativeLocation(TileLoc);
	NewPivotPaper->PlayerMoved(PlayerLocation);
	NewPivotPaper->ZDAnimComp->InitRenderComponent(NewPivotPaper->FlipbookComp);
}

void AFarmGameStateBase::InitializeTerrain()
{
	if(!TerrainHolder->IsValidLowLevelFast())
	{
		TerrainHolder = GetWorld()->SpawnActor<AActor>();
		TerrainHolder->SetActorLabel(TEXT("TerrainHolder"));
		TerrainHolder->AddComponentByClass(UPrimitiveComponent::StaticClass(), 0, FTransform(FVector(0, 0, 0)), 0);
		UPrimitiveComponent* newPrim = Cast<UPrimitiveComponent>(TerrainHolder->AddComponentByClass(UPrimitiveComponent::StaticClass(), 0, FTransform(FVector(0, 0, 0)), 0));
		newPrim->SetupAttachment(TerrainHolder->GetRootComponent());
	}
}