#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_PcOptionKeyBinderSlotWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_PcOptionKeyBinderSlotWidget.BP_PcOptionKeyBinderSlotWidget_C
// 0x0000 (0x0510 - 0x0510)
class UBP_PcOptionKeyBinderSlotWidget_C : public UTslGameOptionItemKeyBinderSlotWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass BP_PcOptionKeyBinderSlotWidget.BP_PcOptionKeyBinderSlotWidget_C"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
