#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_PcOptionTabLabelWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_PcOptionTabLabelWidget.BP_PcOptionTabLabelWidget_C
// 0x0000 (0x0478 - 0x0478)
class UBP_PcOptionTabLabelWidget_C : public UTslGameOptionTabLabelWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass BP_PcOptionTabLabelWidget.BP_PcOptionTabLabelWidget_C"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
