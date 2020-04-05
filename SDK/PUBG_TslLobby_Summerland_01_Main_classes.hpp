#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_TslLobby_Summerland_01_Main_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TslLobby_Summerland_01_Main.TslLobby_Summerland_01_Main_C
<<<<<<< HEAD
// 0x0010 (0x03F8 - 0x03E8)
class ATslLobby_Summerland_01_Main_C : public ATslLobbyLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E8(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      None_ExecuteUbergraph_TslLobby_Summerland_01_Main_RefProperty;// 0x03F0(0x0008) (ZeroConstructor, IsPlainOldData)
=======
// 0x0010 (0x0418 - 0x0408)
class ATslLobby_Summerland_01_Main_C : public ATslLobbyLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0408(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      None_ExecuteUbergraph_TslLobby_Summerland_01_Main_RefProperty;// 0x0410(0x0008) (ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass TslLobby_Summerland_01_Main.TslLobby_Summerland_01_Main_C"));

		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_TslLobby_Summerland_01_Main(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
