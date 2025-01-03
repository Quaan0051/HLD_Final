// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "MarioCharacter.generated.h"

// Forward declaration
enum class EMarioState : uint8;
enum class EMarioForm : uint8;

/**
 * 
 */
UCLASS()
class PLATFORMER2D_API AMarioCharacter : public APaperCharacter
{
	GENERATED_BODY()

public:
	AMarioCharacter();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mario flipbooks")
	class UPaperFlipbook* SmallIdleFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mario flipbooks")
	class UPaperFlipbook* SmallWalkFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mario flipbooks")
	class UPaperFlipbook* SmallRunFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mario flipbooks")
	class UPaperFlipbook* SmallJumpFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mario flipbooks")
	class UPaperFlipbook* SmallRunJumpFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mario flipbooks")
	class UPaperFlipbook* SmallTurnFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mario flipbooks")
	class UPaperFlipbook* SuperIdleFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mario flipbooks")
	class UPaperFlipbook* SuperWalkFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mario flipbooks")
	class UPaperFlipbook* SuperRunFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mario flipbooks")
	class UPaperFlipbook* SuperJumpFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mario flipbooks")
	class UPaperFlipbook* SuperFallingFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mario flipbooks")
	class UPaperFlipbook* SuperRunJumpFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mario flipbooks")
	class UPaperFlipbook* SuperTurnFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mario flipbooks")
	class UPaperFlipbook* SuperDuckFlipbook;

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	void Respawn(FVector location);

	void Run();
	void StopRunning();

	void Duck();
	void StopDucking();

	void TryDoor();

	void SetJumpHoldTime();

	void ApplyStateChange(EMarioState newState);
	void ApplyTransformChange(EMarioForm newForm, bool noAnimation = false);
	void ApplyBounce();

	void HandleDamage(bool forceDead = false);
	bool IsInvincible();

protected:
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	UFUNCTION()
	void OnOverlapBegan(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnOverlapEnded(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	void OnJumped_Implementation() override;
	void NotifyJumpApex() override;
	void Landed(const FHitResult& Hit) override;

private:
	void MarioHasDied(bool spawnDeadMario);

	void UpdateFlipbook();

	UPaperFlipbook* GetSmallMarioFlipbook();
	UPaperFlipbook* GetSuperMarioFlipbook();

	class AMarioPlayerState* PlayerState;
	class AMarioCamera* CurrentCamera;
	class ADoor* CurrentDoor;
	float RunningSegmentTimer;
	float DamagedTimer;
	bool IsRunningBlocked;	
};
