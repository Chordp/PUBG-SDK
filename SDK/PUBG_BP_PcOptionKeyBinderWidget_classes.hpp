#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_PcOptionKeyBinderWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_PcOptionKeyBinderWidget.BP_PcOptionKeyBinderWidget_C
// 0x0000 (0x0740 - 0x0740)
class UBP_PcOptionKeyBinderWidget_C : public UTslGameOptionItemKeyBinderWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass BP_PcOptionKeyBinderWidget.BP_PcOptionKeyBinderWidget_C"));

		return ptr;
	}


	void OnKeyBinderSlotValueChanged(int SlotIndex, const struct FTslInputKey& InputKey);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
