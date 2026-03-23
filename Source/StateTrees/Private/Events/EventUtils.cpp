// Code written by Fabio Pittaccio - 2026

#include "Events/EventUtils.h"
#include "Game/LogMessages.h"

// Get the Entity ID from the Object Path Name
FString UEventUtils::GetEntityID(const UObject* Object)
{
	return Object ? Object->GetPathName() : FString("NULL");
}

// Instigator is null
void UEventUtils::PassedNull(const UObject* Object, const FString Instigator)
{
	if (Object)
		ULogMessages::OnScreen(FString::Printf(TEXT("Object: %s passed NULL: %s"),
			*Object->GetPathName(), *Instigator));
}

// Branch the entity ID
void UEventUtils::CheckEntityID(const UObject* Object, const FString DataEntityID, EBranch& Branch)
{
	GetEntityID(Object) == DataEntityID ? Branch = EBranch::SameID : Branch = EBranch::DifferentID;
}
