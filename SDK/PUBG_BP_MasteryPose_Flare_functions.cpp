// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_MasteryPose_Flare_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MasteryPose_Flare.BP_MasteryPose_Flare_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF629EA4280              		 offset:13d4280                       

void ABP_MasteryPose_Flare_C::UserConstructionScript()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasteryPose_Flare.BP_MasteryPose_Flare_C.UserConstructionScript"));

	ABP_MasteryPose_Flare_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MasteryPose_Flare.BP_MasteryPose_Flare_C.AttachObjects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter**             LobbyCharacter                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF629EA4280              		 offset:13d4280                       

void ABP_MasteryPose_Flare_C::AttachObjects(class ACharacter** LobbyCharacter)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasteryPose_Flare.BP_MasteryPose_Flare_C.AttachObjects"));

	ABP_MasteryPose_Flare_C_AttachObjects_Params params;
	params.LobbyCharacter = LobbyCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MasteryPose_Flare.BP_MasteryPose_Flare_C.ExecuteUbergraph_BP_MasteryPose_Flare
// (HasDefaults)
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF629EA4280              		 offset:13d4280                       

void ABP_MasteryPose_Flare_C::ExecuteUbergraph_BP_MasteryPose_Flare(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasteryPose_Flare.BP_MasteryPose_Flare_C.ExecuteUbergraph_BP_MasteryPose_Flare"));

	ABP_MasteryPose_Flare_C_ExecuteUbergraph_BP_MasteryPose_Flare_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
