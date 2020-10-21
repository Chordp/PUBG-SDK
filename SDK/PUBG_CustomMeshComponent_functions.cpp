// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CustomMeshComponent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Engine.MeshComponent.SetVectorParameterValueOnMaterials
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   ParameterName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ParameterValue                 (ConstParm, Parm, IsPlainOldData)
// FunctionAddress:0x00007FF759E400B0              		 offset:4400b0                        

void UCustomMeshComponent::SetVectorParameterValueOnMaterials(const struct FName& ParameterName, const struct FVector& ParameterValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.MeshComponent.SetVectorParameterValueOnMaterials"));

	UCustomMeshComponent_SetVectorParameterValueOnMaterials_Params params;
	params.ParameterName = ParameterName;
	params.ParameterValue = ParameterValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.MeshComponent.SetScalarParameterValueOnMaterials
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ParameterName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ParameterValue                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75D726520              		 offset:3d26520                       

void UCustomMeshComponent::SetScalarParameterValueOnMaterials(const struct FName& ParameterName, float ParameterValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.MeshComponent.SetScalarParameterValueOnMaterials"));

	UCustomMeshComponent_SetScalarParameterValueOnMaterials_Params params;
	params.ParameterName = ParameterName;
	params.ParameterValue = ParameterValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.MeshComponent.IsMaterialSlotNameValid
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   MaterialSlotName               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B1A6B40              		 offset:17a6b40                       

bool UCustomMeshComponent::IsMaterialSlotNameValid(const struct FName& MaterialSlotName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.MeshComponent.IsMaterialSlotNameValid"));

	UCustomMeshComponent_IsMaterialSlotNameValid_Params params;
	params.MaterialSlotName = MaterialSlotName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.MeshComponent.GetMaterialSlotNames
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF75EB60000              		 offset:5160000                       

TArray<struct FName> UCustomMeshComponent::GetMaterialSlotNames()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.MeshComponent.GetMaterialSlotNames"));

	UCustomMeshComponent_GetMaterialSlotNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.MeshComponent.GetMaterials
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMaterialInterface*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF75A9565A0              		 offset:f565a0                        

TArray<class UMaterialInterface*> UCustomMeshComponent::GetMaterials()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.MeshComponent.GetMaterials"));

	UCustomMeshComponent_GetMaterials_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.MeshComponent.GetMaterialIndex
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   MaterialSlotName               (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B2D6210              		 offset:18d6210                       

int UCustomMeshComponent::GetMaterialIndex(const struct FName& MaterialSlotName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.MeshComponent.GetMaterialIndex"));

	UCustomMeshComponent_GetMaterialIndex_Params params;
	params.MaterialSlotName = MaterialSlotName;

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
