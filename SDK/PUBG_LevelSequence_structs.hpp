#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Basic.hpp"
#include "PUBG_CoreUObject_classes.hpp"
#include "PUBG_MovieScene_classes.hpp"
#include "PUBG_Engine_classes.hpp"
#include "PUBG_UMG_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LevelSequence.LevelSequenceObjectReferenceMap
// 0x0050
struct FLevelSequenceObjectReferenceMap
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct LevelSequence.LevelSequenceBindingReference
// 0x0020
struct FLevelSequenceBindingReference
{
	struct FString                                     PackageName;                                              // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     ObjectPath;                                               // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct LevelSequence.LevelSequenceBindingReferenceArray
// 0x0010
struct FLevelSequenceBindingReferenceArray
{
	TArray<struct FLevelSequenceBindingReference>      References;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct LevelSequence.LevelSequenceBindingReferences
// 0x0050
struct FLevelSequenceBindingReferences
{
	TMap<struct FGuid, struct FLevelSequenceBindingReferenceArray> BindingIdToReferences;                                    // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct LevelSequence.LevelSequenceObject
// 0x0038
struct FLevelSequenceObject
{
	TLazyObjectPtr<class UObject>                      ObjectOrOwner;                                            // 0x0000(0x001C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     ComponentName;                                            // 0x0020(0x0010) (ZeroConstructor)
	TWeakObjectPtr<class UObject>                      CachedComponent;                                          // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct LevelSequence.LevelSequenceSnapshotSettings
// 0x0008
struct FLevelSequenceSnapshotSettings
{
	unsigned char                                      ZeroPadAmount;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              FrameRate;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct LevelSequence.LevelSequencePlayerSnapshot
// 0x0050
struct FLevelSequencePlayerSnapshot
{
	struct FText                                       MasterName;                                               // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	float                                              MasterTime;                                               // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FText                                       CurrentShotName;                                          // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	float                                              CurrentShotLocalTime;                                     // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	class UCameraComponent*                            CameraComponent;                                          // 0x0040(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FLevelSequenceSnapshotSettings              Settings;                                                 // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
};

// ScriptStruct LevelSequence.LevelSequenceLegacyObjectReference
// 0x0020
struct FLevelSequenceLegacyObjectReference
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct LevelSequence.BoundActorProxy
// 0x0001
struct FBoundActorProxy
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
