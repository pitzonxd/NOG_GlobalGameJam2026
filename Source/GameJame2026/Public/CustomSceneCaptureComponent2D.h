// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneCaptureComponent2D.h"
#include "CustomSceneCaptureComponent2D.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class GAMEJAME2026_API UCustomSceneCaptureComponent2D : public USceneCaptureComponent2D
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UCustomSceneCaptureComponent2D();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	//Overriding this function to allow Owner Only See & Owner No See
	virtual const AActor* GetViewOwner() const override { return this->GetOwner(); }
	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;
};
