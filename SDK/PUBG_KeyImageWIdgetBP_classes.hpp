#pragma once

// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_KeyImageWIdgetBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass KeyImageWIdgetBP.KeyImageWIdgetBP_C
// 0x0000 (0x0460 - 0x0460)
class UKeyImageWIdgetBP_C : public UTslKeyboardAndMouseIconWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass KeyImageWIdgetBP.KeyImageWIdgetBP_C"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
