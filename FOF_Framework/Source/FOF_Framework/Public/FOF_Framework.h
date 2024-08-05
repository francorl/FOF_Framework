
#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"



class FFOF_FrameworkModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};


