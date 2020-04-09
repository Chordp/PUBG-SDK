#pragma once

// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MK3DPublisher_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MK3DPublisher.AudioCapturer
// 0x0080 (0x0468 - 0x03E8)
class AAudioCapturer : public AActor
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x03E8(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MK3DPublisher.AudioCapturer"));

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


// Class MK3DPublisher.CaptureFunctionLibrary
// 0x0000 (0x0030 - 0x0030)
class UCaptureFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MK3DPublisher.CaptureFunctionLibrary"));

		return ptr;
	}

};


// Class MK3DPublisher.ViewportCapturer
// 0x0098 (0x0480 - 0x03E8)
class AViewportCapturer : public AActor
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x03E8(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class MK3DPublisher.ViewportCapturer"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
