// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseBrick.h"

#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "MovingBall.h"

// Sets default values
ABaseBrick::ABaseBrick()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	brickMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Brick"));

	brickMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

	boxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collision"));
	boxCollider->SetBoxExtent(FVector(25.0f, 10.0f, 10.0f));

	RootComponent = boxCollider;

}

// Called when the game starts or when spawned
void ABaseBrick::BeginPlay()
{
	Super::BeginPlay();

	boxCollider->OnComponentBeginOverlap.AddDynamic(this, &ABaseBrick::OnOverlapBegin);


	
}

// Called every frame
void ABaseBrick::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseBrick::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 OtherBodyIndexType, bool bfromSweep, const FHitResult& SweepResult)
{
	if (otherActor->ActorHasTag("MovingBall")) {
		AMovingBall* currentBall = Cast<AMovingBall>(otherActor);
		FVector ballVelocity = currentBall->GetVelocity();
		ballVelocity *= (BounceSpeedModifier - 1.0f);

		currentBall->GetBall()->SetPhysicsLinearVelocity(ballVelocity, true);

		FTimerHandle UnusedHandle;
		GetWorldTimerManager().SetTimer(UnusedHandle, this, &ABaseBrick::DestroyBrick, 0.1f, false);

	}
}

void ABaseBrick::DestroyBrick()
{
	this->Destroy();
}