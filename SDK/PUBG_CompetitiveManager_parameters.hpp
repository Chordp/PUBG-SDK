#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CompetitiveManager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TslGame.CompetitiveManager.UpdateSmokeParticleColor
struct ACompetitiveManager_C_UpdateSmokeParticleColor_Params
{
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
};

// Function TslGame.CompetitiveManager.ApplySmokeColorHelper
struct ACompetitiveManager_C_ApplySmokeColorHelper_Params
{
	struct FVector                                     ColorVector;                                              // (Parm, IsPlainOldData)
	class UTexture*                                    Tex;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.CompetitiveManager.ApplySmokeColor
struct ACompetitiveManager_C_ApplySmokeColor_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
