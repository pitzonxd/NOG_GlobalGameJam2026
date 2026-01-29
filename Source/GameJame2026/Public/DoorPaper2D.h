// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Paper2D/Classes/PaperSpriteActor.h"
#include "DoorPaper2D.generated.h"

UENUM(BlueprintType, Blueprintable)
enum class ELockSystem : uint8
{
	NotLocked,
	Locked,
	LockedByKey,
	LockedBySwitch,
};

UCLASS(BlueprintType, Blueprintable)
class GAMEJAME2026_API ADoorPaper2D : public APaperSpriteActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADoorPaper2D();
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	ELockSystem LockSystem;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (EditCondition = "LockSystem == ELockSystem::LockedByKey", EditConditionHides))
	FName KeyID;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ToggleDoor();
	
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void TimedToggleDoor(float Time);
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
