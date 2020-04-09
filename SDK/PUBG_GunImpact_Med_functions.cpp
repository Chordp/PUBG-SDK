// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_GunImpact_Med_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GunImpact_Med.GunImpact_Med_C.GetAdjustedDecalEffectDataSet_BP
// ()
// Parameters:
// struct FDecalEffectDataSet     ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

struct FDecalEffectDataSet AGunImpact_Med_C::GetAdjustedDecalEffectDataSet_BP()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GunImpact_Med.GunImpact_Med_C.GetAdjustedDecalEffectDataSet_BP"));

	AGunImpact_Med_C_GetAdjustedDecalEffectDataSet_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GunImpact_Med.GunImpact_Med_C.UserConstructionScript
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void AGunImpact_Med_C::UserConstructionScript()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GunImpact_Med.GunImpact_Med_C.UserConstructionScript"));

	AGunImpact_Med_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunImpact_Med.GunImpact_Med_C.PreWakeUp_BP
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FTransform*             InitialTransform               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void AGunImpact_Med_C::PreWakeUp_BP(struct FTransform* InitialTransform)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GunImpact_Med.GunImpact_Med_C.PreWakeUp_BP"));

	AGunImpact_Med_C_PreWakeUp_BP_Params params;
	params.InitialTransform = InitialTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunImpact_Med.GunImpact_Med_C.WakeUp_BP
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FTransform*             InitialTransform               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void AGunImpact_Med_C::WakeUp_BP(struct FTransform* InitialTransform)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GunImpact_Med.GunImpact_Med_C.WakeUp_BP"));

	AGunImpact_Med_C_WakeUp_BP_Params params;
	params.InitialTransform = InitialTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunImpact_Med.GunImpact_Med_C.ReceiveBeginPlay
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void AGunImpact_Med_C::ReceiveBeginPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GunImpact_Med.GunImpact_Med_C.ReceiveBeginPlay"));

	AGunImpact_Med_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunImpact_Med.GunImpact_Med_C.AdjustDecalEffectDataSet_BP
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void AGunImpact_Med_C::AdjustDecalEffectDataSet_BP()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GunImpact_Med.GunImpact_Med_C.AdjustDecalEffectDataSet_BP"));

	AGunImpact_Med_C_AdjustDecalEffectDataSet_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunImpact_Med.GunImpact_Med_C.ExecuteUbergraph_GunImpact_Med
// (MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF638F1BC40              		 offset:1c2bc40                       

void AGunImpact_Med_C::ExecuteUbergraph_GunImpact_Med(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GunImpact_Med.GunImpact_Med_C.ExecuteUbergraph_GunImpact_Med"));

	AGunImpact_Med_C_ExecuteUbergraph_GunImpact_Med_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif