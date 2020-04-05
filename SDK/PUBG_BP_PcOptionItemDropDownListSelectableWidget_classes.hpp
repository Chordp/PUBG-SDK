#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_PcOptionItemDropDownListSelectableWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_PcOptionItemDropDownListSelectableWidget.BP_PcOptionItemDropDownListSelectableWidget_C
// 0x0000 (0x0470 - 0x0470)
class UBP_PcOptionItemDropDownListSelectableWidget_C : public UTslGameOptionItemDropDownListSelectableWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass BP_PcOptionItemDropDownListSelectableWidget.BP_PcOptionItemDropDownListSelectableWidget_C"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
