#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FOF_TraceComponent.generated.h"



class USceneComponent;

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class UFOF_TraceComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UFOF_TraceComponent();

	UFUNCTION(BlueprintCallable, Category = "Melee")
	void MeleeTrace();


	TArray<FVector> MeleeTracePrevious;
	TArray<FVector> MeleeTraceCurrent;
	TArray<FHitResult> WallHit;
	bool bMeleeBlocked;

protected:
	virtual void BeginPlay() override;
	

private:
	USceneComponent* WeaponComp;
	UStaticMeshComponent* GreatswordMesh;
	FVector PreviousEnd;
    
	void InitializeComponents();
};
