#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_TslCaptureLobby_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TslCaptureLobby.TslCaptureLobby_C
// 0x007E (0x0486 - 0x0408)
class ATslCaptureLobby_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0408(0x0008) (Transient, DuplicateTransient)
	class ALobbyViewMode_C*                            ViewModeStudio;                                           // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ATslWeapon*                                  TslWeapon;                                                // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  UiCameraTM;                                               // 0x0420(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  ViewModeTM;                                               // 0x0450(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLeft;                                                    // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRight;                                                   // 0x0481(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUp;                                                      // 0x0482(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDown;                                                    // 0x0483(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AddView;                                                  // 0x0484(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MinusView;                                                // 0x0485(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass TslCaptureLobby.TslCaptureLobby_C"));

		return ptr;
	}


	void InpActEvt_Backslash_K2Node_InputKeyEvent(struct FKey* Key);
	void InpActEvt_Left_K2Node_InputKeyEvent(struct FKey* Key);
	void InpActEvt_Right_K2Node_InputKeyEvent(struct FKey* Key);
	void InpActEvt_Up_K2Node_InputKeyEvent(struct FKey* Key);
	void InpActEvt_Down_K2Node_InputKeyEvent(struct FKey* Key);
	void InpActEvt_LeftBracket_K2Node_InputKeyEvent(struct FKey* Key);
	void InpActEvt_RightBracket_K2Node_InputKeyEvent(struct FKey* Key);
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_TslCaptureLobby(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
