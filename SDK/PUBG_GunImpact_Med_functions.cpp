// PUBG (7.1.6.5) SDK

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
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FDecalEffectDataSet     ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

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
// (Event, Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

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


// Function GunImpact_Med.GunImpact_Med_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AGunImpact_Med_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GunImpact_Med.GunImpact_Med_C.Timeline_0__FinishedFunc"));

	AGunImpact_Med_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunImpact_Med.GunImpact_Med_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AGunImpact_Med_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GunImpact_Med.GunImpact_Med_C.Timeline_0__UpdateFunc"));

	AGunImpact_Med_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunImpact_Med.GunImpact_Med_C.Timeline_1__FinishedFunc
// (BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AGunImpact_Med_C::Timeline_1__FinishedFunc()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GunImpact_Med.GunImpact_Med_C.Timeline_1__FinishedFunc"));

	AGunImpact_Med_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunImpact_Med.GunImpact_Med_C.Timeline_1__UpdateFunc
// (BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AGunImpact_Med_C::Timeline_1__UpdateFunc()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GunImpact_Med.GunImpact_Med_C.Timeline_1__UpdateFunc"));

	AGunImpact_Med_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunImpact_Med.GunImpact_Med_C.PreWakeUp_BP
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform*             InitialTransform               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

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


// Function GunImpact_Med.GunImpact_Med_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AGunImpact_Med_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GunImpact_Med.GunImpact_Med_C.ReceiveEndPlay"));

	AGunImpact_Med_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunImpact_Med.GunImpact_Med_C.AdjustDecalEffectDataSet_BP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

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


// Function GunImpact_Med.GunImpact_Med_C.OnSplatterDecalCreated
// (Event, Public, BlueprintEvent)
// Parameters:
// EImpactType*                   ImpactType                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDecalComponent**        Decal                          (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic** DecalMaterial                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AGunImpact_Med_C::OnSplatterDecalCreated(EImpactType* ImpactType, class UDecalComponent** Decal, class UMaterialInstanceDynamic** DecalMaterial)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GunImpact_Med.GunImpact_Med_C.OnSplatterDecalCreated"));

	AGunImpact_Med_C_OnSplatterDecalCreated_Params params;
	params.ImpactType = ImpactType;
	params.Decal = Decal;
	params.DecalMaterial = DecalMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunImpact_Med.GunImpact_Med_C.ExecuteUbergraph_GunImpact_Med
// (HasDefaults)
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

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
