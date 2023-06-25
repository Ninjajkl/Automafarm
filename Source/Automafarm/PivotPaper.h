// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PaperFlipbook.h"
#include "PaperFlipbookComponent.h"
#include "PaperZDAnimationComponent.h"
#include "PlaceableObject.h"
#include "PivotPaper.generated.h"

UCLASS()
class AUTOMAFARM_API UPivotPaper : public UPlaceableObject
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	UPivotPaper();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "PivotPaper")
		UPaperFlipbookComponent* FlipbookComp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PivotPaper")
		UPaperZDAnimationComponent* ZDAnimComp;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UFUNCTION()
		void PlayerMoved(FVector PlayerLoc);
	FVector GetPPCWLocation();
	void SetPPCWRotation(FRotator rotator);

};
