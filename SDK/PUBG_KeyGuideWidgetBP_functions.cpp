// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_KeyGuideWidgetBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function KeyGuideWidgetBP.KeyGuideWidgetBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UKeyGuideWidgetBP_C::Construct()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function KeyGuideWidgetBP.KeyGuideWidgetBP_C.Construct"));

	UKeyGuideWidgetBP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyGuideWidgetBP.KeyGuideWidgetBP_C.BndEvt__ButtonBack_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UKeyGuideWidgetBP_C::BndEvt__ButtonBack_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function KeyGuideWidgetBP.KeyGuideWidgetBP_C.BndEvt__ButtonBack_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"));

	UKeyGuideWidgetBP_C_BndEvt__ButtonBack_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyGuideWidgetBP.KeyGuideWidgetBP_C.EscapeEvent
// (BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UKeyGuideWidgetBP_C::EscapeEvent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function KeyGuideWidgetBP.KeyGuideWidgetBP_C.EscapeEvent"));

	UKeyGuideWidgetBP_C_EscapeEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyGuideWidgetBP.KeyGuideWidgetBP_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UKeyGuideWidgetBP_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function KeyGuideWidgetBP.KeyGuideWidgetBP_C.Tick"));

	UKeyGuideWidgetBP_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyGuideWidgetBP.KeyGuideWidgetBP_C.ExecuteUbergraph_KeyGuideWidgetBP
// (HasDefaults)
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UKeyGuideWidgetBP_C::ExecuteUbergraph_KeyGuideWidgetBP(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function KeyGuideWidgetBP.KeyGuideWidgetBP_C.ExecuteUbergraph_KeyGuideWidgetBP"));

	UKeyGuideWidgetBP_C_ExecuteUbergraph_KeyGuideWidgetBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
