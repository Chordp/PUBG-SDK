#pragma once

// PUBG (7.2.8.10) SDK

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
// 0x0000 (0x0470 - 0x0470)
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


	void STATIC_SpawnBanner(const struct FString& BannerId, int SurvivalMasteryLevel, bool PlayAnimation, bool ShowBackgroundScene);
	void STATIC_DespawnBanner();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
