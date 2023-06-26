// Fill out your copyright notice in the Description page of Project Settings.


#include "FarmGameStateBase.h"
#include "Kismet/GameplayStatics.h"
#include "AutomafarmCharacter.h"
#include "GameFramework/Character.h"
#include "BaseBlock.h"

AFarmGameStateBase::AFarmGameStateBase()
{

}

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