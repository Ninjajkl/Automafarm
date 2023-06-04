// Fill out your copyright notice in the Description page of Project Settings.

#include "PivotPaper.h"

#include "PaperFlipbook.h"
#include "PaperFlipbookComponent.h"
#include "PaperZDAnimationComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "AutomafarmCharacter.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"

AAutomafarmCharacter* playerCharacter;

// Sets default values
APivotPaper::APivotPaper()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>("RootComponent");
	FlipbookComp = CreateDefaultSubobject<UPaperFlipbookComponent>("FlipbookComp");
	FlipbookComp->SetupAttachment(RootComponent);
	FlipbookComp->SetRelativeScale3D(FVector(6.25, 6.25, 6.25));
	ZDAnimComp = CreateDefaultSubobject<UPaperZDAnimationComponent>("ZDAnimComp");
	ZDAnimComp->InitRenderComponent(FlipbookComp);
}

void APivotPaper::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

}

// Called when the game starts or when spawned
void APivotPaper::BeginPlay()
{
	Super::BeginPlay();

	playerCharacter = Cast<AAutomafarmCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	playerCharacter->OnPlayerMoved.AddDynamic(this, &APivotPaper::PlayerMoved);
}

// Called every frame
void APivotPaper::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

FVector APivotPaper::GetPPCWLocation() 
{
	return FlipbookComp->GetComponentLocation();
}

void APivotPaper::SetPPCWRotation(FRotator rotator)
{
	FlipbookComp->SetWorldRotation(rotator);
}

//Rotates to face the Player
void APivotPaper::PlayerMoved(FVector PlayerLoc)
{
	SetPPCWRotation(FRotator(0, UKismetMathLibrary::FindLookAtRotation(GetPPCWLocation(), PlayerLoc).Yaw - 90, 0));
}