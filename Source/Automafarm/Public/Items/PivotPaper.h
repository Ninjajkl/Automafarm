// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//Custom Classes
#include "PlaceableObject.h"
//Other Classes
#include "CoreMinimal.h"
#include "PaperFlipbookComponent.h"
//Generated File
#include "PivotPaper.generated.h"

UCLASS()
class AUTOMAFARM_API APivotPaper : public APlaceableObject
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APivotPaper();

	// Name of the Sprite component
	static FName SpriteComponentName;
	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		TObjectPtr<UPaperFlipbookComponent> Sprite;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UFUNCTION()
		void PlayerMoved(FVector PlayerLoc);
	FVector GetPPCWLocation();
	void SetPPCWRotation(FRotator rotator);
	virtual void Tick(float DeltaTime) override;
};