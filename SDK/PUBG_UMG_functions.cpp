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

<<<<<<< HEAD
// Function UMG.BackgroundBlurSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment>* InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862BFE0              		 offset:85bfe0                        

void UBackgroundBlurSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment>* InVerticalAlignment)
=======
// Function UMG.AsyncTaskDownloadImage.DownloadImage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)
// class UAsyncTaskDownloadImage* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708BF50              		 offset:6cbf50                        

class UAsyncTaskDownloadImage* UAsyncTaskDownloadImage::STATIC_DownloadImage(const struct FString& URL)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BackgroundBlurSlot.SetVerticalAlignment"));

	UBackgroundBlurSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.AsyncTaskDownloadImage.DownloadImage"));

	UAsyncTaskDownloadImage_DownloadImage_Params params;
	params.URL = URL;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.BackgroundBlurSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin*                InPadding                      (Parm)
// FunctionAddress:0x00007FF71862A120              		 offset:85a120                        

void UBackgroundBlurSlot::SetPadding(struct FMargin* InPadding)
=======

	return params.ReturnValue;
}


// Function UMG.DragDropOperation.Drop
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF6D708C2A0              		 offset:6cc2a0                        

void UDragDropOperation::Drop(const struct FPointerEvent& PointerEvent)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BackgroundBlurSlot.SetPadding"));

	UBackgroundBlurSlot_SetPadding_Params params;
	params.InPadding = InPadding;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.DragDropOperation.Drop"));

	UDragDropOperation_Drop_Params params;
	params.PointerEvent = PointerEvent;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.BackgroundBlurSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718627D70              		 offset:857d70                        

void UBackgroundBlurSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment)
=======
// Function UMG.DragDropOperation.Dragged
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF6D708C170              		 offset:6cc170                        

void UDragDropOperation::Dragged(const struct FPointerEvent& PointerEvent)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BackgroundBlurSlot.SetHorizontalAlignment"));

	UBackgroundBlurSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.DragDropOperation.Dragged"));

	UDragDropOperation_Dragged_Params params;
	params.PointerEvent = PointerEvent;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.BorderSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment>* InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862C0E0              		 offset:85c0e0                        

void UBorderSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment>* InVerticalAlignment)
=======
// Function UMG.DragDropOperation.DragCancelled
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF6D708C040              		 offset:6cc040                        

void UDragDropOperation::DragCancelled(const struct FPointerEvent& PointerEvent)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BorderSlot.SetVerticalAlignment"));

	UBorderSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.DragDropOperation.DragCancelled"));

	UDragDropOperation_DragCancelled_Params params;
	params.PointerEvent = PointerEvent;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.BorderSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin*                InPadding                      (Parm)
// FunctionAddress:0x00007FF71862A240              		 offset:85a240                        

void UBorderSlot::SetPadding(struct FMargin* InPadding)
=======
// Function UMG.BoolBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708CC40              		 offset:6ccc40                        

bool UBoolBinding::GetValue()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BorderSlot.SetPadding"));

	UBorderSlot_SetPadding_Params params;
	params.InPadding = InPadding;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BoolBinding.GetValue"));

	UBoolBinding_GetValue_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.BorderSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718627E70              		 offset:857e70                        

void UBorderSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment)
=======

	return params.ReturnValue;
}


// Function UMG.BrushBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D708CC70              		 offset:6ccc70                        

struct FSlateBrush UBrushBinding::GetValue()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BorderSlot.SetHorizontalAlignment"));

	UBorderSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BrushBinding.GetValue"));

	UBrushBinding_GetValue_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.ButtonSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment>* InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862C2E0              		 offset:85c2e0                        

void UButtonSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment>* InVerticalAlignment)
=======

	return params.ReturnValue;
}


// Function UMG.CheckedStateBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// ECheckBoxState                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708CD80              		 offset:6ccd80                        

ECheckBoxState UCheckedStateBinding::GetValue()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ButtonSlot.SetVerticalAlignment"));

	UButtonSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CheckedStateBinding.GetValue"));

	UCheckedStateBinding_GetValue_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.ButtonSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin*                InPadding                      (Parm)
// FunctionAddress:0x00007FF71862A2D0              		 offset:85a2d0                        

void UButtonSlot::SetPadding(struct FMargin* InPadding)
=======

	return params.ReturnValue;
}


// Function UMG.ColorBinding.GetSlateValue
// (Final, Native, Public, Const)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D708CAA0              		 offset:6ccaa0                        

struct FSlateColor UColorBinding::GetSlateValue()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ButtonSlot.SetPadding"));

	UButtonSlot_SetPadding_Params params;
	params.InPadding = InPadding;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ColorBinding.GetSlateValue"));

	UColorBinding_GetSlateValue_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.ButtonSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718627EF0              		 offset:857ef0                        

void UButtonSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment)
=======

	return params.ReturnValue;
}


// Function UMG.ColorBinding.GetLinearValue
// (Final, Native, Public, HasDefaults, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708C8E0              		 offset:6cc8e0                        

struct FLinearColor UColorBinding::GetLinearValue()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ButtonSlot.SetHorizontalAlignment"));

	UButtonSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ColorBinding.GetLinearValue"));

	UColorBinding_GetLinearValue_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.CanvasPanelSlot.SetZOrder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           InZOrder                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862C890              		 offset:85c890                        

void UCanvasPanelSlot::SetZOrder(int* InZOrder)
=======

	return params.ReturnValue;
}


// Function UMG.FloatBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708CDB0              		 offset:6ccdb0                        

float UFloatBinding::GetValue()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.SetZOrder"));

	UCanvasPanelSlot_SetZOrder_Params params;
	params.InZOrder = InZOrder;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.FloatBinding.GetValue"));

	UFloatBinding_GetValue_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.CanvasPanelSlot.SetSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D*              InSize                         (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF71862B090              		 offset:85b090                        

void UCanvasPanelSlot::SetSize(struct FVector2D* InSize)
=======

	return params.ReturnValue;
}


// Function UMG.Int32Binding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708CDE0              		 offset:6ccde0                        

int UInt32Binding::GetValue()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.SetSize"));

	UCanvasPanelSlot_SetSize_Params params;
	params.InSize = InSize;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Int32Binding.GetValue"));

	UInt32Binding_GetValue_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.CanvasPanelSlot.SetPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D*              InPosition                     (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF71862AA90              		 offset:85aa90                        

void UCanvasPanelSlot::SetPosition(struct FVector2D* InPosition)
=======

	return params.ReturnValue;
}


// Function UMG.MouseCursorBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// TEnumAsByte<EMouseCursor>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708CE10              		 offset:6cce10                        

TEnumAsByte<EMouseCursor> UMouseCursorBinding::GetValue()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.SetPosition"));

	UCanvasPanelSlot_SetPosition_Params params;
	params.InPosition = InPosition;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MouseCursorBinding.GetValue"));

	UMouseCursorBinding_GetValue_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.CanvasPanelSlot.SetOffsets
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin*                InOffset                       (Parm)
// FunctionAddress:0x00007FF718629E80              		 offset:859e80                        

void UCanvasPanelSlot::SetOffsets(struct FMargin* InOffset)
=======

	return params.ReturnValue;
}


// Function UMG.TextBinding.GetTextValue
// (Final, Native, Public, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D708CBB0              		 offset:6ccbb0                        

struct FText UTextBinding::GetTextValue()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.SetOffsets"));

	UCanvasPanelSlot_SetOffsets_Params params;
	params.InOffset = InOffset;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBinding.GetTextValue"));

	UTextBinding_GetTextValue_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.CanvasPanelSlot.SetMinimum
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector2D*              InMinimumAnchors               (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF718629B60              		 offset:859b60                        

void UCanvasPanelSlot::SetMinimum(struct FVector2D* InMinimumAnchors)
=======

	return params.ReturnValue;
}


// Function UMG.TextBinding.GetStringValue
// (Final, Native, Public, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6D708CB20              		 offset:6ccb20                        

struct FString UTextBinding::GetStringValue()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.SetMinimum"));

	UCanvasPanelSlot_SetMinimum_Params params;
	params.InMinimumAnchors = InMinimumAnchors;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBinding.GetStringValue"));

	UTextBinding_GetStringValue_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.CanvasPanelSlot.SetMaximum
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector2D*              InMaximumAnchors               (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF718629760              		 offset:859760                        

void UCanvasPanelSlot::SetMaximum(struct FVector2D* InMaximumAnchors)
=======

	return params.ReturnValue;
}


// Function UMG.VisibilityBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708CE40              		 offset:6cce40                        

ESlateVisibility UVisibilityBinding::GetValue()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.SetMaximum"));

	UCanvasPanelSlot_SetMaximum_Params params;
	params.InMaximumAnchors = InMaximumAnchors;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.VisibilityBinding.GetValue"));

	UVisibilityBinding_GetValue_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.CanvasPanelSlot.SetLayout
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAnchorData*            InLayoutData                   (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF718629250              		 offset:859250                        

void UCanvasPanelSlot::SetLayout(struct FAnchorData* InLayoutData)
=======

	return params.ReturnValue;
}


// Function UMG.WidgetBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6D708CE70              		 offset:6cce70                        

class UWidget* UWidgetBinding::GetValue()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.SetLayout"));

	UCanvasPanelSlot_SetLayout_Params params;
	params.InLayoutData = InLayoutData;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBinding.GetValue"));

	UWidgetBinding_GetValue_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.CanvasPanelSlot.SetAutoSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          InbAutoSize                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718625E90              		 offset:855e90                        

void UCanvasPanelSlot::SetAutoSize(bool* InbAutoSize)
=======

	return params.ReturnValue;
}


// Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FGeometry               Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               ScreenPosition                 (Parm, IsPlainOldData)
// struct FVector2D               LocalCoordinate                (Parm, OutParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708E070              		 offset:6ce070                        

void USlateBlueprintLibrary::STATIC_ScreenToWidgetLocal(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& ScreenPosition, struct FVector2D* LocalCoordinate)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.SetAutoSize"));

	UCanvasPanelSlot_SetAutoSize_Params params;
	params.InbAutoSize = InbAutoSize;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal"));

	USlateBlueprintLibrary_ScreenToWidgetLocal_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Geometry = Geometry;
	params.ScreenPosition = ScreenPosition;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.CanvasPanelSlot.SetAnchors
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FAnchors*               InAnchors                      (Parm)
// FunctionAddress:0x00007FF718625BC0              		 offset:855bc0                        

void UCanvasPanelSlot::SetAnchors(struct FAnchors* InAnchors)
=======

	if (LocalCoordinate != nullptr)
		*LocalCoordinate = params.LocalCoordinate;
}


// Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ScreenPosition                 (Parm, IsPlainOldData)
// struct FVector2D               AbsoluteCoordinate             (Parm, OutParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708DF70              		 offset:6cdf70                        

void USlateBlueprintLibrary::STATIC_ScreenToWidgetAbsolute(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* AbsoluteCoordinate)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.SetAnchors"));

	UCanvasPanelSlot_SetAnchors_Params params;
	params.InAnchors = InAnchors;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute"));

	USlateBlueprintLibrary_ScreenToWidgetAbsolute_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ScreenPosition = ScreenPosition;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.CanvasPanelSlot.SetAlignment
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D*              InAlignment                    (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF718625AB0              		 offset:855ab0                        

void UCanvasPanelSlot::SetAlignment(struct FVector2D* InAlignment)
=======

	if (AbsoluteCoordinate != nullptr)
		*AbsoluteCoordinate = params.AbsoluteCoordinate;
}


// Function UMG.SlateBlueprintLibrary.ScreenToViewport
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ScreenPosition                 (Parm, IsPlainOldData)
// struct FVector2D               ViewportPosition               (Parm, OutParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708DE70              		 offset:6cde70                        

void USlateBlueprintLibrary::STATIC_ScreenToViewport(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* ViewportPosition)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.SetAlignment"));

	UCanvasPanelSlot_SetAlignment_Params params;
	params.InAlignment = InAlignment;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.ScreenToViewport"));

	USlateBlueprintLibrary_ScreenToViewport_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ScreenPosition = ScreenPosition;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.CanvasPanelSlot.GetZOrder
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718624100              		 offset:854100                        

int UCanvasPanelSlot::GetZOrder()
=======

	if (ViewportPosition != nullptr)
		*ViewportPosition = params.ViewportPosition;
}


// Function UMG.SlateBlueprintLibrary.LocalToViewport
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FGeometry               Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               LocalCoordinate                (Parm, IsPlainOldData)
// struct FVector2D               PixelPosition                  (Parm, OutParm, IsPlainOldData)
// struct FVector2D               ViewportPosition               (Parm, OutParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708D650              		 offset:6cd650                        

void USlateBlueprintLibrary::STATIC_LocalToViewport(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.GetZOrder"));

	UCanvasPanelSlot_GetZOrder_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.LocalToViewport"));

	USlateBlueprintLibrary_LocalToViewport_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Geometry = Geometry;
	params.LocalCoordinate = LocalCoordinate;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

<<<<<<< HEAD
	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.GetSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718623B60              		 offset:853b60                        

struct FVector2D UCanvasPanelSlot::GetSize()
=======
	if (PixelPosition != nullptr)
		*PixelPosition = params.PixelPosition;
	if (ViewportPosition != nullptr)
		*ViewportPosition = params.ViewportPosition;
}


// Function UMG.SlateBlueprintLibrary.LocalToAbsolute
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry               Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               LocalCoordinate                (Parm, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708D550              		 offset:6cd550                        

struct FVector2D USlateBlueprintLibrary::STATIC_LocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.GetSize"));

	UCanvasPanelSlot_GetSize_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.LocalToAbsolute"));

	USlateBlueprintLibrary_LocalToAbsolute_Params params;
	params.Geometry = Geometry;
	params.LocalCoordinate = LocalCoordinate;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.CanvasPanelSlot.GetPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7186238A0              		 offset:8538a0                        

struct FVector2D UCanvasPanelSlot::GetPosition()
=======
// Function UMG.SlateBlueprintLibrary.IsUnderLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry               Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               AbsoluteCoordinate             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708D2B0              		 offset:6cd2b0                        

bool USlateBlueprintLibrary::STATIC_IsUnderLocation(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.GetPosition"));

	UCanvasPanelSlot_GetPosition_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.IsUnderLocation"));

	USlateBlueprintLibrary_IsUnderLocation_Params params;
	params.Geometry = Geometry;
	params.AbsoluteCoordinate = AbsoluteCoordinate;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.CanvasPanelSlot.GetOffsets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMargin                 ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718623720              		 offset:853720                        

struct FMargin UCanvasPanelSlot::GetOffsets()
=======
// Function UMG.SlateBlueprintLibrary.GetLocalSize
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry               Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708C920              		 offset:6cc920                        

struct FVector2D USlateBlueprintLibrary::STATIC_GetLocalSize(const struct FGeometry& Geometry)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.GetOffsets"));

	UCanvasPanelSlot_GetOffsets_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.GetLocalSize"));

	USlateBlueprintLibrary_GetLocalSize_Params params;
	params.Geometry = Geometry;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.CanvasPanelSlot.GetLayout
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAnchorData             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718623450              		 offset:853450                        

struct FAnchorData UCanvasPanelSlot::GetLayout()
=======
// Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush             A                              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FSlateBrush             B                              (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708C3D0              		 offset:6cc3d0                        

bool USlateBlueprintLibrary::STATIC_EqualEqual_SlateBrush(const struct FSlateBrush& A, const struct FSlateBrush& B)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.GetLayout"));

	UCanvasPanelSlot_GetLayout_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush"));

	USlateBlueprintLibrary_EqualEqual_SlateBrush_Params params;
	params.A = A;
	params.B = B;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.CanvasPanelSlot.GetAutoSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7186222A0              		 offset:8522a0                        

bool UCanvasPanelSlot::GetAutoSize()
=======
// Function UMG.SlateBlueprintLibrary.AbsoluteToViewport
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               AbsoluteDesktopCoordinate      (Parm, IsPlainOldData)
// struct FVector2D               PixelPosition                  (Parm, OutParm, IsPlainOldData)
// struct FVector2D               ViewportPosition               (Parm, OutParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708BCF0              		 offset:6cbcf0                        

void USlateBlueprintLibrary::STATIC_AbsoluteToViewport(class UObject* WorldContextObject, const struct FVector2D& AbsoluteDesktopCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.GetAutoSize"));

	UCanvasPanelSlot_GetAutoSize_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.AbsoluteToViewport"));

	USlateBlueprintLibrary_AbsoluteToViewport_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AbsoluteDesktopCoordinate = AbsoluteDesktopCoordinate;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

<<<<<<< HEAD
	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.GetAnchors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAnchors                ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718622260              		 offset:852260                        

struct FAnchors UCanvasPanelSlot::GetAnchors()
=======
	if (PixelPosition != nullptr)
		*PixelPosition = params.PixelPosition;
	if (ViewportPosition != nullptr)
		*ViewportPosition = params.ViewportPosition;
}


// Function UMG.SlateBlueprintLibrary.AbsoluteToLocal
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry               Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               AbsoluteCoordinate             (Parm, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708BBF0              		 offset:6cbbf0                        

struct FVector2D USlateBlueprintLibrary::STATIC_AbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.GetAnchors"));

	UCanvasPanelSlot_GetAnchors_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.AbsoluteToLocal"));

	USlateBlueprintLibrary_AbsoluteToLocal_Params params;
	params.Geometry = Geometry;
	params.AbsoluteCoordinate = AbsoluteCoordinate;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.CanvasPanelSlot.GetAlignment
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718621F40              		 offset:851f40                        

struct FVector2D UCanvasPanelSlot::GetAlignment()
=======
// Function UMG.Widget.SetVisibility
// (Native, Public, BlueprintCallable)
// Parameters:
// ESlateVisibility               InVisibility                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D708F1A0              		 offset:6cf1a0                        

void UWidget::SetVisibility(ESlateVisibility InVisibility)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.GetAlignment"));

	UCanvasPanelSlot_GetAlignment_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetVisibility"));

	UWidget_SetVisibility_Params params;
	params.InVisibility = InVisibility;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.GridSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment>* InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862C160              		 offset:85c160                        

void UGridSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment>* InVerticalAlignment)
=======
}


// Function UMG.Widget.SetUserFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D708F120              		 offset:6cf120                        

void UWidget::SetUserFocus(class APlayerController* PlayerController)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.GridSlot.SetVerticalAlignment"));

	UGridSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetUserFocus"));

	UWidget_SetUserFocus_Params params;
	params.PlayerController = PlayerController;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.GridSlot.SetRowSpan
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           InRowSpan                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862AC90              		 offset:85ac90                        

void UGridSlot::SetRowSpan(int* InRowSpan)
=======
// Function UMG.Widget.SetToolTipText
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   InToolTipText                  (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF6D708F040              		 offset:6cf040                        

void UWidget::SetToolTipText(const struct FText& InToolTipText)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.GridSlot.SetRowSpan"));

	UGridSlot_SetRowSpan_Params params;
	params.InRowSpan = InRowSpan;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetToolTipText"));

	UWidget_SetToolTipText_Params params;
	params.InToolTipText = InToolTipText;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.GridSlot.SetRow
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           InRow                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862AB90              		 offset:85ab90                        

void UGridSlot::SetRow(int* InRow)
=======
// Function UMG.Widget.SetToolTip
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6D708EFC0              		 offset:6cefc0                        

void UWidget::SetToolTip(class UWidget* Widget)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.GridSlot.SetRow"));

	UGridSlot_SetRow_Params params;
	params.InRow = InRow;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetToolTip"));

	UWidget_SetToolTip_Params params;
	params.Widget = Widget;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.GridSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin*                InPadding                      (Parm)
// FunctionAddress:0x00007FF71862A360              		 offset:85a360                        

void UGridSlot::SetPadding(struct FMargin* InPadding)
=======
// Function UMG.Widget.SetRenderTranslation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               Translation                    (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708EF40              		 offset:6cef40                        

void UWidget::SetRenderTranslation(const struct FVector2D& Translation)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.GridSlot.SetPadding"));

	UGridSlot_SetPadding_Params params;
	params.InPadding = InPadding;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetRenderTranslation"));

	UWidget_SetRenderTranslation_Params params;
	params.Translation = Translation;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.GridSlot.SetLayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           InLayer                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7186291D0              		 offset:8591d0                        

void UGridSlot::SetLayer(int* InLayer)
=======
// Function UMG.Widget.SetRenderTransformPivot
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               Pivot                          (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708EEC0              		 offset:6ceec0                        

void UWidget::SetRenderTransformPivot(const struct FVector2D& Pivot)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.GridSlot.SetLayer"));

	UGridSlot_SetLayer_Params params;
	params.InLayer = InLayer;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetRenderTransformPivot"));

	UWidget_SetRenderTransformPivot_Params params;
	params.Pivot = Pivot;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.GridSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718627F70              		 offset:857f70                        

void UGridSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment)
=======
// Function UMG.Widget.SetRenderTransform
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FWidgetTransform        InTransform                    (Parm)
// FunctionAddress:0x00007FF6D708EDE0              		 offset:6cede0                        

void UWidget::SetRenderTransform(const struct FWidgetTransform& InTransform)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.GridSlot.SetHorizontalAlignment"));

	UGridSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetRenderTransform"));

	UWidget_SetRenderTransform_Params params;
	params.InTransform = InTransform;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.GridSlot.SetColumnSpan
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           InColumnSpan                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718627050              		 offset:857050                        

void UGridSlot::SetColumnSpan(int* InColumnSpan)
=======
// Function UMG.Widget.SetRenderShear
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               Shear                          (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708ED60              		 offset:6ced60                        

void UWidget::SetRenderShear(const struct FVector2D& Shear)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.GridSlot.SetColumnSpan"));

	UGridSlot_SetColumnSpan_Params params;
	params.InColumnSpan = InColumnSpan;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetRenderShear"));

	UWidget_SetRenderShear_Params params;
	params.Shear = Shear;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.GridSlot.SetColumn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           InColumn                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718626F50              		 offset:856f50                        

void UGridSlot::SetColumn(int* InColumn)
=======
// Function UMG.Widget.SetRenderScale
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               Scale                          (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708ECE0              		 offset:6cece0                        

void UWidget::SetRenderScale(const struct FVector2D& Scale)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.GridSlot.SetColumn"));

	UGridSlot_SetColumn_Params params;
	params.InColumn = InColumn;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetRenderScale"));

	UWidget_SetRenderScale_Params params;
	params.Scale = Scale;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.HorizontalBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment>* InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862C1E0              		 offset:85c1e0                        

void UHorizontalBoxSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment>* InVerticalAlignment)
=======
// Function UMG.Widget.SetRenderAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Angle                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D708EC60              		 offset:6cec60                        

void UWidget::SetRenderAngle(float Angle)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.HorizontalBoxSlot.SetVerticalAlignment"));

	UHorizontalBoxSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetRenderAngle"));

	UWidget_SetRenderAngle_Params params;
	params.Angle = Angle;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.HorizontalBoxSlot.SetSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateChildSize*        InSize                         (Parm)
// FunctionAddress:0x00007FF71862B110              		 offset:85b110                        

void UHorizontalBoxSlot::SetSize(struct FSlateChildSize* InSize)
=======
// Function UMG.Widget.SetNavigationRule
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EUINavigation                  Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// EUINavigationRule              Rule                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   WidgetToFocus                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D708E770              		 offset:6ce770                        

void UWidget::SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, const struct FName& WidgetToFocus)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.HorizontalBoxSlot.SetSize"));

	UHorizontalBoxSlot_SetSize_Params params;
	params.InSize = InSize;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetNavigationRule"));

	UWidget_SetNavigationRule_Params params;
	params.Direction = Direction;
	params.Rule = Rule;
	params.WidgetToFocus = WidgetToFocus;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.HorizontalBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin*                InPadding                      (Parm)
// FunctionAddress:0x00007FF71862A3F0              		 offset:85a3f0                        

void UHorizontalBoxSlot::SetPadding(struct FMargin* InPadding)
=======
// Function UMG.Widget.SetKeyboardFocus
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D708E750              		 offset:6ce750                        

void UWidget::SetKeyboardFocus()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.HorizontalBoxSlot.SetPadding"));

	UHorizontalBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetKeyboardFocus"));

	UWidget_SetKeyboardFocus_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.HorizontalBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718627FF0              		 offset:857ff0                        

void UHorizontalBoxSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment)
=======
// Function UMG.Widget.SetIsEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInIsEnabled                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8AC9110              		 offset:2109110                       

void UWidget::SetIsEnabled(bool bInIsEnabled)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.HorizontalBoxSlot.SetHorizontalAlignment"));

	UHorizontalBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetIsEnabled"));

	UWidget_SetIsEnabled_Params params;
	params.bInIsEnabled = bInIsEnabled;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.OverlaySlot.SetZOrder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           InZOrder                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862C910              		 offset:85c910                        

void UOverlaySlot::SetZOrder(int* InZOrder)
=======
// Function UMG.Widget.SetCursor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EMouseCursor>      InCursor                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D708E440              		 offset:6ce440                        

void UWidget::SetCursor(TEnumAsByte<EMouseCursor> InCursor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.OverlaySlot.SetZOrder"));

	UOverlaySlot_SetZOrder_Params params;
	params.InZOrder = InZOrder;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetCursor"));

	UWidget_SetCursor_Params params;
	params.InCursor = InCursor;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.OverlaySlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment>* InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862C260              		 offset:85c260                        

void UOverlaySlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment>* InVerticalAlignment)
=======
// Function UMG.Widget.SetAllNavigationRules
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EUINavigationRule              Rule                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   WidgetToFocus                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D708E270              		 offset:6ce270                        

void UWidget::SetAllNavigationRules(EUINavigationRule Rule, const struct FName& WidgetToFocus)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.OverlaySlot.SetVerticalAlignment"));

	UOverlaySlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetAllNavigationRules"));

	UWidget_SetAllNavigationRules_Params params;
	params.Rule = Rule;
	params.WidgetToFocus = WidgetToFocus;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.OverlaySlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin*                InPadding                      (Parm)
// FunctionAddress:0x00007FF71862A480              		 offset:85a480                        

void UOverlaySlot::SetPadding(struct FMargin* InPadding)
=======
// Function UMG.Widget.ResetCursor
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D708DDD0              		 offset:6cddd0                        

void UWidget::ResetCursor()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.OverlaySlot.SetPadding"));

	UOverlaySlot_SetPadding_Params params;
	params.InPadding = InPadding;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.ResetCursor"));

	UWidget_ResetCursor_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.OverlaySlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718628070              		 offset:858070                        

void UOverlaySlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment)
=======
// Function UMG.Widget.RemoveFromParent
// (Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D9DB8250              		 offset:33f8250                       

void UWidget::RemoveFromParent()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.OverlaySlot.SetHorizontalAlignment"));

	UOverlaySlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.RemoveFromParent"));

	UWidget_RemoveFromParent_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.OverlaySlot.GetZOrder
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718624130              		 offset:854130                        

int UOverlaySlot::GetZOrder()
=======
// DelegateFunction UMG.Widget.OnReply__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

struct FEventReply UWidget::OnReply__DelegateSignature()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.OverlaySlot.GetZOrder"));

	UOverlaySlot_GetZOrder_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.OnReply__DelegateSignature"));

	UWidget_OnReply__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.ScaleBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment>* InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862C2E0              		 offset:85c2e0                        

void UScaleBoxSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment>* InVerticalAlignment)
=======
// DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature
// (Public, Delegate, HasOutParms)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

struct FEventReply UWidget::OnPointerEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScaleBoxSlot.SetVerticalAlignment"));

	UScaleBoxSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature"));

	UWidget_OnPointerEvent__DelegateSignature_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.ScaleBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin*                InPadding                      (Parm)
// FunctionAddress:0x00007FF71862A510              		 offset:85a510                        

void UScaleBoxSlot::SetPadding(struct FMargin* InPadding)
=======

	return params.ReturnValue;
}


// Function UMG.Widget.IsVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708D3B0              		 offset:6cd3b0                        

bool UWidget::IsVisible()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScaleBoxSlot.SetPadding"));

	UScaleBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.IsVisible"));

	UWidget_IsVisible_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.ScaleBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718627EF0              		 offset:857ef0                        

void UScaleBoxSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment)
=======

	return params.ReturnValue;
}


// Function UMG.Widget.IsHovered
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708D190              		 offset:6cd190                        

bool UWidget::IsHovered()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScaleBoxSlot.SetHorizontalAlignment"));

	UScaleBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.IsHovered"));

	UWidget_IsHovered_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.ScrollBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin*                InPadding                      (Parm)
// FunctionAddress:0x00007FF71862A5A0              		 offset:85a5a0                        

void UScrollBoxSlot::SetPadding(struct FMargin* InPadding)
=======

	return params.ReturnValue;
}


// Function UMG.Widget.InvalidateLayoutAndVolatility
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D708D0B0              		 offset:6cd0b0                        

void UWidget::InvalidateLayoutAndVolatility()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBoxSlot.SetPadding"));

	UScrollBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.InvalidateLayoutAndVolatility"));

	UWidget_InvalidateLayoutAndVolatility_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.ScrollBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7186280F0              		 offset:8580f0                        

void UScrollBoxSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment)
=======
// Function UMG.Widget.HasUserFocusedDescendants
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708D020              		 offset:6cd020                        

bool UWidget::HasUserFocusedDescendants(class APlayerController* PlayerController)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBoxSlot.SetHorizontalAlignment"));

	UScrollBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.HasUserFocusedDescendants"));

	UWidget_HasUserFocusedDescendants_Params params;
	params.PlayerController = PlayerController;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.SizeBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment>* InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862C360              		 offset:85c360                        

void USizeBoxSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment>* InVerticalAlignment)
=======

	return params.ReturnValue;
}


// Function UMG.Widget.HasUserFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708CF90              		 offset:6ccf90                        

bool UWidget::HasUserFocus(class APlayerController* PlayerController)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBoxSlot.SetVerticalAlignment"));

	USizeBoxSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.HasUserFocus"));

	UWidget_HasUserFocus_Params params;
	params.PlayerController = PlayerController;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.SizeBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin*                InPadding                      (Parm)
// FunctionAddress:0x00007FF71862A630              		 offset:85a630                        

void USizeBoxSlot::SetPadding(struct FMargin* InPadding)
=======

	return params.ReturnValue;
}


// Function UMG.Widget.HasMouseCapture
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708CF60              		 offset:6ccf60                        

bool UWidget::HasMouseCapture()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBoxSlot.SetPadding"));

	USizeBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.HasMouseCapture"));

	UWidget_HasMouseCapture_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.SizeBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718628170              		 offset:858170                        

void USizeBoxSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment)
=======

	return params.ReturnValue;
}


// Function UMG.Widget.HasKeyboardFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708CF30              		 offset:6ccf30                        

bool UWidget::HasKeyboardFocus()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBoxSlot.SetHorizontalAlignment"));

	USizeBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.HasKeyboardFocus"));

	UWidget_HasKeyboardFocus_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.UniformGridSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment>* InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862C3E0              		 offset:85c3e0                        

void UUniformGridSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment>* InVerticalAlignment)
=======

	return params.ReturnValue;
}


// Function UMG.Widget.HasFocusedDescendants
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708CF00              		 offset:6ccf00                        

bool UWidget::HasFocusedDescendants()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UniformGridSlot.SetVerticalAlignment"));

	UUniformGridSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.HasFocusedDescendants"));

	UWidget_HasFocusedDescendants_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.UniformGridSlot.SetRow
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           InRow                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862AC10              		 offset:85ac10                        

void UUniformGridSlot::SetRow(int* InRow)
=======

	return params.ReturnValue;
}


// Function UMG.Widget.HasAnyUserFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708CED0              		 offset:6cced0                        

bool UWidget::HasAnyUserFocus()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UniformGridSlot.SetRow"));

	UUniformGridSlot_SetRow_Params params;
	params.InRow = InRow;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.HasAnyUserFocus"));

	UWidget_HasAnyUserFocus_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.UniformGridSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7186281F0              		 offset:8581f0                        

void UUniformGridSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment)
=======

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetWidget__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

class UWidget* UWidget::GetWidget__DelegateSignature()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UniformGridSlot.SetHorizontalAlignment"));

	UUniformGridSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetWidget__DelegateSignature"));

	UWidget_GetWidget__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.UniformGridSlot.SetColumn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           InColumn                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718626FD0              		 offset:856fd0                        

void UUniformGridSlot::SetColumn(int* InColumn)
=======

	return params.ReturnValue;
}


// Function UMG.Widget.GetVisibility
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708CEA0              		 offset:6ccea0                        

ESlateVisibility UWidget::GetVisibility()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UniformGridSlot.SetColumn"));

	UUniformGridSlot_SetColumn_Params params;
	params.InColumn = InColumn;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.GetVisibility"));

	UWidget_GetVisibility_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.VerticalBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment>* InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862C1E0              		 offset:85c1e0                        

void UVerticalBoxSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment>* InVerticalAlignment)
=======

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetText__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

struct FText UWidget::GetText__DelegateSignature()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.VerticalBoxSlot.SetVerticalAlignment"));

	UVerticalBoxSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetText__DelegateSignature"));

	UWidget_GetText__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.VerticalBoxSlot.SetSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateChildSize*        InSize                         (Parm)
// FunctionAddress:0x00007FF71862B230              		 offset:85b230                        

void UVerticalBoxSlot::SetSize(struct FSlateChildSize* InSize)
=======

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature
// (Public, Delegate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

ESlateVisibility UWidget::GetSlateVisibility__DelegateSignature()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.VerticalBoxSlot.SetSize"));

	UVerticalBoxSlot_SetSize_Params params;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature"));

	UWidget_GetSlateVisibility__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.VerticalBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin*                InPadding                      (Parm)
// FunctionAddress:0x00007FF71862A6C0              		 offset:85a6c0                        

void UVerticalBoxSlot::SetPadding(struct FMargin* InPadding)
=======

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

struct FSlateColor UWidget::GetSlateColor__DelegateSignature()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.VerticalBoxSlot.SetPadding"));

	UVerticalBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature"));

	UWidget_GetSlateColor__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.VerticalBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718627FF0              		 offset:857ff0                        

void UVerticalBoxSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment)
=======

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

struct FSlateBrush UWidget::GetSlateBrush__DelegateSignature()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.VerticalBoxSlot.SetHorizontalAlignment"));

	UVerticalBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature"));

	UWidget_GetSlateBrush__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.WidgetSwitcherSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment>* InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862C260              		 offset:85c260                        

void UWidgetSwitcherSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment>* InVerticalAlignment)
=======

	return params.ReturnValue;
}


// Function UMG.Widget.GetParent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPanelWidget*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6D708CA70              		 offset:6cca70                        

class UPanelWidget* UWidget::GetParent()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetSwitcherSlot.SetVerticalAlignment"));

	UWidgetSwitcherSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.GetParent"));

	UWidget_GetParent_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.WidgetSwitcherSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin*                InPadding                      (Parm)
// FunctionAddress:0x00007FF71862A750              		 offset:85a750                        

void UWidgetSwitcherSlot::SetPadding(struct FMargin* InPadding)
=======

	return params.ReturnValue;
}


// Function UMG.Widget.GetOwningPlayer
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708CA10              		 offset:6cca10                        

class APlayerController* UWidget::GetOwningPlayer()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetSwitcherSlot.SetPadding"));

	UWidgetSwitcherSlot_SetPadding_Params params;
	params.InPadding = InPadding;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.GetOwningPlayer"));

	UWidget_GetOwningPlayer_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718628070              		 offset:858070                        

void UWidgetSwitcherSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment)
=======

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature
// (Public, Delegate)
// Parameters:
// TEnumAsByte<EMouseCursor>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

TEnumAsByte<EMouseCursor> UWidget::GetMouseCursor__DelegateSignature()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment"));

	UWidgetSwitcherSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature"));

	UWidget_GetMouseCursor__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.Widget.SetVisibility
// (Native, Public, BlueprintCallable)
// Parameters:
// ESlateVisibility*              InVisibility                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF719C5E7F0              		 offset:1e8e7f0                       

void UWidget::SetVisibility(ESlateVisibility* InVisibility)
=======

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature
// (Public, Delegate, HasDefaults)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

struct FLinearColor UWidget::GetLinearColor__DelegateSignature()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetVisibility"));

	UWidget_SetVisibility_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature"));

	UWidget_GetLinearColor__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.Widget.SetUserFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF719C5E770              		 offset:1e8e770                       

void UWidget::SetUserFocus(class APlayerController** PlayerController)
=======

	return params.ReturnValue;
}


// Function UMG.Widget.GetIsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708C8B0              		 offset:6cc8b0                        

bool UWidget::GetIsEnabled()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetUserFocus"));

	UWidget_SetUserFocus_Params params;
	params.PlayerController = PlayerController;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.GetIsEnabled"));

	UWidget_GetIsEnabled_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.Widget.SetToolTipText
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText*                  InToolTipText                  (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF719C5E690              		 offset:1e8e690                       

void UWidget::SetToolTipText(struct FText* InToolTipText)
=======

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetInt32__DelegateSignature
// (Public, Delegate)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

int UWidget::GetInt32__DelegateSignature()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetToolTipText"));

	UWidget_SetToolTipText_Params params;
	params.InToolTipText = InToolTipText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetInt32__DelegateSignature"));

	UWidget_GetInt32__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.Widget.SetToolTip
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF719C5E610              		 offset:1e8e610                       

void UWidget::SetToolTip(class UWidget** Widget)
=======

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetFloat__DelegateSignature
// (Public, Delegate)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

float UWidget::GetFloat__DelegateSignature()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetToolTip"));

	UWidget_SetToolTip_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetFloat__DelegateSignature"));

	UWidget_GetFloat__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.Widget.SetRenderTranslation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D*              Translation                    (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5E590              		 offset:1e8e590                       

void UWidget::SetRenderTranslation(struct FVector2D* Translation)
=======

	return params.ReturnValue;
}


// Function UMG.Widget.GetDesiredSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708C870              		 offset:6cc870                        

struct FVector2D UWidget::GetDesiredSize()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetRenderTranslation"));

	UWidget_SetRenderTranslation_Params params;
	params.Translation = Translation;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.GetDesiredSize"));

	UWidget_GetDesiredSize_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.Widget.SetRenderTransformPivot
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D*              Pivot                          (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5E510              		 offset:1e8e510                       

void UWidget::SetRenderTransformPivot(struct FVector2D* Pivot)
=======

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature
// (Public, Delegate)
// Parameters:
// ECheckBoxState                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

ECheckBoxState UWidget::GetCheckBoxState__DelegateSignature()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetRenderTransformPivot"));

	UWidget_SetRenderTransformPivot_Params params;
	params.Pivot = Pivot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature"));

	UWidget_GetCheckBoxState__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.Widget.SetRenderTransform
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FWidgetTransform*       InTransform                    (Parm)
// FunctionAddress:0x00007FF719C5E430              		 offset:1e8e430                       

void UWidget::SetRenderTransform(struct FWidgetTransform* InTransform)
=======

	return params.ReturnValue;
}


// Function UMG.Widget.GetCachedGeometry
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry               ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708C830              		 offset:6cc830                        

struct FGeometry UWidget::GetCachedGeometry()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetRenderTransform"));

	UWidget_SetRenderTransform_Params params;
	params.InTransform = InTransform;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.GetCachedGeometry"));

	UWidget_GetCachedGeometry_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.Widget.SetRenderShear
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D*              Shear                          (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5E3B0              		 offset:1e8e3b0                       

void UWidget::SetRenderShear(struct FVector2D* Shear)
=======

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetBool__DelegateSignature
// (Public, Delegate)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

bool UWidget::GetBool__DelegateSignature()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetRenderShear"));

	UWidget_SetRenderShear_Params params;
	params.Shear = Shear;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetBool__DelegateSignature"));

	UWidget_GetBool__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.Widget.SetRenderScale
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D*              Scale                          (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5E330              		 offset:1e8e330                       

void UWidget::SetRenderScale(struct FVector2D* Scale)
=======

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FString                 Item                           (Parm, ZeroConstructor)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

class UWidget* UWidget::GenerateWidgetForString__DelegateSignature(const struct FString& Item)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetRenderScale"));

	UWidget_SetRenderScale_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature"));

	UWidget_GenerateWidgetForString__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.Widget.SetRenderAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Angle                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF719C5E2B0              		 offset:1e8e2b0                       

void UWidget::SetRenderAngle(float* Angle)
=======

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UObject*                 Item                           (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

class UWidget* UWidget::GenerateWidgetForObject__DelegateSignature(class UObject* Item)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetRenderAngle"));

	UWidget_SetRenderAngle_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature"));

	UWidget_GenerateWidgetForObject__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.Widget.SetNavigationRule
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EUINavigation*                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// EUINavigationRule*             Rule                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  WidgetToFocus                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF719C5DDC0              		 offset:1e8ddc0                       

void UWidget::SetNavigationRule(EUINavigation* Direction, EUINavigationRule* Rule, struct FName* WidgetToFocus)
=======

	return params.ReturnValue;
}


// Function UMG.Widget.ForceVolatile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D708C680              		 offset:6cc680                        

void UWidget::ForceVolatile(bool bForce)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetNavigationRule"));

	UWidget_SetNavigationRule_Params params;
	params.Direction = Direction;
	params.Rule = Rule;
	params.WidgetToFocus = WidgetToFocus;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.ForceVolatile"));

	UWidget_ForceVolatile_Params params;
	params.bForce = bForce;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.Widget.SetKeyboardFocus
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF719C5DDA0              		 offset:1e8dda0                       

void UWidget::SetKeyboardFocus()
=======
// Function UMG.Widget.ForceLayoutPrepass
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D708C660              		 offset:6cc660                        

void UWidget::ForceLayoutPrepass()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetKeyboardFocus"));

	UWidget_SetKeyboardFocus_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.ForceLayoutPrepass"));

	UWidget_ForceLayoutPrepass_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.Widget.SetIsEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bInIsEnabled                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71B27F8E0              		 offset:34af8e0                       

void UWidget::SetIsEnabled(bool* bInIsEnabled)
=======
// DelegateFunction UMG.Widget.EventForWidget__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UWidget::EventForWidget__DelegateSignature(class UWidget* BoundWidget)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetIsEnabled"));

	UWidget_SetIsEnabled_Params params;
	params.bInIsEnabled = bInIsEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.EventForWidget__DelegateSignature"));

	UWidget_EventForWidget__DelegateSignature_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.Widget.SetCursor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EMouseCursor>*     InCursor                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF719C5DA90              		 offset:1e8da90                       

void UWidget::SetCursor(TEnumAsByte<EMouseCursor>* InCursor)
=======
// Function UMG.UserWidget.UnregisterInputComponent
// (Final, Native, Protected, BlueprintCallable)
// FunctionAddress:0x00007FF6D708F3B0              		 offset:6cf3b0                        

void UUserWidget::UnregisterInputComponent()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetCursor"));

	UWidget_SetCursor_Params params;
	params.InCursor = InCursor;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.UnregisterInputComponent"));

	UUserWidget_UnregisterInputComponent_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.Widget.SetAllNavigationRules
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EUINavigationRule*             Rule                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  WidgetToFocus                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF719C5D8C0              		 offset:1e8d8c0                       

void UWidget::SetAllNavigationRules(EUINavigationRule* Rule, struct FName* WidgetToFocus)
=======
// Function UMG.UserWidget.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData)
// float                          InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UUserWidget::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.SetAllNavigationRules"));

	UWidget_SetAllNavigationRules_Params params;
	params.Rule = Rule;
	params.WidgetToFocus = WidgetToFocus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.Tick"));

	UUserWidget_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.Widget.ResetCursor
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF719C5D420              		 offset:1e8d420                       

void UWidget::ResetCursor()
=======
// Function UMG.UserWidget.StopListeningForInputAction
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FName                   ActionName                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInputEvent>       EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D708F2E0              		 offset:6cf2e0                        

void UUserWidget::StopListeningForInputAction(const struct FName& ActionName, TEnumAsByte<EInputEvent> EventType)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.ResetCursor"));

	UWidget_ResetCursor_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.StopListeningForInputAction"));

	UUserWidget_StopListeningForInputAction_Params params;
	params.ActionName = ActionName;
	params.EventType = EventType;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.Widget.RemoveFromParent
// (Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF71A6E20F0              		 offset:29120f0                       

void UWidget::RemoveFromParent()
=======
// Function UMG.UserWidget.StopListeningForAllInputActions
// (Final, Native, Protected, BlueprintCallable)
// FunctionAddress:0x00007FF6D708F2C0              		 offset:6cf2c0                        

void UUserWidget::StopListeningForAllInputActions()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.RemoveFromParent"));

	UWidget_RemoveFromParent_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.StopListeningForAllInputActions"));

	UUserWidget_StopListeningForAllInputActions_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// DelegateFunction UMG.Widget.OnReply__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

struct FEventReply UWidget::OnReply__DelegateSignature()
=======
// Function UMG.UserWidget.StopAnimation
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*        InAnimation                    (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6D708F240              		 offset:6cf240                        

void UUserWidget::StopAnimation(class UWidgetAnimation* InAnimation)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.OnReply__DelegateSignature"));

	UWidget_OnReply__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.StopAnimation"));

	UUserWidget_StopAnimation_Params params;
	params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

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
=======
}


// Function UMG.UserWidget.StopAllAnimations
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D708F220              		 offset:6cf220                        

void UUserWidget::StopAllAnimations()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature"));

	UWidget_OnPointerEvent__DelegateSignature_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.StopAllAnimations"));

	UUserWidget_StopAllAnimations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.Widget.IsVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5CA90              		 offset:1e8ca90                       

bool UWidget::IsVisible()
=======
}


// Function UMG.UserWidget.SetPositionInViewport
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               Position                       (Parm, IsPlainOldData)
// bool                           bRemoveDPIScale                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D708EBA0              		 offset:6ceba0                        

void UUserWidget::SetPositionInViewport(const struct FVector2D& Position, bool bRemoveDPIScale)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.IsVisible"));

	UWidget_IsVisible_Params params;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetPositionInViewport"));

	UUserWidget_SetPositionInViewport_Params params;
	params.Position = Position;
	params.bRemoveDPIScale = bRemoveDPIScale;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.Widget.IsHovered
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C8A0              		 offset:1e8c8a0                       

bool UWidget::IsHovered()
=======
}


// Function UMG.UserWidget.SetPlaybackSpeed
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*        InAnimation                    (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          PlaybackSpeed                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D708EAD0              		 offset:6cead0                        

void UUserWidget::SetPlaybackSpeed(class UWidgetAnimation* InAnimation, float PlaybackSpeed)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.IsHovered"));

	UWidget_IsHovered_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetPlaybackSpeed"));

	UUserWidget_SetPlaybackSpeed_Params params;
	params.InAnimation = InAnimation;
	params.PlaybackSpeed = PlaybackSpeed;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.Widget.InvalidateLayoutAndVolatility
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF719C5C7C0              		 offset:1e8c7c0                       

void UWidget::InvalidateLayoutAndVolatility()
=======
}


// Function UMG.UserWidget.SetPadding
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                 InPadding                      (Parm)
// FunctionAddress:0x00007FF6D708EA40              		 offset:6cea40                        

void UUserWidget::SetPadding(const struct FMargin& InPadding)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.InvalidateLayoutAndVolatility"));

	UWidget_InvalidateLayoutAndVolatility_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetPadding"));

	UUserWidget_SetPadding_Params params;
	params.InPadding = InPadding;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.Widget.HasUserFocusedDescendants
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C730              		 offset:1e8c730                       

bool UWidget::HasUserFocusedDescendants(class APlayerController** PlayerController)
=======
// Function UMG.UserWidget.SetOwningPlayer
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       LocalPlayerController          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D708E9C0              		 offset:6ce9c0                        

void UUserWidget::SetOwningPlayer(class APlayerController* LocalPlayerController)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.HasUserFocusedDescendants"));

	UWidget_HasUserFocusedDescendants_Params params;
	params.PlayerController = PlayerController;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetOwningPlayer"));

	UUserWidget_SetOwningPlayer_Params params;
	params.LocalPlayerController = LocalPlayerController;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.Widget.HasUserFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C6A0              		 offset:1e8c6a0                       

bool UWidget::HasUserFocus(class APlayerController** PlayerController)
=======
}


// Function UMG.UserWidget.SetOwningLocalPlayer
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class ULocalPlayer*            LocalPlayer                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D708E940              		 offset:6ce940                        

void UUserWidget::SetOwningLocalPlayer(class ULocalPlayer* LocalPlayer)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.HasUserFocus"));

	UWidget_HasUserFocus_Params params;
	params.PlayerController = PlayerController;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetOwningLocalPlayer"));

	UUserWidget_SetOwningLocalPlayer_Params params;
	params.LocalPlayer = LocalPlayer;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.Widget.HasMouseCapture
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C670              		 offset:1e8c670                       

bool UWidget::HasMouseCapture()
=======
}


// Function UMG.UserWidget.SetNumLoopsToPlay
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*        InAnimation                    (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            NumLoopsToPlay                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D708E880              		 offset:6ce880                        

void UUserWidget::SetNumLoopsToPlay(class UWidgetAnimation* InAnimation, int NumLoopsToPlay)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.HasMouseCapture"));

	UWidget_HasMouseCapture_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetNumLoopsToPlay"));

	UUserWidget_SetNumLoopsToPlay_Params params;
	params.InAnimation = InAnimation;
	params.NumLoopsToPlay = NumLoopsToPlay;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.Widget.HasKeyboardFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C640              		 offset:1e8c640                       

bool UWidget::HasKeyboardFocus()
=======
}


// Function UMG.UserWidget.SetInputActionPriority
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            NewPriority                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D708E6D0              		 offset:6ce6d0                        

void UUserWidget::SetInputActionPriority(int NewPriority)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.HasKeyboardFocus"));

	UWidget_HasKeyboardFocus_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetInputActionPriority"));

	UUserWidget_SetInputActionPriority_Params params;
	params.NewPriority = NewPriority;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.Widget.HasFocusedDescendants
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C610              		 offset:1e8c610                       

bool UWidget::HasFocusedDescendants()
=======
}


// Function UMG.UserWidget.SetInputActionBlocking
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           bShouldBlock                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D708E640              		 offset:6ce640                        

void UUserWidget::SetInputActionBlocking(bool bShouldBlock)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.HasFocusedDescendants"));

	UWidget_HasFocusedDescendants_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetInputActionBlocking"));

	UUserWidget_SetInputActionBlocking_Params params;
	params.bShouldBlock = bShouldBlock;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.Widget.HasAnyUserFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C5E0              		 offset:1e8c5e0                       

bool UWidget::HasAnyUserFocus()
=======
}


// Function UMG.UserWidget.SetForegroundColor
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor             InForegroundColor              (Parm)
// FunctionAddress:0x00007FF6D708E540              		 offset:6ce540                        

void UUserWidget::SetForegroundColor(const struct FSlateColor& InForegroundColor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.HasAnyUserFocus"));

	UWidget_HasAnyUserFocus_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetForegroundColor"));

	UUserWidget_SetForegroundColor_Params params;
	params.InForegroundColor = InForegroundColor;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetWidget__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

class UWidget* UWidget::GetWidget__DelegateSignature()
=======
}


// Function UMG.UserWidget.SetDesiredSizeInViewport
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               Size                           (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708E4C0              		 offset:6ce4c0                        

void UUserWidget::SetDesiredSizeInViewport(const struct FVector2D& Size)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetWidget__DelegateSignature"));

	UWidget_GetWidget__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetDesiredSizeInViewport"));

	UUserWidget_SetDesiredSizeInViewport_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.Widget.GetVisibility
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C5B0              		 offset:1e8c5b0                       

ESlateVisibility UWidget::GetVisibility()
=======
}


// Function UMG.UserWidget.SetColorAndOpacity
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InColorAndOpacity              (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708E3C0              		 offset:6ce3c0                        

void UUserWidget::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.GetVisibility"));

	UWidget_GetVisibility_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetColorAndOpacity"));

	UUserWidget_SetColorAndOpacity_Params params;
	params.InColorAndOpacity = InColorAndOpacity;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetText__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

struct FText UWidget::GetText__DelegateSignature()
=======
}


// Function UMG.UserWidget.SetAnchorsInViewport
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FAnchors                Anchors                        (Parm)
// FunctionAddress:0x00007FF6D708E330              		 offset:6ce330                        

void UUserWidget::SetAnchorsInViewport(const struct FAnchors& Anchors)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetText__DelegateSignature"));

	UWidget_GetText__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetAnchorsInViewport"));

	UUserWidget_SetAnchorsInViewport_Params params;
	params.Anchors = Anchors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature
// (Public, Delegate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

ESlateVisibility UWidget::GetSlateVisibility__DelegateSignature()
=======
}


// Function UMG.UserWidget.SetAlignmentInViewport
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               Alignment                      (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708E1F0              		 offset:6ce1f0                        

void UUserWidget::SetAlignmentInViewport(const struct FVector2D& Alignment)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature"));

	UWidget_GetSlateVisibility__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetAlignmentInViewport"));

	UUserWidget_SetAlignmentInViewport_Params params;
	params.Alignment = Alignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

struct FSlateColor UWidget::GetSlateColor__DelegateSignature()
=======
}


// Function UMG.UserWidget.ReverseAnimation
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*        InAnimation                    (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6D708DDF0              		 offset:6cddf0                        

void UUserWidget::ReverseAnimation(class UWidgetAnimation* InAnimation)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature"));

	UWidget_GetSlateColor__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.ReverseAnimation"));

	UUserWidget_ReverseAnimation_Params params;
	params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

struct FSlateBrush UWidget::GetSlateBrush__DelegateSignature()
=======
}


// Function UMG.UserWidget.RemoveFromViewport
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D9B32260              		 offset:3172260                       

void UUserWidget::RemoveFromViewport()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature"));

	UWidget_GetSlateBrush__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.RemoveFromViewport"));

	UUserWidget_RemoveFromViewport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.Widget.GetParent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPanelWidget*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C180              		 offset:1e8c180                       

class UPanelWidget* UWidget::GetParent()
=======
}


// Function UMG.UserWidget.RegisterInputComponent
// (Final, Native, Protected, BlueprintCallable)
// FunctionAddress:0x00007FF6D708DDB0              		 offset:6cddb0                        

void UUserWidget::RegisterInputComponent()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.GetParent"));

	UWidget_GetParent_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.RegisterInputComponent"));

	UUserWidget_RegisterInputComponent_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.Widget.GetOwningPlayer
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C120              		 offset:1e8c120                       

class APlayerController* UWidget::GetOwningPlayer()
=======
}


// Function UMG.UserWidget.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UUserWidget::PreConstruct(bool IsDesignTime)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.GetOwningPlayer"));

	UWidget_GetOwningPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.PreConstruct"));

	UUserWidget_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature
// (Public, Delegate)
// Parameters:
// TEnumAsByte<EMouseCursor>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

TEnumAsByte<EMouseCursor> UWidget::GetMouseCursor__DelegateSignature()
=======
}


// Function UMG.UserWidget.PlaySound
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase*              SoundToPlay                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D708DD30              		 offset:6cdd30                        

void UUserWidget::PlaySound(class USoundBase* SoundToPlay)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature"));

	UWidget_GetMouseCursor__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.PlaySound"));

	UUserWidget_PlaySound_Params params;
	params.SoundToPlay = SoundToPlay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature
// (Public, Delegate, HasDefaults)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

struct FLinearColor UWidget::GetLinearColor__DelegateSignature()
=======
}


// Function UMG.UserWidget.PlayAnimationTo
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*        InAnimation                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          StartAtTime                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndAtTime                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoopsToPlay                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUMGSequencePlayMode> PlayMode                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          PlaybackSpeed                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D708DB80              		 offset:6cdb80                        

void UUserWidget::PlayAnimationTo(class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature"));

	UWidget_GetLinearColor__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
=======
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
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.Widget.GetIsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5BF90              		 offset:1e8bf90                       

bool UWidget::GetIsEnabled()
=======
}


// Function UMG.UserWidget.PlayAnimation
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*        InAnimation                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          StartAtTime                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumLoopsToPlay                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUMGSequencePlayMode> PlayMode                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          PlaybackSpeed                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D708D9F0              		 offset:6cd9f0                        

void UUserWidget::PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.GetIsEnabled"));

	UWidget_GetIsEnabled_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.PlayAnimation"));

	UUserWidget_PlayAnimation_Params params;
	params.InAnimation = InAnimation;
	params.StartAtTime = StartAtTime;
	params.NumLoopsToPlay = NumLoopsToPlay;
	params.PlayMode = PlayMode;
	params.PlaybackSpeed = PlaybackSpeed;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetInt32__DelegateSignature
// (Public, Delegate)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

int UWidget::GetInt32__DelegateSignature()
=======
}


// Function UMG.UserWidget.PauseAnimation
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*        InAnimation                    (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708D950              		 offset:6cd950                        

float UUserWidget::PauseAnimation(class UWidgetAnimation* InAnimation)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetInt32__DelegateSignature"));

	UWidget_GetInt32__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.PauseAnimation"));

	UUserWidget_PauseAnimation_Params params;
	params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// DelegateFunction UMG.Widget.GetFloat__DelegateSignature
// (Public, Delegate)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

float UWidget::GetFloat__DelegateSignature()
=======
// Function UMG.UserWidget.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

struct FEventReply UUserWidget::OnTouchStarted(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetFloat__DelegateSignature"));

	UWidget_GetFloat__DelegateSignature_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnTouchStarted"));

	UUserWidget_OnTouchStarted_Params params;
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.Widget.GetDesiredSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5BF50              		 offset:1e8bf50                       

struct FVector2D UWidget::GetDesiredSize()
=======
// Function UMG.UserWidget.OnTouchMoved
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

struct FEventReply UUserWidget::OnTouchMoved(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.GetDesiredSize"));

	UWidget_GetDesiredSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnTouchMoved"));

	UUserWidget_OnTouchMoved_Params params;
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature
// (Public, Delegate)
// Parameters:
// ECheckBoxState                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

ECheckBoxState UWidget::GetCheckBoxState__DelegateSignature()
=======
// Function UMG.UserWidget.OnTouchGesture
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent           GestureEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

struct FEventReply UUserWidget::OnTouchGesture(const struct FGeometry& MyGeometry, const struct FPointerEvent& GestureEvent)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature"));

	UWidget_GetCheckBoxState__DelegateSignature_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnTouchGesture"));

	UUserWidget_OnTouchGesture_Params params;
	params.MyGeometry = MyGeometry;
	params.GestureEvent = GestureEvent;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.Widget.GetCachedGeometry
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry               ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5BF10              		 offset:1e8bf10                       

struct FGeometry UWidget::GetCachedGeometry()
=======
// Function UMG.UserWidget.OnTouchEnded
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

struct FEventReply UUserWidget::OnTouchEnded(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.GetCachedGeometry"));

	UWidget_GetCachedGeometry_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnTouchEnded"));

	UUserWidget_OnTouchEnded_Params params;
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// DelegateFunction UMG.Widget.GetBool__DelegateSignature
// (Public, Delegate)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

bool UWidget::GetBool__DelegateSignature()
=======
// Function UMG.UserWidget.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

struct FEventReply UUserWidget::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GetBool__DelegateSignature"));

	UWidget_GetBool__DelegateSignature_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnPreviewMouseButtonDown"));

	UUserWidget_OnPreviewMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FString*                Item                           (Parm, ZeroConstructor)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

class UWidget* UWidget::GenerateWidgetForString__DelegateSignature(struct FString* Item)
=======
// Function UMG.UserWidget.OnPreviewKeyDown
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

struct FEventReply UUserWidget::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature"));

	UWidget_GenerateWidgetForString__DelegateSignature_Params params;
	params.Item = Item;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnPreviewKeyDown"));

	UUserWidget_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UObject**                Item                           (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

class UWidget* UWidget::GenerateWidgetForObject__DelegateSignature(class UObject** Item)
=======
// Function UMG.UserWidget.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext           Context                        (Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UUserWidget::OnPaint(struct FPaintContext* Context)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature"));

	UWidget_GenerateWidgetForObject__DelegateSignature_Params params;
	params.Item = Item;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnPaint"));

	UUserWidget_OnPaint_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

<<<<<<< HEAD
	return params.ReturnValue;
}


// Function UMG.Widget.ForceVolatile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bForce                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF719C5BD60              		 offset:1e8bd60                       

void UWidget::ForceVolatile(bool* bForce)
=======
	if (Context != nullptr)
		*Context = params.Context;
}


// Function UMG.UserWidget.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

struct FEventReply UUserWidget::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.ForceVolatile"));

	UWidget_ForceVolatile_Params params;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnMouseWheel"));

	UUserWidget_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.Widget.ForceLayoutPrepass
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF719C5BD40              		 offset:1e8bd40                       

void UWidget::ForceLayoutPrepass()
=======

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

struct FEventReply UUserWidget::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Widget.ForceLayoutPrepass"));

	UWidget_ForceLayoutPrepass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnMouseMove"));

	UUserWidget_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// DelegateFunction UMG.Widget.EventForWidget__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UWidget**                BoundWidget                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UWidget::EventForWidget__DelegateSignature(class UWidget** BoundWidget)
=======

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UUserWidget::OnMouseLeave(const struct FPointerEvent& MouseEvent)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.Widget.EventForWidget__DelegateSignature"));

	UWidget_EventForWidget__DelegateSignature_Params params;
	params.BoundWidget = BoundWidget;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnMouseLeave"));

	UUserWidget_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.PanelWidget.RemoveChildAt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7186255C0              		 offset:8555c0                        

bool UPanelWidget::RemoveChildAt(int* Index)
=======
// Function UMG.UserWidget.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UUserWidget::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.PanelWidget.RemoveChildAt"));

	UPanelWidget_RemoveChildAt_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnMouseEnter"));

	UUserWidget_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.PanelWidget.RemoveChild
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget**                Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718625530              		 offset:855530                        

bool UPanelWidget::RemoveChild(class UWidget** Content)
=======
}


// Function UMG.UserWidget.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

struct FEventReply UUserWidget::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.PanelWidget.RemoveChild"));

	UPanelWidget_RemoveChild_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnMouseButtonUp"));

	UUserWidget_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.PanelWidget.HasChild
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget**                Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718624210              		 offset:854210                        

bool UPanelWidget::HasChild(class UWidget** Content)
=======
// Function UMG.UserWidget.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

struct FEventReply UUserWidget::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.PanelWidget.HasChild"));

	UPanelWidget_HasChild_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnMouseButtonDown"));

	UUserWidget_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.PanelWidget.HasAnyChildren
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7186241E0              		 offset:8541e0                        

bool UPanelWidget::HasAnyChildren()
=======
// Function UMG.UserWidget.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               InMyGeometry                   (Parm, IsPlainOldData)
// struct FPointerEvent           InMouseEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

struct FEventReply UUserWidget::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.PanelWidget.HasAnyChildren"));

	UPanelWidget_HasAnyChildren_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnMouseButtonDoubleClick"));

	UUserWidget_OnMouseButtonDoubleClick_Params params;
	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.PanelWidget.GetChildrenCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718622870              		 offset:852870                        

int UPanelWidget::GetChildrenCount()
=======
// Function UMG.UserWidget.OnMotionDetected
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData)
// struct FMotionEvent            InMotionEvent                  (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

struct FEventReply UUserWidget::OnMotionDetected(const struct FGeometry& MyGeometry, const struct FMotionEvent& InMotionEvent)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.PanelWidget.GetChildrenCount"));

	UPanelWidget_GetChildrenCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnMotionDetected"));

	UUserWidget_OnMotionDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.InMotionEvent = InMotionEvent;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.PanelWidget.GetChildIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget**                Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7186227E0              		 offset:8527e0                        

int UPanelWidget::GetChildIndex(class UWidget** Content)
=======
// Function UMG.UserWidget.OnKeyUp
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

struct FEventReply UUserWidget::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.PanelWidget.GetChildIndex"));

	UPanelWidget_GetChildIndex_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnKeyUp"));

	UUserWidget_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.PanelWidget.GetChildAt
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF718622750              		 offset:852750                        

class UWidget* UPanelWidget::GetChildAt(int* Index)
=======
// Function UMG.UserWidget.OnKeyDown
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

struct FEventReply UUserWidget::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.PanelWidget.GetChildAt"));

	UPanelWidget_GetChildAt_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnKeyDown"));

	UUserWidget_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.PanelWidget.ClearChildren
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF7186209E0              		 offset:8509e0                        

void UPanelWidget::ClearChildren()
=======
// Function UMG.UserWidget.OnKeyChar
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData)
// struct FCharacterEvent         InCharacterEvent               (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

struct FEventReply UUserWidget::OnKeyChar(const struct FGeometry& MyGeometry, const struct FCharacterEvent& InCharacterEvent)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.PanelWidget.ClearChildren"));

	UPanelWidget_ClearChildren_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnKeyChar"));

	UUserWidget_OnKeyChar_Params params;
	params.MyGeometry = MyGeometry;
	params.InCharacterEvent = InCharacterEvent;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.PanelWidget.AddChild
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget**                Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPanelSlot*              ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF718620110              		 offset:850110                        

class UPanelSlot* UPanelWidget::AddChild(class UWidget** Content)
=======

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnFocusReceived
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData)
// struct FFocusEvent             InFocusEvent                   (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

struct FEventReply UUserWidget::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.PanelWidget.AddChild"));

	UPanelWidget_AddChild_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnFocusReceived"));

	UUserWidget_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.ContentWidget.SetContent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget**                Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPanelSlot*              ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF7186270D0              		 offset:8570d0                        

class UPanelSlot* UContentWidget::SetContent(class UWidget** Content)
=======
// Function UMG.UserWidget.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (Parm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UUserWidget::OnFocusLost(const struct FFocusEvent& InFocusEvent)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ContentWidget.SetContent"));

	UContentWidget_SetContent_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnFocusLost"));

	UUserWidget_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.ContentWidget.GetContentSlot
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPanelSlot*              ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF7186228D0              		 offset:8528d0                        

class UPanelSlot* UContentWidget::GetContentSlot()
=======
}


// Function UMG.UserWidget.OnDrop
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent           PointerEvent                   (Parm)
// class UDragDropOperation*      Operation                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

bool UUserWidget::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ContentWidget.GetContentSlot"));

	UContentWidget_GetContentSlot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnDrop"));

	UUserWidget_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.ContentWidget.GetContent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF7186228A0              		 offset:8528a0                        

class UWidget* UContentWidget::GetContent()
=======
// Function UMG.UserWidget.OnDragOver
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent           PointerEvent                   (Parm)
// class UDragDropOperation*      Operation                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

bool UUserWidget::OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ContentWidget.GetContent"));

	UContentWidget_GetContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnDragOver"));

	UUserWidget_OnDragOver_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.WindowTitleBarArea.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment>* InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862C460              		 offset:85c460                        

void UWindowTitleBarArea::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment>* InVerticalAlignment)
=======
// Function UMG.UserWidget.OnDragLeave
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FPointerEvent           PointerEvent                   (Parm)
// class UDragDropOperation*      Operation                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UUserWidget::OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WindowTitleBarArea.SetVerticalAlignment"));

	UWindowTitleBarArea_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnDragLeave"));

	UUserWidget_OnDragLeave_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.WindowTitleBarArea.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin*                InPadding                      (Parm)
// FunctionAddress:0x00007FF71862A7E0              		 offset:85a7e0                        

void UWindowTitleBarArea::SetPadding(struct FMargin* InPadding)
=======
// Function UMG.UserWidget.OnDragEnter
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent           PointerEvent                   (Parm)
// class UDragDropOperation*      Operation                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UUserWidget::OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WindowTitleBarArea.SetPadding"));

	UWindowTitleBarArea_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnDragEnter"));

	UUserWidget_OnDragEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.WindowTitleBarArea.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718628270              		 offset:858270                        

void UWindowTitleBarArea::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment)
=======
// Function UMG.UserWidget.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent           PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UUserWidget::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WindowTitleBarArea.SetHorizontalAlignment"));

	UWindowTitleBarArea_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnDragDetected"));

	UUserWidget_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment>* InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862C4E0              		 offset:85c4e0                        

void UWindowTitleBarAreaSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment>* InVerticalAlignment)
=======

	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function UMG.UserWidget.OnDragCancelled
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UUserWidget::OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment"));

	UWindowTitleBarAreaSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnDragCancelled"));

	UUserWidget_OnDragCancelled_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.WindowTitleBarAreaSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin*                InPadding                      (Parm)
// FunctionAddress:0x00007FF71862A870              		 offset:85a870                        

void UWindowTitleBarAreaSlot::SetPadding(struct FMargin* InPadding)
=======
// Function UMG.UserWidget.OnControllerButtonReleased
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData)
// struct FControllerEvent        ControllerEvent                (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

struct FEventReply UUserWidget::OnControllerButtonReleased(const struct FGeometry& MyGeometry, const struct FControllerEvent& ControllerEvent)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WindowTitleBarAreaSlot.SetPadding"));

	UWindowTitleBarAreaSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnControllerButtonReleased"));

	UUserWidget_OnControllerButtonReleased_Params params;
	params.MyGeometry = MyGeometry;
	params.ControllerEvent = ControllerEvent;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7186282F0              		 offset:8582f0                        

void UWindowTitleBarAreaSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment)
=======

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnControllerButtonPressed
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData)
// struct FControllerEvent        ControllerEvent                (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

struct FEventReply UUserWidget::OnControllerButtonPressed(const struct FGeometry& MyGeometry, const struct FControllerEvent& ControllerEvent)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment"));

	UWindowTitleBarAreaSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnControllerButtonPressed"));

	UUserWidget_OnControllerButtonPressed_Params params;
	params.MyGeometry = MyGeometry;
	params.ControllerEvent = ControllerEvent;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.WrapBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment>* InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862C560              		 offset:85c560                        

void UWrapBoxSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment>* InVerticalAlignment)
=======

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnControllerAnalogValueChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData)
// struct FControllerEvent        ControllerEvent                (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

struct FEventReply UUserWidget::OnControllerAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FControllerEvent& ControllerEvent)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WrapBoxSlot.SetVerticalAlignment"));

	UWrapBoxSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnControllerAnalogValueChanged"));

	UUserWidget_OnControllerAnalogValueChanged_Params params;
	params.MyGeometry = MyGeometry;
	params.ControllerEvent = ControllerEvent;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.WrapBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin*                InPadding                      (Parm)
// FunctionAddress:0x00007FF71862A900              		 offset:85a900                        

void UWrapBoxSlot::SetPadding(struct FMargin* InPadding)
=======

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnAnimationStarted
// (BlueprintCosmetic, Native, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6D708D8C0              		 offset:6cd8c0                        

void UUserWidget::OnAnimationStarted(class UWidgetAnimation* Animation)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WrapBoxSlot.SetPadding"));

	UWrapBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnAnimationStarted"));

	UUserWidget_OnAnimationStarted_Params params;
	params.Animation = Animation;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.WrapBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718628370              		 offset:858370                        

void UWrapBoxSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment)
=======
// Function UMG.UserWidget.OnAnimationFinished
// (BlueprintCosmetic, Native, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6D708D830              		 offset:6cd830                        

void UUserWidget::OnAnimationFinished(class UWidgetAnimation* Animation)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WrapBoxSlot.SetHorizontalAlignment"));

	UWrapBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnAnimationFinished"));

	UUserWidget_OnAnimationFinished_Params params;
	params.Animation = Animation;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InFillSpanWhenLessThan         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7186276D0              		 offset:8576d0                        

void UWrapBoxSlot::SetFillSpanWhenLessThan(float* InFillSpanWhenLessThan)
=======
// Function UMG.UserWidget.OnAnalogValueChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData)
// struct FAnalogInputEvent       InAnalogInputEvent             (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

struct FEventReply UUserWidget::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan"));

	UWrapBoxSlot_SetFillSpanWhenLessThan_Params params;
	params.InFillSpanWhenLessThan = InFillSpanWhenLessThan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnAnalogValueChanged"));

	UUserWidget_OnAnalogValueChanged_Params params;
	params.MyGeometry = MyGeometry;
	params.InAnalogInputEvent = InAnalogInputEvent;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.WrapBoxSlot.SetFillEmptySpace
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          InbFillEmptySpace              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718627640              		 offset:857640                        

void UWrapBoxSlot::SetFillEmptySpace(bool* InbFillEmptySpace)
=======

	return params.ReturnValue;
}


// Function UMG.UserWidget.ListenForInputAction
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FName                   ActionName                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInputEvent>       EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bConsume                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         Callback                       (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6D708D3E0              		 offset:6cd3e0                        

void UUserWidget::ListenForInputAction(const struct FName& ActionName, TEnumAsByte<EInputEvent> EventType, bool bConsume, const struct FScriptDelegate& Callback)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WrapBoxSlot.SetFillEmptySpace"));

	UWrapBoxSlot_SetFillEmptySpace_Params params;
	params.InbFillEmptySpace = InbFillEmptySpace;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.ListenForInputAction"));

	UUserWidget_ListenForInputAction_Params params;
	params.ActionName = ActionName;
	params.EventType = EventType;
	params.bConsume = bConsume;
	params.Callback = Callback;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.CircularThrobber.SetRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InRadius                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862AB10              		 offset:85ab10                        

void UCircularThrobber::SetRadius(float* InRadius)
=======
// Function UMG.UserWidget.IsPlayingAnimation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708D280              		 offset:6cd280                        

bool UUserWidget::IsPlayingAnimation()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CircularThrobber.SetRadius"));

	UCircularThrobber_SetRadius_Params params;
	params.InRadius = InRadius;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.IsPlayingAnimation"));

	UUserWidget_IsPlayingAnimation_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.CircularThrobber.SetPeriod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InPeriod                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862AA10              		 offset:85aa10                        

void UCircularThrobber::SetPeriod(float* InPeriod)
=======

	return params.ReturnValue;
}


// Function UMG.UserWidget.IsListeningForInputAction
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ActionName                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708D1F0              		 offset:6cd1f0                        

bool UUserWidget::IsListeningForInputAction(const struct FName& ActionName)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CircularThrobber.SetPeriod"));

	UCircularThrobber_SetPeriod_Params params;
	params.InPeriod = InPeriod;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.IsListeningForInputAction"));

	UUserWidget_IsListeningForInputAction_Params params;
	params.ActionName = ActionName;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.CircularThrobber.SetNumberOfPieces
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           InNumberOfPieces               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718629D80              		 offset:859d80                        

void UCircularThrobber::SetNumberOfPieces(int* InNumberOfPieces)
=======

	return params.ReturnValue;
}


// Function UMG.UserWidget.IsInViewport
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708D1C0              		 offset:6cd1c0                        

bool UUserWidget::IsInViewport()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CircularThrobber.SetNumberOfPieces"));

	UCircularThrobber_SetNumberOfPieces_Params params;
	params.InNumberOfPieces = InNumberOfPieces;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.IsInViewport"));

	UUserWidget_IsInViewport_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.ComboBoxString.SetSelectedOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                Option                         (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF71862AE90              		 offset:85ae90                        

void UComboBoxString::SetSelectedOption(struct FString* Option)
=======

	return params.ReturnValue;
}


// Function UMG.UserWidget.IsInteractable
// (BlueprintCosmetic, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

bool UUserWidget::IsInteractable()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ComboBoxString.SetSelectedOption"));

	UComboBoxString_SetSelectedOption_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.IsInteractable"));

	UUserWidget_IsInteractable_Params params;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.ComboBoxString.RemoveOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                Option                         (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718625650              		 offset:855650                        

bool UComboBoxString::RemoveOption(struct FString* Option)
=======

	return params.ReturnValue;
}


// Function UMG.UserWidget.IsAnyAnimationPlaying
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708D160              		 offset:6cd160                        

bool UUserWidget::IsAnyAnimationPlaying()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ComboBoxString.RemoveOption"));

	UComboBoxString_RemoveOption_Params params;
	params.Option = Option;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.IsAnyAnimationPlaying"));

	UUserWidget_IsAnyAnimationPlaying_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.ComboBoxString.RefreshOptions
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718624FA0              		 offset:854fa0                        

void UComboBoxString::RefreshOptions()
=======
// Function UMG.UserWidget.IsAnimationPlaying
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidgetAnimation*        InAnimation                    (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708D0D0              		 offset:6cd0d0                        

bool UUserWidget::IsAnimationPlaying(class UWidgetAnimation* InAnimation)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ComboBoxString.RefreshOptions"));

	UComboBoxString_RefreshOptions_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.IsAnimationPlaying"));

	UUserWidget_IsAnimationPlaying_Params params;
	params.InAnimation = InAnimation;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FString*                SelectedItem                   (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>*      SelectionType                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UComboBoxString::OnSelectionChangedEvent__DelegateSignature(struct FString* SelectedItem, TEnumAsByte<ESelectInfo>* SelectionType)
=======

	return params.ReturnValue;
}


// Function UMG.UserWidget.GetOwningPlayerPawn
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708CA40              		 offset:6cca40                        

class APawn* UUserWidget::GetOwningPlayerPawn()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature"));

	UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.GetOwningPlayerPawn"));

	UUserWidget_GetOwningPlayerPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UComboBoxString::OnOpeningEvent__DelegateSignature()
=======

	return params.ReturnValue;
}


// Function UMG.UserWidget.GetOwningPlayer
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708CA10              		 offset:6cca10                        

class APlayerController* UUserWidget::GetOwningPlayer()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature"));

	UComboBoxString_OnOpeningEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.GetOwningPlayer"));

	UUserWidget_GetOwningPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.ComboBoxString.GetSelectedOption
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF718623AD0              		 offset:853ad0                        

struct FString UComboBoxString::GetSelectedOption()
=======

	return params.ReturnValue;
}


// Function UMG.UserWidget.GetOwningLocalPlayer
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULocalPlayer*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708C9E0              		 offset:6cc9e0                        

class ULocalPlayer* UUserWidget::GetOwningLocalPlayer()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ComboBoxString.GetSelectedOption"));

	UComboBoxString_GetSelectedOption_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.GetOwningLocalPlayer"));

	UUserWidget_GetOwningLocalPlayer_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.ComboBoxString.GetOptionCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718623840              		 offset:853840                        

int UComboBoxString::GetOptionCount()
=======
// Function UMG.UserWidget.GetIsVisible
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708D1C0              		 offset:6cd1c0                        

bool UUserWidget::GetIsVisible()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ComboBoxString.GetOptionCount"));

	UComboBoxString_GetOptionCount_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.GetIsVisible"));

	UUserWidget_GetIsVisible_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.ComboBoxString.GetOptionAtIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF718623760              		 offset:853760                        

struct FString UComboBoxString::GetOptionAtIndex(int* Index)
=======
// Function UMG.UserWidget.GetAnimationCurrentTime
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidgetAnimation*        InAnimation                    (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708C790              		 offset:6cc790                        

float UUserWidget::GetAnimationCurrentTime(class UWidgetAnimation* InAnimation)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ComboBoxString.GetOptionAtIndex"));

	UComboBoxString_GetOptionAtIndex_Params params;
	params.Index = Index;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.GetAnimationCurrentTime"));

	UUserWidget_GetAnimationCurrentTime_Params params;
	params.InAnimation = InAnimation;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.ComboBoxString.FindOptionIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString*                Option                         (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718621E20              		 offset:851e20                        

int UComboBoxString::FindOptionIndex(struct FString* Option)
=======
// Function UMG.UserWidget.GetAnchorsInViewport
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAnchors                ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D708C750              		 offset:6cc750                        

struct FAnchors UUserWidget::GetAnchorsInViewport()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ComboBoxString.FindOptionIndex"));

	UComboBoxString_FindOptionIndex_Params params;
	params.Option = Option;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.GetAnchorsInViewport"));

	UUserWidget_GetAnchorsInViewport_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.ComboBoxString.ClearSelection
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718620B80              		 offset:850b80                        

void UComboBoxString::ClearSelection()
=======
// Function UMG.UserWidget.GetAlignmentInViewport
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708C710              		 offset:6cc710                        

struct FVector2D UUserWidget::GetAlignmentInViewport()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ComboBoxString.ClearSelection"));

	UComboBoxString_ClearSelection_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.GetAlignmentInViewport"));

	UUserWidget_GetAlignmentInViewport_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.ComboBoxString.ClearOptions
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718620B60              		 offset:850b60                        

void UComboBoxString::ClearOptions()
=======

	return params.ReturnValue;
}


// Function UMG.UserWidget.FinishStoppedSequencePlayers
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D708C640              		 offset:6cc640                        

void UUserWidget::FinishStoppedSequencePlayers()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ComboBoxString.ClearOptions"));

	UComboBoxString_ClearOptions_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.FinishStoppedSequencePlayers"));

	UUserWidget_FinishStoppedSequencePlayers_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.ComboBoxString.AddOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                Option                         (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF718620590              		 offset:850590                        

void UComboBoxString::AddOption(struct FString* Option)
=======
// Function UMG.UserWidget.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UUserWidget::Destruct()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ComboBoxString.AddOption"));

	UComboBoxString_AddOption_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.Destruct"));

	UUserWidget_Destruct_Params params;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.EditableText.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText*                  InText                         (Parm)
// FunctionAddress:0x00007FF71862B760              		 offset:85b760                        

void UEditableText::SetText(struct FText* InText)
=======
// Function UMG.UserWidget.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UUserWidget::Construct()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableText.SetText"));

	UEditableText_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.Construct"));

	UUserWidget_Construct_Params params;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.EditableText.SetIsReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          InbIsReadyOnly                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718628D40              		 offset:858d40                        

void UEditableText::SetIsReadOnly(bool* InbIsReadyOnly)
=======
// Function UMG.UserWidget.AddToViewport
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// int                            ZOrder                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D708BED0              		 offset:6cbed0                        

void UUserWidget::AddToViewport(int ZOrder)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableText.SetIsReadOnly"));

	UEditableText_SetIsReadOnly_Params params;
	params.InbIsReadyOnly = InbIsReadyOnly;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.AddToViewport"));

	UUserWidget_AddToViewport_Params params;
	params.ZOrder = ZOrder;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.EditableText.SetIsPassword
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          InbIsPassword                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718628CB0              		 offset:858cb0                        

void UEditableText::SetIsPassword(bool* InbIsPassword)
=======
// Function UMG.UserWidget.AddToPlayerScreen
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// int                            ZOrder                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D708BE40              		 offset:6cbe40                        

bool UUserWidget::AddToPlayerScreen(int ZOrder)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableText.SetIsPassword"));

	UEditableText_SetIsPassword_Params params;
	params.InbIsPassword = InbIsPassword;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.AddToPlayerScreen"));

	UUserWidget_AddToPlayerScreen_Params params;
	params.ZOrder = ZOrder;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.EditableText.SetHintText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText*                  InHintText                     (Parm)
// FunctionAddress:0x00007FF718627B50              		 offset:857b50                        

void UEditableText::SetHintText(struct FText* InHintText)
=======

	return params.ReturnValue;
}


// Function UMG.ComboBoxString.SetSelectedOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Option                         (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6D8D10570              		 offset:2350570                       

void UComboBoxString::SetSelectedOption(const struct FString& Option)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableText.SetHintText"));

	UEditableText_SetHintText_Params params;
	params.InHintText = InHintText;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ComboBoxString.SetSelectedOption"));

	UComboBoxString_SetSelectedOption_Params params;
	params.Option = Option;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FText*                  Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UEditableText::OnEditableTextCommittedEvent__DelegateSignature(struct FText* Text, TEnumAsByte<ETextCommit>* CommitMethod)
=======
// Function UMG.ComboBoxString.RemoveOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Option                         (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0AC80              		 offset:234ac80                       

bool UComboBoxString::RemoveOption(const struct FString& Option)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature"));

	UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ComboBoxString.RemoveOption"));

	UComboBoxString_RemoveOption_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FText*                  Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UEditableText::OnEditableTextChangedEvent__DelegateSignature(struct FText* Text)
=======

	return params.ReturnValue;
}


// Function UMG.ComboBoxString.RefreshOptions
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D8D0A5D0              		 offset:234a5d0                       

void UComboBoxString::RefreshOptions()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature"));

	UEditableText_OnEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ComboBoxString.RefreshOptions"));

	UComboBoxString_RefreshOptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.EditableText.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718623BD0              		 offset:853bd0                        

struct FText UEditableText::GetText()
=======
// DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FString                 SelectedItem                   (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UComboBoxString::OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableText.GetText"));

	UEditableText_GetText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature"));

	UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.EditableTextBox.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText*                  InText                         (Parm)
// FunctionAddress:0x00007FF71862B830              		 offset:85b830                        

void UEditableTextBox::SetText(struct FText* InText)
=======
}


// DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UComboBoxString::OnOpeningEvent__DelegateSignature()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableTextBox.SetText"));

	UEditableTextBox_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature"));

	UComboBoxString_OnOpeningEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.EditableTextBox.SetIsReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bReadOnly                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718628DD0              		 offset:858dd0                        

void UEditableTextBox::SetIsReadOnly(bool* bReadOnly)
=======
// Function UMG.ComboBoxString.GetSelectedOption
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6D8D09070              		 offset:2349070                       

struct FString UComboBoxString::GetSelectedOption()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableTextBox.SetIsReadOnly"));

	UEditableTextBox_SetIsReadOnly_Params params;
	params.bReadOnly = bReadOnly;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ComboBoxString.GetSelectedOption"));

	UComboBoxString_GetSelectedOption_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.EditableTextBox.SetHintText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText*                  InText                         (Parm)
// FunctionAddress:0x00007FF718627C20              		 offset:857c20                        

void UEditableTextBox::SetHintText(struct FText* InText)
=======

	return params.ReturnValue;
}


// Function UMG.ComboBoxString.GetOptionCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D08DE0              		 offset:2348de0                       

int UComboBoxString::GetOptionCount()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableTextBox.SetHintText"));

	UEditableTextBox_SetHintText_Params params;
	params.InText = InText;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ComboBoxString.GetOptionCount"));

	UComboBoxString_GetOptionCount_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.EditableTextBox.SetError
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText*                  InError                        (Parm)
// FunctionAddress:0x00007FF718627420              		 offset:857420                        

void UEditableTextBox::SetError(struct FText* InError)
=======

	return params.ReturnValue;
}


// Function UMG.ComboBoxString.GetOptionAtIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6D8D08D00              		 offset:2348d00                       

struct FString UComboBoxString::GetOptionAtIndex(int Index)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableTextBox.SetError"));

	UEditableTextBox_SetError_Params params;
	params.InError = InError;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ComboBoxString.GetOptionAtIndex"));

	UComboBoxString_GetOptionAtIndex_Params params;
	params.Index = Index;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FText*                  Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UEditableTextBox::OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText* Text, TEnumAsByte<ETextCommit>* CommitMethod)
=======

	return params.ReturnValue;
}


// Function UMG.ComboBoxString.FindOptionIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 Option                         (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D07450              		 offset:2347450                       

int UComboBoxString::FindOptionIndex(const struct FString& Option)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature"));

	UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ComboBoxString.FindOptionIndex"));

	UComboBoxString_FindOptionIndex_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FText*                  Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UEditableTextBox::OnEditableTextBoxChangedEvent__DelegateSignature(struct FText* Text)
=======

	return params.ReturnValue;
}


// Function UMG.ComboBoxString.ClearSelection
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D8D061B0              		 offset:23461b0                       

void UComboBoxString::ClearSelection()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature"));

	UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ComboBoxString.ClearSelection"));

	UComboBoxString_ClearSelection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.EditableTextBox.HasError
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7186242A0              		 offset:8542a0                        

bool UEditableTextBox::HasError()
=======
// Function UMG.ComboBoxString.ClearOptions
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D8D06190              		 offset:2346190                       

void UComboBoxString::ClearOptions()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableTextBox.HasError"));

	UEditableTextBox_HasError_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ComboBoxString.ClearOptions"));

	UComboBoxString_ClearOptions_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.EditableTextBox.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718623C60              		 offset:853c60                        

struct FText UEditableTextBox::GetText()
=======
}


// Function UMG.ComboBoxString.AddOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Option                         (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6D8D05BC0              		 offset:2345bc0                       

void UComboBoxString::AddOption(const struct FString& Option)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableTextBox.GetText"));

	UEditableTextBox_GetText_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ComboBoxString.AddOption"));

	UComboBoxString_AddOption_Params params;
	params.Option = Option;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.EditableTextBox.ClearError
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718620A00              		 offset:850a00                        

void UEditableTextBox::ClearError()
=======
}


// Function UMG.PanelWidget.RemoveChildAt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0ABF0              		 offset:234abf0                       

bool UPanelWidget::RemoveChildAt(int Index)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableTextBox.ClearError"));

	UEditableTextBox_ClearError_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.PanelWidget.RemoveChildAt"));

	UPanelWidget_RemoveChildAt_Params params;
	params.Index = Index;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.ExpandableArea.SetIsExpanded_Animated
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          IsExpanded                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718628B90              		 offset:858b90                        

void UExpandableArea::SetIsExpanded_Animated(bool* IsExpanded)
=======

	return params.ReturnValue;
}


// Function UMG.PanelWidget.RemoveChild
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0AB60              		 offset:234ab60                       

bool UPanelWidget::RemoveChild(class UWidget* Content)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ExpandableArea.SetIsExpanded_Animated"));

	UExpandableArea_SetIsExpanded_Animated_Params params;
	params.IsExpanded = IsExpanded;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.PanelWidget.RemoveChild"));

	UPanelWidget_RemoveChild_Params params;
	params.Content = Content;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.ExpandableArea.SetIsExpanded
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          IsExpanded                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718628B00              		 offset:858b00                        

void UExpandableArea::SetIsExpanded(bool* IsExpanded)
=======

	return params.ReturnValue;
}


// Function UMG.PanelWidget.HasChild
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                 Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D09840              		 offset:2349840                       

bool UPanelWidget::HasChild(class UWidget* Content)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ExpandableArea.SetIsExpanded"));

	UExpandableArea_SetIsExpanded_Params params;
	params.IsExpanded = IsExpanded;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.PanelWidget.HasChild"));

	UPanelWidget_HasChild_Params params;
	params.Content = Content;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.ExpandableArea.GetIsExpanded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718623150              		 offset:853150                        

bool UExpandableArea::GetIsExpanded()
=======

	return params.ReturnValue;
}


// Function UMG.PanelWidget.HasAnyChildren
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D09810              		 offset:2349810                       

bool UPanelWidget::HasAnyChildren()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ExpandableArea.GetIsExpanded"));

	UExpandableArea_GetIsExpanded_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.PanelWidget.HasAnyChildren"));

	UPanelWidget_HasAnyChildren_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.Image.SetOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InOpacity                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718629F10              		 offset:859f10                        

void UImage::SetOpacity(float* InOpacity)
=======
// Function UMG.PanelWidget.GetChildrenCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D07E10              		 offset:2347e10                       

int UPanelWidget::GetChildrenCount()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Image.SetOpacity"));

	UImage_SetOpacity_Params params;
	params.InOpacity = InOpacity;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.PanelWidget.GetChildrenCount"));

	UPanelWidget_GetChildrenCount_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.Image.SetColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor*           InColorAndOpacity              (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF718626DD0              		 offset:856dd0                        

void UImage::SetColorAndOpacity(struct FLinearColor* InColorAndOpacity)
=======

	return params.ReturnValue;
}


// Function UMG.PanelWidget.GetChildIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                 Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D07D80              		 offset:2347d80                       

int UPanelWidget::GetChildIndex(class UWidget* Content)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Image.SetColorAndOpacity"));

	UImage_SetColorAndOpacity_Params params;
	params.InColorAndOpacity = InColorAndOpacity;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.PanelWidget.GetChildIndex"));

	UPanelWidget_GetChildIndex_Params params;
	params.Content = Content;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.Image.SetBrushSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D*              BrushSize                      (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF718626BC0              		 offset:856bc0                        

void UImage::SetBrushSize(struct FVector2D* BrushSize)
=======

	return params.ReturnValue;
}


// Function UMG.PanelWidget.GetChildAt
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D096A0              		 offset:23496a0                       

class UWidget* UPanelWidget::GetChildAt(int Index)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Image.SetBrushSize"));

	UImage_SetBrushSize_Params params;
	params.BrushSize = BrushSize;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.PanelWidget.GetChildAt"));

	UPanelWidget_GetChildAt_Params params;
	params.Index = Index;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.Image.SetBrushFromTextureDynamic
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2DDynamic**      Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bMatchSize                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7186267B0              		 offset:8567b0                        

void UImage::SetBrushFromTextureDynamic(class UTexture2DDynamic** Texture, bool* bMatchSize)
=======

	return params.ReturnValue;
}


// Function UMG.PanelWidget.ClearChildren
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D8D06010              		 offset:2346010                       

void UPanelWidget::ClearChildren()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Image.SetBrushFromTextureDynamic"));

	UImage_SetBrushFromTextureDynamic_Params params;
	params.Texture = Texture;
	params.bMatchSize = bMatchSize;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.PanelWidget.ClearChildren"));

	UPanelWidget_ClearChildren_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.Image.SetBrushFromTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D**             Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bMatchSize                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7186266E0              		 offset:8566e0                        

void UImage::SetBrushFromTexture(class UTexture2D** Texture, bool* bMatchSize)
=======
// Function UMG.PanelWidget.AddChild
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPanelSlot*              ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D05740              		 offset:2345740                       

class UPanelSlot* UPanelWidget::AddChild(class UWidget* Content)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Image.SetBrushFromTexture"));

	UImage_SetBrushFromTexture_Params params;
	params.Texture = Texture;
	params.bMatchSize = bMatchSize;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.PanelWidget.AddChild"));

	UPanelWidget_AddChild_Params params;
	params.Content = Content;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.Image.SetBrushFromMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface**     Material                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7186265E0              		 offset:8565e0                        

void UImage::SetBrushFromMaterial(class UMaterialInterface** Material)
=======

	return params.ReturnValue;
}


// Function UMG.WidgetSwitcher.SetActiveWidgetIndex
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0B100              		 offset:234b100                       

void UWidgetSwitcher::SetActiveWidgetIndex(int Index)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Image.SetBrushFromMaterial"));

	UImage_SetBrushFromMaterial_Params params;
	params.Material = Material;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetSwitcher.SetActiveWidgetIndex"));

	UWidgetSwitcher_SetActiveWidgetIndex_Params params;
	params.Index = Index;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.Image.SetBrushFromAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USlateBrushAsset**       Asset                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7186264E0              		 offset:8564e0                        

void UImage::SetBrushFromAsset(class USlateBrushAsset** Asset)
=======
// Function UMG.WidgetSwitcher.SetActiveWidget
// (Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0B070              		 offset:234b070                       

void UWidgetSwitcher::SetActiveWidget(class UWidget* Widget)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Image.SetBrushFromAsset"));

	UImage_SetBrushFromAsset_Params params;
	params.Asset = Asset;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetSwitcher.SetActiveWidget"));

	UWidgetSwitcher_SetActiveWidget_Params params;
	params.Widget = Widget;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.Image.SetBrush
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSlateBrush*            InBrush                        (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF718626280              		 offset:856280                        

void UImage::SetBrush(struct FSlateBrush* InBrush)
=======
// Function UMG.WidgetSwitcher.GetWidgetAtIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D096A0              		 offset:23496a0                       

class UWidget* UWidgetSwitcher::GetWidgetAtIndex(int Index)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Image.SetBrush"));

	UImage_SetBrush_Params params;
	params.InBrush = InBrush;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetSwitcher.GetWidgetAtIndex"));

	UWidgetSwitcher_GetWidgetAtIndex_Params params;
	params.Index = Index;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.Image.GetDynamicMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7186229A0              		 offset:8529a0                        

class UMaterialInstanceDynamic* UImage::GetDynamicMaterial()
=======

	return params.ReturnValue;
}


// Function UMG.WidgetSwitcher.GetNumWidgets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D08C90              		 offset:2348c90                       

int UWidgetSwitcher::GetNumWidgets()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Image.GetDynamicMaterial"));

	UImage_GetDynamicMaterial_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetSwitcher.GetNumWidgets"));

	UWidgetSwitcher_GetNumWidgets_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.InputKeySelector.SetSelectedKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FInputChord*            InSelectedKey                  (Parm)
// FunctionAddress:0x00007FF71862AD90              		 offset:85ad90                        

void UInputKeySelector::SetSelectedKey(struct FInputChord* InSelectedKey)
=======
// Function UMG.WidgetSwitcher.GetActiveWidgetIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D07540              		 offset:2347540                       

int UWidgetSwitcher::GetActiveWidgetIndex()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.InputKeySelector.SetSelectedKey"));

	UInputKeySelector_SetSelectedKey_Params params;
	params.InSelectedKey = InSelectedKey;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetSwitcher.GetActiveWidgetIndex"));

	UWidgetSwitcher_GetActiveWidgetIndex_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.InputKeySelector.SetKeySelectionText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText*                  InKeySelectionText             (Parm)
// FunctionAddress:0x00007FF718629100              		 offset:859100                        

void UInputKeySelector::SetKeySelectionText(struct FText* InKeySelectionText)
=======

	return params.ReturnValue;
}


// Function UMG.BackgroundBlurSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D116C0              		 offset:23516c0                       

void UBackgroundBlurSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.InputKeySelector.SetKeySelectionText"));

	UInputKeySelector_SetKeySelectionText_Params params;
	params.InKeySelectionText = InKeySelectionText;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BackgroundBlurSlot.SetVerticalAlignment"));

	UBackgroundBlurSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.InputKeySelector.SetAllowModifierKeys
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bInAllowModifierKeys           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718625B30              		 offset:855b30                        

void UInputKeySelector::SetAllowModifierKeys(bool* bInAllowModifierKeys)
=======
// Function UMG.BackgroundBlurSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                 InPadding                      (Parm)
// FunctionAddress:0x00007FF6D8D0F800              		 offset:234f800                       

void UBackgroundBlurSlot::SetPadding(const struct FMargin& InPadding)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.InputKeySelector.SetAllowModifierKeys"));

	UInputKeySelector_SetAllowModifierKeys_Params params;
	params.bInAllowModifierKeys = bInAllowModifierKeys;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BackgroundBlurSlot.SetPadding"));

	UBackgroundBlurSlot_SetPadding_Params params;
	params.InPadding = InPadding;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FInputChord*            SelectedKey                    (Parm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UInputKeySelector::OnKeySelected__DelegateSignature(struct FInputChord* SelectedKey)
=======
// Function UMG.BackgroundBlurSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0D450              		 offset:234d450                       

void UBackgroundBlurSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature"));

	UInputKeySelector_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BackgroundBlurSlot.SetHorizontalAlignment"));

	UBackgroundBlurSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UInputKeySelector::OnIsSelectingKeyChanged__DelegateSignature()
=======
// Function UMG.BorderSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D117C0              		 offset:23517c0                       

void UBorderSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature"));

	UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BorderSlot.SetVerticalAlignment"));

	UBorderSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.InputKeySelector.GetIsSelectingKey
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718623180              		 offset:853180                        

bool UInputKeySelector::GetIsSelectingKey()
=======
// Function UMG.BorderSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                 InPadding                      (Parm)
// FunctionAddress:0x00007FF6D8D0F920              		 offset:234f920                       

void UBorderSlot::SetPadding(const struct FMargin& InPadding)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.InputKeySelector.GetIsSelectingKey"));

	UInputKeySelector_GetIsSelectingKey_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BorderSlot.SetPadding"));

	UBorderSlot_SetPadding_Params params;
	params.InPadding = InPadding;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.CanvasPanel.AddChildToCanvas
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget**                Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UCanvasPanelSlot*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF7186201A0              		 offset:8501a0                        

class UCanvasPanelSlot* UCanvasPanel::AddChildToCanvas(class UWidget** Content)
=======
}


// Function UMG.BorderSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0D550              		 offset:234d550                       

void UBorderSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanel.AddChildToCanvas"));

	UCanvasPanel_AddChildToCanvas_Params params;
	params.Content = Content;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BorderSlot.SetHorizontalAlignment"));

	UBorderSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.BackgroundBlur.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment>* InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862BF60              		 offset:85bf60                        

void UBackgroundBlur::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment>* InVerticalAlignment)
=======
}


// Function UMG.ButtonSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D119C0              		 offset:23519c0                       

void UButtonSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BackgroundBlur.SetVerticalAlignment"));

	UBackgroundBlur_SetVerticalAlignment_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ButtonSlot.SetVerticalAlignment"));

	UButtonSlot_SetVerticalAlignment_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.BackgroundBlur.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin*                InPadding                      (Parm)
// FunctionAddress:0x00007FF71862A090              		 offset:85a090                        

void UBackgroundBlur::SetPadding(struct FMargin* InPadding)
=======
// Function UMG.ButtonSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                 InPadding                      (Parm)
// FunctionAddress:0x00007FF6D8D0F9B0              		 offset:234f9b0                       

void UButtonSlot::SetPadding(const struct FMargin& InPadding)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BackgroundBlur.SetPadding"));

	UBackgroundBlur_SetPadding_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ButtonSlot.SetPadding"));

	UButtonSlot_SetPadding_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.BackgroundBlur.SetLowQualityFallbackBrush
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSlateBrush*            InBrush                        (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF718629380              		 offset:859380                        

void UBackgroundBlur::SetLowQualityFallbackBrush(struct FSlateBrush* InBrush)
=======
// Function UMG.ButtonSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0D5D0              		 offset:234d5d0                       

void UButtonSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BackgroundBlur.SetLowQualityFallbackBrush"));

	UBackgroundBlur_SetLowQualityFallbackBrush_Params params;
	params.InBrush = InBrush;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ButtonSlot.SetHorizontalAlignment"));

	UButtonSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.BackgroundBlur.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718627CF0              		 offset:857cf0                        

void UBackgroundBlur::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment)
=======
// Function UMG.CanvasPanelSlot.SetZOrder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InZOrder                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D11F70              		 offset:2351f70                       

void UCanvasPanelSlot::SetZOrder(int InZOrder)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BackgroundBlur.SetHorizontalAlignment"));

	UBackgroundBlur_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.SetZOrder"));

	UCanvasPanelSlot_SetZOrder_Params params;
	params.InZOrder = InZOrder;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.BackgroundBlur.SetBlurStrength
// (Native, Public, BlueprintCallable)
// Parameters:
// float*                         InStrength                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7186260A0              		 offset:8560a0                        

void UBackgroundBlur::SetBlurStrength(float* InStrength)
=======
// Function UMG.CanvasPanelSlot.SetSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               InSize                         (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D10770              		 offset:2350770                       

void UCanvasPanelSlot::SetSize(const struct FVector2D& InSize)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BackgroundBlur.SetBlurStrength"));

	UBackgroundBlur_SetBlurStrength_Params params;
	params.InStrength = InStrength;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.SetSize"));

	UCanvasPanelSlot_SetSize_Params params;
	params.InSize = InSize;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.BackgroundBlur.SetBlurRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           InBlurRadius                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718626020              		 offset:856020                        

void UBackgroundBlur::SetBlurRadius(int* InBlurRadius)
=======
// Function UMG.CanvasPanelSlot.SetPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               InPosition                     (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D10170              		 offset:2350170                       

void UCanvasPanelSlot::SetPosition(const struct FVector2D& InPosition)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BackgroundBlur.SetBlurRadius"));

	UBackgroundBlur_SetBlurRadius_Params params;
	params.InBlurRadius = InBlurRadius;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.SetPosition"));

	UCanvasPanelSlot_SetPosition_Params params;
	params.InPosition = InPosition;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.BackgroundBlur.SetApplyAlphaToBlur
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bInApplyAlphaToBlur            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718625E00              		 offset:855e00                        

void UBackgroundBlur::SetApplyAlphaToBlur(bool* bInApplyAlphaToBlur)
=======
// Function UMG.CanvasPanelSlot.SetOffsets
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                 InOffset                       (Parm)
// FunctionAddress:0x00007FF6D8D0F560              		 offset:234f560                       

void UCanvasPanelSlot::SetOffsets(const struct FMargin& InOffset)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BackgroundBlur.SetApplyAlphaToBlur"));

	UBackgroundBlur_SetApplyAlphaToBlur_Params params;
	params.bInApplyAlphaToBlur = bInApplyAlphaToBlur;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.SetOffsets"));

	UCanvasPanelSlot_SetOffsets_Params params;
	params.InOffset = InOffset;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.Border.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment>* InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862C060              		 offset:85c060                        

void UBorder::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment>* InVerticalAlignment)
=======
// Function UMG.CanvasPanelSlot.SetMinimum
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector2D               InMinimumAnchors               (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0F240              		 offset:234f240                       

void UCanvasPanelSlot::SetMinimum(const struct FVector2D& InMinimumAnchors)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.SetVerticalAlignment"));

	UBorder_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.SetMinimum"));

	UCanvasPanelSlot_SetMinimum_Params params;
	params.InMinimumAnchors = InMinimumAnchors;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.Border.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin*                InPadding                      (Parm)
// FunctionAddress:0x00007FF71862A1B0              		 offset:85a1b0                        

void UBorder::SetPadding(struct FMargin* InPadding)
=======
// Function UMG.CanvasPanelSlot.SetMaximum
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector2D               InMaximumAnchors               (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0EE40              		 offset:234ee40                       

void UCanvasPanelSlot::SetMaximum(const struct FVector2D& InMaximumAnchors)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.SetPadding"));

	UBorder_SetPadding_Params params;
	params.InPadding = InPadding;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.SetMaximum"));

	UCanvasPanelSlot_SetMaximum_Params params;
	params.InMaximumAnchors = InMaximumAnchors;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.Border.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718627DF0              		 offset:857df0                        

void UBorder::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment)
=======
// Function UMG.CanvasPanelSlot.SetLayout
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAnchorData             InLayoutData                   (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF6D8D0E930              		 offset:234e930                       

void UCanvasPanelSlot::SetLayout(const struct FAnchorData& InLayoutData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.SetHorizontalAlignment"));

	UBorder_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.SetLayout"));

	UCanvasPanelSlot_SetLayout_Params params;
	params.InLayoutData = InLayoutData;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.Border.SetDesiredSizeScale
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D*              InScale                        (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF7186272A0              		 offset:8572a0                        

void UBorder::SetDesiredSizeScale(struct FVector2D* InScale)
=======
// Function UMG.CanvasPanelSlot.SetAutoSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InbAutoSize                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0B570              		 offset:234b570                       

void UCanvasPanelSlot::SetAutoSize(bool InbAutoSize)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.SetDesiredSizeScale"));

	UBorder_SetDesiredSizeScale_Params params;
	params.InScale = InScale;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.SetAutoSize"));

	UCanvasPanelSlot_SetAutoSize_Params params;
	params.InbAutoSize = InbAutoSize;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.Border.SetContentColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor*           InContentColorAndOpacity       (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF718627160              		 offset:857160                        

void UBorder::SetContentColorAndOpacity(struct FLinearColor* InContentColorAndOpacity)
=======
// Function UMG.CanvasPanelSlot.SetAnchors
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FAnchors                InAnchors                      (Parm)
// FunctionAddress:0x00007FF6D8D0B2A0              		 offset:234b2a0                       

void UCanvasPanelSlot::SetAnchors(const struct FAnchors& InAnchors)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.SetContentColorAndOpacity"));

	UBorder_SetContentColorAndOpacity_Params params;
	params.InContentColorAndOpacity = InContentColorAndOpacity;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.SetAnchors"));

	UCanvasPanelSlot_SetAnchors_Params params;
	params.InAnchors = InAnchors;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.Border.SetBrushFromTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D**             Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718626660              		 offset:856660                        

void UBorder::SetBrushFromTexture(class UTexture2D** Texture)
=======
// Function UMG.CanvasPanelSlot.SetAlignment
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               InAlignment                    (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0B190              		 offset:234b190                       

void UCanvasPanelSlot::SetAlignment(const struct FVector2D& InAlignment)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.SetBrushFromTexture"));

	UBorder_SetBrushFromTexture_Params params;
	params.Texture = Texture;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.SetAlignment"));

	UCanvasPanelSlot_SetAlignment_Params params;
	params.InAlignment = InAlignment;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.Border.SetBrushFromMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface**     Material                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718626560              		 offset:856560                        

void UBorder::SetBrushFromMaterial(class UMaterialInterface** Material)
=======
// Function UMG.CanvasPanelSlot.GetZOrder
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D09730              		 offset:2349730                       

int UCanvasPanelSlot::GetZOrder()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.SetBrushFromMaterial"));

	UBorder_SetBrushFromMaterial_Params params;
	params.Material = Material;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.GetZOrder"));

	UCanvasPanelSlot_GetZOrder_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.Border.SetBrushFromAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USlateBrushAsset**       Asset                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718626460              		 offset:856460                        

void UBorder::SetBrushFromAsset(class USlateBrushAsset** Asset)
=======

	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.GetSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D09100              		 offset:2349100                       

struct FVector2D UCanvasPanelSlot::GetSize()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.SetBrushFromAsset"));

	UBorder_SetBrushFromAsset_Params params;
	params.Asset = Asset;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.GetSize"));

	UCanvasPanelSlot_GetSize_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.Border.SetBrushColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor*           InBrushColor                   (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF7186263E0              		 offset:8563e0                        

void UBorder::SetBrushColor(struct FLinearColor* InBrushColor)
=======

	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.GetPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D08E40              		 offset:2348e40                       

struct FVector2D UCanvasPanelSlot::GetPosition()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.SetBrushColor"));

	UBorder_SetBrushColor_Params params;
	params.InBrushColor = InBrushColor;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.GetPosition"));

	UCanvasPanelSlot_GetPosition_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.Border.SetBrush
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSlateBrush*            InBrush                        (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF718626120              		 offset:856120                        

void UBorder::SetBrush(struct FSlateBrush* InBrush)
=======

	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.GetOffsets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMargin                 ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D8D08CC0              		 offset:2348cc0                       

struct FMargin UCanvasPanelSlot::GetOffsets()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.SetBrush"));

	UBorder_SetBrush_Params params;
	params.InBrush = InBrush;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.GetOffsets"));

	UCanvasPanelSlot_GetOffsets_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.Border.GetDynamicMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718622970              		 offset:852970                        

class UMaterialInstanceDynamic* UBorder::GetDynamicMaterial()
=======

	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.GetLayout
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAnchorData             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D8D089F0              		 offset:23489f0                       

struct FAnchorData UCanvasPanelSlot::GetLayout()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.GetDynamicMaterial"));

	UBorder_GetDynamicMaterial_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.GetLayout"));

	UCanvasPanelSlot_GetLayout_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.Button.SetStyle
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FButtonStyle*           InStyle                        (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF71862B6A0              		 offset:85b6a0                        

void UButton::SetStyle(struct FButtonStyle* InStyle)
=======
// Function UMG.CanvasPanelSlot.GetAutoSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D078D0              		 offset:23478d0                       

bool UCanvasPanelSlot::GetAutoSize()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Button.SetStyle"));

	UButton_SetStyle_Params params;
	params.InStyle = InStyle;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.GetAutoSize"));

	UCanvasPanelSlot_GetAutoSize_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.Button.SetColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor*           InColorAndOpacity              (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF718626D50              		 offset:856d50                        

void UButton::SetColorAndOpacity(struct FLinearColor* InColorAndOpacity)
=======

	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.GetAnchors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAnchors                ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D8D07890              		 offset:2347890                       

struct FAnchors UCanvasPanelSlot::GetAnchors()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Button.SetColorAndOpacity"));

	UButton_SetColorAndOpacity_Params params;
	params.InColorAndOpacity = InColorAndOpacity;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.GetAnchors"));

	UCanvasPanelSlot_GetAnchors_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.Button.SetBackgroundColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor*           InBackgroundColor              (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF718625F20              		 offset:855f20                        

void UButton::SetBackgroundColor(struct FLinearColor* InBackgroundColor)
=======

	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.GetAlignment
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D07570              		 offset:2347570                       

struct FVector2D UCanvasPanelSlot::GetAlignment()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Button.SetBackgroundColor"));

	UButton_SetBackgroundColor_Params params;
	params.InBackgroundColor = InBackgroundColor;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanelSlot.GetAlignment"));

	UCanvasPanelSlot_GetAlignment_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.Button.IsPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718624440              		 offset:854440                        

bool UButton::IsPressed()
=======

	return params.ReturnValue;
}


// Function UMG.GridSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D11840              		 offset:2351840                       

void UGridSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Button.IsPressed"));

	UButton_IsPressed_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.GridSlot.SetVerticalAlignment"));

	UGridSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.CheckBox.SetIsChecked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          InIsChecked                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718628A70              		 offset:858a70                        

void UCheckBox::SetIsChecked(bool* InIsChecked)
=======
}


// Function UMG.GridSlot.SetRowSpan
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InRowSpan                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D10370              		 offset:2350370                       

void UGridSlot::SetRowSpan(int InRowSpan)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CheckBox.SetIsChecked"));

	UCheckBox_SetIsChecked_Params params;
	params.InIsChecked = InIsChecked;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.GridSlot.SetRowSpan"));

	UGridSlot_SetRowSpan_Params params;
	params.InRowSpan = InRowSpan;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.CheckBox.SetCheckedState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ECheckBoxState*                InCheckedState                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718626CD0              		 offset:856cd0                        

void UCheckBox::SetCheckedState(ECheckBoxState* InCheckedState)
=======
// Function UMG.GridSlot.SetRow
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InRow                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D10270              		 offset:2350270                       

void UGridSlot::SetRow(int InRow)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CheckBox.SetCheckedState"));

	UCheckBox_SetCheckedState_Params params;
	params.InCheckedState = InCheckedState;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.GridSlot.SetRow"));

	UGridSlot_SetRow_Params params;
	params.InRow = InRow;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.CheckBox.IsPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718624470              		 offset:854470                        

bool UCheckBox::IsPressed()
=======
// Function UMG.GridSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                 InPadding                      (Parm)
// FunctionAddress:0x00007FF6D8D0FA40              		 offset:234fa40                       

void UGridSlot::SetPadding(const struct FMargin& InPadding)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CheckBox.IsPressed"));

	UCheckBox_IsPressed_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.GridSlot.SetPadding"));

	UGridSlot_SetPadding_Params params;
	params.InPadding = InPadding;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.CheckBox.IsChecked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718624320              		 offset:854320                        

bool UCheckBox::IsChecked()
=======
}


// Function UMG.GridSlot.SetLayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InLayer                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0E8B0              		 offset:234e8b0                       

void UGridSlot::SetLayer(int InLayer)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CheckBox.IsChecked"));

	UCheckBox_IsChecked_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.GridSlot.SetLayer"));

	UGridSlot_SetLayer_Params params;
	params.InLayer = InLayer;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.CheckBox.GetCheckedState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ECheckBoxState                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718622720              		 offset:852720                        

ECheckBoxState UCheckBox::GetCheckedState()
=======
}


// Function UMG.GridSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0D650              		 offset:234d650                       

void UGridSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CheckBox.GetCheckedState"));

	UCheckBox_GetCheckedState_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.GridSlot.SetHorizontalAlignment"));

	UGridSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.InvalidationBox.SetCanCache
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          CanCache                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718626C40              		 offset:856c40                        

void UInvalidationBox::SetCanCache(bool* CanCache)
=======
}


// Function UMG.GridSlot.SetColumnSpan
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InColumnSpan                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0C730              		 offset:234c730                       

void UGridSlot::SetColumnSpan(int InColumnSpan)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.InvalidationBox.SetCanCache"));

	UInvalidationBox_SetCanCache_Params params;
	params.CanCache = CanCache;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.GridSlot.SetColumnSpan"));

	UGridSlot_SetColumnSpan_Params params;
	params.InColumnSpan = InColumnSpan;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.InvalidationBox.InvalidateCache
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718624300              		 offset:854300                        

void UInvalidationBox::InvalidateCache()
=======
// Function UMG.GridSlot.SetColumn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InColumn                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0C630              		 offset:234c630                       

void UGridSlot::SetColumn(int InColumn)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.InvalidationBox.InvalidateCache"));

	UInvalidationBox_InvalidateCache_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.GridSlot.SetColumn"));

	UGridSlot_SetColumn_Params params;
	params.InColumn = InColumn;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.InvalidationBox.GetCanCache
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7186226F0              		 offset:8526f0                        

bool UInvalidationBox::GetCanCache()
=======
// Function UMG.HorizontalBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D118C0              		 offset:23518c0                       

void UHorizontalBoxSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.InvalidationBox.GetCanCache"));

	UInvalidationBox_GetCanCache_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.HorizontalBoxSlot.SetVerticalAlignment"));

	UHorizontalBoxSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.MenuAnchor.ToggleOpen
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bFocusOnOpen                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862CDD0              		 offset:85cdd0                        

void UMenuAnchor::ToggleOpen(bool* bFocusOnOpen)
=======
}


// Function UMG.HorizontalBoxSlot.SetSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateChildSize         InSize                         (Parm)
// FunctionAddress:0x00007FF6D8D107F0              		 offset:23507f0                       

void UHorizontalBoxSlot::SetSize(const struct FSlateChildSize& InSize)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MenuAnchor.ToggleOpen"));

	UMenuAnchor_ToggleOpen_Params params;
	params.bFocusOnOpen = bFocusOnOpen;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.HorizontalBoxSlot.SetSize"));

	UHorizontalBoxSlot_SetSize_Params params;
	params.InSize = InSize;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.MenuAnchor.ShouldOpenDueToClick
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71862C990              		 offset:85c990                        

bool UMenuAnchor::ShouldOpenDueToClick()
=======
// Function UMG.HorizontalBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                 InPadding                      (Parm)
// FunctionAddress:0x00007FF6D8D0FAD0              		 offset:234fad0                       

void UHorizontalBoxSlot::SetPadding(const struct FMargin& InPadding)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MenuAnchor.ShouldOpenDueToClick"));

	UMenuAnchor_ShouldOpenDueToClick_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.HorizontalBoxSlot.SetPadding"));

	UHorizontalBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.MenuAnchor.Open
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bFocusMenu                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718624AC0              		 offset:854ac0                        

void UMenuAnchor::Open(bool* bFocusMenu)
=======
}


// Function UMG.HorizontalBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0D6D0              		 offset:234d6d0                       

void UHorizontalBoxSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MenuAnchor.Open"));

	UMenuAnchor_Open_Params params;
	params.bFocusMenu = bFocusMenu;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.HorizontalBoxSlot.SetHorizontalAlignment"));

	UHorizontalBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.MenuAnchor.IsOpen
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718624380              		 offset:854380                        

bool UMenuAnchor::IsOpen()
=======
// Function UMG.OverlaySlot.SetZOrder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InZOrder                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D11FF0              		 offset:2351ff0                       

void UOverlaySlot::SetZOrder(int InZOrder)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MenuAnchor.IsOpen"));

	UMenuAnchor_IsOpen_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.OverlaySlot.SetZOrder"));

	UOverlaySlot_SetZOrder_Params params;
	params.InZOrder = InZOrder;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.MenuAnchor.HasOpenSubMenus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7186242D0              		 offset:8542d0                        

bool UMenuAnchor::HasOpenSubMenus()
=======
}


// Function UMG.OverlaySlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D11940              		 offset:2351940                       

void UOverlaySlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MenuAnchor.HasOpenSubMenus"));

	UMenuAnchor_HasOpenSubMenus_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.OverlaySlot.SetVerticalAlignment"));

	UOverlaySlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.MenuAnchor.GetMenuPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718623530              		 offset:853530                        

struct FVector2D UMenuAnchor::GetMenuPosition()
=======
}


// Function UMG.OverlaySlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                 InPadding                      (Parm)
// FunctionAddress:0x00007FF6D8D0FB60              		 offset:234fb60                       

void UOverlaySlot::SetPadding(const struct FMargin& InPadding)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MenuAnchor.GetMenuPosition"));

	UMenuAnchor_GetMenuPosition_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.OverlaySlot.SetPadding"));

	UOverlaySlot_SetPadding_Params params;
	params.InPadding = InPadding;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.MenuAnchor.Close
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718620D70              		 offset:850d70                        

void UMenuAnchor::Close()
=======
}


// Function UMG.OverlaySlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0D750              		 offset:234d750                       

void UOverlaySlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MenuAnchor.Close"));

	UMenuAnchor_Close_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.OverlaySlot.SetHorizontalAlignment"));

	UOverlaySlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.RetainerBox.SetTextureParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  TextureParameter               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862BB70              		 offset:85bb70                        

void URetainerBox::SetTextureParameter(struct FName* TextureParameter)
=======
// Function UMG.OverlaySlot.GetZOrder
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D09760              		 offset:2349760                       

int UOverlaySlot::GetZOrder()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.RetainerBox.SetTextureParameter"));

	URetainerBox_SetTextureParameter_Params params;
	params.TextureParameter = TextureParameter;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.OverlaySlot.GetZOrder"));

	UOverlaySlot_GetZOrder_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.RetainerBox.SetEffectMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface**     EffectMaterial                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7186273A0              		 offset:8573a0                        

void URetainerBox::SetEffectMaterial(class UMaterialInterface** EffectMaterial)
=======

	return params.ReturnValue;
}


// Function UMG.ScaleBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D119C0              		 offset:23519c0                       

void UScaleBoxSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.RetainerBox.SetEffectMaterial"));

	URetainerBox_SetEffectMaterial_Params params;
	params.EffectMaterial = EffectMaterial;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScaleBoxSlot.SetVerticalAlignment"));

	UScaleBoxSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.RetainerBox.RequestRender
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718625720              		 offset:855720                        

void URetainerBox::RequestRender()
=======
// Function UMG.ScaleBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                 InPadding                      (Parm)
// FunctionAddress:0x00007FF6D8D0FBF0              		 offset:234fbf0                       

void UScaleBoxSlot::SetPadding(const struct FMargin& InPadding)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.RetainerBox.RequestRender"));

	URetainerBox_RequestRender_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScaleBoxSlot.SetPadding"));

	UScaleBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.RetainerBox.GetEffectMaterial
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718622B30              		 offset:852b30                        

class UMaterialInstanceDynamic* URetainerBox::GetEffectMaterial()
=======
// Function UMG.ScaleBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0D5D0              		 offset:234d5d0                       

void UScaleBoxSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.RetainerBox.GetEffectMaterial"));

	URetainerBox_GetEffectMaterial_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScaleBoxSlot.SetHorizontalAlignment"));

	UScaleBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.ScaleBox.SetUserSpecifiedScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InUserSpecifiedScale           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862BDE0              		 offset:85bde0                        

void UScaleBox::SetUserSpecifiedScale(float* InUserSpecifiedScale)
=======
}


// Function UMG.ScrollBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                 InPadding                      (Parm)
// FunctionAddress:0x00007FF6D8D0FC80              		 offset:234fc80                       

void UScrollBoxSlot::SetPadding(const struct FMargin& InPadding)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScaleBox.SetUserSpecifiedScale"));

	UScaleBox_SetUserSpecifiedScale_Params params;
	params.InUserSpecifiedScale = InUserSpecifiedScale;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBoxSlot.SetPadding"));

	UScrollBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.ScaleBox.SetStretchDirection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EStretchDirection>* InStretchDirection             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862B620              		 offset:85b620                        

void UScaleBox::SetStretchDirection(TEnumAsByte<EStretchDirection>* InStretchDirection)
=======
// Function UMG.ScrollBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0D7D0              		 offset:234d7d0                       

void UScrollBoxSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScaleBox.SetStretchDirection"));

	UScaleBox_SetStretchDirection_Params params;
	params.InStretchDirection = InStretchDirection;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBoxSlot.SetHorizontalAlignment"));

	UScrollBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.ScaleBox.SetStretch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EStretch>*         InStretch                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862B5A0              		 offset:85b5a0                        

void UScaleBox::SetStretch(TEnumAsByte<EStretch>* InStretch)
=======
// Function UMG.SizeBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D11A40              		 offset:2351a40                       

void USizeBoxSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScaleBox.SetStretch"));

	UScaleBox_SetStretch_Params params;
	params.InStretch = InStretch;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBoxSlot.SetVerticalAlignment"));

	USizeBoxSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.ScaleBox.SetIgnoreInheritedScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bInIgnoreInheritedScale        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7186283F0              		 offset:8583f0                        

void UScaleBox::SetIgnoreInheritedScale(bool* bInIgnoreInheritedScale)
=======
// Function UMG.SizeBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                 InPadding                      (Parm)
// FunctionAddress:0x00007FF6D8D0FD10              		 offset:234fd10                       

void USizeBoxSlot::SetPadding(const struct FMargin& InPadding)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScaleBox.SetIgnoreInheritedScale"));

	UScaleBox_SetIgnoreInheritedScale_Params params;
	params.bInIgnoreInheritedScale = bInIgnoreInheritedScale;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBoxSlot.SetPadding"));

	USizeBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.SizeBox.SetWidthOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InWidthOverride                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862C790              		 offset:85c790                        

void USizeBox::SetWidthOverride(float* InWidthOverride)
=======
// Function UMG.SizeBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0D850              		 offset:234d850                       

void USizeBoxSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.SetWidthOverride"));

	USizeBox_SetWidthOverride_Params params;
	params.InWidthOverride = InWidthOverride;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBoxSlot.SetHorizontalAlignment"));

	USizeBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.SizeBox.SetMinDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InMinDesiredWidth              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718629960              		 offset:859960                        

void USizeBox::SetMinDesiredWidth(float* InMinDesiredWidth)
=======
// Function UMG.UniformGridSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D11AC0              		 offset:2351ac0                       

void UUniformGridSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.SetMinDesiredWidth"));

	USizeBox_SetMinDesiredWidth_Params params;
	params.InMinDesiredWidth = InMinDesiredWidth;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UniformGridSlot.SetVerticalAlignment"));

	UUniformGridSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.SizeBox.SetMinDesiredHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InMinDesiredHeight             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7186297E0              		 offset:8597e0                        

void USizeBox::SetMinDesiredHeight(float* InMinDesiredHeight)
=======
// Function UMG.UniformGridSlot.SetRow
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InRow                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D102F0              		 offset:23502f0                       

void UUniformGridSlot::SetRow(int InRow)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.SetMinDesiredHeight"));

	USizeBox_SetMinDesiredHeight_Params params;
	params.InMinDesiredHeight = InMinDesiredHeight;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UniformGridSlot.SetRow"));

	UUniformGridSlot_SetRow_Params params;
	params.InRow = InRow;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.SizeBox.SetMaxDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InMaxDesiredWidth              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7186295E0              		 offset:8595e0                        

void USizeBox::SetMaxDesiredWidth(float* InMaxDesiredWidth)
=======
// Function UMG.UniformGridSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0D8D0              		 offset:234d8d0                       

void UUniformGridSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.SetMaxDesiredWidth"));

	USizeBox_SetMaxDesiredWidth_Params params;
	params.InMaxDesiredWidth = InMaxDesiredWidth;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UniformGridSlot.SetHorizontalAlignment"));

	UUniformGridSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.SizeBox.SetMaxDesiredHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InMaxDesiredHeight             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718629560              		 offset:859560                        

void USizeBox::SetMaxDesiredHeight(float* InMaxDesiredHeight)
=======
// Function UMG.UniformGridSlot.SetColumn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InColumn                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0C6B0              		 offset:234c6b0                       

void UUniformGridSlot::SetColumn(int InColumn)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.SetMaxDesiredHeight"));

	USizeBox_SetMaxDesiredHeight_Params params;
	params.InMaxDesiredHeight = InMaxDesiredHeight;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UniformGridSlot.SetColumn"));

	UUniformGridSlot_SetColumn_Params params;
	params.InColumn = InColumn;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.SizeBox.SetMaxAspectRatio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InMaxAspectRatio               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7186294E0              		 offset:8594e0                        

void USizeBox::SetMaxAspectRatio(float* InMaxAspectRatio)
=======
// Function UMG.VerticalBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D118C0              		 offset:23518c0                       

void UVerticalBoxSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.SetMaxAspectRatio"));

	USizeBox_SetMaxAspectRatio_Params params;
	params.InMaxAspectRatio = InMaxAspectRatio;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.VerticalBoxSlot.SetVerticalAlignment"));

	UVerticalBoxSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.SizeBox.SetHeightOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InHeightOverride               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718627AD0              		 offset:857ad0                        

void USizeBox::SetHeightOverride(float* InHeightOverride)
=======
// Function UMG.VerticalBoxSlot.SetSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateChildSize         InSize                         (Parm)
// FunctionAddress:0x00007FF6D8D10910              		 offset:2350910                       

void UVerticalBoxSlot::SetSize(const struct FSlateChildSize& InSize)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.SetHeightOverride"));

	USizeBox_SetHeightOverride_Params params;
	params.InHeightOverride = InHeightOverride;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.VerticalBoxSlot.SetSize"));

	UVerticalBoxSlot_SetSize_Params params;
	params.InSize = InSize;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.SizeBox.ClearWidthOverride
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718620D50              		 offset:850d50                        

void USizeBox::ClearWidthOverride()
=======
// Function UMG.VerticalBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                 InPadding                      (Parm)
// FunctionAddress:0x00007FF6D8D0FDA0              		 offset:234fda0                       

void UVerticalBoxSlot::SetPadding(const struct FMargin& InPadding)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.ClearWidthOverride"));

	USizeBox_ClearWidthOverride_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.VerticalBoxSlot.SetPadding"));

	UVerticalBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.SizeBox.ClearMinDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718620B00              		 offset:850b00                        

void USizeBox::ClearMinDesiredWidth()
=======
// Function UMG.VerticalBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0D6D0              		 offset:234d6d0                       

void UVerticalBoxSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.ClearMinDesiredWidth"));

	USizeBox_ClearMinDesiredWidth_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.VerticalBoxSlot.SetHorizontalAlignment"));

	UVerticalBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.SizeBox.ClearMinDesiredHeight
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718620AE0              		 offset:850ae0                        

void USizeBox::ClearMinDesiredHeight()
=======
// Function UMG.WidgetSwitcherSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D11940              		 offset:2351940                       

void UWidgetSwitcherSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.ClearMinDesiredHeight"));

	USizeBox_ClearMinDesiredHeight_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetSwitcherSlot.SetVerticalAlignment"));

	UWidgetSwitcherSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.SizeBox.ClearMaxDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718620A80              		 offset:850a80                        

void USizeBox::ClearMaxDesiredWidth()
=======
// Function UMG.WidgetSwitcherSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                 InPadding                      (Parm)
// FunctionAddress:0x00007FF6D8D0FE30              		 offset:234fe30                       

void UWidgetSwitcherSlot::SetPadding(const struct FMargin& InPadding)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.ClearMaxDesiredWidth"));

	USizeBox_ClearMaxDesiredWidth_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetSwitcherSlot.SetPadding"));

	UWidgetSwitcherSlot_SetPadding_Params params;
	params.InPadding = InPadding;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.SizeBox.ClearMaxDesiredHeight
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718620A60              		 offset:850a60                        

void USizeBox::ClearMaxDesiredHeight()
=======
// Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0D750              		 offset:234d750                       

void UWidgetSwitcherSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.ClearMaxDesiredHeight"));

	USizeBox_ClearMaxDesiredHeight_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment"));

	UWidgetSwitcherSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.SizeBox.ClearMaxAspectRatio
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718620A40              		 offset:850a40                        

void USizeBox::ClearMaxAspectRatio()
=======
// Function UMG.ContentWidget.SetContent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPanelSlot*              ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0C7B0              		 offset:234c7b0                       

class UPanelSlot* UContentWidget::SetContent(class UWidget* Content)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.ClearMaxAspectRatio"));

	USizeBox_ClearMaxAspectRatio_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ContentWidget.SetContent"));

	UContentWidget_SetContent_Params params;
	params.Content = Content;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.SizeBox.ClearHeightOverride
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718620A20              		 offset:850a20                        

void USizeBox::ClearHeightOverride()
=======

	return params.ReturnValue;
}


// Function UMG.ContentWidget.GetContentSlot
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPanelSlot*              ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D07E70              		 offset:2347e70                       

class UPanelSlot* UContentWidget::GetContentSlot()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.ClearHeightOverride"));

	USizeBox_ClearHeightOverride_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ContentWidget.GetContentSlot"));

	UContentWidget_GetContentSlot_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.Viewport.Spawn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass**                 ActorClass                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71862CD40              		 offset:85cd40                        

class AActor* UViewport::Spawn(class UClass** ActorClass)
=======

	return params.ReturnValue;
}


// Function UMG.ContentWidget.GetContent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D07E40              		 offset:2347e40                       

class UWidget* UContentWidget::GetContent()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Viewport.Spawn"));

	UViewport_Spawn_Params params;
	params.ActorClass = ActorClass;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ContentWidget.GetContent"));

	UContentWidget_GetContent_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.Viewport.SetViewRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator*               Rotation                       (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF71862C670              		 offset:85c670                        

void UViewport::SetViewRotation(struct FRotator* Rotation)
=======
// Function UMG.WindowTitleBarArea.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D11B40              		 offset:2351b40                       

void UWindowTitleBarArea::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Viewport.SetViewRotation"));

	UViewport_SetViewRotation_Params params;
	params.Rotation = Rotation;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WindowTitleBarArea.SetVerticalAlignment"));

	UWindowTitleBarArea_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.Viewport.SetViewLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Location                       (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF71862C5E0              		 offset:85c5e0                        

void UViewport::SetViewLocation(struct FVector* Location)
=======
// Function UMG.WindowTitleBarArea.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                 InPadding                      (Parm)
// FunctionAddress:0x00007FF6D8D0FEC0              		 offset:234fec0                       

void UWindowTitleBarArea::SetPadding(const struct FMargin& InPadding)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Viewport.SetViewLocation"));

	UViewport_SetViewLocation_Params params;
	params.Location = Location;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WindowTitleBarArea.SetPadding"));

	UWindowTitleBarArea_SetPadding_Params params;
	params.InPadding = InPadding;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.Viewport.GetViewRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718623F70              		 offset:853f70                        

struct FRotator UViewport::GetViewRotation()
=======
// Function UMG.WindowTitleBarArea.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0D950              		 offset:234d950                       

void UWindowTitleBarArea::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Viewport.GetViewRotation"));

	UViewport_GetViewRotation_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WindowTitleBarArea.SetHorizontalAlignment"));

	UWindowTitleBarArea_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.Viewport.GetViewportWorld
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWorld*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7186240D0              		 offset:8540d0                        

class UWorld* UViewport::GetViewportWorld()
=======
}


// Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D11BC0              		 offset:2351bc0                       

void UWindowTitleBarAreaSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Viewport.GetViewportWorld"));

	UViewport_GetViewportWorld_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment"));

	UWindowTitleBarAreaSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.Viewport.GetViewLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718623F30              		 offset:853f30                        

struct FVector UViewport::GetViewLocation()
=======
}


// Function UMG.WindowTitleBarAreaSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                 InPadding                      (Parm)
// FunctionAddress:0x00007FF6D8D0FF50              		 offset:234ff50                       

void UWindowTitleBarAreaSlot::SetPadding(const struct FMargin& InPadding)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Viewport.GetViewLocation"));

	UViewport_GetViewLocation_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WindowTitleBarAreaSlot.SetPadding"));

	UWindowTitleBarAreaSlot_SetPadding_Params params;
	params.InPadding = InPadding;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.GridPanel.AddChildToGrid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget**                Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGridSlot*               ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF718620230              		 offset:850230                        

class UGridSlot* UGridPanel::AddChildToGrid(class UWidget** Content)
=======
}


// Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0D9D0              		 offset:234d9d0                       

void UWindowTitleBarAreaSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.GridPanel.AddChildToGrid"));

	UGridPanel_AddChildToGrid_Params params;
	params.Content = Content;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment"));

	UWindowTitleBarAreaSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.HorizontalBox.AddChildToHorizontalBox
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget**                Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UHorizontalBoxSlot*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF7186202C0              		 offset:8502c0                        

class UHorizontalBoxSlot* UHorizontalBox::AddChildToHorizontalBox(class UWidget** Content)
=======
}


// Function UMG.WrapBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D11C40              		 offset:2351c40                       

void UWrapBoxSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.HorizontalBox.AddChildToHorizontalBox"));

	UHorizontalBox_AddChildToHorizontalBox_Params params;
	params.Content = Content;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WrapBoxSlot.SetVerticalAlignment"));

	UWrapBoxSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.Overlay.AddChildToOverlay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget**                Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UOverlaySlot*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF718620350              		 offset:850350                        

class UOverlaySlot* UOverlay::AddChildToOverlay(class UWidget** Content)
=======
}


// Function UMG.WrapBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                 InPadding                      (Parm)
// FunctionAddress:0x00007FF6D8D0FFE0              		 offset:234ffe0                       

void UWrapBoxSlot::SetPadding(const struct FMargin& InPadding)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Overlay.AddChildToOverlay"));

	UOverlay_AddChildToOverlay_Params params;
	params.Content = Content;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WrapBoxSlot.SetPadding"));

	UWrapBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.ScrollBox.SetScrollOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         NewScrollOffset                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862AD10              		 offset:85ad10                        

void UScrollBox::SetScrollOffset(float* NewScrollOffset)
=======
}


// Function UMG.WrapBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0DA50              		 offset:234da50                       

void UWrapBoxSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBox.SetScrollOffset"));

	UScrollBox_SetScrollOffset_Params params;
	params.NewScrollOffset = NewScrollOffset;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WrapBoxSlot.SetHorizontalAlignment"));

	UWrapBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.ScrollBox.ScrollWidgetIntoView
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget**                WidgetToFind                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          AnimateScroll                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718625800              		 offset:855800                        

void UScrollBox::ScrollWidgetIntoView(class UWidget** WidgetToFind, bool* AnimateScroll)
=======
// Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InFillSpanWhenLessThan         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0CDB0              		 offset:234cdb0                       

void UWrapBoxSlot::SetFillSpanWhenLessThan(float InFillSpanWhenLessThan)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBox.ScrollWidgetIntoView"));

	UScrollBox_ScrollWidgetIntoView_Params params;
	params.WidgetToFind = WidgetToFind;
	params.AnimateScroll = AnimateScroll;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan"));

	UWrapBoxSlot_SetFillSpanWhenLessThan_Params params;
	params.InFillSpanWhenLessThan = InFillSpanWhenLessThan;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.ScrollBox.ScrollToStart
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718625760              		 offset:855760                        

void UScrollBox::ScrollToStart()
=======
// Function UMG.WrapBoxSlot.SetFillEmptySpace
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InbFillEmptySpace              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0CD20              		 offset:234cd20                       

void UWrapBoxSlot::SetFillEmptySpace(bool InbFillEmptySpace)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBox.ScrollToStart"));

	UScrollBox_ScrollToStart_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WrapBoxSlot.SetFillEmptySpace"));

	UWrapBoxSlot_SetFillEmptySpace_Params params;
	params.InbFillEmptySpace = InbFillEmptySpace;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.ScrollBox.ScrollToEnd
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718625740              		 offset:855740                        

void UScrollBox::ScrollToEnd()
=======
// Function UMG.CircularThrobber.SetRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InRadius                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D101F0              		 offset:23501f0                       

void UCircularThrobber::SetRadius(float InRadius)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBox.ScrollToEnd"));

	UScrollBox_ScrollToEnd_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CircularThrobber.SetRadius"));

	UCircularThrobber_SetRadius_Params params;
	params.InRadius = InRadius;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.ScrollBox.GetScrollToEndOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718623AA0              		 offset:853aa0                        

float UScrollBox::GetScrollToEndOffset()
=======
// Function UMG.CircularThrobber.SetPeriod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InPeriod                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D100F0              		 offset:23500f0                       

void UCircularThrobber::SetPeriod(float InPeriod)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBox.GetScrollToEndOffset"));

	UScrollBox_GetScrollToEndOffset_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CircularThrobber.SetPeriod"));

	UCircularThrobber_SetPeriod_Params params;
	params.InPeriod = InPeriod;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.ScrollBox.GetScrollOffset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718623A70              		 offset:853a70                        

float UScrollBox::GetScrollOffset()
=======
}


// Function UMG.CircularThrobber.SetNumberOfPieces
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InNumberOfPieces               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0F460              		 offset:234f460                       

void UCircularThrobber::SetNumberOfPieces(int InNumberOfPieces)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBox.GetScrollOffset"));

	UScrollBox_GetScrollOffset_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CircularThrobber.SetNumberOfPieces"));

	UCircularThrobber_SetNumberOfPieces_Params params;
	params.InNumberOfPieces = InNumberOfPieces;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.UniformGridPanel.SetSlotPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin*                InSlotPadding                  (Parm)
// FunctionAddress:0x00007FF71862B3D0              		 offset:85b3d0                        

void UUniformGridPanel::SetSlotPadding(struct FMargin* InSlotPadding)
=======
}


// Function UMG.EditableText.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   InText                         (Parm)
// FunctionAddress:0x00007FF6D8D10E40              		 offset:2350e40                       

void UEditableText::SetText(const struct FText& InText)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UniformGridPanel.SetSlotPadding"));

	UUniformGridPanel_SetSlotPadding_Params params;
	params.InSlotPadding = InSlotPadding;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableText.SetText"));

	UEditableText_SetText_Params params;
	params.InText = InText;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.UniformGridPanel.SetMinDesiredSlotWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InMinDesiredSlotWidth          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7186298E0              		 offset:8598e0                        

void UUniformGridPanel::SetMinDesiredSlotWidth(float* InMinDesiredSlotWidth)
=======
// Function UMG.EditableText.SetIsReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InbIsReadyOnly                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0E420              		 offset:234e420                       

void UEditableText::SetIsReadOnly(bool InbIsReadyOnly)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UniformGridPanel.SetMinDesiredSlotWidth"));

	UUniformGridPanel_SetMinDesiredSlotWidth_Params params;
	params.InMinDesiredSlotWidth = InMinDesiredSlotWidth;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableText.SetIsReadOnly"));

	UEditableText_SetIsReadOnly_Params params;
	params.InbIsReadyOnly = InbIsReadyOnly;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.UniformGridPanel.SetMinDesiredSlotHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InMinDesiredSlotHeight         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718629860              		 offset:859860                        

void UUniformGridPanel::SetMinDesiredSlotHeight(float* InMinDesiredSlotHeight)
=======
// Function UMG.EditableText.SetIsPassword
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InbIsPassword                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0E390              		 offset:234e390                       

void UEditableText::SetIsPassword(bool InbIsPassword)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UniformGridPanel.SetMinDesiredSlotHeight"));

	UUniformGridPanel_SetMinDesiredSlotHeight_Params params;
	params.InMinDesiredSlotHeight = InMinDesiredSlotHeight;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableText.SetIsPassword"));

	UEditableText_SetIsPassword_Params params;
	params.InbIsPassword = InbIsPassword;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.UniformGridPanel.AddChildToUniformGrid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget**                Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UUniformGridSlot*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF7186203E0              		 offset:8503e0                        

class UUniformGridSlot* UUniformGridPanel::AddChildToUniformGrid(class UWidget** Content)
=======
// Function UMG.EditableText.SetHintText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   InHintText                     (Parm)
// FunctionAddress:0x00007FF6D8D0D230              		 offset:234d230                       

void UEditableText::SetHintText(const struct FText& InHintText)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UniformGridPanel.AddChildToUniformGrid"));

	UUniformGridPanel_AddChildToUniformGrid_Params params;
	params.Content = Content;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableText.SetHintText"));

	UEditableText_SetHintText_Params params;
	params.InHintText = InHintText;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.VerticalBox.AddChildToVerticalBox
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget**                Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UVerticalBoxSlot*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF718620470              		 offset:850470                        

class UVerticalBoxSlot* UVerticalBox::AddChildToVerticalBox(class UWidget** Content)
=======
}


// DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UEditableText::OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.VerticalBox.AddChildToVerticalBox"));

	UVerticalBox_AddChildToVerticalBox_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature"));

	UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.WidgetSwitcher.SetActiveWidgetIndex
// (Native, Public, BlueprintCallable)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718625A20              		 offset:855a20                        

void UWidgetSwitcher::SetActiveWidgetIndex(int* Index)
=======
}


// DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UEditableText::OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetSwitcher.SetActiveWidgetIndex"));

	UWidgetSwitcher_SetActiveWidgetIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature"));

	UEditableText_OnEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.WidgetSwitcher.SetActiveWidget
// (Native, Public, BlueprintCallable)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF71A6D6370              		 offset:2906370                       

void UWidgetSwitcher::SetActiveWidget(class UWidget** Widget)
=======
// Function UMG.EditableText.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D8D09170              		 offset:2349170                       

struct FText UEditableText::GetText()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetSwitcher.SetActiveWidget"));

	UWidgetSwitcher_SetActiveWidget_Params params;
	params.Widget = Widget;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableText.GetText"));

	UEditableText_GetText_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.WidgetSwitcher.GetWidgetAtIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF718622750              		 offset:852750                        

class UWidget* UWidgetSwitcher::GetWidgetAtIndex(int* Index)
=======

	return params.ReturnValue;
}


// Function UMG.EditableTextBox.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   InText                         (Parm)
// FunctionAddress:0x00007FF6D8D10F10              		 offset:2350f10                       

void UEditableTextBox::SetText(const struct FText& InText)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetSwitcher.GetWidgetAtIndex"));

	UWidgetSwitcher_GetWidgetAtIndex_Params params;
	params.Index = Index;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableTextBox.SetText"));

	UEditableTextBox_SetText_Params params;
	params.InText = InText;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.WidgetSwitcher.GetNumWidgets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7186236F0              		 offset:8536f0                        

int UWidgetSwitcher::GetNumWidgets()
=======
}


// Function UMG.EditableTextBox.SetIsReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bReadOnly                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0E4B0              		 offset:234e4b0                       

void UEditableTextBox::SetIsReadOnly(bool bReadOnly)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetSwitcher.GetNumWidgets"));

	UWidgetSwitcher_GetNumWidgets_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableTextBox.SetIsReadOnly"));

	UEditableTextBox_SetIsReadOnly_Params params;
	params.bReadOnly = bReadOnly;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.WidgetSwitcher.GetActiveWidgetIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718621F10              		 offset:851f10                        

int UWidgetSwitcher::GetActiveWidgetIndex()
=======
}


// Function UMG.EditableTextBox.SetHintText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   InText                         (Parm)
// FunctionAddress:0x00007FF6D8D0D300              		 offset:234d300                       

void UEditableTextBox::SetHintText(const struct FText& InText)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetSwitcher.GetActiveWidgetIndex"));

	UWidgetSwitcher_GetActiveWidgetIndex_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableTextBox.SetHintText"));

	UEditableTextBox_SetHintText_Params params;
	params.InText = InText;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.WrapBox.SetInnerSlotPadding
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D*              InPadding                      (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF718628510              		 offset:858510                        

void UWrapBox::SetInnerSlotPadding(struct FVector2D* InPadding)
=======
}


// Function UMG.EditableTextBox.SetError
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   InError                        (Parm)
// FunctionAddress:0x00007FF6D8D0CB00              		 offset:234cb00                       

void UEditableTextBox::SetError(const struct FText& InError)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WrapBox.SetInnerSlotPadding"));

	UWrapBox_SetInnerSlotPadding_Params params;
	params.InPadding = InPadding;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableTextBox.SetError"));

	UEditableTextBox_SetError_Params params;
	params.InError = InError;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.WrapBox.AddChildWrapBox
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget**                Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWrapBoxSlot*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF718620500              		 offset:850500                        

class UWrapBoxSlot* UWrapBox::AddChildWrapBox(class UWidget** Content)
=======
// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UEditableTextBox::OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WrapBox.AddChildWrapBox"));

	UWrapBox_AddChildWrapBox_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature"));

	UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.ProgressBar.SetPercent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InPercent                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862A990              		 offset:85a990                        

void UProgressBar::SetPercent(float* InPercent)
=======
}


// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UEditableTextBox::OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ProgressBar.SetPercent"));

	UProgressBar_SetPercent_Params params;
	params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature"));

	UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.ProgressBar.SetIsMarquee
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          InbIsMarquee                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718628C20              		 offset:858c20                        

void UProgressBar::SetIsMarquee(bool* InbIsMarquee)
=======
// Function UMG.EditableTextBox.HasError
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D098D0              		 offset:23498d0                       

bool UEditableTextBox::HasError()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ProgressBar.SetIsMarquee"));

	UProgressBar_SetIsMarquee_Params params;
	params.InbIsMarquee = InbIsMarquee;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableTextBox.HasError"));

	UEditableTextBox_HasError_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.ProgressBar.SetFillColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor*           InColor                        (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF7186275C0              		 offset:8575c0                        

void UProgressBar::SetFillColorAndOpacity(struct FLinearColor* InColor)
=======

	return params.ReturnValue;
}


// Function UMG.EditableTextBox.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D8D09200              		 offset:2349200                       

struct FText UEditableTextBox::GetText()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ProgressBar.SetFillColorAndOpacity"));

	UProgressBar_SetFillColorAndOpacity_Params params;
	params.InColor = InColor;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableTextBox.GetText"));

	UEditableTextBox_GetText_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.ScrollBar.SetState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InOffsetFraction               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InThumbSizeFraction            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862B460              		 offset:85b460                        

void UScrollBar::SetState(float* InOffsetFraction, float* InThumbSizeFraction)
=======

	return params.ReturnValue;
}


// Function UMG.EditableTextBox.ClearError
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D8D06030              		 offset:2346030                       

void UEditableTextBox::ClearError()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBar.SetState"));

	UScrollBar_SetState_Params params;
	params.InOffsetFraction = InOffsetFraction;
	params.InThumbSizeFraction = InThumbSizeFraction;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.EditableTextBox.ClearError"));

	UEditableTextBox_ClearError_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.Slider.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862BE60              		 offset:85be60                        

void USlider::SetValue(float* InValue)
=======
// Function UMG.ExpandableArea.SetIsExpanded_Animated
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           IsExpanded                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0E270              		 offset:234e270                       

void UExpandableArea::SetIsExpanded_Animated(bool IsExpanded)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Slider.SetValue"));

	USlider_SetValue_Params params;
	params.InValue = InValue;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ExpandableArea.SetIsExpanded_Animated"));

	UExpandableArea_SetIsExpanded_Animated_Params params;
	params.IsExpanded = IsExpanded;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.Slider.SetStepSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862B520              		 offset:85b520                        

void USlider::SetStepSize(float* InValue)
=======
// Function UMG.ExpandableArea.SetIsExpanded
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           IsExpanded                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0E1E0              		 offset:234e1e0                       

void UExpandableArea::SetIsExpanded(bool IsExpanded)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Slider.SetStepSize"));

	USlider_SetStepSize_Params params;
	params.InValue = InValue;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ExpandableArea.SetIsExpanded"));

	UExpandableArea_SetIsExpanded_Params params;
	params.IsExpanded = IsExpanded;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.Slider.SetSliderHandleColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor*           InValue                        (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF71862B350              		 offset:85b350                        

void USlider::SetSliderHandleColor(struct FLinearColor* InValue)
=======
// Function UMG.ExpandableArea.GetIsExpanded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D086F0              		 offset:23486f0                       

bool UExpandableArea::GetIsExpanded()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Slider.SetSliderHandleColor"));

	USlider_SetSliderHandleColor_Params params;
	params.InValue = InValue;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ExpandableArea.GetIsExpanded"));

	UExpandableArea_GetIsExpanded_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.Slider.SetSliderBarColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor*           InValue                        (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF71862B2D0              		 offset:85b2d0                        

void USlider::SetSliderBarColor(struct FLinearColor* InValue)
=======

	return params.ReturnValue;
}


// Function UMG.Image.SetOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InOpacity                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0F5F0              		 offset:234f5f0                       

void UImage::SetOpacity(float InOpacity)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Slider.SetSliderBarColor"));

	USlider_SetSliderBarColor_Params params;
	params.InValue = InValue;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Image.SetOpacity"));

	UImage_SetOpacity_Params params;
	params.InOpacity = InOpacity;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.Slider.SetLocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7186292F0              		 offset:8592f0                        

void USlider::SetLocked(bool* InValue)
=======
// Function UMG.Image.SetColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InColorAndOpacity              (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0C4B0              		 offset:234c4b0                       

void UImage::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Slider.SetLocked"));

	USlider_SetLocked_Params params;
	params.InValue = InValue;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Image.SetColorAndOpacity"));

	UImage_SetColorAndOpacity_Params params;
	params.InColorAndOpacity = InColorAndOpacity;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.Slider.SetIndentHandle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718628480              		 offset:858480                        

void USlider::SetIndentHandle(bool* InValue)
=======
// Function UMG.Image.SetBrushSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               BrushSize                      (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0C2A0              		 offset:234c2a0                       

void UImage::SetBrushSize(const struct FVector2D& BrushSize)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Slider.SetIndentHandle"));

	USlider_SetIndentHandle_Params params;
	params.InValue = InValue;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Image.SetBrushSize"));

	UImage_SetBrushSize_Params params;
	params.BrushSize = BrushSize;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.Slider.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718623ED0              		 offset:853ed0                        

float USlider::GetValue()
=======
// Function UMG.Image.SetBrushFromTextureDynamic
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2DDynamic*       Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bMatchSize                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0BE90              		 offset:234be90                       

void UImage::SetBrushFromTextureDynamic(class UTexture2DDynamic* Texture, bool bMatchSize)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Slider.GetValue"));

	USlider_GetValue_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Image.SetBrushFromTextureDynamic"));

	UImage_SetBrushFromTextureDynamic_Params params;
	params.Texture = Texture;
	params.bMatchSize = bMatchSize;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.Spacer.SetSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D*              InSize                         (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF71862B1B0              		 offset:85b1b0                        

void USpacer::SetSize(struct FVector2D* InSize)
=======
}


// Function UMG.Image.SetBrushFromTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bMatchSize                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0BDC0              		 offset:234bdc0                       

void UImage::SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Spacer.SetSize"));

	USpacer_SetSize_Params params;
	params.InSize = InSize;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Image.SetBrushFromTexture"));

	UImage_SetBrushFromTexture_Params params;
	params.Texture = Texture;
	params.bMatchSize = bMatchSize;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.SpinBox.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         NewValue                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862BEE0              		 offset:85bee0                        

void USpinBox::SetValue(float* NewValue)
=======
// Function UMG.Image.SetBrushFromMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*      Material                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0BCC0              		 offset:234bcc0                       

void UImage::SetBrushFromMaterial(class UMaterialInterface* Material)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.SetValue"));

	USpinBox_SetValue_Params params;
	params.NewValue = NewValue;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Image.SetBrushFromMaterial"));

	UImage_SetBrushFromMaterial_Params params;
	params.Material = Material;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.SpinBox.SetMinValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         NewValue                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718629AE0              		 offset:859ae0                        

void USpinBox::SetMinValue(float* NewValue)
=======
// Function UMG.Image.SetBrushFromAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USlateBrushAsset*        Asset                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0BBC0              		 offset:234bbc0                       

void UImage::SetBrushFromAsset(class USlateBrushAsset* Asset)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.SetMinValue"));

	USpinBox_SetMinValue_Params params;
	params.NewValue = NewValue;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Image.SetBrushFromAsset"));

	UImage_SetBrushFromAsset_Params params;
	params.Asset = Asset;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.SpinBox.SetMinSliderValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         NewValue                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718629A60              		 offset:859a60                        

void USpinBox::SetMinSliderValue(float* NewValue)
=======
// Function UMG.Image.SetBrush
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSlateBrush             InBrush                        (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF6D8D0B960              		 offset:234b960                       

void UImage::SetBrush(const struct FSlateBrush& InBrush)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.SetMinSliderValue"));

	USpinBox_SetMinSliderValue_Params params;
	params.NewValue = NewValue;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Image.SetBrush"));

	UImage_SetBrush_Params params;
	params.InBrush = InBrush;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.SpinBox.SetMaxValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         NewValue                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7186296E0              		 offset:8596e0                        

void USpinBox::SetMaxValue(float* NewValue)
=======
// Function UMG.Image.GetDynamicMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D07F40              		 offset:2347f40                       

class UMaterialInstanceDynamic* UImage::GetDynamicMaterial()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.SetMaxValue"));

	USpinBox_SetMaxValue_Params params;
	params.NewValue = NewValue;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Image.GetDynamicMaterial"));

	UImage_GetDynamicMaterial_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.SpinBox.SetMaxSliderValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         NewValue                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718629660              		 offset:859660                        

void USpinBox::SetMaxSliderValue(float* NewValue)
=======

	return params.ReturnValue;
}


// Function UMG.InputKeySelector.SetSelectedKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FInputChord             InSelectedKey                  (Parm)
// FunctionAddress:0x00007FF6D8D10470              		 offset:2350470                       

void UInputKeySelector::SetSelectedKey(const struct FInputChord& InSelectedKey)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.SetMaxSliderValue"));

	USpinBox_SetMaxSliderValue_Params params;
	params.NewValue = NewValue;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.InputKeySelector.SetSelectedKey"));

	UInputKeySelector_SetSelectedKey_Params params;
	params.InSelectedKey = InSelectedKey;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.SpinBox.SetForegroundColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor*            InForegroundColor              (Parm)
// FunctionAddress:0x00007FF7186278A0              		 offset:8578a0                        

void USpinBox::SetForegroundColor(struct FSlateColor* InForegroundColor)
=======
// Function UMG.InputKeySelector.SetKeySelectionText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   InKeySelectionText             (Parm)
// FunctionAddress:0x00007FF6D8D0E7E0              		 offset:234e7e0                       

void UInputKeySelector::SetKeySelectionText(const struct FText& InKeySelectionText)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.SetForegroundColor"));

	USpinBox_SetForegroundColor_Params params;
	params.InForegroundColor = InForegroundColor;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.InputKeySelector.SetKeySelectionText"));

	UInputKeySelector_SetKeySelectionText_Params params;
	params.InKeySelectionText = InKeySelectionText;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// float*                         InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void USpinBox::OnSpinBoxValueCommittedEvent__DelegateSignature(float* InValue, TEnumAsByte<ETextCommit>* CommitMethod)
=======
// Function UMG.InputKeySelector.SetAllowModifierKeys
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInAllowModifierKeys           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0B210              		 offset:234b210                       

void UInputKeySelector::SetAllowModifierKeys(bool bInAllowModifierKeys)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature"));

	USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params;
	params.InValue = InValue;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.InputKeySelector.SetAllowModifierKeys"));

	UInputKeySelector_SetAllowModifierKeys_Params params;
	params.bInAllowModifierKeys = bInAllowModifierKeys;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// float*                         InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void USpinBox::OnSpinBoxValueChangedEvent__DelegateSignature(float* InValue)
=======
// DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FInputChord             SelectedKey                    (Parm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UInputKeySelector::OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature"));

	USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Params params;
	params.InValue = InValue;
=======
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature"));

	UInputKeySelector_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void USpinBox::OnSpinBoxBeginSliderMovement__DelegateSignature()
=======
// DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UInputKeySelector::OnIsSelectingKeyChanged__DelegateSignature()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature"));

	USpinBox_OnSpinBoxBeginSliderMovement__DelegateSignature_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature"));

	UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.SpinBox.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718623F00              		 offset:853f00                        

float USpinBox::GetValue()
=======
// Function UMG.InputKeySelector.GetIsSelectingKey
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D08720              		 offset:2348720                       

bool UInputKeySelector::GetIsSelectingKey()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.GetValue"));

	USpinBox_GetValue_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.InputKeySelector.GetIsSelectingKey"));

	UInputKeySelector_GetIsSelectingKey_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.SpinBox.GetMinValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7186235A0              		 offset:8535a0                        

float USpinBox::GetMinValue()
=======
// Function UMG.CanvasPanel.AddChildToCanvas
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UCanvasPanelSlot*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D057D0              		 offset:23457d0                       

class UCanvasPanelSlot* UCanvasPanel::AddChildToCanvas(class UWidget* Content)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.GetMinValue"));

	USpinBox_GetMinValue_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CanvasPanel.AddChildToCanvas"));

	UCanvasPanel_AddChildToCanvas_Params params;
	params.Content = Content;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.SpinBox.GetMinSliderValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718623570              		 offset:853570                        

float USpinBox::GetMinSliderValue()
=======
// Function UMG.BackgroundBlur.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D11640              		 offset:2351640                       

void UBackgroundBlur::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.GetMinSliderValue"));

	USpinBox_GetMinSliderValue_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BackgroundBlur.SetVerticalAlignment"));

	UBackgroundBlur_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.SpinBox.GetMaxValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718623500              		 offset:853500                        

float USpinBox::GetMaxValue()
=======
}


// Function UMG.BackgroundBlur.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                 InPadding                      (Parm)
// FunctionAddress:0x00007FF6D8D0F770              		 offset:234f770                       

void UBackgroundBlur::SetPadding(const struct FMargin& InPadding)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.GetMaxValue"));

	USpinBox_GetMaxValue_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BackgroundBlur.SetPadding"));

	UBackgroundBlur_SetPadding_Params params;
	params.InPadding = InPadding;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.SpinBox.GetMaxSliderValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7186234D0              		 offset:8534d0                        

float USpinBox::GetMaxSliderValue()
=======
}


// Function UMG.BackgroundBlur.SetLowQualityFallbackBrush
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSlateBrush             InBrush                        (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF6D8D0EA60              		 offset:234ea60                       

void UBackgroundBlur::SetLowQualityFallbackBrush(const struct FSlateBrush& InBrush)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.GetMaxSliderValue"));

	USpinBox_GetMaxSliderValue_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BackgroundBlur.SetLowQualityFallbackBrush"));

	UBackgroundBlur_SetLowQualityFallbackBrush_Params params;
	params.InBrush = InBrush;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.SpinBox.ClearMinValue
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718620B40              		 offset:850b40                        

void USpinBox::ClearMinValue()
=======
}


// Function UMG.BackgroundBlur.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0D3D0              		 offset:234d3d0                       

void UBackgroundBlur::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.ClearMinValue"));

	USpinBox_ClearMinValue_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BackgroundBlur.SetHorizontalAlignment"));

	UBackgroundBlur_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.SpinBox.ClearMinSliderValue
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718620B20              		 offset:850b20                        

void USpinBox::ClearMinSliderValue()
=======
// Function UMG.BackgroundBlur.SetBlurStrength
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InStrength                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0B780              		 offset:234b780                       

void UBackgroundBlur::SetBlurStrength(float InStrength)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.ClearMinSliderValue"));

	USpinBox_ClearMinSliderValue_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BackgroundBlur.SetBlurStrength"));

	UBackgroundBlur_SetBlurStrength_Params params;
	params.InStrength = InStrength;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.SpinBox.ClearMaxValue
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718620AC0              		 offset:850ac0                        

void USpinBox::ClearMaxValue()
=======
// Function UMG.BackgroundBlur.SetBlurRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InBlurRadius                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0B700              		 offset:234b700                       

void UBackgroundBlur::SetBlurRadius(int InBlurRadius)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.ClearMaxValue"));

	USpinBox_ClearMaxValue_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BackgroundBlur.SetBlurRadius"));

	UBackgroundBlur_SetBlurRadius_Params params;
	params.InBlurRadius = InBlurRadius;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.SpinBox.ClearMaxSliderValue
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718620AA0              		 offset:850aa0                        

void USpinBox::ClearMaxSliderValue()
=======
// Function UMG.BackgroundBlur.SetApplyAlphaToBlur
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInApplyAlphaToBlur            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0B4E0              		 offset:234b4e0                       

void UBackgroundBlur::SetApplyAlphaToBlur(bool bInApplyAlphaToBlur)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.ClearMaxSliderValue"));

	USpinBox_ClearMaxSliderValue_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BackgroundBlur.SetApplyAlphaToBlur"));

	UBackgroundBlur_SetApplyAlphaToBlur_Params params;
	params.bInApplyAlphaToBlur = bInApplyAlphaToBlur;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// DelegateFunction UMG.TableViewBase.OnGenerateRowUObject__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UObject**                Item                           (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

class UWidget* UTableViewBase::OnGenerateRowUObject__DelegateSignature(class UObject** Item)
=======
// Function UMG.Border.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D11740              		 offset:2351740                       

void UBorder::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.TableViewBase.OnGenerateRowUObject__DelegateSignature"));

	UTableViewBase_OnGenerateRowUObject__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.SetVerticalAlignment"));

	UBorder_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.TileView.SetItemWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Width                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718629000              		 offset:859000                        

void UTileView::SetItemWidth(float* Width)
=======
}


// Function UMG.Border.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                 InPadding                      (Parm)
// FunctionAddress:0x00007FF6D8D0F890              		 offset:234f890                       

void UBorder::SetPadding(const struct FMargin& InPadding)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TileView.SetItemWidth"));

	UTileView_SetItemWidth_Params params;
	params.Width = Width;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.SetPadding"));

	UBorder_SetPadding_Params params;
	params.InPadding = InPadding;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.TileView.SetItemHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Height                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718628F80              		 offset:858f80                        

void UTileView::SetItemHeight(float* Height)
=======
// Function UMG.Border.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0D4D0              		 offset:234d4d0                       

void UBorder::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TileView.SetItemHeight"));

	UTileView_SetItemHeight_Params params;
	params.Height = Height;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.SetHorizontalAlignment"));

	UBorder_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.TileView.RequestListRefresh
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718625700              		 offset:855700                        

void UTileView::RequestListRefresh()
=======
// Function UMG.Border.SetDesiredSizeScale
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               InScale                        (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0C980              		 offset:234c980                       

void UBorder::SetDesiredSizeScale(const struct FVector2D& InScale)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TileView.RequestListRefresh"));

	UTileView_RequestListRefresh_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.SetDesiredSizeScale"));

	UBorder_SetDesiredSizeScale_Params params;
	params.InScale = InScale;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.MultiLineEditableText.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText*                  InText                         (Parm)
// FunctionAddress:0x00007FF71862B900              		 offset:85b900                        

void UMultiLineEditableText::SetText(struct FText* InText)
=======
// Function UMG.Border.SetContentColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InContentColorAndOpacity       (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0C840              		 offset:234c840                       

void UBorder::SetContentColorAndOpacity(const struct FLinearColor& InContentColorAndOpacity)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MultiLineEditableText.SetText"));

	UMultiLineEditableText_SetText_Params params;
	params.InText = InText;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.SetContentColorAndOpacity"));

	UBorder_SetContentColorAndOpacity_Params params;
	params.InContentColorAndOpacity = InContentColorAndOpacity;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.MultiLineEditableText.SetIsReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bReadOnly                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718628E60              		 offset:858e60                        

void UMultiLineEditableText::SetIsReadOnly(bool* bReadOnly)
=======
// Function UMG.Border.SetBrushFromTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0BD40              		 offset:234bd40                       

void UBorder::SetBrushFromTexture(class UTexture2D* Texture)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MultiLineEditableText.SetIsReadOnly"));

	UMultiLineEditableText_SetIsReadOnly_Params params;
	params.bReadOnly = bReadOnly;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.SetBrushFromTexture"));

	UBorder_SetBrushFromTexture_Params params;
	params.Texture = Texture;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FText*                  Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UMultiLineEditableText::OnMultiLineEditableTextCommittedEvent__DelegateSignature(struct FText* Text, TEnumAsByte<ETextCommit>* CommitMethod)
=======
// Function UMG.Border.SetBrushFromMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*      Material                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0BC40              		 offset:234bc40                       

void UBorder::SetBrushFromMaterial(class UMaterialInterface* Material)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature"));

	UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.SetBrushFromMaterial"));

	UBorder_SetBrushFromMaterial_Params params;
	params.Material = Material;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FText*                  Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UMultiLineEditableText::OnMultiLineEditableTextChangedEvent__DelegateSignature(struct FText* Text)
=======
// Function UMG.Border.SetBrushFromAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USlateBrushAsset*        Asset                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0BB40              		 offset:234bb40                       

void UBorder::SetBrushFromAsset(class USlateBrushAsset* Asset)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature"));

	UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.SetBrushFromAsset"));

	UBorder_SetBrushFromAsset_Params params;
	params.Asset = Asset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.MultiLineEditableText.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718623CF0              		 offset:853cf0                        

struct FText UMultiLineEditableText::GetText()
=======
// Function UMG.Border.SetBrushColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InBrushColor                   (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0BAC0              		 offset:234bac0                       

void UBorder::SetBrushColor(const struct FLinearColor& InBrushColor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MultiLineEditableText.GetText"));

	UMultiLineEditableText_GetText_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.SetBrushColor"));

	UBorder_SetBrushColor_Params params;
	params.InBrushColor = InBrushColor;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.MultiLineEditableTextBox.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText*                  InText                         (Parm)
// FunctionAddress:0x00007FF71862B9D0              		 offset:85b9d0                        

void UMultiLineEditableTextBox::SetText(struct FText* InText)
=======
}


// Function UMG.Border.SetBrush
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSlateBrush             InBrush                        (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF6D8D0B800              		 offset:234b800                       

void UBorder::SetBrush(const struct FSlateBrush& InBrush)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MultiLineEditableTextBox.SetText"));

	UMultiLineEditableTextBox_SetText_Params params;
	params.InText = InText;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.SetBrush"));

	UBorder_SetBrush_Params params;
	params.InBrush = InBrush;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.MultiLineEditableTextBox.SetIsReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bReadOnly                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718628EF0              		 offset:858ef0                        

void UMultiLineEditableTextBox::SetIsReadOnly(bool* bReadOnly)
=======
// Function UMG.Border.GetDynamicMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D07F10              		 offset:2347f10                       

class UMaterialInstanceDynamic* UBorder::GetDynamicMaterial()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MultiLineEditableTextBox.SetIsReadOnly"));

	UMultiLineEditableTextBox_SetIsReadOnly_Params params;
	params.bReadOnly = bReadOnly;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Border.GetDynamicMaterial"));

	UBorder_GetDynamicMaterial_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.MultiLineEditableTextBox.SetError
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText*                  InError                        (Parm)
// FunctionAddress:0x00007FF7186274F0              		 offset:8574f0                        

void UMultiLineEditableTextBox::SetError(struct FText* InError)
=======

	return params.ReturnValue;
}


// Function UMG.Button.SetStyle
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FButtonStyle            InStyle                        (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF6D8D10D80              		 offset:2350d80                       

void UButton::SetStyle(const struct FButtonStyle& InStyle)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MultiLineEditableTextBox.SetError"));

	UMultiLineEditableTextBox_SetError_Params params;
	params.InError = InError;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Button.SetStyle"));

	UButton_SetStyle_Params params;
	params.InStyle = InStyle;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FText*                  Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UMultiLineEditableTextBox::OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(struct FText* Text, TEnumAsByte<ETextCommit>* CommitMethod)
=======
// Function UMG.Button.SetColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InColorAndOpacity              (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0C430              		 offset:234c430                       

void UButton::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature"));

	UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Button.SetColorAndOpacity"));

	UButton_SetColorAndOpacity_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FText*                  Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UMultiLineEditableTextBox::OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(struct FText* Text)
=======
// Function UMG.Button.SetBackgroundColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InBackgroundColor              (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0B600              		 offset:234b600                       

void UButton::SetBackgroundColor(const struct FLinearColor& InBackgroundColor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature"));

	UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Button.SetBackgroundColor"));

	UButton_SetBackgroundColor_Params params;
	params.InBackgroundColor = InBackgroundColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.MultiLineEditableTextBox.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718623D80              		 offset:853d80                        

struct FText UMultiLineEditableTextBox::GetText()
=======
// Function UMG.Button.IsPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D09A70              		 offset:2349a70                       

bool UButton::IsPressed()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MultiLineEditableTextBox.GetText"));

	UMultiLineEditableTextBox_GetText_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Button.IsPressed"));

	UButton_IsPressed_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.TextBlock.SetWrapTextAt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InWrapTextAt                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862C810              		 offset:85c810                        

void UTextBlock::SetWrapTextAt(float* InWrapTextAt)
=======
// Function UMG.CheckBox.SetIsChecked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InIsChecked                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0E150              		 offset:234e150                       

void UCheckBox::SetIsChecked(bool InIsChecked)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBlock.SetWrapTextAt"));

	UTextBlock_SetWrapTextAt_Params params;
	params.InWrapTextAt = InWrapTextAt;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CheckBox.SetIsChecked"));

	UCheckBox_SetIsChecked_Params params;
	params.InIsChecked = InIsChecked;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.TextBlock.SetText
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FText*                  InText                         (Parm)
// FunctionAddress:0x00007FF71862BAA0              		 offset:85baa0                        

void UTextBlock::SetText(struct FText* InText)
=======
// Function UMG.CheckBox.SetCheckedState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ECheckBoxState                 InCheckedState                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0C3B0              		 offset:234c3b0                       

void UCheckBox::SetCheckedState(ECheckBoxState InCheckedState)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBlock.SetText"));

	UTextBlock_SetText_Params params;
	params.InText = InText;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CheckBox.SetCheckedState"));

	UCheckBox_SetCheckedState_Params params;
	params.InCheckedState = InCheckedState;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.TextBlock.SetShadowOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D*              InShadowOffset                 (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF71862B010              		 offset:85b010                        

void UTextBlock::SetShadowOffset(struct FVector2D* InShadowOffset)
=======
// Function UMG.CheckBox.IsPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D09AA0              		 offset:2349aa0                       

bool UCheckBox::IsPressed()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBlock.SetShadowOffset"));

	UTextBlock_SetShadowOffset_Params params;
	params.InShadowOffset = InShadowOffset;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CheckBox.IsPressed"));

	UCheckBox_IsPressed_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.TextBlock.SetShadowColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor*           InShadowColorAndOpacity        (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF71862AF90              		 offset:85af90                        

void UTextBlock::SetShadowColorAndOpacity(struct FLinearColor* InShadowColorAndOpacity)
=======

	return params.ReturnValue;
}


// Function UMG.CheckBox.IsChecked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D09950              		 offset:2349950                       

bool UCheckBox::IsChecked()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBlock.SetShadowColorAndOpacity"));

	UTextBlock_SetShadowColorAndOpacity_Params params;
	params.InShadowColorAndOpacity = InShadowColorAndOpacity;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CheckBox.IsChecked"));

	UCheckBox_IsChecked_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.TextBlock.SetOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InOpacity                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718629F90              		 offset:859f90                        

void UTextBlock::SetOpacity(float* InOpacity)
=======

	return params.ReturnValue;
}


// Function UMG.CheckBox.GetCheckedState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ECheckBoxState                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D07D50              		 offset:2347d50                       

ECheckBoxState UCheckBox::GetCheckedState()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBlock.SetOpacity"));

	UTextBlock_SetOpacity_Params params;
	params.InOpacity = InOpacity;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CheckBox.GetCheckedState"));

	UCheckBox_GetCheckedState_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.TextBlock.SetMinDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InMinDesiredWidth              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7186299E0              		 offset:8599e0                        

void UTextBlock::SetMinDesiredWidth(float* InMinDesiredWidth)
=======

	return params.ReturnValue;
}


// Function UMG.InvalidationBox.SetCanCache
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           CanCache                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0C320              		 offset:234c320                       

void UInvalidationBox::SetCanCache(bool CanCache)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBlock.SetMinDesiredWidth"));

	UTextBlock_SetMinDesiredWidth_Params params;
	params.InMinDesiredWidth = InMinDesiredWidth;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.InvalidationBox.SetCanCache"));

	UInvalidationBox_SetCanCache_Params params;
	params.CanCache = CanCache;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.TextBlock.SetJustification
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ETextJustify>*     InJustification                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718629080              		 offset:859080                        

void UTextBlock::SetJustification(TEnumAsByte<ETextJustify>* InJustification)
=======
// Function UMG.InvalidationBox.InvalidateCache
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D8D09930              		 offset:2349930                       

void UInvalidationBox::InvalidateCache()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBlock.SetJustification"));

	UTextBlock_SetJustification_Params params;
	params.InJustification = InJustification;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.InvalidationBox.InvalidateCache"));

	UInvalidationBox_InvalidateCache_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.TextBlock.SetFont
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateFontInfo*         InFontInfo                     (Parm)
// FunctionAddress:0x00007FF718627770              		 offset:857770                        

void UTextBlock::SetFont(struct FSlateFontInfo* InFontInfo)
=======
// Function UMG.InvalidationBox.GetCanCache
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D07D20              		 offset:2347d20                       

bool UInvalidationBox::GetCanCache()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBlock.SetFont"));

	UTextBlock_SetFont_Params params;
	params.InFontInfo = InFontInfo;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.InvalidationBox.GetCanCache"));

	UInvalidationBox_GetCanCache_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.TextBlock.SetColorAndOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor*            InColorAndOpacity              (Parm)
// FunctionAddress:0x00007FF718626E50              		 offset:856e50                        

void UTextBlock::SetColorAndOpacity(struct FSlateColor* InColorAndOpacity)
=======

	return params.ReturnValue;
}


// Function UMG.MenuAnchor.ToggleOpen
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bFocusOnOpen                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D124B0              		 offset:23524b0                       

void UMenuAnchor::ToggleOpen(bool bFocusOnOpen)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBlock.SetColorAndOpacity"));

	UTextBlock_SetColorAndOpacity_Params params;
	params.InColorAndOpacity = InColorAndOpacity;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MenuAnchor.ToggleOpen"));

	UMenuAnchor_ToggleOpen_Params params;
	params.bFocusOnOpen = bFocusOnOpen;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.TextBlock.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718623E10              		 offset:853e10                        

struct FText UTextBlock::GetText()
=======
// Function UMG.MenuAnchor.ShouldOpenDueToClick
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D12070              		 offset:2352070                       

bool UMenuAnchor::ShouldOpenDueToClick()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBlock.GetText"));

	UTextBlock_GetText_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MenuAnchor.ShouldOpenDueToClick"));

	UMenuAnchor_ShouldOpenDueToClick_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.Throbber.SetNumberOfPieces
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           InNumberOfPieces               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718629E00              		 offset:859e00                        

void UThrobber::SetNumberOfPieces(int* InNumberOfPieces)
=======
// Function UMG.MenuAnchor.Open
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bFocusMenu                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0A0F0              		 offset:234a0f0                       

void UMenuAnchor::Open(bool bFocusMenu)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Throbber.SetNumberOfPieces"));

	UThrobber_SetNumberOfPieces_Params params;
	params.InNumberOfPieces = InNumberOfPieces;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MenuAnchor.Open"));

	UMenuAnchor_Open_Params params;
	params.bFocusMenu = bFocusMenu;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.Throbber.SetAnimateVertically
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bInAnimateVertically           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718625D70              		 offset:855d70                        

void UThrobber::SetAnimateVertically(bool* bInAnimateVertically)
=======
// Function UMG.MenuAnchor.IsOpen
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D099B0              		 offset:23499b0                       

bool UMenuAnchor::IsOpen()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Throbber.SetAnimateVertically"));

	UThrobber_SetAnimateVertically_Params params;
	params.bInAnimateVertically = bInAnimateVertically;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MenuAnchor.IsOpen"));

	UMenuAnchor_IsOpen_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.Throbber.SetAnimateOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bInAnimateOpacity              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718625CE0              		 offset:855ce0                        

void UThrobber::SetAnimateOpacity(bool* bInAnimateOpacity)
=======

	return params.ReturnValue;
}


// Function UMG.MenuAnchor.HasOpenSubMenus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D09900              		 offset:2349900                       

bool UMenuAnchor::HasOpenSubMenus()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Throbber.SetAnimateOpacity"));

	UThrobber_SetAnimateOpacity_Params params;
	params.bInAnimateOpacity = bInAnimateOpacity;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MenuAnchor.HasOpenSubMenus"));

	UMenuAnchor_HasOpenSubMenus_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.Throbber.SetAnimateHorizontally
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bInAnimateHorizontally         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718625C50              		 offset:855c50                        

void UThrobber::SetAnimateHorizontally(bool* bInAnimateHorizontally)
=======

	return params.ReturnValue;
}


// Function UMG.MenuAnchor.GetMenuPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D08AD0              		 offset:2348ad0                       

struct FVector2D UMenuAnchor::GetMenuPosition()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Throbber.SetAnimateHorizontally"));

	UThrobber_SetAnimateHorizontally_Params params;
	params.bInAnimateHorizontally = bInAnimateHorizontally;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MenuAnchor.GetMenuPosition"));

	UMenuAnchor_GetMenuPosition_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.WidgetAnimation.GetStartTime
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718623BA0              		 offset:853ba0                        

float UWidgetAnimation::GetStartTime()
=======

	return params.ReturnValue;
}


// Function UMG.MenuAnchor.Close
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D8D063A0              		 offset:23463a0                       

void UMenuAnchor::Close()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetAnimation.GetStartTime"));

	UWidgetAnimation_GetStartTime_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MenuAnchor.Close"));

	UMenuAnchor_Close_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.WidgetAnimation.GetEndTime
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718622B60              		 offset:852b60                        

float UWidgetAnimation::GetEndTime()
=======
}


// Function UMG.RetainerBox.SetTextureParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   TextureParameter               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D11250              		 offset:2351250                       

void URetainerBox::SetTextureParameter(const struct FName& TextureParameter)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetAnimation.GetEndTime"));

	UWidgetAnimation_GetEndTime_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.RetainerBox.SetTextureParameter"));

	URetainerBox_SetTextureParameter_Params params;
	params.TextureParameter = TextureParameter;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.UnlockMouse
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71862CEE0              		 offset:85cee0                        

struct FEventReply UWidgetBlueprintLibrary::STATIC_UnlockMouse(struct FEventReply* Reply)
=======
}


// Function UMG.RetainerBox.SetEffectMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*      EffectMaterial                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0CA80              		 offset:234ca80                       

void URetainerBox::SetEffectMaterial(class UMaterialInterface* EffectMaterial)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.UnlockMouse"));

	UWidgetBlueprintLibrary_UnlockMouse_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.RetainerBox.SetEffectMaterial"));

	URetainerBox_SetEffectMaterial_Params params;
	params.EffectMaterial = EffectMaterial;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

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
=======
}


// Function UMG.RetainerBox.RequestRender
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D8D0AD70              		 offset:234ad70                       

void URetainerBox::RequestRender()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.Unhandled"));

	UWidgetBlueprintLibrary_Unhandled_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.RetainerBox.RequestRender"));

	URetainerBox_RequestRender_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

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
=======
}


// Function UMG.RetainerBox.GetEffectMaterial
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D080D0              		 offset:23480d0                       

class UMaterialInstanceDynamic* URetainerBox::GetEffectMaterial()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetUserFocus"));

	UWidgetBlueprintLibrary_SetUserFocus_Params params;
	params.FocusWidget = FocusWidget;
	params.bInAllUsers = bInAllUsers;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.RetainerBox.GetEffectMaterial"));

	URetainerBox_GetEffectMaterial_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

<<<<<<< HEAD
	if (Reply != nullptr)
		*Reply = params.Reply;

=======
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.WidgetBlueprintLibrary.SetMousePosition
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm)
// struct FVector2D*              NewMousePosition               (Parm, IsPlainOldData)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718629BE0              		 offset:859be0                        

struct FEventReply UWidgetBlueprintLibrary::STATIC_SetMousePosition(struct FVector2D* NewMousePosition, struct FEventReply* Reply)
=======
// Function UMG.ScaleBox.SetUserSpecifiedScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InUserSpecifiedScale           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D114C0              		 offset:23514c0                       

void UScaleBox::SetUserSpecifiedScale(float InUserSpecifiedScale)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetMousePosition"));

	UWidgetBlueprintLibrary_SetMousePosition_Params params;
	params.NewMousePosition = NewMousePosition;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScaleBox.SetUserSpecifiedScale"));

	UScaleBox_SetUserSpecifiedScale_Params params;
	params.InUserSpecifiedScale = InUserSpecifiedScale;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

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
=======
}


// Function UMG.ScaleBox.SetStretchDirection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EStretchDirection> InStretchDirection             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D10D00              		 offset:2350d00                       

void UScaleBox::SetStretchDirection(TEnumAsByte<EStretchDirection> InStretchDirection)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx"));

	UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Params params;
	params.Target = Target;
	params.InWidgetToFocus = InWidgetToFocus;
	params.InMouseLockMode = InMouseLockMode;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScaleBox.SetStretchDirection"));

	UScaleBox_SetStretchDirection_Params params;
	params.InStretchDirection = InStretchDirection;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController**      Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget**                InWidgetToFocus                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bLockMouseToViewport           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718628880              		 offset:858880                        

void UWidgetBlueprintLibrary::STATIC_SetInputMode_UIOnly(class APlayerController** Target, class UWidget** InWidgetToFocus, bool* bLockMouseToViewport)
=======
// Function UMG.ScaleBox.SetStretch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EStretch>          InStretch                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D10C80              		 offset:2350c80                       

void UScaleBox::SetStretch(TEnumAsByte<EStretch> InStretch)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly"));

	UWidgetBlueprintLibrary_SetInputMode_UIOnly_Params params;
	params.Target = Target;
	params.InWidgetToFocus = InWidgetToFocus;
	params.bLockMouseToViewport = bLockMouseToViewport;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScaleBox.SetStretch"));

	UScaleBox_SetStretch_Params params;
	params.InStretch = InStretch;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController**      Target                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718628810              		 offset:858810                        

void UWidgetBlueprintLibrary::STATIC_SetInputMode_GameOnly(class APlayerController** Target)
=======
// Function UMG.ScaleBox.SetIgnoreInheritedScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInIgnoreInheritedScale        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0DAD0              		 offset:234dad0                       

void UScaleBox::SetIgnoreInheritedScale(bool bInIgnoreInheritedScale)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly"));

	UWidgetBlueprintLibrary_SetInputMode_GameOnly_Params params;
	params.Target = Target;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScaleBox.SetIgnoreInheritedScale"));

	UScaleBox_SetIgnoreInheritedScale_Params params;
	params.bInIgnoreInheritedScale = bInIgnoreInheritedScale;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController**      Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget**                InWidgetToFocus                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EMouseLockMode*                InMouseLockMode                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bHideCursorDuringCapture       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7186286D0              		 offset:8586d0                        

void UWidgetBlueprintLibrary::STATIC_SetInputMode_GameAndUIEx(class APlayerController** Target, class UWidget** InWidgetToFocus, EMouseLockMode* InMouseLockMode, bool* bHideCursorDuringCapture)
=======
// Function UMG.SizeBox.SetWidthOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InWidthOverride                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D11E70              		 offset:2351e70                       

void USizeBox::SetWidthOverride(float InWidthOverride)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx"));

	UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Params params;
	params.Target = Target;
	params.InWidgetToFocus = InWidgetToFocus;
	params.InMouseLockMode = InMouseLockMode;
	params.bHideCursorDuringCapture = bHideCursorDuringCapture;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.SetWidthOverride"));

	USizeBox_SetWidthOverride_Params params;
	params.InWidthOverride = InWidthOverride;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController**      Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget**                InWidgetToFocus                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bLockMouseToViewport           (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bHideCursorDuringCapture       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718628590              		 offset:858590                        

void UWidgetBlueprintLibrary::STATIC_SetInputMode_GameAndUI(class APlayerController** Target, class UWidget** InWidgetToFocus, bool* bLockMouseToViewport, bool* bHideCursorDuringCapture)
=======
// Function UMG.SizeBox.SetMinDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InMinDesiredWidth              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0F040              		 offset:234f040                       

void USizeBox::SetMinDesiredWidth(float InMinDesiredWidth)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI"));

	UWidgetBlueprintLibrary_SetInputMode_GameAndUI_Params params;
	params.Target = Target;
	params.InWidgetToFocus = InWidgetToFocus;
	params.bLockMouseToViewport = bLockMouseToViewport;
	params.bHideCursorDuringCapture = bHideCursorDuringCapture;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.SetMinDesiredWidth"));

	USizeBox_SetMinDesiredWidth_Params params;
	params.InMinDesiredWidth = InMinDesiredWidth;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
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
=======
// Function UMG.SizeBox.SetMinDesiredHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InMinDesiredHeight             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0EEC0              		 offset:234eec0                       

void USizeBox::SetMinDesiredHeight(float InMinDesiredHeight)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetHardwareCursor"));

	UWidgetBlueprintLibrary_SetHardwareCursor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.CursorShape = CursorShape;
	params.CursorName = CursorName;
	params.HotSpot = HotSpot;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.SetMinDesiredHeight"));

	USizeBox_SetMinDesiredHeight_Params params;
	params.InMinDesiredHeight = InMinDesiredHeight;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718627750              		 offset:857750                        

void UWidgetBlueprintLibrary::STATIC_SetFocusToGameViewport()
=======
}


// Function UMG.SizeBox.SetMaxDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InMaxDesiredWidth              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0ECC0              		 offset:234ecc0                       

void USizeBox::SetMaxDesiredWidth(float InMaxDesiredWidth)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport"));

	UWidgetBlueprintLibrary_SetFocusToGameViewport_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.SetMaxDesiredWidth"));

	USizeBox_SetMaxDesiredWidth_Params params;
	params.InMaxDesiredWidth = InMaxDesiredWidth;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm, ReferenceParm)
// class UTexture2D**             Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718626A20              		 offset:856a20                        

void UWidgetBlueprintLibrary::STATIC_SetBrushResourceToTexture(class UTexture2D** Texture, struct FSlateBrush* Brush)
=======
// Function UMG.SizeBox.SetMaxDesiredHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InMaxDesiredHeight             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0EC40              		 offset:234ec40                       

void USizeBox::SetMaxDesiredHeight(float InMaxDesiredHeight)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture"));

	UWidgetBlueprintLibrary_SetBrushResourceToTexture_Params params;
	params.Texture = Texture;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.SetMaxDesiredHeight"));

	USizeBox_SetMaxDesiredHeight_Params params;
	params.InMaxDesiredHeight = InMaxDesiredHeight;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

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
=======
}


// Function UMG.SizeBox.SetMaxAspectRatio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InMaxAspectRatio               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0EBC0              		 offset:234ebc0                       

void USizeBox::SetMaxAspectRatio(float InMaxAspectRatio)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial"));

	UWidgetBlueprintLibrary_SetBrushResourceToMaterial_Params params;
	params.Material = Material;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.SetMaxAspectRatio"));

	USizeBox_SetMaxAspectRatio_Params params;
	params.InMaxAspectRatio = InMaxAspectRatio;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

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
=======
}


// Function UMG.SizeBox.SetHeightOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InHeightOverride               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0D1B0              		 offset:234d1b0                       

void USizeBox::SetHeightOverride(float InHeightOverride)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture"));

	UWidgetBlueprintLibrary_ReleaseMouseCapture_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.SetHeightOverride"));

	USizeBox_SetHeightOverride_Params params;
	params.InHeightOverride = InHeightOverride;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

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
=======
}


// Function UMG.SizeBox.ClearWidthOverride
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D8D06380              		 offset:2346380                       

void USizeBox::ClearWidthOverride()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture"));

	UWidgetBlueprintLibrary_ReleaseJoystickCapture_Params params;
	params.bInAllJoysticks = bInAllJoysticks;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.ClearWidthOverride"));

	USizeBox_ClearWidthOverride_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

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
=======
}


// Function UMG.SizeBox.ClearMinDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D8D06130              		 offset:2346130                       

void USizeBox::ClearMinDesiredWidth()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.NoResourceBrush"));

	UWidgetBlueprintLibrary_NoResourceBrush_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.ClearMinDesiredWidth"));

	USizeBox_ClearMinDesiredWidth_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

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
=======
}


// Function UMG.SizeBox.ClearMinDesiredHeight
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D8D06110              		 offset:2346110                       

void USizeBox::ClearMinDesiredHeight()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture"));

	UWidgetBlueprintLibrary_MakeBrushFromTexture_Params params;
	params.Texture = Texture;
	params.Width = Width;
	params.Height = Height;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.ClearMinDesiredHeight"));

	USizeBox_ClearMinDesiredHeight_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

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
=======
}


// Function UMG.SizeBox.ClearMaxDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D8D060B0              		 offset:23460b0                       

void USizeBox::ClearMaxDesiredWidth()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial"));

	UWidgetBlueprintLibrary_MakeBrushFromMaterial_Params params;
	params.Material = Material;
	params.Width = Width;
	params.Height = Height;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.ClearMaxDesiredWidth"));

	USizeBox_ClearMaxDesiredWidth_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USlateBrushAsset**       BrushAsset                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718624640              		 offset:854640                        

struct FSlateBrush UWidgetBlueprintLibrary::STATIC_MakeBrushFromAsset(class USlateBrushAsset** BrushAsset)
=======
}


// Function UMG.SizeBox.ClearMaxDesiredHeight
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D8D06090              		 offset:2346090                       

void USizeBox::ClearMaxDesiredHeight()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset"));

	UWidgetBlueprintLibrary_MakeBrushFromAsset_Params params;
	params.BrushAsset = BrushAsset;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.ClearMaxDesiredHeight"));

	USizeBox_ClearMaxDesiredHeight_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

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
=======
}


// Function UMG.SizeBox.ClearMaxAspectRatio
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D8D06070              		 offset:2346070                       

void USizeBox::ClearMaxAspectRatio()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.LockMouse"));

	UWidgetBlueprintLibrary_LockMouse_Params params;
	params.CapturingWidget = CapturingWidget;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.ClearMaxAspectRatio"));

	USizeBox_ClearMaxAspectRatio_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

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
=======
}


// Function UMG.SizeBox.ClearHeightOverride
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D8D06050              		 offset:2346050                       

void USizeBox::ClearHeightOverride()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.IsDragDropping"));

	UWidgetBlueprintLibrary_IsDragDropping_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SizeBox.ClearHeightOverride"));

	USizeBox_ClearHeightOverride_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.Handled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718624160              		 offset:854160                        

struct FEventReply UWidgetBlueprintLibrary::STATIC_Handled()
=======
}


// Function UMG.Viewport.Spawn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ActorClass                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D12420              		 offset:2352420                       

class AActor* UViewport::Spawn(class UClass* ActorClass)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.Handled"));

	UWidgetBlueprintLibrary_Handled_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Viewport.Spawn"));

	UViewport_Spawn_Params params;
	params.ActorClass = ActorClass;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               SafePadding                    (Parm, OutParm, IsPlainOldData)
// struct FVector2D               SafePaddingScale               (Parm, OutParm, IsPlainOldData)
// struct FVector2D               SpillOverPadding               (Parm, OutParm, IsPlainOldData)
// FunctionAddress:0x00007FF718623910              		 offset:853910                        

void UWidgetBlueprintLibrary::STATIC_GetSafeZonePadding(class UObject** WorldContextObject, struct FVector2D* SafePadding, struct FVector2D* SafePaddingScale, struct FVector2D* SpillOverPadding)
=======
// Function UMG.Viewport.SetViewRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                Rotation                       (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D11D50              		 offset:2351d50                       

void UViewport::SetViewRotation(const struct FRotator& Rotation)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding"));

	UWidgetBlueprintLibrary_GetSafeZonePadding_Params params;
	params.WorldContextObject = WorldContextObject;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Viewport.SetViewRotation"));

	UViewport_SetViewRotation_Params params;
	params.Rotation = Rotation;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

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
=======
}


// Function UMG.Viewport.SetViewLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D11CC0              		 offset:2351cc0                       

void UViewport::SetViewLocation(const struct FVector& Location)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent"));

	UWidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent_Params params;
	params.Event = Event;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Viewport.SetViewLocation"));

	UViewport_SetViewLocation_Params params;
	params.Location = Location;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPointerEvent*          Event                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FInputEvent             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718623010              		 offset:853010                        

struct FInputEvent UWidgetBlueprintLibrary::STATIC_GetInputEventFromPointerEvent(struct FPointerEvent* Event)
=======
}


// Function UMG.Viewport.GetViewRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D09510              		 offset:2349510                       

struct FRotator UViewport::GetViewRotation()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent"));

	UWidgetBlueprintLibrary_GetInputEventFromPointerEvent_Params params;
	params.Event = Event;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Viewport.GetViewRotation"));

	UViewport_GetViewRotation_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FNavigationEvent*       Event                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FInputEvent             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718622F30              		 offset:852f30                        

struct FInputEvent UWidgetBlueprintLibrary::STATIC_GetInputEventFromNavigationEvent(struct FNavigationEvent* Event)
=======
// Function UMG.Viewport.GetViewportWorld
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWorld*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D09670              		 offset:2349670                       

class UWorld* UViewport::GetViewportWorld()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent"));

	UWidgetBlueprintLibrary_GetInputEventFromNavigationEvent_Params params;
	params.Event = Event;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Viewport.GetViewportWorld"));

	UViewport_GetViewportWorld_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKeyEvent*              Event                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FInputEvent             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718622E00              		 offset:852e00                        

struct FInputEvent UWidgetBlueprintLibrary::STATIC_GetInputEventFromKeyEvent(struct FKeyEvent* Event)
=======
// Function UMG.Viewport.GetViewLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D094D0              		 offset:23494d0                       

struct FVector UViewport::GetViewLocation()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent"));

	UWidgetBlueprintLibrary_GetInputEventFromKeyEvent_Params params;
	params.Event = Event;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Viewport.GetViewLocation"));

	UViewport_GetViewLocation_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.WidgetBlueprintLibrary.GetInputEventFromControllerEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FControllerEvent*       Event                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FInputEvent             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718622CB0              		 offset:852cb0                        

struct FInputEvent UWidgetBlueprintLibrary::STATIC_GetInputEventFromControllerEvent(struct FControllerEvent* Event)
=======
// Function UMG.GridPanel.AddChildToGrid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGridSlot*               ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D05860              		 offset:2345860                       

class UGridSlot* UGridPanel::AddChildToGrid(class UWidget* Content)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetInputEventFromControllerEvent"));

	UWidgetBlueprintLibrary_GetInputEventFromControllerEvent_Params params;
	params.Event = Event;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.GridPanel.AddChildToGrid"));

	UGridPanel_AddChildToGrid_Params params;
	params.Content = Content;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FCharacterEvent*        Event                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FInputEvent             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718622BC0              		 offset:852bc0                        

struct FInputEvent UWidgetBlueprintLibrary::STATIC_GetInputEventFromCharacterEvent(struct FCharacterEvent* Event)
=======
// Function UMG.HorizontalBox.AddChildToHorizontalBox
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UHorizontalBoxSlot*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D058F0              		 offset:23458f0                       

class UHorizontalBoxSlot* UHorizontalBox::AddChildToHorizontalBox(class UWidget* Content)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent"));

	UWidgetBlueprintLibrary_GetInputEventFromCharacterEvent_Params params;
	params.Event = Event;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.HorizontalBox.AddChildToHorizontalBox"));

	UHorizontalBox_AddChildToHorizontalBox_Params params;
	params.Content = Content;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm, ReferenceParm)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7186229D0              		 offset:8529d0                        

class UMaterialInstanceDynamic* UWidgetBlueprintLibrary::STATIC_GetDynamicMaterial(struct FSlateBrush* Brush)
=======
// Function UMG.Overlay.AddChildToOverlay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UOverlaySlot*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D05980              		 offset:2345980                       

class UOverlaySlot* UOverlay::AddChildToOverlay(class UWidget* Content)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial"));

	UWidgetBlueprintLibrary_GetDynamicMaterial_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Overlay.AddChildToOverlay"));

	UOverlay_AddChildToOverlay_Params params;
	params.Content = Content;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

<<<<<<< HEAD
	if (Brush != nullptr)
		*Brush = params.Brush;

=======
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDragDropOperation*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718622900              		 offset:852900                        

class UDragDropOperation* UWidgetBlueprintLibrary::STATIC_GetDragDroppingContent()
=======
// Function UMG.ScrollBox.SetScrollOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewScrollOffset                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D103F0              		 offset:23503f0                       

void UScrollBox::SetScrollOffset(float NewScrollOffset)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent"));

	UWidgetBlueprintLibrary_GetDragDroppingContent_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBox.SetScrollOffset"));

	UScrollBox_SetScrollOffset_Params params;
	params.NewScrollOffset = NewScrollOffset;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm, ReferenceParm)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718622590              		 offset:852590                        

class UTexture2D* UWidgetBlueprintLibrary::STATIC_GetBrushResourceAsTexture2D(struct FSlateBrush* Brush)
=======
}


// Function UMG.ScrollBox.ScrollWidgetIntoView
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 WidgetToFind                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           AnimateScroll                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0AE50              		 offset:234ae50                       

void UScrollBox::ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D"));

	UWidgetBlueprintLibrary_GetBrushResourceAsTexture2D_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBox.ScrollWidgetIntoView"));

	UScrollBox_ScrollWidgetIntoView_Params params;
	params.WidgetToFind = WidgetToFind;
	params.AnimateScroll = AnimateScroll;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

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
=======
}


// Function UMG.ScrollBox.ScrollToStart
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D8D0ADB0              		 offset:234adb0                       

void UScrollBox::ScrollToStart()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial"));

	UWidgetBlueprintLibrary_GetBrushResourceAsMaterial_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBox.ScrollToStart"));

	UScrollBox_ScrollToStart_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

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
=======
}


// Function UMG.ScrollBox.ScrollToEnd
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D8D0AD90              		 offset:234ad90                       

void UScrollBox::ScrollToEnd()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetBrushResource"));

	UWidgetBlueprintLibrary_GetBrushResource_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBox.ScrollToEnd"));

	UScrollBox_ScrollToEnd_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

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
=======
}


// Function UMG.ScrollBox.GetScrollToEndOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D09040              		 offset:2349040                       

float UScrollBox::GetScrollToEndOffset()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface"));

	UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Interface = Interface;
	params.TopLevelOnly = TopLevelOnly;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBox.GetScrollToEndOffset"));

	UScrollBox_GetScrollToEndOffset_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

<<<<<<< HEAD
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
=======
	return params.ReturnValue;
}


// Function UMG.ScrollBox.GetScrollOffset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D09010              		 offset:2349010                       

float UScrollBox::GetScrollOffset()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass"));

	UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Params params;
	params.WorldContextObject = WorldContextObject;
	params.WidgetClass = WidgetClass;
	params.TopLevelOnly = TopLevelOnly;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBox.GetScrollOffset"));

	UScrollBox_GetScrollOffset_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

<<<<<<< HEAD
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
=======
	return params.ReturnValue;
}


// Function UMG.UniformGridPanel.SetSlotPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                 InSlotPadding                  (Parm)
// FunctionAddress:0x00007FF6D8D10AB0              		 offset:2350ab0                       

void UUniformGridPanel::SetSlotPadding(const struct FMargin& InSlotPadding)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.EndDragDrop"));

	UWidgetBlueprintLibrary_EndDragDrop_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UniformGridPanel.SetSlotPadding"));

	UUniformGridPanel_SetSlotPadding_Params params;
	params.InSlotPadding = InSlotPadding;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

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
=======
}


// Function UMG.UniformGridPanel.SetMinDesiredSlotWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InMinDesiredSlotWidth          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0EFC0              		 offset:234efc0                       

void UUniformGridPanel::SetMinDesiredSlotWidth(float InMinDesiredSlotWidth)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.DrawTextFormatted"));

	UWidgetBlueprintLibrary_DrawTextFormatted_Params params;
	params.Text = Text;
	params.Position = Position;
	params.Font = Font;
	params.FontSize = FontSize;
	params.FontTypeFace = FontTypeFace;
	params.Tint = Tint;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UniformGridPanel.SetMinDesiredSlotWidth"));

	UUniformGridPanel_SetMinDesiredSlotWidth_Params params;
	params.InMinDesiredSlotWidth = InMinDesiredSlotWidth;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

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
=======
}


// Function UMG.UniformGridPanel.SetMinDesiredSlotHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InMinDesiredSlotHeight         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0EF40              		 offset:234ef40                       

void UUniformGridPanel::SetMinDesiredSlotHeight(float InMinDesiredSlotHeight)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.DrawText"));

	UWidgetBlueprintLibrary_DrawText_Params params;
	params.inString = inString;
	params.Position = Position;
	params.Tint = Tint;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UniformGridPanel.SetMinDesiredSlotHeight"));

	UUniformGridPanel_SetMinDesiredSlotHeight_Params params;
	params.InMinDesiredSlotHeight = InMinDesiredSlotHeight;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

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
=======
}


// Function UMG.UniformGridPanel.AddChildToUniformGrid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UUniformGridSlot*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D05A10              		 offset:2345a10                       

class UUniformGridSlot* UUniformGridPanel::AddChildToUniformGrid(class UWidget* Content)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.DrawLines"));

	UWidgetBlueprintLibrary_DrawLines_Params params;
	params.Points = Points;
	params.Tint = Tint;
	params.bAntiAlias = bAntiAlias;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UniformGridPanel.AddChildToUniformGrid"));

	UUniformGridPanel_AddChildToUniformGrid_Params params;
	params.Content = Content;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

<<<<<<< HEAD
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
=======
	return params.ReturnValue;
}


// Function UMG.VerticalBox.AddChildToVerticalBox
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UVerticalBoxSlot*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D05AA0              		 offset:2345aa0                       

class UVerticalBoxSlot* UVerticalBox::AddChildToVerticalBox(class UWidget* Content)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.DrawLine"));

	UWidgetBlueprintLibrary_DrawLine_Params params;
	params.PositionA = PositionA;
	params.PositionB = PositionB;
	params.Tint = Tint;
	params.bAntiAlias = bAntiAlias;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.VerticalBox.AddChildToVerticalBox"));

	UVerticalBox_AddChildToVerticalBox_Params params;
	params.Content = Content;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

<<<<<<< HEAD
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
=======
	return params.ReturnValue;
}


// Function UMG.WrapBox.SetInnerSlotPadding
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               InPadding                      (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0DBF0              		 offset:234dbf0                       

void UWrapBox::SetInnerSlotPadding(const struct FVector2D& InPadding)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.DrawBox"));

	UWidgetBlueprintLibrary_DrawBox_Params params;
	params.Position = Position;
	params.Size = Size;
	params.Brush = Brush;
	params.Tint = Tint;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WrapBox.SetInnerSlotPadding"));

	UWrapBox_SetInnerSlotPadding_Params params;
	params.InPadding = InPadding;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	if (Context != nullptr)
		*Context = params.Context;
}


// Function UMG.WidgetBlueprintLibrary.DismissAllMenus
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718621390              		 offset:851390                        

void UWidgetBlueprintLibrary::STATIC_DismissAllMenus()
=======
}


// Function UMG.WrapBox.AddChildWrapBox
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWrapBoxSlot*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D05B30              		 offset:2345b30                       

class UWrapBoxSlot* UWrapBox::AddChildWrapBox(class UWidget* Content)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.DismissAllMenus"));

	UWidgetBlueprintLibrary_DismissAllMenus_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WrapBox.AddChildWrapBox"));

	UWrapBox_AddChildWrapBox_Params params;
	params.Content = Content;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
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
=======

	return params.ReturnValue;
}


// Function UMG.ProgressBar.SetPercent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InPercent                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D10070              		 offset:2350070                       

void UProgressBar::SetPercent(float InPercent)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed"));

	UWidgetBlueprintLibrary_DetectDragIfPressed_Params params;
	params.PointerEvent = PointerEvent;
	params.WidgetDetectingDrag = WidgetDetectingDrag;
	params.DragKey = DragKey;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ProgressBar.SetPercent"));

	UProgressBar_SetPercent_Params params;
	params.InPercent = InPercent;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

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
=======
}


// Function UMG.ProgressBar.SetIsMarquee
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InbIsMarquee                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0E300              		 offset:234e300                       

void UProgressBar::SetIsMarquee(bool InbIsMarquee)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.DetectDrag"));

	UWidgetBlueprintLibrary_DetectDrag_Params params;
	params.WidgetDetectingDrag = WidgetDetectingDrag;
	params.DragKey = DragKey;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ProgressBar.SetIsMarquee"));

	UProgressBar_SetIsMarquee_Params params;
	params.InbIsMarquee = InbIsMarquee;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

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
=======
}


// Function UMG.ProgressBar.SetFillColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InColor                        (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0CCA0              		 offset:234cca0                       

void UProgressBar::SetFillColorAndOpacity(const struct FLinearColor& InColor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation"));

	UWidgetBlueprintLibrary_CreateDragDropOperation_Params params;
	params.OperationClass = OperationClass;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ProgressBar.SetFillColorAndOpacity"));

	UProgressBar_SetFillColorAndOpacity_Params params;
	params.InColor = InColor;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

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
=======
}


// Function UMG.ScrollBar.SetState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InOffsetFraction               (Parm, ZeroConstructor, IsPlainOldData)
// float                          InThumbSizeFraction            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D10B40              		 offset:2350b40                       

void UScrollBar::SetState(float InOffsetFraction, float InThumbSizeFraction)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.Create"));

	UWidgetBlueprintLibrary_Create_Params params;
	params.WorldContextObject = WorldContextObject;
	params.WidgetType = WidgetType;
	params.OwningPlayer = OwningPlayer;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ScrollBar.SetState"));

	UScrollBar_SetState_Params params;
	params.InOffsetFraction = InOffsetFraction;
	params.InThumbSizeFraction = InThumbSizeFraction;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

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
=======
}


// Function UMG.Slider.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D11540              		 offset:2351540                       

void USlider::SetValue(float InValue)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.ClearUserFocus"));

	UWidgetBlueprintLibrary_ClearUserFocus_Params params;
	params.bInAllUsers = bInAllUsers;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Slider.SetValue"));

	USlider_SetValue_Params params;
	params.InValue = InValue;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

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
=======
}


// Function UMG.Slider.SetStepSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D10C00              		 offset:2350c00                       

void USlider::SetStepSize(float InValue)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.CaptureMouse"));

	UWidgetBlueprintLibrary_CaptureMouse_Params params;
	params.CapturingWidget = CapturingWidget;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Slider.SetStepSize"));

	USlider_SetStepSize_Params params;
	params.InValue = InValue;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

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
=======
}


// Function UMG.Slider.SetSliderHandleColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InValue                        (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D10A30              		 offset:2350a30                       

void USlider::SetSliderHandleColor(const struct FLinearColor& InValue)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.CaptureJoystick"));

	UWidgetBlueprintLibrary_CaptureJoystick_Params params;
	params.CapturingWidget = CapturingWidget;
	params.bInAllJoysticks = bInAllJoysticks;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Slider.SetSliderHandleColor"));

	USlider_SetSliderHandleColor_Params params;
	params.InValue = InValue;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	if (Reply != nullptr)
		*Reply = params.Reply;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.CancelDragDrop
// (Final, Native, Static, Public, BlueprintCallable)
// FunctionAddress:0x00007FF718620630              		 offset:850630                        

void UWidgetBlueprintLibrary::STATIC_CancelDragDrop()
=======
}


// Function UMG.Slider.SetSliderBarColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InValue                        (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D109B0              		 offset:23509b0                       

void USlider::SetSliderBarColor(const struct FLinearColor& InValue)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.CancelDragDrop"));

	UWidgetBlueprintLibrary_CancelDragDrop_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Slider.SetSliderBarColor"));

	USlider_SetSliderBarColor_Params params;
	params.InValue = InValue;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.WidgetComponent.SetWidget
// (Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget**            Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF71862C700              		 offset:85c700                        

void UWidgetComponent::SetWidget(class UUserWidget** Widget)
=======
// Function UMG.Slider.SetLocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0E9D0              		 offset:234e9d0                       

void USlider::SetLocked(bool InValue)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.SetWidget"));

	UWidgetComponent_SetWidget_Params params;
	params.Widget = Widget;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Slider.SetLocked"));

	USlider_SetLocked_Params params;
	params.InValue = InValue;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.WidgetComponent.SetOwnerPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULocalPlayer**           LocalPlayer                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71862A010              		 offset:85a010                        

void UWidgetComponent::SetOwnerPlayer(class ULocalPlayer** LocalPlayer)
=======
// Function UMG.Slider.SetIndentHandle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0DB60              		 offset:234db60                       

void USlider::SetIndentHandle(bool InValue)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.SetOwnerPlayer"));

	UWidgetComponent_SetOwnerPlayer_Params params;
	params.LocalPlayer = LocalPlayer;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Slider.SetIndentHandle"));

	USlider_SetIndentHandle_Params params;
	params.InValue = InValue;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.WidgetComponent.SetDrawSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D*              Size                           (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF718627320              		 offset:857320                        

void UWidgetComponent::SetDrawSize(struct FVector2D* Size)
=======
// Function UMG.Slider.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D09470              		 offset:2349470                       

float USlider::GetValue()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.SetDrawSize"));

	UWidgetComponent_SetDrawSize_Params params;
	params.Size = Size;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Slider.GetValue"));

	USlider_GetValue_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.WidgetComponent.SetBackgroundColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor*           NewBackgroundColor             (ConstParm, Parm, IsPlainOldData)
// FunctionAddress:0x00007FF718625FA0              		 offset:855fa0                        

void UWidgetComponent::SetBackgroundColor(struct FLinearColor* NewBackgroundColor)
=======

	return params.ReturnValue;
}


// Function UMG.Spacer.SetSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               InSize                         (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D10890              		 offset:2350890                       

void USpacer::SetSize(const struct FVector2D& InSize)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.SetBackgroundColor"));

	UWidgetComponent_SetBackgroundColor_Params params;
	params.NewBackgroundColor = NewBackgroundColor;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Spacer.SetSize"));

	USpacer_SetSize_Params params;
	params.InSize = InSize;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.WidgetComponent.RequestRedraw
// (Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF71B886930              		 offset:3ab6930                       

void UWidgetComponent::RequestRedraw()
=======
// Function UMG.SpinBox.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D115C0              		 offset:23515c0                       

void USpinBox::SetValue(float NewValue)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.RequestRedraw"));

	UWidgetComponent_RequestRedraw_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.SetValue"));

	USpinBox_SetValue_Params params;
	params.NewValue = NewValue;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.WidgetComponent.GetUserWidgetObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUserWidget*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF718623EA0              		 offset:853ea0                        

class UUserWidget* UWidgetComponent::GetUserWidgetObject()
=======
// Function UMG.SpinBox.SetMinValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0F1C0              		 offset:234f1c0                       

void USpinBox::SetMinValue(float NewValue)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.GetUserWidgetObject"));

	UWidgetComponent_GetUserWidgetObject_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.SetMinValue"));

	USpinBox_SetMinValue_Params params;
	params.NewValue = NewValue;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetRenderTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTextureRenderTarget2D*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7186238E0              		 offset:8538e0                        

class UTextureRenderTarget2D* UWidgetComponent::GetRenderTarget()
=======
}


// Function UMG.SpinBox.SetMinSliderValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0F140              		 offset:234f140                       

void USpinBox::SetMinSliderValue(float NewValue)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.GetRenderTarget"));

	UWidgetComponent_GetRenderTarget_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.SetMinSliderValue"));

	USpinBox_SetMinSliderValue_Params params;
	params.NewValue = NewValue;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetOwnerPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULocalPlayer*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718623870              		 offset:853870                        

class ULocalPlayer* UWidgetComponent::GetOwnerPlayer()
=======
}


// Function UMG.SpinBox.SetMaxValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0EDC0              		 offset:234edc0                       

void USpinBox::SetMaxValue(float NewValue)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.GetOwnerPlayer"));

	UWidgetComponent_GetOwnerPlayer_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.SetMaxValue"));

	USpinBox_SetMaxValue_Params params;
	params.NewValue = NewValue;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetMaterialInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7186234A0              		 offset:8534a0                        

class UMaterialInstanceDynamic* UWidgetComponent::GetMaterialInstance()
=======
}


// Function UMG.SpinBox.SetMaxSliderValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0ED40              		 offset:234ed40                       

void USpinBox::SetMaxSliderValue(float NewValue)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.GetMaterialInstance"));

	UWidgetComponent_GetMaterialInstance_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.SetMaxSliderValue"));

	USpinBox_SetMaxSliderValue_Params params;
	params.NewValue = NewValue;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetDrawSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718622930              		 offset:852930                        

struct FVector2D UWidgetComponent::GetDrawSize()
=======
}


// Function UMG.SpinBox.SetForegroundColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor             InForegroundColor              (Parm)
// FunctionAddress:0x00007FF6D8D0CF80              		 offset:234cf80                       

void USpinBox::SetForegroundColor(const struct FSlateColor& InForegroundColor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.GetDrawSize"));

	UWidgetComponent_GetDrawSize_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.SetForegroundColor"));

	USpinBox_SetForegroundColor_Params params;
	params.InForegroundColor = InForegroundColor;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.SetCustomHitResult
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FHitResult*             HitResult                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF7186271E0              		 offset:8571e0                        

void UWidgetInteractionComponent::SetCustomHitResult(struct FHitResult* HitResult)
=======
}


// DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETextCommit>       CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void USpinBox::OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.SetCustomHitResult"));

	UWidgetInteractionComponent_SetCustomHitResult_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature"));

	USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params;
	params.InValue = InValue;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.WidgetInteractionComponent.SendKeyChar
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                Characters                     (Parm, ZeroConstructor)
// bool*                          bRepeat                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7186258D0              		 offset:8558d0                        

bool UWidgetInteractionComponent::SendKeyChar(struct FString* Characters, bool* bRepeat)
=======
// DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void USpinBox::OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.SendKeyChar"));

	UWidgetInteractionComponent_SendKeyChar_Params params;
	params.Characters = Characters;
	params.bRepeat = bRepeat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature"));

	USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.ScrollWheel
// (Native, Public, BlueprintCallable)
// Parameters:
// float*                         ScrollDelta                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF718625780              		 offset:855780                        

void UWidgetInteractionComponent::ScrollWheel(float* ScrollDelta)
=======
}


// DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void USpinBox::OnSpinBoxBeginSliderMovement__DelegateSignature()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.ScrollWheel"));

	UWidgetInteractionComponent_ScrollWheel_Params params;
	params.ScrollDelta = ScrollDelta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature"));

	USpinBox_OnSpinBoxBeginSliderMovement__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.WidgetInteractionComponent.ReleasePointerKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FKey*                   Key                            (Parm)
// FunctionAddress:0x00007FF7186253D0              		 offset:8553d0                        

void UWidgetInteractionComponent::ReleasePointerKey(struct FKey* Key)
=======
// Function UMG.SpinBox.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D094A0              		 offset:23494a0                       

float USpinBox::GetValue()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.ReleasePointerKey"));

	UWidgetInteractionComponent_ReleasePointerKey_Params params;
	params.Key = Key;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.GetValue"));

	USpinBox_GetValue_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.WidgetInteractionComponent.ReleaseKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FKey*                   Key                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718625170              		 offset:855170                        

bool UWidgetInteractionComponent::ReleaseKey(struct FKey* Key)
=======

	return params.ReturnValue;
}


// Function UMG.SpinBox.GetMinValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D08B40              		 offset:2348b40                       

float USpinBox::GetMinValue()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.ReleaseKey"));

	UWidgetInteractionComponent_ReleaseKey_Params params;
	params.Key = Key;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.GetMinValue"));

	USpinBox_GetMinValue_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.WidgetInteractionComponent.PressPointerKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FKey*                   Key                            (Parm)
// FunctionAddress:0x00007FF718624D90              		 offset:854d90                        

void UWidgetInteractionComponent::PressPointerKey(struct FKey* Key)
=======
// Function UMG.SpinBox.GetMinSliderValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D08B10              		 offset:2348b10                       

float USpinBox::GetMinSliderValue()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.PressPointerKey"));

	UWidgetInteractionComponent_PressPointerKey_Params params;
	params.Key = Key;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.GetMinSliderValue"));

	USpinBox_GetMinSliderValue_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.WidgetInteractionComponent.PressKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FKey*                   Key                            (Parm)
// bool*                          bRepeat                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718624C50              		 offset:854c50                        

bool UWidgetInteractionComponent::PressKey(struct FKey* Key, bool* bRepeat)
=======

	return params.ReturnValue;
}


// Function UMG.SpinBox.GetMaxValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D08AA0              		 offset:2348aa0                       

float USpinBox::GetMaxValue()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.PressKey"));

	UWidgetInteractionComponent_PressKey_Params params;
	params.Key = Key;
	params.bRepeat = bRepeat;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.GetMaxValue"));

	USpinBox_GetMaxValue_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.WidgetInteractionComponent.PressAndReleaseKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FKey*                   Key                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718624B50              		 offset:854b50                        

bool UWidgetInteractionComponent::PressAndReleaseKey(struct FKey* Key)
=======
// Function UMG.SpinBox.GetMaxSliderValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D08A70              		 offset:2348a70                       

float USpinBox::GetMaxSliderValue()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.PressAndReleaseKey"));

	UWidgetInteractionComponent_PressAndReleaseKey_Params params;
	params.Key = Key;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.GetMaxSliderValue"));

	USpinBox_GetMaxSliderValue_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.WidgetInteractionComponent.IsOverInteractableWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718624410              		 offset:854410                        

bool UWidgetInteractionComponent::IsOverInteractableWidget()
=======
// Function UMG.SpinBox.ClearMinValue
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D8D06170              		 offset:2346170                       

void USpinBox::ClearMinValue()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.IsOverInteractableWidget"));

	UWidgetInteractionComponent_IsOverInteractableWidget_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.ClearMinValue"));

	USpinBox_ClearMinValue_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7186243E0              		 offset:8543e0                        

bool UWidgetInteractionComponent::IsOverHitTestVisibleWidget()
=======
}


// Function UMG.SpinBox.ClearMinSliderValue
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D8D06150              		 offset:2346150                       

void USpinBox::ClearMinSliderValue()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget"));

	UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.ClearMinSliderValue"));

	USpinBox_ClearMinSliderValue_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.IsOverFocusableWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7186243B0              		 offset:8543b0                        

bool UWidgetInteractionComponent::IsOverFocusableWidget()
=======
}


// Function UMG.SpinBox.ClearMaxValue
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D8D060F0              		 offset:23460f0                       

void USpinBox::ClearMaxValue()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.IsOverFocusableWidget"));

	UWidgetInteractionComponent_IsOverFocusableWidget_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.ClearMaxValue"));

	USpinBox_ClearMaxValue_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.GetLastHitResult
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FHitResult              ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF718623340              		 offset:853340                        

struct FHitResult UWidgetInteractionComponent::GetLastHitResult()
=======
}


// Function UMG.SpinBox.ClearMaxSliderValue
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D8D060D0              		 offset:23460d0                       

void USpinBox::ClearMaxSliderValue()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.GetLastHitResult"));

	UWidgetInteractionComponent_GetLastHitResult_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SpinBox.ClearMaxSliderValue"));

	USpinBox_ClearMaxSliderValue_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidgetComponent*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF718622B90              		 offset:852b90                        

class UWidgetComponent* UWidgetInteractionComponent::GetHoveredWidgetComponent()
=======
}


// DelegateFunction UMG.TableViewBase.OnGenerateRowUObject__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UObject*                 Item                           (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

class UWidget* UTableViewBase::OnGenerateRowUObject__DelegateSignature(class UObject* Item)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent"));

	UWidgetInteractionComponent_GetHoveredWidgetComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.TableViewBase.OnGenerateRowUObject__DelegateSignature"));

	UTableViewBase_OnGenerateRowUObject__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.WidgetInteractionComponent.Get2DHitLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718621ED0              		 offset:851ed0                        

struct FVector2D UWidgetInteractionComponent::Get2DHitLocation()
=======
// Function UMG.TileView.SetItemWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Width                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0E6E0              		 offset:234e6e0                       

void UTileView::SetItemWidth(float Width)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.Get2DHitLocation"));

	UWidgetInteractionComponent_Get2DHitLocation_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TileView.SetItemWidth"));

	UTileView_SetItemWidth_Params params;
	params.Width = Width;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UVerticalBoxSlot*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF71862CCC0              		 offset:85ccc0                        

class UVerticalBoxSlot* UWidgetLayoutLibrary::STATIC_SlotAsVerticalBoxSlot(class UWidget** Widget)
=======
}


// Function UMG.TileView.SetItemHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Height                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0E660              		 offset:234e660                       

void UTileView::SetItemHeight(float Height)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot"));

	UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Params params;
	params.Widget = Widget;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TileView.SetItemHeight"));

	UTileView_SetItemHeight_Params params;
	params.Height = Height;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UUniformGridSlot*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF71862CC40              		 offset:85cc40                        

class UUniformGridSlot* UWidgetLayoutLibrary::STATIC_SlotAsUniformGridSlot(class UWidget** Widget)
=======
}


// Function UMG.TileView.RequestListRefresh
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D8D0AD30              		 offset:234ad30                       

void UTileView::RequestListRefresh()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot"));

	UWidgetLayoutLibrary_SlotAsUniformGridSlot_Params params;
	params.Widget = Widget;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TileView.RequestListRefresh"));

	UTileView_RequestListRefresh_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UOverlaySlot*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF71862CBC0              		 offset:85cbc0                        

class UOverlaySlot* UWidgetLayoutLibrary::STATIC_SlotAsOverlaySlot(class UWidget** Widget)
=======
}


// Function UMG.MultiLineEditableText.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   InText                         (Parm)
// FunctionAddress:0x00007FF6D8D10FE0              		 offset:2350fe0                       

void UMultiLineEditableText::SetText(const struct FText& InText)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot"));

	UWidgetLayoutLibrary_SlotAsOverlaySlot_Params params;
	params.Widget = Widget;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MultiLineEditableText.SetText"));

	UMultiLineEditableText_SetText_Params params;
	params.InText = InText;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UHorizontalBoxSlot*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF71862CB40              		 offset:85cb40                        

class UHorizontalBoxSlot* UWidgetLayoutLibrary::STATIC_SlotAsHorizontalBoxSlot(class UWidget** Widget)
=======
}


// Function UMG.MultiLineEditableText.SetIsReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bReadOnly                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0E540              		 offset:234e540                       

void UMultiLineEditableText::SetIsReadOnly(bool bReadOnly)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot"));

	UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Params params;
	params.Widget = Widget;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MultiLineEditableText.SetIsReadOnly"));

	UMultiLineEditableText_SetIsReadOnly_Params params;
	params.bReadOnly = bReadOnly;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsGridSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGridSlot*               ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF71862CAC0              		 offset:85cac0                        

class UGridSlot* UWidgetLayoutLibrary::STATIC_SlotAsGridSlot(class UWidget** Widget)
=======
}


// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UMultiLineEditableText::OnMultiLineEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.SlotAsGridSlot"));

	UWidgetLayoutLibrary_SlotAsGridSlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature"));

	UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UCanvasPanelSlot*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF71862CA40              		 offset:85ca40                        

class UCanvasPanelSlot* UWidgetLayoutLibrary::STATIC_SlotAsCanvasSlot(class UWidget** Widget)
=======
}


// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UMultiLineEditableText::OnMultiLineEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot"));

	UWidgetLayoutLibrary_SlotAsCanvasSlot_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature"));

	UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UBorderSlot*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF71862C9C0              		 offset:85c9c0                        

class UBorderSlot* UWidgetLayoutLibrary::STATIC_SlotAsBorderSlot(class UWidget** Widget)
=======
}


// Function UMG.MultiLineEditableText.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D8D09290              		 offset:2349290                       

struct FText UMultiLineEditableText::GetText()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot"));

	UWidgetLayoutLibrary_SlotAsBorderSlot_Params params;
	params.Widget = Widget;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MultiLineEditableText.GetText"));

	UMultiLineEditableText_GetText_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.WidgetLayoutLibrary.RemoveAllWidgets
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF7186254C0              		 offset:8554c0                        

void UWidgetLayoutLibrary::STATIC_RemoveAllWidgets(class UObject** WorldContextObject)
=======
// Function UMG.MultiLineEditableTextBox.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   InText                         (Parm)
// FunctionAddress:0x00007FF6D8D110B0              		 offset:23510b0                       

void UMultiLineEditableTextBox::SetText(const struct FText& InText)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.RemoveAllWidgets"));

	UWidgetLayoutLibrary_RemoveAllWidgets_Params params;
	params.WorldContextObject = WorldContextObject;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MultiLineEditableTextBox.SetText"));

	UMultiLineEditableTextBox_SetText_Params params;
	params.InText = InText;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                WorldLocation                  (Parm, IsPlainOldData)
// struct FVector2D               ScreenPosition                 (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718624E80              		 offset:854e80                        

bool UWidgetLayoutLibrary::STATIC_ProjectWorldLocationToWidgetPosition(class APlayerController** PlayerController, struct FVector* WorldLocation, struct FVector2D* ScreenPosition)
=======
// Function UMG.MultiLineEditableTextBox.SetIsReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bReadOnly                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0E5D0              		 offset:234e5d0                       

void UMultiLineEditableTextBox::SetIsReadOnly(bool bReadOnly)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition"));

	UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Params params;
	params.PlayerController = PlayerController;
	params.WorldLocation = WorldLocation;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MultiLineEditableTextBox.SetIsReadOnly"));

	UMultiLineEditableTextBox_SetIsReadOnly_Params params;
	params.bReadOnly = bReadOnly;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

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
=======
}


// Function UMG.MultiLineEditableTextBox.SetError
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   InError                        (Parm)
// FunctionAddress:0x00007FF6D8D0CBD0              		 offset:234cbd0                       

void UMultiLineEditableTextBox::SetError(const struct FText& InError)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.GetViewportSize"));

	UWidgetLayoutLibrary_GetViewportSize_Params params;
	params.WorldContextObject = WorldContextObject;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MultiLineEditableTextBox.SetError"));

	UMultiLineEditableTextBox_SetError_Params params;
	params.InError = InError;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.GetViewportScale
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718623FB0              		 offset:853fb0                        

float UWidgetLayoutLibrary::STATIC_GetViewportScale(class UObject** WorldContextObject)
=======
}


// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UMultiLineEditableTextBox::OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.GetViewportScale"));

	UWidgetLayoutLibrary_GetViewportScale_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature"));

	UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

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
=======
}


// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UMultiLineEditableTextBox::OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI"));

	UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
=======
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature"));

	UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

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
=======
}


// Function UMG.MultiLineEditableTextBox.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D8D09320              		 offset:2349320                       

struct FText UMultiLineEditableTextBox::GetText()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.AsyncTaskDownloadImage.DownloadImage"));

	UAsyncTaskDownloadImage_DownloadImage_Params params;
	params.URL = URL;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MultiLineEditableTextBox.GetText"));

	UMultiLineEditableTextBox_GetText_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.DragDropOperation.Drop
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF719C5B980              		 offset:1e8b980                       

void UDragDropOperation::Drop(struct FPointerEvent* PointerEvent)
=======
// Function UMG.TextBlock.SetWrapTextAt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InWrapTextAt                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D11EF0              		 offset:2351ef0                       

void UTextBlock::SetWrapTextAt(float InWrapTextAt)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.DragDropOperation.Drop"));

	UDragDropOperation_Drop_Params params;
	params.PointerEvent = PointerEvent;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBlock.SetWrapTextAt"));

	UTextBlock_SetWrapTextAt_Params params;
	params.InWrapTextAt = InWrapTextAt;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.DragDropOperation.Dragged
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF719C5B850              		 offset:1e8b850                       

void UDragDropOperation::Dragged(struct FPointerEvent* PointerEvent)
=======
// Function UMG.TextBlock.SetText
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   InText                         (Parm)
// FunctionAddress:0x00007FF6D8D11180              		 offset:2351180                       

void UTextBlock::SetText(const struct FText& InText)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.DragDropOperation.Dragged"));

	UDragDropOperation_Dragged_Params params;
	params.PointerEvent = PointerEvent;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBlock.SetText"));

	UTextBlock_SetText_Params params;
	params.InText = InText;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.DragDropOperation.DragCancelled
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF719C5B720              		 offset:1e8b720                       

void UDragDropOperation::DragCancelled(struct FPointerEvent* PointerEvent)
=======
// Function UMG.TextBlock.SetShadowOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               InShadowOffset                 (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D106F0              		 offset:23506f0                       

void UTextBlock::SetShadowOffset(const struct FVector2D& InShadowOffset)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.DragDropOperation.DragCancelled"));

	UDragDropOperation_DragCancelled_Params params;
	params.PointerEvent = PointerEvent;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBlock.SetShadowOffset"));

	UTextBlock_SetShadowOffset_Params params;
	params.InShadowOffset = InShadowOffset;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.BoolBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C350              		 offset:1e8c350                       

bool UBoolBinding::GetValue()
=======
// Function UMG.TextBlock.SetShadowColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InShadowColorAndOpacity        (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D10670              		 offset:2350670                       

void UTextBlock::SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BoolBinding.GetValue"));

	UBoolBinding_GetValue_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBlock.SetShadowColorAndOpacity"));

	UTextBlock_SetShadowColorAndOpacity_Params params;
	params.InShadowColorAndOpacity = InShadowColorAndOpacity;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.BrushBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF719C5C380              		 offset:1e8c380                       

struct FSlateBrush UBrushBinding::GetValue()
=======
}


// Function UMG.TextBlock.SetOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InOpacity                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0F670              		 offset:234f670                       

void UTextBlock::SetOpacity(float InOpacity)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.BrushBinding.GetValue"));

	UBrushBinding_GetValue_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBlock.SetOpacity"));

	UTextBlock_SetOpacity_Params params;
	params.InOpacity = InOpacity;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.CheckedStateBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// ECheckBoxState                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C490              		 offset:1e8c490                       

ECheckBoxState UCheckedStateBinding::GetValue()
=======
}


// Function UMG.TextBlock.SetMinDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InMinDesiredWidth              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0F0C0              		 offset:234f0c0                       

void UTextBlock::SetMinDesiredWidth(float InMinDesiredWidth)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.CheckedStateBinding.GetValue"));

	UCheckedStateBinding_GetValue_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBlock.SetMinDesiredWidth"));

	UTextBlock_SetMinDesiredWidth_Params params;
	params.InMinDesiredWidth = InMinDesiredWidth;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.ColorBinding.GetSlateValue
// (Final, Native, Public, Const)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF719C5C1B0              		 offset:1e8c1b0                       

struct FSlateColor UColorBinding::GetSlateValue()
=======
}


// Function UMG.TextBlock.SetJustification
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ETextJustify>      InJustification                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0E760              		 offset:234e760                       

void UTextBlock::SetJustification(TEnumAsByte<ETextJustify> InJustification)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ColorBinding.GetSlateValue"));

	UColorBinding_GetSlateValue_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBlock.SetJustification"));

	UTextBlock_SetJustification_Params params;
	params.InJustification = InJustification;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.ColorBinding.GetLinearValue
// (Final, Native, Public, HasDefaults, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5BFF0              		 offset:1e8bff0                       

struct FLinearColor UColorBinding::GetLinearValue()
=======
}


// Function UMG.TextBlock.SetFont
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateFontInfo          InFontInfo                     (Parm)
// FunctionAddress:0x00007FF6D8D0CE50              		 offset:234ce50                       

void UTextBlock::SetFont(const struct FSlateFontInfo& InFontInfo)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.ColorBinding.GetLinearValue"));

	UColorBinding_GetLinearValue_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBlock.SetFont"));

	UTextBlock_SetFont_Params params;
	params.InFontInfo = InFontInfo;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.FloatBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C4C0              		 offset:1e8c4c0                       

float UFloatBinding::GetValue()
=======
}


// Function UMG.TextBlock.SetColorAndOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor             InColorAndOpacity              (Parm)
// FunctionAddress:0x00007FF6D8D0C530              		 offset:234c530                       

void UTextBlock::SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.FloatBinding.GetValue"));

	UFloatBinding_GetValue_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBlock.SetColorAndOpacity"));

	UTextBlock_SetColorAndOpacity_Params params;
	params.InColorAndOpacity = InColorAndOpacity;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.Int32Binding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C4F0              		 offset:1e8c4f0                       

int UInt32Binding::GetValue()
=======
}


// Function UMG.TextBlock.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D8D093B0              		 offset:23493b0                       

struct FText UTextBlock::GetText()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Int32Binding.GetValue"));

	UInt32Binding_GetValue_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBlock.GetText"));

	UTextBlock_GetText_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.MouseCursorBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// TEnumAsByte<EMouseCursor>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C520              		 offset:1e8c520                       

TEnumAsByte<EMouseCursor> UMouseCursorBinding::GetValue()
=======
// Function UMG.Throbber.SetNumberOfPieces
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InNumberOfPieces               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0F4E0              		 offset:234f4e0                       

void UThrobber::SetNumberOfPieces(int InNumberOfPieces)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.MouseCursorBinding.GetValue"));

	UMouseCursorBinding_GetValue_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Throbber.SetNumberOfPieces"));

	UThrobber_SetNumberOfPieces_Params params;
	params.InNumberOfPieces = InNumberOfPieces;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.TextBinding.GetTextValue
// (Final, Native, Public, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF719C5C2C0              		 offset:1e8c2c0                       

struct FText UTextBinding::GetTextValue()
=======
}


// Function UMG.Throbber.SetAnimateVertically
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInAnimateVertically           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0B450              		 offset:234b450                       

void UThrobber::SetAnimateVertically(bool bInAnimateVertically)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBinding.GetTextValue"));

	UTextBinding_GetTextValue_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Throbber.SetAnimateVertically"));

	UThrobber_SetAnimateVertically_Params params;
	params.bInAnimateVertically = bInAnimateVertically;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.TextBinding.GetStringValue
// (Final, Native, Public, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF719C5C230              		 offset:1e8c230                       

struct FString UTextBinding::GetStringValue()
=======
}


// Function UMG.Throbber.SetAnimateOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInAnimateOpacity              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0B3C0              		 offset:234b3c0                       

void UThrobber::SetAnimateOpacity(bool bInAnimateOpacity)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.TextBinding.GetStringValue"));

	UTextBinding_GetStringValue_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Throbber.SetAnimateOpacity"));

	UThrobber_SetAnimateOpacity_Params params;
	params.bInAnimateOpacity = bInAnimateOpacity;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.VisibilityBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C550              		 offset:1e8c550                       

ESlateVisibility UVisibilityBinding::GetValue()
=======
}


// Function UMG.Throbber.SetAnimateHorizontally
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInAnimateHorizontally         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0B330              		 offset:234b330                       

void UThrobber::SetAnimateHorizontally(bool bInAnimateHorizontally)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.VisibilityBinding.GetValue"));

	UVisibilityBinding_GetValue_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.Throbber.SetAnimateHorizontally"));

	UThrobber_SetAnimateHorizontally_Params params;
	params.bInAnimateHorizontally = bInAnimateHorizontally;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.WidgetBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C580              		 offset:1e8c580                       

class UWidget* UWidgetBinding::GetValue()
=======
}


// Function UMG.WidgetAnimation.GetStartTime
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D09140              		 offset:2349140                       

float UWidgetAnimation::GetStartTime()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBinding.GetValue"));

	UWidgetBinding_GetValue_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetAnimation.GetStartTime"));

	UWidgetAnimation_GetStartTime_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FGeometry*              Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D*              ScreenPosition                 (Parm, IsPlainOldData)
// struct FVector2D               LocalCoordinate                (Parm, OutParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5D6C0              		 offset:1e8d6c0                       

void USlateBlueprintLibrary::STATIC_ScreenToWidgetLocal(class UObject** WorldContextObject, struct FGeometry* Geometry, struct FVector2D* ScreenPosition, struct FVector2D* LocalCoordinate)
=======
// Function UMG.WidgetAnimation.GetEndTime
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D08100              		 offset:2348100                       

float UWidgetAnimation::GetEndTime()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal"));

	USlateBlueprintLibrary_ScreenToWidgetLocal_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Geometry = Geometry;
	params.ScreenPosition = ScreenPosition;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetAnimation.GetEndTime"));

	UWidgetAnimation_GetEndTime_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

<<<<<<< HEAD
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
=======
	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.UnlockMouse
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D8D125C0              		 offset:23525c0                       

struct FEventReply UWidgetBlueprintLibrary::STATIC_UnlockMouse(struct FEventReply* Reply)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute"));

	USlateBlueprintLibrary_ScreenToWidgetAbsolute_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ScreenPosition = ScreenPosition;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.UnlockMouse"));

	UWidgetBlueprintLibrary_UnlockMouse_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

<<<<<<< HEAD
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
=======
	if (Reply != nullptr)
		*Reply = params.Reply;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.Unhandled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D8D12540              		 offset:2352540                       

struct FEventReply UWidgetBlueprintLibrary::STATIC_Unhandled()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.ScreenToViewport"));

	USlateBlueprintLibrary_ScreenToViewport_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ScreenPosition = ScreenPosition;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.Unhandled"));

	UWidgetBlueprintLibrary_Unhandled_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

<<<<<<< HEAD
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
=======
	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.SetUserFocus
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm)
// class UWidget*                 FocusWidget                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bInAllUsers                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D8D112D0              		 offset:23512d0                       

struct FEventReply UWidgetBlueprintLibrary::STATIC_SetUserFocus(class UWidget* FocusWidget, bool bInAllUsers, struct FEventReply* Reply)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.LocalToViewport"));

	USlateBlueprintLibrary_LocalToViewport_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Geometry = Geometry;
	params.LocalCoordinate = LocalCoordinate;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetUserFocus"));

	UWidgetBlueprintLibrary_SetUserFocus_Params params;
	params.FocusWidget = FocusWidget;
	params.bInAllUsers = bInAllUsers;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

<<<<<<< HEAD
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
=======
	if (Reply != nullptr)
		*Reply = params.Reply;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.SetMousePosition
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm)
// struct FVector2D               NewMousePosition               (Parm, IsPlainOldData)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D8D0F2C0              		 offset:234f2c0                       

struct FEventReply UWidgetBlueprintLibrary::STATIC_SetMousePosition(const struct FVector2D& NewMousePosition, struct FEventReply* Reply)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.LocalToAbsolute"));

	USlateBlueprintLibrary_LocalToAbsolute_Params params;
	params.Geometry = Geometry;
	params.LocalCoordinate = LocalCoordinate;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetMousePosition"));

	UWidgetBlueprintLibrary_SetMousePosition_Params params;
	params.NewMousePosition = NewMousePosition;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

<<<<<<< HEAD
=======
	if (Reply != nullptr)
		*Reply = params.Reply;

>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.SlateBlueprintLibrary.IsUnderLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry*              Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D*              AbsoluteCoordinate             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C990              		 offset:1e8c990                       

bool USlateBlueprintLibrary::STATIC_IsUnderLocation(struct FGeometry* Geometry, struct FVector2D* AbsoluteCoordinate)
=======
// Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 InWidgetToFocus                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EMouseLockMode                 InMouseLockMode                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0E060              		 offset:234e060                       

void UWidgetBlueprintLibrary::STATIC_SetInputMode_UIOnlyEx(class APlayerController* Target, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.IsUnderLocation"));

	USlateBlueprintLibrary_IsUnderLocation_Params params;
	params.Geometry = Geometry;
	params.AbsoluteCoordinate = AbsoluteCoordinate;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx"));

	UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Params params;
	params.Target = Target;
	params.InWidgetToFocus = InWidgetToFocus;
	params.InMouseLockMode = InMouseLockMode;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.SlateBlueprintLibrary.GetLocalSize
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry*              Geometry                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C030              		 offset:1e8c030                       

struct FVector2D USlateBlueprintLibrary::STATIC_GetLocalSize(struct FGeometry* Geometry)
=======
}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 InWidgetToFocus                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bLockMouseToViewport           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0DF60              		 offset:234df60                       

void UWidgetBlueprintLibrary::STATIC_SetInputMode_UIOnly(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.GetLocalSize"));

	USlateBlueprintLibrary_GetLocalSize_Params params;
	params.Geometry = Geometry;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly"));

	UWidgetBlueprintLibrary_SetInputMode_UIOnly_Params params;
	params.Target = Target;
	params.InWidgetToFocus = InWidgetToFocus;
	params.bLockMouseToViewport = bLockMouseToViewport;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

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
=======
}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       Target                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0DEF0              		 offset:234def0                       

void UWidgetBlueprintLibrary::STATIC_SetInputMode_GameOnly(class APlayerController* Target)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush"));

	USlateBlueprintLibrary_EqualEqual_SlateBrush_Params params;
	params.A = A;
	params.B = B;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly"));

	UWidgetBlueprintLibrary_SetInputMode_GameOnly_Params params;
	params.Target = Target;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

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
=======
}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 InWidgetToFocus                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EMouseLockMode                 InMouseLockMode                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHideCursorDuringCapture       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0DDB0              		 offset:234ddb0                       

void UWidgetBlueprintLibrary::STATIC_SetInputMode_GameAndUIEx(class APlayerController* Target, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.AbsoluteToViewport"));

	USlateBlueprintLibrary_AbsoluteToViewport_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AbsoluteDesktopCoordinate = AbsoluteDesktopCoordinate;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx"));

	UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Params params;
	params.Target = Target;
	params.InWidgetToFocus = InWidgetToFocus;
	params.InMouseLockMode = InMouseLockMode;
	params.bHideCursorDuringCapture = bHideCursorDuringCapture;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

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
=======
}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 InWidgetToFocus                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bLockMouseToViewport           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHideCursorDuringCapture       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0DC70              		 offset:234dc70                       

void UWidgetBlueprintLibrary::STATIC_SetInputMode_GameAndUI(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.SlateBlueprintLibrary.AbsoluteToLocal"));

	USlateBlueprintLibrary_AbsoluteToLocal_Params params;
	params.Geometry = Geometry;
	params.AbsoluteCoordinate = AbsoluteCoordinate;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI"));

	UWidgetBlueprintLibrary_SetInputMode_GameAndUI_Params params;
	params.Target = Target;
	params.InWidgetToFocus = InWidgetToFocus;
	params.bLockMouseToViewport = bLockMouseToViewport;
	params.bHideCursorDuringCapture = bHideCursorDuringCapture;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.UserWidget.UnregisterInputComponent
// (Final, Native, Protected, BlueprintCallable)
// FunctionAddress:0x00007FF719C5EA00              		 offset:1e8ea00                       

void UUserWidget::UnregisterInputComponent()
=======
}


// Function UMG.WidgetBlueprintLibrary.SetHardwareCursor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMouseCursor>      CursorShape                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CursorName                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               HotSpot                        (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0D080              		 offset:234d080                       

bool UWidgetBlueprintLibrary::STATIC_SetHardwareCursor(class UObject* WorldContextObject, TEnumAsByte<EMouseCursor> CursorShape, const struct FName& CursorName, const struct FVector2D& HotSpot)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.UnregisterInputComponent"));

	UUserWidget_UnregisterInputComponent_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetHardwareCursor"));

	UWidgetBlueprintLibrary_SetHardwareCursor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.CursorShape = CursorShape;
	params.CursorName = CursorName;
	params.HotSpot = HotSpot;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.UserWidget.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UUserWidget::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
=======

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D8D0CE30              		 offset:234ce30                       

void UWidgetBlueprintLibrary::STATIC_SetFocusToGameViewport()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.Tick"));

	UUserWidget_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport"));

	UWidgetBlueprintLibrary_SetFocusToGameViewport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.UserWidget.StopListeningForInputAction
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FName*                  ActionName                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInputEvent>*      EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF719C5E930              		 offset:1e8e930                       

void UUserWidget::StopListeningForInputAction(struct FName* ActionName, TEnumAsByte<EInputEvent>* EventType)
=======
// Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm, ReferenceParm)
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0C100              		 offset:234c100                       

void UWidgetBlueprintLibrary::STATIC_SetBrushResourceToTexture(class UTexture2D* Texture, struct FSlateBrush* Brush)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.StopListeningForInputAction"));

	UUserWidget_StopListeningForInputAction_Params params;
	params.ActionName = ActionName;
	params.EventType = EventType;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture"));

	UWidgetBlueprintLibrary_SetBrushResourceToTexture_Params params;
	params.Texture = Texture;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.UserWidget.StopListeningForAllInputActions
// (Final, Native, Protected, BlueprintCallable)
// FunctionAddress:0x00007FF719C5E910              		 offset:1e8e910                       

void UUserWidget::StopListeningForAllInputActions()
=======

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm, ReferenceParm)
// class UMaterialInterface*      Material                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0BF60              		 offset:234bf60                       

void UWidgetBlueprintLibrary::STATIC_SetBrushResourceToMaterial(class UMaterialInterface* Material, struct FSlateBrush* Brush)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.StopListeningForAllInputActions"));

	UUserWidget_StopListeningForAllInputActions_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial"));

	UWidgetBlueprintLibrary_SetBrushResourceToMaterial_Params params;
	params.Material = Material;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.UserWidget.StopAnimation
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation**       InAnimation                    (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF719C5E890              		 offset:1e8e890                       

void UUserWidget::StopAnimation(class UWidgetAnimation** InAnimation)
=======

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D8D0A8A0              		 offset:234a8a0                       

struct FEventReply UWidgetBlueprintLibrary::STATIC_ReleaseMouseCapture(struct FEventReply* Reply)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.StopAnimation"));

	UUserWidget_StopAnimation_Params params;
	params.InAnimation = InAnimation;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture"));

	UWidgetBlueprintLibrary_ReleaseMouseCapture_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.UserWidget.StopAllAnimations
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF719C5E870              		 offset:1e8e870                       

void UUserWidget::StopAllAnimations()
=======

	if (Reply != nullptr)
		*Reply = params.Reply;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm)
// bool                           bInAllJoysticks                (Parm, ZeroConstructor, IsPlainOldData)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D8D0A5F0              		 offset:234a5f0                       

struct FEventReply UWidgetBlueprintLibrary::STATIC_ReleaseJoystickCapture(bool bInAllJoysticks, struct FEventReply* Reply)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.StopAllAnimations"));

	UUserWidget_StopAllAnimations_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture"));

	UWidgetBlueprintLibrary_ReleaseJoystickCapture_Params params;
	params.bInAllJoysticks = bInAllJoysticks;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.UserWidget.SetPositionInViewport
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D*              Position                       (Parm, IsPlainOldData)
// bool*                          bRemoveDPIScale                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF719C5E1F0              		 offset:1e8e1f0                       

void UUserWidget::SetPositionInViewport(struct FVector2D* Position, bool* bRemoveDPIScale)
=======

	if (Reply != nullptr)
		*Reply = params.Reply;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.NoResourceBrush
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D8D0A060              		 offset:234a060                       

struct FSlateBrush UWidgetBlueprintLibrary::STATIC_NoResourceBrush()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetPositionInViewport"));

	UUserWidget_SetPositionInViewport_Params params;
	params.Position = Position;
	params.bRemoveDPIScale = bRemoveDPIScale;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.NoResourceBrush"));

	UWidgetBlueprintLibrary_NoResourceBrush_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.UserWidget.SetPlaybackSpeed
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation**       InAnimation                    (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float*                         PlaybackSpeed                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF719C5E120              		 offset:1e8e120                       

void UUserWidget::SetPlaybackSpeed(class UWidgetAnimation** InAnimation, float* PlaybackSpeed)
=======

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D8D09EE0              		 offset:2349ee0                       

struct FSlateBrush UWidgetBlueprintLibrary::STATIC_MakeBrushFromTexture(class UTexture2D* Texture, int Width, int Height)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetPlaybackSpeed"));

	UUserWidget_SetPlaybackSpeed_Params params;
	params.InAnimation = InAnimation;
	params.PlaybackSpeed = PlaybackSpeed;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture"));

	UWidgetBlueprintLibrary_MakeBrushFromTexture_Params params;
	params.Texture = Texture;
	params.Width = Width;
	params.Height = Height;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.UserWidget.SetPadding
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin*                InPadding                      (Parm)
// FunctionAddress:0x00007FF719C5E090              		 offset:1e8e090                       

void UUserWidget::SetPadding(struct FMargin* InPadding)
=======

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMaterialInterface*      Material                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D8D09D60              		 offset:2349d60                       

struct FSlateBrush UWidgetBlueprintLibrary::STATIC_MakeBrushFromMaterial(class UMaterialInterface* Material, int Width, int Height)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetPadding"));

	UUserWidget_SetPadding_Params params;
	params.InPadding = InPadding;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial"));

	UWidgetBlueprintLibrary_MakeBrushFromMaterial_Params params;
	params.Material = Material;
	params.Width = Width;
	params.Height = Height;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.UserWidget.SetOwningPlayer
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController**      LocalPlayerController          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF719C5E010              		 offset:1e8e010                       

void UUserWidget::SetOwningPlayer(class APlayerController** LocalPlayerController)
=======

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USlateBrushAsset*        BrushAsset                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D8D09C70              		 offset:2349c70                       

struct FSlateBrush UWidgetBlueprintLibrary::STATIC_MakeBrushFromAsset(class USlateBrushAsset* BrushAsset)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetOwningPlayer"));

	UUserWidget_SetOwningPlayer_Params params;
	params.LocalPlayerController = LocalPlayerController;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset"));

	UWidgetBlueprintLibrary_MakeBrushFromAsset_Params params;
	params.BrushAsset = BrushAsset;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.UserWidget.SetOwningLocalPlayer
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class ULocalPlayer**           LocalPlayer                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF719C5DF90              		 offset:1e8df90                       

void UUserWidget::SetOwningLocalPlayer(class ULocalPlayer** LocalPlayer)
=======

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.LockMouse
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm)
// class UWidget*                 CapturingWidget                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D8D09AD0              		 offset:2349ad0                       

struct FEventReply UWidgetBlueprintLibrary::STATIC_LockMouse(class UWidget* CapturingWidget, struct FEventReply* Reply)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetOwningLocalPlayer"));

	UUserWidget_SetOwningLocalPlayer_Params params;
	params.LocalPlayer = LocalPlayer;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.LockMouse"));

	UWidgetBlueprintLibrary_LockMouse_Params params;
	params.CapturingWidget = CapturingWidget;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.UserWidget.SetNumLoopsToPlay
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation**       InAnimation                    (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           NumLoopsToPlay                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF719C5DED0              		 offset:1e8ded0                       

void UUserWidget::SetNumLoopsToPlay(class UWidgetAnimation** InAnimation, int* NumLoopsToPlay)
=======

	if (Reply != nullptr)
		*Reply = params.Reply;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.IsDragDropping
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D09980              		 offset:2349980                       

bool UWidgetBlueprintLibrary::STATIC_IsDragDropping()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetNumLoopsToPlay"));

	UUserWidget_SetNumLoopsToPlay_Params params;
	params.InAnimation = InAnimation;
	params.NumLoopsToPlay = NumLoopsToPlay;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.IsDragDropping"));

	UWidgetBlueprintLibrary_IsDragDropping_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.UserWidget.SetInputActionPriority
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int*                           NewPriority                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF719C5DD20              		 offset:1e8dd20                       

void UUserWidget::SetInputActionPriority(int* NewPriority)
=======

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.Handled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D8D09790              		 offset:2349790                       

struct FEventReply UWidgetBlueprintLibrary::STATIC_Handled()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetInputActionPriority"));

	UUserWidget_SetInputActionPriority_Params params;
	params.NewPriority = NewPriority;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.Handled"));

	UWidgetBlueprintLibrary_Handled_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.UserWidget.SetInputActionBlocking
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool*                          bShouldBlock                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF719C5DC90              		 offset:1e8dc90                       

void UUserWidget::SetInputActionBlocking(bool* bShouldBlock)
=======

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               SafePadding                    (Parm, OutParm, IsPlainOldData)
// struct FVector2D               SafePaddingScale               (Parm, OutParm, IsPlainOldData)
// struct FVector2D               SpillOverPadding               (Parm, OutParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D08EB0              		 offset:2348eb0                       

void UWidgetBlueprintLibrary::STATIC_GetSafeZonePadding(class UObject* WorldContextObject, struct FVector2D* SafePadding, struct FVector2D* SafePaddingScale, struct FVector2D* SpillOverPadding)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetInputActionBlocking"));

	UUserWidget_SetInputActionBlocking_Params params;
	params.bShouldBlock = bShouldBlock;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding"));

	UWidgetBlueprintLibrary_GetSafeZonePadding_Params params;
	params.WorldContextObject = WorldContextObject;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.UserWidget.SetForegroundColor
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor*            InForegroundColor              (Parm)
// FunctionAddress:0x00007FF719C5DB90              		 offset:1e8db90                       

void UUserWidget::SetForegroundColor(struct FSlateColor* InForegroundColor)
=======

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
// struct FAnalogInputEvent       Event                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FKeyEvent               ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D8D08750              		 offset:2348750                       

struct FKeyEvent UWidgetBlueprintLibrary::STATIC_GetKeyEventFromAnalogInputEvent(const struct FAnalogInputEvent& Event)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetForegroundColor"));

	UUserWidget_SetForegroundColor_Params params;
	params.InForegroundColor = InForegroundColor;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent"));

	UWidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent_Params params;
	params.Event = Event;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.UserWidget.SetDesiredSizeInViewport
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D*              Size                           (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5DB10              		 offset:1e8db10                       

void UUserWidget::SetDesiredSizeInViewport(struct FVector2D* Size)
=======

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPointerEvent           Event                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FInputEvent             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D8D085B0              		 offset:23485b0                       

struct FInputEvent UWidgetBlueprintLibrary::STATIC_GetInputEventFromPointerEvent(const struct FPointerEvent& Event)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetDesiredSizeInViewport"));

	UUserWidget_SetDesiredSizeInViewport_Params params;
	params.Size = Size;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent"));

	UWidgetBlueprintLibrary_GetInputEventFromPointerEvent_Params params;
	params.Event = Event;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.UserWidget.SetColorAndOpacity
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor*           InColorAndOpacity              (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5DA10              		 offset:1e8da10                       

void UUserWidget::SetColorAndOpacity(struct FLinearColor* InColorAndOpacity)
=======

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FNavigationEvent        Event                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FInputEvent             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D8D084D0              		 offset:23484d0                       

struct FInputEvent UWidgetBlueprintLibrary::STATIC_GetInputEventFromNavigationEvent(const struct FNavigationEvent& Event)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetColorAndOpacity"));

	UUserWidget_SetColorAndOpacity_Params params;
	params.InColorAndOpacity = InColorAndOpacity;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent"));

	UWidgetBlueprintLibrary_GetInputEventFromNavigationEvent_Params params;
	params.Event = Event;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.UserWidget.SetAnchorsInViewport
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FAnchors*               Anchors                        (Parm)
// FunctionAddress:0x00007FF719C5D980              		 offset:1e8d980                       

void UUserWidget::SetAnchorsInViewport(struct FAnchors* Anchors)
=======

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKeyEvent               Event                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FInputEvent             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D8D083A0              		 offset:23483a0                       

struct FInputEvent UWidgetBlueprintLibrary::STATIC_GetInputEventFromKeyEvent(const struct FKeyEvent& Event)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetAnchorsInViewport"));

	UUserWidget_SetAnchorsInViewport_Params params;
	params.Anchors = Anchors;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent"));

	UWidgetBlueprintLibrary_GetInputEventFromKeyEvent_Params params;
	params.Event = Event;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.UserWidget.SetAlignmentInViewport
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D*              Alignment                      (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5D840              		 offset:1e8d840                       

void UUserWidget::SetAlignmentInViewport(struct FVector2D* Alignment)
=======

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromControllerEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FControllerEvent        Event                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FInputEvent             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D8D08250              		 offset:2348250                       

struct FInputEvent UWidgetBlueprintLibrary::STATIC_GetInputEventFromControllerEvent(const struct FControllerEvent& Event)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.SetAlignmentInViewport"));

	UUserWidget_SetAlignmentInViewport_Params params;
	params.Alignment = Alignment;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetInputEventFromControllerEvent"));

	UWidgetBlueprintLibrary_GetInputEventFromControllerEvent_Params params;
	params.Event = Event;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.UserWidget.ReverseAnimation
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation**       InAnimation                    (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF719C5D440              		 offset:1e8d440                       

void UUserWidget::ReverseAnimation(class UWidgetAnimation** InAnimation)
=======

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FCharacterEvent         Event                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FInputEvent             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D8D08160              		 offset:2348160                       

struct FInputEvent UWidgetBlueprintLibrary::STATIC_GetInputEventFromCharacterEvent(const struct FCharacterEvent& Event)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.ReverseAnimation"));

	UUserWidget_ReverseAnimation_Params params;
	params.InAnimation = InAnimation;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent"));

	UWidgetBlueprintLibrary_GetInputEventFromCharacterEvent_Params params;
	params.Event = Event;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.UserWidget.RemoveFromViewport
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF719F4BBD0              		 offset:217bbd0                       

void UUserWidget::RemoveFromViewport()
=======

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm, ReferenceParm)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D07F70              		 offset:2347f70                       

class UMaterialInstanceDynamic* UWidgetBlueprintLibrary::STATIC_GetDynamicMaterial(struct FSlateBrush* Brush)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.RemoveFromViewport"));

	UUserWidget_RemoveFromViewport_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial"));

	UWidgetBlueprintLibrary_GetDynamicMaterial_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.UserWidget.RegisterInputComponent
// (Final, Native, Protected, BlueprintCallable)
// FunctionAddress:0x00007FF719C5D400              		 offset:1e8d400                       

void UUserWidget::RegisterInputComponent()
=======

	if (Brush != nullptr)
		*Brush = params.Brush;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDragDropOperation*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D07EA0              		 offset:2347ea0                       

class UDragDropOperation* UWidgetBlueprintLibrary::STATIC_GetDragDroppingContent()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.RegisterInputComponent"));

	UUserWidget_RegisterInputComponent_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent"));

	UWidgetBlueprintLibrary_GetDragDroppingContent_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.UserWidget.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UUserWidget::PreConstruct(bool* IsDesignTime)
=======

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm, ReferenceParm)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D07BC0              		 offset:2347bc0                       

class UTexture2D* UWidgetBlueprintLibrary::STATIC_GetBrushResourceAsTexture2D(struct FSlateBrush* Brush)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.PreConstruct"));

	UUserWidget_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D"));

	UWidgetBlueprintLibrary_GetBrushResourceAsTexture2D_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.UserWidget.PlaySound
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase**             SoundToPlay                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF719C5D380              		 offset:1e8d380                       

void UUserWidget::PlaySound(class USoundBase** SoundToPlay)
=======

	if (Brush != nullptr)
		*Brush = params.Brush;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm, ReferenceParm)
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D07A60              		 offset:2347a60                       

class UMaterialInterface* UWidgetBlueprintLibrary::STATIC_GetBrushResourceAsMaterial(struct FSlateBrush* Brush)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.PlaySound"));

	UUserWidget_PlaySound_Params params;
	params.SoundToPlay = SoundToPlay;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial"));

	UWidgetBlueprintLibrary_GetBrushResourceAsMaterial_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
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
=======

	if (Brush != nullptr)
		*Brush = params.Brush;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetBrushResource
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm, ReferenceParm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D07900              		 offset:2347900                       

class UObject* UWidgetBlueprintLibrary::STATIC_GetBrushResource(struct FSlateBrush* Brush)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.PlayAnimationTo"));

	UUserWidget_PlayAnimationTo_Params params;
	params.InAnimation = InAnimation;
	params.StartAtTime = StartAtTime;
	params.EndAtTime = EndAtTime;
	params.NumLoopsToPlay = NumLoopsToPlay;
	params.PlayMode = PlayMode;
	params.PlaybackSpeed = PlaybackSpeed;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetBrushResource"));

	UWidgetBlueprintLibrary_GetBrushResource_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
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
=======

	if (Brush != nullptr)
		*Brush = params.Brush;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Interface                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UUserWidget*>     FoundWidgets                   (Parm, OutParm, ZeroConstructor)
// bool                           TopLevelOnly                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D07720              		 offset:2347720                       

void UWidgetBlueprintLibrary::STATIC_GetAllWidgetsWithInterface(class UObject* WorldContextObject, class UClass* Interface, bool TopLevelOnly, TArray<class UUserWidget*>* FoundWidgets)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.PlayAnimation"));

	UUserWidget_PlayAnimation_Params params;
	params.InAnimation = InAnimation;
	params.StartAtTime = StartAtTime;
	params.NumLoopsToPlay = NumLoopsToPlay;
	params.PlayMode = PlayMode;
	params.PlaybackSpeed = PlaybackSpeed;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface"));

	UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Interface = Interface;
	params.TopLevelOnly = TopLevelOnly;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.UserWidget.PauseAnimation
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation**       InAnimation                    (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5CFA0              		 offset:1e8cfa0                       

float UUserWidget::PauseAnimation(class UWidgetAnimation** InAnimation)
=======

	if (FoundWidgets != nullptr)
		*FoundWidgets = params.FoundWidgets;
}


// Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UUserWidget*>     FoundWidgets                   (Parm, OutParm, ZeroConstructor)
// class UClass*                  WidgetClass                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           TopLevelOnly                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D075B0              		 offset:23475b0                       

void UWidgetBlueprintLibrary::STATIC_GetAllWidgetsOfClass(class UObject* WorldContextObject, class UClass* WidgetClass, bool TopLevelOnly, TArray<class UUserWidget*>* FoundWidgets)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.PauseAnimation"));

	UUserWidget_PauseAnimation_Params params;
	params.InAnimation = InAnimation;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass"));

	UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Params params;
	params.WorldContextObject = WorldContextObject;
	params.WidgetClass = WidgetClass;
	params.TopLevelOnly = TopLevelOnly;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

<<<<<<< HEAD
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
=======
	if (FoundWidgets != nullptr)
		*FoundWidgets = params.FoundWidgets;
}


// Function UMG.WidgetBlueprintLibrary.EndDragDrop
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D8D072F0              		 offset:23472f0                       

struct FEventReply UWidgetBlueprintLibrary::STATIC_EndDragDrop(struct FEventReply* Reply)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnTouchStarted"));

	UUserWidget_OnTouchStarted_Params params;
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.EndDragDrop"));

	UWidgetBlueprintLibrary_EndDragDrop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

<<<<<<< HEAD
=======
	if (Reply != nullptr)
		*Reply = params.Reply;

>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.UserWidget.OnTouchMoved
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          InTouchEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

struct FEventReply UUserWidget::OnTouchMoved(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
=======
// Function UMG.WidgetBlueprintLibrary.DrawTextFormatted
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext           Context                        (Parm, OutParm, ReferenceParm)
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector2D               Position                       (Parm, IsPlainOldData)
// class UFont*                   Font                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            FontSize                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   FontTypeFace                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Tint                           (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D07080              		 offset:2347080                       

void UWidgetBlueprintLibrary::STATIC_DrawTextFormatted(const struct FText& Text, const struct FVector2D& Position, class UFont* Font, int FontSize, const struct FName& FontTypeFace, const struct FLinearColor& Tint, struct FPaintContext* Context)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnTouchMoved"));

	UUserWidget_OnTouchMoved_Params params;
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	auto flags = fn->FunctionFlags;
=======
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
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

<<<<<<< HEAD
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
=======
	if (Context != nullptr)
		*Context = params.Context;
}


// Function UMG.WidgetBlueprintLibrary.DrawText
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext           Context                        (Parm, OutParm, ReferenceParm)
// struct FString                 inString                       (Parm, ZeroConstructor)
// struct FVector2D               Position                       (Parm, IsPlainOldData)
// struct FLinearColor            Tint                           (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D06EF0              		 offset:2346ef0                       

void UWidgetBlueprintLibrary::STATIC_DrawText(const struct FString& inString, const struct FVector2D& Position, const struct FLinearColor& Tint, struct FPaintContext* Context)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnTouchGesture"));

	UUserWidget_OnTouchGesture_Params params;
	params.MyGeometry = MyGeometry;
	params.GestureEvent = GestureEvent;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.DrawText"));

	UWidgetBlueprintLibrary_DrawText_Params params;
	params.inString = inString;
	params.Position = Position;
	params.Tint = Tint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

<<<<<<< HEAD
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
=======
	if (Context != nullptr)
		*Context = params.Context;
}


// Function UMG.WidgetBlueprintLibrary.DrawLines
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext           Context                        (Parm, OutParm, ReferenceParm)
// TArray<struct FVector2D>       Points                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FLinearColor            Tint                           (Parm, IsPlainOldData)
// bool                           bAntiAlias                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D06D40              		 offset:2346d40                       

void UWidgetBlueprintLibrary::STATIC_DrawLines(TArray<struct FVector2D> Points, const struct FLinearColor& Tint, bool bAntiAlias, struct FPaintContext* Context)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnTouchEnded"));

	UUserWidget_OnTouchEnded_Params params;
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.DrawLines"));

	UWidgetBlueprintLibrary_DrawLines_Params params;
	params.Points = Points;
	params.Tint = Tint;
	params.bAntiAlias = bAntiAlias;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

<<<<<<< HEAD
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
=======
	if (Context != nullptr)
		*Context = params.Context;
}


// Function UMG.WidgetBlueprintLibrary.DrawLine
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext           Context                        (Parm, OutParm, ReferenceParm)
// struct FVector2D               PositionA                      (Parm, IsPlainOldData)
// struct FVector2D               PositionB                      (Parm, IsPlainOldData)
// struct FLinearColor            Tint                           (Parm, IsPlainOldData)
// bool                           bAntiAlias                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D06B90              		 offset:2346b90                       

void UWidgetBlueprintLibrary::STATIC_DrawLine(const struct FVector2D& PositionA, const struct FVector2D& PositionB, const struct FLinearColor& Tint, bool bAntiAlias, struct FPaintContext* Context)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnPreviewMouseButtonDown"));

	UUserWidget_OnPreviewMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.DrawLine"));

	UWidgetBlueprintLibrary_DrawLine_Params params;
	params.PositionA = PositionA;
	params.PositionB = PositionB;
	params.Tint = Tint;
	params.bAntiAlias = bAntiAlias;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

<<<<<<< HEAD
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
=======
	if (Context != nullptr)
		*Context = params.Context;
}


// Function UMG.WidgetBlueprintLibrary.DrawBox
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext           Context                        (Parm, OutParm, ReferenceParm)
// struct FVector2D               Position                       (Parm, IsPlainOldData)
// struct FVector2D               Size                           (Parm, IsPlainOldData)
// class USlateBrushAsset*        Brush                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Tint                           (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D069E0              		 offset:23469e0                       

void UWidgetBlueprintLibrary::STATIC_DrawBox(const struct FVector2D& Position, const struct FVector2D& Size, class USlateBrushAsset* Brush, const struct FLinearColor& Tint, struct FPaintContext* Context)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnPreviewKeyDown"));

	UUserWidget_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.DrawBox"));

	UWidgetBlueprintLibrary_DrawBox_Params params;
	params.Position = Position;
	params.Size = Size;
	params.Brush = Brush;
	params.Tint = Tint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

<<<<<<< HEAD
	return params.ReturnValue;
}


// Function UMG.UserWidget.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext           Context                        (Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UUserWidget::OnPaint(struct FPaintContext* Context)
=======
	if (Context != nullptr)
		*Context = params.Context;
}


// Function UMG.WidgetBlueprintLibrary.DismissAllMenus
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D8D069C0              		 offset:23469c0                       

void UWidgetBlueprintLibrary::STATIC_DismissAllMenus()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnPaint"));

	UUserWidget_OnPaint_Params params;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.DismissAllMenus"));

	UWidgetBlueprintLibrary_DismissAllMenus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

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
=======
}


// Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPointerEvent           PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// class UWidget*                 WidgetDetectingDrag            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FKey                    DragKey                        (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D8D06770              		 offset:2346770                       

struct FEventReply UWidgetBlueprintLibrary::STATIC_DetectDragIfPressed(const struct FPointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnMouseWheel"));

	UUserWidget_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed"));

	UWidgetBlueprintLibrary_DetectDragIfPressed_Params params;
	params.PointerEvent = PointerEvent;
	params.WidgetDetectingDrag = WidgetDetectingDrag;
	params.DragKey = DragKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.UserWidget.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

struct FEventReply UUserWidget::OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
=======
// Function UMG.WidgetBlueprintLibrary.DetectDrag
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm)
// class UWidget*                 WidgetDetectingDrag            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FKey                    DragKey                        (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D8D06530              		 offset:2346530                       

struct FEventReply UWidgetBlueprintLibrary::STATIC_DetectDrag(class UWidget* WidgetDetectingDrag, const struct FKey& DragKey, struct FEventReply* Reply)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnMouseMove"));

	UUserWidget_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.DetectDrag"));

	UWidgetBlueprintLibrary_DetectDrag_Params params;
	params.WidgetDetectingDrag = WidgetDetectingDrag;
	params.DragKey = DragKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

<<<<<<< HEAD
=======
	if (Reply != nullptr)
		*Reply = params.Reply;

>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.UserWidget.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UUserWidget::OnMouseLeave(struct FPointerEvent* MouseEvent)
=======
// Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                  OperationClass                 (Parm, ZeroConstructor, IsPlainOldData)
// class UDragDropOperation*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D064B0              		 offset:23464b0                       

class UDragDropOperation* UWidgetBlueprintLibrary::STATIC_CreateDragDropOperation(class UClass* OperationClass)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnMouseLeave"));

	UUserWidget_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation"));

	UWidgetBlueprintLibrary_CreateDragDropOperation_Params params;
	params.OperationClass = OperationClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.UserWidget.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UUserWidget::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
=======

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.Create
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  WidgetType                     (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       OwningPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D063C0              		 offset:23463c0                       

class UUserWidget* UWidgetBlueprintLibrary::STATIC_Create(class UObject* WorldContextObject, class UClass* WidgetType, class APlayerController* OwningPlayer)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnMouseEnter"));

	UUserWidget_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.Create"));

	UWidgetBlueprintLibrary_Create_Params params;
	params.WorldContextObject = WorldContextObject;
	params.WidgetType = WidgetType;
	params.OwningPlayer = OwningPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.UserWidget.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

struct FEventReply UUserWidget::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
=======

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.ClearUserFocus
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm)
// bool                           bInAllUsers                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D8D061D0              		 offset:23461d0                       

struct FEventReply UWidgetBlueprintLibrary::STATIC_ClearUserFocus(bool bInAllUsers, struct FEventReply* Reply)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnMouseButtonUp"));

	UUserWidget_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.ClearUserFocus"));

	UWidgetBlueprintLibrary_ClearUserFocus_Params params;
	params.bInAllUsers = bInAllUsers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

<<<<<<< HEAD
=======
	if (Reply != nullptr)
		*Reply = params.Reply;

>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.UserWidget.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

struct FEventReply UUserWidget::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
=======
// Function UMG.WidgetBlueprintLibrary.CaptureMouse
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm)
// class UWidget*                 CapturingWidget                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D8D05E70              		 offset:2345e70                       

struct FEventReply UWidgetBlueprintLibrary::STATIC_CaptureMouse(class UWidget* CapturingWidget, struct FEventReply* Reply)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnMouseButtonDown"));

	UUserWidget_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.CaptureMouse"));

	UWidgetBlueprintLibrary_CaptureMouse_Params params;
	params.CapturingWidget = CapturingWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

<<<<<<< HEAD
=======
	if (Reply != nullptr)
		*Reply = params.Reply;

>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.UserWidget.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              InMyGeometry                   (Parm, IsPlainOldData)
// struct FPointerEvent*          InMouseEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

struct FEventReply UUserWidget::OnMouseButtonDoubleClick(struct FGeometry* InMyGeometry, struct FPointerEvent* InMouseEvent)
=======
// Function UMG.WidgetBlueprintLibrary.CaptureJoystick
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply             Reply                          (Parm, OutParm, ReferenceParm)
// class UWidget*                 CapturingWidget                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bInAllJoysticks                (Parm, ZeroConstructor, IsPlainOldData)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D8D05C80              		 offset:2345c80                       

struct FEventReply UWidgetBlueprintLibrary::STATIC_CaptureJoystick(class UWidget* CapturingWidget, bool bInAllJoysticks, struct FEventReply* Reply)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnMouseButtonDoubleClick"));

	UUserWidget_OnMouseButtonDoubleClick_Params params;
	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.CaptureJoystick"));

	UWidgetBlueprintLibrary_CaptureJoystick_Params params;
	params.CapturingWidget = CapturingWidget;
	params.bInAllJoysticks = bInAllJoysticks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

<<<<<<< HEAD
=======
	if (Reply != nullptr)
		*Reply = params.Reply;

>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.UserWidget.OnMotionDetected
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FMotionEvent*           InMotionEvent                  (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

struct FEventReply UUserWidget::OnMotionDetected(struct FGeometry* MyGeometry, struct FMotionEvent* InMotionEvent)
=======
// Function UMG.WidgetBlueprintLibrary.CancelDragDrop
// (Final, Native, Static, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D8D05C60              		 offset:2345c60                       

void UWidgetBlueprintLibrary::STATIC_CancelDragDrop()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnMotionDetected"));

	UUserWidget_OnMotionDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.InMotionEvent = InMotionEvent;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetBlueprintLibrary.CancelDragDrop"));

	UWidgetBlueprintLibrary_CancelDragDrop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

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
=======
}


// Function UMG.WidgetComponent.SetWidget
// (Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D11DE0              		 offset:2351de0                       

void UWidgetComponent::SetWidget(class UUserWidget* Widget)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnKeyUp"));

	UUserWidget_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.SetWidget"));

	UWidgetComponent_SetWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

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
=======
}


// Function UMG.WidgetComponent.SetOwnerPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULocalPlayer*            LocalPlayer                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0F6F0              		 offset:234f6f0                       

void UWidgetComponent::SetOwnerPlayer(class ULocalPlayer* LocalPlayer)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnKeyDown"));

	UUserWidget_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.SetOwnerPlayer"));

	UWidgetComponent_SetOwnerPlayer_Params params;
	params.LocalPlayer = LocalPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

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
=======
}


// Function UMG.WidgetComponent.SetDrawSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               Size                           (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0CA00              		 offset:234ca00                       

void UWidgetComponent::SetDrawSize(const struct FVector2D& Size)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnKeyChar"));

	UUserWidget_OnKeyChar_Params params;
	params.MyGeometry = MyGeometry;
	params.InCharacterEvent = InCharacterEvent;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.SetDrawSize"));

	UWidgetComponent_SetDrawSize_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

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
=======
}


// Function UMG.WidgetComponent.SetBackgroundColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            NewBackgroundColor             (ConstParm, Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0B680              		 offset:234b680                       

void UWidgetComponent::SetBackgroundColor(const struct FLinearColor& NewBackgroundColor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnFocusReceived"));

	UUserWidget_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.SetBackgroundColor"));

	UWidgetComponent_SetBackgroundColor_Params params;
	params.NewBackgroundColor = NewBackgroundColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (Parm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UUserWidget::OnFocusLost(struct FFocusEvent* InFocusEvent)
=======
}


// Function UMG.WidgetComponent.RequestRedraw
// (Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D8D0AD50              		 offset:234ad50                       

void UWidgetComponent::RequestRedraw()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnFocusLost"));

	UUserWidget_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.RequestRedraw"));

	UWidgetComponent_RequestRedraw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.UserWidget.OnDrop
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (Parm)
// class UDragDropOperation**     Operation                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

bool UUserWidget::OnDrop(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
=======
// Function UMG.WidgetComponent.GetUserWidgetObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUserWidget*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D09440              		 offset:2349440                       

class UUserWidget* UWidgetComponent::GetUserWidgetObject()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnDrop"));

	UUserWidget_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.GetUserWidgetObject"));

	UWidgetComponent_GetUserWidgetObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.UserWidget.OnDragOver
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (Parm)
// class UDragDropOperation**     Operation                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

bool UUserWidget::OnDragOver(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
=======
// Function UMG.WidgetComponent.GetRenderTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTextureRenderTarget2D*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D08E80              		 offset:2348e80                       

class UTextureRenderTarget2D* UWidgetComponent::GetRenderTarget()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnDragOver"));

	UUserWidget_OnDragOver_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.GetRenderTarget"));

	UWidgetComponent_GetRenderTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.UserWidget.OnDragLeave
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (Parm)
// class UDragDropOperation**     Operation                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UUserWidget::OnDragLeave(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
=======
// Function UMG.WidgetComponent.GetOwnerPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULocalPlayer*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D08E10              		 offset:2348e10                       

class ULocalPlayer* UWidgetComponent::GetOwnerPlayer()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnDragLeave"));

	UUserWidget_OnDragLeave_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.GetOwnerPlayer"));

	UWidgetComponent_GetOwnerPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.UserWidget.OnDragEnter
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (Parm)
// class UDragDropOperation**     Operation                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UUserWidget::OnDragEnter(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
=======

	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetMaterialInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D08A40              		 offset:2348a40                       

class UMaterialInstanceDynamic* UWidgetComponent::GetMaterialInstance()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnDragEnter"));

	UUserWidget_OnDragEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.GetMaterialInstance"));

	UWidgetComponent_GetMaterialInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.UserWidget.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UUserWidget::OnDragDetected(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
=======

	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetDrawSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D07ED0              		 offset:2347ed0                       

struct FVector2D UWidgetComponent::GetDrawSize()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnDragDetected"));

	UUserWidget_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetComponent.GetDrawSize"));

	UWidgetComponent_GetDrawSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

<<<<<<< HEAD
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
=======
	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.SetCustomHitResult
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FHitResult              HitResult                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0C8C0              		 offset:234c8c0                       

void UWidgetInteractionComponent::SetCustomHitResult(const struct FHitResult& HitResult)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnDragCancelled"));

	UUserWidget_OnDragCancelled_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.SetCustomHitResult"));

	UWidgetInteractionComponent_SetCustomHitResult_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.UserWidget.OnControllerButtonReleased
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FControllerEvent*       ControllerEvent                (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

struct FEventReply UUserWidget::OnControllerButtonReleased(struct FGeometry* MyGeometry, struct FControllerEvent* ControllerEvent)
=======
// Function UMG.WidgetInteractionComponent.SendKeyChar
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Characters                     (Parm, ZeroConstructor)
// bool                           bRepeat                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0AF20              		 offset:234af20                       

bool UWidgetInteractionComponent::SendKeyChar(const struct FString& Characters, bool bRepeat)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnControllerButtonReleased"));

	UUserWidget_OnControllerButtonReleased_Params params;
	params.MyGeometry = MyGeometry;
	params.ControllerEvent = ControllerEvent;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.SendKeyChar"));

	UWidgetInteractionComponent_SendKeyChar_Params params;
	params.Characters = Characters;
	params.bRepeat = bRepeat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.UserWidget.OnControllerButtonPressed
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FControllerEvent*       ControllerEvent                (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

struct FEventReply UUserWidget::OnControllerButtonPressed(struct FGeometry* MyGeometry, struct FControllerEvent* ControllerEvent)
=======
// Function UMG.WidgetInteractionComponent.ScrollWheel
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          ScrollDelta                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0ADD0              		 offset:234add0                       

void UWidgetInteractionComponent::ScrollWheel(float ScrollDelta)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnControllerButtonPressed"));

	UUserWidget_OnControllerButtonPressed_Params params;
	params.MyGeometry = MyGeometry;
	params.ControllerEvent = ControllerEvent;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.ScrollWheel"));

	UWidgetInteractionComponent_ScrollWheel_Params params;
	params.ScrollDelta = ScrollDelta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

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
=======
}


// Function UMG.WidgetInteractionComponent.ReleasePointerKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FKey                    Key                            (Parm)
// FunctionAddress:0x00007FF6D8D0AA00              		 offset:234aa00                       

void UWidgetInteractionComponent::ReleasePointerKey(const struct FKey& Key)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnControllerAnalogValueChanged"));

	UUserWidget_OnControllerAnalogValueChanged_Params params;
	params.MyGeometry = MyGeometry;
	params.ControllerEvent = ControllerEvent;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.ReleasePointerKey"));

	UWidgetInteractionComponent_ReleasePointerKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnAnimationStarted
// (BlueprintCosmetic, Native, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF71A6D62C0              		 offset:29062c0                       

void UUserWidget::OnAnimationStarted(class UWidgetAnimation** Animation)
=======
}


// Function UMG.WidgetInteractionComponent.ReleaseKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FKey                    Key                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0A7A0              		 offset:234a7a0                       

bool UWidgetInteractionComponent::ReleaseKey(const struct FKey& Key)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnAnimationStarted"));

	UUserWidget_OnAnimationStarted_Params params;
	params.Animation = Animation;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.ReleaseKey"));

	UWidgetInteractionComponent_ReleaseKey_Params params;
	params.Key = Key;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.UserWidget.OnAnimationFinished
// (BlueprintCosmetic, Native, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF719C5CF10              		 offset:1e8cf10                       

void UUserWidget::OnAnimationFinished(class UWidgetAnimation** Animation)
=======

	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.PressPointerKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FKey                    Key                            (Parm)
// FunctionAddress:0x00007FF6D8D0A3C0              		 offset:234a3c0                       

void UWidgetInteractionComponent::PressPointerKey(const struct FKey& Key)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnAnimationFinished"));

	UUserWidget_OnAnimationFinished_Params params;
	params.Animation = Animation;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.PressPointerKey"));

	UWidgetInteractionComponent_PressPointerKey_Params params;
	params.Key = Key;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.UserWidget.OnAnalogValueChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FAnalogInputEvent*      InAnalogInputEvent             (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

struct FEventReply UUserWidget::OnAnalogValueChanged(struct FGeometry* MyGeometry, struct FAnalogInputEvent* InAnalogInputEvent)
=======
// Function UMG.WidgetInteractionComponent.PressKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FKey                    Key                            (Parm)
// bool                           bRepeat                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0A280              		 offset:234a280                       

bool UWidgetInteractionComponent::PressKey(const struct FKey& Key, bool bRepeat)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.OnAnalogValueChanged"));

	UUserWidget_OnAnalogValueChanged_Params params;
	params.MyGeometry = MyGeometry;
	params.InAnalogInputEvent = InAnalogInputEvent;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.PressKey"));

	UWidgetInteractionComponent_PressKey_Params params;
	params.Key = Key;
	params.bRepeat = bRepeat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.UserWidget.ListenForInputAction
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FName*                  ActionName                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInputEvent>*      EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bConsume                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate*        Callback                       (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF719C5CAC0              		 offset:1e8cac0                       

void UUserWidget::ListenForInputAction(struct FName* ActionName, TEnumAsByte<EInputEvent>* EventType, bool* bConsume, struct FScriptDelegate* Callback)
=======
// Function UMG.WidgetInteractionComponent.PressAndReleaseKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FKey                    Key                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0A180              		 offset:234a180                       

bool UWidgetInteractionComponent::PressAndReleaseKey(const struct FKey& Key)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.ListenForInputAction"));

	UUserWidget_ListenForInputAction_Params params;
	params.ActionName = ActionName;
	params.EventType = EventType;
	params.bConsume = bConsume;
	params.Callback = Callback;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.PressAndReleaseKey"));

	UWidgetInteractionComponent_PressAndReleaseKey_Params params;
	params.Key = Key;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.UserWidget.IsPlayingAnimation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C960              		 offset:1e8c960                       

bool UUserWidget::IsPlayingAnimation()
=======

	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.IsOverInteractableWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D09A40              		 offset:2349a40                       

bool UWidgetInteractionComponent::IsOverInteractableWidget()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.IsPlayingAnimation"));

	UUserWidget_IsPlayingAnimation_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.IsOverInteractableWidget"));

	UWidgetInteractionComponent_IsOverInteractableWidget_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.UserWidget.IsListeningForInputAction
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  ActionName                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C8D0              		 offset:1e8c8d0                       

bool UUserWidget::IsListeningForInputAction(struct FName* ActionName)
=======
// Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D09A10              		 offset:2349a10                       

bool UWidgetInteractionComponent::IsOverHitTestVisibleWidget()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.IsListeningForInputAction"));

	UUserWidget_IsListeningForInputAction_Params params;
	params.ActionName = ActionName;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget"));

	UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.UserWidget.IsInViewport
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5BFC0              		 offset:1e8bfc0                       

bool UUserWidget::IsInViewport()
=======
// Function UMG.WidgetInteractionComponent.IsOverFocusableWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D099E0              		 offset:23499e0                       

bool UWidgetInteractionComponent::IsOverFocusableWidget()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.IsInViewport"));

	UUserWidget_IsInViewport_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.IsOverFocusableWidget"));

	UWidgetInteractionComponent_IsOverFocusableWidget_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.UserWidget.IsInteractable
// (BlueprintCosmetic, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

bool UUserWidget::IsInteractable()
=======
// Function UMG.WidgetInteractionComponent.GetLastHitResult
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FHitResult              ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D088E0              		 offset:23488e0                       

struct FHitResult UWidgetInteractionComponent::GetLastHitResult()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.IsInteractable"));

	UUserWidget_IsInteractable_Params params;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.GetLastHitResult"));

	UWidgetInteractionComponent_GetLastHitResult_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.UserWidget.IsAnyAnimationPlaying
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C870              		 offset:1e8c870                       

bool UUserWidget::IsAnyAnimationPlaying()
=======
// Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidgetComponent*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D08130              		 offset:2348130                       

class UWidgetComponent* UWidgetInteractionComponent::GetHoveredWidgetComponent()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.IsAnyAnimationPlaying"));

	UUserWidget_IsAnyAnimationPlaying_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent"));

	UWidgetInteractionComponent_GetHoveredWidgetComponent_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.UserWidget.IsAnimationPlaying
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidgetAnimation**       InAnimation                    (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C7E0              		 offset:1e8c7e0                       

bool UUserWidget::IsAnimationPlaying(class UWidgetAnimation** InAnimation)
=======
// Function UMG.WidgetInteractionComponent.Get2DHitLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D07500              		 offset:2347500                       

struct FVector2D UWidgetInteractionComponent::Get2DHitLocation()
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.IsAnimationPlaying"));

	UUserWidget_IsAnimationPlaying_Params params;
	params.InAnimation = InAnimation;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetInteractionComponent.Get2DHitLocation"));

	UWidgetInteractionComponent_Get2DHitLocation_Params params;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.UserWidget.GetOwningPlayerPawn
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C150              		 offset:1e8c150                       

class APawn* UUserWidget::GetOwningPlayerPawn()
=======
// Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UVerticalBoxSlot*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D123A0              		 offset:23523a0                       

class UVerticalBoxSlot* UWidgetLayoutLibrary::STATIC_SlotAsVerticalBoxSlot(class UWidget* Widget)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.GetOwningPlayerPawn"));

	UUserWidget_GetOwningPlayerPawn_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot"));

	UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Params params;
	params.Widget = Widget;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.UserWidget.GetOwningPlayer
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C120              		 offset:1e8c120                       

class APlayerController* UUserWidget::GetOwningPlayer()
=======
// Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UUniformGridSlot*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D12320              		 offset:2352320                       

class UUniformGridSlot* UWidgetLayoutLibrary::STATIC_SlotAsUniformGridSlot(class UWidget* Widget)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.GetOwningPlayer"));

	UUserWidget_GetOwningPlayer_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot"));

	UWidgetLayoutLibrary_SlotAsUniformGridSlot_Params params;
	params.Widget = Widget;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.UserWidget.GetOwningLocalPlayer
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULocalPlayer*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5C0F0              		 offset:1e8c0f0                       

class ULocalPlayer* UUserWidget::GetOwningLocalPlayer()
=======
// Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UOverlaySlot*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D122A0              		 offset:23522a0                       

class UOverlaySlot* UWidgetLayoutLibrary::STATIC_SlotAsOverlaySlot(class UWidget* Widget)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.GetOwningLocalPlayer"));

	UUserWidget_GetOwningLocalPlayer_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot"));

	UWidgetLayoutLibrary_SlotAsOverlaySlot_Params params;
	params.Widget = Widget;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.UserWidget.GetIsVisible
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5BFC0              		 offset:1e8bfc0                       

bool UUserWidget::GetIsVisible()
=======
// Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UHorizontalBoxSlot*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D12220              		 offset:2352220                       

class UHorizontalBoxSlot* UWidgetLayoutLibrary::STATIC_SlotAsHorizontalBoxSlot(class UWidget* Widget)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.GetIsVisible"));

	UUserWidget_GetIsVisible_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot"));

	UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Params params;
	params.Widget = Widget;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.UserWidget.GetAnimationCurrentTime
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidgetAnimation**       InAnimation                    (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5BE70              		 offset:1e8be70                       

float UUserWidget::GetAnimationCurrentTime(class UWidgetAnimation** InAnimation)
=======
// Function UMG.WidgetLayoutLibrary.SlotAsGridSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGridSlot*               ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D121A0              		 offset:23521a0                       

class UGridSlot* UWidgetLayoutLibrary::STATIC_SlotAsGridSlot(class UWidget* Widget)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.GetAnimationCurrentTime"));

	UUserWidget_GetAnimationCurrentTime_Params params;
	params.InAnimation = InAnimation;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.SlotAsGridSlot"));

	UWidgetLayoutLibrary_SlotAsGridSlot_Params params;
	params.Widget = Widget;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.UserWidget.GetAnchorsInViewport
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAnchors                ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF719C5BE30              		 offset:1e8be30                       

struct FAnchors UUserWidget::GetAnchorsInViewport()
=======
// Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UCanvasPanelSlot*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D12120              		 offset:2352120                       

class UCanvasPanelSlot* UWidgetLayoutLibrary::STATIC_SlotAsCanvasSlot(class UWidget* Widget)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.GetAnchorsInViewport"));

	UUserWidget_GetAnchorsInViewport_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot"));

	UWidgetLayoutLibrary_SlotAsCanvasSlot_Params params;
	params.Widget = Widget;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.UserWidget.GetAlignmentInViewport
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5BDF0              		 offset:1e8bdf0                       

struct FVector2D UUserWidget::GetAlignmentInViewport()
=======
// Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UBorderSlot*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D120A0              		 offset:23520a0                       

class UBorderSlot* UWidgetLayoutLibrary::STATIC_SlotAsBorderSlot(class UWidget* Widget)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.GetAlignmentInViewport"));

	UUserWidget_GetAlignmentInViewport_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot"));

	UWidgetLayoutLibrary_SlotAsBorderSlot_Params params;
	params.Widget = Widget;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
// Function UMG.UserWidget.FinishStoppedSequencePlayers
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF719C5BD20              		 offset:1e8bd20                       

void UUserWidget::FinishStoppedSequencePlayers()
=======
// Function UMG.WidgetLayoutLibrary.RemoveAllWidgets
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0AAF0              		 offset:234aaf0                       

void UWidgetLayoutLibrary::STATIC_RemoveAllWidgets(class UObject* WorldContextObject)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.FinishStoppedSequencePlayers"));

	UUserWidget_FinishStoppedSequencePlayers_Params params;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.RemoveAllWidgets"));

	UWidgetLayoutLibrary_RemoveAllWidgets_Params params;
	params.WorldContextObject = WorldContextObject;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function UMG.UserWidget.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UUserWidget::Destruct()
=======
// Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WorldLocation                  (Parm, IsPlainOldData)
// struct FVector2D               ScreenPosition                 (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D0A4B0              		 offset:234a4b0                       

bool UWidgetLayoutLibrary::STATIC_ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, const struct FVector& WorldLocation, struct FVector2D* ScreenPosition)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.Destruct"));

	UUserWidget_Destruct_Params params;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition"));

	UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Params params;
	params.PlayerController = PlayerController;
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.UserWidget.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UUserWidget::Construct()
=======

	if (ScreenPosition != nullptr)
		*ScreenPosition = params.ScreenPosition;

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.GetViewportSize
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D095E0              		 offset:23495e0                       

struct FVector2D UWidgetLayoutLibrary::STATIC_GetViewportSize(class UObject* WorldContextObject)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.Construct"));

	UUserWidget_Construct_Params params;

	auto flags = fn->FunctionFlags;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.GetViewportSize"));

	UWidgetLayoutLibrary_GetViewportSize_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.UserWidget.AddToViewport
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// int*                           ZOrder                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF719C5B5B0              		 offset:1e8b5b0                       

void UUserWidget::AddToViewport(int* ZOrder)
=======

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.GetViewportScale
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D09550              		 offset:2349550                       

float UWidgetLayoutLibrary::STATIC_GetViewportScale(class UObject* WorldContextObject)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.AddToViewport"));

	UUserWidget_AddToViewport_Params params;
	params.ZOrder = ZOrder;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.GetViewportScale"));

	UWidgetLayoutLibrary_GetViewportScale_Params params;
	params.WorldContextObject = WorldContextObject;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
<<<<<<< HEAD
}


// Function UMG.UserWidget.AddToPlayerScreen
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// int*                           ZOrder                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF719C5B520              		 offset:1e8b520                       

bool UUserWidget::AddToPlayerScreen(int* ZOrder)
=======

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          LocationX                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          LocationY                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8D08B70              		 offset:2348b70                       

bool UWidgetLayoutLibrary::STATIC_GetMousePositionScaledByDPI(class APlayerController* Player, float* LocationX, float* LocationY)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
<<<<<<< HEAD
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.UserWidget.AddToPlayerScreen"));

	UUserWidget_AddToPlayerScreen_Params params;
	params.ZOrder = ZOrder;
=======
		fn = UObject::FindObject<UFunction>(_xor_("Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI"));

	UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Params params;
	params.Player = Player;
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

<<<<<<< HEAD
=======
	if (LocationX != nullptr)
		*LocationX = params.LocationX;
	if (LocationY != nullptr)
		*LocationY = params.LocationY;

>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
