#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_PrefabAsset_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PrefabAsset.PrefabActor
// 0x0010 (0x0410 - 0x0400)
class APrefabActor : public AActor
{
public:
	class UPrefabComponent*                            PrefabComponent;                                          // 0x0400(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class ULODParentComponent*                         BuildingHLOD;                                             // 0x0408(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class PrefabAsset.PrefabActor"));

		return ptr;
	}


	void SetPrefab(class UPrefabAsset* NewPrefab, bool bForceRevertEvenDisconnected);
	void SetMobility(TEnumAsByte<EComponentMobility> InMobility);
	class UPrefabAsset* GetPrefab();
	void DestroyPrefabActor(bool bDestroyAttachedChildren);
};


// Class PrefabAsset.PrefabActorHolder
// 0x0000 (0x0400 - 0x0400)
class APrefabActorHolder : public AActor
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class PrefabAsset.PrefabActorHolder"));

		return ptr;
	}

};


// Class PrefabAsset.PrefabLODHolder
// 0x0010 (0x0410 - 0x0400)
class APrefabLODHolder : public APrefabActorHolder
{
public:
	class ULODParentComponent*                         HLODParentComponent;                                      // 0x0400(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMesh*                                 LevelLODMesh;                                             // 0x0408(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class PrefabAsset.PrefabLODHolder"));

		return ptr;
	}

};


// Class PrefabAsset.PrefabAsset
// 0x0108 (0x0130 - 0x0028)
class UPrefabAsset : public UObject
{
public:
	struct FGuid                                       PrefabId;                                                 // 0x0028(0x0010) (Edit, EditConst, IsPlainOldData)
	struct FText                                       PrefabContent;                                            // 0x0038(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector                                     PrefabPivot;                                              // 0x0050(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FString                                     PrefabHash;                                               // 0x0060(0x0010) (Edit, ZeroConstructor, EditConst)
	TMap<struct FString, struct FStringAssetReference> AssetReferences;                                          // 0x0070(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                NumActors;                                                // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	struct FStringAssetReference                       GeneratedBlueprintAssetReference;                         // 0x00C8(0x0010) (Edit, EditConst)
	TMap<struct FString, struct FPrefabOverride>       SavedPrefabOverrideMap;                                   // 0x00D8(0x0050) (Edit, ZeroConstructor, EditConst, DuplicateTransient)
	bool                                               bIsBaseBuilding;                                          // 0x0128(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsDestroyedPrefab;                                       // 0x0129(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               RemoveFromLevelLOD;                                       // 0x012A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x012B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class PrefabAsset.PrefabAsset"));

		return ptr;
	}

};


// Class PrefabAsset.PrefabComponent
// 0x00D0 (0x0A80 - 0x09B0)
class UPrefabComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x09B0(0x0008) MISSED OFFSET
	struct FVector                                     SelectionBoxOffset;                                       // 0x09B8(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      bLockSelection : 1;                                       // 0x09C4(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x09C5(0x0003) MISSED OFFSET
	class UBlueprint*                                  GeneratedBlueprint;                                       // 0x09C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UPrefabAsset*                                Prefab;                                                   // 0x09D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TMap<struct FName, class AActor*>                  PrefabInstancesMap;                                       // 0x09D8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, DuplicateTransient)
	TMap<struct FString, struct FPrefabOverride>       PrefabOverrideMap;                                        // 0x0A28(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst)
	unsigned char                                      bTransient : 1;                                           // 0x0A78(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0A79(0x0003) MISSED OFFSET
	bool                                               bIsBaseBuilding;                                          // 0x0A7C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bIsDestroyedPrefab;                                       // 0x0A7D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bKeepOverrides;                                           // 0x0A7E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideLightSettings;                                   // 0x0A7F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class PrefabAsset.PrefabComponent"));

		return ptr;
	}

};


// Class PrefabAsset.PrefabToolSettings
// 0x0088 (0x00B0 - 0x0028)
class UPrefabToolSettings : public UObject
{
public:
	bool                                               bReplaceActorsWithCreatedPrefab;                          // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	bool                                               bIsolateWhenEnteringPrefab;                               // 0x0030(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnablePrefabComponentVisualizer;                         // 0x0031(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	EPrefabVisualizerType                              PrefabComponentVisualizerType;                            // 0x0032(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bDisplayPrefabComponentVisualizerEvenNotSelected;         // 0x0033(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FColor                                      PrefabViewVisualizerColor;                                // 0x0034(0x0004) (Edit, Config, IsPlainOldData)
	struct FColor                                      PrefabViewVisualizerColorBaseBuilding;                    // 0x0038(0x0004) (Edit, Config, IsPlainOldData)
	struct FColor                                      TargetActorColor;                                         // 0x003C(0x0004) (Edit, Config, IsPlainOldData)
	struct FColor                                      UnLockedConnectedColor;                                   // 0x0040(0x0004) (Edit, Config, IsPlainOldData)
	struct FColor                                      LockedConnectedColor;                                     // 0x0044(0x0004) (Edit, Config, IsPlainOldData)
	struct FColor                                      UnLockedDisConnectedColor;                                // 0x0048(0x0004) (Edit, Config, IsPlainOldData)
	struct FColor                                      LockedDisConnectedColor;                                  // 0x004C(0x0004) (Edit, Config, IsPlainOldData)
	struct FColor                                      UnLockedNoPrefabAssignedColor;                            // 0x0050(0x0004) (Edit, Config, IsPlainOldData)
	struct FColor                                      LockedNoPrefabAssignedColor;                              // 0x0054(0x0004) (Edit, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
	struct FStringAssetReference                       PrefabMaterialPath;                                       // 0x0060(0x0010) (Edit, Config)
	class UMaterial*                                   PrefabMaterial;                                           // 0x0070(0x0008) (Edit, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0078(0x0001) MISSED OFFSET
	bool                                               bDisableLockPrefabSelectionFeature;                       // 0x0079(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x30];                                      // 0x007A(0x0030) MISSED OFFSET
	bool                                               bLockPrefabChildSelection;                                // 0x00AA(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bDebugMode;                                               // 0x00AB(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bTransparentvisualizer;                                   // 0x00AC(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class PrefabAsset.PrefabToolSettings"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
