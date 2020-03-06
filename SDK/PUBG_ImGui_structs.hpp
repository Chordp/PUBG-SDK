#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Basic.hpp"
#include "PUBG_CoreUObject_classes.hpp"
#include "PUBG_InputCore_classes.hpp"
#include "PUBG_SlateCore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ImGui.ImGuiKeyInfo
// 0x0020
struct FImGuiKeyInfo
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (Edit)
	ECheckBoxState                                     Shift;                                                    // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ECheckBoxState                                     Ctrl;                                                     // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ECheckBoxState                                     Alt;                                                      // 0x001A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ECheckBoxState                                     Cmd;                                                      // 0x001B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
