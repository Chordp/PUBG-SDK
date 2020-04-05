// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_UMG_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UMG.BackgroundBlurSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment>* InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862BFE0              		 offset:85bfe0                        

void UBackgroundBlurSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment>* InVerticalAlignment)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BackgroundBlurSlot.SetVerticalAlignment"));

	UBackgroundBlurSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.BackgroundBlurSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin*                InPadding                      (Parm)
// FunctionAddress:0x00007FF71862A120              		 offset:85a120                        

void UBackgroundBlurSlot::SetPadding(struct FMargin* InPadding)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BackgroundBlurSlot.SetPadding"));

	UBackgroundBlurSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.BackgroundBlurSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718627D70              		 offset:857d70                        

void UBackgroundBlurSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BackgroundBlurSlot.SetHorizontalAlignment"));

	UBackgroundBlurSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.BorderSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment>* InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862C0E0              		 offset:85c0e0                        

void UBorderSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment>* InVerticalAlignment)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BorderSlot.SetVerticalAlignment"));

	UBorderSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.BorderSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin*                InPadding                      (Parm)
// FunctionAddress:0x00007FF71862A240              		 offset:85a240                        

void UBorderSlot::SetPadding(struct FMargin* InPadding)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BorderSlot.SetPadding"));

	UBorderSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.BorderSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718627E70              		 offset:857e70                        

void UBorderSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BorderSlot.SetHorizontalAlignment"));

	UBorderSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ButtonSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment>* InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862C2E0              		 offset:85c2e0                        

void UButtonSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment>* InVerticalAlignment)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ButtonSlot.SetVerticalAlignment"));

	UButtonSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ButtonSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin*                InPadding                      (Parm)
// FunctionAddress:0x00007FF71862A2D0              		 offset:85a2d0                        

void UButtonSlot::SetPadding(struct FMargin* InPadding)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ButtonSlot.SetPadding"));

	UButtonSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ButtonSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718627EF0              		 offset:857ef0                        

void UButtonSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ButtonSlot.SetHorizontalAlignment"));

	UButtonSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.CanvasPanelSlot.SetZOrder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           InZOrder                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862C890              		 offset:85c890                        

void UCanvasPanelSlot::SetZOrder(int* InZOrder)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.SetZOrder"));

	UCanvasPanelSlot_SetZOrder_Params params;
	params.InZOrder = InZOrder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.CanvasPanelSlot.SetSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D*              InSize                         (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF71862B090              		 offset:85b090                        

void UCanvasPanelSlot::SetSize(struct FVector2D* InSize)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.SetSize"));

	UCanvasPanelSlot_SetSize_Params params;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.CanvasPanelSlot.SetPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D*              InPosition                     (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF71862AA90              		 offset:85aa90                        

void UCanvasPanelSlot::SetPosition(struct FVector2D* InPosition)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.SetPosition"));

	UCanvasPanelSlot_SetPosition_Params params;
	params.InPosition = InPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.CanvasPanelSlot.SetOffsets
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin*                InOffset                       (Parm)
// FunctionAddress:0x00007FF718629E80              		 offset:859e80                        

void UCanvasPanelSlot::SetOffsets(struct FMargin* InOffset)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.SetOffsets"));

	UCanvasPanelSlot_SetOffsets_Params params;
	params.InOffset = InOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.CanvasPanelSlot.SetMinimum
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector2D*              InMinimumAnchors               (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF718629B60              		 offset:859b60                        

void UCanvasPanelSlot::SetMinimum(struct FVector2D* InMinimumAnchors)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.SetMinimum"));

	UCanvasPanelSlot_SetMinimum_Params params;
	params.InMinimumAnchors = InMinimumAnchors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.CanvasPanelSlot.SetMaximum
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector2D*              InMaximumAnchors               (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF718629760              		 offset:859760                        

void UCanvasPanelSlot::SetMaximum(struct FVector2D* InMaximumAnchors)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.SetMaximum"));

	UCanvasPanelSlot_SetMaximum_Params params;
	params.InMaximumAnchors = InMaximumAnchors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.CanvasPanelSlot.SetLayout
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAnchorData*            InLayoutData                   (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF718629250              		 offset:859250                        

void UCanvasPanelSlot::SetLayout(struct FAnchorData* InLayoutData)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.SetLayout"));

	UCanvasPanelSlot_SetLayout_Params params;
	params.InLayoutData = InLayoutData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.CanvasPanelSlot.SetAutoSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          InbAutoSize                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718625E90              		 offset:855e90                        

void UCanvasPanelSlot::SetAutoSize(bool* InbAutoSize)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.SetAutoSize"));

	UCanvasPanelSlot_SetAutoSize_Params params;
	params.InbAutoSize = InbAutoSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.CanvasPanelSlot.SetAnchors
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FAnchors*               InAnchors                      (Parm)
// FunctionAddress:0x00007FF718625BC0              		 offset:855bc0                        

void UCanvasPanelSlot::SetAnchors(struct FAnchors* InAnchors)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.SetAnchors"));

	UCanvasPanelSlot_SetAnchors_Params params;
	params.InAnchors = InAnchors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.CanvasPanelSlot.SetAlignment
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D*              InAlignment                    (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF718625AB0              		 offset:855ab0                        

void UCanvasPanelSlot::SetAlignment(struct FVector2D* InAlignment)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.SetAlignment"));

	UCanvasPanelSlot_SetAlignment_Params params;
	params.InAlignment = InAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.CanvasPanelSlot.GetZOrder
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718624100              		 offset:854100                        

int UCanvasPanelSlot::GetZOrder()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.GetZOrder"));

	UCanvasPanelSlot_GetZOrder_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.GetSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718623B60              		 offset:853b60                        

struct FVector2D UCanvasPanelSlot::GetSize()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.GetSize"));

	UCanvasPanelSlot_GetSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.GetPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7186238A0              		 offset:8538a0                        

struct FVector2D UCanvasPanelSlot::GetPosition()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.GetPosition"));

	UCanvasPanelSlot_GetPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.GetOffsets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMargin                 ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718623720              		 offset:853720                        

struct FMargin UCanvasPanelSlot::GetOffsets()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.GetOffsets"));

	UCanvasPanelSlot_GetOffsets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.GetLayout
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAnchorData             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718623450              		 offset:853450                        

struct FAnchorData UCanvasPanelSlot::GetLayout()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.GetLayout"));

	UCanvasPanelSlot_GetLayout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.GetAutoSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7186222A0              		 offset:8522a0                        

bool UCanvasPanelSlot::GetAutoSize()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.GetAutoSize"));

	UCanvasPanelSlot_GetAutoSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.GetAnchors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAnchors                ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718622260              		 offset:852260                        

struct FAnchors UCanvasPanelSlot::GetAnchors()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.GetAnchors"));

	UCanvasPanelSlot_GetAnchors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.GetAlignment
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718621F40              		 offset:851f40                        

struct FVector2D UCanvasPanelSlot::GetAlignment()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.GetAlignment"));

	UCanvasPanelSlot_GetAlignment_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.GridSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment>* InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862C160              		 offset:85c160                        

void UGridSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment>* InVerticalAlignment)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.GridSlot.SetVerticalAlignment"));

	UGridSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.GridSlot.SetRowSpan
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           InRowSpan                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862AC90              		 offset:85ac90                        

void UGridSlot::SetRowSpan(int* InRowSpan)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.GridSlot.SetRowSpan"));

	UGridSlot_SetRowSpan_Params params;
	params.InRowSpan = InRowSpan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.GridSlot.SetRow
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           InRow                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862AB90              		 offset:85ab90                        

void UGridSlot::SetRow(int* InRow)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.GridSlot.SetRow"));

	UGridSlot_SetRow_Params params;
	params.InRow = InRow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.GridSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin*                InPadding                      (Parm)
// FunctionAddress:0x00007FF71862A360              		 offset:85a360                        

void UGridSlot::SetPadding(struct FMargin* InPadding)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.GridSlot.SetPadding"));

	UGridSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.GridSlot.SetLayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           InLayer                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7186291D0              		 offset:8591d0                        

void UGridSlot::SetLayer(int* InLayer)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.GridSlot.SetLayer"));

	UGridSlot_SetLayer_Params params;
	params.InLayer = InLayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.GridSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718627F70              		 offset:857f70                        

void UGridSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.GridSlot.SetHorizontalAlignment"));

	UGridSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.GridSlot.SetColumnSpan
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           InColumnSpan                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718627050              		 offset:857050                        

void UGridSlot::SetColumnSpan(int* InColumnSpan)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.GridSlot.SetColumnSpan"));

	UGridSlot_SetColumnSpan_Params params;
	params.InColumnSpan = InColumnSpan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.GridSlot.SetColumn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           InColumn                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718626F50              		 offset:856f50                        

void UGridSlot::SetColumn(int* InColumn)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.GridSlot.SetColumn"));

	UGridSlot_SetColumn_Params params;
	params.InColumn = InColumn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.HorizontalBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment>* InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862C1E0              		 offset:85c1e0                        

void UHorizontalBoxSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment>* InVerticalAlignment)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.HorizontalBoxSlot.SetVerticalAlignment"));

	UHorizontalBoxSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.HorizontalBoxSlot.SetSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateChildSize*        InSize                         (Parm)
// FunctionAddress:0x00007FF71862B110              		 offset:85b110                        

void UHorizontalBoxSlot::SetSize(struct FSlateChildSize* InSize)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.HorizontalBoxSlot.SetSize"));

	UHorizontalBoxSlot_SetSize_Params params;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.HorizontalBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin*                InPadding                      (Parm)
// FunctionAddress:0x00007FF71862A3F0              		 offset:85a3f0                        

void UHorizontalBoxSlot::SetPadding(struct FMargin* InPadding)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.HorizontalBoxSlot.SetPadding"));

	UHorizontalBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.HorizontalBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718627FF0              		 offset:857ff0                        

void UHorizontalBoxSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.HorizontalBoxSlot.SetHorizontalAlignment"));

	UHorizontalBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.OverlaySlot.SetZOrder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           InZOrder                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862C910              		 offset:85c910                        

void UOverlaySlot::SetZOrder(int* InZOrder)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.OverlaySlot.SetZOrder"));

	UOverlaySlot_SetZOrder_Params params;
	params.InZOrder = InZOrder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.OverlaySlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment>* InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862C260              		 offset:85c260                        

void UOverlaySlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment>* InVerticalAlignment)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.OverlaySlot.SetVerticalAlignment"));

	UOverlaySlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.OverlaySlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin*                InPadding                      (Parm)
// FunctionAddress:0x00007FF71862A480              		 offset:85a480                        

void UOverlaySlot::SetPadding(struct FMargin* InPadding)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.OverlaySlot.SetPadding"));

	UOverlaySlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.OverlaySlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718628070              		 offset:858070                        

void UOverlaySlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.OverlaySlot.SetHorizontalAlignment"));

	UOverlaySlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.OverlaySlot.GetZOrder
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718624130              		 offset:854130                        

int UOverlaySlot::GetZOrder()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.OverlaySlot.GetZOrder"));

	UOverlaySlot_GetZOrder_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.ScaleBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment>* InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862C2E0              		 offset:85c2e0                        

void UScaleBoxSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment>* InVerticalAlignment)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScaleBoxSlot.SetVerticalAlignment"));

	UScaleBoxSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ScaleBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin*                InPadding                      (Parm)
// FunctionAddress:0x00007FF71862A510              		 offset:85a510                        

void UScaleBoxSlot::SetPadding(struct FMargin* InPadding)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScaleBoxSlot.SetPadding"));

	UScaleBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ScaleBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718627EF0              		 offset:857ef0                        

void UScaleBoxSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScaleBoxSlot.SetHorizontalAlignment"));

	UScaleBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ScrollBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin*                InPadding                      (Parm)
// FunctionAddress:0x00007FF71862A5A0              		 offset:85a5a0                        

void UScrollBoxSlot::SetPadding(struct FMargin* InPadding)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBoxSlot.SetPadding"));

	UScrollBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ScrollBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7186280F0              		 offset:8580f0                        

void UScrollBoxSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBoxSlot.SetHorizontalAlignment"));

	UScrollBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SizeBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment>* InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862C360              		 offset:85c360                        

void USizeBoxSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment>* InVerticalAlignment)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBoxSlot.SetVerticalAlignment"));

	USizeBoxSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SizeBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin*                InPadding                      (Parm)
// FunctionAddress:0x00007FF71862A630              		 offset:85a630                        

void USizeBoxSlot::SetPadding(struct FMargin* InPadding)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBoxSlot.SetPadding"));

	USizeBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SizeBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718628170              		 offset:858170                        

void USizeBoxSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBoxSlot.SetHorizontalAlignment"));

	USizeBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UniformGridSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment>* InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862C3E0              		 offset:85c3e0                        

void UUniformGridSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment>* InVerticalAlignment)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UniformGridSlot.SetVerticalAlignment"));

	UUniformGridSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UniformGridSlot.SetRow
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           InRow                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862AC10              		 offset:85ac10                        

void UUniformGridSlot::SetRow(int* InRow)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UniformGridSlot.SetRow"));

	UUniformGridSlot_SetRow_Params params;
	params.InRow = InRow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UniformGridSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7186281F0              		 offset:8581f0                        

void UUniformGridSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UniformGridSlot.SetHorizontalAlignment"));

	UUniformGridSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UniformGridSlot.SetColumn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           InColumn                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718626FD0              		 offset:856fd0                        

void UUniformGridSlot::SetColumn(int* InColumn)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UniformGridSlot.SetColumn"));

	UUniformGridSlot_SetColumn_Params params;
	params.InColumn = InColumn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.VerticalBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment>* InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862C1E0              		 offset:85c1e0                        

void UVerticalBoxSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment>* InVerticalAlignment)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.VerticalBoxSlot.SetVerticalAlignment"));

	UVerticalBoxSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.VerticalBoxSlot.SetSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateChildSize*        InSize                         (Parm)
// FunctionAddress:0x00007FF71862B230              		 offset:85b230                        

void UVerticalBoxSlot::SetSize(struct FSlateChildSize* InSize)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.VerticalBoxSlot.SetSize"));

	UVerticalBoxSlot_SetSize_Params params;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.VerticalBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin*                InPadding                      (Parm)
// FunctionAddress:0x00007FF71862A6C0              		 offset:85a6c0                        

void UVerticalBoxSlot::SetPadding(struct FMargin* InPadding)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.VerticalBoxSlot.SetPadding"));

	UVerticalBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.VerticalBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718627FF0              		 offset:857ff0                        

void UVerticalBoxSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.VerticalBoxSlot.SetHorizontalAlignment"));

	UVerticalBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetSwitcherSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment>* InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862C260              		 offset:85c260                        

void UWidgetSwitcherSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment>* InVerticalAlignment)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetSwitcherSlot.SetVerticalAlignment"));

	UWidgetSwitcherSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetSwitcherSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin*                InPadding                      (Parm)
// FunctionAddress:0x00007FF71862A750              		 offset:85a750                        

void UWidgetSwitcherSlot::SetPadding(struct FMargin* InPadding)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetSwitcherSlot.SetPadding"));

	UWidgetSwitcherSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718628070              		 offset:858070                        

void UWidgetSwitcherSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment"));

	UWidgetSwitcherSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.SetVisibility
// (Native, Public, BlueprintCallable)
// Parameters:
// ESlateVisibility*              InVisibility                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF719C5E7F0              		 offset:1e8e7f0                       

void UWidget::SetVisibility(ESlateVisibility* InVisibility)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetVisibility"));

	UWidget_SetVisibility_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.SetUserFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF719C5E770              		 offset:1e8e770                       

void UWidget::SetUserFocus(class APlayerController** PlayerController)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetUserFocus"));

	UWidget_SetUserFocus_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.SetToolTipText
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText*                  InToolTipText                  (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF719C5E690              		 offset:1e8e690                       

void UWidget::SetToolTipText(struct FText* InToolTipText)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetToolTipText"));

	UWidget_SetToolTipText_Params params;
	params.InToolTipText = InToolTipText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.SetToolTip
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF719C5E610              		 offset:1e8e610                       

void UWidget::SetToolTip(class UWidget** Widget)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetToolTip"));

	UWidget_SetToolTip_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.SetRenderTranslation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D*              Translation                    (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5E590              		 offset:1e8e590                       

void UWidget::SetRenderTranslation(struct FVector2D* Translation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetRenderTranslation"));

	UWidget_SetRenderTranslation_Params params;
	params.Translation = Translation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.SetRenderTransformPivot
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D*              Pivot                          (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5E510              		 offset:1e8e510                       

void UWidget::SetRenderTransformPivot(struct FVector2D* Pivot)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetRenderTransformPivot"));

	UWidget_SetRenderTransformPivot_Params params;
	params.Pivot = Pivot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.SetRenderTransform
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FWidgetTransform*       InTransform                    (Parm)
// FunctionAddress:0x00007FF719C5E430              		 offset:1e8e430                       

void UWidget::SetRenderTransform(struct FWidgetTransform* InTransform)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetRenderTransform"));

	UWidget_SetRenderTransform_Params params;
	params.InTransform = InTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.SetRenderShear
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D*              Shear                          (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5E3B0              		 offset:1e8e3b0                       

void UWidget::SetRenderShear(struct FVector2D* Shear)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetRenderShear"));

	UWidget_SetRenderShear_Params params;
	params.Shear = Shear;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.SetRenderScale
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D*              Scale                          (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5E330              		 offset:1e8e330                       

void UWidget::SetRenderScale(struct FVector2D* Scale)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetRenderScale"));

	UWidget_SetRenderScale_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.SetRenderAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Angle                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF719C5E2B0              		 offset:1e8e2b0                       

void UWidget::SetRenderAngle(float* Angle)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetRenderAngle"));

	UWidget_SetRenderAngle_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.SetNavigationRule
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EUINavigation*                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// EUINavigationRule*             Rule                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  WidgetToFocus                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF719C5DDC0              		 offset:1e8ddc0                       

void UWidget::SetNavigationRule(EUINavigation* Direction, EUINavigationRule* Rule, struct FName* WidgetToFocus)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetNavigationRule"));

	UWidget_SetNavigationRule_Params params;
	params.Direction = Direction;
	params.Rule = Rule;
	params.WidgetToFocus = WidgetToFocus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.SetKeyboardFocus
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF719C5DDA0              		 offset:1e8dda0                       

void UWidget::SetKeyboardFocus()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetKeyboardFocus"));

	UWidget_SetKeyboardFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.SetIsEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bInIsEnabled                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71B27F8E0              		 offset:34af8e0                       

void UWidget::SetIsEnabled(bool* bInIsEnabled)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetIsEnabled"));

	UWidget_SetIsEnabled_Params params;
	params.bInIsEnabled = bInIsEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.SetCursor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EMouseCursor>*     InCursor                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF719C5DA90              		 offset:1e8da90                       

void UWidget::SetCursor(TEnumAsByte<EMouseCursor>* InCursor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetCursor"));

	UWidget_SetCursor_Params params;
	params.InCursor = InCursor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.SetAllNavigationRules
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EUINavigationRule*             Rule                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  WidgetToFocus                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF719C5D8C0              		 offset:1e8d8c0                       

void UWidget::SetAllNavigationRules(EUINavigationRule* Rule, struct FName* WidgetToFocus)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetAllNavigationRules"));

	UWidget_SetAllNavigationRules_Params params;
	params.Rule = Rule;
	params.WidgetToFocus = WidgetToFocus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.ResetCursor
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF719C5D420              		 offset:1e8d420                       

void UWidget::ResetCursor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.ResetCursor"));

	UWidget_ResetCursor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.RemoveFromParent
// (Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF71A6E20F0              		 offset:29120f0                       

void UWidget::RemoveFromParent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.RemoveFromParent"));

	UWidget_RemoveFromParent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction UMG.Widget.OnReply__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

struct FEventReply UWidget::OnReply__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.OnReply__DelegateSignature"));

	UWidget_OnReply__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature
// (Public, Delegate, HasOutParms)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

struct FEventReply UWidget::OnPointerEvent__DelegateSignature(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature"));

	UWidget_OnPointerEvent__DelegateSignature_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Widget.IsVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5CA90              		 offset:1e8ca90                       

bool UWidget::IsVisible()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.IsVisible"));

	UWidget_IsVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Widget.IsHovered
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C8A0              		 offset:1e8c8a0                       

bool UWidget::IsHovered()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.IsHovered"));

	UWidget_IsHovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Widget.InvalidateLayoutAndVolatility
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF719C5C7C0              		 offset:1e8c7c0                       

void UWidget::InvalidateLayoutAndVolatility()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.InvalidateLayoutAndVolatility"));

	UWidget_InvalidateLayoutAndVolatility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.HasUserFocusedDescendants
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C730              		 offset:1e8c730                       

bool UWidget::HasUserFocusedDescendants(class APlayerController** PlayerController)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.HasUserFocusedDescendants"));

	UWidget_HasUserFocusedDescendants_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Widget.HasUserFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C6A0              		 offset:1e8c6a0                       

bool UWidget::HasUserFocus(class APlayerController** PlayerController)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.HasUserFocus"));

	UWidget_HasUserFocus_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Widget.HasMouseCapture
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C670              		 offset:1e8c670                       

bool UWidget::HasMouseCapture()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.HasMouseCapture"));

	UWidget_HasMouseCapture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Widget.HasKeyboardFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C640              		 offset:1e8c640                       

bool UWidget::HasKeyboardFocus()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.HasKeyboardFocus"));

	UWidget_HasKeyboardFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Widget.HasFocusedDescendants
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C610              		 offset:1e8c610                       

bool UWidget::HasFocusedDescendants()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.HasFocusedDescendants"));

	UWidget_HasFocusedDescendants_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Widget.HasAnyUserFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C5E0              		 offset:1e8c5e0                       

bool UWidget::HasAnyUserFocus()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.HasAnyUserFocus"));

	UWidget_HasAnyUserFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetWidget__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

class UWidget* UWidget::GetWidget__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetWidget__DelegateSignature"));

	UWidget_GetWidget__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Widget.GetVisibility
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C5B0              		 offset:1e8c5b0                       

ESlateVisibility UWidget::GetVisibility()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.GetVisibility"));

	UWidget_GetVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetText__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

struct FText UWidget::GetText__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetText__DelegateSignature"));

	UWidget_GetText__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature
// (Public, Delegate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

ESlateVisibility UWidget::GetSlateVisibility__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature"));

	UWidget_GetSlateVisibility__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

struct FSlateColor UWidget::GetSlateColor__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature"));

	UWidget_GetSlateColor__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

struct FSlateBrush UWidget::GetSlateBrush__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature"));

	UWidget_GetSlateBrush__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Widget.GetParent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPanelWidget*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C180              		 offset:1e8c180                       

class UPanelWidget* UWidget::GetParent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.GetParent"));

	UWidget_GetParent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Widget.GetOwningPlayer
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C120              		 offset:1e8c120                       

class APlayerController* UWidget::GetOwningPlayer()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.GetOwningPlayer"));

	UWidget_GetOwningPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature
// (Public, Delegate)
// Parameters:
// TEnumAsByte<EMouseCursor>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

TEnumAsByte<EMouseCursor> UWidget::GetMouseCursor__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature"));

	UWidget_GetMouseCursor__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature
// (Public, Delegate, HasDefaults)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

struct FLinearColor UWidget::GetLinearColor__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature"));

	UWidget_GetLinearColor__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Widget.GetIsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5BF90              		 offset:1e8bf90                       

bool UWidget::GetIsEnabled()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.GetIsEnabled"));

	UWidget_GetIsEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetInt32__DelegateSignature
// (Public, Delegate)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

int UWidget::GetInt32__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetInt32__DelegateSignature"));

	UWidget_GetInt32__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetFloat__DelegateSignature
// (Public, Delegate)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

float UWidget::GetFloat__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetFloat__DelegateSignature"));

	UWidget_GetFloat__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Widget.GetDesiredSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5BF50              		 offset:1e8bf50                       

struct FVector2D UWidget::GetDesiredSize()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.GetDesiredSize"));

	UWidget_GetDesiredSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature
// (Public, Delegate)
// Parameters:
// ECheckBoxState                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

ECheckBoxState UWidget::GetCheckBoxState__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature"));

	UWidget_GetCheckBoxState__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Widget.GetCachedGeometry
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry               ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5BF10              		 offset:1e8bf10                       

struct FGeometry UWidget::GetCachedGeometry()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.GetCachedGeometry"));

	UWidget_GetCachedGeometry_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetBool__DelegateSignature
// (Public, Delegate)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

bool UWidget::GetBool__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetBool__DelegateSignature"));

	UWidget_GetBool__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FString*                Item                           (Parm, ZeroConstructor)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

class UWidget* UWidget::GenerateWidgetForString__DelegateSignature(struct FString* Item)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature"));

	UWidget_GenerateWidgetForString__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UObject**                Item                           (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

class UWidget* UWidget::GenerateWidgetForObject__DelegateSignature(class UObject** Item)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature"));

	UWidget_GenerateWidgetForObject__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Widget.ForceVolatile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bForce                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF719C5BD60              		 offset:1e8bd60                       

void UWidget::ForceVolatile(bool* bForce)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.ForceVolatile"));

	UWidget_ForceVolatile_Params params;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Widget.ForceLayoutPrepass
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF719C5BD40              		 offset:1e8bd40                       

void UWidget::ForceLayoutPrepass()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.ForceLayoutPrepass"));

	UWidget_ForceLayoutPrepass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction UMG.Widget.EventForWidget__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UWidget**                BoundWidget                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UWidget::EventForWidget__DelegateSignature(class UWidget** BoundWidget)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.EventForWidget__DelegateSignature"));

	UWidget_EventForWidget__DelegateSignature_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.PanelWidget.RemoveChildAt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7186255C0              		 offset:8555c0                        

bool UPanelWidget::RemoveChildAt(int* Index)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.PanelWidget.RemoveChildAt"));

	UPanelWidget_RemoveChildAt_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.PanelWidget.RemoveChild
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget**                Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718625530              		 offset:855530                        

bool UPanelWidget::RemoveChild(class UWidget** Content)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.PanelWidget.RemoveChild"));

	UPanelWidget_RemoveChild_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.PanelWidget.HasChild
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget**                Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718624210              		 offset:854210                        

bool UPanelWidget::HasChild(class UWidget** Content)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.PanelWidget.HasChild"));

	UPanelWidget_HasChild_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.PanelWidget.HasAnyChildren
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7186241E0              		 offset:8541e0                        

bool UPanelWidget::HasAnyChildren()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.PanelWidget.HasAnyChildren"));

	UPanelWidget_HasAnyChildren_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.PanelWidget.GetChildrenCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718622870              		 offset:852870                        

int UPanelWidget::GetChildrenCount()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.PanelWidget.GetChildrenCount"));

	UPanelWidget_GetChildrenCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.PanelWidget.GetChildIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget**                Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7186227E0              		 offset:8527e0                        

int UPanelWidget::GetChildIndex(class UWidget** Content)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.PanelWidget.GetChildIndex"));

	UPanelWidget_GetChildIndex_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.PanelWidget.GetChildAt
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF718622750              		 offset:852750                        

class UWidget* UPanelWidget::GetChildAt(int* Index)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.PanelWidget.GetChildAt"));

	UPanelWidget_GetChildAt_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.PanelWidget.ClearChildren
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF7186209E0              		 offset:8509e0                        

void UPanelWidget::ClearChildren()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.PanelWidget.ClearChildren"));

	UPanelWidget_ClearChildren_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.PanelWidget.AddChild
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget**                Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPanelSlot*              ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF718620110              		 offset:850110                        

class UPanelSlot* UPanelWidget::AddChild(class UWidget** Content)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.PanelWidget.AddChild"));

	UPanelWidget_AddChild_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.ContentWidget.SetContent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget**                Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPanelSlot*              ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF7186270D0              		 offset:8570d0                        

class UPanelSlot* UContentWidget::SetContent(class UWidget** Content)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ContentWidget.SetContent"));

	UContentWidget_SetContent_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.ContentWidget.GetContentSlot
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPanelSlot*              ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF7186228D0              		 offset:8528d0                        

class UPanelSlot* UContentWidget::GetContentSlot()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ContentWidget.GetContentSlot"));

	UContentWidget_GetContentSlot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.ContentWidget.GetContent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF7186228A0              		 offset:8528a0                        

class UWidget* UContentWidget::GetContent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ContentWidget.GetContent"));

	UContentWidget_GetContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WindowTitleBarArea.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment>* InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862C460              		 offset:85c460                        

void UWindowTitleBarArea::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment>* InVerticalAlignment)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WindowTitleBarArea.SetVerticalAlignment"));

	UWindowTitleBarArea_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WindowTitleBarArea.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin*                InPadding                      (Parm)
// FunctionAddress:0x00007FF71862A7E0              		 offset:85a7e0                        

void UWindowTitleBarArea::SetPadding(struct FMargin* InPadding)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WindowTitleBarArea.SetPadding"));

	UWindowTitleBarArea_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WindowTitleBarArea.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718628270              		 offset:858270                        

void UWindowTitleBarArea::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WindowTitleBarArea.SetHorizontalAlignment"));

	UWindowTitleBarArea_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment>* InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862C4E0              		 offset:85c4e0                        

void UWindowTitleBarAreaSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment>* InVerticalAlignment)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment"));

	UWindowTitleBarAreaSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WindowTitleBarAreaSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin*                InPadding                      (Parm)
// FunctionAddress:0x00007FF71862A870              		 offset:85a870                        

void UWindowTitleBarAreaSlot::SetPadding(struct FMargin* InPadding)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WindowTitleBarAreaSlot.SetPadding"));

	UWindowTitleBarAreaSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7186282F0              		 offset:8582f0                        

void UWindowTitleBarAreaSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment"));

	UWindowTitleBarAreaSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WrapBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment>* InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862C560              		 offset:85c560                        

void UWrapBoxSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment>* InVerticalAlignment)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WrapBoxSlot.SetVerticalAlignment"));

	UWrapBoxSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WrapBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin*                InPadding                      (Parm)
// FunctionAddress:0x00007FF71862A900              		 offset:85a900                        

void UWrapBoxSlot::SetPadding(struct FMargin* InPadding)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WrapBoxSlot.SetPadding"));

	UWrapBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WrapBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718628370              		 offset:858370                        

void UWrapBoxSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WrapBoxSlot.SetHorizontalAlignment"));

	UWrapBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InFillSpanWhenLessThan         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7186276D0              		 offset:8576d0                        

void UWrapBoxSlot::SetFillSpanWhenLessThan(float* InFillSpanWhenLessThan)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan"));

	UWrapBoxSlot_SetFillSpanWhenLessThan_Params params;
	params.InFillSpanWhenLessThan = InFillSpanWhenLessThan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WrapBoxSlot.SetFillEmptySpace
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          InbFillEmptySpace              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718627640              		 offset:857640                        

void UWrapBoxSlot::SetFillEmptySpace(bool* InbFillEmptySpace)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WrapBoxSlot.SetFillEmptySpace"));

	UWrapBoxSlot_SetFillEmptySpace_Params params;
	params.InbFillEmptySpace = InbFillEmptySpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.CircularThrobber.SetRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InRadius                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862AB10              		 offset:85ab10                        

void UCircularThrobber::SetRadius(float* InRadius)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CircularThrobber.SetRadius"));

	UCircularThrobber_SetRadius_Params params;
	params.InRadius = InRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.CircularThrobber.SetPeriod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InPeriod                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862AA10              		 offset:85aa10                        

void UCircularThrobber::SetPeriod(float* InPeriod)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CircularThrobber.SetPeriod"));

	UCircularThrobber_SetPeriod_Params params;
	params.InPeriod = InPeriod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.CircularThrobber.SetNumberOfPieces
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           InNumberOfPieces               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718629D80              		 offset:859d80                        

void UCircularThrobber::SetNumberOfPieces(int* InNumberOfPieces)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CircularThrobber.SetNumberOfPieces"));

	UCircularThrobber_SetNumberOfPieces_Params params;
	params.InNumberOfPieces = InNumberOfPieces;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ComboBoxString.SetSelectedOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                Option                         (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF71862AE90              		 offset:85ae90                        

void UComboBoxString::SetSelectedOption(struct FString* Option)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ComboBoxString.SetSelectedOption"));

	UComboBoxString_SetSelectedOption_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ComboBoxString.RemoveOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                Option                         (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718625650              		 offset:855650                        

bool UComboBoxString::RemoveOption(struct FString* Option)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ComboBoxString.RemoveOption"));

	UComboBoxString_RemoveOption_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.ComboBoxString.RefreshOptions
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718624FA0              		 offset:854fa0                        

void UComboBoxString::RefreshOptions()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ComboBoxString.RefreshOptions"));

	UComboBoxString_RefreshOptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FString*                SelectedItem                   (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>*      SelectionType                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UComboBoxString::OnSelectionChangedEvent__DelegateSignature(struct FString* SelectedItem, TEnumAsByte<ESelectInfo>* SelectionType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature"));

	UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UComboBoxString::OnOpeningEvent__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature"));

	UComboBoxString_OnOpeningEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ComboBoxString.GetSelectedOption
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF718623AD0              		 offset:853ad0                        

struct FString UComboBoxString::GetSelectedOption()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ComboBoxString.GetSelectedOption"));

	UComboBoxString_GetSelectedOption_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.ComboBoxString.GetOptionCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718623840              		 offset:853840                        

int UComboBoxString::GetOptionCount()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ComboBoxString.GetOptionCount"));

	UComboBoxString_GetOptionCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.ComboBoxString.GetOptionAtIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF718623760              		 offset:853760                        

struct FString UComboBoxString::GetOptionAtIndex(int* Index)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ComboBoxString.GetOptionAtIndex"));

	UComboBoxString_GetOptionAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.ComboBoxString.FindOptionIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString*                Option                         (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718621E20              		 offset:851e20                        

int UComboBoxString::FindOptionIndex(struct FString* Option)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ComboBoxString.FindOptionIndex"));

	UComboBoxString_FindOptionIndex_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.ComboBoxString.ClearSelection
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718620B80              		 offset:850b80                        

void UComboBoxString::ClearSelection()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ComboBoxString.ClearSelection"));

	UComboBoxString_ClearSelection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ComboBoxString.ClearOptions
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718620B60              		 offset:850b60                        

void UComboBoxString::ClearOptions()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ComboBoxString.ClearOptions"));

	UComboBoxString_ClearOptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ComboBoxString.AddOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                Option                         (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF718620590              		 offset:850590                        

void UComboBoxString::AddOption(struct FString* Option)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ComboBoxString.AddOption"));

	UComboBoxString_AddOption_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.EditableText.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText*                  InText                         (Parm)
// FunctionAddress:0x00007FF71862B760              		 offset:85b760                        

void UEditableText::SetText(struct FText* InText)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableText.SetText"));

	UEditableText_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.EditableText.SetIsReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          InbIsReadyOnly                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718628D40              		 offset:858d40                        

void UEditableText::SetIsReadOnly(bool* InbIsReadyOnly)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableText.SetIsReadOnly"));

	UEditableText_SetIsReadOnly_Params params;
	params.InbIsReadyOnly = InbIsReadyOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.EditableText.SetIsPassword
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          InbIsPassword                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718628CB0              		 offset:858cb0                        

void UEditableText::SetIsPassword(bool* InbIsPassword)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableText.SetIsPassword"));

	UEditableText_SetIsPassword_Params params;
	params.InbIsPassword = InbIsPassword;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.EditableText.SetHintText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText*                  InHintText                     (Parm)
// FunctionAddress:0x00007FF718627B50              		 offset:857b50                        

void UEditableText::SetHintText(struct FText* InHintText)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableText.SetHintText"));

	UEditableText_SetHintText_Params params;
	params.InHintText = InHintText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FText*                  Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UEditableText::OnEditableTextCommittedEvent__DelegateSignature(struct FText* Text, TEnumAsByte<ETextCommit>* CommitMethod)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature"));

	UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FText*                  Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UEditableText::OnEditableTextChangedEvent__DelegateSignature(struct FText* Text)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature"));

	UEditableText_OnEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.EditableText.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718623BD0              		 offset:853bd0                        

struct FText UEditableText::GetText()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableText.GetText"));

	UEditableText_GetText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.EditableTextBox.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText*                  InText                         (Parm)
// FunctionAddress:0x00007FF71862B830              		 offset:85b830                        

void UEditableTextBox::SetText(struct FText* InText)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableTextBox.SetText"));

	UEditableTextBox_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.EditableTextBox.SetIsReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bReadOnly                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718628DD0              		 offset:858dd0                        

void UEditableTextBox::SetIsReadOnly(bool* bReadOnly)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableTextBox.SetIsReadOnly"));

	UEditableTextBox_SetIsReadOnly_Params params;
	params.bReadOnly = bReadOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.EditableTextBox.SetHintText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText*                  InText                         (Parm)
// FunctionAddress:0x00007FF718627C20              		 offset:857c20                        

void UEditableTextBox::SetHintText(struct FText* InText)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableTextBox.SetHintText"));

	UEditableTextBox_SetHintText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.EditableTextBox.SetError
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText*                  InError                        (Parm)
// FunctionAddress:0x00007FF718627420              		 offset:857420                        

void UEditableTextBox::SetError(struct FText* InError)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableTextBox.SetError"));

	UEditableTextBox_SetError_Params params;
	params.InError = InError;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FText*                  Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UEditableTextBox::OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText* Text, TEnumAsByte<ETextCommit>* CommitMethod)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature"));

	UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FText*                  Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UEditableTextBox::OnEditableTextBoxChangedEvent__DelegateSignature(struct FText* Text)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature"));

	UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.EditableTextBox.HasError
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7186242A0              		 offset:8542a0                        

bool UEditableTextBox::HasError()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableTextBox.HasError"));

	UEditableTextBox_HasError_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.EditableTextBox.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718623C60              		 offset:853c60                        

struct FText UEditableTextBox::GetText()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableTextBox.GetText"));

	UEditableTextBox_GetText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.EditableTextBox.ClearError
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718620A00              		 offset:850a00                        

void UEditableTextBox::ClearError()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableTextBox.ClearError"));

	UEditableTextBox_ClearError_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ExpandableArea.SetIsExpanded_Animated
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          IsExpanded                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718628B90              		 offset:858b90                        

void UExpandableArea::SetIsExpanded_Animated(bool* IsExpanded)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ExpandableArea.SetIsExpanded_Animated"));

	UExpandableArea_SetIsExpanded_Animated_Params params;
	params.IsExpanded = IsExpanded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ExpandableArea.SetIsExpanded
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          IsExpanded                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718628B00              		 offset:858b00                        

void UExpandableArea::SetIsExpanded(bool* IsExpanded)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ExpandableArea.SetIsExpanded"));

	UExpandableArea_SetIsExpanded_Params params;
	params.IsExpanded = IsExpanded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ExpandableArea.GetIsExpanded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718623150              		 offset:853150                        

bool UExpandableArea::GetIsExpanded()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ExpandableArea.GetIsExpanded"));

	UExpandableArea_GetIsExpanded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Image.SetOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InOpacity                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718629F10              		 offset:859f10                        

void UImage::SetOpacity(float* InOpacity)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Image.SetOpacity"));

	UImage_SetOpacity_Params params;
	params.InOpacity = InOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Image.SetColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor*           InColorAndOpacity              (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF718626DD0              		 offset:856dd0                        

void UImage::SetColorAndOpacity(struct FLinearColor* InColorAndOpacity)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Image.SetColorAndOpacity"));

	UImage_SetColorAndOpacity_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Image.SetBrushSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D*              BrushSize                      (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF718626BC0              		 offset:856bc0                        

void UImage::SetBrushSize(struct FVector2D* BrushSize)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Image.SetBrushSize"));

	UImage_SetBrushSize_Params params;
	params.BrushSize = BrushSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Image.SetBrushFromTextureDynamic
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2DDynamic**      Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bMatchSize                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7186267B0              		 offset:8567b0                        

void UImage::SetBrushFromTextureDynamic(class UTexture2DDynamic** Texture, bool* bMatchSize)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Image.SetBrushFromTextureDynamic"));

	UImage_SetBrushFromTextureDynamic_Params params;
	params.Texture = Texture;
	params.bMatchSize = bMatchSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Image.SetBrushFromTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D**             Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bMatchSize                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7186266E0              		 offset:8566e0                        

void UImage::SetBrushFromTexture(class UTexture2D** Texture, bool* bMatchSize)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Image.SetBrushFromTexture"));

	UImage_SetBrushFromTexture_Params params;
	params.Texture = Texture;
	params.bMatchSize = bMatchSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Image.SetBrushFromMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface**     Material                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7186265E0              		 offset:8565e0                        

void UImage::SetBrushFromMaterial(class UMaterialInterface** Material)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Image.SetBrushFromMaterial"));

	UImage_SetBrushFromMaterial_Params params;
	params.Material = Material;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Image.SetBrushFromAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USlateBrushAsset**       Asset                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7186264E0              		 offset:8564e0                        

void UImage::SetBrushFromAsset(class USlateBrushAsset** Asset)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Image.SetBrushFromAsset"));

	UImage_SetBrushFromAsset_Params params;
	params.Asset = Asset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Image.SetBrush
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSlateBrush*            InBrush                        (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF718626280              		 offset:856280                        

void UImage::SetBrush(struct FSlateBrush* InBrush)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Image.SetBrush"));

	UImage_SetBrush_Params params;
	params.InBrush = InBrush;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Image.GetDynamicMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7186229A0              		 offset:8529a0                        

class UMaterialInstanceDynamic* UImage::GetDynamicMaterial()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Image.GetDynamicMaterial"));

	UImage_GetDynamicMaterial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.InputKeySelector.SetSelectedKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FInputChord*            InSelectedKey                  (Parm)
// FunctionAddress:0x00007FF71862AD90              		 offset:85ad90                        

void UInputKeySelector::SetSelectedKey(struct FInputChord* InSelectedKey)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.InputKeySelector.SetSelectedKey"));

	UInputKeySelector_SetSelectedKey_Params params;
	params.InSelectedKey = InSelectedKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.InputKeySelector.SetKeySelectionText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText*                  InKeySelectionText             (Parm)
// FunctionAddress:0x00007FF718629100              		 offset:859100                        

void UInputKeySelector::SetKeySelectionText(struct FText* InKeySelectionText)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.InputKeySelector.SetKeySelectionText"));

	UInputKeySelector_SetKeySelectionText_Params params;
	params.InKeySelectionText = InKeySelectionText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.InputKeySelector.SetAllowModifierKeys
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bInAllowModifierKeys           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718625B30              		 offset:855b30                        

void UInputKeySelector::SetAllowModifierKeys(bool* bInAllowModifierKeys)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.InputKeySelector.SetAllowModifierKeys"));

	UInputKeySelector_SetAllowModifierKeys_Params params;
	params.bInAllowModifierKeys = bInAllowModifierKeys;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FInputChord*            SelectedKey                    (Parm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UInputKeySelector::OnKeySelected__DelegateSignature(struct FInputChord* SelectedKey)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature"));

	UInputKeySelector_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UInputKeySelector::OnIsSelectingKeyChanged__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature"));

	UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.InputKeySelector.GetIsSelectingKey
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718623180              		 offset:853180                        

bool UInputKeySelector::GetIsSelectingKey()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.InputKeySelector.GetIsSelectingKey"));

	UInputKeySelector_GetIsSelectingKey_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.CanvasPanel.AddChildToCanvas
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget**                Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UCanvasPanelSlot*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF7186201A0              		 offset:8501a0                        

class UCanvasPanelSlot* UCanvasPanel::AddChildToCanvas(class UWidget** Content)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanel.AddChildToCanvas"));

	UCanvasPanel_AddChildToCanvas_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.BackgroundBlur.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment>* InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862BF60              		 offset:85bf60                        

void UBackgroundBlur::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment>* InVerticalAlignment)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BackgroundBlur.SetVerticalAlignment"));

	UBackgroundBlur_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.BackgroundBlur.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin*                InPadding                      (Parm)
// FunctionAddress:0x00007FF71862A090              		 offset:85a090                        

void UBackgroundBlur::SetPadding(struct FMargin* InPadding)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BackgroundBlur.SetPadding"));

	UBackgroundBlur_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.BackgroundBlur.SetLowQualityFallbackBrush
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSlateBrush*            InBrush                        (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF718629380              		 offset:859380                        

void UBackgroundBlur::SetLowQualityFallbackBrush(struct FSlateBrush* InBrush)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BackgroundBlur.SetLowQualityFallbackBrush"));

	UBackgroundBlur_SetLowQualityFallbackBrush_Params params;
	params.InBrush = InBrush;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.BackgroundBlur.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718627CF0              		 offset:857cf0                        

void UBackgroundBlur::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BackgroundBlur.SetHorizontalAlignment"));

	UBackgroundBlur_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.BackgroundBlur.SetBlurStrength
// (Native, Public, BlueprintCallable)
// Parameters:
// float*                         InStrength                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7186260A0              		 offset:8560a0                        

void UBackgroundBlur::SetBlurStrength(float* InStrength)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BackgroundBlur.SetBlurStrength"));

	UBackgroundBlur_SetBlurStrength_Params params;
	params.InStrength = InStrength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.BackgroundBlur.SetBlurRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           InBlurRadius                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718626020              		 offset:856020                        

void UBackgroundBlur::SetBlurRadius(int* InBlurRadius)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BackgroundBlur.SetBlurRadius"));

	UBackgroundBlur_SetBlurRadius_Params params;
	params.InBlurRadius = InBlurRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.BackgroundBlur.SetApplyAlphaToBlur
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bInApplyAlphaToBlur            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718625E00              		 offset:855e00                        

void UBackgroundBlur::SetApplyAlphaToBlur(bool* bInApplyAlphaToBlur)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BackgroundBlur.SetApplyAlphaToBlur"));

	UBackgroundBlur_SetApplyAlphaToBlur_Params params;
	params.bInApplyAlphaToBlur = bInApplyAlphaToBlur;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Border.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment>* InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862C060              		 offset:85c060                        

void UBorder::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment>* InVerticalAlignment)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.SetVerticalAlignment"));

	UBorder_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Border.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin*                InPadding                      (Parm)
// FunctionAddress:0x00007FF71862A1B0              		 offset:85a1b0                        

void UBorder::SetPadding(struct FMargin* InPadding)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.SetPadding"));

	UBorder_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Border.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718627DF0              		 offset:857df0                        

void UBorder::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.SetHorizontalAlignment"));

	UBorder_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Border.SetDesiredSizeScale
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D*              InScale                        (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF7186272A0              		 offset:8572a0                        

void UBorder::SetDesiredSizeScale(struct FVector2D* InScale)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.SetDesiredSizeScale"));

	UBorder_SetDesiredSizeScale_Params params;
	params.InScale = InScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Border.SetContentColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor*           InContentColorAndOpacity       (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF718627160              		 offset:857160                        

void UBorder::SetContentColorAndOpacity(struct FLinearColor* InContentColorAndOpacity)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.SetContentColorAndOpacity"));

	UBorder_SetContentColorAndOpacity_Params params;
	params.InContentColorAndOpacity = InContentColorAndOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Border.SetBrushFromTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D**             Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718626660              		 offset:856660                        

void UBorder::SetBrushFromTexture(class UTexture2D** Texture)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.SetBrushFromTexture"));

	UBorder_SetBrushFromTexture_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Border.SetBrushFromMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface**     Material                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718626560              		 offset:856560                        

void UBorder::SetBrushFromMaterial(class UMaterialInterface** Material)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.SetBrushFromMaterial"));

	UBorder_SetBrushFromMaterial_Params params;
	params.Material = Material;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Border.SetBrushFromAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USlateBrushAsset**       Asset                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718626460              		 offset:856460                        

void UBorder::SetBrushFromAsset(class USlateBrushAsset** Asset)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.SetBrushFromAsset"));

	UBorder_SetBrushFromAsset_Params params;
	params.Asset = Asset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Border.SetBrushColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor*           InBrushColor                   (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF7186263E0              		 offset:8563e0                        

void UBorder::SetBrushColor(struct FLinearColor* InBrushColor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.SetBrushColor"));

	UBorder_SetBrushColor_Params params;
	params.InBrushColor = InBrushColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Border.SetBrush
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSlateBrush*            InBrush                        (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF718626120              		 offset:856120                        

void UBorder::SetBrush(struct FSlateBrush* InBrush)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.SetBrush"));

	UBorder_SetBrush_Params params;
	params.InBrush = InBrush;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Border.GetDynamicMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718622970              		 offset:852970                        

class UMaterialInstanceDynamic* UBorder::GetDynamicMaterial()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.GetDynamicMaterial"));

	UBorder_GetDynamicMaterial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Button.SetStyle
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FButtonStyle*           InStyle                        (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF71862B6A0              		 offset:85b6a0                        

void UButton::SetStyle(struct FButtonStyle* InStyle)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Button.SetStyle"));

	UButton_SetStyle_Params params;
	params.InStyle = InStyle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Button.SetColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor*           InColorAndOpacity              (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF718626D50              		 offset:856d50                        

void UButton::SetColorAndOpacity(struct FLinearColor* InColorAndOpacity)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Button.SetColorAndOpacity"));

	UButton_SetColorAndOpacity_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Button.SetBackgroundColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor*           InBackgroundColor              (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF718625F20              		 offset:855f20                        

void UButton::SetBackgroundColor(struct FLinearColor* InBackgroundColor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Button.SetBackgroundColor"));

	UButton_SetBackgroundColor_Params params;
	params.InBackgroundColor = InBackgroundColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Button.IsPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718624440              		 offset:854440                        

bool UButton::IsPressed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Button.IsPressed"));

	UButton_IsPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.CheckBox.SetIsChecked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          InIsChecked                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718628A70              		 offset:858a70                        

void UCheckBox::SetIsChecked(bool* InIsChecked)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CheckBox.SetIsChecked"));

	UCheckBox_SetIsChecked_Params params;
	params.InIsChecked = InIsChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.CheckBox.SetCheckedState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ECheckBoxState*                InCheckedState                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718626CD0              		 offset:856cd0                        

void UCheckBox::SetCheckedState(ECheckBoxState* InCheckedState)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CheckBox.SetCheckedState"));

	UCheckBox_SetCheckedState_Params params;
	params.InCheckedState = InCheckedState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.CheckBox.IsPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718624470              		 offset:854470                        

bool UCheckBox::IsPressed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CheckBox.IsPressed"));

	UCheckBox_IsPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.CheckBox.IsChecked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718624320              		 offset:854320                        

bool UCheckBox::IsChecked()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CheckBox.IsChecked"));

	UCheckBox_IsChecked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.CheckBox.GetCheckedState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ECheckBoxState                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718622720              		 offset:852720                        

ECheckBoxState UCheckBox::GetCheckedState()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CheckBox.GetCheckedState"));

	UCheckBox_GetCheckedState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.InvalidationBox.SetCanCache
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          CanCache                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718626C40              		 offset:856c40                        

void UInvalidationBox::SetCanCache(bool* CanCache)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.InvalidationBox.SetCanCache"));

	UInvalidationBox_SetCanCache_Params params;
	params.CanCache = CanCache;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.InvalidationBox.InvalidateCache
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718624300              		 offset:854300                        

void UInvalidationBox::InvalidateCache()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.InvalidationBox.InvalidateCache"));

	UInvalidationBox_InvalidateCache_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.InvalidationBox.GetCanCache
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7186226F0              		 offset:8526f0                        

bool UInvalidationBox::GetCanCache()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.InvalidationBox.GetCanCache"));

	UInvalidationBox_GetCanCache_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.MenuAnchor.ToggleOpen
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bFocusOnOpen                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862CDD0              		 offset:85cdd0                        

void UMenuAnchor::ToggleOpen(bool* bFocusOnOpen)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MenuAnchor.ToggleOpen"));

	UMenuAnchor_ToggleOpen_Params params;
	params.bFocusOnOpen = bFocusOnOpen;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.MenuAnchor.ShouldOpenDueToClick
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71862C990              		 offset:85c990                        

bool UMenuAnchor::ShouldOpenDueToClick()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MenuAnchor.ShouldOpenDueToClick"));

	UMenuAnchor_ShouldOpenDueToClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.MenuAnchor.Open
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bFocusMenu                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718624AC0              		 offset:854ac0                        

void UMenuAnchor::Open(bool* bFocusMenu)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MenuAnchor.Open"));

	UMenuAnchor_Open_Params params;
	params.bFocusMenu = bFocusMenu;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.MenuAnchor.IsOpen
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718624380              		 offset:854380                        

bool UMenuAnchor::IsOpen()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MenuAnchor.IsOpen"));

	UMenuAnchor_IsOpen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.MenuAnchor.HasOpenSubMenus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7186242D0              		 offset:8542d0                        

bool UMenuAnchor::HasOpenSubMenus()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MenuAnchor.HasOpenSubMenus"));

	UMenuAnchor_HasOpenSubMenus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.MenuAnchor.GetMenuPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718623530              		 offset:853530                        

struct FVector2D UMenuAnchor::GetMenuPosition()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MenuAnchor.GetMenuPosition"));

	UMenuAnchor_GetMenuPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.MenuAnchor.Close
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718620D70              		 offset:850d70                        

void UMenuAnchor::Close()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MenuAnchor.Close"));

	UMenuAnchor_Close_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.RetainerBox.SetTextureParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  TextureParameter               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862BB70              		 offset:85bb70                        

void URetainerBox::SetTextureParameter(struct FName* TextureParameter)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.RetainerBox.SetTextureParameter"));

	URetainerBox_SetTextureParameter_Params params;
	params.TextureParameter = TextureParameter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.RetainerBox.SetEffectMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface**     EffectMaterial                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7186273A0              		 offset:8573a0                        

void URetainerBox::SetEffectMaterial(class UMaterialInterface** EffectMaterial)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.RetainerBox.SetEffectMaterial"));

	URetainerBox_SetEffectMaterial_Params params;
	params.EffectMaterial = EffectMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.RetainerBox.RequestRender
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718625720              		 offset:855720                        

void URetainerBox::RequestRender()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.RetainerBox.RequestRender"));

	URetainerBox_RequestRender_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.RetainerBox.GetEffectMaterial
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718622B30              		 offset:852b30                        

class UMaterialInstanceDynamic* URetainerBox::GetEffectMaterial()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.RetainerBox.GetEffectMaterial"));

	URetainerBox_GetEffectMaterial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.ScaleBox.SetUserSpecifiedScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InUserSpecifiedScale           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862BDE0              		 offset:85bde0                        

void UScaleBox::SetUserSpecifiedScale(float* InUserSpecifiedScale)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScaleBox.SetUserSpecifiedScale"));

	UScaleBox_SetUserSpecifiedScale_Params params;
	params.InUserSpecifiedScale = InUserSpecifiedScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ScaleBox.SetStretchDirection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EStretchDirection>* InStretchDirection             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862B620              		 offset:85b620                        

void UScaleBox::SetStretchDirection(TEnumAsByte<EStretchDirection>* InStretchDirection)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScaleBox.SetStretchDirection"));

	UScaleBox_SetStretchDirection_Params params;
	params.InStretchDirection = InStretchDirection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ScaleBox.SetStretch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EStretch>*         InStretch                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862B5A0              		 offset:85b5a0                        

void UScaleBox::SetStretch(TEnumAsByte<EStretch>* InStretch)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScaleBox.SetStretch"));

	UScaleBox_SetStretch_Params params;
	params.InStretch = InStretch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ScaleBox.SetIgnoreInheritedScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bInIgnoreInheritedScale        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7186283F0              		 offset:8583f0                        

void UScaleBox::SetIgnoreInheritedScale(bool* bInIgnoreInheritedScale)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScaleBox.SetIgnoreInheritedScale"));

	UScaleBox_SetIgnoreInheritedScale_Params params;
	params.bInIgnoreInheritedScale = bInIgnoreInheritedScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SizeBox.SetWidthOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InWidthOverride                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862C790              		 offset:85c790                        

void USizeBox::SetWidthOverride(float* InWidthOverride)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.SetWidthOverride"));

	USizeBox_SetWidthOverride_Params params;
	params.InWidthOverride = InWidthOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SizeBox.SetMinDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InMinDesiredWidth              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718629960              		 offset:859960                        

void USizeBox::SetMinDesiredWidth(float* InMinDesiredWidth)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.SetMinDesiredWidth"));

	USizeBox_SetMinDesiredWidth_Params params;
	params.InMinDesiredWidth = InMinDesiredWidth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SizeBox.SetMinDesiredHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InMinDesiredHeight             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7186297E0              		 offset:8597e0                        

void USizeBox::SetMinDesiredHeight(float* InMinDesiredHeight)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.SetMinDesiredHeight"));

	USizeBox_SetMinDesiredHeight_Params params;
	params.InMinDesiredHeight = InMinDesiredHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SizeBox.SetMaxDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InMaxDesiredWidth              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7186295E0              		 offset:8595e0                        

void USizeBox::SetMaxDesiredWidth(float* InMaxDesiredWidth)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.SetMaxDesiredWidth"));

	USizeBox_SetMaxDesiredWidth_Params params;
	params.InMaxDesiredWidth = InMaxDesiredWidth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SizeBox.SetMaxDesiredHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InMaxDesiredHeight             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718629560              		 offset:859560                        

void USizeBox::SetMaxDesiredHeight(float* InMaxDesiredHeight)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.SetMaxDesiredHeight"));

	USizeBox_SetMaxDesiredHeight_Params params;
	params.InMaxDesiredHeight = InMaxDesiredHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SizeBox.SetMaxAspectRatio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InMaxAspectRatio               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7186294E0              		 offset:8594e0                        

void USizeBox::SetMaxAspectRatio(float* InMaxAspectRatio)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.SetMaxAspectRatio"));

	USizeBox_SetMaxAspectRatio_Params params;
	params.InMaxAspectRatio = InMaxAspectRatio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SizeBox.SetHeightOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InHeightOverride               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718627AD0              		 offset:857ad0                        

void USizeBox::SetHeightOverride(float* InHeightOverride)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.SetHeightOverride"));

	USizeBox_SetHeightOverride_Params params;
	params.InHeightOverride = InHeightOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SizeBox.ClearWidthOverride
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718620D50              		 offset:850d50                        

void USizeBox::ClearWidthOverride()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.ClearWidthOverride"));

	USizeBox_ClearWidthOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SizeBox.ClearMinDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718620B00              		 offset:850b00                        

void USizeBox::ClearMinDesiredWidth()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.ClearMinDesiredWidth"));

	USizeBox_ClearMinDesiredWidth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SizeBox.ClearMinDesiredHeight
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718620AE0              		 offset:850ae0                        

void USizeBox::ClearMinDesiredHeight()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.ClearMinDesiredHeight"));

	USizeBox_ClearMinDesiredHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SizeBox.ClearMaxDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718620A80              		 offset:850a80                        

void USizeBox::ClearMaxDesiredWidth()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.ClearMaxDesiredWidth"));

	USizeBox_ClearMaxDesiredWidth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SizeBox.ClearMaxDesiredHeight
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718620A60              		 offset:850a60                        

void USizeBox::ClearMaxDesiredHeight()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.ClearMaxDesiredHeight"));

	USizeBox_ClearMaxDesiredHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SizeBox.ClearMaxAspectRatio
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718620A40              		 offset:850a40                        

void USizeBox::ClearMaxAspectRatio()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.ClearMaxAspectRatio"));

	USizeBox_ClearMaxAspectRatio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SizeBox.ClearHeightOverride
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718620A20              		 offset:850a20                        

void USizeBox::ClearHeightOverride()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.ClearHeightOverride"));

	USizeBox_ClearHeightOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Viewport.Spawn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass**                 ActorClass                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71862CD40              		 offset:85cd40                        

class AActor* UViewport::Spawn(class UClass** ActorClass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Viewport.Spawn"));

	UViewport_Spawn_Params params;
	params.ActorClass = ActorClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Viewport.SetViewRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator*               Rotation                       (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF71862C670              		 offset:85c670                        

void UViewport::SetViewRotation(struct FRotator* Rotation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Viewport.SetViewRotation"));

	UViewport_SetViewRotation_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Viewport.SetViewLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Location                       (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF71862C5E0              		 offset:85c5e0                        

void UViewport::SetViewLocation(struct FVector* Location)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Viewport.SetViewLocation"));

	UViewport_SetViewLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Viewport.GetViewRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718623F70              		 offset:853f70                        

struct FRotator UViewport::GetViewRotation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Viewport.GetViewRotation"));

	UViewport_GetViewRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Viewport.GetViewportWorld
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWorld*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7186240D0              		 offset:8540d0                        

class UWorld* UViewport::GetViewportWorld()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Viewport.GetViewportWorld"));

	UViewport_GetViewportWorld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Viewport.GetViewLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718623F30              		 offset:853f30                        

struct FVector UViewport::GetViewLocation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Viewport.GetViewLocation"));

	UViewport_GetViewLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.GridPanel.AddChildToGrid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget**                Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGridSlot*               ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF718620230              		 offset:850230                        

class UGridSlot* UGridPanel::AddChildToGrid(class UWidget** Content)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.GridPanel.AddChildToGrid"));

	UGridPanel_AddChildToGrid_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.HorizontalBox.AddChildToHorizontalBox
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget**                Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UHorizontalBoxSlot*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF7186202C0              		 offset:8502c0                        

class UHorizontalBoxSlot* UHorizontalBox::AddChildToHorizontalBox(class UWidget** Content)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.HorizontalBox.AddChildToHorizontalBox"));

	UHorizontalBox_AddChildToHorizontalBox_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Overlay.AddChildToOverlay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget**                Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UOverlaySlot*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF718620350              		 offset:850350                        

class UOverlaySlot* UOverlay::AddChildToOverlay(class UWidget** Content)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Overlay.AddChildToOverlay"));

	UOverlay_AddChildToOverlay_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.ScrollBox.SetScrollOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         NewScrollOffset                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862AD10              		 offset:85ad10                        

void UScrollBox::SetScrollOffset(float* NewScrollOffset)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBox.SetScrollOffset"));

	UScrollBox_SetScrollOffset_Params params;
	params.NewScrollOffset = NewScrollOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ScrollBox.ScrollWidgetIntoView
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget**                WidgetToFind                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          AnimateScroll                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718625800              		 offset:855800                        

void UScrollBox::ScrollWidgetIntoView(class UWidget** WidgetToFind, bool* AnimateScroll)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBox.ScrollWidgetIntoView"));

	UScrollBox_ScrollWidgetIntoView_Params params;
	params.WidgetToFind = WidgetToFind;
	params.AnimateScroll = AnimateScroll;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ScrollBox.ScrollToStart
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718625760              		 offset:855760                        

void UScrollBox::ScrollToStart()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBox.ScrollToStart"));

	UScrollBox_ScrollToStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ScrollBox.ScrollToEnd
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718625740              		 offset:855740                        

void UScrollBox::ScrollToEnd()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBox.ScrollToEnd"));

	UScrollBox_ScrollToEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ScrollBox.GetScrollToEndOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718623AA0              		 offset:853aa0                        

float UScrollBox::GetScrollToEndOffset()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBox.GetScrollToEndOffset"));

	UScrollBox_GetScrollToEndOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.ScrollBox.GetScrollOffset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718623A70              		 offset:853a70                        

float UScrollBox::GetScrollOffset()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBox.GetScrollOffset"));

	UScrollBox_GetScrollOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UniformGridPanel.SetSlotPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin*                InSlotPadding                  (Parm)
// FunctionAddress:0x00007FF71862B3D0              		 offset:85b3d0                        

void UUniformGridPanel::SetSlotPadding(struct FMargin* InSlotPadding)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UniformGridPanel.SetSlotPadding"));

	UUniformGridPanel_SetSlotPadding_Params params;
	params.InSlotPadding = InSlotPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UniformGridPanel.SetMinDesiredSlotWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InMinDesiredSlotWidth          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7186298E0              		 offset:8598e0                        

void UUniformGridPanel::SetMinDesiredSlotWidth(float* InMinDesiredSlotWidth)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UniformGridPanel.SetMinDesiredSlotWidth"));

	UUniformGridPanel_SetMinDesiredSlotWidth_Params params;
	params.InMinDesiredSlotWidth = InMinDesiredSlotWidth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UniformGridPanel.SetMinDesiredSlotHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InMinDesiredSlotHeight         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718629860              		 offset:859860                        

void UUniformGridPanel::SetMinDesiredSlotHeight(float* InMinDesiredSlotHeight)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UniformGridPanel.SetMinDesiredSlotHeight"));

	UUniformGridPanel_SetMinDesiredSlotHeight_Params params;
	params.InMinDesiredSlotHeight = InMinDesiredSlotHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UniformGridPanel.AddChildToUniformGrid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget**                Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UUniformGridSlot*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF7186203E0              		 offset:8503e0                        

class UUniformGridSlot* UUniformGridPanel::AddChildToUniformGrid(class UWidget** Content)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UniformGridPanel.AddChildToUniformGrid"));

	UUniformGridPanel_AddChildToUniformGrid_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.VerticalBox.AddChildToVerticalBox
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget**                Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UVerticalBoxSlot*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF718620470              		 offset:850470                        

class UVerticalBoxSlot* UVerticalBox::AddChildToVerticalBox(class UWidget** Content)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.VerticalBox.AddChildToVerticalBox"));

	UVerticalBox_AddChildToVerticalBox_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetSwitcher.SetActiveWidgetIndex
// (Native, Public, BlueprintCallable)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718625A20              		 offset:855a20                        

void UWidgetSwitcher::SetActiveWidgetIndex(int* Index)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetSwitcher.SetActiveWidgetIndex"));

	UWidgetSwitcher_SetActiveWidgetIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetSwitcher.SetActiveWidget
// (Native, Public, BlueprintCallable)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF71A6D6370              		 offset:2906370                       

void UWidgetSwitcher::SetActiveWidget(class UWidget** Widget)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetSwitcher.SetActiveWidget"));

	UWidgetSwitcher_SetActiveWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetSwitcher.GetWidgetAtIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF718622750              		 offset:852750                        

class UWidget* UWidgetSwitcher::GetWidgetAtIndex(int* Index)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetSwitcher.GetWidgetAtIndex"));

	UWidgetSwitcher_GetWidgetAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetSwitcher.GetNumWidgets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7186236F0              		 offset:8536f0                        

int UWidgetSwitcher::GetNumWidgets()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetSwitcher.GetNumWidgets"));

	UWidgetSwitcher_GetNumWidgets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetSwitcher.GetActiveWidgetIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718621F10              		 offset:851f10                        

int UWidgetSwitcher::GetActiveWidgetIndex()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetSwitcher.GetActiveWidgetIndex"));

	UWidgetSwitcher_GetActiveWidgetIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WrapBox.SetInnerSlotPadding
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D*              InPadding                      (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF718628510              		 offset:858510                        

void UWrapBox::SetInnerSlotPadding(struct FVector2D* InPadding)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WrapBox.SetInnerSlotPadding"));

	UWrapBox_SetInnerSlotPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WrapBox.AddChildWrapBox
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget**                Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWrapBoxSlot*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF718620500              		 offset:850500                        

class UWrapBoxSlot* UWrapBox::AddChildWrapBox(class UWidget** Content)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WrapBox.AddChildWrapBox"));

	UWrapBox_AddChildWrapBox_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.ProgressBar.SetPercent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InPercent                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862A990              		 offset:85a990                        

void UProgressBar::SetPercent(float* InPercent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ProgressBar.SetPercent"));

	UProgressBar_SetPercent_Params params;
	params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ProgressBar.SetIsMarquee
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          InbIsMarquee                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718628C20              		 offset:858c20                        

void UProgressBar::SetIsMarquee(bool* InbIsMarquee)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ProgressBar.SetIsMarquee"));

	UProgressBar_SetIsMarquee_Params params;
	params.InbIsMarquee = InbIsMarquee;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ProgressBar.SetFillColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor*           InColor                        (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF7186275C0              		 offset:8575c0                        

void UProgressBar::SetFillColorAndOpacity(struct FLinearColor* InColor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ProgressBar.SetFillColorAndOpacity"));

	UProgressBar_SetFillColorAndOpacity_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.ScrollBar.SetState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InOffsetFraction               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InThumbSizeFraction            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862B460              		 offset:85b460                        

void UScrollBar::SetState(float* InOffsetFraction, float* InThumbSizeFraction)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBar.SetState"));

	UScrollBar_SetState_Params params;
	params.InOffsetFraction = InOffsetFraction;
	params.InThumbSizeFraction = InThumbSizeFraction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Slider.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862BE60              		 offset:85be60                        

void USlider::SetValue(float* InValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Slider.SetValue"));

	USlider_SetValue_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Slider.SetStepSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862B520              		 offset:85b520                        

void USlider::SetStepSize(float* InValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Slider.SetStepSize"));

	USlider_SetStepSize_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Slider.SetSliderHandleColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor*           InValue                        (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF71862B350              		 offset:85b350                        

void USlider::SetSliderHandleColor(struct FLinearColor* InValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Slider.SetSliderHandleColor"));

	USlider_SetSliderHandleColor_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Slider.SetSliderBarColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor*           InValue                        (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF71862B2D0              		 offset:85b2d0                        

void USlider::SetSliderBarColor(struct FLinearColor* InValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Slider.SetSliderBarColor"));

	USlider_SetSliderBarColor_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Slider.SetLocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7186292F0              		 offset:8592f0                        

void USlider::SetLocked(bool* InValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Slider.SetLocked"));

	USlider_SetLocked_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Slider.SetIndentHandle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718628480              		 offset:858480                        

void USlider::SetIndentHandle(bool* InValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Slider.SetIndentHandle"));

	USlider_SetIndentHandle_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Slider.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718623ED0              		 offset:853ed0                        

float USlider::GetValue()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Slider.GetValue"));

	USlider_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Spacer.SetSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D*              InSize                         (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF71862B1B0              		 offset:85b1b0                        

void USpacer::SetSize(struct FVector2D* InSize)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Spacer.SetSize"));

	USpacer_SetSize_Params params;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SpinBox.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         NewValue                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862BEE0              		 offset:85bee0                        

void USpinBox::SetValue(float* NewValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.SetValue"));

	USpinBox_SetValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SpinBox.SetMinValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         NewValue                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718629AE0              		 offset:859ae0                        

void USpinBox::SetMinValue(float* NewValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.SetMinValue"));

	USpinBox_SetMinValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SpinBox.SetMinSliderValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         NewValue                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718629A60              		 offset:859a60                        

void USpinBox::SetMinSliderValue(float* NewValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.SetMinSliderValue"));

	USpinBox_SetMinSliderValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SpinBox.SetMaxValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         NewValue                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7186296E0              		 offset:8596e0                        

void USpinBox::SetMaxValue(float* NewValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.SetMaxValue"));

	USpinBox_SetMaxValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SpinBox.SetMaxSliderValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         NewValue                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718629660              		 offset:859660                        

void USpinBox::SetMaxSliderValue(float* NewValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.SetMaxSliderValue"));

	USpinBox_SetMaxSliderValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SpinBox.SetForegroundColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor*            InForegroundColor              (Parm)
// FunctionAddress:0x00007FF7186278A0              		 offset:8578a0                        

void USpinBox::SetForegroundColor(struct FSlateColor* InForegroundColor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.SetForegroundColor"));

	USpinBox_SetForegroundColor_Params params;
	params.InForegroundColor = InForegroundColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// float*                         InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void USpinBox::OnSpinBoxValueCommittedEvent__DelegateSignature(float* InValue, TEnumAsByte<ETextCommit>* CommitMethod)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature"));

	USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params;
	params.InValue = InValue;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// float*                         InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void USpinBox::OnSpinBoxValueChangedEvent__DelegateSignature(float* InValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature"));

	USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void USpinBox::OnSpinBoxBeginSliderMovement__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature"));

	USpinBox_OnSpinBoxBeginSliderMovement__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SpinBox.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718623F00              		 offset:853f00                        

float USpinBox::GetValue()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.GetValue"));

	USpinBox_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.SpinBox.GetMinValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7186235A0              		 offset:8535a0                        

float USpinBox::GetMinValue()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.GetMinValue"));

	USpinBox_GetMinValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.SpinBox.GetMinSliderValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718623570              		 offset:853570                        

float USpinBox::GetMinSliderValue()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.GetMinSliderValue"));

	USpinBox_GetMinSliderValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.SpinBox.GetMaxValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718623500              		 offset:853500                        

float USpinBox::GetMaxValue()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.GetMaxValue"));

	USpinBox_GetMaxValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.SpinBox.GetMaxSliderValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7186234D0              		 offset:8534d0                        

float USpinBox::GetMaxSliderValue()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.GetMaxSliderValue"));

	USpinBox_GetMaxSliderValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.SpinBox.ClearMinValue
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718620B40              		 offset:850b40                        

void USpinBox::ClearMinValue()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.ClearMinValue"));

	USpinBox_ClearMinValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SpinBox.ClearMinSliderValue
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718620B20              		 offset:850b20                        

void USpinBox::ClearMinSliderValue()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.ClearMinSliderValue"));

	USpinBox_ClearMinSliderValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SpinBox.ClearMaxValue
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718620AC0              		 offset:850ac0                        

void USpinBox::ClearMaxValue()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.ClearMaxValue"));

	USpinBox_ClearMaxValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.SpinBox.ClearMaxSliderValue
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718620AA0              		 offset:850aa0                        

void USpinBox::ClearMaxSliderValue()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.ClearMaxSliderValue"));

	USpinBox_ClearMaxSliderValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction UMG.TableViewBase.OnGenerateRowUObject__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UObject**                Item                           (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

class UWidget* UTableViewBase::OnGenerateRowUObject__DelegateSignature(class UObject** Item)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.TableViewBase.OnGenerateRowUObject__DelegateSignature"));

	UTableViewBase_OnGenerateRowUObject__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.TileView.SetItemWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Width                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718629000              		 offset:859000                        

void UTileView::SetItemWidth(float* Width)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TileView.SetItemWidth"));

	UTileView_SetItemWidth_Params params;
	params.Width = Width;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.TileView.SetItemHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Height                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718628F80              		 offset:858f80                        

void UTileView::SetItemHeight(float* Height)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TileView.SetItemHeight"));

	UTileView_SetItemHeight_Params params;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.TileView.RequestListRefresh
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718625700              		 offset:855700                        

void UTileView::RequestListRefresh()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TileView.RequestListRefresh"));

	UTileView_RequestListRefresh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.MultiLineEditableText.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText*                  InText                         (Parm)
// FunctionAddress:0x00007FF71862B900              		 offset:85b900                        

void UMultiLineEditableText::SetText(struct FText* InText)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MultiLineEditableText.SetText"));

	UMultiLineEditableText_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.MultiLineEditableText.SetIsReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bReadOnly                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718628E60              		 offset:858e60                        

void UMultiLineEditableText::SetIsReadOnly(bool* bReadOnly)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MultiLineEditableText.SetIsReadOnly"));

	UMultiLineEditableText_SetIsReadOnly_Params params;
	params.bReadOnly = bReadOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FText*                  Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UMultiLineEditableText::OnMultiLineEditableTextCommittedEvent__DelegateSignature(struct FText* Text, TEnumAsByte<ETextCommit>* CommitMethod)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature"));

	UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FText*                  Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UMultiLineEditableText::OnMultiLineEditableTextChangedEvent__DelegateSignature(struct FText* Text)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature"));

	UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.MultiLineEditableText.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718623CF0              		 offset:853cf0                        

struct FText UMultiLineEditableText::GetText()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MultiLineEditableText.GetText"));

	UMultiLineEditableText_GetText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.MultiLineEditableTextBox.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText*                  InText                         (Parm)
// FunctionAddress:0x00007FF71862B9D0              		 offset:85b9d0                        

void UMultiLineEditableTextBox::SetText(struct FText* InText)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MultiLineEditableTextBox.SetText"));

	UMultiLineEditableTextBox_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.MultiLineEditableTextBox.SetIsReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bReadOnly                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718628EF0              		 offset:858ef0                        

void UMultiLineEditableTextBox::SetIsReadOnly(bool* bReadOnly)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MultiLineEditableTextBox.SetIsReadOnly"));

	UMultiLineEditableTextBox_SetIsReadOnly_Params params;
	params.bReadOnly = bReadOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.MultiLineEditableTextBox.SetError
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText*                  InError                        (Parm)
// FunctionAddress:0x00007FF7186274F0              		 offset:8574f0                        

void UMultiLineEditableTextBox::SetError(struct FText* InError)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MultiLineEditableTextBox.SetError"));

	UMultiLineEditableTextBox_SetError_Params params;
	params.InError = InError;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FText*                  Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UMultiLineEditableTextBox::OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(struct FText* Text, TEnumAsByte<ETextCommit>* CommitMethod)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature"));

	UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FText*                  Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UMultiLineEditableTextBox::OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(struct FText* Text)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature"));

	UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.MultiLineEditableTextBox.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718623D80              		 offset:853d80                        

struct FText UMultiLineEditableTextBox::GetText()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MultiLineEditableTextBox.GetText"));

	UMultiLineEditableTextBox_GetText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.TextBlock.SetWrapTextAt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InWrapTextAt                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862C810              		 offset:85c810                        

void UTextBlock::SetWrapTextAt(float* InWrapTextAt)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBlock.SetWrapTextAt"));

	UTextBlock_SetWrapTextAt_Params params;
	params.InWrapTextAt = InWrapTextAt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.TextBlock.SetText
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FText*                  InText                         (Parm)
// FunctionAddress:0x00007FF71862BAA0              		 offset:85baa0                        

void UTextBlock::SetText(struct FText* InText)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBlock.SetText"));

	UTextBlock_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.TextBlock.SetShadowOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D*              InShadowOffset                 (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF71862B010              		 offset:85b010                        

void UTextBlock::SetShadowOffset(struct FVector2D* InShadowOffset)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBlock.SetShadowOffset"));

	UTextBlock_SetShadowOffset_Params params;
	params.InShadowOffset = InShadowOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.TextBlock.SetShadowColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor*           InShadowColorAndOpacity        (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF71862AF90              		 offset:85af90                        

void UTextBlock::SetShadowColorAndOpacity(struct FLinearColor* InShadowColorAndOpacity)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBlock.SetShadowColorAndOpacity"));

	UTextBlock_SetShadowColorAndOpacity_Params params;
	params.InShadowColorAndOpacity = InShadowColorAndOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.TextBlock.SetOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InOpacity                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718629F90              		 offset:859f90                        

void UTextBlock::SetOpacity(float* InOpacity)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBlock.SetOpacity"));

	UTextBlock_SetOpacity_Params params;
	params.InOpacity = InOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.TextBlock.SetMinDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InMinDesiredWidth              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7186299E0              		 offset:8599e0                        

void UTextBlock::SetMinDesiredWidth(float* InMinDesiredWidth)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBlock.SetMinDesiredWidth"));

	UTextBlock_SetMinDesiredWidth_Params params;
	params.InMinDesiredWidth = InMinDesiredWidth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.TextBlock.SetJustification
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ETextJustify>*     InJustification                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718629080              		 offset:859080                        

void UTextBlock::SetJustification(TEnumAsByte<ETextJustify>* InJustification)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBlock.SetJustification"));

	UTextBlock_SetJustification_Params params;
	params.InJustification = InJustification;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.TextBlock.SetFont
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateFontInfo*         InFontInfo                     (Parm)
// FunctionAddress:0x00007FF718627770              		 offset:857770                        

void UTextBlock::SetFont(struct FSlateFontInfo* InFontInfo)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBlock.SetFont"));

	UTextBlock_SetFont_Params params;
	params.InFontInfo = InFontInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.TextBlock.SetColorAndOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor*            InColorAndOpacity              (Parm)
// FunctionAddress:0x00007FF718626E50              		 offset:856e50                        

void UTextBlock::SetColorAndOpacity(struct FSlateColor* InColorAndOpacity)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBlock.SetColorAndOpacity"));

	UTextBlock_SetColorAndOpacity_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.TextBlock.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718623E10              		 offset:853e10                        

struct FText UTextBlock::GetText()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBlock.GetText"));

	UTextBlock_GetText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Throbber.SetNumberOfPieces
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           InNumberOfPieces               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718629E00              		 offset:859e00                        

void UThrobber::SetNumberOfPieces(int* InNumberOfPieces)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Throbber.SetNumberOfPieces"));

	UThrobber_SetNumberOfPieces_Params params;
	params.InNumberOfPieces = InNumberOfPieces;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Throbber.SetAnimateVertically
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bInAnimateVertically           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718625D70              		 offset:855d70                        

void UThrobber::SetAnimateVertically(bool* bInAnimateVertically)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Throbber.SetAnimateVertically"));

	UThrobber_SetAnimateVertically_Params params;
	params.bInAnimateVertically = bInAnimateVertically;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Throbber.SetAnimateOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bInAnimateOpacity              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718625CE0              		 offset:855ce0                        

void UThrobber::SetAnimateOpacity(bool* bInAnimateOpacity)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Throbber.SetAnimateOpacity"));

	UThrobber_SetAnimateOpacity_Params params;
	params.bInAnimateOpacity = bInAnimateOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.Throbber.SetAnimateHorizontally
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bInAnimateHorizontally         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718625C50              		 offset:855c50                        

void UThrobber::SetAnimateHorizontally(bool* bInAnimateHorizontally)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Throbber.SetAnimateHorizontally"));

	UThrobber_SetAnimateHorizontally_Params params;
	params.bInAnimateHorizontally = bInAnimateHorizontally;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetAnimation.GetStartTime
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718623BA0              		 offset:853ba0                        

float UWidgetAnimation::GetStartTime()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetAnimation.GetStartTime"));

	UWidgetAnimation_GetStartTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetAnimation.GetEndTime
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718622B60              		 offset:852b60                        

float UWidgetAnimation::GetEndTime()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetAnimation.GetEndTime"));

	UWidgetAnimation_GetEndTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.UnlockMouse
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71862CEE0              		 offset:85cee0                        

struct FEventReply UWidgetBlueprintLibrary::STATIC_UnlockMouse(struct FEventReply* Reply)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.UnlockMouse"));

	UWidgetBlueprintLibrary_UnlockMouse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.Unhandled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71862CE60              		 offset:85ce60                        

struct FEventReply UWidgetBlueprintLibrary::STATIC_Unhandled()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.Unhandled"));

	UWidgetBlueprintLibrary_Unhandled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.SetUserFocus
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm)
// class UWidget**                FocusWidget                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bInAllUsers                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71862BBF0              		 offset:85bbf0                        

struct FEventReply UWidgetBlueprintLibrary::STATIC_SetUserFocus(class UWidget** FocusWidget, bool* bInAllUsers, struct FEventReply* Reply)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetUserFocus"));

	UWidgetBlueprintLibrary_SetUserFocus_Params params;
	params.FocusWidget = FocusWidget;
	params.bInAllUsers = bInAllUsers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.SetMousePosition
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm)
// struct FVector2D*              NewMousePosition               (Parm, IsPlainOldData)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718629BE0              		 offset:859be0                        

struct FEventReply UWidgetBlueprintLibrary::STATIC_SetMousePosition(struct FVector2D* NewMousePosition, struct FEventReply* Reply)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetMousePosition"));

	UWidgetBlueprintLibrary_SetMousePosition_Params params;
	params.NewMousePosition = NewMousePosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController**      Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget**                InWidgetToFocus                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EMouseLockMode*                InMouseLockMode                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718628980              		 offset:858980                        

void UWidgetBlueprintLibrary::STATIC_SetInputMode_UIOnlyEx(class APlayerController** Target, class UWidget** InWidgetToFocus, EMouseLockMode* InMouseLockMode)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx"));

	UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Params params;
	params.Target = Target;
	params.InWidgetToFocus = InWidgetToFocus;
	params.InMouseLockMode = InMouseLockMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController**      Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget**                InWidgetToFocus                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bLockMouseToViewport           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718628880              		 offset:858880                        

void UWidgetBlueprintLibrary::STATIC_SetInputMode_UIOnly(class APlayerController** Target, class UWidget** InWidgetToFocus, bool* bLockMouseToViewport)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly"));

	UWidgetBlueprintLibrary_SetInputMode_UIOnly_Params params;
	params.Target = Target;
	params.InWidgetToFocus = InWidgetToFocus;
	params.bLockMouseToViewport = bLockMouseToViewport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController**      Target                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718628810              		 offset:858810                        

void UWidgetBlueprintLibrary::STATIC_SetInputMode_GameOnly(class APlayerController** Target)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly"));

	UWidgetBlueprintLibrary_SetInputMode_GameOnly_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController**      Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget**                InWidgetToFocus                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EMouseLockMode*                InMouseLockMode                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bHideCursorDuringCapture       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7186286D0              		 offset:8586d0                        

void UWidgetBlueprintLibrary::STATIC_SetInputMode_GameAndUIEx(class APlayerController** Target, class UWidget** InWidgetToFocus, EMouseLockMode* InMouseLockMode, bool* bHideCursorDuringCapture)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx"));

	UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Params params;
	params.Target = Target;
	params.InWidgetToFocus = InWidgetToFocus;
	params.InMouseLockMode = InMouseLockMode;
	params.bHideCursorDuringCapture = bHideCursorDuringCapture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController**      Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget**                InWidgetToFocus                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bLockMouseToViewport           (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bHideCursorDuringCapture       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718628590              		 offset:858590                        

void UWidgetBlueprintLibrary::STATIC_SetInputMode_GameAndUI(class APlayerController** Target, class UWidget** InWidgetToFocus, bool* bLockMouseToViewport, bool* bHideCursorDuringCapture)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI"));

	UWidgetBlueprintLibrary_SetInputMode_GameAndUI_Params params;
	params.Target = Target;
	params.InWidgetToFocus = InWidgetToFocus;
	params.bLockMouseToViewport = bLockMouseToViewport;
	params.bHideCursorDuringCapture = bHideCursorDuringCapture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetBlueprintLibrary.SetHardwareCursor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMouseCursor>*     CursorShape                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CursorName                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              HotSpot                        (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7186279A0              		 offset:8579a0                        

bool UWidgetBlueprintLibrary::STATIC_SetHardwareCursor(class UObject** WorldContextObject, TEnumAsByte<EMouseCursor>* CursorShape, struct FName* CursorName, struct FVector2D* HotSpot)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetHardwareCursor"));

	UWidgetBlueprintLibrary_SetHardwareCursor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.CursorShape = CursorShape;
	params.CursorName = CursorName;
	params.HotSpot = HotSpot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718627750              		 offset:857750                        

void UWidgetBlueprintLibrary::STATIC_SetFocusToGameViewport()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport"));

	UWidgetBlueprintLibrary_SetFocusToGameViewport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm, ReferenceParm)
// class UTexture2D**             Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718626A20              		 offset:856a20                        

void UWidgetBlueprintLibrary::STATIC_SetBrushResourceToTexture(class UTexture2D** Texture, struct FSlateBrush* Brush)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture"));

	UWidgetBlueprintLibrary_SetBrushResourceToTexture_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm, ReferenceParm)
// class UMaterialInterface**     Material                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718626880              		 offset:856880                        

void UWidgetBlueprintLibrary::STATIC_SetBrushResourceToMaterial(class UMaterialInterface** Material, struct FSlateBrush* Brush)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial"));

	UWidgetBlueprintLibrary_SetBrushResourceToMaterial_Params params;
	params.Material = Material;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718625270              		 offset:855270                        

struct FEventReply UWidgetBlueprintLibrary::STATIC_ReleaseMouseCapture(struct FEventReply* Reply)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture"));

	UWidgetBlueprintLibrary_ReleaseMouseCapture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm)
// bool*                          bInAllJoysticks                (Parm, ZeroConstructor, IsPlainOldData)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718624FC0              		 offset:854fc0                        

struct FEventReply UWidgetBlueprintLibrary::STATIC_ReleaseJoystickCapture(bool* bInAllJoysticks, struct FEventReply* Reply)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture"));

	UWidgetBlueprintLibrary_ReleaseJoystickCapture_Params params;
	params.bInAllJoysticks = bInAllJoysticks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.NoResourceBrush
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718624A30              		 offset:854a30                        

struct FSlateBrush UWidgetBlueprintLibrary::STATIC_NoResourceBrush()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.NoResourceBrush"));

	UWidgetBlueprintLibrary_NoResourceBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTexture2D**             Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Height                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF7186248B0              		 offset:8548b0                        

struct FSlateBrush UWidgetBlueprintLibrary::STATIC_MakeBrushFromTexture(class UTexture2D** Texture, int* Width, int* Height)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture"));

	UWidgetBlueprintLibrary_MakeBrushFromTexture_Params params;
	params.Texture = Texture;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMaterialInterface**     Material                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Height                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718624730              		 offset:854730                        

struct FSlateBrush UWidgetBlueprintLibrary::STATIC_MakeBrushFromMaterial(class UMaterialInterface** Material, int* Width, int* Height)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial"));

	UWidgetBlueprintLibrary_MakeBrushFromMaterial_Params params;
	params.Material = Material;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USlateBrushAsset**       BrushAsset                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718624640              		 offset:854640                        

struct FSlateBrush UWidgetBlueprintLibrary::STATIC_MakeBrushFromAsset(class USlateBrushAsset** BrushAsset)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset"));

	UWidgetBlueprintLibrary_MakeBrushFromAsset_Params params;
	params.BrushAsset = BrushAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.LockMouse
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm)
// class UWidget**                CapturingWidget                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF7186244A0              		 offset:8544a0                        

struct FEventReply UWidgetBlueprintLibrary::STATIC_LockMouse(class UWidget** CapturingWidget, struct FEventReply* Reply)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.LockMouse"));

	UWidgetBlueprintLibrary_LockMouse_Params params;
	params.CapturingWidget = CapturingWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.IsDragDropping
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718624350              		 offset:854350                        

bool UWidgetBlueprintLibrary::STATIC_IsDragDropping()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.IsDragDropping"));

	UWidgetBlueprintLibrary_IsDragDropping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.Handled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718624160              		 offset:854160                        

struct FEventReply UWidgetBlueprintLibrary::STATIC_Handled()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.Handled"));

	UWidgetBlueprintLibrary_Handled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               SafePadding                    (Parm, OutParm, IsPlainOldData)
// struct FVector2D               SafePaddingScale               (Parm, OutParm, IsPlainOldData)
// struct FVector2D               SpillOverPadding               (Parm, OutParm, IsPlainOldData)
// FunctionAddress:0x00007FF718623910              		 offset:853910                        

void UWidgetBlueprintLibrary::STATIC_GetSafeZonePadding(class UObject** WorldContextObject, struct FVector2D* SafePadding, struct FVector2D* SafePaddingScale, struct FVector2D* SpillOverPadding)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding"));

	UWidgetBlueprintLibrary_GetSafeZonePadding_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SafePadding != nullptr)
		*SafePadding = params.SafePadding;
	if (SafePaddingScale != nullptr)
		*SafePaddingScale = params.SafePaddingScale;
	if (SpillOverPadding != nullptr)
		*SpillOverPadding = params.SpillOverPadding;
}


// Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnalogInputEvent*      Event                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FKeyEvent               ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF7186231B0              		 offset:8531b0                        

struct FKeyEvent UWidgetBlueprintLibrary::STATIC_GetKeyEventFromAnalogInputEvent(struct FAnalogInputEvent* Event)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent"));

	UWidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPointerEvent*          Event                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FInputEvent             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718623010              		 offset:853010                        

struct FInputEvent UWidgetBlueprintLibrary::STATIC_GetInputEventFromPointerEvent(struct FPointerEvent* Event)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent"));

	UWidgetBlueprintLibrary_GetInputEventFromPointerEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FNavigationEvent*       Event                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FInputEvent             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718622F30              		 offset:852f30                        

struct FInputEvent UWidgetBlueprintLibrary::STATIC_GetInputEventFromNavigationEvent(struct FNavigationEvent* Event)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent"));

	UWidgetBlueprintLibrary_GetInputEventFromNavigationEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKeyEvent*              Event                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FInputEvent             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718622E00              		 offset:852e00                        

struct FInputEvent UWidgetBlueprintLibrary::STATIC_GetInputEventFromKeyEvent(struct FKeyEvent* Event)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent"));

	UWidgetBlueprintLibrary_GetInputEventFromKeyEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromControllerEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FControllerEvent*       Event                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FInputEvent             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718622CB0              		 offset:852cb0                        

struct FInputEvent UWidgetBlueprintLibrary::STATIC_GetInputEventFromControllerEvent(struct FControllerEvent* Event)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetInputEventFromControllerEvent"));

	UWidgetBlueprintLibrary_GetInputEventFromControllerEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FCharacterEvent*        Event                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FInputEvent             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718622BC0              		 offset:852bc0                        

struct FInputEvent UWidgetBlueprintLibrary::STATIC_GetInputEventFromCharacterEvent(struct FCharacterEvent* Event)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent"));

	UWidgetBlueprintLibrary_GetInputEventFromCharacterEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm, ReferenceParm)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7186229D0              		 offset:8529d0                        

class UMaterialInstanceDynamic* UWidgetBlueprintLibrary::STATIC_GetDynamicMaterial(struct FSlateBrush* Brush)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial"));

	UWidgetBlueprintLibrary_GetDynamicMaterial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDragDropOperation*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718622900              		 offset:852900                        

class UDragDropOperation* UWidgetBlueprintLibrary::STATIC_GetDragDroppingContent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent"));

	UWidgetBlueprintLibrary_GetDragDroppingContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm, ReferenceParm)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718622590              		 offset:852590                        

class UTexture2D* UWidgetBlueprintLibrary::STATIC_GetBrushResourceAsTexture2D(struct FSlateBrush* Brush)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D"));

	UWidgetBlueprintLibrary_GetBrushResourceAsTexture2D_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm, ReferenceParm)
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718622430              		 offset:852430                        

class UMaterialInterface* UWidgetBlueprintLibrary::STATIC_GetBrushResourceAsMaterial(struct FSlateBrush* Brush)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial"));

	UWidgetBlueprintLibrary_GetBrushResourceAsMaterial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetBrushResource
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm, ReferenceParm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7186222D0              		 offset:8522d0                        

class UObject* UWidgetBlueprintLibrary::STATIC_GetBrushResource(struct FSlateBrush* Brush)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetBrushResource"));

	UWidgetBlueprintLibrary_GetBrushResource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 Interface                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UUserWidget*>     FoundWidgets                   (Parm, OutParm, ZeroConstructor)
// bool*                          TopLevelOnly                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7186220F0              		 offset:8520f0                        

void UWidgetBlueprintLibrary::STATIC_GetAllWidgetsWithInterface(class UObject** WorldContextObject, class UClass** Interface, bool* TopLevelOnly, TArray<class UUserWidget*>* FoundWidgets)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface"));

	UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Interface = Interface;
	params.TopLevelOnly = TopLevelOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundWidgets != nullptr)
		*FoundWidgets = params.FoundWidgets;
}


// Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UUserWidget*>     FoundWidgets                   (Parm, OutParm, ZeroConstructor)
// class UClass**                 WidgetClass                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          TopLevelOnly                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718621F80              		 offset:851f80                        

void UWidgetBlueprintLibrary::STATIC_GetAllWidgetsOfClass(class UObject** WorldContextObject, class UClass** WidgetClass, bool* TopLevelOnly, TArray<class UUserWidget*>* FoundWidgets)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass"));

	UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Params params;
	params.WorldContextObject = WorldContextObject;
	params.WidgetClass = WidgetClass;
	params.TopLevelOnly = TopLevelOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundWidgets != nullptr)
		*FoundWidgets = params.FoundWidgets;
}


// Function UMG.WidgetBlueprintLibrary.EndDragDrop
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718621CC0              		 offset:851cc0                        

struct FEventReply UWidgetBlueprintLibrary::STATIC_EndDragDrop(struct FEventReply* Reply)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.EndDragDrop"));

	UWidgetBlueprintLibrary_EndDragDrop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.DrawTextFormatted
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext           Context                        (Parm, OutParm, ReferenceParm)
// struct FText*                  Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector2D*              Position                       (Parm, IsPlainOldData)
// class UFont**                  Font                           (Parm, ZeroConstructor, IsPlainOldData)
// int*                           FontSize                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  FontTypeFace                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Tint                           (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF718621A50              		 offset:851a50                        

void UWidgetBlueprintLibrary::STATIC_DrawTextFormatted(struct FText* Text, struct FVector2D* Position, class UFont** Font, int* FontSize, struct FName* FontTypeFace, struct FLinearColor* Tint, struct FPaintContext* Context)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.DrawTextFormatted"));

	UWidgetBlueprintLibrary_DrawTextFormatted_Params params;
	params.Text = Text;
	params.Position = Position;
	params.Font = Font;
	params.FontSize = FontSize;
	params.FontTypeFace = FontTypeFace;
	params.Tint = Tint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function UMG.WidgetBlueprintLibrary.DrawText
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext           Context                        (Parm, OutParm, ReferenceParm)
// struct FString*                inString                       (Parm, ZeroConstructor)
// struct FVector2D*              Position                       (Parm, IsPlainOldData)
// struct FLinearColor*           Tint                           (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF7186218C0              		 offset:8518c0                        

void UWidgetBlueprintLibrary::STATIC_DrawText(struct FString* inString, struct FVector2D* Position, struct FLinearColor* Tint, struct FPaintContext* Context)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.DrawText"));

	UWidgetBlueprintLibrary_DrawText_Params params;
	params.inString = inString;
	params.Position = Position;
	params.Tint = Tint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function UMG.WidgetBlueprintLibrary.DrawLines
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext           Context                        (Parm, OutParm, ReferenceParm)
// TArray<struct FVector2D>*      Points                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FLinearColor*           Tint                           (Parm, IsPlainOldData)
// bool*                          bAntiAlias                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718621710              		 offset:851710                        

void UWidgetBlueprintLibrary::STATIC_DrawLines(TArray<struct FVector2D>* Points, struct FLinearColor* Tint, bool* bAntiAlias, struct FPaintContext* Context)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.DrawLines"));

	UWidgetBlueprintLibrary_DrawLines_Params params;
	params.Points = Points;
	params.Tint = Tint;
	params.bAntiAlias = bAntiAlias;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function UMG.WidgetBlueprintLibrary.DrawLine
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext           Context                        (Parm, OutParm, ReferenceParm)
// struct FVector2D*              PositionA                      (Parm, IsPlainOldData)
// struct FVector2D*              PositionB                      (Parm, IsPlainOldData)
// struct FLinearColor*           Tint                           (Parm, IsPlainOldData)
// bool*                          bAntiAlias                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718621560              		 offset:851560                        

void UWidgetBlueprintLibrary::STATIC_DrawLine(struct FVector2D* PositionA, struct FVector2D* PositionB, struct FLinearColor* Tint, bool* bAntiAlias, struct FPaintContext* Context)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.DrawLine"));

	UWidgetBlueprintLibrary_DrawLine_Params params;
	params.PositionA = PositionA;
	params.PositionB = PositionB;
	params.Tint = Tint;
	params.bAntiAlias = bAntiAlias;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function UMG.WidgetBlueprintLibrary.DrawBox
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext           Context                        (Parm, OutParm, ReferenceParm)
// struct FVector2D*              Position                       (Parm, IsPlainOldData)
// struct FVector2D*              Size                           (Parm, IsPlainOldData)
// class USlateBrushAsset**       Brush                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Tint                           (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF7186213B0              		 offset:8513b0                        

void UWidgetBlueprintLibrary::STATIC_DrawBox(struct FVector2D* Position, struct FVector2D* Size, class USlateBrushAsset** Brush, struct FLinearColor* Tint, struct FPaintContext* Context)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.DrawBox"));

	UWidgetBlueprintLibrary_DrawBox_Params params;
	params.Position = Position;
	params.Size = Size;
	params.Brush = Brush;
	params.Tint = Tint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function UMG.WidgetBlueprintLibrary.DismissAllMenus
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718621390              		 offset:851390                        

void UWidgetBlueprintLibrary::STATIC_DismissAllMenus()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.DismissAllMenus"));

	UWidgetBlueprintLibrary_DismissAllMenus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// class UWidget**                WidgetDetectingDrag            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FKey*                   DragKey                        (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718621140              		 offset:851140                        

struct FEventReply UWidgetBlueprintLibrary::STATIC_DetectDragIfPressed(struct FPointerEvent* PointerEvent, class UWidget** WidgetDetectingDrag, struct FKey* DragKey)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed"));

	UWidgetBlueprintLibrary_DetectDragIfPressed_Params params;
	params.PointerEvent = PointerEvent;
	params.WidgetDetectingDrag = WidgetDetectingDrag;
	params.DragKey = DragKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.DetectDrag
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm)
// class UWidget**                WidgetDetectingDrag            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FKey*                   DragKey                        (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718620F00              		 offset:850f00                        

struct FEventReply UWidgetBlueprintLibrary::STATIC_DetectDrag(class UWidget** WidgetDetectingDrag, struct FKey* DragKey, struct FEventReply* Reply)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.DetectDrag"));

	UWidgetBlueprintLibrary_DetectDrag_Params params;
	params.WidgetDetectingDrag = WidgetDetectingDrag;
	params.DragKey = DragKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass**                 OperationClass                 (Parm, ZeroConstructor, IsPlainOldData)
// class UDragDropOperation*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718620E80              		 offset:850e80                        

class UDragDropOperation* UWidgetBlueprintLibrary::STATIC_CreateDragDropOperation(class UClass** OperationClass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation"));

	UWidgetBlueprintLibrary_CreateDragDropOperation_Params params;
	params.OperationClass = OperationClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.Create
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 WidgetType                     (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      OwningPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF718620D90              		 offset:850d90                        

class UUserWidget* UWidgetBlueprintLibrary::STATIC_Create(class UObject** WorldContextObject, class UClass** WidgetType, class APlayerController** OwningPlayer)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.Create"));

	UWidgetBlueprintLibrary_Create_Params params;
	params.WorldContextObject = WorldContextObject;
	params.WidgetType = WidgetType;
	params.OwningPlayer = OwningPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.ClearUserFocus
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm)
// bool*                          bInAllUsers                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718620BA0              		 offset:850ba0                        

struct FEventReply UWidgetBlueprintLibrary::STATIC_ClearUserFocus(bool* bInAllUsers, struct FEventReply* Reply)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.ClearUserFocus"));

	UWidgetBlueprintLibrary_ClearUserFocus_Params params;
	params.bInAllUsers = bInAllUsers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.CaptureMouse
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm)
// class UWidget**                CapturingWidget                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718620840              		 offset:850840                        

struct FEventReply UWidgetBlueprintLibrary::STATIC_CaptureMouse(class UWidget** CapturingWidget, struct FEventReply* Reply)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.CaptureMouse"));

	UWidgetBlueprintLibrary_CaptureMouse_Params params;
	params.CapturingWidget = CapturingWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.CaptureJoystick
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm)
// class UWidget**                CapturingWidget                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bInAllJoysticks                (Parm, ZeroConstructor, IsPlainOldData)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718620650              		 offset:850650                        

struct FEventReply UWidgetBlueprintLibrary::STATIC_CaptureJoystick(class UWidget** CapturingWidget, bool* bInAllJoysticks, struct FEventReply* Reply)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.CaptureJoystick"));

	UWidgetBlueprintLibrary_CaptureJoystick_Params params;
	params.CapturingWidget = CapturingWidget;
	params.bInAllJoysticks = bInAllJoysticks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.CancelDragDrop
// (Final, Native, Static, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718620630              		 offset:850630                        

void UWidgetBlueprintLibrary::STATIC_CancelDragDrop()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.CancelDragDrop"));

	UWidgetBlueprintLibrary_CancelDragDrop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetComponent.SetWidget
// (Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget**            Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF71862C700              		 offset:85c700                        

void UWidgetComponent::SetWidget(class UUserWidget** Widget)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.SetWidget"));

	UWidgetComponent_SetWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetComponent.SetOwnerPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULocalPlayer**           LocalPlayer                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862A010              		 offset:85a010                        

void UWidgetComponent::SetOwnerPlayer(class ULocalPlayer** LocalPlayer)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.SetOwnerPlayer"));

	UWidgetComponent_SetOwnerPlayer_Params params;
	params.LocalPlayer = LocalPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetComponent.SetDrawSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D*              Size                           (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF718627320              		 offset:857320                        

void UWidgetComponent::SetDrawSize(struct FVector2D* Size)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.SetDrawSize"));

	UWidgetComponent_SetDrawSize_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetComponent.SetBackgroundColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor*           NewBackgroundColor             (ConstParm, Parm, IsPlainOldData)
// FunctionAddress:0x00007FF718625FA0              		 offset:855fa0                        

void UWidgetComponent::SetBackgroundColor(struct FLinearColor* NewBackgroundColor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.SetBackgroundColor"));

	UWidgetComponent_SetBackgroundColor_Params params;
	params.NewBackgroundColor = NewBackgroundColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetComponent.RequestRedraw
// (Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF71B886930              		 offset:3ab6930                       

void UWidgetComponent::RequestRedraw()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.RequestRedraw"));

	UWidgetComponent_RequestRedraw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetComponent.GetUserWidgetObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUserWidget*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF718623EA0              		 offset:853ea0                        

class UUserWidget* UWidgetComponent::GetUserWidgetObject()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.GetUserWidgetObject"));

	UWidgetComponent_GetUserWidgetObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetRenderTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTextureRenderTarget2D*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7186238E0              		 offset:8538e0                        

class UTextureRenderTarget2D* UWidgetComponent::GetRenderTarget()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.GetRenderTarget"));

	UWidgetComponent_GetRenderTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetOwnerPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULocalPlayer*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718623870              		 offset:853870                        

class ULocalPlayer* UWidgetComponent::GetOwnerPlayer()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.GetOwnerPlayer"));

	UWidgetComponent_GetOwnerPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetMaterialInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7186234A0              		 offset:8534a0                        

class UMaterialInstanceDynamic* UWidgetComponent::GetMaterialInstance()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.GetMaterialInstance"));

	UWidgetComponent_GetMaterialInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetDrawSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718622930              		 offset:852930                        

struct FVector2D UWidgetComponent::GetDrawSize()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.GetDrawSize"));

	UWidgetComponent_GetDrawSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.SetCustomHitResult
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FHitResult*             HitResult                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF7186271E0              		 offset:8571e0                        

void UWidgetInteractionComponent::SetCustomHitResult(struct FHitResult* HitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.SetCustomHitResult"));

	UWidgetInteractionComponent_SetCustomHitResult_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetInteractionComponent.SendKeyChar
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                Characters                     (Parm, ZeroConstructor)
// bool*                          bRepeat                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7186258D0              		 offset:8558d0                        

bool UWidgetInteractionComponent::SendKeyChar(struct FString* Characters, bool* bRepeat)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.SendKeyChar"));

	UWidgetInteractionComponent_SendKeyChar_Params params;
	params.Characters = Characters;
	params.bRepeat = bRepeat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.ScrollWheel
// (Native, Public, BlueprintCallable)
// Parameters:
// float*                         ScrollDelta                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718625780              		 offset:855780                        

void UWidgetInteractionComponent::ScrollWheel(float* ScrollDelta)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.ScrollWheel"));

	UWidgetInteractionComponent_ScrollWheel_Params params;
	params.ScrollDelta = ScrollDelta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetInteractionComponent.ReleasePointerKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FKey*                   Key                            (Parm)
// FunctionAddress:0x00007FF7186253D0              		 offset:8553d0                        

void UWidgetInteractionComponent::ReleasePointerKey(struct FKey* Key)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.ReleasePointerKey"));

	UWidgetInteractionComponent_ReleasePointerKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetInteractionComponent.ReleaseKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FKey*                   Key                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718625170              		 offset:855170                        

bool UWidgetInteractionComponent::ReleaseKey(struct FKey* Key)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.ReleaseKey"));

	UWidgetInteractionComponent_ReleaseKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.PressPointerKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FKey*                   Key                            (Parm)
// FunctionAddress:0x00007FF718624D90              		 offset:854d90                        

void UWidgetInteractionComponent::PressPointerKey(struct FKey* Key)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.PressPointerKey"));

	UWidgetInteractionComponent_PressPointerKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetInteractionComponent.PressKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FKey*                   Key                            (Parm)
// bool*                          bRepeat                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718624C50              		 offset:854c50                        

bool UWidgetInteractionComponent::PressKey(struct FKey* Key, bool* bRepeat)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.PressKey"));

	UWidgetInteractionComponent_PressKey_Params params;
	params.Key = Key;
	params.bRepeat = bRepeat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.PressAndReleaseKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FKey*                   Key                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718624B50              		 offset:854b50                        

bool UWidgetInteractionComponent::PressAndReleaseKey(struct FKey* Key)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.PressAndReleaseKey"));

	UWidgetInteractionComponent_PressAndReleaseKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.IsOverInteractableWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718624410              		 offset:854410                        

bool UWidgetInteractionComponent::IsOverInteractableWidget()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.IsOverInteractableWidget"));

	UWidgetInteractionComponent_IsOverInteractableWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7186243E0              		 offset:8543e0                        

bool UWidgetInteractionComponent::IsOverHitTestVisibleWidget()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget"));

	UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.IsOverFocusableWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7186243B0              		 offset:8543b0                        

bool UWidgetInteractionComponent::IsOverFocusableWidget()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.IsOverFocusableWidget"));

	UWidgetInteractionComponent_IsOverFocusableWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.GetLastHitResult
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FHitResult              ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF718623340              		 offset:853340                        

struct FHitResult UWidgetInteractionComponent::GetLastHitResult()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.GetLastHitResult"));

	UWidgetInteractionComponent_GetLastHitResult_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidgetComponent*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF718622B90              		 offset:852b90                        

class UWidgetComponent* UWidgetInteractionComponent::GetHoveredWidgetComponent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent"));

	UWidgetInteractionComponent_GetHoveredWidgetComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.Get2DHitLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718621ED0              		 offset:851ed0                        

struct FVector2D UWidgetInteractionComponent::Get2DHitLocation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.Get2DHitLocation"));

	UWidgetInteractionComponent_Get2DHitLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UVerticalBoxSlot*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF71862CCC0              		 offset:85ccc0                        

class UVerticalBoxSlot* UWidgetLayoutLibrary::STATIC_SlotAsVerticalBoxSlot(class UWidget** Widget)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot"));

	UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UUniformGridSlot*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF71862CC40              		 offset:85cc40                        

class UUniformGridSlot* UWidgetLayoutLibrary::STATIC_SlotAsUniformGridSlot(class UWidget** Widget)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot"));

	UWidgetLayoutLibrary_SlotAsUniformGridSlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UOverlaySlot*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF71862CBC0              		 offset:85cbc0                        

class UOverlaySlot* UWidgetLayoutLibrary::STATIC_SlotAsOverlaySlot(class UWidget** Widget)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot"));

	UWidgetLayoutLibrary_SlotAsOverlaySlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UHorizontalBoxSlot*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF71862CB40              		 offset:85cb40                        

class UHorizontalBoxSlot* UWidgetLayoutLibrary::STATIC_SlotAsHorizontalBoxSlot(class UWidget** Widget)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot"));

	UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsGridSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGridSlot*               ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF71862CAC0              		 offset:85cac0                        

class UGridSlot* UWidgetLayoutLibrary::STATIC_SlotAsGridSlot(class UWidget** Widget)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.SlotAsGridSlot"));

	UWidgetLayoutLibrary_SlotAsGridSlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UCanvasPanelSlot*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF71862CA40              		 offset:85ca40                        

class UCanvasPanelSlot* UWidgetLayoutLibrary::STATIC_SlotAsCanvasSlot(class UWidget** Widget)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot"));

	UWidgetLayoutLibrary_SlotAsCanvasSlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UBorderSlot*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF71862C9C0              		 offset:85c9c0                        

class UBorderSlot* UWidgetLayoutLibrary::STATIC_SlotAsBorderSlot(class UWidget** Widget)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot"));

	UWidgetLayoutLibrary_SlotAsBorderSlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.RemoveAllWidgets
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7186254C0              		 offset:8554c0                        

void UWidgetLayoutLibrary::STATIC_RemoveAllWidgets(class UObject** WorldContextObject)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.RemoveAllWidgets"));

	UWidgetLayoutLibrary_RemoveAllWidgets_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                WorldLocation                  (Parm, IsPlainOldData)
// struct FVector2D               ScreenPosition                 (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718624E80              		 offset:854e80                        

bool UWidgetLayoutLibrary::STATIC_ProjectWorldLocationToWidgetPosition(class APlayerController** PlayerController, struct FVector* WorldLocation, struct FVector2D* ScreenPosition)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition"));

	UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Params params;
	params.PlayerController = PlayerController;
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ScreenPosition != nullptr)
		*ScreenPosition = params.ScreenPosition;

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.GetViewportSize
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718624040              		 offset:854040                        

struct FVector2D UWidgetLayoutLibrary::STATIC_GetViewportSize(class UObject** WorldContextObject)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.GetViewportSize"));

	UWidgetLayoutLibrary_GetViewportSize_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.GetViewportScale
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718623FB0              		 offset:853fb0                        

float UWidgetLayoutLibrary::STATIC_GetViewportScale(class UObject** WorldContextObject)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.GetViewportScale"));

	UWidgetLayoutLibrary_GetViewportScale_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController**      Player                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          LocationX                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          LocationY                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7186235D0              		 offset:8535d0                        

bool UWidgetLayoutLibrary::STATIC_GetMousePositionScaledByDPI(class APlayerController** Player, float* LocationX, float* LocationY)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI"));

	UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocationX != nullptr)
		*LocationX = params.LocationX;
	if (LocationY != nullptr)
		*LocationY = params.LocationY;

	return params.ReturnValue;
}


// Function UMG.AsyncTaskDownloadImage.DownloadImage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString*                URL                            (Parm, ZeroConstructor)
// class UAsyncTaskDownloadImage* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5B630              		 offset:1e8b630                       

class UAsyncTaskDownloadImage* UAsyncTaskDownloadImage::STATIC_DownloadImage(struct FString* URL)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.AsyncTaskDownloadImage.DownloadImage"));

	UAsyncTaskDownloadImage_DownloadImage_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.DragDropOperation.Drop
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF719C5B980              		 offset:1e8b980                       

void UDragDropOperation::Drop(struct FPointerEvent* PointerEvent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.DragDropOperation.Drop"));

	UDragDropOperation_Drop_Params params;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.DragDropOperation.Dragged
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF719C5B850              		 offset:1e8b850                       

void UDragDropOperation::Dragged(struct FPointerEvent* PointerEvent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.DragDropOperation.Dragged"));

	UDragDropOperation_Dragged_Params params;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.DragDropOperation.DragCancelled
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF719C5B720              		 offset:1e8b720                       

void UDragDropOperation::DragCancelled(struct FPointerEvent* PointerEvent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.DragDropOperation.DragCancelled"));

	UDragDropOperation_DragCancelled_Params params;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.BoolBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C350              		 offset:1e8c350                       

bool UBoolBinding::GetValue()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BoolBinding.GetValue"));

	UBoolBinding_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.BrushBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF719C5C380              		 offset:1e8c380                       

struct FSlateBrush UBrushBinding::GetValue()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BrushBinding.GetValue"));

	UBrushBinding_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.CheckedStateBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// ECheckBoxState                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C490              		 offset:1e8c490                       

ECheckBoxState UCheckedStateBinding::GetValue()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CheckedStateBinding.GetValue"));

	UCheckedStateBinding_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.ColorBinding.GetSlateValue
// (Final, Native, Public, Const)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF719C5C1B0              		 offset:1e8c1b0                       

struct FSlateColor UColorBinding::GetSlateValue()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ColorBinding.GetSlateValue"));

	UColorBinding_GetSlateValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.ColorBinding.GetLinearValue
// (Final, Native, Public, HasDefaults, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5BFF0              		 offset:1e8bff0                       

struct FLinearColor UColorBinding::GetLinearValue()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ColorBinding.GetLinearValue"));

	UColorBinding_GetLinearValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.FloatBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C4C0              		 offset:1e8c4c0                       

float UFloatBinding::GetValue()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.FloatBinding.GetValue"));

	UFloatBinding_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.Int32Binding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C4F0              		 offset:1e8c4f0                       

int UInt32Binding::GetValue()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Int32Binding.GetValue"));

	UInt32Binding_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.MouseCursorBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// TEnumAsByte<EMouseCursor>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C520              		 offset:1e8c520                       

TEnumAsByte<EMouseCursor> UMouseCursorBinding::GetValue()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MouseCursorBinding.GetValue"));

	UMouseCursorBinding_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.TextBinding.GetTextValue
// (Final, Native, Public, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF719C5C2C0              		 offset:1e8c2c0                       

struct FText UTextBinding::GetTextValue()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBinding.GetTextValue"));

	UTextBinding_GetTextValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.TextBinding.GetStringValue
// (Final, Native, Public, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF719C5C230              		 offset:1e8c230                       

struct FString UTextBinding::GetStringValue()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBinding.GetStringValue"));

	UTextBinding_GetStringValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.VisibilityBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C550              		 offset:1e8c550                       

ESlateVisibility UVisibilityBinding::GetValue()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.VisibilityBinding.GetValue"));

	UVisibilityBinding_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.WidgetBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C580              		 offset:1e8c580                       

class UWidget* UWidgetBinding::GetValue()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBinding.GetValue"));

	UWidgetBinding_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FGeometry*              Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D*              ScreenPosition                 (Parm, IsPlainOldData)
// struct FVector2D               LocalCoordinate                (Parm, OutParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5D6C0              		 offset:1e8d6c0                       

void USlateBlueprintLibrary::STATIC_ScreenToWidgetLocal(class UObject** WorldContextObject, struct FGeometry* Geometry, struct FVector2D* ScreenPosition, struct FVector2D* LocalCoordinate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal"));

	USlateBlueprintLibrary_ScreenToWidgetLocal_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Geometry = Geometry;
	params.ScreenPosition = ScreenPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocalCoordinate != nullptr)
		*LocalCoordinate = params.LocalCoordinate;
}


// Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              ScreenPosition                 (Parm, IsPlainOldData)
// struct FVector2D               AbsoluteCoordinate             (Parm, OutParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5D5C0              		 offset:1e8d5c0                       

void USlateBlueprintLibrary::STATIC_ScreenToWidgetAbsolute(class UObject** WorldContextObject, struct FVector2D* ScreenPosition, struct FVector2D* AbsoluteCoordinate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute"));

	USlateBlueprintLibrary_ScreenToWidgetAbsolute_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ScreenPosition = ScreenPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AbsoluteCoordinate != nullptr)
		*AbsoluteCoordinate = params.AbsoluteCoordinate;
}


// Function UMG.SlateBlueprintLibrary.ScreenToViewport
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              ScreenPosition                 (Parm, IsPlainOldData)
// struct FVector2D               ViewportPosition               (Parm, OutParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5D4C0              		 offset:1e8d4c0                       

void USlateBlueprintLibrary::STATIC_ScreenToViewport(class UObject** WorldContextObject, struct FVector2D* ScreenPosition, struct FVector2D* ViewportPosition)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.ScreenToViewport"));

	USlateBlueprintLibrary_ScreenToViewport_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ScreenPosition = ScreenPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ViewportPosition != nullptr)
		*ViewportPosition = params.ViewportPosition;
}


// Function UMG.SlateBlueprintLibrary.LocalToViewport
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FGeometry*              Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D*              LocalCoordinate                (Parm, IsPlainOldData)
// struct FVector2D               PixelPosition                  (Parm, OutParm, IsPlainOldData)
// struct FVector2D               ViewportPosition               (Parm, OutParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5CD30              		 offset:1e8cd30                       

void USlateBlueprintLibrary::STATIC_LocalToViewport(class UObject** WorldContextObject, struct FGeometry* Geometry, struct FVector2D* LocalCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.LocalToViewport"));

	USlateBlueprintLibrary_LocalToViewport_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Geometry = Geometry;
	params.LocalCoordinate = LocalCoordinate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PixelPosition != nullptr)
		*PixelPosition = params.PixelPosition;
	if (ViewportPosition != nullptr)
		*ViewportPosition = params.ViewportPosition;
}


// Function UMG.SlateBlueprintLibrary.LocalToAbsolute
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry*              Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D*              LocalCoordinate                (Parm, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5CC30              		 offset:1e8cc30                       

struct FVector2D USlateBlueprintLibrary::STATIC_LocalToAbsolute(struct FGeometry* Geometry, struct FVector2D* LocalCoordinate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.LocalToAbsolute"));

	USlateBlueprintLibrary_LocalToAbsolute_Params params;
	params.Geometry = Geometry;
	params.LocalCoordinate = LocalCoordinate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.SlateBlueprintLibrary.IsUnderLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry*              Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D*              AbsoluteCoordinate             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C990              		 offset:1e8c990                       

bool USlateBlueprintLibrary::STATIC_IsUnderLocation(struct FGeometry* Geometry, struct FVector2D* AbsoluteCoordinate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.IsUnderLocation"));

	USlateBlueprintLibrary_IsUnderLocation_Params params;
	params.Geometry = Geometry;
	params.AbsoluteCoordinate = AbsoluteCoordinate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.SlateBlueprintLibrary.GetLocalSize
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry*              Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C030              		 offset:1e8c030                       

struct FVector2D USlateBlueprintLibrary::STATIC_GetLocalSize(struct FGeometry* Geometry)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.GetLocalSize"));

	USlateBlueprintLibrary_GetLocalSize_Params params;
	params.Geometry = Geometry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush*            A                              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FSlateBrush*            B                              (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5BAB0              		 offset:1e8bab0                       

bool USlateBlueprintLibrary::STATIC_EqualEqual_SlateBrush(struct FSlateBrush* A, struct FSlateBrush* B)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush"));

	USlateBlueprintLibrary_EqualEqual_SlateBrush_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.SlateBlueprintLibrary.AbsoluteToViewport
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              AbsoluteDesktopCoordinate      (Parm, IsPlainOldData)
// struct FVector2D               PixelPosition                  (Parm, OutParm, IsPlainOldData)
// struct FVector2D               ViewportPosition               (Parm, OutParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5B3D0              		 offset:1e8b3d0                       

void USlateBlueprintLibrary::STATIC_AbsoluteToViewport(class UObject** WorldContextObject, struct FVector2D* AbsoluteDesktopCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.AbsoluteToViewport"));

	USlateBlueprintLibrary_AbsoluteToViewport_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AbsoluteDesktopCoordinate = AbsoluteDesktopCoordinate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PixelPosition != nullptr)
		*PixelPosition = params.PixelPosition;
	if (ViewportPosition != nullptr)
		*ViewportPosition = params.ViewportPosition;
}


// Function UMG.SlateBlueprintLibrary.AbsoluteToLocal
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry*              Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D*              AbsoluteCoordinate             (Parm, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5B2D0              		 offset:1e8b2d0                       

struct FVector2D USlateBlueprintLibrary::STATIC_AbsoluteToLocal(struct FGeometry* Geometry, struct FVector2D* AbsoluteCoordinate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.AbsoluteToLocal"));

	USlateBlueprintLibrary_AbsoluteToLocal_Params params;
	params.Geometry = Geometry;
	params.AbsoluteCoordinate = AbsoluteCoordinate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.UnregisterInputComponent
// (Final, Native, Protected, BlueprintCallable)
// FunctionAddress:0x00007FF719C5EA00              		 offset:1e8ea00                       

void UUserWidget::UnregisterInputComponent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.UnregisterInputComponent"));

	UUserWidget_UnregisterInputComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UUserWidget::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.Tick"));

	UUserWidget_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.StopListeningForInputAction
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FName*                  ActionName                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInputEvent>*      EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF719C5E930              		 offset:1e8e930                       

void UUserWidget::StopListeningForInputAction(struct FName* ActionName, TEnumAsByte<EInputEvent>* EventType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.StopListeningForInputAction"));

	UUserWidget_StopListeningForInputAction_Params params;
	params.ActionName = ActionName;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.StopListeningForAllInputActions
// (Final, Native, Protected, BlueprintCallable)
// FunctionAddress:0x00007FF719C5E910              		 offset:1e8e910                       

void UUserWidget::StopListeningForAllInputActions()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.StopListeningForAllInputActions"));

	UUserWidget_StopListeningForAllInputActions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.StopAnimation
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation**       InAnimation                    (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF719C5E890              		 offset:1e8e890                       

void UUserWidget::StopAnimation(class UWidgetAnimation** InAnimation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.StopAnimation"));

	UUserWidget_StopAnimation_Params params;
	params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.StopAllAnimations
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF719C5E870              		 offset:1e8e870                       

void UUserWidget::StopAllAnimations()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.StopAllAnimations"));

	UUserWidget_StopAllAnimations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.SetPositionInViewport
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D*              Position                       (Parm, IsPlainOldData)
// bool*                          bRemoveDPIScale                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF719C5E1F0              		 offset:1e8e1f0                       

void UUserWidget::SetPositionInViewport(struct FVector2D* Position, bool* bRemoveDPIScale)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetPositionInViewport"));

	UUserWidget_SetPositionInViewport_Params params;
	params.Position = Position;
	params.bRemoveDPIScale = bRemoveDPIScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.SetPlaybackSpeed
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation**       InAnimation                    (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float*                         PlaybackSpeed                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF719C5E120              		 offset:1e8e120                       

void UUserWidget::SetPlaybackSpeed(class UWidgetAnimation** InAnimation, float* PlaybackSpeed)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetPlaybackSpeed"));

	UUserWidget_SetPlaybackSpeed_Params params;
	params.InAnimation = InAnimation;
	params.PlaybackSpeed = PlaybackSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.SetPadding
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin*                InPadding                      (Parm)
// FunctionAddress:0x00007FF719C5E090              		 offset:1e8e090                       

void UUserWidget::SetPadding(struct FMargin* InPadding)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetPadding"));

	UUserWidget_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.SetOwningPlayer
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController**      LocalPlayerController          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF719C5E010              		 offset:1e8e010                       

void UUserWidget::SetOwningPlayer(class APlayerController** LocalPlayerController)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetOwningPlayer"));

	UUserWidget_SetOwningPlayer_Params params;
	params.LocalPlayerController = LocalPlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.SetOwningLocalPlayer
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class ULocalPlayer**           LocalPlayer                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF719C5DF90              		 offset:1e8df90                       

void UUserWidget::SetOwningLocalPlayer(class ULocalPlayer** LocalPlayer)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetOwningLocalPlayer"));

	UUserWidget_SetOwningLocalPlayer_Params params;
	params.LocalPlayer = LocalPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.SetNumLoopsToPlay
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation**       InAnimation                    (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           NumLoopsToPlay                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF719C5DED0              		 offset:1e8ded0                       

void UUserWidget::SetNumLoopsToPlay(class UWidgetAnimation** InAnimation, int* NumLoopsToPlay)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetNumLoopsToPlay"));

	UUserWidget_SetNumLoopsToPlay_Params params;
	params.InAnimation = InAnimation;
	params.NumLoopsToPlay = NumLoopsToPlay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.SetInputActionPriority
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int*                           NewPriority                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF719C5DD20              		 offset:1e8dd20                       

void UUserWidget::SetInputActionPriority(int* NewPriority)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetInputActionPriority"));

	UUserWidget_SetInputActionPriority_Params params;
	params.NewPriority = NewPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.SetInputActionBlocking
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool*                          bShouldBlock                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF719C5DC90              		 offset:1e8dc90                       

void UUserWidget::SetInputActionBlocking(bool* bShouldBlock)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetInputActionBlocking"));

	UUserWidget_SetInputActionBlocking_Params params;
	params.bShouldBlock = bShouldBlock;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.SetForegroundColor
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor*            InForegroundColor              (Parm)
// FunctionAddress:0x00007FF719C5DB90              		 offset:1e8db90                       

void UUserWidget::SetForegroundColor(struct FSlateColor* InForegroundColor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetForegroundColor"));

	UUserWidget_SetForegroundColor_Params params;
	params.InForegroundColor = InForegroundColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.SetDesiredSizeInViewport
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D*              Size                           (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5DB10              		 offset:1e8db10                       

void UUserWidget::SetDesiredSizeInViewport(struct FVector2D* Size)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetDesiredSizeInViewport"));

	UUserWidget_SetDesiredSizeInViewport_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.SetColorAndOpacity
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor*           InColorAndOpacity              (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5DA10              		 offset:1e8da10                       

void UUserWidget::SetColorAndOpacity(struct FLinearColor* InColorAndOpacity)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetColorAndOpacity"));

	UUserWidget_SetColorAndOpacity_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.SetAnchorsInViewport
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FAnchors*               Anchors                        (Parm)
// FunctionAddress:0x00007FF719C5D980              		 offset:1e8d980                       

void UUserWidget::SetAnchorsInViewport(struct FAnchors* Anchors)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetAnchorsInViewport"));

	UUserWidget_SetAnchorsInViewport_Params params;
	params.Anchors = Anchors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.SetAlignmentInViewport
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D*              Alignment                      (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5D840              		 offset:1e8d840                       

void UUserWidget::SetAlignmentInViewport(struct FVector2D* Alignment)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetAlignmentInViewport"));

	UUserWidget_SetAlignmentInViewport_Params params;
	params.Alignment = Alignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.ReverseAnimation
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation**       InAnimation                    (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF719C5D440              		 offset:1e8d440                       

void UUserWidget::ReverseAnimation(class UWidgetAnimation** InAnimation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.ReverseAnimation"));

	UUserWidget_ReverseAnimation_Params params;
	params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.RemoveFromViewport
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF719F4BBD0              		 offset:217bbd0                       

void UUserWidget::RemoveFromViewport()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.RemoveFromViewport"));

	UUserWidget_RemoveFromViewport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.RegisterInputComponent
// (Final, Native, Protected, BlueprintCallable)
// FunctionAddress:0x00007FF719C5D400              		 offset:1e8d400                       

void UUserWidget::RegisterInputComponent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.RegisterInputComponent"));

	UUserWidget_RegisterInputComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UUserWidget::PreConstruct(bool* IsDesignTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.PreConstruct"));

	UUserWidget_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.PlaySound
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase**             SoundToPlay                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF719C5D380              		 offset:1e8d380                       

void UUserWidget::PlaySound(class USoundBase** SoundToPlay)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.PlaySound"));

	UUserWidget_PlaySound_Params params;
	params.SoundToPlay = SoundToPlay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.PlayAnimationTo
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation**       InAnimation                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float*                         StartAtTime                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         EndAtTime                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           NumLoopsToPlay                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUMGSequencePlayMode>* PlayMode                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         PlaybackSpeed                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF719C5D1D0              		 offset:1e8d1d0                       

void UUserWidget::PlayAnimationTo(class UWidgetAnimation** InAnimation, float* StartAtTime, float* EndAtTime, int* NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode>* PlayMode, float* PlaybackSpeed)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.PlayAnimationTo"));

	UUserWidget_PlayAnimationTo_Params params;
	params.InAnimation = InAnimation;
	params.StartAtTime = StartAtTime;
	params.EndAtTime = EndAtTime;
	params.NumLoopsToPlay = NumLoopsToPlay;
	params.PlayMode = PlayMode;
	params.PlaybackSpeed = PlaybackSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.PlayAnimation
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation**       InAnimation                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float*                         StartAtTime                    (Parm, ZeroConstructor, IsPlainOldData)
// int*                           NumLoopsToPlay                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUMGSequencePlayMode>* PlayMode                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         PlaybackSpeed                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF719C5D040              		 offset:1e8d040                       

void UUserWidget::PlayAnimation(class UWidgetAnimation** InAnimation, float* StartAtTime, int* NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode>* PlayMode, float* PlaybackSpeed)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.PlayAnimation"));

	UUserWidget_PlayAnimation_Params params;
	params.InAnimation = InAnimation;
	params.StartAtTime = StartAtTime;
	params.NumLoopsToPlay = NumLoopsToPlay;
	params.PlayMode = PlayMode;
	params.PlaybackSpeed = PlaybackSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.PauseAnimation
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation**       InAnimation                    (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5CFA0              		 offset:1e8cfa0                       

float UUserWidget::PauseAnimation(class UWidgetAnimation** InAnimation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.PauseAnimation"));

	UUserWidget_PauseAnimation_Params params;
	params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          InTouchEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

struct FEventReply UUserWidget::OnTouchStarted(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnTouchStarted"));

	UUserWidget_OnTouchStarted_Params params;
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnTouchMoved
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          InTouchEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

struct FEventReply UUserWidget::OnTouchMoved(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnTouchMoved"));

	UUserWidget_OnTouchMoved_Params params;
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnTouchGesture
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          GestureEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

struct FEventReply UUserWidget::OnTouchGesture(struct FGeometry* MyGeometry, struct FPointerEvent* GestureEvent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnTouchGesture"));

	UUserWidget_OnTouchGesture_Params params;
	params.MyGeometry = MyGeometry;
	params.GestureEvent = GestureEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnTouchEnded
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          InTouchEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

struct FEventReply UUserWidget::OnTouchEnded(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnTouchEnded"));

	UUserWidget_OnTouchEnded_Params params;
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

struct FEventReply UUserWidget::OnPreviewMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnPreviewMouseButtonDown"));

	UUserWidget_OnPreviewMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnPreviewKeyDown
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

struct FEventReply UUserWidget::OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnPreviewKeyDown"));

	UUserWidget_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext           Context                        (Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UUserWidget::OnPaint(struct FPaintContext* Context)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnPaint"));

	UUserWidget_OnPaint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function UMG.UserWidget.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

struct FEventReply UUserWidget::OnMouseWheel(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnMouseWheel"));

	UUserWidget_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

struct FEventReply UUserWidget::OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnMouseMove"));

	UUserWidget_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UUserWidget::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnMouseLeave"));

	UUserWidget_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UUserWidget::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnMouseEnter"));

	UUserWidget_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

struct FEventReply UUserWidget::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnMouseButtonUp"));

	UUserWidget_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

struct FEventReply UUserWidget::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnMouseButtonDown"));

	UUserWidget_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              InMyGeometry                   (Parm, IsPlainOldData)
// struct FPointerEvent*          InMouseEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

struct FEventReply UUserWidget::OnMouseButtonDoubleClick(struct FGeometry* InMyGeometry, struct FPointerEvent* InMouseEvent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnMouseButtonDoubleClick"));

	UUserWidget_OnMouseButtonDoubleClick_Params params;
	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnMotionDetected
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FMotionEvent*           InMotionEvent                  (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

struct FEventReply UUserWidget::OnMotionDetected(struct FGeometry* MyGeometry, struct FMotionEvent* InMotionEvent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnMotionDetected"));

	UUserWidget_OnMotionDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.InMotionEvent = InMotionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnKeyUp
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

struct FEventReply UUserWidget::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnKeyUp"));

	UUserWidget_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnKeyDown
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

struct FEventReply UUserWidget::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnKeyDown"));

	UUserWidget_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnKeyChar
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FCharacterEvent*        InCharacterEvent               (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

struct FEventReply UUserWidget::OnKeyChar(struct FGeometry* MyGeometry, struct FCharacterEvent* InCharacterEvent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnKeyChar"));

	UUserWidget_OnKeyChar_Params params;
	params.MyGeometry = MyGeometry;
	params.InCharacterEvent = InCharacterEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnFocusReceived
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

struct FEventReply UUserWidget::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnFocusReceived"));

	UUserWidget_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (Parm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UUserWidget::OnFocusLost(struct FFocusEvent* InFocusEvent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnFocusLost"));

	UUserWidget_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.OnDrop
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (Parm)
// class UDragDropOperation**     Operation                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

bool UUserWidget::OnDrop(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnDrop"));

	UUserWidget_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnDragOver
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (Parm)
// class UDragDropOperation**     Operation                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

bool UUserWidget::OnDragOver(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnDragOver"));

	UUserWidget_OnDragOver_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnDragLeave
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (Parm)
// class UDragDropOperation**     Operation                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UUserWidget::OnDragLeave(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnDragLeave"));

	UUserWidget_OnDragLeave_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.OnDragEnter
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (Parm)
// class UDragDropOperation**     Operation                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UUserWidget::OnDragEnter(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnDragEnter"));

	UUserWidget_OnDragEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UUserWidget::OnDragDetected(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnDragDetected"));

	UUserWidget_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function UMG.UserWidget.OnDragCancelled
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// class UDragDropOperation**     Operation                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UUserWidget::OnDragCancelled(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnDragCancelled"));

	UUserWidget_OnDragCancelled_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.OnControllerButtonReleased
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FControllerEvent*       ControllerEvent                (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

struct FEventReply UUserWidget::OnControllerButtonReleased(struct FGeometry* MyGeometry, struct FControllerEvent* ControllerEvent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnControllerButtonReleased"));

	UUserWidget_OnControllerButtonReleased_Params params;
	params.MyGeometry = MyGeometry;
	params.ControllerEvent = ControllerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnControllerButtonPressed
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FControllerEvent*       ControllerEvent                (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

struct FEventReply UUserWidget::OnControllerButtonPressed(struct FGeometry* MyGeometry, struct FControllerEvent* ControllerEvent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnControllerButtonPressed"));

	UUserWidget_OnControllerButtonPressed_Params params;
	params.MyGeometry = MyGeometry;
	params.ControllerEvent = ControllerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnControllerAnalogValueChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FControllerEvent*       ControllerEvent                (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

struct FEventReply UUserWidget::OnControllerAnalogValueChanged(struct FGeometry* MyGeometry, struct FControllerEvent* ControllerEvent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnControllerAnalogValueChanged"));

	UUserWidget_OnControllerAnalogValueChanged_Params params;
	params.MyGeometry = MyGeometry;
	params.ControllerEvent = ControllerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnAnimationStarted
// (BlueprintCosmetic, Native, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF71A6D62C0              		 offset:29062c0                       

void UUserWidget::OnAnimationStarted(class UWidgetAnimation** Animation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnAnimationStarted"));

	UUserWidget_OnAnimationStarted_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.OnAnimationFinished
// (BlueprintCosmetic, Native, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF719C5CF10              		 offset:1e8cf10                       

void UUserWidget::OnAnimationFinished(class UWidgetAnimation** Animation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnAnimationFinished"));

	UUserWidget_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.OnAnalogValueChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FAnalogInputEvent*      InAnalogInputEvent             (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

struct FEventReply UUserWidget::OnAnalogValueChanged(struct FGeometry* MyGeometry, struct FAnalogInputEvent* InAnalogInputEvent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnAnalogValueChanged"));

	UUserWidget_OnAnalogValueChanged_Params params;
	params.MyGeometry = MyGeometry;
	params.InAnalogInputEvent = InAnalogInputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.ListenForInputAction
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FName*                  ActionName                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInputEvent>*      EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bConsume                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate*        Callback                       (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF719C5CAC0              		 offset:1e8cac0                       

void UUserWidget::ListenForInputAction(struct FName* ActionName, TEnumAsByte<EInputEvent>* EventType, bool* bConsume, struct FScriptDelegate* Callback)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.ListenForInputAction"));

	UUserWidget_ListenForInputAction_Params params;
	params.ActionName = ActionName;
	params.EventType = EventType;
	params.bConsume = bConsume;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.IsPlayingAnimation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C960              		 offset:1e8c960                       

bool UUserWidget::IsPlayingAnimation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.IsPlayingAnimation"));

	UUserWidget_IsPlayingAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.IsListeningForInputAction
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  ActionName                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C8D0              		 offset:1e8c8d0                       

bool UUserWidget::IsListeningForInputAction(struct FName* ActionName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.IsListeningForInputAction"));

	UUserWidget_IsListeningForInputAction_Params params;
	params.ActionName = ActionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.IsInViewport
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5BFC0              		 offset:1e8bfc0                       

bool UUserWidget::IsInViewport()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.IsInViewport"));

	UUserWidget_IsInViewport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.IsInteractable
// (BlueprintCosmetic, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

bool UUserWidget::IsInteractable()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.IsInteractable"));

	UUserWidget_IsInteractable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.IsAnyAnimationPlaying
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C870              		 offset:1e8c870                       

bool UUserWidget::IsAnyAnimationPlaying()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.IsAnyAnimationPlaying"));

	UUserWidget_IsAnyAnimationPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.IsAnimationPlaying
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidgetAnimation**       InAnimation                    (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C7E0              		 offset:1e8c7e0                       

bool UUserWidget::IsAnimationPlaying(class UWidgetAnimation** InAnimation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.IsAnimationPlaying"));

	UUserWidget_IsAnimationPlaying_Params params;
	params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.GetOwningPlayerPawn
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C150              		 offset:1e8c150                       

class APawn* UUserWidget::GetOwningPlayerPawn()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.GetOwningPlayerPawn"));

	UUserWidget_GetOwningPlayerPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.GetOwningPlayer
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C120              		 offset:1e8c120                       

class APlayerController* UUserWidget::GetOwningPlayer()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.GetOwningPlayer"));

	UUserWidget_GetOwningPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.GetOwningLocalPlayer
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULocalPlayer*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C0F0              		 offset:1e8c0f0                       

class ULocalPlayer* UUserWidget::GetOwningLocalPlayer()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.GetOwningLocalPlayer"));

	UUserWidget_GetOwningLocalPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.GetIsVisible
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5BFC0              		 offset:1e8bfc0                       

bool UUserWidget::GetIsVisible()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.GetIsVisible"));

	UUserWidget_GetIsVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.GetAnimationCurrentTime
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidgetAnimation**       InAnimation                    (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5BE70              		 offset:1e8be70                       

float UUserWidget::GetAnimationCurrentTime(class UWidgetAnimation** InAnimation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.GetAnimationCurrentTime"));

	UUserWidget_GetAnimationCurrentTime_Params params;
	params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.GetAnchorsInViewport
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAnchors                ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF719C5BE30              		 offset:1e8be30                       

struct FAnchors UUserWidget::GetAnchorsInViewport()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.GetAnchorsInViewport"));

	UUserWidget_GetAnchorsInViewport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.GetAlignmentInViewport
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5BDF0              		 offset:1e8bdf0                       

struct FVector2D UUserWidget::GetAlignmentInViewport()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.GetAlignmentInViewport"));

	UUserWidget_GetAlignmentInViewport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG.UserWidget.FinishStoppedSequencePlayers
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF719C5BD20              		 offset:1e8bd20                       

void UUserWidget::FinishStoppedSequencePlayers()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.FinishStoppedSequencePlayers"));

	UUserWidget_FinishStoppedSequencePlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UUserWidget::Destruct()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.Destruct"));

	UUserWidget_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UUserWidget::Construct()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.Construct"));

	UUserWidget_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.AddToViewport
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// int*                           ZOrder                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF719C5B5B0              		 offset:1e8b5b0                       

void UUserWidget::AddToViewport(int* ZOrder)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.AddToViewport"));

	UUserWidget_AddToViewport_Params params;
	params.ZOrder = ZOrder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG.UserWidget.AddToPlayerScreen
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// int*                           ZOrder                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5B520              		 offset:1e8b520                       

bool UUserWidget::AddToPlayerScreen(int* ZOrder)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.AddToPlayerScreen"));

	UUserWidget_AddToPlayerScreen_Params params;
	params.ZOrder = ZOrder;

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
