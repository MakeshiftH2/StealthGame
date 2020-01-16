// Fill out your copyright notice in the Description page of Project Settings.



#include "Components/SphereComponent.h"
#include "..\Public\FPSOBJ.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "StealthGame/StealthGameCharacter.h"


// Sets default values
AFPSOBJ::AFPSOBJ()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	RootComponent = MeshComp;

	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	SphereComp->SetupAttachment(MeshComp);
	SphereComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	SphereComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	SphereComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	SphereComp->SetupAttachment(MeshComp);


}

// Called when the game starts or when spawned
void AFPSOBJ::BeginPlay()
{
	Super::BeginPlay();
	PlayEffects();
	
}

void AFPSOBJ::PlayEffects()
{
	UGameplayStatics::SpawnEmitterAtLocation(this, PickupFX, GetActorLocation());
}

void AFPSOBJ::NotifyActorBeginOverlap(AActor * OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	PlayEffects();

	AStealthGameCharacter* MyCharacter = Cast<AStealthGameCharacter>(OtherActor);
		if (MyCharacter)
		{
			MyCharacter->bIsCarryingObjective = true;

			Destroy();
		}
}

// Called every frame
void AFPSOBJ::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

