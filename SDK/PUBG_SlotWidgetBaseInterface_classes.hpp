#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_SlotWidgetBaseInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SlotWidgetBaseInterface.SlotWidgetBaseInterface_C
// 0x0000 (0x0040 - 0x0040)
class USlotWidgetBaseInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass SlotWidgetBaseInterface.SlotWidgetBaseInterface_C"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
