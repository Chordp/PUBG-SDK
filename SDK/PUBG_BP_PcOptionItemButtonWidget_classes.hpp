#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_PcOptionItemButtonWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_PcOptionItemButtonWidget.BP_PcOptionItemButtonWidget_C
// 0x0000 (0x0748 - 0x0748)
class UBP_PcOptionItemButtonWidget_C : public UTslGameOptionItemButtonWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass BP_PcOptionItemButtonWidget.BP_PcOptionItemButtonWidget_C"));

		return ptr;
	}


	void ShowPopupDialogEx();
	void OnPopupButtonPressedEvent(EPopupButtonID ButtonID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
