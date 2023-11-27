// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "State.h"
#include "EstadoCongelado.generated.h"

UCLASS()
class PVZ_USFX_LAB02_API AEstadoCongelado : public AActor, public IState
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstadoCongelado();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	class AZombie* ZombieEstado;

private:
	virtual void Movimiento(FVector TargetLocation) override;
	virtual void Ataque() override;
	virtual float DanioRecibido(float Damage) override;

	//virtual FString ToString() override;
	virtual void DefinirZombie(class AZombie* EstadodeZombie) override;
};
