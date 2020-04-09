#pragma once

// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_KeyGuideTabWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass KeyGuideTabWidget.KeyGuideTabWidget_C
// 0x0000 (0x0448 - 0x0448)
class UKeyGuideTabWidget_C : public UTslTabSelectorWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass KeyGuideTabWidget.KeyGuideTabWidget_C"));

		return ptr;
	}


	void STATIC_UpdateIndexTo(int NewIndex);
	void STATIC_RotateRight();
	void STATIC_RotateLeft();
	void STATIC_ResetSelector();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
