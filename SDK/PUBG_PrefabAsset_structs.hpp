#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Basic.hpp"
#include "PUBG_Engine_classes.hpp"
#include "PUBG_CoreUObject_classes.hpp"
#include "PUBG_InputCore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum PrefabAsset.EPrefabVisualizerType
enum class EPrefabVisualizerType : uint8_t
{
	WireBox                        = 0,
	WireSphere                     = 1,
	EPrefabVisualizerType_MAX      = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PrefabAsset.PrefabOverride
// 0x0020
struct FPrefabOverride
{
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ParentPrefab;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
