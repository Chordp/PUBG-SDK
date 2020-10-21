#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_PcOptionKeyBinderWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TslGame.TslGameOptionItemKeyBinderWidget.OnKeyBinderSlotValueChanged
struct UBP_PcOptionKeyBinderWidget_C_OnKeyBinderSlotValueChanged_Params
{
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTslInputKey                                InputKey;                                                 // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
