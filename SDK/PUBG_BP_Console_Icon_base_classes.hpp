#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_Console_Icon_base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_Console_Icon_base.BP_Console_Icon_base_C
// 0x0001 (0x0249 - 0x0248)
class UBP_Console_Icon_base_C : public UUserWidget
{
public:
	TEnumAsByte<EBP_Console_Type>                      Console_Type;                                             // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass BP_Console_Icon_base.BP_Console_Icon_base_C"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
