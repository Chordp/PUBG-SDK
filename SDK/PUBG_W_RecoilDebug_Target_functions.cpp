// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_W_RecoilDebug_Target_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.MarkerGridPopulate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_RecoilDebug_Target_C::MarkerGridPopulate()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.MarkerGridPopulate"));

	UW_RecoilDebug_Target_C_MarkerGridPopulate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.Grid_ChangeMarkerZoom
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_RecoilDebug_Target_C::Grid_ChangeMarkerZoom()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.Grid_ChangeMarkerZoom"));

	UW_RecoilDebug_Target_C_Grid_ChangeMarkerZoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.Grid_ChangePointZoom
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            A                              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_RecoilDebug_Target_C::Grid_ChangePointZoom(int A)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.Grid_ChangePointZoom"));

	UW_RecoilDebug_Target_C_Grid_ChangePointZoom_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.AddDataRow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRecoilDebugInfo        InRecoil                       (Parm)
// float                          Rec_L                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Rec_R                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Rec_Tendency                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Rec_VariationVert              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Rec_Bullet                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_RecoilDebug_Target_C::AddDataRow(const struct FRecoilDebugInfo& InRecoil, float Rec_L, float Rec_R, float Rec_Tendency, float Rec_VariationVert, int Rec_Bullet)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.AddDataRow"));

	UW_RecoilDebug_Target_C_AddDataRow_Params params;
	params.InRecoil = InRecoil;
	params.Rec_L = Rec_L;
	params.Rec_R = Rec_R;
	params.Rec_Tendency = Rec_Tendency;
	params.Rec_VariationVert = Rec_VariationVert;
	params.Rec_Bullet = Rec_Bullet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.Grid_ChangeZoom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InChange                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_RecoilDebug_Target_C::Grid_ChangeZoom(int InChange)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.Grid_ChangeZoom"));

	UW_RecoilDebug_Target_C_Grid_ChangeZoom_Params params;
	params.InChange = InChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.AddBox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            InColor                        (Parm, IsPlainOldData)
// struct FVector2D               InLocation                     (Parm, IsPlainOldData)
// struct FVector2D               InSize                         (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_RecoilDebug_Target_C::AddBox(const struct FLinearColor& InColor, const struct FVector2D& InLocation, const struct FVector2D& InSize)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.AddBox"));

	UW_RecoilDebug_Target_C_AddBox_Params params;
	params.InColor = InColor;
	params.InLocation = InLocation;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.ResetPoints
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_RecoilDebug_Target_C::ResetPoints()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.ResetPoints"));

	UW_RecoilDebug_Target_C_ResetPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.AddPoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            InColor                        (Parm, IsPlainOldData)
// struct FVector2D               InLocation                     (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_RecoilDebug_Target_C::AddPoint(const struct FLinearColor& InColor, const struct FVector2D& InLocation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.AddPoint"));

	UW_RecoilDebug_Target_C_AddPoint_Params params;
	params.InColor = InColor;
	params.InLocation = InLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_RecoilDebug_Target_C::Construct()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.Construct"));

	UW_RecoilDebug_Target_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_RecoilDebug_Target_C::BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature"));

	UW_RecoilDebug_Target_C_BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_139_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_RecoilDebug_Target_C::BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_139_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_139_OnButtonClickedEvent__DelegateSignature"));

	UW_RecoilDebug_Target_C_BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_139_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_Absolute_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_RecoilDebug_Target_C::BndEvt__Button_Absolute_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_Absolute_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature"));

	UW_RecoilDebug_Target_C_BndEvt__Button_Absolute_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_106_K2Node_ComponentBoundEvent_272_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_RecoilDebug_Target_C::BndEvt__Button_106_K2Node_ComponentBoundEvent_272_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_106_K2Node_ComponentBoundEvent_272_OnButtonClickedEvent__DelegateSignature"));

	UW_RecoilDebug_Target_C_BndEvt__Button_106_K2Node_ComponentBoundEvent_272_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_RenderPoint_K2Node_ComponentBoundEvent_724_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_RecoilDebug_Target_C::BndEvt__Button_RenderPoint_K2Node_ComponentBoundEvent_724_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_RenderPoint_K2Node_ComponentBoundEvent_724_OnButtonClickedEvent__DelegateSignature"));

	UW_RecoilDebug_Target_C_BndEvt__Button_RenderPoint_K2Node_ComponentBoundEvent_724_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_RenderBox_K2Node_ComponentBoundEvent_801_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_RecoilDebug_Target_C::BndEvt__Button_RenderBox_K2Node_ComponentBoundEvent_801_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_RenderBox_K2Node_ComponentBoundEvent_801_OnButtonClickedEvent__DelegateSignature"));

	UW_RecoilDebug_Target_C_BndEvt__Button_RenderBox_K2Node_ComponentBoundEvent_801_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Slider_49_K2Node_ComponentBoundEvent_170_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_RecoilDebug_Target_C::BndEvt__Slider_49_K2Node_ComponentBoundEvent_170_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Slider_49_K2Node_ComponentBoundEvent_170_OnFloatValueChangedEvent__DelegateSignature"));

	UW_RecoilDebug_Target_C_BndEvt__Slider_49_K2Node_ComponentBoundEvent_170_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_96_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_RecoilDebug_Target_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_96_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_96_OnButtonClickedEvent__DelegateSignature"));

	UW_RecoilDebug_Target_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_96_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.ExecuteUbergraph_W_RecoilDebug_Target
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_RecoilDebug_Target_C::ExecuteUbergraph_W_RecoilDebug_Target(int EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.ExecuteUbergraph_W_RecoilDebug_Target"));

	UW_RecoilDebug_Target_C_ExecuteUbergraph_W_RecoilDebug_Target_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
