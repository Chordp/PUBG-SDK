#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_GamepadKeyGuideBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_GamepadKeyGuideBase.BP_GamepadKeyGuideBase_C
// 0x0000 (0x0410 - 0x0410)
class UBP_GamepadKeyGuideBase_C : public UTslGamepadKeyGuideWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass BP_GamepadKeyGuideBase.BP_GamepadKeyGuideBase_C"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
