#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ImageInTextWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ImageInTextWidget.ImageInTextWidget_C
// 0x0000 (0x0568 - 0x0568)
class UImageInTextWidget_C : public UImageInTextWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass ImageInTextWidget.ImageInTextWidget_C"));

		return ptr;
	}


	void UpdateText();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
