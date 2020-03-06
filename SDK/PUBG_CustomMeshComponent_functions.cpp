// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CustomMeshComponent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FCustomMeshTriangle> Triangles                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE94060              		 offset:44d4060                       

bool UCustomMeshComponent::SetCustomMeshTriangles(TArray<struct FCustomMeshTriangle> Triangles)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles"));

	UCustomMeshComponent_SetCustomMeshTriangles_Params params;
	params.Triangles = Triangles;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6DAE94040              		 offset:44d4040                       

void UCustomMeshComponent::ClearCustomMeshTriangles()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles"));

	UCustomMeshComponent_ClearCustomMeshTriangles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FCustomMeshTriangle> Triangles                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF6DAE93F90              		 offset:44d3f90                       

void UCustomMeshComponent::AddCustomMeshTriangles(TArray<struct FCustomMeshTriangle> Triangles)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles"));

	UCustomMeshComponent_AddCustomMeshTriangles_Params params;
	params.Triangles = Triangles;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
