#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_LobbyBlurBackgroundWidjet_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass LobbyBlurBackgroundWidjet.LobbyBlurBackgroundWidjet_C
// 0x0000 (0x0248 - 0x0248)
class ULobbyBlurBackgroundWidjet_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass LobbyBlurBackgroundWidjet.LobbyBlurBackgroundWidjet_C"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
