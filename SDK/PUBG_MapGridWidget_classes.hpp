#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MapGridWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass MapGridWidget.MapGridWidget_C
// 0x0021 (0x14C9 - 0x14A8)
class UMapGridWidget_C : public UMapGridWidget
{
public:
	class UWidgetAnimation*                            PulseBlackZoneCircle;                                     // 0x14A8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector2D                                   StartPointUC;                                             // 0x14B0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   EndPointUC;                                               // 0x14B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   StandardVector;                                           // 0x14C0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShowCoord;                                               // 0x14C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass MapGridWidget.MapGridWidget_C"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
