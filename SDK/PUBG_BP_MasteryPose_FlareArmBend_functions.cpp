// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_MasteryPose_FlareArmBend_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MasteryPose_FlareArmBend.BP_MasteryPose_FlareArmBend_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ABP_MasteryPose_FlareArmBend_C::UserConstructionScript()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasteryPose_FlareArmBend.BP_MasteryPose_FlareArmBend_C.UserConstructionScript"));

	ABP_MasteryPose_FlareArmBend_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MasteryPose_FlareArmBend.BP_MasteryPose_FlareArmBend_C.AttachObjects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter**             LobbyCharacter                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ABP_MasteryPose_FlareArmBend_C::AttachObjects(class ACharacter** LobbyCharacter)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasteryPose_FlareArmBend.BP_MasteryPose_FlareArmBend_C.AttachObjects"));

	ABP_MasteryPose_FlareArmBend_C_AttachObjects_Params params;
	params.LobbyCharacter = LobbyCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MasteryPose_FlareArmBend.BP_MasteryPose_FlareArmBend_C.ExecuteUbergraph_BP_MasteryPose_FlareArmBend
// (HasDefaults)
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ABP_MasteryPose_FlareArmBend_C::ExecuteUbergraph_BP_MasteryPose_FlareArmBend(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasteryPose_FlareArmBend.BP_MasteryPose_FlareArmBend_C.ExecuteUbergraph_BP_MasteryPose_FlareArmBend"));

	ABP_MasteryPose_FlareArmBend_C_ExecuteUbergraph_BP_MasteryPose_FlareArmBend_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
