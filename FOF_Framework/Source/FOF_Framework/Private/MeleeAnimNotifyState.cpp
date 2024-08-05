#include "../Public/MeleeAnimNotifyState.h"
#include "../Public/FOF_TraceComponent.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"

void UMeleeAnimNotifyState::BranchingPointNotifyBegin(FBranchingPointNotifyPayload& BranchingPointPayload)
{
	NotifyBegin(BranchingPointPayload.SkelMeshComponent, BranchingPointPayload.SequenceAsset, BranchingPointPayload.NotifyEvent ? BranchingPointPayload.NotifyEvent->GetDuration() : 0.f);
}

void UMeleeAnimNotifyState::BranchingPointNotifyTick(FBranchingPointNotifyPayload& BranchingPointPayload, float FrameDeltaTime)
{
	ACharacter* Character = Cast<ACharacter>(UGameplayStatics::GetPlayerCharacter(BranchingPointPayload.SkelMeshComponent->GetWorld(), 0));
	if (Character)
	{
		UFOF_TraceComponent* TraceComponent = Character->FindComponentByClass<UFOF_TraceComponent>();
		if (TraceComponent && !TraceComponent->bMeleeBlocked)
		{
			TraceComponent->MeleeTrace();
			NotifyTick(BranchingPointPayload.SkelMeshComponent, BranchingPointPayload.SequenceAsset, FrameDeltaTime);
		}
		else
		{
			NotifyEnd(BranchingPointPayload.SkelMeshComponent, BranchingPointPayload.SequenceAsset);
		}
	}
}

void UMeleeAnimNotifyState::BranchingPointNotifyEnd(FBranchingPointNotifyPayload& BranchingPointPayload)
{
	ACharacter* Character = Cast<ACharacter>(UGameplayStatics::GetPlayerCharacter(BranchingPointPayload.SkelMeshComponent->GetWorld(), 0));
	if (Character)
	{
		UFOF_TraceComponent* TraceComponent = Character->FindComponentByClass<UFOF_TraceComponent>();
		if (TraceComponent)
		{
			TraceComponent->MeleeTracePrevious.Empty();
			TraceComponent->MeleeTraceCurrent.Empty();
			TraceComponent->bMeleeBlocked = false;
		}
	}

	NotifyEnd(BranchingPointPayload.SkelMeshComponent, BranchingPointPayload.SequenceAsset);
}
