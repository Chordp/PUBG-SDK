// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_InstancedDecalActor_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Engine.DecalActor.SetDecalMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*      NewDecalMaterial               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75ECA6170              		 offset:52a6170                       

void AInstancedDecalActor_C::SetDecalMaterial(class UMaterialInterface* NewDecalMaterial)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.DecalActor.SetDecalMaterial"));

	AInstancedDecalActor_C_SetDecalMaterial_Params params;
	params.NewDecalMaterial = NewDecalMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.DecalActor.GetDecalMaterial
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75DF0CCB0              		 offset:450ccb0                       

class UMaterialInterface* AInstancedDecalActor_C::GetDecalMaterial()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.DecalActor.GetDecalMaterial"));

	AInstancedDecalActor_C_GetDecalMaterial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.DecalActor.CreateDynamicMaterialInstance
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A20F1F0              		 offset:80f1f0                        

class UMaterialInstanceDynamic* AInstancedDecalActor_C::CreateDynamicMaterialInstance()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.DecalActor.CreateDynamicMaterialInstance"));

	AInstancedDecalActor_C_CreateDynamicMaterialInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
