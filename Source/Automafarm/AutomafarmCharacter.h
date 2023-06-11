// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AutomafarmEnums.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "Misc/CoreDelegates.h"
#include "AutomafarmCharacter.generated.h"

class UInputComponent;
class USkeletalMeshComponent;
class USceneComponent;
class UCameraComponent;
class UAnimMontage;
class USoundBase;
class ACrop;
class APivotPaper;
class UBaseBlock;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKFOnPlayerMoved,FVector,PlayerLoc);

UCLASS(config=Game)
class AAutomafarmCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	USkeletalMeshComponent* Mesh1P;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FirstPersonCameraComponent;

	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	class UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	class UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	class UInputAction* MoveAction;

	/** Interact Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		class UInputAction* InteractAction;
	
public:
	AAutomafarmCharacter();

	UPROPERTY(BlueprintAssignable)
		FKFOnPlayerMoved OnPlayerMoved;

protected:
	virtual void BeginPlay();

public:
		
	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		class UInputAction* LookAction;

	/** Bool for AnimBP to switch to another animation set */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Weapon)
		bool bHasRifle;

	/** Setter to set the bool */
	UFUNCTION(BlueprintCallable, Category = Weapon)
		void SetHasRifle(bool bNewHasRifle);

	/** Getter for the bool */
	UFUNCTION(BlueprintCallable, Category = Weapon)
		bool GetHasRifle();

	UPROPERTY(EditAnywhere, Meta = (ClampMin = 0.000001))
		float TileLength = 100.0f;

protected:
	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);

	/** Called for interaction input */
	void Interact(const FInputActionValue& Value);

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
	// End of APawn interface

	UPROPERTY(EditAnywhere)
		TSubclassOf<APivotPaper> PivPClass;
	UPROPERTY(EditAnywhere)
		TSubclassOf<UBaseBlock> BlockClass;

public:
	/** Returns Mesh1P subobject **/
	USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }
	/** Returns FirstPersonCameraComponent subobject **/
	UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

	FVector AbsoluteToGrid(FVector aCoords);

	void AddToLevelMap(ETileType TileType, FVector TileKey, APivotPaper* newPivotPaper = nullptr, UBaseBlock* newBlock = nullptr);

	bool ValidPlacement(TArray<FVector> TilesToCheck, FVector TileKey, bool checkEntities = false, FCollisionShape collisionShape = FCollisionShape::MakeSphere(-1.f));
};

