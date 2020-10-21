#pragma once

// PUBG (9.1.5.3) SDK

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
// 0x0030 (0x0440 - 0x0410)
class APrefabActor : public AActor
{
public:
	class UPrefabComponent*                            PrefabComponent;                                          // 0x0410(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FText                                       BackupPrefabCopyData;                                     // 0x0418(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst)
	bool                                               bKeepOverrides;                                           // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0431(0x0007) MISSED OFFSET
	class ULODParentComponent*                         BuildingHLOD;                                             // 0x0438(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData)

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
// 0x0000 (0x0410 - 0x0410)
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


	bool WasRecentlyRendered(float Tolerance);
	void UserConstructionScript();
	void TearOff();
	void SnapRootComponentTo(class AActor* InParentActor, const struct FName& InSocketName);
	void SetTickGroup(TEnumAsByte<ETickingGroup> NewTickGroup);
	void SetTickableWhenPaused(bool bTickableWhenPaused);
	void SetReplicates(bool bInReplicates);
	void SetReplicateMovement(bool bInReplicateMovement);
	void SetOwner(class AActor* NewOwner);
	void SetLifeSpan(float InLifespan);
	void SetActorTickInterval(float TickInterval);
	void SetActorTickEnabled(bool bEnabled);
	void SetActorScale3D(const struct FVector& NewScale3D);
	void SetActorRelativeScale3D(const struct FVector& NewRelativeScale);
	void SetActorHiddenInGame(bool bNewHidden);
	void SetActorEnableCollision(bool bNewActorEnableCollision);
	void RemoveTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);
	void RemoveTickPrerequisiteActor(class AActor* PrerequisiteActor);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveRadialDamage(float DamageReceived, class UDamageType* DamageType, const struct FVector& Origin, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser);
	void ReceivePointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ReceiveActorOnReleased(const struct FKey& ButtonReleased);
	void ReceiveActorOnInputTouchLeave(TEnumAsByte<ETouchIndex> FingerIndex);
	void ReceiveActorOnInputTouchEnter(TEnumAsByte<ETouchIndex> FingerIndex);
	void ReceiveActorOnInputTouchEnd(TEnumAsByte<ETouchIndex> FingerIndex);
	void ReceiveActorOnInputTouchBegin(TEnumAsByte<ETouchIndex> FingerIndex);
	void ReceiveActorOnClicked(const struct FKey& ButtonPressed);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void ReceiveActorEndCursorOver();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveActorBeginCursorOver();
	void OnRep_Role();
	void OnRep_ReplicateMovement();
	void OnRep_ReplicatedMovement();
	void OnRep_Owner();
	void OnRep_Instigator();
	void OnRep_AttachmentReplication();
	void MakeNoise(float Loudness, class APawn* NoiseInstigator, const struct FVector& NoiseLocation, float MaxRange, const struct FName& Tag);
	class UMaterialInstanceDynamic* MakeMIDForMaterial(class UMaterialInterface* Parent);
	bool K2_TeleportTo(const struct FVector& DestLocation, const struct FRotator& DestRotation);
	bool K2_SetActorTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	bool K2_SetActorRotation(const struct FRotator& NewRotation, bool bTeleportPhysics);
	void K2_SetActorRelativeTransform(const struct FTransform& NewRelativeTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetActorRelativeRotation(const struct FRotator& NewRelativeRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetActorRelativeLocation(const struct FVector& NewRelativeLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	bool K2_SetActorLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	bool K2_SetActorLocation(const struct FVector& NewLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_OnReset();
	void K2_OnEndViewTarget(class APlayerController* PC);
	void K2_OnBecomeViewTarget(class APlayerController* PC);
	class USceneComponent* K2_GetRootComponent();
	struct FRotator K2_GetActorRotation();
	struct FVector K2_GetActorLocation();
	void K2_DetachFromActor(EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule);
	void K2_DestroyComponent(class UActorComponent* Component);
	void K2_DestroyActor();
	void K2_AttachToComponent(class USceneComponent* Parent, const struct FName& SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);
	void K2_AttachToActor(class AActor* ParentActor, const struct FName& SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);
	void K2_AttachRootComponentToActor(class AActor* InParentActor, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> AttachLocationType, bool bWeldSimulatedBodies);
	void K2_AttachRootComponentTo(class USceneComponent* InParent, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> AttachLocationType, bool bWeldSimulatedBodies);
	void K2_AddActorWorldTransform(const struct FTransform& DeltaTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorWorldRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorWorldOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorLocalTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorLocalRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorLocalOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	bool IsOverlappingActor(class AActor* Other);
	bool IsChildActor();
	bool IsActorTickEnabled();
	bool IsActorBeingDestroyed();
	bool HasAuthority();
	float GetVerticalDistanceTo(class AActor* OtherActor);
	struct FVector GetVelocity();
	struct FTransform GetTransform();
	bool GetTickableWhenPaused();
	float GetSquaredDistanceTo(class AActor* OtherActor);
	TEnumAsByte<ENetRole> GetRemoteRole();
	class UChildActorComponent* GetParentComponent();
	class AActor* GetParentActor();
	class AActor* GetOwner();
	void GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OverlappingComponents);
	void GetOverlappingActors(class UClass* ClassFilter, TArray<class AActor*>* OverlappingActors);
	float GetLifeSpan();
	class AController* GetInstigatorController();
	class APawn* GetInstigator();
	struct FVector GetInputVectorAxisValue(const struct FKey& InputAxisKey);
	float GetInputAxisValue(const struct FName& InputAxisName);
	float GetInputAxisKeyValue(const struct FKey& InputAxisKey);
	float GetHorizontalDotProductTo(class AActor* OtherActor);
	float GetHorizontalDistanceTo(class AActor* OtherActor);
	float GetGameTimeSinceCreation();
	float GetDotProductTo(class AActor* OtherActor);
	float GetDistanceTo(class AActor* OtherActor);
	TArray<class UActorComponent*> GetComponentsByTag(class UClass* ComponentClass, const struct FName& Tag);
	TArray<class UActorComponent*> GetComponentsByClass(class UClass* ComponentClass);
	class UActorComponent* GetComponentByClass(class UClass* ComponentClass);
	struct FName GetAttachParentSocketName();
	class AActor* GetAttachParentActor();
	void GetAttachedActors(TArray<class AActor*>* OutActors);
	void GetAllChildActors(bool bIncludeDescendants, TArray<class AActor*>* ChildActors);
	struct FVector GetActorUpVector();
	float GetActorTimeDilation();
	float GetActorTickInterval();
	struct FVector GetActorScale3D();
	struct FVector GetActorRightVector();
	struct FVector GetActorRelativeScale3D();
	struct FVector GetActorForwardVector();
	void GetActorEyesViewPoint(struct FVector* OutLocation, struct FRotator* OutRotation);
	bool GetActorEnableCollision();
	void GetActorBounds(bool bOnlyCollidingComponents, struct FVector* Origin, struct FVector* BoxExtent);
	void ForceNetUpdate();
	void FlushNetDormancy();
	void EnableInput(class APlayerController* PlayerController);
	void DisableInput(class APlayerController* PlayerController);
	void DetachRootComponentFromParent(bool bMaintainWorldPosition);
	void AddTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);
	void AddTickPrerequisiteActor(class AActor* PrerequisiteActor);
	class UActorComponent* AddComponent(const struct FName& TemplateName, bool bManualAttachment, const struct FTransform& RelativeTransform, class UObject* ComponentTemplateContext);
	bool ActorHasTag(const struct FName& Tag);
};


// Class PrefabAsset.PrefabLODHolder
// 0x0010 (0x0420 - 0x0410)
class APrefabLODHolder : public APrefabActorHolder
{
public:
	class ULODParentComponent*                         HLODParentComponent;                                      // 0x0410(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMesh*                                 LevelLODMesh;                                             // 0x0418(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

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
// 0x0068 (0x0478 - 0x0410)
class APrefabBuildingCreator : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0410(0x0008) MISSED OFFSET
	bool                                               bSpawnInOrder;                                            // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLockConfiguration;                                       // 0x0419(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x041A(0x0006) MISSED OFFSET
	TArray<class UPrefabAsset*>                        PrefabAssetList;                                          // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UPrefabAsset*>                        PrefabOverrides;                                          // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bUseRoofPrefab;                                           // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0441(0x0007) MISSED OFFSET
	class UPrefabAsset*                                RoofPrefab;                                               // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SpawnedRoofPrefab;                                        // 0x0450(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              SpawnedPrefabActors;                                      // 0x0458(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              FloorHeight;                                              // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseOffset;                                               // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumberOfFloors;                                           // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0474(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class PrefabAsset.PrefabBuildingCreator"));

		return ptr;
	}

};


// Class PrefabAsset.PrefabComponent
// 0x00E0 (0x0A90 - 0x09B0)
class UPrefabComponent : public UPrimitiveComponent
{
public:
	TMap<struct FString, struct FPrefabOverride>       ComponentPrefabOverrideMap;                               // 0x09B0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	struct FVector                                     BoxSelectionScale;                                        // 0x0A00(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     SelectionBoxOffset;                                       // 0x0A0C(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      bLockSelection : 1;                                       // 0x0A18(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0A19(0x0007) MISSED OFFSET
	class UBlueprint*                                  GeneratedBlueprint;                                       // 0x0A20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UPrefabAsset*                                Prefab;                                                   // 0x0A28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TMap<struct FName, class AActor*>                  PrefabInstancesMap;                                       // 0x0A30(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, DuplicateTransient)
	unsigned char                                      bTransient : 1;                                           // 0x0A80(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0A81(0x0003) MISSED OFFSET
	bool                                               bIsBaseBuilding;                                          // 0x0A84(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0A85(0x0003) MISSED OFFSET
	uint32_t                                           HouseID;                                                  // 0x0A88(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDestroyedPrefab;                                       // 0x0A8C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0A8D(0x0003) MISSED OFFSET

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
