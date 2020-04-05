// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CoherentUIGTPlugin_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CoherentUIGTPlugin.CoherentUIGTWidget.UpdateWholeDataModelFromStruct
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UStructProperty**        Arg                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C89EDD0              		 offset:4acedd0                       

void UCoherentUIGTWidget::UpdateWholeDataModelFromStruct(class UStructProperty** Arg)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTWidget.UpdateWholeDataModelFromStruct"));

	UCoherentUIGTWidget_UpdateWholeDataModelFromStruct_Params params;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.UpdateWholeDataModelFromObject
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UObject**                Model                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C89EC10              		 offset:4acec10                       

void UCoherentUIGTWidget::UpdateWholeDataModelFromObject(class UObject** Model)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTWidget.UpdateWholeDataModelFromObject"));

	UCoherentUIGTWidget_UpdateWholeDataModelFromObject_Params params;
	params.Model = Model;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.TriggerJSEvent
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// struct FString*                Name                           (Parm, ZeroConstructor)
// class UCoherentUIGTJSEvent**   EventData                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C89EAB0              		 offset:4aceab0                       

void UCoherentUIGTWidget::TriggerJSEvent(struct FString* Name, class UCoherentUIGTJSEvent** EventData)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTWidget.TriggerJSEvent"));

	UCoherentUIGTWidget_TriggerJSEvent_Params params;
	params.Name = Name;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.SynchronizeModels
// (Final, Native, Public, BlueprintCallable, Const)
// FunctionAddress:0x00007FF71C89E880              		 offset:4ace880                       

void UCoherentUIGTWidget::SynchronizeModels()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTWidget.SynchronizeModels"));

	UCoherentUIGTWidget_SynchronizeModels_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.ShowPaintRects
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          Show                           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C89E7D0              		 offset:4ace7d0                       

void UCoherentUIGTWidget::ShowPaintRects(bool* Show)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTWidget.ShowPaintRects"));

	UCoherentUIGTWidget_ShowPaintRects_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.SetInputPropagationBehaviour
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ECoherentUIGTInputPropagationBehaviour>* Propagation                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C89E3A0              		 offset:4ace3a0                       

void UCoherentUIGTWidget::SetInputPropagationBehaviour(TEnumAsByte<ECoherentUIGTInputPropagationBehaviour>* Propagation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTWidget.SetInputPropagationBehaviour"));

	UCoherentUIGTWidget_SetInputPropagationBehaviour_Params params;
	params.Propagation = Propagation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.SetClickThroughAlphaThreshold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Threshold                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C89E190              		 offset:4ace190                       

void UCoherentUIGTWidget::SetClickThroughAlphaThreshold(float* Threshold)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTWidget.SetClickThroughAlphaThreshold"));

	UCoherentUIGTWidget_SetClickThroughAlphaThreshold_Params params;
	params.Threshold = Threshold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.Reload
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF71C89E030              		 offset:4ace030                       

void UCoherentUIGTWidget::Reload()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTWidget.Reload"));

	UCoherentUIGTWidget_Reload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.Redraw
// (Final, Native, Public, BlueprintCallable, Const)
// FunctionAddress:0x00007FF71C89DFF0              		 offset:4acdff0                       

void UCoherentUIGTWidget::Redraw()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTWidget.Redraw"));

	UCoherentUIGTWidget_Redraw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.Load
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                path                           (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF71C89DCE0              		 offset:4acdce0                       

void UCoherentUIGTWidget::Load(struct FString* path)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTWidget.Load"));

	UCoherentUIGTWidget_Load_Params params;
	params.path = path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.IsTransparent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C89DC10              		 offset:4acdc10                       

bool UCoherentUIGTWidget::IsTransparent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTWidget.IsTransparent"));

	UCoherentUIGTWidget_IsTransparent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyToCreateView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C89DBB0              		 offset:4acdbb0                       

bool UCoherentUIGTWidget::IsReadyToCreateView()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyToCreateView"));

	UCoherentUIGTWidget_IsReadyToCreateView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyForBindings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C89DB80              		 offset:4acdb80                       

bool UCoherentUIGTWidget::IsReadyForBindings()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyForBindings"));

	UCoherentUIGTWidget_IsReadyForBindings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.IsDocumentReady
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C89DAF0              		 offset:4acdaf0                       

bool UCoherentUIGTWidget::IsDocumentReady()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTWidget.IsDocumentReady"));

	UCoherentUIGTWidget_IsDocumentReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.HasRequestedView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C89D8E0              		 offset:4acd8e0                       

bool UCoherentUIGTWidget::HasRequestedView()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTWidget.HasRequestedView"));

	UCoherentUIGTWidget_HasRequestedView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.GetRenderTexture
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTextureRenderTarget2D*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C89D7A0              		 offset:4acd7a0                       

class UTextureRenderTarget2D* UCoherentUIGTWidget::GetRenderTexture()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTWidget.GetRenderTexture"));

	UCoherentUIGTWidget_GetRenderTexture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.GetInputPropagationBehaviour
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C89D650              		 offset:4acd650                       

TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> UCoherentUIGTWidget::GetInputPropagationBehaviour()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTWidget.GetInputPropagationBehaviour"));

	UCoherentUIGTWidget_GetInputPropagationBehaviour_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.GetClickThroughAlphaThreshold
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C89D5F0              		 offset:4acd5f0                       

float UCoherentUIGTWidget::GetClickThroughAlphaThreshold()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTWidget.GetClickThroughAlphaThreshold"));

	UCoherentUIGTWidget_GetClickThroughAlphaThreshold_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.EndDebugFrameSave
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF71C89D510              		 offset:4acd510                       

void UCoherentUIGTWidget::EndDebugFrameSave()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTWidget.EndDebugFrameSave"));

	UCoherentUIGTWidget_EndDebugFrameSave_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.DebugSaveNextFrame
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF71C89D440              		 offset:4acd440                       

void UCoherentUIGTWidget::DebugSaveNextFrame()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTWidget.DebugSaveNextFrame"));

	UCoherentUIGTWidget_DebugSaveNextFrame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateJSEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C89D3F0              		 offset:4acd3f0                       

class UCoherentUIGTJSEvent* UCoherentUIGTWidget::CreateJSEvent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateJSEvent"));

	UCoherentUIGTWidget_CreateJSEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateDataModelFromStruct
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                Name                           (Parm, ZeroConstructor)
// class UStructProperty**        Arg                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C89D1D0              		 offset:4acd1d0                       

void UCoherentUIGTWidget::CreateDataModelFromStruct(struct FString* Name, class UStructProperty** Arg)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateDataModelFromStruct"));

	UCoherentUIGTWidget_CreateDataModelFromStruct_Params params;
	params.Name = Name;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateDataModelFromObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                Name                           (Parm, ZeroConstructor)
// class UObject**                Model                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C89CF60              		 offset:4accf60                       

void UCoherentUIGTWidget::CreateDataModelFromObject(struct FString* Name, class UObject** Model)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateDataModelFromObject"));

	UCoherentUIGTWidget_CreateDataModelFromObject_Params params;
	params.Name = Name;
	params.Model = Model;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.BeginDebugFrameSave
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF71C89CE60              		 offset:4acce60                       

void UCoherentUIGTWidget::BeginDebugFrameSave()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTWidget.BeginDebugFrameSave"));

	UCoherentUIGTWidget_BeginDebugFrameSave_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddText
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText*                  Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF71C89CC40              		 offset:4accc40                       

void UCoherentUIGTJSEvent::AddText(struct FText* Text)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddText"));

	UCoherentUIGTJSEvent_AddText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddStructArg
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UStructProperty**        Arg                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C89CB50              		 offset:4accb50                       

void UCoherentUIGTJSEvent::AddStructArg(class UStructProperty** Arg)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddStructArg"));

	UCoherentUIGTJSEvent_AddStructArg_Params params;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                Str                            (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF71C89C9A0              		 offset:4acc9a0                       

void UCoherentUIGTJSEvent::AddString(struct FString* Str)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddString"));

	UCoherentUIGTJSEvent_AddString_Params params;
	params.Str = Str;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject**                Object                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C89C850              		 offset:4acc850                       

void UCoherentUIGTJSEvent::AddObject(class UObject** Object)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddObject"));

	UCoherentUIGTJSEvent_AddObject_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddName
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  Name                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C89C710              		 offset:4acc710                       

void UCoherentUIGTJSEvent::AddName(struct FName* Name)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddName"));

	UCoherentUIGTJSEvent_AddName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddInt32
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           integer                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C89C690              		 offset:4acc690                       

void UCoherentUIGTJSEvent::AddInt32(int* integer)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddInt32"));

	UCoherentUIGTJSEvent_AddInt32_Params params;
	params.integer = integer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         FL                             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C89C560              		 offset:4acc560                       

void UCoherentUIGTJSEvent::AddFloat(float* FL)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddFloat"));

	UCoherentUIGTJSEvent_AddFloat_Params params;
	params.FL = FL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddByte
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// unsigned char*                 byte                           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C89C420              		 offset:4acc420                       

void UCoherentUIGTJSEvent::AddByte(unsigned char* byte)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddByte"));

	UCoherentUIGTJSEvent_AddByte_Params params;
	params.byte = byte;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          B                              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C89C2E0              		 offset:4acc2e0                       

void UCoherentUIGTJSEvent::AddBool(bool* B)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddBool"));

	UCoherentUIGTJSEvent_AddBool_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddArray
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<int>*                   Array                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF71C89BF10              		 offset:4acbf10                       

void UCoherentUIGTJSEvent::AddArray(TArray<int>* Array)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddArray"));

	UCoherentUIGTJSEvent_AddArray_Params params;
	params.Array = Array;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.ReadObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                Object                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C89DF10              		 offset:4acdf10                       

void UCoherentUIGTJSPayload::ReadObject(int* Index, class UObject** Object)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTJSPayload.ReadObject"));

	UCoherentUIGTJSPayload_ReadObject_Params params;
	params.Index = Index;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF71C89D7D0              		 offset:4acd7d0                       

struct FString UCoherentUIGTJSPayload::GetString(int* Index)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetString"));

	UCoherentUIGTJSPayload_GetString_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetNumber
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C89D710              		 offset:4acd710                       

float UCoherentUIGTJSPayload::GetNumber(int* Index)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetNumber"));

	UCoherentUIGTJSPayload_GetNumber_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetInt32
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C89D680              		 offset:4acd680                       

int UCoherentUIGTJSPayload::GetInt32(int* Index)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetInt32"));

	UCoherentUIGTJSPayload_GetInt32_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C89D530              		 offset:4acd530                       

bool UCoherentUIGTJSPayload::GetBool(int* Index)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetBool"));

	UCoherentUIGTJSPayload_GetBool_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.UpdateWholeDataModelFromStruct
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UStructProperty**        Arg                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C89EC90              		 offset:4acec90                       

void UCoherentUIGTBaseComponent::UpdateWholeDataModelFromStruct(class UStructProperty** Arg)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.UpdateWholeDataModelFromStruct"));

	UCoherentUIGTBaseComponent_UpdateWholeDataModelFromStruct_Params params;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.UpdateWholeDataModelFromObject
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UObject**                Model                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C89EB90              		 offset:4aceb90                       

void UCoherentUIGTBaseComponent::UpdateWholeDataModelFromObject(class UObject** Model)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.UpdateWholeDataModelFromObject"));

	UCoherentUIGTBaseComponent_UpdateWholeDataModelFromObject_Params params;
	params.Model = Model;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.TriggerJSEvent
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// struct FString*                Name                           (Parm, ZeroConstructor)
// class UCoherentUIGTJSEvent**   EventData                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C89E8C0              		 offset:4ace8c0                       

void UCoherentUIGTBaseComponent::TriggerJSEvent(struct FString* Name, class UCoherentUIGTJSEvent** EventData)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.TriggerJSEvent"));

	UCoherentUIGTBaseComponent_TriggerJSEvent_Params params;
	params.Name = Name;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SynchronizeModels
// (Final, Native, Public, BlueprintCallable, Const)
// FunctionAddress:0x00007FF71C89E860              		 offset:4ace860                       

void UCoherentUIGTBaseComponent::SynchronizeModels()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SynchronizeModels"));

	UCoherentUIGTBaseComponent_SynchronizeModels_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.ShowPaintRects
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          Show                           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C89E740              		 offset:4ace740                       

void UCoherentUIGTBaseComponent::ShowPaintRects(bool* Show)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.ShowPaintRects"));

	UCoherentUIGTBaseComponent_ShowPaintRects_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SetClickThroughAlphaThreshold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Threshold                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C89E110              		 offset:4ace110                       

void UCoherentUIGTBaseComponent::SetClickThroughAlphaThreshold(float* Threshold)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SetClickThroughAlphaThreshold"));

	UCoherentUIGTBaseComponent_SetClickThroughAlphaThreshold_Params params;
	params.Threshold = Threshold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Resize
// (Native, Public, BlueprintCallable)
// Parameters:
// int*                           Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Height                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C89E050              		 offset:4ace050                       

void UCoherentUIGTBaseComponent::Resize(int* Width, int* Height)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Resize"));

	UCoherentUIGTBaseComponent_Resize_Params params;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Reload
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF71C89E010              		 offset:4ace010                       

void UCoherentUIGTBaseComponent::Reload()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Reload"));

	UCoherentUIGTBaseComponent_Reload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Redraw
// (Final, Native, Public, BlueprintCallable, Const)
// FunctionAddress:0x00007FF71C89DFD0              		 offset:4acdfd0                       

void UCoherentUIGTBaseComponent::Redraw()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Redraw"));

	UCoherentUIGTBaseComponent_Redraw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Load
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                path                           (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF71C89DC40              		 offset:4acdc40                       

void UCoherentUIGTBaseComponent::Load(struct FString* path)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Load"));

	UCoherentUIGTBaseComponent_Load_Params params;
	params.path = path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsTransparent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C89DBE0              		 offset:4acdbe0                       

bool UCoherentUIGTBaseComponent::IsTransparent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsTransparent"));

	UCoherentUIGTBaseComponent_IsTransparent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyToCreateView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C89DBB0              		 offset:4acdbb0                       

bool UCoherentUIGTBaseComponent::IsReadyToCreateView()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyToCreateView"));

	UCoherentUIGTBaseComponent_IsReadyToCreateView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyForBindings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C89DB50              		 offset:4acdb50                       

bool UCoherentUIGTBaseComponent::IsReadyForBindings()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyForBindings"));

	UCoherentUIGTBaseComponent_IsReadyForBindings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsDocumentReady
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C89DAC0              		 offset:4acdac0                       

bool UCoherentUIGTBaseComponent::IsDocumentReady()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsDocumentReady"));

	UCoherentUIGTBaseComponent_IsDocumentReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.HasRequestedView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C89D8B0              		 offset:4acd8b0                       

bool UCoherentUIGTBaseComponent::HasRequestedView()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.HasRequestedView"));

	UCoherentUIGTBaseComponent_HasRequestedView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.GetClickThroughAlphaThreshold
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C89D5C0              		 offset:4acd5c0                       

float UCoherentUIGTBaseComponent::GetClickThroughAlphaThreshold()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.GetClickThroughAlphaThreshold"));

	UCoherentUIGTBaseComponent_GetClickThroughAlphaThreshold_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.EndDebugFrameSave
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF71C89D4F0              		 offset:4acd4f0                       

void UCoherentUIGTBaseComponent::EndDebugFrameSave()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.EndDebugFrameSave"));

	UCoherentUIGTBaseComponent_EndDebugFrameSave_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.EnableDelayedUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C89D460              		 offset:4acd460                       

void UCoherentUIGTBaseComponent::EnableDelayedUpdate(bool* bEnabled)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.EnableDelayedUpdate"));

	UCoherentUIGTBaseComponent_EnableDelayedUpdate_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.DebugSaveNextFrame
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF71C89D420              		 offset:4acd420                       

void UCoherentUIGTBaseComponent::DebugSaveNextFrame()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.DebugSaveNextFrame"));

	UCoherentUIGTBaseComponent_DebugSaveNextFrame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateJSEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C89D3F0              		 offset:4acd3f0                       

class UCoherentUIGTJSEvent* UCoherentUIGTBaseComponent::CreateJSEvent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateJSEvent"));

	UCoherentUIGTBaseComponent_CreateJSEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateDataModelFromStruct
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                Name                           (Parm, ZeroConstructor)
// class UStructProperty**        Arg                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C89D040              		 offset:4acd040                       

void UCoherentUIGTBaseComponent::CreateDataModelFromStruct(struct FString* Name, class UStructProperty** Arg)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateDataModelFromStruct"));

	UCoherentUIGTBaseComponent_CreateDataModelFromStruct_Params params;
	params.Name = Name;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateDataModelFromObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                Name                           (Parm, ZeroConstructor)
// class UObject**                Model                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C89CE80              		 offset:4acce80                       

void UCoherentUIGTBaseComponent::CreateDataModelFromObject(struct FString* Name, class UObject** Model)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateDataModelFromObject"));

	UCoherentUIGTBaseComponent_CreateDataModelFromObject_Params params;
	params.Name = Name;
	params.Model = Model;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.BeginDebugFrameSave
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF71C89CE40              		 offset:4acce40                       

void UCoherentUIGTBaseComponent::BeginDebugFrameSave()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.BeginDebugFrameSave"));

	UCoherentUIGTBaseComponent_BeginDebugFrameSave_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.TriggerJSEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCoherentUIGTBaseComponent** Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString*                EventName                      (Parm, ZeroConstructor)
// class UCoherentUIGTJSEvent**   JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C89E9A0              		 offset:4ace9a0                       

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_TriggerJSEvent(class UCoherentUIGTBaseComponent** Component, struct FString* EventName, class UCoherentUIGTJSEvent** JSEvent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.TriggerJSEvent"));

	UCoherentUIGTBlueprintFunctionLibrary_TriggerJSEvent_Params params;
	params.Component = Component;
	params.EventName = EventName;
	params.JSEvent = JSEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.SetupLoadingScreen
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FCoherentUIGTLoadingScreenSettings* Settings                       (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF71C89E4A0              		 offset:4ace4a0                       

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_SetupLoadingScreen(class UObject** WorldContextObject, struct FCoherentUIGTLoadingScreenSettings* Settings)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.SetupLoadingScreen"));

	UCoherentUIGTBlueprintFunctionLibrary_SetupLoadingScreen_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.CreateJSEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UCoherentUIGTJSEvent*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C89D370              		 offset:4acd370                       

class UCoherentUIGTJSEvent* UCoherentUIGTBlueprintFunctionLibrary::STATIC_CreateJSEvent(class UObject** WorldContextObject)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.CreateJSEvent"));

	UCoherentUIGTBlueprintFunctionLibrary_CreateJSEvent_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddStructArg
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent**   JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// class UStructProperty**        Arg                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C89CA40              		 offset:4acca40                       

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddStructArg(class UCoherentUIGTJSEvent** JSEvent, class UStructProperty** Arg)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddStructArg"));

	UCoherentUIGTBlueprintFunctionLibrary_AddStructArg_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent**   JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                Arg                            (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF71C89C8D0              		 offset:4acc8d0                       

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddString(class UCoherentUIGTJSEvent** JSEvent, struct FString* Arg)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddString"));

	UCoherentUIGTBlueprintFunctionLibrary_AddString_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent**   JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                Arg                            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C89C7A0              		 offset:4acc7a0                       

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddObject(class UCoherentUIGTJSEvent** JSEvent, class UObject** Arg)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddObject"));

	UCoherentUIGTBlueprintFunctionLibrary_AddObject_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddInt32
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent**   JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Arg                            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C89C5E0              		 offset:4acc5e0                       

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddInt32(class UCoherentUIGTJSEvent** JSEvent, int* Arg)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddInt32"));

	UCoherentUIGTBlueprintFunctionLibrary_AddInt32_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddFloat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent**   JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Arg                            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C89C4A0              		 offset:4acc4a0                       

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddFloat(class UCoherentUIGTJSEvent** JSEvent, float* Arg)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddFloat"));

	UCoherentUIGTBlueprintFunctionLibrary_AddFloat_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddByte
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent**   JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 Arg                            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C89C370              		 offset:4acc370                       

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddByte(class UCoherentUIGTJSEvent** JSEvent, unsigned char* Arg)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddByte"));

	UCoherentUIGTBlueprintFunctionLibrary_AddByte_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddBool
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent**   JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Arg                            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C89C220              		 offset:4acc220                       

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddBool(class UCoherentUIGTJSEvent** JSEvent, bool* Arg)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddBool"));

	UCoherentUIGTBlueprintFunctionLibrary_AddBool_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddArrayOfStructs
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent**   JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>*                   Arg                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF71C89C030              		 offset:4acc030                       

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddArrayOfStructs(class UCoherentUIGTJSEvent** JSEvent, TArray<int>* Arg)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddArrayOfStructs"));

	UCoherentUIGTBlueprintFunctionLibrary_AddArrayOfStructs_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent**   JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>*                   Arg                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int*                           ArrayType                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C89BDE0              		 offset:4acbde0                       

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddArray(class UCoherentUIGTJSEvent** JSEvent, TArray<int>* Arg, int* ArrayType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddArray"));

	UCoherentUIGTBlueprintFunctionLibrary_AddArray_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;
	params.ArrayType = ArrayType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTGameHUD.SetupUIGTView
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                PageUrl                        (Parm, ZeroConstructor)
// bool*                          bIsTransparent                 (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ClickThroughAlphaThreshold     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         AnimationFrameDefer            (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDelayedUpdate                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C89E580              		 offset:4ace580                       

void ACoherentUIGTGameHUD::SetupUIGTView(struct FString* PageUrl, bool* bIsTransparent, float* ClickThroughAlphaThreshold, float* AnimationFrameDefer, bool* bDelayedUpdate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTGameHUD.SetupUIGTView"));

	ACoherentUIGTGameHUD_SetupUIGTView_Params params;
	params.PageUrl = PageUrl;
	params.bIsTransparent = bIsTransparent;
	params.ClickThroughAlphaThreshold = ClickThroughAlphaThreshold;
	params.AnimationFrameDefer = AnimationFrameDefer;
	params.bDelayedUpdate = bDelayedUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTGameHUD.HasSetupUIGTView
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C89D910              		 offset:4acd910                       

bool ACoherentUIGTGameHUD::HasSetupUIGTView()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTGameHUD.HasSetupUIGTView"));

	ACoherentUIGTGameHUD_HasSetupUIGTView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.ToggleCoherentUIGTInputFocus
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF71C89E8A0              		 offset:4ace8a0                       

void ACoherentUIGTInputActor::ToggleCoherentUIGTInputFocus()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTInputActor.ToggleCoherentUIGTInputFocus"));

	ACoherentUIGTInputActor_ToggleCoherentUIGTInputFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetLineTraceMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EGTInputWidgetLineTraceMode>* Mode                           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C89E420              		 offset:4ace420                       

void ACoherentUIGTInputActor::SetLineTraceMode(TEnumAsByte<EGTInputWidgetLineTraceMode>* Mode)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetLineTraceMode"));

	ACoherentUIGTInputActor_SetLineTraceMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetInputPropagationBehaviour
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ECoherentUIGTInputPropagationBehaviour>* Propagation                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C89E320              		 offset:4ace320                       

void ACoherentUIGTInputActor::SetInputPropagationBehaviour(TEnumAsByte<ECoherentUIGTInputPropagationBehaviour>* Propagation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetInputPropagationBehaviour"));

	ACoherentUIGTInputActor_SetInputPropagationBehaviour_Params params;
	params.Propagation = Propagation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTViewFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCoherentUIGTBaseComponent** NewFocusedView                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF71C89E2A0              		 offset:4ace2a0                       

void ACoherentUIGTInputActor::SetCoherentUIGTViewFocus(class UCoherentUIGTBaseComponent** NewFocusedView)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTViewFocus"));

	ACoherentUIGTInputActor_SetCoherentUIGTViewFocus_Params params;
	params.NewFocusedView = NewFocusedView;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTInputFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          FocusUI                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C89E210              		 offset:4ace210                       

void ACoherentUIGTInputActor::SetCoherentUIGTInputFocus(bool* FocusUI)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTInputFocus"));

	ACoherentUIGTInputActor_SetCoherentUIGTInputFocus_Params params;
	params.FocusUI = FocusUI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C89DB20              		 offset:4acdb20                       

bool ACoherentUIGTInputActor::IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED"));

	ACoherentUIGTInputActor_IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsCoherentUIGTFocused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C89DA90              		 offset:4acda90                       

bool ACoherentUIGTInputActor::IsCoherentUIGTFocused()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsCoherentUIGTFocused"));

	ACoherentUIGTInputActor_IsCoherentUIGTFocused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.Initialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ECollisionChannel>* CollisionChannel               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETextureAddress>*  AddressMode                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGTInputWidgetRaycastQuality>* RaycastQuality                 (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UVChannel                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C89D940              		 offset:4acd940                       

void ACoherentUIGTInputActor::Initialize(TEnumAsByte<ECollisionChannel>* CollisionChannel, TEnumAsByte<ETextureAddress>* AddressMode, TEnumAsByte<EGTInputWidgetRaycastQuality>* RaycastQuality, int* UVChannel)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTInputActor.Initialize"));

	ACoherentUIGTInputActor_Initialize_Params params;
	params.CollisionChannel = CollisionChannel;
	params.AddressMode = AddressMode;
	params.RaycastQuality = RaycastQuality;
	params.UVChannel = UVChannel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.GetInputPropagationBehaviour
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C89D620              		 offset:4acd620                       

TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> ACoherentUIGTInputActor::GetInputPropagationBehaviour()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTInputActor.GetInputPropagationBehaviour"));

	ACoherentUIGTInputActor_GetInputPropagationBehaviour_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.AlwaysAcceptMouseInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bAccept                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C89CDB0              		 offset:4accdb0                       

void ACoherentUIGTInputActor::AlwaysAcceptMouseInput(bool* bAccept)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTInputActor.AlwaysAcceptMouseInput"));

	ACoherentUIGTInputActor_AlwaysAcceptMouseInput_Params params;
	params.bAccept = bAccept;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.AllowJoystickInputWhileUIGTIsFocused_DEPRECATED
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bAllow                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C89CD20              		 offset:4accd20                       

void ACoherentUIGTInputActor::AllowJoystickInputWhileUIGTIsFocused_DEPRECATED(bool* bAllow)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTInputActor.AllowJoystickInputWhileUIGTIsFocused_DEPRECATED"));

	ACoherentUIGTInputActor_AllowJoystickInputWhileUIGTIsFocused_DEPRECATED_Params params;
	params.bAllow = bAllow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTLiveView.OnLiveViewSizeRequest
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UCoherentUIGTBaseComponent** baseComponent                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString*                Name                           (Parm, ZeroConstructor)
// int                            Width                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C89DD80              		 offset:4acdd80                       

void UCoherentUIGTLiveView::OnLiveViewSizeRequest(class UCoherentUIGTBaseComponent** baseComponent, struct FString* Name, int* Width, int* Height)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CoherentUIGTPlugin.CoherentUIGTLiveView.OnLiveViewSizeRequest"));

	UCoherentUIGTLiveView_OnLiveViewSizeRequest_Params params;
	params.baseComponent = baseComponent;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Width != nullptr)
		*Width = params.Width;
	if (Height != nullptr)
		*Height = params.Height;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
