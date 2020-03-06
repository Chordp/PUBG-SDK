#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_WidgetFunctionLibrary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WidgetFunctionLibrary.WidgetFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UWidgetFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass WidgetFunctionLibrary.WidgetFunctionLibrary_C"));

		return ptr;
	}


	void STATIC_GetOwningShooterCharacter(class UUserWidget** UserWidget, class UObject** __WorldContext, class ATslCharacter** ShooterCharacter);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
