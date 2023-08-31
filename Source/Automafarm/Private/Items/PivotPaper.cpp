// Fill out your copyright notice in the Description page of Project Settings.

//Header for this Class
#include "Items/PivotPaper.h"
//Custom Classes
#include "Characters/AutomafarmCharacter.h"
#include "Game/FarmGameStateBase.h"
#include "Library/Structs.h"
//Other Classes
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "PaperCharacter.h"

#define PlaceTrace ECC_GameTraceChannel1

AAutomafarmCharacter* playerCharacter;

// Sets default values
APivotPaper::APivotPaper()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TileType = ETileType::PIVOTPAPER;
	// Try to create the sprite component
	Sprite = CreateDefaultSubobject<UPaperFlipbookComponent>(APaperCharacter::SpriteComponentName);
	SetRootComponent(Sprite);
}

// Called when the game starts or when spawned
void APivotPaper::BeginPlay()
{
	Super::BeginPlay();
	playerCharacter = Cast<AAutomafarmCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	if (playerCharacter){
		playerCharacter->OnPlayerMoved.AddDynamic(this, &APivotPaper::PlayerMoved);
	}
}

FVector APivotPaper::GetPPCWLocation() 
{
	return Sprite->GetComponentLocation();
}

void APivotPaper::SetPPCWRotation(FRotator rotator)
{
	Sprite->SetWorldRotation(rotator);
}

//Rotates to face the Player
void APivotPaper::PlayerMoved(FVector PlayerLoc)
{
	SetPPCWRotation(FRotator(0, UKismetMathLibrary::FindLookAtRotation(GetPPCWLocation(), PlayerLoc).Yaw - 90, 0));
}
void APivotPaper::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void APivotPaper::Load() 
{

}