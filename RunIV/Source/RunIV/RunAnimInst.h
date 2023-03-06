// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "RunAnimInst.generated.h"

/**
 * 
 */
UCLASS()
class RUNIV_API URunAnimInst : public UAnimInstance
{
	GENERATED_BODY()

public: 
	UPROPERTY(VisibleInstanceOnly,BlueprintReadOnly,Category="Movement") //only visible, cannot edit
	float Speed;

	UPROPERTY(VisibleInstanceOnly,BlueprintReadOnly,Category="Movement")
	bool isInAir;

	UPROPERTY(VisibleInstanceOnly,BlueprintReadOnly,Category="Movement") 
	class APawn* Pawn;

	UPROPERTY(VisibleInstanceOnly,BlueprintReadOnly,Category="Movement")
	class UPawnMovementComponent* MovementComponent;
	
	virtual void NativeInitializeAnimation() override;

	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
};
