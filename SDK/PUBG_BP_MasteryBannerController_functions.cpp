// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_MasteryBannerController_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TslGame.MasteryBannerController.SpawnBanner
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 BannerId                       (Parm, ZeroConstructor)
// int                            SurvivalMasteryLevel           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           PlayAnimation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShowBackgroundScene            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75D1CE490              		 offset:37ce490                       

void ABP_MasteryBannerController_C::SpawnBanner(const struct FString& BannerId, int SurvivalMasteryLevel, bool PlayAnimation, bool ShowBackgroundScene)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.MasteryBannerController.SpawnBanner"));

	ABP_MasteryBannerController_C_SpawnBanner_Params params;
	params.BannerId = BannerId;
	params.SurvivalMasteryLevel = SurvivalMasteryLevel;
	params.PlayAnimation = PlayAnimation;
	params.ShowBackgroundScene = ShowBackgroundScene;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.MasteryBannerController.DespawnBanner
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF75DF45510              		 offset:4545510                       

void ABP_MasteryBannerController_C::DespawnBanner()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.MasteryBannerController.DespawnBanner"));

	ABP_MasteryBannerController_C_DespawnBanner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
