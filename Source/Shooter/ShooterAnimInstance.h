// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ShooterAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTER_API UShooterAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	virtual void NativeInitializeAnimation() override;

	UFUNCTION(BlueprintCallable)
	void UpdateAnimationProperties(float DeltaTime);
	
private:
	UPROPERTY(VisibleAnywhere, BlueprintReadonly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	class AShooterCharacter* ShooterCharacter;

	UPROPERTY(VisibleAnywhere, BlueprintReadonly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	float Speed;

	UPROPERTY(VisibleAnywhere, BlueprintReadonly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	bool IsInAir;

	UPROPERTY(VisibleAnywhere, BlueprintReadonly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	bool IsAccelerating;
};
