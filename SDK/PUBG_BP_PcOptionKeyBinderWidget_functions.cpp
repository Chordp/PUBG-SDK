// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_PcOptionKeyBinderWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TslGame.TslGameOptionItemKeyBinderWidget.OnKeyBinderSlotValueChanged
// (Final, Native, Public)
// Parameters:
// int                            SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FTslInputKey            InputKey                       (Parm)
// FunctionAddress:0x00007FF75EE01210              		 offset:5401210                       

void UBP_PcOptionKeyBinderWidget_C::OnKeyBinderSlotValueChanged(int SlotIndex, const struct FTslInputKey& InputKey)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslGameOptionItemKeyBinderWidget.OnKeyBinderSlotValueChanged"));

	UBP_PcOptionKeyBinderWidget_C_OnKeyBinderSlotValueChanged_Params params;
	params.SlotIndex = SlotIndex;
	params.InputKey = InputKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
