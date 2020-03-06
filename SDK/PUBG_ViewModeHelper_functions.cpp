// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ViewModeHelper_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ViewModeHelper.ViewModeHelper_C.OnMouseDown
// (BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UViewModeHelper_C::OnMouseDown()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ViewModeHelper.ViewModeHelper_C.OnMouseDown"));

	UViewModeHelper_C_OnMouseDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ViewModeHelper.ViewModeHelper_C.OnMouseUp
// (BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UViewModeHelper_C::OnMouseUp()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ViewModeHelper.ViewModeHelper_C.OnMouseUp"));

	UViewModeHelper_C_OnMouseUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ViewModeHelper.ViewModeHelper_C.AddX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UViewModeHelper_C::AddX(float* Scale)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ViewModeHelper.ViewModeHelper_C.AddX"));

	UViewModeHelper_C_AddX_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ViewModeHelper.ViewModeHelper_C.AddY
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UViewModeHelper_C::AddY(float* Scale)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ViewModeHelper.ViewModeHelper_C.AddY"));

	UViewModeHelper_C_AddY_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ViewModeHelper.ViewModeHelper_C.ViewModeZoomInOrOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UViewModeHelper_C::ViewModeZoomInOrOut(float* Scale)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ViewModeHelper.ViewModeHelper_C.ViewModeZoomInOrOut"));

	UViewModeHelper_C_ViewModeZoomInOrOut_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ViewModeHelper.ViewModeHelper_C.ViewModeReset
// (BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UViewModeHelper_C::ViewModeReset()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ViewModeHelper.ViewModeHelper_C.ViewModeReset"));

	UViewModeHelper_C_ViewModeReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ViewModeHelper.ViewModeHelper_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UViewModeHelper_C::Construct()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ViewModeHelper.ViewModeHelper_C.Construct"));

	UViewModeHelper_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ViewModeHelper.ViewModeHelper_C.ExecuteUbergraph_ViewModeHelper
// (HasDefaults)
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UViewModeHelper_C::ExecuteUbergraph_ViewModeHelper(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ViewModeHelper.ViewModeHelper_C.ExecuteUbergraph_ViewModeHelper"));

	UViewModeHelper_C_ExecuteUbergraph_ViewModeHelper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
