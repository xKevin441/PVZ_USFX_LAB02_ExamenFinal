// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "State.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UState : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PVZ_USFX_LAB02_API IState
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void Movimiento(FVector TargetLocation) = 0;
	virtual void Ataque() = 0;
	virtual float DanioRecibido(float Damage) = 0;


	virtual void DefinirZombie(class AZombie* EstadoZombie) = 0;
};
