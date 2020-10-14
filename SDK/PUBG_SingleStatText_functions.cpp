// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_SingleStatText_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SingleStatText.SingleStatText_C.SetDesiredWidth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InMinDesiredWidth              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF629EA4280              		 offset:13d4280                       

void USingleStatText_C::SetDesiredWidth(float* InMinDesiredWidth)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SingleStatText.SingleStatText_C.SetDesiredWidth"));

	USingleStatText_C_SetDesiredWidth_Params params;
	params.InMinDesiredWidth = InMinDesiredWidth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SingleStatText.SingleStatText_C.SetBackgroundColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsEven                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF629EA4280              		 offset:13d4280                       

void USingleStatText_C::SetBackgroundColor(bool* IsEven)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SingleStatText.SingleStatText_C.SetBackgroundColor"));

	USingleStatText_C_SetBackgroundColor_Params params;
	params.IsEven = IsEven;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SingleStatText.SingleStatText_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (Parm)
// FunctionAddress:0x00007FF629EA4280              		 offset:13d4280                       

void USingleStatText_C::SetText(struct FText* Text)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SingleStatText.SingleStatText_C.SetText"));

	USingleStatText_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SingleStatText.SingleStatText_C.GetText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF629EA4280              		 offset:13d4280                       

struct FText USingleStatText_C::GetText()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SingleStatText.SingleStatText_C.GetText"));

	USingleStatText_C_GetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
