#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_TslCaptureMastery_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TslCaptureMastery.TslCaptureMastery_C
// 0x0008 (0x0410 - 0x0408)
class ATslCaptureMastery_C : public ATslLobbyLevelScriptCustom
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0408(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass TslCaptureMastery.TslCaptureMastery_C"));

		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_TslCaptureMastery(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
