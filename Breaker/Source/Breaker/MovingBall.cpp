// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingBall.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Sets default values
AMovingBall::AMovingBall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ball_Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MovingBall"));
	RootComponent = ball_Mesh;

	ball_Mesh->SetSimulatePhysics(true); //needed for bounce effect
	ball_Mesh->SetEnableGravity(false);
	ball_Mesh->SetConstraintMode(EDOFMode::XZPlane);
	ball_Mesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	ball_Mesh->SetCollisionProfileName(TEXT("PhysicsActor"));

	ball_Movement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement"));
	ball_Movement->bShouldBounce = true;
	ball_Movement->Bounciness = 1.1f;
	ball_Movement->Friction = 0.0f;
	ball_Movement->Velocity.X = 0.0f;

}

void AMovingBall::Fire()
{
	if (!Launched) {
		ball_Mesh->AddImpulse(FVector(140.0f, 0.0f, 130.0f), FName(), true); //adds a force on all of the object, and the velocity should be changed
		Launched = true;
	}
}

// Called when the game starts or when spawned
void AMovingBall::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMovingBall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

UStaticMeshComponent* AMovingBall::GetBall()
{
	return nullptr;
}

