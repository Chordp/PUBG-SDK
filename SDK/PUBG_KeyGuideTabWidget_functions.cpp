// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_KeyGuideTabWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TslGame.TslTabSelectorWidget.UpdateIndexTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75B354DB0              		 offset:1954db0                       

void UKeyGuideTabWidget_C::UpdateIndexTo(int NewIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslTabSelectorWidget.UpdateIndexTo"));

	UKeyGuideTabWidget_C_UpdateIndexTo_Params params;
	params.NewIndex = NewIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslTabSelectorWidget.RotateRight
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF75EC6D200              		 offset:526d200                       

void UKeyGuideTabWidget_C::RotateRight()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslTabSelectorWidget.RotateRight"));

	UKeyGuideTabWidget_C_RotateRight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslTabSelectorWidget.RotateLeft
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF75B93A5C0              		 offset:1f3a5c0                       

void UKeyGuideTabWidget_C::RotateLeft()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslTabSelectorWidget.RotateLeft"));

	UKeyGuideTabWidget_C_RotateLeft_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslTabSelectorWidget.ResetSelector
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF75B2A1120              		 offset:18a1120                       

void UKeyGuideTabWidget_C::ResetSelector()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslTabSelectorWidget.ResetSelector"));

	UKeyGuideTabWidget_C_ResetSelector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
