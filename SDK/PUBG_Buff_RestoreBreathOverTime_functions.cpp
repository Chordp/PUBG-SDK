// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Buff_RestoreBreathOverTime_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.CanApplyBuff
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

bool ABuff_RestoreBreathOverTime_C::CanApplyBuff()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.CanApplyBuff"));

	ABuff_RestoreBreathOverTime_C_CanApplyBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ABuff_RestoreBreathOverTime_C::UserConstructionScript()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.UserConstructionScript"));

	ABuff_RestoreBreathOverTime_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.TickBuff
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ABuff_RestoreBreathOverTime_C::TickBuff()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.TickBuff"));

	ABuff_RestoreBreathOverTime_C_TickBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.AfterDelay
// (BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ABuff_RestoreBreathOverTime_C::AfterDelay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.AfterDelay"));

	ABuff_RestoreBreathOverTime_C_AfterDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ABuff_RestoreBreathOverTime_C::ReceiveBeginPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.ReceiveBeginPlay"));

	ABuff_RestoreBreathOverTime_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.ExecuteUbergraph_Buff_RestoreBreathOverTime
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ABuff_RestoreBreathOverTime_C::ExecuteUbergraph_Buff_RestoreBreathOverTime(int EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.ExecuteUbergraph_Buff_RestoreBreathOverTime"));

	ABuff_RestoreBreathOverTime_C_ExecuteUbergraph_Buff_RestoreBreathOverTime_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
