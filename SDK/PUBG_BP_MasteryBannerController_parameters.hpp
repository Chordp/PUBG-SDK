#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_MasteryBannerController_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TslGame.MasteryBannerController.SpawnBanner
struct ABP_MasteryBannerController_C_SpawnBanner_Params
{
	struct FString                                     BannerId;                                                 // (Parm, ZeroConstructor)
	int                                                SurvivalMasteryLevel;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PlayAnimation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowBackgroundScene;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.MasteryBannerController.DespawnBanner
struct ABP_MasteryBannerController_C_DespawnBanner_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
