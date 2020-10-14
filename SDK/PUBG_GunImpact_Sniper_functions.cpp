// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_GunImpact_Sniper_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GunImpact_Sniper.GunImpact_Sniper_C.GetAdjustedDecalEffectDataSet_BP
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FDecalEffectDataSet     ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF629EA4280              		 offset:13d4280                       

struct FDecalEffectDataSet AGunImpact_Sniper_C::GetAdjustedDecalEffectDataSet_BP()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GunImpact_Sniper.GunImpact_Sniper_C.GetAdjustedDecalEffectDataSet_BP"));

	AGunImpact_Sniper_C_GetAdjustedDecalEffectDataSet_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GunImpact_Sniper.GunImpact_Sniper_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF629EA4280              		 offset:13d4280                       

void AGunImpact_Sniper_C::UserConstructionScript()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GunImpact_Sniper.GunImpact_Sniper_C.UserConstructionScript"));

	AGunImpact_Sniper_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunImpact_Sniper.GunImpact_Sniper_C.PreWakeUp_BP
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform*             InitialTransform               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF629EA4280              		 offset:13d4280                       

void AGunImpact_Sniper_C::PreWakeUp_BP(struct FTransform* InitialTransform)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GunImpact_Sniper.GunImpact_Sniper_C.PreWakeUp_BP"));

	AGunImpact_Sniper_C_PreWakeUp_BP_Params params;
	params.InitialTransform = InitialTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunImpact_Sniper.GunImpact_Sniper_C.AdjustDecalEffectDataSet_BP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF629EA4280              		 offset:13d4280                       

void AGunImpact_Sniper_C::AdjustDecalEffectDataSet_BP()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GunImpact_Sniper.GunImpact_Sniper_C.AdjustDecalEffectDataSet_BP"));

	AGunImpact_Sniper_C_AdjustDecalEffectDataSet_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunImpact_Sniper.GunImpact_Sniper_C.ExecuteUbergraph_GunImpact_Sniper
// (HasDefaults)
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF629EA4280              		 offset:13d4280                       

void AGunImpact_Sniper_C::ExecuteUbergraph_GunImpact_Sniper(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GunImpact_Sniper.GunImpact_Sniper_C.ExecuteUbergraph_GunImpact_Sniper"));

	AGunImpact_Sniper_C_ExecuteUbergraph_GunImpact_Sniper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
