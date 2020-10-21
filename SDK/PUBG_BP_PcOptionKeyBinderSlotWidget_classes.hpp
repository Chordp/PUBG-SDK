#pragma once

// PUBG (9.1.5.3) SDK

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
// 0x0000 (0x0538 - 0x0538)
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
