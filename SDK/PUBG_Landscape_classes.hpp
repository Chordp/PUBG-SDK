#pragma once

// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Landscape_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Landscape.ControlPointMeshComponent
// 0x0000 (0x0B50 - 0x0B50)
class UControlPointMeshComponent : public UStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.ControlPointMeshComponent"));

		return ptr;
	}


	bool STATIC_SetStaticMesh(class UStaticMesh* NewMesh);
	void STATIC_SetForcedLodModel(int NewForcedLodModel);
	void STATIC_OnRep_StaticMesh(class UStaticMesh* OldStaticMesh);
	void STATIC_GetLocalBounds(struct FVector* Min, struct FVector* Max);
};


// Class Landscape.LandscapeComponent
// 0x0170 (0x0B30 - 0x09C0)
class ULandscapeComponent : public UPrimitiveComponent
{
public:
	int                                                ComponentSizeQuads;                                       // 0x09C0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x09C4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumSubsections;                                           // 0x09C8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x09CC(0x0004) MISSED OFFSET
	class UMaterialInterface*                          OverrideMaterial;                                         // 0x09D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          OverrideHoleMaterial;                                     // 0x09D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceConstant*>           MaterialInstances;                                        // 0x09E0(0x0010) (ZeroConstructor)
	TArray<struct FWeightmapLayerAllocationInfo>       WeightmapLayerAllocations;                                // 0x09F0(0x0010) (ZeroConstructor)
	TArray<class UTexture2D*>                          WeightmapTextures;                                        // 0x0A00(0x0010) (ZeroConstructor)
	class UTexture2D*                                  XYOffsetmapTexture;                                       // 0x0A10(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0A18(0x0008) MISSED OFFSET
	struct FVector4                                    WeightmapScaleBias;                                       // 0x0A20(0x0010) (IsPlainOldData)
	float                                              WeightmapSubsectionOffset;                                // 0x0A30(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0A34(0x000C) MISSED OFFSET
	struct FVector4                                    HeightmapScaleBias;                                       // 0x0A40(0x0010) (IsPlainOldData)
	class UTexture2D*                                  HeightmapTexture;                                         // 0x0A50(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FBox                                        CachedLocalBox;                                           // 0x0A58(0x001C) (IsPlainOldData)
	TLazyObjectPtr<class ULandscapeHeightfieldCollisionComponent> CollisionComponent;                                       // 0x0A74(0x001C) (ExportObject, InstancedReference, IsPlainOldData)
	struct FGuid                                       MapBuildDataId;                                           // 0x0A90(0x0010) (IsPlainOldData)
	TArray<struct FGuid>                               IrrelevantLights;                                         // 0x0AA0(0x0010) (ZeroConstructor, Deprecated)
	int                                                CollisionMipLevel;                                        // 0x0AB0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SimpleCollisionMipLevel;                                  // 0x0AB4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NegativeZBoundsExtension;                                 // 0x0AB8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PositiveZBoundsExtension;                                 // 0x0ABC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StaticLightingResolution;                                 // 0x0AC0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ForcedLOD;                                                // 0x0AC4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LODBias;                                                  // 0x0AC8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       StateId;                                                  // 0x0ACC(0x0010) (IsPlainOldData)
	struct FGuid                                       BakedTextureMaterialGuid;                                 // 0x0ADC(0x0010) (IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0AEC(0x0004) MISSED OFFSET
	class UTexture2D*                                  GIBakedBaseColorTexture;                                  // 0x0AF0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bRemoveGrass;                                             // 0x0AF8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MobileBlendableLayerMask;                                 // 0x0AF9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x0AFA(0x0006) MISSED OFFSET
	class UMaterialInterface*                          MobileMaterialInterface;                                  // 0x0B00(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  MobileWeightNormalmapTexture;                             // 0x0B08(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x20];                                      // 0x0B10(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeComponent"));

		return ptr;
	}

};


// Class Landscape.LandscapeGizmoActor
// 0x0000 (0x03E8 - 0x03E8)
class ALandscapeGizmoActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeGizmoActor"));

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


// Class Landscape.LandscapeGizmoActiveActor
// 0x0050 (0x0438 - 0x03E8)
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x03E8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeGizmoActiveActor"));

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


// Class Landscape.LandscapeGizmoRenderComponent
// 0x0000 (0x09C0 - 0x09C0)
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeGizmoRenderComponent"));

		return ptr;
	}


	void STATIC_WakeRigidBody(const struct FName& BoneName);
	void STATIC_WakeAllRigidBodies();
	void STATIC_SetWalkableSlopeOverride(const struct FWalkableSlopeOverride& NewOverride);
	void STATIC_SetUseCCD(bool InUseCCD, const struct FName& BoneName);
	void STATIC_SetTranslucentSortPriority(int NewTranslucentSortPriority);
	void STATIC_SetSimulatePhysics(bool bSimulate);
	void STATIC_SetRenderInMono(bool bValue);
	void STATIC_SetRenderInMainPass(bool bValue);
	void STATIC_SetRenderCustomDepth(bool bValue);
	void STATIC_SetPhysMaterialOverride(class UPhysicalMaterial* NewPhysMaterial);
	void STATIC_SetPhysicsMaxAngularVelocity(float NewMaxAngVel, bool bAddToCurrent, const struct FName& BoneName);
	void STATIC_SetPhysicsLinearVelocity(const struct FVector& NewVel, bool bAddToCurrent, const struct FName& BoneName);
	void STATIC_SetPhysicsAngularVelocity(const struct FVector& NewAngVel, bool bAddToCurrent, const struct FName& BoneName);
	void STATIC_SetOwnerNoSee(bool bNewOwnerNoSee);
	void STATIC_SetOnlyOwnerSee(bool bNewOnlyOwnerSee);
	void STATIC_SetNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision);
	void STATIC_SetMaterialByName(const struct FName& MaterialSlotName, class UMaterialInterface* Material);
	void STATIC_SetMaterial(int ElementIndex, class UMaterialInterface* Material);
	void STATIC_SetMassScale(const struct FName& BoneName, float InMassScale);
	void STATIC_SetMassOverrideInKg(const struct FName& BoneName, float MassInKg, bool bOverrideMass);
	void STATIC_SetLockedAxis(TEnumAsByte<EDOFMode> LockedAxis);
	void STATIC_SetLinearDamping(float InDamping);
	void STATIC_SetEnableGravity(bool bGravityEnabled);
	void STATIC_SetCustomDepthStencilWriteMask(ERendererStencilMask WriteMaskBit);
	void STATIC_SetCustomDepthStencilValue(int Value);
	void STATIC_SetCullDistance(float NewCullDistance);
	void STATIC_SetConstraintMode(TEnumAsByte<EDOFMode> ConstraintMode);
	void STATIC_SetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> NewResponse);
	void STATIC_SetCollisionResponseToAllChannels(TEnumAsByte<ECollisionResponse> NewResponse);
	void STATIC_SetCollisionProfileName(const struct FName& InCollisionProfileName);
	void STATIC_SetCollisionObjectType(TEnumAsByte<ECollisionChannel> Channel);
	void STATIC_SetCollisionEnabled(TEnumAsByte<ECollisionEnabled> NewType);
	void STATIC_SetCenterOfMass(const struct FVector& CenterOfMassOffset, const struct FName& BoneName);
	void STATIC_SetCastShadow(bool NewCastShadow);
	void STATIC_SetBoundsScale(float NewBoundsScale);
	void STATIC_SetAngularDamping(float InDamping);
	void STATIC_SetAllUseCCD(bool InUseCCD);
	void STATIC_SetAllPhysicsLinearVelocity(const struct FVector& NewVel, bool bAddToCurrent);
	void STATIC_SetAllPhysicsAngularVelocity(const struct FVector& NewAngVel, bool bAddToCurrent);
	void STATIC_SetAllMassScale(float InMassScale);
	struct FVector STATIC_ScaleByMomentOfInertia(const struct FVector& InputVector, const struct FName& BoneName);
	void STATIC_PutRigidBodyToSleep(const struct FName& BoneName);
	bool STATIC_K2_LineTraceComponent(const struct FVector& TraceStart, const struct FVector& TraceEnd, bool bTraceComplex, bool bShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit);
	bool STATIC_K2_IsQueryCollisionEnabled();
	bool STATIC_K2_IsPhysicsCollisionEnabled();
	bool STATIC_K2_IsCollisionEnabled();
	bool STATIC_IsOverlappingComponent(class UPrimitiveComponent* OtherComp);
	bool STATIC_IsOverlappingActor(class AActor* Other);
	bool STATIC_IsGravityEnabled();
	bool STATIC_IsAnyRigidBodyAwake();
	void STATIC_IgnoreComponentWhenMoving(class UPrimitiveComponent* Component, bool bShouldIgnore);
	void STATIC_IgnoreActorWhenMoving(class AActor* Actor, bool bShouldIgnore);
	struct FWalkableSlopeOverride STATIC_GetWalkableSlopeOverride();
	struct FVector STATIC_GetPhysicsLinearVelocityAtPoint(const struct FVector& Point, const struct FName& BoneName);
	struct FVector STATIC_GetPhysicsLinearVelocity(const struct FName& BoneName);
	struct FVector STATIC_GetPhysicsAngularVelocity(const struct FName& BoneName);
	void STATIC_GetOverlappingComponents(TArray<class UPrimitiveComponent*>* InOverlappingComponents);
	void STATIC_GetOverlappingActors(class UClass* ClassFilter, TArray<class AActor*>* OverlappingActors);
	TArray<struct FOverlapInfo> STATIC_GetOverlapInfos();
	int STATIC_GetNumMaterials();
	class UMaterialInterface* STATIC_GetMaterialFromCollisionFaceIndex(int FaceIndex);
	class UMaterialInterface* STATIC_GetMaterial(int ElementIndex);
	float STATIC_GetMassScale(const struct FName& BoneName);
	float STATIC_GetMass();
	float STATIC_GetLinearDamping();
	struct FVector STATIC_GetInertiaTensor(const struct FName& BoneName);
	TEnumAsByte<ECollisionResponse> STATIC_GetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel);
	struct FName STATIC_GetCollisionProfileName();
	TEnumAsByte<ECollisionChannel> STATIC_GetCollisionObjectType();
	TEnumAsByte<ECollisionEnabled> STATIC_GetCollisionEnabled();
	float STATIC_GetClosestPointOnCollision(const struct FVector& Point, const struct FName& BoneName, struct FVector* OutPointOnBody);
	struct FVector STATIC_GetCenterOfMass(const struct FName& BoneName);
	float STATIC_GetAngularDamping();
	class UMaterialInstanceDynamic* STATIC_CreateDynamicMaterialInstance(int ElementIndex, class UMaterialInterface* SourceMaterial);
	class UMaterialInstanceDynamic* STATIC_CreateAndSetMaterialInstanceDynamicFromMaterial(int ElementIndex, class UMaterialInterface* Parent);
	class UMaterialInstanceDynamic* STATIC_CreateAndSetMaterialInstanceDynamic(int ElementIndex);
	TArray<class UPrimitiveComponent*> STATIC_CopyArrayOfMoveIgnoreComponents();
	TArray<class AActor*> STATIC_CopyArrayOfMoveIgnoreActors();
	void STATIC_ClearMoveIgnoreComponents();
	void STATIC_ClearMoveIgnoreActors();
	bool STATIC_CanCharacterStepUp(class APawn* Pawn);
	void STATIC_AddTorque(const struct FVector& Torque, const struct FName& BoneName, bool bAccelChange);
	void STATIC_AddRadialImpulse(const struct FVector& Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff, bool bVelChange);
	void STATIC_AddRadialForce(const struct FVector& Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff, bool bAccelChange);
	void STATIC_AddImpulseAtLocation(const struct FVector& Impulse, const struct FVector& Location, const struct FName& BoneName);
	void STATIC_AddImpulse(const struct FVector& Impulse, const struct FName& BoneName, bool bVelChange);
	void STATIC_AddForceAtLocationLocal(const struct FVector& force, const struct FVector& Location, const struct FName& BoneName);
	void STATIC_AddForceAtLocation(const struct FVector& force, const struct FVector& Location, const struct FName& BoneName);
	void STATIC_AddForce(const struct FVector& force, const struct FName& BoneName, bool bAccelChange);
	void STATIC_AddAngularImpulse(const struct FVector& Impulse, const struct FName& BoneName, bool bVelChange);
};


// Class Landscape.LandscapeGrassType
// 0x0038 (0x0068 - 0x0030)
class ULandscapeGrassType : public UObject
{
public:
	TArray<struct FGrassVariety>                       GrassVarieties;                                           // 0x0030(0x0010) (Edit, ZeroConstructor)
	class UStaticMesh*                                 GrassMesh;                                                // 0x0040(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              GrassDensity;                                             // 0x0048(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PlacementJitter;                                          // 0x004C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                StartCullDistance;                                        // 0x0050(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                EndCullDistance;                                          // 0x0054(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               RandomRotation;                                           // 0x0058(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               AlignToSurface;                                           // 0x0059(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x005A(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeGrassType"));

		return ptr;
	}

};


// Class Landscape.LandscapeHeightfieldCollisionComponent
// 0x00E0 (0x0AA0 - 0x09C0)
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x09C0(0x0008) MISSED OFFSET
	int                                                SectionBaseX;                                             // 0x09C8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SectionBaseY;                                             // 0x09CC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CollisionSizeQuads;                                       // 0x09D0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionScale;                                           // 0x09D4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SimpleCollisionSizeQuads;                                 // 0x09D8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x09DC(0x0004) MISSED OFFSET
	TArray<unsigned char>                              CollisionQuadFlags;                                       // 0x09E0(0x0010) (ZeroConstructor)
	struct FGuid                                       HeightfieldGuid;                                          // 0x09F0(0x0010) (IsPlainOldData)
	struct FBox                                        CachedLocalBox;                                           // 0x0A00(0x001C) (IsPlainOldData)
	TLazyObjectPtr<class ULandscapeComponent>          RenderComponent;                                          // 0x0A1C(0x001C) (ExportObject, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0A38(0x0010) MISSED OFFSET
	TArray<class UPhysicalMaterial*>                   CookedPhysicalMaterials;                                  // 0x0A48(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x48];                                      // 0x0A58(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeHeightfieldCollisionComponent"));

		return ptr;
	}

};


// Class Landscape.LandscapeMeshCollisionComponent
// 0x0010 (0x0AB0 - 0x0AA0)
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0AA0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeMeshCollisionComponent"));

		return ptr;
	}

};


// Class Landscape.LandscapeInfo
// 0x01D8 (0x0208 - 0x0030)
class ULandscapeInfo : public UObject
{
public:
	TLazyObjectPtr<class ALandscape>                   LandscapeActor;                                           // 0x0030(0x001C) (IsPlainOldData)
	struct FGuid                                       LandscapeGuid;                                            // 0x004C(0x0010) (IsPlainOldData)
	int                                                ComponentSizeQuads;                                       // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ComponentNumSubsections;                                  // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     DrawScale;                                                // 0x0068(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x54];                                      // 0x0074(0x0054) MISSED OFFSET
	unsigned char                                      UnknownData01[0x50];                                      // 0x0074(0x0050) UNKNOWN PROPERTY: SetProperty Landscape.LandscapeInfo.Proxies
	unsigned char                                      UnknownData02[0xF0];                                      // 0x0118(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeInfo"));

		return ptr;
	}

};


// Class Landscape.LandscapeInfoMap
// 0x0050 (0x0080 - 0x0030)
class ULandscapeInfoMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeInfoMap"));

		return ptr;
	}

};


// Class Landscape.LandscapeLayerInfoObject
// 0x0028 (0x0058 - 0x0030)
class ULandscapeLayerInfoObject : public UObject
{
public:
	struct FName                                       LayerName;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class UPhysicalMaterial*                           PhysMaterial;                                             // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Hardness;                                                 // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LayerUsageDebugColor;                                     // 0x0044(0x0010) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeLayerInfoObject"));

		return ptr;
	}

};


// Class Landscape.LandscapeMaterialInstanceConstant
// 0x0008 (0x01F0 - 0x01E8)
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{
public:
	unsigned char                                      bIsLayerThumbnail : 1;                                    // 0x01E8(0x0001)
	unsigned char                                      bDisableTessellation : 1;                                 // 0x01E8(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01E9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeMaterialInstanceConstant"));

		return ptr;
	}

};


// Class Landscape.LandscapeMeshProxyActor
// 0x0008 (0x03F0 - 0x03E8)
class ALandscapeMeshProxyActor : public AActor
{
public:
	class ULandscapeMeshProxyComponent*                LandscapeMeshProxyComponent;                              // 0x03E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeMeshProxyActor"));

		return ptr;
	}

};


// Class Landscape.LandscapeMeshProxyComponent
// 0x0030 (0x0B80 - 0x0B50)
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{
public:
	struct FGuid                                       LandscapeGuid;                                            // 0x0B50(0x0010) (IsPlainOldData)
	TArray<struct FIntPoint>                           ProxyComponentBases;                                      // 0x0B60(0x0010) (ZeroConstructor)
	int8_t                                             ProxyLOD;                                                 // 0x0B70(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0B71(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeMeshProxyComponent"));

		return ptr;
	}

};


// Class Landscape.LandscapeProxy
// 0x0468 (0x0850 - 0x03E8)
class ALandscapeProxy : public AActor
{
public:
	class ULandscapeSplinesComponent*                  SplineComponent;                                          // 0x03E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGuid                                       LandscapeGuid;                                            // 0x03F0(0x0010) (IsPlainOldData)
	struct FIntPoint                                   LandscapeSectionOffset;                                   // 0x0400(0x0008) (IsPlainOldData)
	int                                                MaxLODLevel;                                              // 0x0408(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LODDistanceFactor;                                        // 0x040C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELandscapeLODFalloff>                  LODFalloff;                                               // 0x0410(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0411(0x0003) MISSED OFFSET
	int                                                StaticLightingLOD;                                        // 0x0414(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UPhysicalMaterial*                           DefaultPhysMaterial;                                      // 0x0418(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StreamingDistanceMultiplier;                              // 0x0420(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0424(0x0004) MISSED OFFSET
	class UMaterialInterface*                          LandscapeMaterial;                                        // 0x0428(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          LandscapeHoleMaterial;                                    // 0x0430(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NegativeZBoundsExtension;                                 // 0x0438(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PositiveZBoundsExtension;                                 // 0x043C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class ULandscapeComponent*>                 LandscapeComponents;                                      // 0x0440(0x0010) (ExportObject, ZeroConstructor)
	TArray<class ULandscapeHeightfieldCollisionComponent*> CollisionComponents;                                      // 0x0450(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;                                        // 0x0460(0x0010) (ExportObject, ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData02[0x60];                                      // 0x0470(0x0060) MISSED OFFSET
	bool                                               bHasLandscapeGrass;                                       // 0x04D0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x04D1(0x0003) MISSED OFFSET
	float                                              StaticLightingResolution;                                 // 0x04D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCastStaticShadow : 1;                                    // 0x04D8(0x0001) (Edit)
	unsigned char                                      bCastShadowAsTwoSided : 1;                                // 0x04D8(0x0001) (Edit)
	unsigned char                                      bCastFarShadow : 1;                                       // 0x04D8(0x0001) (Edit)
	unsigned char                                      UnknownData04[0x3];                                       // 0x04D9(0x0003) MISSED OFFSET
	struct FLightingChannels                           LightingChannels;                                         // 0x04DC(0x0003) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData05[0x1];                                       // 0x04DF(0x0001) MISSED OFFSET
	unsigned char                                      bUseMaterialPositionOffsetInStaticLighting : 1;           // 0x04E0(0x0001) (Edit)
	unsigned char                                      bRenderCustomDepth : 1;                                   // 0x04E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData06[0x3];                                       // 0x04E1(0x0003) MISSED OFFSET
	int                                                CustomDepthStencilValue;                                  // 0x04E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLightmassPrimitiveSettings                 LightmassSettings;                                        // 0x04E8(0x0018) (Edit)
	int                                                CollisionMipLevel;                                        // 0x0500(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SimpleCollisionMipLevel;                                  // 0x0504(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CollisionThickness;                                       // 0x0508(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x050C(0x0004) MISSED OFFSET
	struct FBodyInstance                               BodyInstance;                                             // 0x0510(0x0240) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGenerateOverlapEvents : 1;                               // 0x0750(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bBakeMaterialPositionOffsetIntoCollision : 1;             // 0x0750(0x0001) (Edit)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0751(0x0003) MISSED OFFSET
	int                                                ComponentSizeQuads;                                       // 0x0754(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x0758(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumSubsections;                                           // 0x075C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUsedForNavigation : 1;                                   // 0x0760(0x0001) (Edit)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0761(0x0003) MISSED OFFSET
	ENavDataGatheringMode                              NavigationGeometryGatheringMode;                          // 0x0764(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLandscapeForCullingInvisibleHLODVertices;             // 0x0765(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0xEA];                                      // 0x0766(0x00EA) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeProxy"));

		return ptr;
	}


	void STATIC_EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer);
	void STATIC_ChangeLODDistanceFactor(float InLODDistanceFactor);
};


// Class Landscape.Landscape
// 0x0000 (0x0850 - 0x0850)
class ALandscape : public ALandscapeProxy
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.Landscape"));

		return ptr;
	}


	void STATIC_EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer);
	void STATIC_ChangeLODDistanceFactor(float InLODDistanceFactor);
};


// Class Landscape.LandscapeStreamingProxy
// 0x0020 (0x0870 - 0x0850)
class ALandscapeStreamingProxy : public ALandscapeProxy
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0850(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeStreamingProxy"));

		return ptr;
	}

};


// Class Landscape.LandscapeSplinesComponent
// 0x0030 (0x09F0 - 0x09C0)
class ULandscapeSplinesComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x09C0(0x0008) MISSED OFFSET
	TArray<class ULandscapeSplineSegment*>             Segments;                                                 // 0x09C8(0x0010) (ZeroConstructor)
	TArray<class UMeshComponent*>                      CookedForeignMeshComponents;                              // 0x09D8(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x09E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeSplinesComponent"));

		return ptr;
	}

};


// Class Landscape.LandscapeSplineSegment
// 0x0088 (0x00B8 - 0x0030)
class ULandscapeSplineSegment : public UObject
{
public:
	struct FLandscapeSplineSegmentConnection           Connections[0x2];                                         // 0x0030(0x0018) (Edit, EditFixedSize)
	struct FInterpCurveVector                          SplineInfo;                                               // 0x0060(0x0018)
	TArray<struct FLandscapeSplineInterpPoint>         Points;                                                   // 0x0078(0x0010) (ZeroConstructor)
	struct FBox                                        Bounds;                                                   // 0x0088(0x001C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	TArray<class USplineMeshComponent*>                LocalMeshComponents;                                      // 0x00A8(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeSplineSegment"));

		return ptr;
	}

};


// Class Landscape.LandscapeSplineControlPoint
// 0x0070 (0x00A0 - 0x0030)
class ULandscapeSplineControlPoint : public UObject
{
public:
	struct FVector                                     Location;                                                 // 0x0030(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x003C(0x000C) (Edit, IsPlainOldData)
	float                                              Width;                                                    // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SideFalloff;                                              // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndFalloff;                                               // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<struct FLandscapeSplineConnection>          ConnectedSegments;                                        // 0x0058(0x0010) (ZeroConstructor)
	TArray<struct FLandscapeSplineInterpPoint>         Points;                                                   // 0x0068(0x0010) (ZeroConstructor)
	struct FBox                                        Bounds;                                                   // 0x0078(0x001C) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	class UControlPointMeshComponent*                  LocalMeshComponent;                                       // 0x0098(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeSplineControlPoint"));

		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeGrassOutput
// 0x0010 (0x0078 - 0x0068)
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{
public:
	TArray<struct FGrassInput>                         GrassTypes;                                               // 0x0068(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.MaterialExpressionLandscapeGrassOutput"));

		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerBlend
// 0x0020 (0x0088 - 0x0068)
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{
public:
	TArray<struct FLayerBlendInput>                    Layers;                                                   // 0x0068(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       ExpressionGUID;                                           // 0x0078(0x0010) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.MaterialExpressionLandscapeLayerBlend"));

		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerCoords
// 0x0018 (0x0080 - 0x0068)
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{
public:
	TEnumAsByte<ETerrainCoordMappingType>              MappingType;                                              // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELandscapeCustomizedCoordType>         CustomUVType;                                             // 0x0069(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x006A(0x0002) MISSED OFFSET
	float                                              MappingScale;                                             // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MappingRotation;                                          // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MappingPanU;                                              // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MappingPanV;                                              // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.MaterialExpressionLandscapeLayerCoords"));

		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerSample
// 0x0020 (0x0088 - 0x0068)
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{
public:
	struct FName                                       ParameterName;                                            // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PreviewWeight;                                            // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x0074(0x0010) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.MaterialExpressionLandscapeLayerSample"));

		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// 0x0090 (0x00F8 - 0x0068)
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{
public:
	struct FExpressionInput                            LayerUsed;                                                // 0x0068(0x0038)
	struct FExpressionInput                            LayerNotUsed;                                             // 0x00A0(0x0038)
	struct FName                                       ParameterName;                                            // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PreviewUsed : 1;                                          // 0x00E0(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00E1(0x0003) MISSED OFFSET
	struct FGuid                                       ExpressionGUID;                                           // 0x00E4(0x0010) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.MaterialExpressionLandscapeLayerSwitch"));

		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerWeight
// 0x0098 (0x0100 - 0x0068)
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{
public:
	struct FExpressionInput                            Base;                                                     // 0x0068(0x0038)
	struct FExpressionInput                            Layer;                                                    // 0x00A0(0x0038)
	struct FName                                       ParameterName;                                            // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PreviewWeight;                                            // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ConstBase;                                                // 0x00E4(0x000C) (Edit, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x00F0(0x0010) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.MaterialExpressionLandscapeLayerWeight"));

		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// 0x0010 (0x0078 - 0x0068)
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{
public:
	struct FGuid                                       ExpressionGUID;                                           // 0x0068(0x0010) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.MaterialExpressionLandscapeVisibilityMask"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
