// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_TslBaseLobbySceneTravel_Teleport_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TslBaseLobbySceneTravel_Teleport.BP_TslBaseLobbySceneTravel_Teleport_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ABP_TslBaseLobbySceneTravel_Teleport_C::UserConstructionScript()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_TslBaseLobbySceneTravel_Teleport.BP_TslBaseLobbySceneTravel_Teleport_C.UserConstructionScript"));

	ABP_TslBaseLobbySceneTravel_Teleport_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TslBaseLobbySceneTravel_Teleport.BP_TslBaseLobbySceneTravel_Teleport_C.OnStartTravel
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ABP_TslBaseLobbySceneTravel_Teleport_C::OnStartTravel()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_TslBaseLobbySceneTravel_Teleport.BP_TslBaseLobbySceneTravel_Teleport_C.OnStartTravel"));

	ABP_TslBaseLobbySceneTravel_Teleport_C_OnStartTravel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TslBaseLobbySceneTravel_Teleport.BP_TslBaseLobbySceneTravel_Teleport_C.ExecuteUbergraph_BP_TslBaseLobbySceneTravel_Teleport
// ()
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ABP_TslBaseLobbySceneTravel_Teleport_C::ExecuteUbergraph_BP_TslBaseLobbySceneTravel_Teleport(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_TslBaseLobbySceneTravel_Teleport.BP_TslBaseLobbySceneTravel_Teleport_C.ExecuteUbergraph_BP_TslBaseLobbySceneTravel_Teleport"));

	ABP_TslBaseLobbySceneTravel_Teleport_C_ExecuteUbergraph_BP_TslBaseLobbySceneTravel_Teleport_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
