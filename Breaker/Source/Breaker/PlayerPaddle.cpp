// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerPaddle.h"

#include "GameFramework/FloatingPawnMovement.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
APlayerPaddle::APlayerPaddle()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static_Paddle = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("staticPaddle"));
	RootComponent = static_Paddle;

	static_Paddle->SetEnableGravity(false); //disables gravity on an object

	static_Paddle->SetConstraintMode(EDOFMode::XZPlane);//constrains movement to the X and Z axes

	static_Paddle->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);//makes the target a solid physics body

	static_Paddle->SetCollisionProfileName(TEXT("PhysicsActor"));

	movingPawn = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Floating Pawn Movement"));
}

// Called when the game starts or when spawned
void APlayerPaddle::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerPaddle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerPaddle::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void APlayerPaddle::MoveHorizontal(float inputValue)
{
	AddMovementInput(FVector(inputValue, 0.0f, 0.0f), 1.0, false); //adds movement along the x axis, without using force
}

