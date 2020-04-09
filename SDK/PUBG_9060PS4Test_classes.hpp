#pragma once

// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_9060PS4Test_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass 9060PS4Test.9060PS4Test_C
// 0x0000 (0x03F0 - 0x03F0)
class U9060PS4Test_C : public UUmgBaseWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass 9060PS4Test.9060PS4Test_C"));

		return ptr;
	}


	void STATIC_UnBindFakeCursor();
	bool STATIC_SetFakeMouseMouseButtonUp(const struct FVector2D& InCursorPositionInViewport);
	bool STATIC_SetFakeMouseMouseButtonDown(const struct FVector2D& InCursorPositionInViewport);
	void STATIC_RuntimeInitBP();
	void STATIC_OnFakeCursorY(float Val);
	void STATIC_OnFakeCursorX(float Val);
	void STATIC_OnFakeCursorUp();
	void STATIC_OnFakeCursorDown();
	bool STATIC_IsMouseOn();
	void STATIC_HandleMainPrepass(class UWidget* Widget);
	bool STATIC_CheckWantRequestRender();
	void STATIC_BindFakeCursor();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
