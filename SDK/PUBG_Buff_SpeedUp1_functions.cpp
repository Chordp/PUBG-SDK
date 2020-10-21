// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Buff_SpeedUp1_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_SpeedUp1.Buff_SpeedUp1_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ABuff_SpeedUp1_C::UserConstructionScript()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Buff_SpeedUp1.Buff_SpeedUp1_C.UserConstructionScript"));

	ABuff_SpeedUp1_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpeedUp1.Buff_SpeedUp1_C.StartBuffBlueprint
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ABuff_SpeedUp1_C::StartBuffBlueprint()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Buff_SpeedUp1.Buff_SpeedUp1_C.StartBuffBlueprint"));

	ABuff_SpeedUp1_C_StartBuffBlueprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpeedUp1.Buff_SpeedUp1_C.StopBuffBlueprint
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bCanceled                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ABuff_SpeedUp1_C::StopBuffBlueprint(bool bCanceled)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Buff_SpeedUp1.Buff_SpeedUp1_C.StopBuffBlueprint"));

	ABuff_SpeedUp1_C_StopBuffBlueprint_Params params;
	params.bCanceled = bCanceled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpeedUp1.Buff_SpeedUp1_C.ExecuteUbergraph_Buff_SpeedUp1
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ABuff_SpeedUp1_C::ExecuteUbergraph_Buff_SpeedUp1(int EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Buff_SpeedUp1.Buff_SpeedUp1_C.ExecuteUbergraph_Buff_SpeedUp1"));

	ABuff_SpeedUp1_C_ExecuteUbergraph_Buff_SpeedUp1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
