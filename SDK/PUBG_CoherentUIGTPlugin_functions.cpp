// PUBG (8.3.5.39) SDK

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
// FunctionAddress:0x00007FF62B604220              		 offset:2b34220                       

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
// FunctionAddress:0x00007FF62B6040D0              		 offset:2b340d0                       

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
// FunctionAddress:0x00007FF62B603F70              		 offset:2b33f70                       

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
// FunctionAddress:0x00007FF62B603D40              		 offset:2b33d40                       

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
// FunctionAddress:0x00007FF62B603C90              		 offset:2b33c90                       

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
// FunctionAddress:0x00007FF62B603860              		 offset:2b33860                       

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
// FunctionAddress:0x00007FF62B603650              		 offset:2b33650                       

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
// FunctionAddress:0x00007FF62B6034F0              		 offset:2b334f0                       

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
// FunctionAddress:0x00007FF62B6034B0              		 offset:2b334b0                       

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
// FunctionAddress:0x00007FF62B6031A0              		 offset:2b331a0                       

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
// FunctionAddress:0x00007FF62B6030D0              		 offset:2b330d0                       

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
// FunctionAddress:0x00007FF62B603070              		 offset:2b33070                       

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
// FunctionAddress:0x00007FF62B603040              		 offset:2b33040                       

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
// FunctionAddress:0x00007FF62B602FB0              		 offset:2b32fb0                       

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
// FunctionAddress:0x00007FF62B602DA0              		 offset:2b32da0                       

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
// FunctionAddress:0x00007FF62B602C60              		 offset:2b32c60                       

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
// FunctionAddress:0x00007FF62B602B10              		 offset:2b32b10                       

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
// FunctionAddress:0x00007FF62B602AB0              		 offset:2b32ab0                       

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
// FunctionAddress:0x00007FF62B6029D0              		 offset:2b329d0                       

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
// FunctionAddress:0x00007FF62B602900              		 offset:2b32900                       

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
// FunctionAddress:0x00007FF62B602830              		 offset:2b32830                       

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
// FunctionAddress:0x00007FF62B602700              		 offset:2b32700                       

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
// FunctionAddress:0x00007FF62B602500              		 offset:2b32500                       

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
// FunctionAddress:0x00007FF62B602400              		 offset:2b32400                       

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
// FunctionAddress:0x00007FF62B6021E0              		 offset:2b321e0                       

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
// FunctionAddress:0x00007FF62B6020F0              		 offset:2b320f0                       

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
// FunctionAddress:0x00007FF62B601F40              		 offset:2b31f40                       

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
// FunctionAddress:0x00007FF62B601DF0              		 offset:2b31df0                       

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
// FunctionAddress:0x00007FF62B601CB0              		 offset:2b31cb0                       

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
// FunctionAddress:0x00007FF62B601C30              		 offset:2b31c30                       

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
// FunctionAddress:0x00007FF62B601B00              		 offset:2b31b00                       

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
// FunctionAddress:0x00007FF62B6019C0              		 offset:2b319c0                       

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
// FunctionAddress:0x00007FF62B601880              		 offset:2b31880                       

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
// FunctionAddress:0x00007FF62B6015D0              		 offset:2b315d0                       

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
// FunctionAddress:0x00007FF62B6033D0              		 offset:2b333d0                       

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
// FunctionAddress:0x00007FF62B602C90              		 offset:2b32c90                       

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
// FunctionAddress:0x00007FF62B602BD0              		 offset:2b32bd0                       

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
// FunctionAddress:0x00007FF62B602B40              		 offset:2b32b40                       

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
// FunctionAddress:0x00007FF62B6029F0              		 offset:2b329f0                       

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
// FunctionAddress:0x00007FF62B604150              		 offset:2b34150                       

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
// FunctionAddress:0x00007FF62B604050              		 offset:2b34050                       

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
// FunctionAddress:0x00007FF62B603D80              		 offset:2b33d80                       

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
// FunctionAddress:0x00007FF62B603D20              		 offset:2b33d20                       

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
// FunctionAddress:0x00007FF62B603C00              		 offset:2b33c00                       

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
// FunctionAddress:0x00007FF62B6035D0              		 offset:2b335d0                       

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
// FunctionAddress:0x00007FF62B603510              		 offset:2b33510                       

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
// FunctionAddress:0x00007FF62B6034D0              		 offset:2b334d0                       

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
// FunctionAddress:0x00007FF62B603490              		 offset:2b33490                       

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
// FunctionAddress:0x00007FF62B603100              		 offset:2b33100                       

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
// FunctionAddress:0x00007FF62B6030A0              		 offset:2b330a0                       

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
// FunctionAddress:0x00007FF62B603070              		 offset:2b33070                       

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
// FunctionAddress:0x00007FF62B603010              		 offset:2b33010                       

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
// FunctionAddress:0x00007FF62B602F80              		 offset:2b32f80                       

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
// FunctionAddress:0x00007FF62B602D70              		 offset:2b32d70                       

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
// FunctionAddress:0x00007FF62B602A80              		 offset:2b32a80                       

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
// FunctionAddress:0x00007FF62B6029B0              		 offset:2b329b0                       

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
// FunctionAddress:0x00007FF62B602920              		 offset:2b32920                       

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
// FunctionAddress:0x00007FF62B6028E0              		 offset:2b328e0                       

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
// FunctionAddress:0x00007FF62B602830              		 offset:2b32830                       

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
// FunctionAddress:0x00007FF62B6025E0              		 offset:2b325e0                       

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
// FunctionAddress:0x00007FF62B602420              		 offset:2b32420                       

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
// FunctionAddress:0x00007FF62B6023E0              		 offset:2b323e0                       

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
// FunctionAddress:0x00007FF62B603E60              		 offset:2b33e60                       

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
// FunctionAddress:0x00007FF62B603960              		 offset:2b33960                       

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
// FunctionAddress:0x00007FF62B602860              		 offset:2b32860                       

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
// FunctionAddress:0x00007FF62B601FE0              		 offset:2b31fe0                       

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
// FunctionAddress:0x00007FF62B601E70              		 offset:2b31e70                       

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
// FunctionAddress:0x00007FF62B601D40              		 offset:2b31d40                       

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
// FunctionAddress:0x00007FF62B601B80              		 offset:2b31b80                       

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
// FunctionAddress:0x00007FF62B601A40              		 offset:2b31a40                       

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
// FunctionAddress:0x00007FF62B601910              		 offset:2b31910                       

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
// FunctionAddress:0x00007FF62B6017C0              		 offset:2b317c0                       

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
// FunctionAddress:0x00007FF62B601690              		 offset:2b31690                       

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
// FunctionAddress:0x00007FF62B6014A0              		 offset:2b314a0                       

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
// FunctionAddress:0x00007FF62B603A40              		 offset:2b33a40                       

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
// FunctionAddress:0x00007FF62B602DD0              		 offset:2b32dd0                       

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
// FunctionAddress:0x00007FF62B603D60              		 offset:2b33d60                       

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
// FunctionAddress:0x00007FF62B6038E0              		 offset:2b338e0                       

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
// FunctionAddress:0x00007FF62B6037E0              		 offset:2b337e0                       

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
// FunctionAddress:0x00007FF62B603760              		 offset:2b33760                       

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
// FunctionAddress:0x00007FF62B6036D0              		 offset:2b336d0                       

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
// FunctionAddress:0x00007FF62B602FE0              		 offset:2b32fe0                       

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
// FunctionAddress:0x00007FF62B602F50              		 offset:2b32f50                       

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
// FunctionAddress:0x00007FF62B602E00              		 offset:2b32e00                       

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
// FunctionAddress:0x00007FF62B602AE0              		 offset:2b32ae0                       

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
// FunctionAddress:0x00007FF62B602350              		 offset:2b32350                       

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
// FunctionAddress:0x00007FF62B6022C0              		 offset:2b322c0                       

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
// FunctionAddress:0x00007FF62B603240              		 offset:2b33240                       

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
