// Fill out your copyright notice in the Description page of Project Settings.


#include "ChainChomp.h"
#include "EnemyConstants.h"
#include "MarioCharacter.h"
#include "PaperFlipbookComponent.h"
#include "CableComponent.h"
#include "Components/BoxComponent.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "Math/UnrealMathUtility.h"

AChainChomp::AChainChomp() :
	MaxJump(false),
	JumpCheck(false)
{
	AttachPoint = CreateDefaultSubobject<UBoxComponent>("ChainChompAttachPoint");
	AttachPoint->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	AttachPoint->SetCollisionProfileName("OverlapAll");
	AttachPoint->BodyInstance.bLockRotation = true;
	AttachPoint->BodyInstance.bLockTranslation = true;
	RootComponent = AttachPoint;

	BoxComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	BoxComponent->SetCollisionProfileName("BlockAllDynamic");
	BoxComponent->SetSimulatePhysics(true);
	BoxComponent->SetNotifyRigidBodyCollision(true);
	BoxComponent->OnComponentHit.AddDynamic(this, &AChainChomp::OnHit);
	BoxComponent->SetupAttachment(RootComponent);

	CableComponent = CreateDefaultSubobject<UCableComponent>("ChainChompCableComponent");
	CableComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	CableComponent->SetCollisionProfileName("BlockAllDynamic");
	CableComponent->SetupAttachment(BoxComponent);
	CableComponent->CableLength = 100.0f;

	/*HeadBoxComponent = CreateDefaultSubobject<UBoxComponent>("ChainChompHead");
	HeadBoxComponent->SetCollisionProfileName("BlockAllDynamic");
	HeadBoxComponent->SetSimulatePhysics(true);
	HeadBoxComponent->SetNotifyRigidBodyCollision(true);
	HeadBoxComponent->BodyInstance.bLockXRotation = true;
	HeadBoxComponent->BodyInstance.bLockYRotation = true;
	HeadBoxComponent->BodyInstance.bLockZRotation = true;
	HeadBoxComponent->BodyInstance.bLockYTranslation = true;
	HeadBoxComponent->SetupAttachment(RootComponent);*/

	ConstraintComponent = CreateDefaultSubobject<UPhysicsConstraintComponent>("ConstraintComponent");
	ConstraintComponent->SetupAttachment(AttachPoint);

	Type = EEnemyType::ChainChomp;
	Tags.Add("ChainChomp");
}

void AChainChomp::BeginPlay()
{
	Super::BeginPlay();

	StateTimer = 3.0f;
	JumpHoldTimer = 2.0f;
}

void AChainChomp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!MaxJump)
		StateTimer -= DeltaTime;

	if (StateTimer <= 0.0f)
	{
		StateTimer = 3.0f;
		FVector marioLocation = GetWorld()->GetFirstPlayerController()->GetPawn<AMarioCharacter>()->GetActorLocation();
		FVector chainchompLocation = BoxComponent->GetComponentLocation();
		FVector force = FVector(marioLocation.X - chainchompLocation.X, 0, marioLocation.Z - chainchompLocation.Z).GetSafeNormal();
		BoxComponent->AddImpulse(force * 10000);
		JumpCheck = true;
	}

	FVector anchorLocation = GetActorLocation();
	FVector headLocation = BoxComponent->GetComponentLocation();
	float distance = sqrt(pow(anchorLocation.X - headLocation.X, 2) + pow(anchorLocation.Z - headLocation.Z, 2));
	if (distance >= 120.f && !MaxJump && JumpCheck)
	{
		//just check distance when we stop moving to avoid force stopping mid swing
		BoxComponent->ComponentVelocity = FVector(0, 0, 0);
		BoxComponent->SetSimulatePhysics(false);
		BoxComponent->SetEnableGravity(false);
		MaxJump = true;
		JumpCheck = false;
	}

	if (MaxJump)
	{
		JumpHoldTimer -= DeltaTime;
		if (JumpHoldTimer <= 0.0f)
		{
			BoxComponent->SetSimulatePhysics(true);
			BoxComponent->SetEnableGravity(true);
			MaxJump = false;
			JumpHoldTimer = 2.0f;
		}
	}
}

void AChainChomp::SetState(EChainChompState state)
{
}

void AChainChomp::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
}
