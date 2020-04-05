#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_PcOptionItemSliderWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_PcOptionItemSliderWidget.BP_PcOptionItemSliderWidget_C
// 0x0000 (0x0590 - 0x0590)
class UBP_PcOptionItemSliderWidget_C : public UTslGameOptionItemSliderWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass BP_PcOptionItemSliderWidget.BP_PcOptionItemSliderWidget_C"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
