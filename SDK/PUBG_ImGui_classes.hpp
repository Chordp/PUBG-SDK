#pragma once

// PUBG (7.1.6.5) SDK

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
// 0x0018 (0x0040 - 0x0028)
class UImGuiInputHandler : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class ImGui.ImGuiInputHandler"));

		return ptr;
	}

};


// Class ImGui.ImGuiSettings
// 0x0058 (0x0080 - 0x0028)
class UImGuiSettings : public UObject
{
public:
	struct FStringClassReference                       ImGuiInputHandlerClass;                                   // 0x0028(0x0010) (Edit, Config)
	bool                                               bShareKeyboardInput;                                      // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bShareGamepadInput;                                       // 0x0039(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseSoftwareCursor;                                       // 0x003A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x003B(0x0005) MISSED OFFSET
	struct FImGuiKeyInfo                               ToggleInput;                                              // 0x0040(0x0020) (Edit, Config)
	struct FImGuiKeyInfo                               SwitchInputModeKey;                                       // 0x0060(0x0020) (Config, Deprecated)

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
