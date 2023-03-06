// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BallBound.generated.h"

class UBoxComponent;
class APaddle_Controller;

UCLASS()
class BREAKER_API ABallBound : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABallBound();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UBoxComponent* boxCollider;

	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* otherActor,
			class UPrimitiveComponent* otherComp, int32 OtherBodyIndexType, bool bfromSweep, const FHitResult& SweepResult);


	APaddle_Controller* playerController;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
