// Fill out your copyright notice in the Description page of Project Settings.


#include "Coin.h"
#include "Components/SphereComponent.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "Runner.h"
#include <Kismet/GameplayStatics.h>

// Sets default values
ACoin::ACoin()
{
	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	RootComponent = SceneComponent; //common across classes

	sphereCollider = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollider"));
	sphereCollider->SetupAttachment(SceneComponent);
	sphereCollider->SetCollisionProfileName(TEXT("OverlapOnlyPawn"));

	coinMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CoinMesh"));
	coinMesh->SetupAttachment(SceneComponent);
	coinMesh->SetCollisionProfileName(TEXT("OverlapOnlyPawn"));

	coinRotator = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("RotatingMovement"));
	coinRotator->RotationRate = FRotator(0, 180, 0);

}

// Called when the game starts or when spawned
void ACoin::BeginPlay()
{
	Super::BeginPlay();
	sphereCollider->OnComponentBeginOverlap.AddDynamic(this, &ACoin::OnSphereOverlap);
	
}

void ACoin::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ARunner* runCharacter = Cast<ARunner>(OtherActor);

	if (runCharacter)
	{
		if (collectSound)
		{
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), collectSound, GetActorLocation());
		}
		runCharacter->AddCoin();
		Destroy();
	}
}
