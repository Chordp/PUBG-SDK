// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_MasteryPose_FlareHandCover_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MasteryPose_FlareHandCover.BP_MasteryPose_FlareHandCover_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ABP_MasteryPose_FlareHandCover_C::UserConstructionScript()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasteryPose_FlareHandCover.BP_MasteryPose_FlareHandCover_C.UserConstructionScript"));

	ABP_MasteryPose_FlareHandCover_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MasteryPose_FlareHandCover.BP_MasteryPose_FlareHandCover_C.AttachObjects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              LobbyCharacter                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ABP_MasteryPose_FlareHandCover_C::AttachObjects(class ACharacter* LobbyCharacter)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasteryPose_FlareHandCover.BP_MasteryPose_FlareHandCover_C.AttachObjects"));

	ABP_MasteryPose_FlareHandCover_C_AttachObjects_Params params;
	params.LobbyCharacter = LobbyCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MasteryPose_FlareHandCover.BP_MasteryPose_FlareHandCover_C.ExecuteUbergraph_BP_MasteryPose_FlareHandCover
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ABP_MasteryPose_FlareHandCover_C::ExecuteUbergraph_BP_MasteryPose_FlareHandCover(int EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasteryPose_FlareHandCover.BP_MasteryPose_FlareHandCover_C.ExecuteUbergraph_BP_MasteryPose_FlareHandCover"));

	ABP_MasteryPose_FlareHandCover_C_ExecuteUbergraph_BP_MasteryPose_FlareHandCover_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
