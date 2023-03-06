// Fill out your copyright notice in the Description page of Project Settings.


#include "FloorTile.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include <Kismet/GameplayStatics.h>
#include "Runner.h"
#include "RunIVGameModeBase.h"
#include "Coin.h"
#include <Kismet/KismetMathLibrary.h>


// Sets default values
AFloorTile::AFloorTile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	RootComponent = SceneComponent;

	FloorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FloorMesh"));
	FloorMesh->SetupAttachment(SceneComponent);

	AttachPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("Attach Point"));
	AttachPoint->SetupAttachment(SceneComponent);

	CenterLane = CreateDefaultSubobject<UArrowComponent>(TEXT("Centre"));
	CenterLane->SetupAttachment(SceneComponent);

	LeftLane = CreateDefaultSubobject<UArrowComponent>(TEXT("Left"));
	LeftLane->SetupAttachment(SceneComponent);

	RightLane = CreateDefaultSubobject<UArrowComponent>(TEXT("Right"));
	RightLane->SetupAttachment(SceneComponent);

	FloorTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger"));
	FloorTrigger->SetupAttachment(SceneComponent);
	FloorTrigger->SetBoxExtent(FVector(32.f, 500.f, 200.f));
	FloorTrigger->SetCollisionProfileName(TEXT("OverlapOnlyPawn"));
}


// Called when the game starts or when spawned
void AFloorTile::BeginPlay()
{
	Super::BeginPlay();

	GameMode = Cast<ARunIVGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	
	check(GameMode);//if fails, something is wrong

	FloorTrigger->OnComponentBeginOverlap.AddDynamic(this, &AFloorTile::OnTriggerBoxOverlap);
}

//the values were found by using 'Go to definition' twice. once on the function, then on the datatype it holds
void AFloorTile::OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Sweepresult)
{
	ARunner* runCharacter = Cast<ARunner>(OtherActor);

	if (runCharacter)
	{
		GameMode->AddFloorTile(true);

		GetWorldTimerManager().SetTimer(DestroyHandle, this, &AFloorTile::DestroyTile, 2.f, false);
	}
}

void AFloorTile::ItemSpawn()
{
	if (IsValid(smallObstacleClass) && IsValid(bigObstacleClass) && IsValid(coinClass))
	{
		SpawnInLane(CenterLane);
		SpawnInLane(LeftLane);
		SpawnInLane(RightLane);
	}
}

void AFloorTile::SpawnInLane(UArrowComponent* Lane)
{
	const float randomValue = FMath::FRandRange(0.f, 1.f);
	FActorSpawnParameters spawnParameters;
	spawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	const FTransform& spawnTransform = Lane->GetComponentTransform();

	if (UKismetMathLibrary::InRange_FloatFloat(randomValue, spawnPercent1, spawnPercent3, true, true))
	{
		ABaseObstacle* Obstacle = GetWorld()->SpawnActor<ABaseObstacle>(smallObstacleClass, spawnTransform, spawnParameters);
	}
	else if (UKismetMathLibrary::InRange_FloatFloat(randomValue, spawnPercent2, spawnPercent3, true, true))
	{
		ABaseObstacle* Obstacle = GetWorld()->SpawnActor<ABaseObstacle>(bigObstacleClass, spawnTransform, spawnParameters);		
	}
	else if (UKismetMathLibrary::InRange_FloatFloat(randomValue, spawnPercent3, 1.f, true, true))
	{
		ACoin* Coin = GetWorld()->SpawnActor<ACoin>(coinClass, spawnTransform, spawnParameters);
	}

}

void AFloorTile::DestroyTile()
{
	if (DestroyHandle.IsValid()) GetWorldTimerManager().ClearTimer(DestroyHandle);

	this->Destroy();
}
