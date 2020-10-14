#pragma once

// PUBG (8.3.5.39) SDK

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
// 0x0030 (0x0430 - 0x0400)
class APrefabActor : public AActor
{
public:
	class UPrefabComponent*                            PrefabComponent;                                          // 0x0400(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FText                                       BackupPrefabCopyData;                                     // 0x0408(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst)
	bool                                               bKeepOverrides;                                           // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0421(0x0007) MISSED OFFSET
	class ULODParentComponent*                         BuildingHLOD;                                             // 0x0428(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData)

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
// 0x0108 (0x0148 - 0x0040)
class UPrefabAsset : public UObject
{
public:
	struct FGuid                                       PrefabId;                                                 // 0x0040(0x0010) (Edit, EditConst, IsPlainOldData)
	struct FText                                       PrefabContent;                                            // 0x0050(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector                                     PrefabPivot;                                              // 0x0068(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FString                                     PrefabHash;                                               // 0x0078(0x0010) (Edit, ZeroConstructor, EditConst)
	TMap<struct FString, struct FStringAssetReference> AssetReferences;                                          // 0x0088(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                NumActors;                                                // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	struct FStringAssetReference                       GeneratedBlueprintAssetReference;                         // 0x00E0(0x0010) (Edit, EditConst)
	TMap<struct FString, struct FPrefabOverride>       AssetPrefabOverrideMap;                                   // 0x00F0(0x0050) (Edit, ZeroConstructor, EditConst, DuplicateTransient)
	bool                                               bIsBaseBuilding;                                          // 0x0140(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsDestroyedPrefab;                                       // 0x0141(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               RemoveFromLevelLOD;                                       // 0x0142(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0143(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class PrefabAsset.PrefabAsset"));

		return ptr;
	}

};


// Class PrefabAsset.PrefabBuildingCreator
// 0x0068 (0x0468 - 0x0400)
class APrefabBuildingCreator : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0400(0x0008) MISSED OFFSET
	bool                                               bSpawnInOrder;                                            // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLockConfiguration;                                       // 0x0409(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x040A(0x0006) MISSED OFFSET
	TArray<class UPrefabAsset*>                        PrefabAssetList;                                          // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UPrefabAsset*>                        PrefabOverrides;                                          // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bUseRoofPrefab;                                           // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0431(0x0007) MISSED OFFSET
	class UPrefabAsset*                                RoofPrefab;                                               // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SpawnedRoofPrefab;                                        // 0x0440(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              SpawnedPrefabActors;                                      // 0x0448(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              FloorHeight;                                              // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseOffset;                                               // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumberOfFloors;                                           // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0464(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class PrefabAsset.PrefabBuildingCreator"));

		return ptr;
	}

};


// Class PrefabAsset.PrefabComponent
// 0x00E0 (0x0AB0 - 0x09D0)
class UPrefabComponent : public UPrimitiveComponent
{
public:
	TMap<struct FString, struct FPrefabOverride>       ComponentPrefabOverrideMap;                               // 0x09D0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	struct FVector                                     BoxSelectionScale;                                        // 0x0A20(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     SelectionBoxOffset;                                       // 0x0A2C(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      bLockSelection : 1;                                       // 0x0A38(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0A39(0x0007) MISSED OFFSET
	class UBlueprint*                                  GeneratedBlueprint;                                       // 0x0A40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UPrefabAsset*                                Prefab;                                                   // 0x0A48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TMap<struct FName, class AActor*>                  PrefabInstancesMap;                                       // 0x0A50(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, DuplicateTransient)
	unsigned char                                      bTransient : 1;                                           // 0x0AA0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0AA1(0x0003) MISSED OFFSET
	bool                                               bIsBaseBuilding;                                          // 0x0AA4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0AA5(0x0003) MISSED OFFSET
	uint32_t                                           HouseID;                                                  // 0x0AA8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDestroyedPrefab;                                       // 0x0AAC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0AAD(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class PrefabAsset.PrefabComponent"));

		return ptr;
	}

};


// Class PrefabAsset.PrefabToolSettings
// 0x0090 (0x00D0 - 0x0040)
class UPrefabToolSettings : public UObject
{
public:
	bool                                               bReplaceActorsWithCreatedPrefab;                          // 0x0040(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0041(0x0002) MISSED OFFSET
	bool                                               bShouldLockAllPrefabsOnMapOpen;                           // 0x0043(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	bool                                               bIsolateWhenEnteringPrefab;                               // 0x0048(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bExpandComponentDestroyAndConvert;                        // 0x0049(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bExpandComponentPivotAndSnap;                             // 0x004A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bExpandComponentCollapse;                                 // 0x004B(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bExpandComponentTSLSettings;                              // 0x004C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bExpandComponentSelectionSettings;                        // 0x004D(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bExpandComponentDestruction;                              // 0x004E(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bExpandComponentGeneratedBP;                              // 0x004F(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnablePrefabComponentVisualizer;                         // 0x0050(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	EPrefabVisualizerType                              PrefabComponentVisualizerType;                            // 0x0051(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bDisplayPrefabComponentVisualizerEvenNotSelected;         // 0x0052(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0053(0x0001) MISSED OFFSET
	struct FColor                                      PrefabViewVisualizerColor;                                // 0x0054(0x0004) (Edit, Config, IsPlainOldData)
	struct FColor                                      PrefabViewVisualizerColorBaseBuilding;                    // 0x0058(0x0004) (Edit, Config, IsPlainOldData)
	struct FColor                                      PrefabViewVisualizerColorDesignItems;                     // 0x005C(0x0004) (Edit, Config, IsPlainOldData)
	struct FColor                                      TargetActorColor;                                         // 0x0060(0x0004) (Edit, Config, IsPlainOldData)
	struct FColor                                      UnLockedConnectedColor;                                   // 0x0064(0x0004) (Edit, Config, IsPlainOldData)
	struct FColor                                      LockedConnectedColor;                                     // 0x0068(0x0004) (Edit, Config, IsPlainOldData)
	struct FColor                                      UnLockedDisConnectedColor;                                // 0x006C(0x0004) (Edit, Config, IsPlainOldData)
	struct FColor                                      LockedDisConnectedColor;                                  // 0x0070(0x0004) (Edit, Config, IsPlainOldData)
	struct FColor                                      UnLockedNoPrefabAssignedColor;                            // 0x0074(0x0004) (Edit, Config, IsPlainOldData)
	struct FColor                                      LockedNoPrefabAssignedColor;                              // 0x0078(0x0004) (Edit, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FStringAssetReference                       PrefabMaterialPath;                                       // 0x0080(0x0010) (Edit, Config)
	class UMaterial*                                   PrefabMaterial;                                           // 0x0090(0x0008) (Edit, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0098(0x0001) MISSED OFFSET
	bool                                               bDisableLockPrefabSelectionFeature;                       // 0x0099(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData05[0x30];                                      // 0x009A(0x0030) MISSED OFFSET
	bool                                               bLockPrefabChildSelection;                                // 0x00CA(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bDebugMode;                                               // 0x00CB(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bTransparentvisualizer;                                   // 0x00CC(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET

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
