// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_GamepadKeyGuideTabSelectorCombo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GamepadKeyGuideTabSelectorCombo.BP_GamepadKeyGuideTabSelectorCombo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UBP_GamepadKeyGuideTabSelectorCombo_C::Construct()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_GamepadKeyGuideTabSelectorCombo.BP_GamepadKeyGuideTabSelectorCombo_C.Construct"));

	UBP_GamepadKeyGuideTabSelectorCombo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GamepadKeyGuideTabSelectorCombo.BP_GamepadKeyGuideTabSelectorCombo_C.ExecuteUbergraph_BP_GamepadKeyGuideTabSelectorCombo
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UBP_GamepadKeyGuideTabSelectorCombo_C::ExecuteUbergraph_BP_GamepadKeyGuideTabSelectorCombo(int EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_GamepadKeyGuideTabSelectorCombo.BP_GamepadKeyGuideTabSelectorCombo_C.ExecuteUbergraph_BP_GamepadKeyGuideTabSelectorCombo"));

	UBP_GamepadKeyGuideTabSelectorCombo_C_ExecuteUbergraph_BP_GamepadKeyGuideTabSelectorCombo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
