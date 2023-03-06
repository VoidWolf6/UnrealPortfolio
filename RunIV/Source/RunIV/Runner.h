// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Runner.generated.h"

UCLASS()
class RUNIV_API ARunner : public ACharacter
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* CameraArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* CameraBase;

	UPROPERTY(VisibleInstanceOnly)
		class ARunIVGameModeBase* GameMode;

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Assets")
		class UParticleSystem* deathParticleSystem;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Assets")
		class USoundBase* deathSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float DropImpulse = -1000.f;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite)
		int32 CurrentLane = 1;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite)
		int32 NextLane = 0;

	UFUNCTION(BlueprintImplementableEvent, Category = "Motion")
		void SwitchLane();

	UFUNCTION(BlueprintCallable, Category = "Motion")
		void SwitchLaneUpdate(float Value);

	UFUNCTION(BlueprintCallable, Category = "Motion")
		void SwitchLaneFinished();

	UFUNCTION(BlueprintCallable)
		void Death();


	// Sets default values for this character's properties
	ARunner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
		void OnDeath();

	UFUNCTION()
		void ChangeLaneLeft();

	UFUNCTION()
		void ChangeLaneRight();

	UFUNCTION()
		void Drop();

	UPROPERTY()
		FTimerHandle RestartTimerHandle;

	UPROPERTY()
		bool dead = false; //ensures death is only called once

public:	
	UFUNCTION()
		void AddCoin();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
