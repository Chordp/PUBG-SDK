#pragma once

// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ImGui_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ImGui.ImGuiInputHandler
// 0x0018 (0x0048 - 0x0030)
class UImGuiInputHandler : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class ImGui.ImGuiInputHandler"));

		return ptr;
	}

};


// Class ImGui.ImGuiSettings
// 0x0058 (0x0088 - 0x0030)
class UImGuiSettings : public UObject
{
public:
	struct FStringClassReference                       ImGuiInputHandlerClass;                                   // 0x0030(0x0010) (Edit, Config)
	bool                                               bShareKeyboardInput;                                      // 0x0040(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bShareGamepadInput;                                       // 0x0041(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseSoftwareCursor;                                       // 0x0042(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0043(0x0005) MISSED OFFSET
	struct FImGuiKeyInfo                               ToggleInput;                                              // 0x0048(0x0020) (Edit, Config)
	struct FImGuiKeyInfo                               SwitchInputModeKey;                                       // 0x0068(0x0020) (Config, Deprecated)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class ImGui.ImGuiSettings"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
