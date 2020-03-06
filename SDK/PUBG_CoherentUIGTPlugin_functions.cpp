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
// class UStructProperty*         Arg                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE64420              		 offset:44a4420                       

void UCoherentUIGTWidget::UpdateWholeDataModelFromStruct(class UStructProperty* Arg)
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
// class UObject*                 Model                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE64260              		 offset:44a4260                       

void UCoherentUIGTWidget::UpdateWholeDataModelFromObject(class UObject* Model)
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
// struct FString                 Name                           (Parm, ZeroConstructor)
// class UCoherentUIGTJSEvent*    EventData                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE64100              		 offset:44a4100                       

void UCoherentUIGTWidget::TriggerJSEvent(const struct FString& Name, class UCoherentUIGTJSEvent* EventData)
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
// FunctionAddress:0x00007FF6DAE63ED0              		 offset:44a3ed0                       

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
// bool                           Show                           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE63E20              		 offset:44a3e20                       

void UCoherentUIGTWidget::ShowPaintRects(bool Show)
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
// TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> Propagation                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE639F0              		 offset:44a39f0                       

void UCoherentUIGTWidget::SetInputPropagationBehaviour(TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> Propagation)
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
// float                          Threshold                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE637E0              		 offset:44a37e0                       

void UCoherentUIGTWidget::SetClickThroughAlphaThreshold(float Threshold)
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
// FunctionAddress:0x00007FF6DAE63680              		 offset:44a3680                       

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
// FunctionAddress:0x00007FF6DAE63640              		 offset:44a3640                       

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
// struct FString                 path                           (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6DAE63330              		 offset:44a3330                       

void UCoherentUIGTWidget::Load(const struct FString& path)
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
// FunctionAddress:0x00007FF6DAE63260              		 offset:44a3260                       

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
// FunctionAddress:0x00007FF6DAE63200              		 offset:44a3200                       

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
// FunctionAddress:0x00007FF6DAE631D0              		 offset:44a31d0                       

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
// FunctionAddress:0x00007FF6DAE63140              		 offset:44a3140                       

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
// FunctionAddress:0x00007FF6DAE62F30              		 offset:44a2f30                       

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
// FunctionAddress:0x00007FF6DAE62DF0              		 offset:44a2df0                       

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
// FunctionAddress:0x00007FF6DAE62CA0              		 offset:44a2ca0                       

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
// FunctionAddress:0x00007FF6DAE62C40              		 offset:44a2c40                       

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
// FunctionAddress:0x00007FF6DAE62B60              		 offset:44a2b60                       

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
// FunctionAddress:0x00007FF6DAE62A90              		 offset:44a2a90                       

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
// FunctionAddress:0x00007FF6DAE629C0              		 offset:44a29c0                       

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
// struct FString                 Name                           (Parm, ZeroConstructor)
// class UStructProperty*         Arg                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE62820              		 offset:44a2820                       

void UCoherentUIGTWidget::CreateDataModelFromStruct(const struct FString& Name, class UStructProperty* Arg)
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
// struct FString                 Name                           (Parm, ZeroConstructor)
// class UObject*                 Model                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE625B0              		 offset:44a25b0                       

void UCoherentUIGTWidget::CreateDataModelFromObject(const struct FString& Name, class UObject* Model)
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
// FunctionAddress:0x00007FF6DAE624B0              		 offset:44a24b0                       

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
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF6DAE62290              		 offset:44a2290                       

void UCoherentUIGTJSEvent::AddText(const struct FText& Text)
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
// class UStructProperty*         Arg                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE621A0              		 offset:44a21a0                       

void UCoherentUIGTJSEvent::AddStructArg(class UStructProperty* Arg)
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
// struct FString                 Str                            (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6DAE61FF0              		 offset:44a1ff0                       

void UCoherentUIGTJSEvent::AddString(const struct FString& Str)
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
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE61EA0              		 offset:44a1ea0                       

void UCoherentUIGTJSEvent::AddObject(class UObject* Object)
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
// struct FName                   Name                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE61D60              		 offset:44a1d60                       

void UCoherentUIGTJSEvent::AddName(const struct FName& Name)
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
// int                            integer                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE61CE0              		 offset:44a1ce0                       

void UCoherentUIGTJSEvent::AddInt32(int integer)
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
// float                          FL                             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE61BB0              		 offset:44a1bb0                       

void UCoherentUIGTJSEvent::AddFloat(float FL)
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
// unsigned char                  byte                           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE61A70              		 offset:44a1a70                       

void UCoherentUIGTJSEvent::AddByte(unsigned char byte)
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
// bool                           B                              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE61930              		 offset:44a1930                       

void UCoherentUIGTJSEvent::AddBool(bool B)
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
// TArray<int>                    Array                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF6DAE61560              		 offset:44a1560                       

void UCoherentUIGTJSEvent::AddArray(TArray<int> Array)
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
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE63560              		 offset:44a3560                       

void UCoherentUIGTJSPayload::ReadObject(int Index, class UObject* Object)
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
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6DAE62E20              		 offset:44a2e20                       

struct FString UCoherentUIGTJSPayload::GetString(int Index)
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
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE62D60              		 offset:44a2d60                       

float UCoherentUIGTJSPayload::GetNumber(int Index)
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
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE62CD0              		 offset:44a2cd0                       

int UCoherentUIGTJSPayload::GetInt32(int Index)
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
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE62B80              		 offset:44a2b80                       

bool UCoherentUIGTJSPayload::GetBool(int Index)
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
// class UStructProperty*         Arg                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE642E0              		 offset:44a42e0                       

void UCoherentUIGTBaseComponent::UpdateWholeDataModelFromStruct(class UStructProperty* Arg)
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
// class UObject*                 Model                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE641E0              		 offset:44a41e0                       

void UCoherentUIGTBaseComponent::UpdateWholeDataModelFromObject(class UObject* Model)
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
// struct FString                 Name                           (Parm, ZeroConstructor)
// class UCoherentUIGTJSEvent*    EventData                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE63F10              		 offset:44a3f10                       

void UCoherentUIGTBaseComponent::TriggerJSEvent(const struct FString& Name, class UCoherentUIGTJSEvent* EventData)
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
// FunctionAddress:0x00007FF6DAE63EB0              		 offset:44a3eb0                       

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
// bool                           Show                           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE63D90              		 offset:44a3d90                       

void UCoherentUIGTBaseComponent::ShowPaintRects(bool Show)
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
// float                          Threshold                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE63760              		 offset:44a3760                       

void UCoherentUIGTBaseComponent::SetClickThroughAlphaThreshold(float Threshold)
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
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE636A0              		 offset:44a36a0                       

void UCoherentUIGTBaseComponent::Resize(int Width, int Height)
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
// FunctionAddress:0x00007FF6DAE63660              		 offset:44a3660                       

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
// FunctionAddress:0x00007FF6DAE63620              		 offset:44a3620                       

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
// struct FString                 path                           (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6DAE63290              		 offset:44a3290                       

void UCoherentUIGTBaseComponent::Load(const struct FString& path)
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
// FunctionAddress:0x00007FF6DAE63230              		 offset:44a3230                       

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
// FunctionAddress:0x00007FF6DAE63200              		 offset:44a3200                       

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
// FunctionAddress:0x00007FF6DAE631A0              		 offset:44a31a0                       

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
// FunctionAddress:0x00007FF6DAE63110              		 offset:44a3110                       

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
// FunctionAddress:0x00007FF6DAE62F00              		 offset:44a2f00                       

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
// FunctionAddress:0x00007FF6DAE62C10              		 offset:44a2c10                       

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
// FunctionAddress:0x00007FF6DAE62B40              		 offset:44a2b40                       

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
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE62AB0              		 offset:44a2ab0                       

void UCoherentUIGTBaseComponent::EnableDelayedUpdate(bool bEnabled)
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
// FunctionAddress:0x00007FF6DAE62A70              		 offset:44a2a70                       

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
// FunctionAddress:0x00007FF6DAE629C0              		 offset:44a29c0                       

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
// struct FString                 Name                           (Parm, ZeroConstructor)
// class UStructProperty*         Arg                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE62690              		 offset:44a2690                       

void UCoherentUIGTBaseComponent::CreateDataModelFromStruct(const struct FString& Name, class UStructProperty* Arg)
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
// struct FString                 Name                           (Parm, ZeroConstructor)
// class UObject*                 Model                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE624D0              		 offset:44a24d0                       

void UCoherentUIGTBaseComponent::CreateDataModelFromObject(const struct FString& Name, class UObject* Model)
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
// FunctionAddress:0x00007FF6DAE62490              		 offset:44a2490                       

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
// class UCoherentUIGTBaseComponent* Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 EventName                      (Parm, ZeroConstructor)
// class UCoherentUIGTJSEvent*    JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE63FF0              		 offset:44a3ff0                       

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_TriggerJSEvent(class UCoherentUIGTBaseComponent* Component, const struct FString& EventName, class UCoherentUIGTJSEvent* JSEvent)
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
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FCoherentUIGTLoadingScreenSettings Settings                       (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF6DAE63AF0              		 offset:44a3af0                       

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_SetupLoadingScreen(class UObject* WorldContextObject, const struct FCoherentUIGTLoadingScreenSettings& Settings)
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
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UCoherentUIGTJSEvent*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE629F0              		 offset:44a29f0                       

class UCoherentUIGTJSEvent* UCoherentUIGTBlueprintFunctionLibrary::STATIC_CreateJSEvent(class UObject* WorldContextObject)
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
// class UCoherentUIGTJSEvent*    JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// class UStructProperty*         Arg                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE62090              		 offset:44a2090                       

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddStructArg(class UCoherentUIGTJSEvent* JSEvent, class UStructProperty* Arg)
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
// class UCoherentUIGTJSEvent*    JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Arg                            (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6DAE61F20              		 offset:44a1f20                       

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddString(class UCoherentUIGTJSEvent* JSEvent, const struct FString& Arg)
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
// class UCoherentUIGTJSEvent*    JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Arg                            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE61DF0              		 offset:44a1df0                       

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddObject(class UCoherentUIGTJSEvent* JSEvent, class UObject* Arg)
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
// class UCoherentUIGTJSEvent*    JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Arg                            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE61C30              		 offset:44a1c30                       

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddInt32(class UCoherentUIGTJSEvent* JSEvent, int Arg)
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
// class UCoherentUIGTJSEvent*    JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Arg                            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE61AF0              		 offset:44a1af0                       

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddFloat(class UCoherentUIGTJSEvent* JSEvent, float Arg)
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
// class UCoherentUIGTJSEvent*    JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Arg                            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE619C0              		 offset:44a19c0                       

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddByte(class UCoherentUIGTJSEvent* JSEvent, unsigned char Arg)
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
// class UCoherentUIGTJSEvent*    JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Arg                            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE61870              		 offset:44a1870                       

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddBool(class UCoherentUIGTJSEvent* JSEvent, bool Arg)
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
// class UCoherentUIGTJSEvent*    JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    Arg                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF6DAE61680              		 offset:44a1680                       

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddArrayOfStructs(class UCoherentUIGTJSEvent* JSEvent, TArray<int> Arg)
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
// class UCoherentUIGTJSEvent*    JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    Arg                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ArrayType                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE61430              		 offset:44a1430                       

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddArray(class UCoherentUIGTJSEvent* JSEvent, TArray<int> Arg, int ArrayType)
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
// struct FString                 PageUrl                        (Parm, ZeroConstructor)
// bool                           bIsTransparent                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          ClickThroughAlphaThreshold     (Parm, ZeroConstructor, IsPlainOldData)
// float                          AnimationFrameDefer            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDelayedUpdate                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE63BD0              		 offset:44a3bd0                       

void ACoherentUIGTGameHUD::SetupUIGTView(const struct FString& PageUrl, bool bIsTransparent, float ClickThroughAlphaThreshold, float AnimationFrameDefer, bool bDelayedUpdate)
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
// FunctionAddress:0x00007FF6DAE62F60              		 offset:44a2f60                       

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
// FunctionAddress:0x00007FF6DAE63EF0              		 offset:44a3ef0                       

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
// TEnumAsByte<EGTInputWidgetLineTraceMode> Mode                           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE63A70              		 offset:44a3a70                       

void ACoherentUIGTInputActor::SetLineTraceMode(TEnumAsByte<EGTInputWidgetLineTraceMode> Mode)
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
// TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> Propagation                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE63970              		 offset:44a3970                       

void ACoherentUIGTInputActor::SetInputPropagationBehaviour(TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> Propagation)
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
// class UCoherentUIGTBaseComponent* NewFocusedView                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE638F0              		 offset:44a38f0                       

void ACoherentUIGTInputActor::SetCoherentUIGTViewFocus(class UCoherentUIGTBaseComponent* NewFocusedView)
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
// bool                           FocusUI                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE63860              		 offset:44a3860                       

void ACoherentUIGTInputActor::SetCoherentUIGTInputFocus(bool FocusUI)
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
// FunctionAddress:0x00007FF6DAE63170              		 offset:44a3170                       

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
// FunctionAddress:0x00007FF6DAE630E0              		 offset:44a30e0                       

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
// TEnumAsByte<ECollisionChannel> CollisionChannel               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETextureAddress>   AddressMode                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGTInputWidgetRaycastQuality> RaycastQuality                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            UVChannel                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE62F90              		 offset:44a2f90                       

void ACoherentUIGTInputActor::Initialize(TEnumAsByte<ECollisionChannel> CollisionChannel, TEnumAsByte<ETextureAddress> AddressMode, TEnumAsByte<EGTInputWidgetRaycastQuality> RaycastQuality, int UVChannel)
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
// FunctionAddress:0x00007FF6DAE62C70              		 offset:44a2c70                       

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
// bool                           bAccept                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE62400              		 offset:44a2400                       

void ACoherentUIGTInputActor::AlwaysAcceptMouseInput(bool bAccept)
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
// bool                           bAllow                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE62370              		 offset:44a2370                       

void ACoherentUIGTInputActor::AllowJoystickInputWhileUIGTIsFocused_DEPRECATED(bool bAllow)
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
// class UCoherentUIGTBaseComponent* baseComponent                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)
// int                            Width                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE633D0              		 offset:44a33d0                       

void UCoherentUIGTLiveView::OnLiveViewSizeRequest(class UCoherentUIGTBaseComponent* baseComponent, const struct FString& Name, int* Width, int* Height)
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
