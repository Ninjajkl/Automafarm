// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PaperFlipbook.h"
#include "PaperFlipbookComponent.h"
#include "PivotPaper.generated.h"

UCLASS()
class AUTOMAFARM_API APivotPaper : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APivotPaper();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UPaperFlipbookComponent* PivotPaperComp;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void OnConstruction(const FTransform& Transform) override;

	UFUNCTION()
		void PlayerMoved(FVector PlayerLoc);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual FVector GetPPCWLocation();
	virtual void SetPPCWRotation(FRotator rotator);
};
