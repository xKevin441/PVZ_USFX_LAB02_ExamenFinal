// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "State.h"
#include "Zombie.generated.h"

UCLASS(Abstract)
class PVZ_USFX_LAB02_API AZombie : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AZombie();

public:
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zombie")
	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* ZombieMeshComponent;
	UFUNCTION()
		void OnMyOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	float DamageGenerates = 10.0f;
	float Health = 100.0f;
	float SpawnAfter = 0.0f;
	float MovementSpeed = 0.1f;
	bool bCanMove = false;

	float TakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser);
	void MoveToTarget(FVector TargetLocation);

	virtual void Attack() PURE_VIRTUAL(AZombie::Attack, );

	FORCEINLINE void SetSpawnAfter(float _SpawnAfter) { SpawnAfter = _SpawnAfter; }
	FORCEINLINE float GetSpawnAfter() { return SpawnAfter; }
	FORCEINLINE void SetCanMove(bool _bCanMove) { bCanMove = _bCanMove; }

private:
	IState* EstadoNormal;
	IState* EstadoCongelado;
	IState* EstadoRalentizado;

	IState* ZombieState;
	FString EstadoActual;

public:
	void Inicializar(FString EstadoInicial);
	void SetState(IState* _ZombieState);
	IState* GetState();
	FString* GetEstadoActual();

	void Movimiento(FVector TargetLocation);

	void SetDamageGenerates(float _DamageGenerates) { DamageGenerates = _DamageGenerates; }
	float GetDamageGenerates() { return DamageGenerates; }
	void SetHealth(float _Health) { Health = _Health; }
	float GetHealth() { return Health; }
};
