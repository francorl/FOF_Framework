#include "FOF_Framework.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "Engine/World.h"
#include "Components/StaticMeshComponent.h"

#define LOCTEXT_NAMESPACE "FFOF_FrameworkModule"

void FFOF_FrameworkModule::StartupModule()
{
    // This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FFOF_FrameworkModule::ShutdownModule()
{
    // This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
    // we call this function before unloading the module.
}


#undef LOCTEXT_NAMESPACE
//
 IMPLEMENT_MODULE(FFOF_FrameworkModule, FOF_Framework)
