#pragma once

// PUBG (9.1.5.3) SDK

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
// 0x0000 (0x0478 - 0x0478)
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


	void UpdateIndexTo(int NewIndex);
	void RotateRight();
	void RotateLeft();
	void ResetSelector();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
