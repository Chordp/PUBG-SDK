// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_LobbyParachute_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TslGame.LobbyParachute.OnRep_ReplicatedSkinParam
// (Final, Native, Private)
// FunctionAddress:0x00007FF75B9A0CB0              		 offset:1fa0cb0                       

void ALobbyParachute_C::OnRep_ReplicatedSkinParam()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.LobbyParachute.OnRep_ReplicatedSkinParam"));

	ALobbyParachute_C_OnRep_ReplicatedSkinParam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.LobbyParachute.InitializeParachuteMesh
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF75AA34480              		 offset:1034480                       

void ALobbyParachute_C::InitializeParachuteMesh()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.LobbyParachute.InitializeParachuteMesh"));

	ALobbyParachute_C_InitializeParachuteMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
