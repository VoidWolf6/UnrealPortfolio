// Fill out your copyright notice in the Description page of Project Settings.


#include "Paddle_Controller.h"

#include "Kismet/GameplayStatics.h"
#include "Camera/CameraActor.h"

#include "PlayerPaddle.h"
#include "MovingBall.h"


APaddle_Controller::APaddle_Controller()
{
}

void APaddle_Controller::SetupInputComponent()
{
	Super::SetupInputComponent(); //if build succeeds, it usually works

	EnableInput(this); //the controller can now detect input

	InputComponent->BindAxis("MoveHorizontal", this, &APaddle_Controller::MoveHorizontal); //executes the function, set up in project settings
	InputComponent->BindAction("Fire", IE_Pressed, this, &APaddle_Controller::Fire);
}

void APaddle_Controller::BeginPlay()
{

	TArray<AActor*> CameraActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACameraActor::StaticClass(), CameraActors);

	FViewTargetTransitionParams Params;
	SetViewTarget(CameraActors[0], Params);


	SpawnNewBall();
}

void APaddle_Controller::MoveHorizontal(float inputValue)
{
	//auto detects the opposing side's variable type

	if (GetPawn<APlayerPaddle>()) { MoveHorizontal(inputValue); }
	
}

void APaddle_Controller::Fire()
{
	activeBall->Fire();
}

void APaddle_Controller::SpawnNewBall()
{
	if (!activeBall) activeBall = nullptr;

	if (BallObject) {
		activeBall = GetWorld()->SpawnActor<AMovingBall>(BallObject, SpawnLocation, SpawnRotation, SpawnInfo);

	}
}
