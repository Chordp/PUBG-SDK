#pragma once

// PUBG (7.2.8.10) SDK

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
// 0x0028 (0x0410 - 0x03E8)
class APrefabActor : public AActor
{
public:
	class UPrefabComponent*                            PrefabComponent;                                          // 0x03E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FText                                       BackupPrefabCopyData;                                     // 0x03F0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst)
	class ULODParentComponent*                         BuildingHLOD;                                             // 0x0408(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class PrefabAsset.PrefabActor"));

		return ptr;
	}


	void STATIC_SetPrefab(class UPrefabAsset* NewPrefab, bool bForceRevertEvenDisconnected);
	void STATIC_SetMobility(TEnumAsByte<EComponentMobility> InMobility);
	class UPrefabAsset* STATIC_GetPrefab();
	void STATIC_DestroyPrefabActor(bool bDestroyAttachedChildren);
};


// Class PrefabAsset.PrefabActorHolder
// 0x0000 (0x03E8 - 0x03E8)
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


	bool STATIC_WasRecentlyRendered(float Tolerance);
	void STATIC_UserConstructionScript();
	void STATIC_TearOff();
	void STATIC_SnapRootComponentTo(class AActor* InParentActor, const struct FName& InSocketName);
	void STATIC_SetTickGroup(TEnumAsByte<ETickingGroup> NewTickGroup);
	void STATIC_SetTickableWhenPaused(bool bTickableWhenPaused);
	void STATIC_SetReplicates(bool bInReplicates);
	void STATIC_SetReplicateMovement(bool bInReplicateMovement);
	void STATIC_SetOwner(class AActor* NewOwner);
	void STATIC_SetLifeSpan(float InLifespan);
	void STATIC_SetActorTickInterval(float TickInterval);
	void STATIC_SetActorTickEnabled(bool bEnabled);
	void STATIC_SetActorScale3D(const struct FVector& NewScale3D);
	void STATIC_SetActorRelativeScale3D(const struct FVector& NewRelativeScale);
	void STATIC_SetActorHiddenInGame(bool bNewHidden);
	void STATIC_SetActorEnableCollision(bool bNewActorEnableCollision);
	void STATIC_RemoveTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);
	void STATIC_RemoveTickPrerequisiteActor(class AActor* PrerequisiteActor);
	void STATIC_ReceiveTick(float DeltaSeconds);
	void STATIC_ReceiveRadialDamage(float DamageReceived, class UDamageType* DamageType, const struct FVector& Origin, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser);
	void STATIC_ReceivePointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo);
	void STATIC_ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void STATIC_ReceiveDestroyed();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void STATIC_ReceiveActorOnReleased(const struct FKey& ButtonReleased);
	void STATIC_ReceiveActorOnInputTouchLeave(TEnumAsByte<ETouchIndex> FingerIndex);
	void STATIC_ReceiveActorOnInputTouchEnter(TEnumAsByte<ETouchIndex> FingerIndex);
	void STATIC_ReceiveActorOnInputTouchEnd(TEnumAsByte<ETouchIndex> FingerIndex);
	void STATIC_ReceiveActorOnInputTouchBegin(TEnumAsByte<ETouchIndex> FingerIndex);
	void STATIC_ReceiveActorOnClicked(const struct FKey& ButtonPressed);
	void STATIC_ReceiveActorEndOverlap(class AActor* OtherActor);
	void STATIC_ReceiveActorEndCursorOver();
	void STATIC_ReceiveActorBeginOverlap(class AActor* OtherActor);
	void STATIC_ReceiveActorBeginCursorOver();
	void STATIC_OnRep_Role();
	void STATIC_OnRep_ReplicateMovement();
	void STATIC_OnRep_ReplicatedMovement();
	void STATIC_OnRep_Owner();
	void STATIC_OnRep_Instigator();
	void STATIC_OnRep_AttachmentReplication();
	void STATIC_MakeNoise(float Loudness, class APawn* NoiseInstigator, const struct FVector& NoiseLocation, float MaxRange, const struct FName& Tag);
	class UMaterialInstanceDynamic* STATIC_MakeMIDForMaterial(class UMaterialInterface* Parent);
	bool STATIC_K2_TeleportTo(const struct FVector& DestLocation, const struct FRotator& DestRotation);
	bool STATIC_K2_SetActorTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	bool STATIC_K2_SetActorRotation(const struct FRotator& NewRotation, bool bTeleportPhysics);
	void STATIC_K2_SetActorRelativeTransform(const struct FTransform& NewRelativeTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void STATIC_K2_SetActorRelativeRotation(const struct FRotator& NewRelativeRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void STATIC_K2_SetActorRelativeLocation(const struct FVector& NewRelativeLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	bool STATIC_K2_SetActorLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	bool STATIC_K2_SetActorLocation(const struct FVector& NewLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void STATIC_K2_OnReset();
	void STATIC_K2_OnEndViewTarget(class APlayerController* PC);
	void STATIC_K2_OnBecomeViewTarget(class APlayerController* PC);
	class USceneComponent* STATIC_K2_GetRootComponent();
	struct FRotator STATIC_K2_GetActorRotation();
	struct FVector STATIC_K2_GetActorLocation();
	void STATIC_K2_DetachFromActor(EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule);
	void STATIC_K2_DestroyComponent(class UActorComponent* Component);
	void STATIC_K2_DestroyActor();
	void STATIC_K2_AttachToComponent(class USceneComponent* Parent, const struct FName& SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);
	void STATIC_K2_AttachToActor(class AActor* ParentActor, const struct FName& SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);
	void STATIC_K2_AttachRootComponentToActor(class AActor* InParentActor, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> AttachLocationType, bool bWeldSimulatedBodies);
	void STATIC_K2_AttachRootComponentTo(class USceneComponent* InParent, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> AttachLocationType, bool bWeldSimulatedBodies);
	void STATIC_K2_AddActorWorldTransform(const struct FTransform& DeltaTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void STATIC_K2_AddActorWorldRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void STATIC_K2_AddActorWorldOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void STATIC_K2_AddActorLocalTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void STATIC_K2_AddActorLocalRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void STATIC_K2_AddActorLocalOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	bool STATIC_IsOverlappingActor(class AActor* Other);
	bool STATIC_IsChildActor();
	bool STATIC_IsActorTickEnabled();
	bool STATIC_IsActorBeingDestroyed();
	bool STATIC_HasAuthority();
	float STATIC_GetVerticalDistanceTo(class AActor* OtherActor);
	struct FVector STATIC_GetVelocity();
	struct FTransform STATIC_GetTransform();
	bool STATIC_GetTickableWhenPaused();
	float STATIC_GetSquaredDistanceTo(class AActor* OtherActor);
	TEnumAsByte<ENetRole> STATIC_GetRemoteRole();
	class UChildActorComponent* STATIC_GetParentComponent();
	class AActor* STATIC_GetParentActor();
	class AActor* STATIC_GetOwner();
	void STATIC_GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OverlappingComponents);
	void STATIC_GetOverlappingActors(class UClass* ClassFilter, TArray<class AActor*>* OverlappingActors);
	float STATIC_GetLifeSpan();
	class AController* STATIC_GetInstigatorController();
	class APawn* STATIC_GetInstigator();
	struct FVector STATIC_GetInputVectorAxisValue(const struct FKey& InputAxisKey);
	float STATIC_GetInputAxisValue(const struct FName& InputAxisName);
	float STATIC_GetInputAxisKeyValue(const struct FKey& InputAxisKey);
	float STATIC_GetHorizontalDotProductTo(class AActor* OtherActor);
	float STATIC_GetHorizontalDistanceTo(class AActor* OtherActor);
	float STATIC_GetGameTimeSinceCreation();
	float STATIC_GetDotProductTo(class AActor* OtherActor);
	float STATIC_GetDistanceTo(class AActor* OtherActor);
	TArray<class UActorComponent*> STATIC_GetComponentsByTag(class UClass* ComponentClass, const struct FName& Tag);
	TArray<class UActorComponent*> STATIC_GetComponentsByClass(class UClass* ComponentClass);
	class UActorComponent* STATIC_GetComponentByClass(class UClass* ComponentClass);
	struct FName STATIC_GetAttachParentSocketName();
	class AActor* STATIC_GetAttachParentActor();
	void STATIC_GetAttachedActors(TArray<class AActor*>* OutActors);
	void STATIC_GetAllChildActors(bool bIncludeDescendants, TArray<class AActor*>* ChildActors);
	struct FVector STATIC_GetActorUpVector();
	float STATIC_GetActorTimeDilation();
	float STATIC_GetActorTickInterval();
	struct FVector STATIC_GetActorScale3D();
	struct FVector STATIC_GetActorRightVector();
	struct FVector STATIC_GetActorRelativeScale3D();
	struct FVector STATIC_GetActorForwardVector();
	void STATIC_GetActorEyesViewPoint(struct FVector* OutLocation, struct FRotator* OutRotation);
	bool STATIC_GetActorEnableCollision();
	void STATIC_GetActorBounds(bool bOnlyCollidingComponents, struct FVector* Origin, struct FVector* BoxExtent);
	void STATIC_ForceNetUpdate();
	void STATIC_FlushNetDormancy();
	void STATIC_EnableInput(class APlayerController* PlayerController);
	void STATIC_DisableInput(class APlayerController* PlayerController);
	void STATIC_DetachRootComponentFromParent(bool bMaintainWorldPosition);
	void STATIC_AddTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);
	void STATIC_AddTickPrerequisiteActor(class AActor* PrerequisiteActor);
	class UActorComponent* STATIC_AddComponent(const struct FName& TemplateName, bool bManualAttachment, const struct FTransform& RelativeTransform, class UObject* ComponentTemplateContext);
	bool STATIC_ActorHasTag(const struct FName& Tag);
};


// Class PrefabAsset.PrefabLODHolder
// 0x0010 (0x03F8 - 0x03E8)
class APrefabLODHolder : public APrefabActorHolder
{
public:
	class ULODParentComponent*                         HLODParentComponent;                                      // 0x03E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMesh*                                 LevelLODMesh;                                             // 0x03F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class PrefabAsset.PrefabLODHolder"));

		return ptr;
	}

};


// Class PrefabAsset.PrefabAsset
// 0x0108 (0x0138 - 0x0030)
class UPrefabAsset : public UObject
{
public:
	struct FGuid                                       PrefabId;                                                 // 0x0030(0x0010) (Edit, EditConst, IsPlainOldData)
	struct FText                                       PrefabContent;                                            // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector                                     PrefabPivot;                                              // 0x0058(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FString                                     PrefabHash;                                               // 0x0068(0x0010) (Edit, ZeroConstructor, EditConst)
	TMap<struct FString, struct FStringAssetReference> AssetReferences;                                          // 0x0078(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                NumActors;                                                // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	struct FStringAssetReference                       GeneratedBlueprintAssetReference;                         // 0x00D0(0x0010) (Edit, EditConst)
	TMap<struct FString, struct FPrefabOverride>       SavedPrefabOverrideMap;                                   // 0x00E0(0x0050) (Edit, ZeroConstructor, EditConst, DuplicateTransient)
	bool                                               bIsBaseBuilding;                                          // 0x0130(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsDestroyedPrefab;                                       // 0x0131(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               RemoveFromLevelLOD;                                       // 0x0132(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0133(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class PrefabAsset.PrefabAsset"));

		return ptr;
	}

};


// Class PrefabAsset.PrefabComponent
// 0x00D0 (0x0A90 - 0x09C0)
class UPrefabComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x09C0(0x0008) MISSED OFFSET
	struct FVector                                     SelectionBoxOffset;                                       // 0x09C8(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      bLockSelection : 1;                                       // 0x09D4(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x09D5(0x0003) MISSED OFFSET
	class UBlueprint*                                  GeneratedBlueprint;                                       // 0x09D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UPrefabAsset*                                Prefab;                                                   // 0x09E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TMap<struct FName, class AActor*>                  PrefabInstancesMap;                                       // 0x09E8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, DuplicateTransient)
	TMap<struct FString, struct FPrefabOverride>       PrefabOverrideMap;                                        // 0x0A38(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst)
	unsigned char                                      bTransient : 1;                                           // 0x0A88(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0A89(0x0003) MISSED OFFSET
	bool                                               bIsBaseBuilding;                                          // 0x0A8C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bIsDestroyedPrefab;                                       // 0x0A8D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bKeepOverrides;                                           // 0x0A8E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideLightSettings;                                   // 0x0A8F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class PrefabAsset.PrefabComponent"));

		return ptr;
	}

};


// Class PrefabAsset.PrefabToolSettings
// 0x0088 (0x00B8 - 0x0030)
class UPrefabToolSettings : public UObject
{
public:
	bool                                               bReplaceActorsWithCreatedPrefab;                          // 0x0030(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	bool                                               bIsolateWhenEnteringPrefab;                               // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnablePrefabComponentVisualizer;                         // 0x0039(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	EPrefabVisualizerType                              PrefabComponentVisualizerType;                            // 0x003A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bDisplayPrefabComponentVisualizerEvenNotSelected;         // 0x003B(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FColor                                      PrefabViewVisualizerColor;                                // 0x003C(0x0004) (Edit, Config, IsPlainOldData)
	struct FColor                                      PrefabViewVisualizerColorBaseBuilding;                    // 0x0040(0x0004) (Edit, Config, IsPlainOldData)
	struct FColor                                      TargetActorColor;                                         // 0x0044(0x0004) (Edit, Config, IsPlainOldData)
	struct FColor                                      UnLockedConnectedColor;                                   // 0x0048(0x0004) (Edit, Config, IsPlainOldData)
	struct FColor                                      LockedConnectedColor;                                     // 0x004C(0x0004) (Edit, Config, IsPlainOldData)
	struct FColor                                      UnLockedDisConnectedColor;                                // 0x0050(0x0004) (Edit, Config, IsPlainOldData)
	struct FColor                                      LockedDisConnectedColor;                                  // 0x0054(0x0004) (Edit, Config, IsPlainOldData)
	struct FColor                                      UnLockedNoPrefabAssignedColor;                            // 0x0058(0x0004) (Edit, Config, IsPlainOldData)
	struct FColor                                      LockedNoPrefabAssignedColor;                              // 0x005C(0x0004) (Edit, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0060(0x0008) MISSED OFFSET
	struct FStringAssetReference                       PrefabMaterialPath;                                       // 0x0068(0x0010) (Edit, Config)
	class UMaterial*                                   PrefabMaterial;                                           // 0x0078(0x0008) (Edit, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0080(0x0001) MISSED OFFSET
	bool                                               bDisableLockPrefabSelectionFeature;                       // 0x0081(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x30];                                      // 0x0082(0x0030) MISSED OFFSET
	bool                                               bLockPrefabChildSelection;                                // 0x00B2(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bDebugMode;                                               // 0x00B3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bTransparentvisualizer;                                   // 0x00B4(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00B5(0x0003) MISSED OFFSET

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
