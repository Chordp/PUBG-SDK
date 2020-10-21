// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Powerup_AdrenalineSyringe_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Powerup_AdrenalineSyringe.Powerup_AdrenalineSyringe_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void APowerup_AdrenalineSyringe_C::UserConstructionScript()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Powerup_AdrenalineSyringe.Powerup_AdrenalineSyringe_C.UserConstructionScript"));

	APowerup_AdrenalineSyringe_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Powerup_AdrenalineSyringe.Powerup_AdrenalineSyringe_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void APowerup_AdrenalineSyringe_C::ReceiveBeginPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Powerup_AdrenalineSyringe.Powerup_AdrenalineSyringe_C.ReceiveBeginPlay"));

	APowerup_AdrenalineSyringe_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Powerup_AdrenalineSyringe.Powerup_AdrenalineSyringe_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void APowerup_AdrenalineSyringe_C::CustomEvent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Powerup_AdrenalineSyringe.Powerup_AdrenalineSyringe_C.CustomEvent"));

	APowerup_AdrenalineSyringe_C_CustomEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Powerup_AdrenalineSyringe.Powerup_AdrenalineSyringe_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void APowerup_AdrenalineSyringe_C::ReceiveDestroyed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Powerup_AdrenalineSyringe.Powerup_AdrenalineSyringe_C.ReceiveDestroyed"));

	APowerup_AdrenalineSyringe_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Powerup_AdrenalineSyringe.Powerup_AdrenalineSyringe_C.ExecuteUbergraph_Powerup_AdrenalineSyringe
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void APowerup_AdrenalineSyringe_C::ExecuteUbergraph_Powerup_AdrenalineSyringe(int EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Powerup_AdrenalineSyringe.Powerup_AdrenalineSyringe_C.ExecuteUbergraph_Powerup_AdrenalineSyringe"));

	APowerup_AdrenalineSyringe_C_ExecuteUbergraph_Powerup_AdrenalineSyringe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
