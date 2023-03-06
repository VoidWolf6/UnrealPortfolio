// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseObstacle.h"
#include "Runner.h"

// Sets default values
ABaseObstacle::ABaseObstacle()
{
	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	RootComponent = SceneComponent;

	ObstacleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ObstacleMesh"));
	ObstacleMesh->SetupAttachment(SceneComponent);

	ObstacleMesh->OnComponentHit.AddDynamic(this, &ABaseObstacle::OnObstacleHit);
}

void ABaseObstacle::OnObstacleHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	ARunner* Player = Cast<ARunner>(OtherActor);

	if (Player) { Player->Death(); }
}
