// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_PcSystemMenuButtonWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PcSystemMenuButtonWidget.BP_PcSystemMenuButtonWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_PcSystemMenuButtonWidget_C::PreConstruct(bool* IsDesignTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_PcSystemMenuButtonWidget.BP_PcSystemMenuButtonWidget_C.PreConstruct"));

	UBP_PcSystemMenuButtonWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PcSystemMenuButtonWidget.BP_PcSystemMenuButtonWidget_C.BndEvt__Button_Internal_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_PcSystemMenuButtonWidget_C::BndEvt__Button_Internal_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_PcSystemMenuButtonWidget.BP_PcSystemMenuButtonWidget_C.BndEvt__Button_Internal_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	UBP_PcSystemMenuButtonWidget_C_BndEvt__Button_Internal_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PcSystemMenuButtonWidget.BP_PcSystemMenuButtonWidget_C.ExecuteUbergraph_BP_PcSystemMenuButtonWidget
// ()
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_PcSystemMenuButtonWidget_C::ExecuteUbergraph_BP_PcSystemMenuButtonWidget(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_PcSystemMenuButtonWidget.BP_PcSystemMenuButtonWidget_C.ExecuteUbergraph_BP_PcSystemMenuButtonWidget"));

	UBP_PcSystemMenuButtonWidget_C_ExecuteUbergraph_BP_PcSystemMenuButtonWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PcSystemMenuButtonWidget.BP_PcSystemMenuButtonWidget_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_PcSystemMenuButtonWidget_C::OnClicked__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_PcSystemMenuButtonWidget.BP_PcSystemMenuButtonWidget_C.OnClicked__DelegateSignature"));

	UBP_PcSystemMenuButtonWidget_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
