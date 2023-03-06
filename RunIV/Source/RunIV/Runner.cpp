// Fill out your copyright notice in the Description page of Project Settings.


#include "Runner.h"
#include "RunIVGameModeBase.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"


// Sets default values
ARunner::ARunner()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CameraArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraArm"));
	CameraArm->TargetArmLength = 350.f;
	CameraArm->SocketOffset = FVector(0.f, 0.f, 100.f);
	CameraArm->bUsePawnControlRotation = true;
	CameraArm->SetupAttachment(GetRootComponent());

	CameraBase = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraBase->bUsePawnControlRotation = false;
	CameraBase->SetupAttachment(CameraArm, USpringArmComponent::SocketName);

}

// Called when the game starts or when spawned
void ARunner::BeginPlay()
{
	Super::BeginPlay();
	
	GameMode = Cast<ARunIVGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));

	check(GameMode);
}

void ARunner::AddCoin()
{
	GameMode->AddCoin();
}

// Called every frame
void ARunner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FRotator controlRotation = GetControlRotation();
	controlRotation.Roll = 0.f;
	controlRotation.Pitch = 0.f;

	AddMovementInput(controlRotation.Vector());

}

// Called to bind functionality to input
void ARunner::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("ChangeLaneLeft", IE_Pressed, this, &ARunner::ChangeLaneLeft);
	PlayerInputComponent->BindAction("ChangeLaneRight", IE_Pressed, this, &ARunner::ChangeLaneRight);
	PlayerInputComponent->BindAction("Drop", IE_Pressed, this, &ARunner::Drop);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ARunner::Jump); //inherited from character
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ARunner::StopJumping);

}

void ARunner::SwitchLaneUpdate(const float Value)
{
	FVector Location = GetCapsuleComponent()->GetComponentLocation();
	Location.Y = FMath::Lerp(GameMode->LaneValues[CurrentLane], GameMode->LaneValues[NextLane], Value);
	SetActorLocation(Location);
}

void ARunner::SwitchLaneFinished()
{
	CurrentLane = NextLane;
}

void ARunner::Death()
{	
	if (!dead)
	{
		const FVector finalDestination = GetActorLocation();

		UWorld* World = GetWorld();
		if (World)
		{
			dead = true;
			DisableInput(nullptr);

			if (deathParticleSystem) { UGameplayStatics::SpawnEmitterAtLocation(World, deathParticleSystem, finalDestination); }

			if (deathSound)	{ UGameplayStatics::PlaySoundAtLocation(World, deathSound, finalDestination); }
		
			GetMesh()->SetVisibility(false);

			World->GetTimerManager().SetTimer(RestartTimerHandle, this, &ARunner::OnDeath, 1.f);
		}
	}

		
}

void ARunner::OnDeath()
{
	dead = false;
	if (RestartTimerHandle.IsValid())
	{
		GetWorldTimerManager().ClearTimer(RestartTimerHandle);
	}
	UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), TEXT("RestartLevel")); //this is how the level is restarted
}

void ARunner::ChangeLaneLeft()
{
	NextLane = FMath::Clamp(CurrentLane - 1, 0, 2);
	SwitchLane();
}

void ARunner::ChangeLaneRight()
{
	NextLane = FMath::Clamp(CurrentLane + 1, 0, 2);
	SwitchLane();
}

void ARunner::Drop()
{
	static FVector Impulse = FVector(0, 0, DropImpulse);

	GetCharacterMovement()->AddImpulse(Impulse, true);
}
