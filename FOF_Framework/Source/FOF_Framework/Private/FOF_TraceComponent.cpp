#include "../Public/FOF_TraceComponent.h"
#include "GameFramework/Actor.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/Character.h"


UFOF_TraceComponent::UFOF_TraceComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
    bMeleeBlocked = false;
    WeaponComp = nullptr;
    GreatswordMesh = nullptr;
}

void UFOF_TraceComponent::BeginPlay()
{
    Super::BeginPlay();
    InitializeComponents();
    PreviousEnd = GetOwner()->GetActorLocation();
}

void UFOF_TraceComponent::InitializeComponents()
 {
     AActor* Owner = GetOwner();
     if (Owner)
     {
         WeaponComp = Cast<USceneComponent>(Owner->GetDefaultSubobjectByName(TEXT("WeaponComp")));
         if (!WeaponComp)
         {
             UE_LOG(LogTemp, Error, TEXT("WeaponComp no encontrado en el actor %s"), *Owner->GetName());
             return;
         }

         for (USceneComponent* Child : WeaponComp->GetAttachChildren())
         {
             if (Child->GetName() == TEXT("GreatswordMesh"))
             {
                 GreatswordMesh = Cast<UStaticMeshComponent>(Child);
                 break;
             }
         }

         if (!GreatswordMesh)
         {
             UE_LOG(LogTemp, Error, TEXT("GreatswordMesh no encontrado en el WeaponComp del actor %s"), *Owner->GetName());
         }
     }
 }

void UFOF_TraceComponent::MeleeTrace()
{
    if (!WeaponComp || !GreatswordMesh)
    {
        UE_LOG(LogTemp, Error, TEXT("Componentes requeridos no están inicializados."));
        return;
    }

    APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
    if (PC && !bMeleeBlocked)
    {


        FCollisionQueryParams TraceParams(FName(TEXT("WeaponTrace")), false, PC);

        if (!GreatswordMesh->DoesSocketExist(TEXT("FX_weapon_base")) || !GreatswordMesh->DoesSocketExist(TEXT("FX_weapon_tip")))
        {
            UE_LOG(LogTemp, Error, TEXT("Los sockets FX_weapon_base o FX_weapon_tip no existen en GreatswordMesh."));
            return;
        }

        TArray<FVector> MeleeTrace;
        FVector MeleeTraceBottom = GreatswordMesh->GetSocketLocation(TEXT("FX_weapon_base"));
        FVector MeleeTraceTop = GreatswordMesh->GetSocketLocation(TEXT("FX_weapon_tip"));

        if (MeleeTraceBottom.IsNearlyZero() || MeleeTraceTop.IsNearlyZero())
        {
            UE_LOG(LogTemp, Warning, TEXT("Las ubicaciones de los sockets no son válidas."));
            return;
        }

        
        FVector MeleeVectorDirection = MeleeTraceTop - MeleeTraceBottom;
        float MeleeVectorLength = MeleeVectorDirection.Size();

        MeleeVectorDirection.Normalize();

        MeleeTracePrevious.Push(MeleeTraceBottom);
        MeleeTracePrevious.Push(MeleeTraceTop);

        MeleeTrace.Push(MeleeTraceBottom);
        MeleeTrace.Push(MeleeTraceTop);

        for (int i = 0; i < MeleeVectorLength; i += 10) {
            MeleeTracePrevious.Push(MeleeTraceBottom + MeleeVectorDirection * i);
            MeleeTrace.Push(MeleeTraceBottom + MeleeVectorDirection * i);
        }

        if (MeleeTrace.Num() > 0)
        {
            for (int i = 0; i < MeleeTrace.Num(); i++)
            {
                if (MeleeTracePrevious.IsValidIndex(i) && MeleeTrace.IsValidIndex(i))
                {
                    
                    GetWorld()->LineTraceMultiByObjectType(
                        WallHit,
                        MeleeTracePrevious[i],
                        MeleeTrace[i],
                        FCollisionObjectQueryParams::AllStaticObjects,
                        TraceParams
                    );

                    MeleeTracePrevious[i] = MeleeTrace[i];


                    if (FHitResult::GetFirstBlockingHit(WallHit)) {
                        WallHit.Empty();
                        MeleeTracePrevious.Empty();
                        bMeleeBlocked = true;
                        break;
                    }


                    //if (FHitResult* BlockingHit = WallHit.FindByPredicate([](const FHitResult& HitResult) { return HitResult.bBlockingHit; }))
                    //{
                    //    MeleeTracePrevious.Empty();
                    //    bMeleeBlocked = true;
                    //    break;
                    //}

                    DrawDebugLine(
                                GetWorld(),
                                MeleeTracePrevious[i],
                                MeleeTrace[i],
                                FColor::Red,
                                false,
                                1.0f,
                                0,
                                2.0f
                    );
                }
                else
                {
                    UE_LOG(LogTemp, Error, TEXT("Índice no válido en MeleeTrace o MeleeTracePrevious."));
                }
            }
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("PlayerController es NULL o ataque de melee está bloqueado."));
    }
}
