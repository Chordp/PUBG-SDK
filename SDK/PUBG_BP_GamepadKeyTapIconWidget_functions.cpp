// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_GamepadKeyTapIconWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GamepadKeyTapIconWidget.BP_GamepadKeyTapIconWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UBP_GamepadKeyTapIconWidget_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_GamepadKeyTapIconWidget.BP_GamepadKeyTapIconWidget_C.PreConstruct"));

	UBP_GamepadKeyTapIconWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GamepadKeyTapIconWidget.BP_GamepadKeyTapIconWidget_C.ExecuteUbergraph_BP_GamepadKeyTapIconWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UBP_GamepadKeyTapIconWidget_C::ExecuteUbergraph_BP_GamepadKeyTapIconWidget(int EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_GamepadKeyTapIconWidget.BP_GamepadKeyTapIconWidget_C.ExecuteUbergraph_BP_GamepadKeyTapIconWidget"));

	UBP_GamepadKeyTapIconWidget_C_ExecuteUbergraph_BP_GamepadKeyTapIconWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
