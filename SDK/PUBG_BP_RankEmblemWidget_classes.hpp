#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_RankEmblemWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_RankEmblemWidget.BP_RankEmblemWidget_C
// 0x0008 (0x0490 - 0x0488)
class UBP_RankEmblemWidget_C : public UTslRankEmblemWidget
{
public:
	class UImage*                                      EmblemImage;                                              // 0x0488(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass BP_RankEmblemWidget.BP_RankEmblemWidget_C"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
