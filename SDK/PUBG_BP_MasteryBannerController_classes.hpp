#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_MasteryBannerController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MasteryBannerController.BP_MasteryBannerController_C
// 0x0000 (0x0498 - 0x0498)
class ABP_MasteryBannerController_C : public AMasteryBannerController
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_MasteryBannerController.BP_MasteryBannerController_C"));

		return ptr;
	}


	void SpawnBanner(const struct FString& BannerId, int SurvivalMasteryLevel, bool PlayAnimation, bool ShowBackgroundScene);
	void DespawnBanner();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
