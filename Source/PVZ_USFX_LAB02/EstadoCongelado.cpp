// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoCongelado.h"
#include "Zombie.h"

// Sets default values
AEstadoCongelado::AEstadoCongelado()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstadoCongelado::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AEstadoCongelado::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}

void AEstadoCongelado::Movimiento(FVector TargetLocation)
{
	FVector Direction = TargetLocation - FVector(-800.0f, 400.0f, 160.0f);
	float DistanceToTarget = FVector::Dist(TargetLocation, FVector(-800.0f, 400.0f, 160.0f));

	// Detenemos al zombie
	float Velocidad = 0.0f;
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

void AEstadoCongelado::Ataque()
{
	float DanioCongelado = ZombieEstado->GetDamageGenerates() / 3.0f;
	ZombieEstado->SetDamageGenerates(DanioCongelado);
}

float AEstadoCongelado::DanioRecibido(float Damage)
{
	float DanioEstado = Damage * 5;
	ZombieEstado->Health -= DanioEstado;

	return ZombieEstado->Health;
}

void AEstadoCongelado::DefinirZombie(AZombie* EstadodeZombie)
{
	ZombieEstado = EstadodeZombie;
}
