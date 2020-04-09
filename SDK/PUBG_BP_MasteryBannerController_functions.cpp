// PUBG (7.2.8.10) SDK

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
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FString                 BannerId                       (Parm, ZeroConstructor)
// int                            SurvivalMasteryLevel           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           PlayAnimation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShowBackgroundScene            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6393D3F40              		 offset:20e3f40                       

void ABP_MasteryBannerController_C::STATIC_SpawnBanner(const struct FString& BannerId, int SurvivalMasteryLevel, bool PlayAnimation, bool ShowBackgroundScene)
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
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// FunctionAddress:0x00007FF6393B2F30              		 offset:20c2f30                       

void ABP_MasteryBannerController_C::STATIC_DespawnBanner()
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
