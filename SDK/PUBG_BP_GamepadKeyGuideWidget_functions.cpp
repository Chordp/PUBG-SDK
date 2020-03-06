// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_GamepadKeyGuideWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GamepadKeyGuideWidget.BP_GamepadKeyGuideWidget_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_GamepadKeyGuideWidget_C::CustomEvent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_GamepadKeyGuideWidget.BP_GamepadKeyGuideWidget_C.CustomEvent"));

	UBP_GamepadKeyGuideWidget_C_CustomEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GamepadKeyGuideWidget.BP_GamepadKeyGuideWidget_C.BndEvt__TabSelector_K2Node_ComponentBoundEvent_0_OnTabRotated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int*                           SelectedIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_GamepadKeyGuideWidget_C::BndEvt__TabSelector_K2Node_ComponentBoundEvent_0_OnTabRotated__DelegateSignature(int* SelectedIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_GamepadKeyGuideWidget.BP_GamepadKeyGuideWidget_C.BndEvt__TabSelector_K2Node_ComponentBoundEvent_0_OnTabRotated__DelegateSignature"));

	UBP_GamepadKeyGuideWidget_C_BndEvt__TabSelector_K2Node_ComponentBoundEvent_0_OnTabRotated__DelegateSignature_Params params;
	params.SelectedIndex = SelectedIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GamepadKeyGuideWidget.BP_GamepadKeyGuideWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_GamepadKeyGuideWidget_C::Construct()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_GamepadKeyGuideWidget.BP_GamepadKeyGuideWidget_C.Construct"));

	UBP_GamepadKeyGuideWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GamepadKeyGuideWidget.BP_GamepadKeyGuideWidget_C.ExecuteUbergraph_BP_GamepadKeyGuideWidget
// ()
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_GamepadKeyGuideWidget_C::ExecuteUbergraph_BP_GamepadKeyGuideWidget(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_GamepadKeyGuideWidget.BP_GamepadKeyGuideWidget_C.ExecuteUbergraph_BP_GamepadKeyGuideWidget"));

	UBP_GamepadKeyGuideWidget_C_ExecuteUbergraph_BP_GamepadKeyGuideWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
