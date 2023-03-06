// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Paddle_Controller.generated.h"

class AMovingBall;


UCLASS()
class BREAKER_API APaddle_Controller : public APlayerController
{
	GENERATED_BODY()

		APaddle_Controller();

	UFUNCTION()
		virtual void SetupInputComponent() override;

protected:

	virtual void BeginPlay() override; //must be spelled like this

	void MoveHorizontal(float inputValue);


	//values for the ball
	void Fire();

	UPROPERTY(EditAnywhere)
		TSubclassOf<AMovingBall> BallObject;

	AMovingBall* activeBall;

	FVector SpawnLocation = FVector(10.0f, 0.0f, 40.0f); //to spawn an object, location, rotation, and parameters are needed 
	FRotator SpawnRotation = FRotator(0.0f, 0.0f, 0.0f);
	FActorSpawnParameters SpawnInfo;

public:
	void SpawnNewBall();
	
};
