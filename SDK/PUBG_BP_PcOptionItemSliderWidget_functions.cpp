// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_PcOptionItemSliderWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TslGame.TslGameOptionItemSliderWidget.ResetAcceleration
// (Final, Native, Private)
// FunctionAddress:0x00007FF75CBE27F0              		 offset:31e27f0                       

void UBP_PcOptionItemSliderWidget_C::ResetAcceleration()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslGameOptionItemSliderWidget.ResetAcceleration"));

	UBP_PcOptionItemSliderWidget_C_ResetAcceleration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOptionItemSliderWidget.OnSliderValueTextCommitted
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75EA55470              		 offset:5055470                       

void UBP_PcOptionItemSliderWidget_C::OnSliderValueTextCommitted(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslGameOptionItemSliderWidget.OnSliderValueTextCommitted"));

	UBP_PcOptionItemSliderWidget_C_OnSliderValueTextCommitted_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOptionItemSliderWidget.OnSliderValueTextChanged
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF75D0C1250              		 offset:36c1250                       

void UBP_PcOptionItemSliderWidget_C::OnSliderValueTextChanged(const struct FText& Text)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslGameOptionItemSliderWidget.OnSliderValueTextChanged"));

	UBP_PcOptionItemSliderWidget_C_OnSliderValueTextChanged_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOptionItemSliderWidget.OnSliderValueChanged
// (Native, Public)
// Parameters:
// float                          MappedValue                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75A52EE30              		 offset:b2ee30                        

void UBP_PcOptionItemSliderWidget_C::OnSliderValueChanged(float MappedValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslGameOptionItemSliderWidget.OnSliderValueChanged"));

	UBP_PcOptionItemSliderWidget_C_OnSliderValueChanged_Params params;
	params.MappedValue = MappedValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOptionItemSliderWidget.OnSliderAdjustmentEnd
// (Final, Native, Public)
// FunctionAddress:0x00007FF75E3284A0              		 offset:49284a0                       

void UBP_PcOptionItemSliderWidget_C::OnSliderAdjustmentEnd()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslGameOptionItemSliderWidget.OnSliderAdjustmentEnd"));

	UBP_PcOptionItemSliderWidget_C_OnSliderAdjustmentEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOptionItemSliderWidget.OnSliderAdjustmentBegin
// (Final, Native, Public)
// FunctionAddress:0x00007FF75E99F030              		 offset:4f9f030                       

void UBP_PcOptionItemSliderWidget_C::OnSliderAdjustmentBegin()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslGameOptionItemSliderWidget.OnSliderAdjustmentBegin"));

	UBP_PcOptionItemSliderWidget_C_OnSliderAdjustmentBegin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
