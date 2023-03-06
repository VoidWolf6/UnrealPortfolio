// Fill out your copyright notice in the Description page of Project Settings.


#include "RunAnimInst.h"
#include "GameFramework/PawnMovementComponent.h"

void URunAnimInst::NativeInitializeAnimation()
{
	if (Pawn == nullptr) Pawn = TryGetPawnOwner(); //makes sure that there is a valid pawn

	if (IsValid(Pawn)) MovementComponent = Pawn->GetMovementComponent();
}

void URunAnimInst::NativeUpdateAnimation(float DeltaSeconds)
{
	if (Pawn && MovementComponent)
	{
		isInAir = MovementComponent->IsFalling();

		Speed = Pawn->GetVelocity().Size();  
	}
}
