// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Buff_BoostHealOverTime_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_BoostHealOverTime.Buff_BoostHealOverTime_C.SetHealPerTick
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurBoostGauge                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ABuff_BoostHealOverTime_C::SetHealPerTick(float CurBoostGauge)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Buff_BoostHealOverTime.Buff_BoostHealOverTime_C.SetHealPerTick"));

	ABuff_BoostHealOverTime_C_SetHealPerTick_Params params;
	params.CurBoostGauge = CurBoostGauge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BoostHealOverTime.Buff_BoostHealOverTime_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ABuff_BoostHealOverTime_C::UserConstructionScript()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Buff_BoostHealOverTime.Buff_BoostHealOverTime_C.UserConstructionScript"));

	ABuff_BoostHealOverTime_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BoostHealOverTime.Buff_BoostHealOverTime_C.TickBuff
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ABuff_BoostHealOverTime_C::TickBuff()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Buff_BoostHealOverTime.Buff_BoostHealOverTime_C.TickBuff"));

	ABuff_BoostHealOverTime_C_TickBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BoostHealOverTime.Buff_BoostHealOverTime_C.StartBuffBlueprint
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ABuff_BoostHealOverTime_C::StartBuffBlueprint()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Buff_BoostHealOverTime.Buff_BoostHealOverTime_C.StartBuffBlueprint"));

	ABuff_BoostHealOverTime_C_StartBuffBlueprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BoostHealOverTime.Buff_BoostHealOverTime_C.StopBuffBlueprint
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bCanceled                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ABuff_BoostHealOverTime_C::StopBuffBlueprint(bool bCanceled)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Buff_BoostHealOverTime.Buff_BoostHealOverTime_C.StopBuffBlueprint"));

	ABuff_BoostHealOverTime_C_StopBuffBlueprint_Params params;
	params.bCanceled = bCanceled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BoostHealOverTime.Buff_BoostHealOverTime_C.ExecuteUbergraph_Buff_BoostHealOverTime
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ABuff_BoostHealOverTime_C::ExecuteUbergraph_Buff_BoostHealOverTime(int EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Buff_BoostHealOverTime.Buff_BoostHealOverTime_C.ExecuteUbergraph_Buff_BoostHealOverTime"));

	ABuff_BoostHealOverTime_C_ExecuteUbergraph_Buff_BoostHealOverTime_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
