#pragma once

// PUBG (9.1.5.3) SDK

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
// 0x0000 (0x0410 - 0x0410)
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


	void UnBindFakeCursor();
	bool SetFakeMouseMouseButtonUp(const struct FVector2D& InCursorPositionInViewport);
	bool SetFakeMouseMouseButtonDown(const struct FVector2D& InCursorPositionInViewport);
	void RuntimeInitBP();
	void OnFakeCursorY(float Val);
	void OnFakeCursorX(float Val);
	void OnFakeCursorUp();
	void OnFakeCursorDown();
	bool IsMouseOn();
	void HandleMainPrepass(class UWidget* Widget);
	bool CheckWantRequestRender();
	void BindFakeCursor();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
