// Fill out your copyright notice in the Description page of Project Settings.

#include "PivotPaper.h"

#include "PaperFlipbook.h"
#include "PaperFlipbookComponent.h"
#include "PaperZDAnimationComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "AutomafarmCharacter.h"
#include "FarmGameStateBase.h"
#include "Camera/CameraComponent.h"
#include "Structs.h"
#include "Kismet/GameplayStatics.h"

#include "PaperZDCharacter.h"

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
	Sprite->SetupAttachment(GetRootComponent());
	AnimationComp = CreateDefaultSubobject<UPaperZDAnimationComponent>("ZDAnimComp");
	AnimationComp->InitRenderComponent(Sprite);
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