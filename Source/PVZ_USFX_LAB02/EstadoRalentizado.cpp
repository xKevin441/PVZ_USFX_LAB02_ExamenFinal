// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoRalentizado.h"
#include "Zombie.h"

// Sets default values
AEstadoRalentizado::AEstadoRalentizado()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstadoRalentizado::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoRalentizado::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEstadoRalentizado::Movimiento(FVector TargetLocation)
{
	FVector Direction = TargetLocation - FVector(-800.0f, 400.0f, 160.0f);
	float DistanceToTarget = FVector::Dist(TargetLocation, FVector(-800.0f, 400.0f, 160.0f));

	// Reducimos la velocidad de movimiento
	float Velocidad = ZombieEstado->MovementSpeed * 0.5f;

	float DeltaMove = Velocidad * GetWorld()->DeltaTimeSeconds;

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

void AEstadoRalentizado::Ataque()
{
	float DanioCongelado = ZombieEstado->GetDamageGenerates() / 2.0f;
	ZombieEstado->SetDamageGenerates(DanioCongelado);
}

float AEstadoRalentizado::DanioRecibido(float Damage)
{
	float DanioEstado = Damage * 2;
	ZombieEstado->Health -= DanioEstado;

	return ZombieEstado->Health;
}

void AEstadoRalentizado::DefinirZombie(AZombie* EstadodeZombie)
{
	ZombieEstado = EstadodeZombie;
}

