// Fill out your copyright notice in the Description page of Project Settings.

#include "PivotPaper.h"

#include "PaperFlipbook.h"
#include "PaperFlipbookComponent.h"
#include "PaperZDAnimationComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "AutomafarmCharacter.h"
#include "FarmGameStateBase.h"
#include "Camera/CameraComponent.h"
#include "TileHolder.h"
#include "Kismet/GameplayStatics.h"

#define PlaceTrace ECC_GameTraceChannel1

AAutomafarmCharacter* playerCharacter;

// Sets default values
UPivotPaper::UPivotPaper()
{
	AFarmGameStateBase* myGameState;
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryComponentTick.bCanEverTick = true;

	myGameState = GetWorld() != NULL ? GetWorld()->GetGameState<AFarmGameStateBase>() : NULL;

	FlipbookComp = CreateDefaultSubobject<UPaperFlipbookComponent>("FlipbookComp");
	//FlipbookComp->SetupAttachment(this);
	FlipbookComp->SetRelativeScale3D(FVector(6.25, 6.25, 6.25));
	ZDAnimComp = CreateDefaultSubobject<UPaperZDAnimationComponent>("ZDAnimComp");
	ZDAnimComp->InitRenderComponent(FlipbookComp);
}

// Called when the game starts or when spawned
void UPivotPaper::BeginPlay()
{
	playerCharacter = Cast<AAutomafarmCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	playerCharacter->OnPlayerMoved.AddDynamic(this, &UPivotPaper::PlayerMoved);
}

FVector UPivotPaper::GetPPCWLocation() 
{
	return FlipbookComp->GetComponentLocation();
}

void UPivotPaper::SetPPCWRotation(FRotator rotator)
{
	FlipbookComp->SetWorldRotation(rotator);
}

//Rotates to face the Player
void UPivotPaper::PlayerMoved(FVector PlayerLoc)
{
	SetPPCWRotation(FRotator(0, UKismetMathLibrary::FindLookAtRotation(GetPPCWLocation(), PlayerLoc).Yaw - 90, 0));
}