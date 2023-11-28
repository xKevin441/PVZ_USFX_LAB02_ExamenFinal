// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoNormal.h"
#include "Zombie.h"

// Sets default values
AEstadoNormal::AEstadoNormal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstadoNormal::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoNormal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEstadoNormal::Movimiento(FVector TargetLocation)
{
	FVector Direction = TargetLocation - FVector(-800.0f, 400.0f, 160.0f);
	float DistanceToTarget = FVector::Dist(TargetLocation, FVector(-800.0f, 400.0f, 160.0f));

	// Calcula el desplazamiento en este frame
	float DeltaMove = ZombieEstado->MovementSpeed * GetWorld()->DeltaTimeSeconds;

	if (DeltaMove > DistanceToTarget)
	{
		// Si el desplazamiento excede la distancia al objetivo, mueve directamente al objetivo
		ZombieEstado->SetActorLocation(TargetLocation);
	}
	else
	{
		// Mueve el objeto en la direcci�n calculada
		ZombieEstado->AddActorWorldOffset(Direction * DeltaMove);
	}

}

void AEstadoNormal::Ataque()
{
	ZombieEstado->SetDamageGenerates(DanioNormal);
}

float AEstadoNormal::DanioRecibido(float Damage)
{
	float DanioEstado = Damage * 1;
	ZombieEstado->Health -= DanioEstado;

	return ZombieEstado->Health;
}


void AEstadoNormal::DefinirZombie(AZombie* EstadodeZombie)
{
	ZombieEstado = EstadodeZombie;
}


