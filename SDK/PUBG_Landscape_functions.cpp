// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Landscape_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Engine.StaticMeshComponent.SetStaticMesh
// (Native, Public, BlueprintCallable)
// Parameters:
// class UStaticMesh*             NewMesh                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A1630B0              		 offset:7630b0                        

bool UControlPointMeshComponent::SetStaticMesh(class UStaticMesh* NewMesh)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.StaticMeshComponent.SetStaticMesh"));

	UControlPointMeshComponent_SetStaticMesh_Params params;
	params.NewMesh = NewMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.StaticMeshComponent.SetForcedLodModel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewForcedLodModel              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75CD887C0              		 offset:33887c0                       

void UControlPointMeshComponent::SetForcedLodModel(int NewForcedLodModel)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.StaticMeshComponent.SetForcedLodModel"));

	UControlPointMeshComponent_SetForcedLodModel_Params params;
	params.NewForcedLodModel = NewForcedLodModel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StaticMeshComponent.OnRep_StaticMesh
// (Final, Native, Public)
// Parameters:
// class UStaticMesh*             OldStaticMesh                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75DB779D0              		 offset:41779d0                       

void UControlPointMeshComponent::OnRep_StaticMesh(class UStaticMesh* OldStaticMesh)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.StaticMeshComponent.OnRep_StaticMesh"));

	UControlPointMeshComponent_OnRep_StaticMesh_Params params;
	params.OldStaticMesh = OldStaticMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StaticMeshComponent.GetLocalBounds
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 Min                            (Parm, OutParm, IsPlainOldData)
// struct FVector                 Max                            (Parm, OutParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A0E7BF0              		 offset:6e7bf0                        

void UControlPointMeshComponent::GetLocalBounds(struct FVector* Min, struct FVector* Max)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.StaticMeshComponent.GetLocalBounds"));

	UControlPointMeshComponent_GetLocalBounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Min != nullptr)
		*Min = params.Min;
	if (Max != nullptr)
		*Max = params.Max;
}


// Function Engine.Actor.WasRecentlyRendered
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Tolerance                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D4D2570              		 offset:3ad2570                       

bool ALandscapeGizmoActor::WasRecentlyRendered(float Tolerance)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.WasRecentlyRendered"));

	ALandscapeGizmoActor_WasRecentlyRendered_Params params;
	params.Tolerance = Tolerance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.UserConstructionScript
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActor::UserConstructionScript()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.UserConstructionScript"));

	ALandscapeGizmoActor_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.TearOff
// (Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF75D56A740              		 offset:3b6a740                       

void ALandscapeGizmoActor::TearOff()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.TearOff"));

	ALandscapeGizmoActor_TearOff_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SnapRootComponentTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InParentActor                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75AE17660              		 offset:1417660                       

void ALandscapeGizmoActor::SnapRootComponentTo(class AActor* InParentActor, const struct FName& InSocketName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SnapRootComponentTo"));

	ALandscapeGizmoActor_SnapRootComponentTo_Params params;
	params.InParentActor = InParentActor;
	params.InSocketName = InSocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetTickGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ETickingGroup>     NewTickGroup                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75BA52AF0              		 offset:2052af0                       

void ALandscapeGizmoActor::SetTickGroup(TEnumAsByte<ETickingGroup> NewTickGroup)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetTickGroup"));

	ALandscapeGizmoActor_SetTickGroup_Params params;
	params.NewTickGroup = NewTickGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetTickableWhenPaused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bTickableWhenPaused            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75EE49120              		 offset:5449120                       

void ALandscapeGizmoActor::SetTickableWhenPaused(bool bTickableWhenPaused)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetTickableWhenPaused"));

	ALandscapeGizmoActor_SetTickableWhenPaused_Params params;
	params.bTickableWhenPaused = bTickableWhenPaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetReplicates
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInReplicates                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75D1F1B90              		 offset:37f1b90                       

void ALandscapeGizmoActor::SetReplicates(bool bInReplicates)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetReplicates"));

	ALandscapeGizmoActor_SetReplicates_Params params;
	params.bInReplicates = bInReplicates;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetReplicateMovement
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInReplicateMovement           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75BA08D00              		 offset:2008d00                       

void ALandscapeGizmoActor::SetReplicateMovement(bool bInReplicateMovement)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetReplicateMovement"));

	ALandscapeGizmoActor_SetReplicateMovement_Params params;
	params.bInReplicateMovement = bInReplicateMovement;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetOwner
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  NewOwner                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75BA65150              		 offset:2065150                       

void ALandscapeGizmoActor::SetOwner(class AActor* NewOwner)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetOwner"));

	ALandscapeGizmoActor_SetOwner_Params params;
	params.NewOwner = NewOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetLifeSpan
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InLifespan                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75A1FD6E0              		 offset:7fd6e0                        

void ALandscapeGizmoActor::SetLifeSpan(float InLifespan)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetLifeSpan"));

	ALandscapeGizmoActor_SetLifeSpan_Params params;
	params.InLifespan = InLifespan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorTickInterval
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          TickInterval                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75DB92E60              		 offset:4192e60                       

void ALandscapeGizmoActor::SetActorTickInterval(float TickInterval)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetActorTickInterval"));

	ALandscapeGizmoActor_SetActorTickInterval_Params params;
	params.TickInterval = TickInterval;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorTickEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75CBEDEC0              		 offset:31edec0                       

void ALandscapeGizmoActor::SetActorTickEnabled(bool bEnabled)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetActorTickEnabled"));

	ALandscapeGizmoActor_SetActorTickEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorScale3D
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 NewScale3D                     (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF75EA91660              		 offset:5091660                       

void ALandscapeGizmoActor::SetActorScale3D(const struct FVector& NewScale3D)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetActorScale3D"));

	ALandscapeGizmoActor_SetActorScale3D_Params params;
	params.NewScale3D = NewScale3D;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorRelativeScale3D
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 NewRelativeScale               (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF75A2791F0              		 offset:8791f0                        

void ALandscapeGizmoActor::SetActorRelativeScale3D(const struct FVector& NewRelativeScale)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetActorRelativeScale3D"));

	ALandscapeGizmoActor_SetActorRelativeScale3D_Params params;
	params.NewRelativeScale = NewRelativeScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorHiddenInGame
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewHidden                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75D9BBE50              		 offset:3fbbe50                       

void ALandscapeGizmoActor::SetActorHiddenInGame(bool bNewHidden)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetActorHiddenInGame"));

	ALandscapeGizmoActor_SetActorHiddenInGame_Params params;
	params.bNewHidden = bNewHidden;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorEnableCollision
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewActorEnableCollision       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75B306430              		 offset:1906430                       

void ALandscapeGizmoActor::SetActorEnableCollision(bool bNewActorEnableCollision)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetActorEnableCollision"));

	ALandscapeGizmoActor_SetActorEnableCollision_Params params;
	params.bNewActorEnableCollision = bNewActorEnableCollision;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.RemoveTickPrerequisiteComponent
// (Native, Public, BlueprintCallable)
// Parameters:
// class UActorComponent*         PrerequisiteComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF75CB92FC0              		 offset:3192fc0                       

void ALandscapeGizmoActor::RemoveTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.RemoveTickPrerequisiteComponent"));

	ALandscapeGizmoActor_RemoveTickPrerequisiteComponent_Params params;
	params.PrerequisiteComponent = PrerequisiteComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.RemoveTickPrerequisiteActor
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  PrerequisiteActor              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75AD3F410              		 offset:133f410                       

void ALandscapeGizmoActor::RemoveTickPrerequisiteActor(class AActor* PrerequisiteActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.RemoveTickPrerequisiteActor"));

	ALandscapeGizmoActor_RemoveTickPrerequisiteActor_Params params;
	params.PrerequisiteActor = PrerequisiteActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActor::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveTick"));

	ALandscapeGizmoActor_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveRadialDamage
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// float                          DamageReceived                 (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Origin                         (Parm, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActor::ReceiveRadialDamage(float DamageReceived, class UDamageType* DamageType, const struct FVector& Origin, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveRadialDamage"));

	ALandscapeGizmoActor_ReceiveRadialDamage_Params params;
	params.DamageReceived = DamageReceived;
	params.DamageType = DamageType;
	params.Origin = Origin;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceivePointDamage
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, IsPlainOldData)
// class UPrimitiveComponent*     HitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ShotFromDirection              (Parm, IsPlainOldData)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActor::ReceivePointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceivePointDamage"));

	ALandscapeGizmoActor_ReceivePointDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.HitComponent = HitComponent;
	params.BoneName = BoneName;
	params.ShotFromDirection = ShotFromDirection;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveHit
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     MyComp                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Other                          (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bSelfMoved                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActor::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveHit"));

	ALandscapeGizmoActor_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActor::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveEndPlay"));

	ALandscapeGizmoActor_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActor::ReceiveDestroyed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveDestroyed"));

	ALandscapeGizmoActor_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActor::ReceiveBeginPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveBeginPlay"));

	ALandscapeGizmoActor_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActor::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveAnyDamage"));

	ALandscapeGizmoActor_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnReleased
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FKey                    ButtonReleased                 (Parm)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActor::ReceiveActorOnReleased(const struct FKey& ButtonReleased)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorOnReleased"));

	ALandscapeGizmoActor_ReceiveActorOnReleased_Params params;
	params.ButtonReleased = ButtonReleased;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchLeave
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETouchIndex>       FingerIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActor::ReceiveActorOnInputTouchLeave(TEnumAsByte<ETouchIndex> FingerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorOnInputTouchLeave"));

	ALandscapeGizmoActor_ReceiveActorOnInputTouchLeave_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchEnter
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETouchIndex>       FingerIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActor::ReceiveActorOnInputTouchEnter(TEnumAsByte<ETouchIndex> FingerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorOnInputTouchEnter"));

	ALandscapeGizmoActor_ReceiveActorOnInputTouchEnter_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETouchIndex>       FingerIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActor::ReceiveActorOnInputTouchEnd(TEnumAsByte<ETouchIndex> FingerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorOnInputTouchEnd"));

	ALandscapeGizmoActor_ReceiveActorOnInputTouchEnd_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETouchIndex>       FingerIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActor::ReceiveActorOnInputTouchBegin(TEnumAsByte<ETouchIndex> FingerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorOnInputTouchBegin"));

	ALandscapeGizmoActor_ReceiveActorOnInputTouchBegin_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnClicked
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FKey                    ButtonPressed                  (Parm)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActor::ReceiveActorOnClicked(const struct FKey& ButtonPressed)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorOnClicked"));

	ALandscapeGizmoActor_ReceiveActorOnClicked_Params params;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorEndOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActor::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorEndOverlap"));

	ALandscapeGizmoActor_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorEndCursorOver
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActor::ReceiveActorEndCursorOver()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorEndCursorOver"));

	ALandscapeGizmoActor_ReceiveActorEndCursorOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActor::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorBeginOverlap"));

	ALandscapeGizmoActor_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorBeginCursorOver
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActor::ReceiveActorBeginCursorOver()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorBeginCursorOver"));

	ALandscapeGizmoActor_ReceiveActorBeginCursorOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_Role
// (Native, Public)
// FunctionAddress:0x00007FF75D07DB70              		 offset:367db70                       

void ALandscapeGizmoActor::OnRep_Role()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.OnRep_Role"));

	ALandscapeGizmoActor_OnRep_Role_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_ReplicateMovement
// (Native, Public)
// FunctionAddress:0x00007FF75B42D470              		 offset:1a2d470                       

void ALandscapeGizmoActor::OnRep_ReplicateMovement()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.OnRep_ReplicateMovement"));

	ALandscapeGizmoActor_OnRep_ReplicateMovement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_ReplicatedMovement
// (Native, Public)
// FunctionAddress:0x00007FF759BFF3A0              		 offset:1ff3a0                        

void ALandscapeGizmoActor::OnRep_ReplicatedMovement()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.OnRep_ReplicatedMovement"));

	ALandscapeGizmoActor_OnRep_ReplicatedMovement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_Owner
// (Native, Protected)
// FunctionAddress:0x00007FF75A1E1A30              		 offset:7e1a30                        

void ALandscapeGizmoActor::OnRep_Owner()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.OnRep_Owner"));

	ALandscapeGizmoActor_OnRep_Owner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_Instigator
// (Native, Public)
// FunctionAddress:0x00007FF75A1CCEF0              		 offset:7ccef0                        

void ALandscapeGizmoActor::OnRep_Instigator()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.OnRep_Instigator"));

	ALandscapeGizmoActor_OnRep_Instigator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_AttachmentReplication
// (Native, Public)
// FunctionAddress:0x00007FF75CBB05C0              		 offset:31b05c0                       

void ALandscapeGizmoActor::OnRep_AttachmentReplication()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.OnRep_AttachmentReplication"));

	ALandscapeGizmoActor_OnRep_AttachmentReplication_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.MakeNoise
// (Final, BlueprintAuthorityOnly, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                          Loudness                       (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   NoiseInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NoiseLocation                  (Parm, IsPlainOldData)
// float                          MaxRange                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75CC76A00              		 offset:3276a00                       

void ALandscapeGizmoActor::MakeNoise(float Loudness, class APawn* NoiseInstigator, const struct FVector& NoiseLocation, float MaxRange, const struct FName& Tag)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.MakeNoise"));

	ALandscapeGizmoActor_MakeNoise_Params params;
	params.Loudness = Loudness;
	params.NoiseInstigator = NoiseInstigator;
	params.NoiseLocation = NoiseLocation;
	params.MaxRange = MaxRange;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.MakeMIDForMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*      Parent                         (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75DDDA190              		 offset:43da190                       

class UMaterialInstanceDynamic* ALandscapeGizmoActor::MakeMIDForMaterial(class UMaterialInterface* Parent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.MakeMIDForMaterial"));

	ALandscapeGizmoActor_MakeMIDForMaterial_Params params;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_TeleportTo
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 DestLocation                   (Parm, IsPlainOldData)
// struct FRotator                DestRotation                   (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A20F220              		 offset:80f220                        

bool ALandscapeGizmoActor::K2_TeleportTo(const struct FVector& DestLocation, const struct FRotator& DestRotation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_TeleportTo"));

	ALandscapeGizmoActor_K2_TeleportTo_Params params;
	params.DestLocation = DestLocation;
	params.DestRotation = DestRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_SetActorTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              NewTransform                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75AFACD00              		 offset:15acd00                       

bool ALandscapeGizmoActor::K2_SetActorTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_SetActorTransform"));

	ALandscapeGizmoActor_K2_SetActorTransform_Params params;
	params.NewTransform = NewTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_SetActorRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                NewRotation                    (Parm, IsPlainOldData)
// bool                           bTeleportPhysics               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B1DCB60              		 offset:17dcb60                       

bool ALandscapeGizmoActor::K2_SetActorRotation(const struct FRotator& NewRotation, bool bTeleportPhysics)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_SetActorRotation"));

	ALandscapeGizmoActor_K2_SetActorRotation_Params params;
	params.NewRotation = NewRotation;
	params.bTeleportPhysics = bTeleportPhysics;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_SetActorRelativeTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              NewRelativeTransform           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75DA63270              		 offset:4063270                       

void ALandscapeGizmoActor::K2_SetActorRelativeTransform(const struct FTransform& NewRelativeTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_SetActorRelativeTransform"));

	ALandscapeGizmoActor_K2_SetActorRelativeTransform_Params params;
	params.NewRelativeTransform = NewRelativeTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_SetActorRelativeRotation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                NewRelativeRotation            (Parm, IsPlainOldData)
// bool                           bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E1BFF00              		 offset:47bff00                       

void ALandscapeGizmoActor::K2_SetActorRelativeRotation(const struct FRotator& NewRelativeRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_SetActorRelativeRotation"));

	ALandscapeGizmoActor_K2_SetActorRelativeRotation_Params params;
	params.NewRelativeRotation = NewRelativeRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_SetActorRelativeLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 NewRelativeLocation            (Parm, IsPlainOldData)
// bool                           bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75DE6FB40              		 offset:446fb40                       

void ALandscapeGizmoActor::K2_SetActorRelativeLocation(const struct FVector& NewRelativeLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_SetActorRelativeLocation"));

	ALandscapeGizmoActor_K2_SetActorRelativeLocation_Params params;
	params.NewRelativeLocation = NewRelativeLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_SetActorLocationAndRotation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 NewLocation                    (Parm, IsPlainOldData)
// struct FRotator                NewRotation                    (Parm, IsPlainOldData)
// bool                           bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75CA38080              		 offset:3038080                       

bool ALandscapeGizmoActor::K2_SetActorLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_SetActorLocationAndRotation"));

	ALandscapeGizmoActor_K2_SetActorLocationAndRotation_Params params;
	params.NewLocation = NewLocation;
	params.NewRotation = NewRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_SetActorLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 NewLocation                    (Parm, IsPlainOldData)
// bool                           bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D0DD4F0              		 offset:36dd4f0                       

bool ALandscapeGizmoActor::K2_SetActorLocation(const struct FVector& NewLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_SetActorLocation"));

	ALandscapeGizmoActor_K2_SetActorLocation_Params params;
	params.NewLocation = NewLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_OnReset
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActor::K2_OnReset()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_OnReset"));

	ALandscapeGizmoActor_K2_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_OnEndViewTarget
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActor::K2_OnEndViewTarget(class APlayerController* PC)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_OnEndViewTarget"));

	ALandscapeGizmoActor_K2_OnEndViewTarget_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_OnBecomeViewTarget
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActor::K2_OnBecomeViewTarget(class APlayerController* PC)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_OnBecomeViewTarget"));

	ALandscapeGizmoActor_K2_OnBecomeViewTarget_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_GetRootComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF75BB24CE0              		 offset:2124ce0                       

class USceneComponent* ALandscapeGizmoActor::K2_GetRootComponent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_GetRootComponent"));

	ALandscapeGizmoActor_K2_GetRootComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_GetActorRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75BAFC250              		 offset:20fc250                       

struct FRotator ALandscapeGizmoActor::K2_GetActorRotation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_GetActorRotation"));

	ALandscapeGizmoActor_K2_GetActorRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_GetActorLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75BA7B5D0              		 offset:207b5d0                       

struct FVector ALandscapeGizmoActor::K2_GetActorLocation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_GetActorLocation"));

	ALandscapeGizmoActor_K2_GetActorLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_DetachFromActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EDetachmentRule                LocationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EDetachmentRule                RotationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EDetachmentRule                ScaleRule                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75CD2DF30              		 offset:332df30                       

void ALandscapeGizmoActor::K2_DetachFromActor(EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_DetachFromActor"));

	ALandscapeGizmoActor_K2_DetachFromActor_Params params;
	params.LocationRule = LocationRule;
	params.RotationRule = RotationRule;
	params.ScaleRule = ScaleRule;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_DestroyComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActorComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF759EFF780              		 offset:4ff780                        

void ALandscapeGizmoActor::K2_DestroyComponent(class UActorComponent* Component)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_DestroyComponent"));

	ALandscapeGizmoActor_K2_DestroyComponent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_DestroyActor
// (Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF75A14D4D0              		 offset:74d4d0                        

void ALandscapeGizmoActor::K2_DestroyActor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_DestroyActor"));

	ALandscapeGizmoActor_K2_DestroyActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_AttachToComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*         Parent                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   SocketName                     (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule                LocationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule                RotationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule                ScaleRule                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWeldSimulatedBodies           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75B979D40              		 offset:1f79d40                       

void ALandscapeGizmoActor::K2_AttachToComponent(class USceneComponent* Parent, const struct FName& SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AttachToComponent"));

	ALandscapeGizmoActor_K2_AttachToComponent_Params params;
	params.Parent = Parent;
	params.SocketName = SocketName;
	params.LocationRule = LocationRule;
	params.RotationRule = RotationRule;
	params.ScaleRule = ScaleRule;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_AttachToActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  ParentActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SocketName                     (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule                LocationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule                RotationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule                ScaleRule                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWeldSimulatedBodies           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75A956630              		 offset:f56630                        

void ALandscapeGizmoActor::K2_AttachToActor(class AActor* ParentActor, const struct FName& SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AttachToActor"));

	ALandscapeGizmoActor_K2_AttachToActor_Params params;
	params.ParentActor = ParentActor;
	params.SocketName = SocketName;
	params.LocationRule = LocationRule;
	params.RotationRule = RotationRule;
	params.ScaleRule = ScaleRule;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_AttachRootComponentToActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InParentActor                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAttachLocation>   AttachLocationType             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWeldSimulatedBodies           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75D7779F0              		 offset:3d779f0                       

void ALandscapeGizmoActor::K2_AttachRootComponentToActor(class AActor* InParentActor, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> AttachLocationType, bool bWeldSimulatedBodies)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AttachRootComponentToActor"));

	ALandscapeGizmoActor_K2_AttachRootComponentToActor_Params params;
	params.InParentActor = InParentActor;
	params.InSocketName = InSocketName;
	params.AttachLocationType = AttachLocationType;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_AttachRootComponentTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*         InParent                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAttachLocation>   AttachLocationType             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWeldSimulatedBodies           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75DA63120              		 offset:4063120                       

void ALandscapeGizmoActor::K2_AttachRootComponentTo(class USceneComponent* InParent, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> AttachLocationType, bool bWeldSimulatedBodies)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AttachRootComponentTo"));

	ALandscapeGizmoActor_K2_AttachRootComponentTo_Params params;
	params.InParent = InParent;
	params.InSocketName = InSocketName;
	params.AttachLocationType = AttachLocationType;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_AddActorWorldTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              DeltaTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75D13CF80              		 offset:373cf80                       

void ALandscapeGizmoActor::K2_AddActorWorldTransform(const struct FTransform& DeltaTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AddActorWorldTransform"));

	ALandscapeGizmoActor_K2_AddActorWorldTransform_Params params;
	params.DeltaTransform = DeltaTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_AddActorWorldRotation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                DeltaRotation                  (Parm, IsPlainOldData)
// bool                           bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF759CBDED0              		 offset:2bded0                        

void ALandscapeGizmoActor::K2_AddActorWorldRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AddActorWorldRotation"));

	ALandscapeGizmoActor_K2_AddActorWorldRotation_Params params;
	params.DeltaRotation = DeltaRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_AddActorWorldOffset
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 DeltaLocation                  (Parm, IsPlainOldData)
// bool                           bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75D7B6DF0              		 offset:3db6df0                       

void ALandscapeGizmoActor::K2_AddActorWorldOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AddActorWorldOffset"));

	ALandscapeGizmoActor_K2_AddActorWorldOffset_Params params;
	params.DeltaLocation = DeltaLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_AddActorLocalTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              NewTransform                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E9974D0              		 offset:4f974d0                       

void ALandscapeGizmoActor::K2_AddActorLocalTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AddActorLocalTransform"));

	ALandscapeGizmoActor_K2_AddActorLocalTransform_Params params;
	params.NewTransform = NewTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_AddActorLocalRotation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                DeltaRotation                  (Parm, IsPlainOldData)
// bool                           bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75B8845D0              		 offset:1e845d0                       

void ALandscapeGizmoActor::K2_AddActorLocalRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AddActorLocalRotation"));

	ALandscapeGizmoActor_K2_AddActorLocalRotation_Params params;
	params.DeltaRotation = DeltaRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_AddActorLocalOffset
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 DeltaLocation                  (Parm, IsPlainOldData)
// bool                           bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75D509340              		 offset:3b09340                       

void ALandscapeGizmoActor::K2_AddActorLocalOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AddActorLocalOffset"));

	ALandscapeGizmoActor_K2_AddActorLocalOffset_Params params;
	params.DeltaLocation = DeltaLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.IsOverlappingActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Other                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A60E870              		 offset:c0e870                        

bool ALandscapeGizmoActor::IsOverlappingActor(class AActor* Other)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.IsOverlappingActor"));

	ALandscapeGizmoActor_IsOverlappingActor_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.IsChildActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B84C4B0              		 offset:1e4c4b0                       

bool ALandscapeGizmoActor::IsChildActor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.IsChildActor"));

	ALandscapeGizmoActor_IsChildActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.IsActorTickEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B351BC0              		 offset:1951bc0                       

bool ALandscapeGizmoActor::IsActorTickEnabled()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.IsActorTickEnabled"));

	ALandscapeGizmoActor_IsActorTickEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.IsActorBeingDestroyed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75AC63B60              		 offset:1263b60                       

bool ALandscapeGizmoActor::IsActorBeingDestroyed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.IsActorBeingDestroyed"));

	ALandscapeGizmoActor_IsActorBeingDestroyed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.HasAuthority
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D1F1B00              		 offset:37f1b00                       

bool ALandscapeGizmoActor::HasAuthority()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.HasAuthority"));

	ALandscapeGizmoActor_HasAuthority_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetVerticalDistanceTo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A65AD30              		 offset:c5ad30                        

float ALandscapeGizmoActor::GetVerticalDistanceTo(class AActor* OtherActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetVerticalDistanceTo"));

	ALandscapeGizmoActor_GetVerticalDistanceTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetVelocity
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A224810              		 offset:824810                        

struct FVector ALandscapeGizmoActor::GetVelocity()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetVelocity"));

	ALandscapeGizmoActor_GetVelocity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75DE1C000              		 offset:441c000                       

struct FTransform ALandscapeGizmoActor::GetTransform()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetTransform"));

	ALandscapeGizmoActor_GetTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetTickableWhenPaused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75DCEE450              		 offset:42ee450                       

bool ALandscapeGizmoActor::GetTickableWhenPaused()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetTickableWhenPaused"));

	ALandscapeGizmoActor_GetTickableWhenPaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetSquaredDistanceTo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B995800              		 offset:1f95800                       

float ALandscapeGizmoActor::GetSquaredDistanceTo(class AActor* OtherActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetSquaredDistanceTo"));

	ALandscapeGizmoActor_GetSquaredDistanceTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetRemoteRole
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ENetRole>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75E336BF0              		 offset:4936bf0                       

TEnumAsByte<ENetRole> ALandscapeGizmoActor::GetRemoteRole()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetRemoteRole"));

	ALandscapeGizmoActor_GetRemoteRole_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetParentComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UChildActorComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF75E2970F0              		 offset:48970f0                       

class UChildActorComponent* ALandscapeGizmoActor::GetParentComponent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetParentComponent"));

	ALandscapeGizmoActor_GetParentComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetParentActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A84B430              		 offset:e4b430                        

class AActor* ALandscapeGizmoActor::GetParentActor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetParentActor"));

	ALandscapeGizmoActor_GetParentActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetOwner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75BA7B530              		 offset:207b530                       

class AActor* ALandscapeGizmoActor::GetOwner()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetOwner"));

	ALandscapeGizmoActor_GetOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetOverlappingComponents
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UPrimitiveComponent*> OverlappingComponents          (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF75BA528E0              		 offset:20528e0                       

void ALandscapeGizmoActor::GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OverlappingComponents)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetOverlappingComponents"));

	ALandscapeGizmoActor_GetOverlappingComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OverlappingComponents != nullptr)
		*OverlappingComponents = params.OverlappingComponents;
}


// Function Engine.Actor.GetOverlappingActors
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>          OverlappingActors              (Parm, OutParm, ZeroConstructor)
// class UClass*                  ClassFilter                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75ACF8230              		 offset:12f8230                       

void ALandscapeGizmoActor::GetOverlappingActors(class UClass* ClassFilter, TArray<class AActor*>* OverlappingActors)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetOverlappingActors"));

	ALandscapeGizmoActor_GetOverlappingActors_Params params;
	params.ClassFilter = ClassFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OverlappingActors != nullptr)
		*OverlappingActors = params.OverlappingActors;
}


// Function Engine.Actor.GetLifeSpan
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75AD13FA0              		 offset:1313fa0                       

float ALandscapeGizmoActor::GetLifeSpan()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetLifeSpan"));

	ALandscapeGizmoActor_GetLifeSpan_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInstigatorController
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AController*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D712ED0              		 offset:3d12ed0                       

class AController* ALandscapeGizmoActor::GetInstigatorController()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetInstigatorController"));

	ALandscapeGizmoActor_GetInstigatorController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInstigator
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D73B330              		 offset:3d3b330                       

class APawn* ALandscapeGizmoActor::GetInstigator()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetInstigator"));

	ALandscapeGizmoActor_GetInstigator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInputVectorAxisValue
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    InputAxisKey                   (ConstParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75EBF4490              		 offset:51f4490                       

struct FVector ALandscapeGizmoActor::GetInputVectorAxisValue(const struct FKey& InputAxisKey)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetInputVectorAxisValue"));

	ALandscapeGizmoActor_GetInputVectorAxisValue_Params params;
	params.InputAxisKey = InputAxisKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInputAxisValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   InputAxisName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75CE39660              		 offset:3439660                       

float ALandscapeGizmoActor::GetInputAxisValue(const struct FName& InputAxisName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetInputAxisValue"));

	ALandscapeGizmoActor_GetInputAxisValue_Params params;
	params.InputAxisName = InputAxisName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInputAxisKeyValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    InputAxisKey                   (ConstParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF759CE1300              		 offset:2e1300                        

float ALandscapeGizmoActor::GetInputAxisKeyValue(const struct FKey& InputAxisKey)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetInputAxisKeyValue"));

	ALandscapeGizmoActor_GetInputAxisKeyValue_Params params;
	params.InputAxisKey = InputAxisKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetHorizontalDotProductTo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A879590              		 offset:e79590                        

float ALandscapeGizmoActor::GetHorizontalDotProductTo(class AActor* OtherActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetHorizontalDotProductTo"));

	ALandscapeGizmoActor_GetHorizontalDotProductTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetHorizontalDistanceTo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A9A8020              		 offset:fa8020                        

float ALandscapeGizmoActor::GetHorizontalDistanceTo(class AActor* OtherActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetHorizontalDistanceTo"));

	ALandscapeGizmoActor_GetHorizontalDistanceTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetGameTimeSinceCreation
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A162FB0              		 offset:762fb0                        

float ALandscapeGizmoActor::GetGameTimeSinceCreation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetGameTimeSinceCreation"));

	ALandscapeGizmoActor_GetGameTimeSinceCreation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetDotProductTo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B804420              		 offset:1e04420                       

float ALandscapeGizmoActor::GetDotProductTo(class AActor* OtherActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetDotProductTo"));

	ALandscapeGizmoActor_GetDotProductTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetDistanceTo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75E190050              		 offset:4790050                       

float ALandscapeGizmoActor::GetDistanceTo(class AActor* OtherActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetDistanceTo"));

	ALandscapeGizmoActor_GetDistanceTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetComponentsByTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ComponentClass                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UActorComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF75E77CDC0              		 offset:4d7cdc0                       

TArray<class UActorComponent*> ALandscapeGizmoActor::GetComponentsByTag(class UClass* ComponentClass, const struct FName& Tag)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetComponentsByTag"));

	ALandscapeGizmoActor_GetComponentsByTag_Params params;
	params.ComponentClass = ComponentClass;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetComponentsByClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ComponentClass                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UActorComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF75D1D95E0              		 offset:37d95e0                       

TArray<class UActorComponent*> ALandscapeGizmoActor::GetComponentsByClass(class UClass* ComponentClass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetComponentsByClass"));

	ALandscapeGizmoActor_GetComponentsByClass_Params params;
	params.ComponentClass = ComponentClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetComponentByClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ComponentClass                 (Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF75A9BAD60              		 offset:fbad60                        

class UActorComponent* ALandscapeGizmoActor::GetComponentByClass(class UClass* ComponentClass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetComponentByClass"));

	ALandscapeGizmoActor_GetComponentByClass_Params params;
	params.ComponentClass = ComponentClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetAttachParentSocketName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF759B1B710              		 offset:11b710                        

struct FName ALandscapeGizmoActor::GetAttachParentSocketName()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetAttachParentSocketName"));

	ALandscapeGizmoActor_GetAttachParentSocketName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetAttachParentActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF759E7EDE0              		 offset:47ede0                        

class AActor* ALandscapeGizmoActor::GetAttachParentActor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetAttachParentActor"));

	ALandscapeGizmoActor_GetAttachParentActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetAttachedActors
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>          OutActors                      (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF75E0CCCF0              		 offset:46cccf0                       

void ALandscapeGizmoActor::GetAttachedActors(TArray<class AActor*>* OutActors)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetAttachedActors"));

	ALandscapeGizmoActor_GetAttachedActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;
}


// Function Engine.Actor.GetAllChildActors
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>          ChildActors                    (Parm, OutParm, ZeroConstructor)
// bool                           bIncludeDescendants            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75CFB97E0              		 offset:35b97e0                       

void ALandscapeGizmoActor::GetAllChildActors(bool bIncludeDescendants, TArray<class AActor*>* ChildActors)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetAllChildActors"));

	ALandscapeGizmoActor_GetAllChildActors_Params params;
	params.bIncludeDescendants = bIncludeDescendants;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChildActors != nullptr)
		*ChildActors = params.ChildActors;
}


// Function Engine.Actor.GetActorUpVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75DABA8E0              		 offset:40ba8e0                       

struct FVector ALandscapeGizmoActor::GetActorUpVector()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorUpVector"));

	ALandscapeGizmoActor_GetActorUpVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorTimeDilation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D097720              		 offset:3697720                       

float ALandscapeGizmoActor::GetActorTimeDilation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorTimeDilation"));

	ALandscapeGizmoActor_GetActorTimeDilation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorTickInterval
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B033170              		 offset:1633170                       

float ALandscapeGizmoActor::GetActorTickInterval()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorTickInterval"));

	ALandscapeGizmoActor_GetActorTickInterval_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorScale3D
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75DF230C0              		 offset:45230c0                       

struct FVector ALandscapeGizmoActor::GetActorScale3D()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorScale3D"));

	ALandscapeGizmoActor_GetActorScale3D_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorRightVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D5975F0              		 offset:3b975f0                       

struct FVector ALandscapeGizmoActor::GetActorRightVector()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorRightVector"));

	ALandscapeGizmoActor_GetActorRightVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorRelativeScale3D
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A687570              		 offset:c87570                        

struct FVector ALandscapeGizmoActor::GetActorRelativeScale3D()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorRelativeScale3D"));

	ALandscapeGizmoActor_GetActorRelativeScale3D_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorForwardVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75DD93E50              		 offset:4393e50                       

struct FVector ALandscapeGizmoActor::GetActorForwardVector()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorForwardVector"));

	ALandscapeGizmoActor_GetActorForwardVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorEyesViewPoint
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 OutLocation                    (Parm, OutParm, IsPlainOldData)
// struct FRotator                OutRotation                    (Parm, OutParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B72EB90              		 offset:1d2eb90                       

void ALandscapeGizmoActor::GetActorEyesViewPoint(struct FVector* OutLocation, struct FRotator* OutRotation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorEyesViewPoint"));

	ALandscapeGizmoActor_GetActorEyesViewPoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
	if (OutRotation != nullptr)
		*OutRotation = params.OutRotation;
}


// Function Engine.Actor.GetActorEnableCollision
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A8CDDA0              		 offset:ecdda0                        

bool ALandscapeGizmoActor::GetActorEnableCollision()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorEnableCollision"));

	ALandscapeGizmoActor_GetActorEnableCollision_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorBounds
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bOnlyCollidingComponents       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Origin                         (Parm, OutParm, IsPlainOldData)
// struct FVector                 BoxExtent                      (Parm, OutParm, IsPlainOldData)
// FunctionAddress:0x00007FF75DC574E0              		 offset:42574e0                       

void ALandscapeGizmoActor::GetActorBounds(bool bOnlyCollidingComponents, struct FVector* Origin, struct FVector* BoxExtent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorBounds"));

	ALandscapeGizmoActor_GetActorBounds_Params params;
	params.bOnlyCollidingComponents = bOnlyCollidingComponents;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Origin != nullptr)
		*Origin = params.Origin;
	if (BoxExtent != nullptr)
		*BoxExtent = params.BoxExtent;
}


// Function Engine.Actor.ForceNetUpdate
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF75D9BBE00              		 offset:3fbbe00                       

void ALandscapeGizmoActor::ForceNetUpdate()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ForceNetUpdate"));

	ALandscapeGizmoActor_ForceNetUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.FlushNetDormancy
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF75EE02D90              		 offset:5402d90                       

void ALandscapeGizmoActor::FlushNetDormancy()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.FlushNetDormancy"));

	ALandscapeGizmoActor_FlushNetDormancy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.EnableInput
// (Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75B0C3560              		 offset:16c3560                       

void ALandscapeGizmoActor::EnableInput(class APlayerController* PlayerController)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.EnableInput"));

	ALandscapeGizmoActor_EnableInput_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.DisableInput
// (Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75A238810              		 offset:838810                        

void ALandscapeGizmoActor::DisableInput(class APlayerController* PlayerController)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.DisableInput"));

	ALandscapeGizmoActor_DisableInput_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.DetachRootComponentFromParent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bMaintainWorldPosition         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75CEA0320              		 offset:34a0320                       

void ALandscapeGizmoActor::DetachRootComponentFromParent(bool bMaintainWorldPosition)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.DetachRootComponentFromParent"));

	ALandscapeGizmoActor_DetachRootComponentFromParent_Params params;
	params.bMaintainWorldPosition = bMaintainWorldPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.AddTickPrerequisiteComponent
// (Native, Public, BlueprintCallable)
// Parameters:
// class UActorComponent*         PrerequisiteComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF75A7F7A70              		 offset:df7a70                        

void ALandscapeGizmoActor::AddTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.AddTickPrerequisiteComponent"));

	ALandscapeGizmoActor_AddTickPrerequisiteComponent_Params params;
	params.PrerequisiteComponent = PrerequisiteComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.AddTickPrerequisiteActor
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  PrerequisiteActor              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75B4434D0              		 offset:1a434d0                       

void ALandscapeGizmoActor::AddTickPrerequisiteActor(class AActor* PrerequisiteActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.AddTickPrerequisiteActor"));

	ALandscapeGizmoActor_AddTickPrerequisiteActor_Params params;
	params.PrerequisiteActor = PrerequisiteActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.AddComponent
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   TemplateName                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bManualAttachment              (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              RelativeTransform              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UObject*                 ComponentTemplateContext       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF75E743450              		 offset:4d43450                       

class UActorComponent* ALandscapeGizmoActor::AddComponent(const struct FName& TemplateName, bool bManualAttachment, const struct FTransform& RelativeTransform, class UObject* ComponentTemplateContext)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.AddComponent"));

	ALandscapeGizmoActor_AddComponent_Params params;
	params.TemplateName = TemplateName;
	params.bManualAttachment = bManualAttachment;
	params.RelativeTransform = RelativeTransform;
	params.ComponentTemplateContext = ComponentTemplateContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.ActorHasTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75BA24CC0              		 offset:2024cc0                       

bool ALandscapeGizmoActor::ActorHasTag(const struct FName& Tag)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ActorHasTag"));

	ALandscapeGizmoActor_ActorHasTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.WasRecentlyRendered
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Tolerance                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D4D2570              		 offset:3ad2570                       

bool ALandscapeGizmoActiveActor::WasRecentlyRendered(float Tolerance)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.WasRecentlyRendered"));

	ALandscapeGizmoActiveActor_WasRecentlyRendered_Params params;
	params.Tolerance = Tolerance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.UserConstructionScript
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActiveActor::UserConstructionScript()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.UserConstructionScript"));

	ALandscapeGizmoActiveActor_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.TearOff
// (Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF75D56A740              		 offset:3b6a740                       

void ALandscapeGizmoActiveActor::TearOff()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.TearOff"));

	ALandscapeGizmoActiveActor_TearOff_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SnapRootComponentTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InParentActor                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75AE17660              		 offset:1417660                       

void ALandscapeGizmoActiveActor::SnapRootComponentTo(class AActor* InParentActor, const struct FName& InSocketName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SnapRootComponentTo"));

	ALandscapeGizmoActiveActor_SnapRootComponentTo_Params params;
	params.InParentActor = InParentActor;
	params.InSocketName = InSocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetTickGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ETickingGroup>     NewTickGroup                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75BA52AF0              		 offset:2052af0                       

void ALandscapeGizmoActiveActor::SetTickGroup(TEnumAsByte<ETickingGroup> NewTickGroup)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetTickGroup"));

	ALandscapeGizmoActiveActor_SetTickGroup_Params params;
	params.NewTickGroup = NewTickGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetTickableWhenPaused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bTickableWhenPaused            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75EE49120              		 offset:5449120                       

void ALandscapeGizmoActiveActor::SetTickableWhenPaused(bool bTickableWhenPaused)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetTickableWhenPaused"));

	ALandscapeGizmoActiveActor_SetTickableWhenPaused_Params params;
	params.bTickableWhenPaused = bTickableWhenPaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetReplicates
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInReplicates                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75D1F1B90              		 offset:37f1b90                       

void ALandscapeGizmoActiveActor::SetReplicates(bool bInReplicates)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetReplicates"));

	ALandscapeGizmoActiveActor_SetReplicates_Params params;
	params.bInReplicates = bInReplicates;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetReplicateMovement
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInReplicateMovement           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75BA08D00              		 offset:2008d00                       

void ALandscapeGizmoActiveActor::SetReplicateMovement(bool bInReplicateMovement)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetReplicateMovement"));

	ALandscapeGizmoActiveActor_SetReplicateMovement_Params params;
	params.bInReplicateMovement = bInReplicateMovement;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetOwner
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  NewOwner                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75BA65150              		 offset:2065150                       

void ALandscapeGizmoActiveActor::SetOwner(class AActor* NewOwner)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetOwner"));

	ALandscapeGizmoActiveActor_SetOwner_Params params;
	params.NewOwner = NewOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetLifeSpan
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InLifespan                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75A1FD6E0              		 offset:7fd6e0                        

void ALandscapeGizmoActiveActor::SetLifeSpan(float InLifespan)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetLifeSpan"));

	ALandscapeGizmoActiveActor_SetLifeSpan_Params params;
	params.InLifespan = InLifespan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorTickInterval
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          TickInterval                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75DB92E60              		 offset:4192e60                       

void ALandscapeGizmoActiveActor::SetActorTickInterval(float TickInterval)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetActorTickInterval"));

	ALandscapeGizmoActiveActor_SetActorTickInterval_Params params;
	params.TickInterval = TickInterval;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorTickEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75CBEDEC0              		 offset:31edec0                       

void ALandscapeGizmoActiveActor::SetActorTickEnabled(bool bEnabled)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetActorTickEnabled"));

	ALandscapeGizmoActiveActor_SetActorTickEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorScale3D
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 NewScale3D                     (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF75EA91660              		 offset:5091660                       

void ALandscapeGizmoActiveActor::SetActorScale3D(const struct FVector& NewScale3D)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetActorScale3D"));

	ALandscapeGizmoActiveActor_SetActorScale3D_Params params;
	params.NewScale3D = NewScale3D;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorRelativeScale3D
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 NewRelativeScale               (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF75A2791F0              		 offset:8791f0                        

void ALandscapeGizmoActiveActor::SetActorRelativeScale3D(const struct FVector& NewRelativeScale)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetActorRelativeScale3D"));

	ALandscapeGizmoActiveActor_SetActorRelativeScale3D_Params params;
	params.NewRelativeScale = NewRelativeScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorHiddenInGame
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewHidden                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75D9BBE50              		 offset:3fbbe50                       

void ALandscapeGizmoActiveActor::SetActorHiddenInGame(bool bNewHidden)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetActorHiddenInGame"));

	ALandscapeGizmoActiveActor_SetActorHiddenInGame_Params params;
	params.bNewHidden = bNewHidden;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorEnableCollision
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewActorEnableCollision       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75B306430              		 offset:1906430                       

void ALandscapeGizmoActiveActor::SetActorEnableCollision(bool bNewActorEnableCollision)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetActorEnableCollision"));

	ALandscapeGizmoActiveActor_SetActorEnableCollision_Params params;
	params.bNewActorEnableCollision = bNewActorEnableCollision;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.RemoveTickPrerequisiteComponent
// (Native, Public, BlueprintCallable)
// Parameters:
// class UActorComponent*         PrerequisiteComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF75CB92FC0              		 offset:3192fc0                       

void ALandscapeGizmoActiveActor::RemoveTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.RemoveTickPrerequisiteComponent"));

	ALandscapeGizmoActiveActor_RemoveTickPrerequisiteComponent_Params params;
	params.PrerequisiteComponent = PrerequisiteComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.RemoveTickPrerequisiteActor
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  PrerequisiteActor              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75AD3F410              		 offset:133f410                       

void ALandscapeGizmoActiveActor::RemoveTickPrerequisiteActor(class AActor* PrerequisiteActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.RemoveTickPrerequisiteActor"));

	ALandscapeGizmoActiveActor_RemoveTickPrerequisiteActor_Params params;
	params.PrerequisiteActor = PrerequisiteActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActiveActor::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveTick"));

	ALandscapeGizmoActiveActor_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveRadialDamage
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// float                          DamageReceived                 (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Origin                         (Parm, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActiveActor::ReceiveRadialDamage(float DamageReceived, class UDamageType* DamageType, const struct FVector& Origin, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveRadialDamage"));

	ALandscapeGizmoActiveActor_ReceiveRadialDamage_Params params;
	params.DamageReceived = DamageReceived;
	params.DamageType = DamageType;
	params.Origin = Origin;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceivePointDamage
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, IsPlainOldData)
// class UPrimitiveComponent*     HitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ShotFromDirection              (Parm, IsPlainOldData)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActiveActor::ReceivePointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceivePointDamage"));

	ALandscapeGizmoActiveActor_ReceivePointDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.HitComponent = HitComponent;
	params.BoneName = BoneName;
	params.ShotFromDirection = ShotFromDirection;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveHit
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     MyComp                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Other                          (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bSelfMoved                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActiveActor::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveHit"));

	ALandscapeGizmoActiveActor_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActiveActor::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveEndPlay"));

	ALandscapeGizmoActiveActor_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActiveActor::ReceiveDestroyed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveDestroyed"));

	ALandscapeGizmoActiveActor_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActiveActor::ReceiveBeginPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveBeginPlay"));

	ALandscapeGizmoActiveActor_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActiveActor::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveAnyDamage"));

	ALandscapeGizmoActiveActor_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnReleased
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FKey                    ButtonReleased                 (Parm)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActiveActor::ReceiveActorOnReleased(const struct FKey& ButtonReleased)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorOnReleased"));

	ALandscapeGizmoActiveActor_ReceiveActorOnReleased_Params params;
	params.ButtonReleased = ButtonReleased;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchLeave
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETouchIndex>       FingerIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActiveActor::ReceiveActorOnInputTouchLeave(TEnumAsByte<ETouchIndex> FingerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorOnInputTouchLeave"));

	ALandscapeGizmoActiveActor_ReceiveActorOnInputTouchLeave_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchEnter
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETouchIndex>       FingerIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActiveActor::ReceiveActorOnInputTouchEnter(TEnumAsByte<ETouchIndex> FingerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorOnInputTouchEnter"));

	ALandscapeGizmoActiveActor_ReceiveActorOnInputTouchEnter_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETouchIndex>       FingerIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActiveActor::ReceiveActorOnInputTouchEnd(TEnumAsByte<ETouchIndex> FingerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorOnInputTouchEnd"));

	ALandscapeGizmoActiveActor_ReceiveActorOnInputTouchEnd_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETouchIndex>       FingerIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActiveActor::ReceiveActorOnInputTouchBegin(TEnumAsByte<ETouchIndex> FingerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorOnInputTouchBegin"));

	ALandscapeGizmoActiveActor_ReceiveActorOnInputTouchBegin_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnClicked
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FKey                    ButtonPressed                  (Parm)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActiveActor::ReceiveActorOnClicked(const struct FKey& ButtonPressed)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorOnClicked"));

	ALandscapeGizmoActiveActor_ReceiveActorOnClicked_Params params;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorEndOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActiveActor::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorEndOverlap"));

	ALandscapeGizmoActiveActor_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorEndCursorOver
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActiveActor::ReceiveActorEndCursorOver()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorEndCursorOver"));

	ALandscapeGizmoActiveActor_ReceiveActorEndCursorOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActiveActor::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorBeginOverlap"));

	ALandscapeGizmoActiveActor_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorBeginCursorOver
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActiveActor::ReceiveActorBeginCursorOver()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorBeginCursorOver"));

	ALandscapeGizmoActiveActor_ReceiveActorBeginCursorOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_Role
// (Native, Public)
// FunctionAddress:0x00007FF75D07DB70              		 offset:367db70                       

void ALandscapeGizmoActiveActor::OnRep_Role()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.OnRep_Role"));

	ALandscapeGizmoActiveActor_OnRep_Role_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_ReplicateMovement
// (Native, Public)
// FunctionAddress:0x00007FF75B42D470              		 offset:1a2d470                       

void ALandscapeGizmoActiveActor::OnRep_ReplicateMovement()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.OnRep_ReplicateMovement"));

	ALandscapeGizmoActiveActor_OnRep_ReplicateMovement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_ReplicatedMovement
// (Native, Public)
// FunctionAddress:0x00007FF759BFF3A0              		 offset:1ff3a0                        

void ALandscapeGizmoActiveActor::OnRep_ReplicatedMovement()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.OnRep_ReplicatedMovement"));

	ALandscapeGizmoActiveActor_OnRep_ReplicatedMovement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_Owner
// (Native, Protected)
// FunctionAddress:0x00007FF75A1E1A30              		 offset:7e1a30                        

void ALandscapeGizmoActiveActor::OnRep_Owner()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.OnRep_Owner"));

	ALandscapeGizmoActiveActor_OnRep_Owner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_Instigator
// (Native, Public)
// FunctionAddress:0x00007FF75A1CCEF0              		 offset:7ccef0                        

void ALandscapeGizmoActiveActor::OnRep_Instigator()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.OnRep_Instigator"));

	ALandscapeGizmoActiveActor_OnRep_Instigator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_AttachmentReplication
// (Native, Public)
// FunctionAddress:0x00007FF75CBB05C0              		 offset:31b05c0                       

void ALandscapeGizmoActiveActor::OnRep_AttachmentReplication()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.OnRep_AttachmentReplication"));

	ALandscapeGizmoActiveActor_OnRep_AttachmentReplication_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.MakeNoise
// (Final, BlueprintAuthorityOnly, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                          Loudness                       (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   NoiseInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NoiseLocation                  (Parm, IsPlainOldData)
// float                          MaxRange                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75CC76A00              		 offset:3276a00                       

void ALandscapeGizmoActiveActor::MakeNoise(float Loudness, class APawn* NoiseInstigator, const struct FVector& NoiseLocation, float MaxRange, const struct FName& Tag)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.MakeNoise"));

	ALandscapeGizmoActiveActor_MakeNoise_Params params;
	params.Loudness = Loudness;
	params.NoiseInstigator = NoiseInstigator;
	params.NoiseLocation = NoiseLocation;
	params.MaxRange = MaxRange;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.MakeMIDForMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*      Parent                         (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75DDDA190              		 offset:43da190                       

class UMaterialInstanceDynamic* ALandscapeGizmoActiveActor::MakeMIDForMaterial(class UMaterialInterface* Parent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.MakeMIDForMaterial"));

	ALandscapeGizmoActiveActor_MakeMIDForMaterial_Params params;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_TeleportTo
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 DestLocation                   (Parm, IsPlainOldData)
// struct FRotator                DestRotation                   (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A20F220              		 offset:80f220                        

bool ALandscapeGizmoActiveActor::K2_TeleportTo(const struct FVector& DestLocation, const struct FRotator& DestRotation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_TeleportTo"));

	ALandscapeGizmoActiveActor_K2_TeleportTo_Params params;
	params.DestLocation = DestLocation;
	params.DestRotation = DestRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_SetActorTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              NewTransform                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75AFACD00              		 offset:15acd00                       

bool ALandscapeGizmoActiveActor::K2_SetActorTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_SetActorTransform"));

	ALandscapeGizmoActiveActor_K2_SetActorTransform_Params params;
	params.NewTransform = NewTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_SetActorRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                NewRotation                    (Parm, IsPlainOldData)
// bool                           bTeleportPhysics               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B1DCB60              		 offset:17dcb60                       

bool ALandscapeGizmoActiveActor::K2_SetActorRotation(const struct FRotator& NewRotation, bool bTeleportPhysics)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_SetActorRotation"));

	ALandscapeGizmoActiveActor_K2_SetActorRotation_Params params;
	params.NewRotation = NewRotation;
	params.bTeleportPhysics = bTeleportPhysics;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_SetActorRelativeTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              NewRelativeTransform           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75DA63270              		 offset:4063270                       

void ALandscapeGizmoActiveActor::K2_SetActorRelativeTransform(const struct FTransform& NewRelativeTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_SetActorRelativeTransform"));

	ALandscapeGizmoActiveActor_K2_SetActorRelativeTransform_Params params;
	params.NewRelativeTransform = NewRelativeTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_SetActorRelativeRotation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                NewRelativeRotation            (Parm, IsPlainOldData)
// bool                           bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E1BFF00              		 offset:47bff00                       

void ALandscapeGizmoActiveActor::K2_SetActorRelativeRotation(const struct FRotator& NewRelativeRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_SetActorRelativeRotation"));

	ALandscapeGizmoActiveActor_K2_SetActorRelativeRotation_Params params;
	params.NewRelativeRotation = NewRelativeRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_SetActorRelativeLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 NewRelativeLocation            (Parm, IsPlainOldData)
// bool                           bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75DE6FB40              		 offset:446fb40                       

void ALandscapeGizmoActiveActor::K2_SetActorRelativeLocation(const struct FVector& NewRelativeLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_SetActorRelativeLocation"));

	ALandscapeGizmoActiveActor_K2_SetActorRelativeLocation_Params params;
	params.NewRelativeLocation = NewRelativeLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_SetActorLocationAndRotation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 NewLocation                    (Parm, IsPlainOldData)
// struct FRotator                NewRotation                    (Parm, IsPlainOldData)
// bool                           bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75CA38080              		 offset:3038080                       

bool ALandscapeGizmoActiveActor::K2_SetActorLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_SetActorLocationAndRotation"));

	ALandscapeGizmoActiveActor_K2_SetActorLocationAndRotation_Params params;
	params.NewLocation = NewLocation;
	params.NewRotation = NewRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_SetActorLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 NewLocation                    (Parm, IsPlainOldData)
// bool                           bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D0DD4F0              		 offset:36dd4f0                       

bool ALandscapeGizmoActiveActor::K2_SetActorLocation(const struct FVector& NewLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_SetActorLocation"));

	ALandscapeGizmoActiveActor_K2_SetActorLocation_Params params;
	params.NewLocation = NewLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_OnReset
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActiveActor::K2_OnReset()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_OnReset"));

	ALandscapeGizmoActiveActor_K2_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_OnEndViewTarget
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActiveActor::K2_OnEndViewTarget(class APlayerController* PC)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_OnEndViewTarget"));

	ALandscapeGizmoActiveActor_K2_OnEndViewTarget_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_OnBecomeViewTarget
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void ALandscapeGizmoActiveActor::K2_OnBecomeViewTarget(class APlayerController* PC)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_OnBecomeViewTarget"));

	ALandscapeGizmoActiveActor_K2_OnBecomeViewTarget_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_GetRootComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF75BB24CE0              		 offset:2124ce0                       

class USceneComponent* ALandscapeGizmoActiveActor::K2_GetRootComponent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_GetRootComponent"));

	ALandscapeGizmoActiveActor_K2_GetRootComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_GetActorRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75BAFC250              		 offset:20fc250                       

struct FRotator ALandscapeGizmoActiveActor::K2_GetActorRotation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_GetActorRotation"));

	ALandscapeGizmoActiveActor_K2_GetActorRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_GetActorLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75BA7B5D0              		 offset:207b5d0                       

struct FVector ALandscapeGizmoActiveActor::K2_GetActorLocation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_GetActorLocation"));

	ALandscapeGizmoActiveActor_K2_GetActorLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_DetachFromActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EDetachmentRule                LocationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EDetachmentRule                RotationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EDetachmentRule                ScaleRule                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75CD2DF30              		 offset:332df30                       

void ALandscapeGizmoActiveActor::K2_DetachFromActor(EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_DetachFromActor"));

	ALandscapeGizmoActiveActor_K2_DetachFromActor_Params params;
	params.LocationRule = LocationRule;
	params.RotationRule = RotationRule;
	params.ScaleRule = ScaleRule;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_DestroyComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActorComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF759EFF780              		 offset:4ff780                        

void ALandscapeGizmoActiveActor::K2_DestroyComponent(class UActorComponent* Component)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_DestroyComponent"));

	ALandscapeGizmoActiveActor_K2_DestroyComponent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_DestroyActor
// (Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF75A14D4D0              		 offset:74d4d0                        

void ALandscapeGizmoActiveActor::K2_DestroyActor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_DestroyActor"));

	ALandscapeGizmoActiveActor_K2_DestroyActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_AttachToComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*         Parent                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   SocketName                     (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule                LocationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule                RotationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule                ScaleRule                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWeldSimulatedBodies           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75B979D40              		 offset:1f79d40                       

void ALandscapeGizmoActiveActor::K2_AttachToComponent(class USceneComponent* Parent, const struct FName& SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AttachToComponent"));

	ALandscapeGizmoActiveActor_K2_AttachToComponent_Params params;
	params.Parent = Parent;
	params.SocketName = SocketName;
	params.LocationRule = LocationRule;
	params.RotationRule = RotationRule;
	params.ScaleRule = ScaleRule;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_AttachToActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  ParentActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SocketName                     (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule                LocationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule                RotationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule                ScaleRule                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWeldSimulatedBodies           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75A956630              		 offset:f56630                        

void ALandscapeGizmoActiveActor::K2_AttachToActor(class AActor* ParentActor, const struct FName& SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AttachToActor"));

	ALandscapeGizmoActiveActor_K2_AttachToActor_Params params;
	params.ParentActor = ParentActor;
	params.SocketName = SocketName;
	params.LocationRule = LocationRule;
	params.RotationRule = RotationRule;
	params.ScaleRule = ScaleRule;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_AttachRootComponentToActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InParentActor                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAttachLocation>   AttachLocationType             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWeldSimulatedBodies           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75D7779F0              		 offset:3d779f0                       

void ALandscapeGizmoActiveActor::K2_AttachRootComponentToActor(class AActor* InParentActor, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> AttachLocationType, bool bWeldSimulatedBodies)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AttachRootComponentToActor"));

	ALandscapeGizmoActiveActor_K2_AttachRootComponentToActor_Params params;
	params.InParentActor = InParentActor;
	params.InSocketName = InSocketName;
	params.AttachLocationType = AttachLocationType;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_AttachRootComponentTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*         InParent                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAttachLocation>   AttachLocationType             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWeldSimulatedBodies           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75DA63120              		 offset:4063120                       

void ALandscapeGizmoActiveActor::K2_AttachRootComponentTo(class USceneComponent* InParent, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> AttachLocationType, bool bWeldSimulatedBodies)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AttachRootComponentTo"));

	ALandscapeGizmoActiveActor_K2_AttachRootComponentTo_Params params;
	params.InParent = InParent;
	params.InSocketName = InSocketName;
	params.AttachLocationType = AttachLocationType;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_AddActorWorldTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              DeltaTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75D13CF80              		 offset:373cf80                       

void ALandscapeGizmoActiveActor::K2_AddActorWorldTransform(const struct FTransform& DeltaTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AddActorWorldTransform"));

	ALandscapeGizmoActiveActor_K2_AddActorWorldTransform_Params params;
	params.DeltaTransform = DeltaTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_AddActorWorldRotation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                DeltaRotation                  (Parm, IsPlainOldData)
// bool                           bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF759CBDED0              		 offset:2bded0                        

void ALandscapeGizmoActiveActor::K2_AddActorWorldRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AddActorWorldRotation"));

	ALandscapeGizmoActiveActor_K2_AddActorWorldRotation_Params params;
	params.DeltaRotation = DeltaRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_AddActorWorldOffset
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 DeltaLocation                  (Parm, IsPlainOldData)
// bool                           bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75D7B6DF0              		 offset:3db6df0                       

void ALandscapeGizmoActiveActor::K2_AddActorWorldOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AddActorWorldOffset"));

	ALandscapeGizmoActiveActor_K2_AddActorWorldOffset_Params params;
	params.DeltaLocation = DeltaLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_AddActorLocalTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              NewTransform                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E9974D0              		 offset:4f974d0                       

void ALandscapeGizmoActiveActor::K2_AddActorLocalTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AddActorLocalTransform"));

	ALandscapeGizmoActiveActor_K2_AddActorLocalTransform_Params params;
	params.NewTransform = NewTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_AddActorLocalRotation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                DeltaRotation                  (Parm, IsPlainOldData)
// bool                           bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75B8845D0              		 offset:1e845d0                       

void ALandscapeGizmoActiveActor::K2_AddActorLocalRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AddActorLocalRotation"));

	ALandscapeGizmoActiveActor_K2_AddActorLocalRotation_Params params;
	params.DeltaRotation = DeltaRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_AddActorLocalOffset
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 DeltaLocation                  (Parm, IsPlainOldData)
// bool                           bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75D509340              		 offset:3b09340                       

void ALandscapeGizmoActiveActor::K2_AddActorLocalOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AddActorLocalOffset"));

	ALandscapeGizmoActiveActor_K2_AddActorLocalOffset_Params params;
	params.DeltaLocation = DeltaLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.IsOverlappingActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Other                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A60E870              		 offset:c0e870                        

bool ALandscapeGizmoActiveActor::IsOverlappingActor(class AActor* Other)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.IsOverlappingActor"));

	ALandscapeGizmoActiveActor_IsOverlappingActor_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.IsChildActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B84C4B0              		 offset:1e4c4b0                       

bool ALandscapeGizmoActiveActor::IsChildActor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.IsChildActor"));

	ALandscapeGizmoActiveActor_IsChildActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.IsActorTickEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B351BC0              		 offset:1951bc0                       

bool ALandscapeGizmoActiveActor::IsActorTickEnabled()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.IsActorTickEnabled"));

	ALandscapeGizmoActiveActor_IsActorTickEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.IsActorBeingDestroyed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75AC63B60              		 offset:1263b60                       

bool ALandscapeGizmoActiveActor::IsActorBeingDestroyed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.IsActorBeingDestroyed"));

	ALandscapeGizmoActiveActor_IsActorBeingDestroyed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.HasAuthority
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D1F1B00              		 offset:37f1b00                       

bool ALandscapeGizmoActiveActor::HasAuthority()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.HasAuthority"));

	ALandscapeGizmoActiveActor_HasAuthority_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetVerticalDistanceTo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A65AD30              		 offset:c5ad30                        

float ALandscapeGizmoActiveActor::GetVerticalDistanceTo(class AActor* OtherActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetVerticalDistanceTo"));

	ALandscapeGizmoActiveActor_GetVerticalDistanceTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetVelocity
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A224810              		 offset:824810                        

struct FVector ALandscapeGizmoActiveActor::GetVelocity()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetVelocity"));

	ALandscapeGizmoActiveActor_GetVelocity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75DE1C000              		 offset:441c000                       

struct FTransform ALandscapeGizmoActiveActor::GetTransform()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetTransform"));

	ALandscapeGizmoActiveActor_GetTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetTickableWhenPaused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75DCEE450              		 offset:42ee450                       

bool ALandscapeGizmoActiveActor::GetTickableWhenPaused()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetTickableWhenPaused"));

	ALandscapeGizmoActiveActor_GetTickableWhenPaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetSquaredDistanceTo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B995800              		 offset:1f95800                       

float ALandscapeGizmoActiveActor::GetSquaredDistanceTo(class AActor* OtherActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetSquaredDistanceTo"));

	ALandscapeGizmoActiveActor_GetSquaredDistanceTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetRemoteRole
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ENetRole>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75E336BF0              		 offset:4936bf0                       

TEnumAsByte<ENetRole> ALandscapeGizmoActiveActor::GetRemoteRole()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetRemoteRole"));

	ALandscapeGizmoActiveActor_GetRemoteRole_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetParentComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UChildActorComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF75E2970F0              		 offset:48970f0                       

class UChildActorComponent* ALandscapeGizmoActiveActor::GetParentComponent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetParentComponent"));

	ALandscapeGizmoActiveActor_GetParentComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetParentActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A84B430              		 offset:e4b430                        

class AActor* ALandscapeGizmoActiveActor::GetParentActor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetParentActor"));

	ALandscapeGizmoActiveActor_GetParentActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetOwner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75BA7B530              		 offset:207b530                       

class AActor* ALandscapeGizmoActiveActor::GetOwner()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetOwner"));

	ALandscapeGizmoActiveActor_GetOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetOverlappingComponents
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UPrimitiveComponent*> OverlappingComponents          (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF75BA528E0              		 offset:20528e0                       

void ALandscapeGizmoActiveActor::GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OverlappingComponents)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetOverlappingComponents"));

	ALandscapeGizmoActiveActor_GetOverlappingComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OverlappingComponents != nullptr)
		*OverlappingComponents = params.OverlappingComponents;
}


// Function Engine.Actor.GetOverlappingActors
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>          OverlappingActors              (Parm, OutParm, ZeroConstructor)
// class UClass*                  ClassFilter                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75ACF8230              		 offset:12f8230                       

void ALandscapeGizmoActiveActor::GetOverlappingActors(class UClass* ClassFilter, TArray<class AActor*>* OverlappingActors)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetOverlappingActors"));

	ALandscapeGizmoActiveActor_GetOverlappingActors_Params params;
	params.ClassFilter = ClassFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OverlappingActors != nullptr)
		*OverlappingActors = params.OverlappingActors;
}


// Function Engine.Actor.GetLifeSpan
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75AD13FA0              		 offset:1313fa0                       

float ALandscapeGizmoActiveActor::GetLifeSpan()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetLifeSpan"));

	ALandscapeGizmoActiveActor_GetLifeSpan_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInstigatorController
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AController*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D712ED0              		 offset:3d12ed0                       

class AController* ALandscapeGizmoActiveActor::GetInstigatorController()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetInstigatorController"));

	ALandscapeGizmoActiveActor_GetInstigatorController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInstigator
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D73B330              		 offset:3d3b330                       

class APawn* ALandscapeGizmoActiveActor::GetInstigator()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetInstigator"));

	ALandscapeGizmoActiveActor_GetInstigator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInputVectorAxisValue
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    InputAxisKey                   (ConstParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75EBF4490              		 offset:51f4490                       

struct FVector ALandscapeGizmoActiveActor::GetInputVectorAxisValue(const struct FKey& InputAxisKey)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetInputVectorAxisValue"));

	ALandscapeGizmoActiveActor_GetInputVectorAxisValue_Params params;
	params.InputAxisKey = InputAxisKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInputAxisValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   InputAxisName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75CE39660              		 offset:3439660                       

float ALandscapeGizmoActiveActor::GetInputAxisValue(const struct FName& InputAxisName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetInputAxisValue"));

	ALandscapeGizmoActiveActor_GetInputAxisValue_Params params;
	params.InputAxisName = InputAxisName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInputAxisKeyValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    InputAxisKey                   (ConstParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF759CE1300              		 offset:2e1300                        

float ALandscapeGizmoActiveActor::GetInputAxisKeyValue(const struct FKey& InputAxisKey)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetInputAxisKeyValue"));

	ALandscapeGizmoActiveActor_GetInputAxisKeyValue_Params params;
	params.InputAxisKey = InputAxisKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetHorizontalDotProductTo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A879590              		 offset:e79590                        

float ALandscapeGizmoActiveActor::GetHorizontalDotProductTo(class AActor* OtherActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetHorizontalDotProductTo"));

	ALandscapeGizmoActiveActor_GetHorizontalDotProductTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetHorizontalDistanceTo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A9A8020              		 offset:fa8020                        

float ALandscapeGizmoActiveActor::GetHorizontalDistanceTo(class AActor* OtherActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetHorizontalDistanceTo"));

	ALandscapeGizmoActiveActor_GetHorizontalDistanceTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetGameTimeSinceCreation
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A162FB0              		 offset:762fb0                        

float ALandscapeGizmoActiveActor::GetGameTimeSinceCreation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetGameTimeSinceCreation"));

	ALandscapeGizmoActiveActor_GetGameTimeSinceCreation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetDotProductTo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B804420              		 offset:1e04420                       

float ALandscapeGizmoActiveActor::GetDotProductTo(class AActor* OtherActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetDotProductTo"));

	ALandscapeGizmoActiveActor_GetDotProductTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetDistanceTo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75E190050              		 offset:4790050                       

float ALandscapeGizmoActiveActor::GetDistanceTo(class AActor* OtherActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetDistanceTo"));

	ALandscapeGizmoActiveActor_GetDistanceTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetComponentsByTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ComponentClass                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UActorComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF75E77CDC0              		 offset:4d7cdc0                       

TArray<class UActorComponent*> ALandscapeGizmoActiveActor::GetComponentsByTag(class UClass* ComponentClass, const struct FName& Tag)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetComponentsByTag"));

	ALandscapeGizmoActiveActor_GetComponentsByTag_Params params;
	params.ComponentClass = ComponentClass;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetComponentsByClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ComponentClass                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UActorComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF75D1D95E0              		 offset:37d95e0                       

TArray<class UActorComponent*> ALandscapeGizmoActiveActor::GetComponentsByClass(class UClass* ComponentClass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetComponentsByClass"));

	ALandscapeGizmoActiveActor_GetComponentsByClass_Params params;
	params.ComponentClass = ComponentClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetComponentByClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ComponentClass                 (Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF75A9BAD60              		 offset:fbad60                        

class UActorComponent* ALandscapeGizmoActiveActor::GetComponentByClass(class UClass* ComponentClass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetComponentByClass"));

	ALandscapeGizmoActiveActor_GetComponentByClass_Params params;
	params.ComponentClass = ComponentClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetAttachParentSocketName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF759B1B710              		 offset:11b710                        

struct FName ALandscapeGizmoActiveActor::GetAttachParentSocketName()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetAttachParentSocketName"));

	ALandscapeGizmoActiveActor_GetAttachParentSocketName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetAttachParentActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF759E7EDE0              		 offset:47ede0                        

class AActor* ALandscapeGizmoActiveActor::GetAttachParentActor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetAttachParentActor"));

	ALandscapeGizmoActiveActor_GetAttachParentActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetAttachedActors
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>          OutActors                      (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF75E0CCCF0              		 offset:46cccf0                       

void ALandscapeGizmoActiveActor::GetAttachedActors(TArray<class AActor*>* OutActors)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetAttachedActors"));

	ALandscapeGizmoActiveActor_GetAttachedActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;
}


// Function Engine.Actor.GetAllChildActors
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>          ChildActors                    (Parm, OutParm, ZeroConstructor)
// bool                           bIncludeDescendants            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75CFB97E0              		 offset:35b97e0                       

void ALandscapeGizmoActiveActor::GetAllChildActors(bool bIncludeDescendants, TArray<class AActor*>* ChildActors)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetAllChildActors"));

	ALandscapeGizmoActiveActor_GetAllChildActors_Params params;
	params.bIncludeDescendants = bIncludeDescendants;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChildActors != nullptr)
		*ChildActors = params.ChildActors;
}


// Function Engine.Actor.GetActorUpVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75DABA8E0              		 offset:40ba8e0                       

struct FVector ALandscapeGizmoActiveActor::GetActorUpVector()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorUpVector"));

	ALandscapeGizmoActiveActor_GetActorUpVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorTimeDilation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D097720              		 offset:3697720                       

float ALandscapeGizmoActiveActor::GetActorTimeDilation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorTimeDilation"));

	ALandscapeGizmoActiveActor_GetActorTimeDilation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorTickInterval
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B033170              		 offset:1633170                       

float ALandscapeGizmoActiveActor::GetActorTickInterval()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorTickInterval"));

	ALandscapeGizmoActiveActor_GetActorTickInterval_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorScale3D
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75DF230C0              		 offset:45230c0                       

struct FVector ALandscapeGizmoActiveActor::GetActorScale3D()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorScale3D"));

	ALandscapeGizmoActiveActor_GetActorScale3D_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorRightVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D5975F0              		 offset:3b975f0                       

struct FVector ALandscapeGizmoActiveActor::GetActorRightVector()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorRightVector"));

	ALandscapeGizmoActiveActor_GetActorRightVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorRelativeScale3D
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A687570              		 offset:c87570                        

struct FVector ALandscapeGizmoActiveActor::GetActorRelativeScale3D()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorRelativeScale3D"));

	ALandscapeGizmoActiveActor_GetActorRelativeScale3D_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorForwardVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75DD93E50              		 offset:4393e50                       

struct FVector ALandscapeGizmoActiveActor::GetActorForwardVector()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorForwardVector"));

	ALandscapeGizmoActiveActor_GetActorForwardVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorEyesViewPoint
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 OutLocation                    (Parm, OutParm, IsPlainOldData)
// struct FRotator                OutRotation                    (Parm, OutParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B72EB90              		 offset:1d2eb90                       

void ALandscapeGizmoActiveActor::GetActorEyesViewPoint(struct FVector* OutLocation, struct FRotator* OutRotation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorEyesViewPoint"));

	ALandscapeGizmoActiveActor_GetActorEyesViewPoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
	if (OutRotation != nullptr)
		*OutRotation = params.OutRotation;
}


// Function Engine.Actor.GetActorEnableCollision
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A8CDDA0              		 offset:ecdda0                        

bool ALandscapeGizmoActiveActor::GetActorEnableCollision()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorEnableCollision"));

	ALandscapeGizmoActiveActor_GetActorEnableCollision_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorBounds
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bOnlyCollidingComponents       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Origin                         (Parm, OutParm, IsPlainOldData)
// struct FVector                 BoxExtent                      (Parm, OutParm, IsPlainOldData)
// FunctionAddress:0x00007FF75DC574E0              		 offset:42574e0                       

void ALandscapeGizmoActiveActor::GetActorBounds(bool bOnlyCollidingComponents, struct FVector* Origin, struct FVector* BoxExtent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorBounds"));

	ALandscapeGizmoActiveActor_GetActorBounds_Params params;
	params.bOnlyCollidingComponents = bOnlyCollidingComponents;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Origin != nullptr)
		*Origin = params.Origin;
	if (BoxExtent != nullptr)
		*BoxExtent = params.BoxExtent;
}


// Function Engine.Actor.ForceNetUpdate
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF75D9BBE00              		 offset:3fbbe00                       

void ALandscapeGizmoActiveActor::ForceNetUpdate()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ForceNetUpdate"));

	ALandscapeGizmoActiveActor_ForceNetUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.FlushNetDormancy
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF75EE02D90              		 offset:5402d90                       

void ALandscapeGizmoActiveActor::FlushNetDormancy()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.FlushNetDormancy"));

	ALandscapeGizmoActiveActor_FlushNetDormancy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.EnableInput
// (Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75B0C3560              		 offset:16c3560                       

void ALandscapeGizmoActiveActor::EnableInput(class APlayerController* PlayerController)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.EnableInput"));

	ALandscapeGizmoActiveActor_EnableInput_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.DisableInput
// (Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75A238810              		 offset:838810                        

void ALandscapeGizmoActiveActor::DisableInput(class APlayerController* PlayerController)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.DisableInput"));

	ALandscapeGizmoActiveActor_DisableInput_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.DetachRootComponentFromParent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bMaintainWorldPosition         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75CEA0320              		 offset:34a0320                       

void ALandscapeGizmoActiveActor::DetachRootComponentFromParent(bool bMaintainWorldPosition)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.DetachRootComponentFromParent"));

	ALandscapeGizmoActiveActor_DetachRootComponentFromParent_Params params;
	params.bMaintainWorldPosition = bMaintainWorldPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.AddTickPrerequisiteComponent
// (Native, Public, BlueprintCallable)
// Parameters:
// class UActorComponent*         PrerequisiteComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF75A7F7A70              		 offset:df7a70                        

void ALandscapeGizmoActiveActor::AddTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.AddTickPrerequisiteComponent"));

	ALandscapeGizmoActiveActor_AddTickPrerequisiteComponent_Params params;
	params.PrerequisiteComponent = PrerequisiteComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.AddTickPrerequisiteActor
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  PrerequisiteActor              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75B4434D0              		 offset:1a434d0                       

void ALandscapeGizmoActiveActor::AddTickPrerequisiteActor(class AActor* PrerequisiteActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.AddTickPrerequisiteActor"));

	ALandscapeGizmoActiveActor_AddTickPrerequisiteActor_Params params;
	params.PrerequisiteActor = PrerequisiteActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.AddComponent
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   TemplateName                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bManualAttachment              (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              RelativeTransform              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UObject*                 ComponentTemplateContext       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF75E743450              		 offset:4d43450                       

class UActorComponent* ALandscapeGizmoActiveActor::AddComponent(const struct FName& TemplateName, bool bManualAttachment, const struct FTransform& RelativeTransform, class UObject* ComponentTemplateContext)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.AddComponent"));

	ALandscapeGizmoActiveActor_AddComponent_Params params;
	params.TemplateName = TemplateName;
	params.bManualAttachment = bManualAttachment;
	params.RelativeTransform = RelativeTransform;
	params.ComponentTemplateContext = ComponentTemplateContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.ActorHasTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75BA24CC0              		 offset:2024cc0                       

bool ALandscapeGizmoActiveActor::ActorHasTag(const struct FName& Tag)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ActorHasTag"));

	ALandscapeGizmoActiveActor_ActorHasTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.WakeRigidBody
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75AB19B00              		 offset:1119b00                       

void ULandscapeGizmoRenderComponent::WakeRigidBody(const struct FName& BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.WakeRigidBody"));

	ULandscapeGizmoRenderComponent_WakeRigidBody_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.WakeAllRigidBodies
// (Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF75B75EB60              		 offset:1d5eb60                       

void ULandscapeGizmoRenderComponent::WakeAllRigidBodies()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.WakeAllRigidBodies"));

	ULandscapeGizmoRenderComponent_WakeAllRigidBodies_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetWalkableSlopeOverride
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWalkableSlopeOverride  NewOverride                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A8CDE20              		 offset:ecde20                        

void ULandscapeGizmoRenderComponent::SetWalkableSlopeOverride(const struct FWalkableSlopeOverride& NewOverride)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetWalkableSlopeOverride"));

	ULandscapeGizmoRenderComponent_SetWalkableSlopeOverride_Params params;
	params.NewOverride = NewOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetUseCCD
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           InUseCCD                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75B4F0A80              		 offset:1af0a80                       

void ULandscapeGizmoRenderComponent::SetUseCCD(bool InUseCCD, const struct FName& BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetUseCCD"));

	ULandscapeGizmoRenderComponent_SetUseCCD_Params params;
	params.InUseCCD = InUseCCD;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetTranslucentSortPriority
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewTranslucentSortPriority     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75A71F9D0              		 offset:d1f9d0                        

void ULandscapeGizmoRenderComponent::SetTranslucentSortPriority(int NewTranslucentSortPriority)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetTranslucentSortPriority"));

	ULandscapeGizmoRenderComponent_SetTranslucentSortPriority_Params params;
	params.NewTranslucentSortPriority = NewTranslucentSortPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetSimulatePhysics
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bSimulate                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E22E120              		 offset:482e120                       

void ULandscapeGizmoRenderComponent::SetSimulatePhysics(bool bSimulate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetSimulatePhysics"));

	ULandscapeGizmoRenderComponent_SetSimulatePhysics_Params params;
	params.bSimulate = bSimulate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetRenderInMono
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bValue                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75AF4EBF0              		 offset:154ebf0                       

void ULandscapeGizmoRenderComponent::SetRenderInMono(bool bValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetRenderInMono"));

	ULandscapeGizmoRenderComponent_SetRenderInMono_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetRenderInMainPass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bValue                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75EAFB340              		 offset:50fb340                       

void ULandscapeGizmoRenderComponent::SetRenderInMainPass(bool bValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetRenderInMainPass"));

	ULandscapeGizmoRenderComponent_SetRenderInMainPass_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetRenderCustomDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bValue                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75D2DFAA0              		 offset:38dfaa0                       

void ULandscapeGizmoRenderComponent::SetRenderCustomDepth(bool bValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetRenderCustomDepth"));

	ULandscapeGizmoRenderComponent_SetRenderCustomDepth_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysMaterialOverride
// (Native, Public, BlueprintCallable)
// Parameters:
// class UPhysicalMaterial*       NewPhysMaterial                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75B81A610              		 offset:1e1a610                       

void ULandscapeGizmoRenderComponent::SetPhysMaterialOverride(class UPhysicalMaterial* NewPhysMaterial)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetPhysMaterialOverride"));

	ULandscapeGizmoRenderComponent_SetPhysMaterialOverride_Params params;
	params.NewPhysMaterial = NewPhysMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewMaxAngVel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75DE5BF10              		 offset:445bf10                       

void ULandscapeGizmoRenderComponent::SetPhysicsMaxAngularVelocity(float NewMaxAngVel, bool bAddToCurrent, const struct FName& BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity"));

	ULandscapeGizmoRenderComponent_SetPhysicsMaxAngularVelocity_Params params;
	params.NewMaxAngVel = NewMaxAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 NewVel                         (Parm, IsPlainOldData)
// bool                           bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E7437B0              		 offset:4d437b0                       

void ULandscapeGizmoRenderComponent::SetPhysicsLinearVelocity(const struct FVector& NewVel, bool bAddToCurrent, const struct FName& BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity"));

	ULandscapeGizmoRenderComponent_SetPhysicsLinearVelocity_Params params;
	params.NewVel = NewVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 NewAngVel                      (Parm, IsPlainOldData)
// bool                           bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75A6875B0              		 offset:c875b0                        

void ULandscapeGizmoRenderComponent::SetPhysicsAngularVelocity(const struct FVector& NewAngVel, bool bAddToCurrent, const struct FName& BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity"));

	ULandscapeGizmoRenderComponent_SetPhysicsAngularVelocity_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetOwnerNoSee
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewOwnerNoSee                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75AD13FE0              		 offset:1313fe0                       

void ULandscapeGizmoRenderComponent::SetOwnerNoSee(bool bNewOwnerNoSee)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetOwnerNoSee"));

	ULandscapeGizmoRenderComponent_SetOwnerNoSee_Params params;
	params.bNewOwnerNoSee = bNewOwnerNoSee;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetOnlyOwnerSee
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewOnlyOwnerSee               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75D74F700              		 offset:3d4f700                       

void ULandscapeGizmoRenderComponent::SetOnlyOwnerSee(bool bNewOnlyOwnerSee)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetOnlyOwnerSee"));

	ULandscapeGizmoRenderComponent_SetOnlyOwnerSee_Params params;
	params.bNewOnlyOwnerSee = bNewOnlyOwnerSee;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetNotifyRigidBodyCollision
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewNotifyRigidBodyCollision   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75B3B58D0              		 offset:19b58d0                       

void ULandscapeGizmoRenderComponent::SetNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetNotifyRigidBodyCollision"));

	ULandscapeGizmoRenderComponent_SetNotifyRigidBodyCollision_Params params;
	params.bNewNotifyRigidBodyCollision = bNewNotifyRigidBodyCollision;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetMaterialByName
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   MaterialSlotName               (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      Material                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75D5240B0              		 offset:3b240b0                       

void ULandscapeGizmoRenderComponent::SetMaterialByName(const struct FName& MaterialSlotName, class UMaterialInterface* Material)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetMaterialByName"));

	ULandscapeGizmoRenderComponent_SetMaterialByName_Params params;
	params.MaterialSlotName = MaterialSlotName;
	params.Material = Material;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetMaterial
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            ElementIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      Material                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75A12F450              		 offset:72f450                        

void ULandscapeGizmoRenderComponent::SetMaterial(int ElementIndex, class UMaterialInterface* Material)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetMaterial"));

	ULandscapeGizmoRenderComponent_SetMaterial_Params params;
	params.ElementIndex = ElementIndex;
	params.Material = Material;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetMassScale
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          InMassScale                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75CAB6D10              		 offset:30b6d10                       

void ULandscapeGizmoRenderComponent::SetMassScale(const struct FName& BoneName, float InMassScale)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetMassScale"));

	ULandscapeGizmoRenderComponent_SetMassScale_Params params;
	params.BoneName = BoneName;
	params.InMassScale = InMassScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetMassOverrideInKg
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          MassInKg                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideMass                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75B3064C0              		 offset:19064c0                       

void ULandscapeGizmoRenderComponent::SetMassOverrideInKg(const struct FName& BoneName, float MassInKg, bool bOverrideMass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetMassOverrideInKg"));

	ULandscapeGizmoRenderComponent_SetMassOverrideInKg_Params params;
	params.BoneName = BoneName;
	params.MassInKg = MassInKg;
	params.bOverrideMass = bOverrideMass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetLockedAxis
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EDOFMode>          LockedAxis                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75CC04710              		 offset:3204710                       

void ULandscapeGizmoRenderComponent::SetLockedAxis(TEnumAsByte<EDOFMode> LockedAxis)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetLockedAxis"));

	ULandscapeGizmoRenderComponent_SetLockedAxis_Params params;
	params.LockedAxis = LockedAxis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetLinearDamping
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InDamping                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75BA52990              		 offset:2052990                       

void ULandscapeGizmoRenderComponent::SetLinearDamping(float InDamping)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetLinearDamping"));

	ULandscapeGizmoRenderComponent_SetLinearDamping_Params params;
	params.InDamping = InDamping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetEnableGravity
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bGravityEnabled                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75D912440              		 offset:3f12440                       

void ULandscapeGizmoRenderComponent::SetEnableGravity(bool bGravityEnabled)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetEnableGravity"));

	ULandscapeGizmoRenderComponent_SetEnableGravity_Params params;
	params.bGravityEnabled = bGravityEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCustomDepthStencilWriteMask
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ERendererStencilMask           WriteMaskBit                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75A8E74D0              		 offset:ee74d0                        

void ULandscapeGizmoRenderComponent::SetCustomDepthStencilWriteMask(ERendererStencilMask WriteMaskBit)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetCustomDepthStencilWriteMask"));

	ULandscapeGizmoRenderComponent_SetCustomDepthStencilWriteMask_Params params;
	params.WriteMaskBit = WriteMaskBit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCustomDepthStencilValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75D6924B0              		 offset:3c924b0                       

void ULandscapeGizmoRenderComponent::SetCustomDepthStencilValue(int Value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetCustomDepthStencilValue"));

	ULandscapeGizmoRenderComponent_SetCustomDepthStencilValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCullDistance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewCullDistance                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75DAFAA30              		 offset:40faa30                       

void ULandscapeGizmoRenderComponent::SetCullDistance(float NewCullDistance)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetCullDistance"));

	ULandscapeGizmoRenderComponent_SetCullDistance_Params params;
	params.NewCullDistance = NewCullDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetConstraintMode
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EDOFMode>          ConstraintMode                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75D19AAB0              		 offset:379aab0                       

void ULandscapeGizmoRenderComponent::SetConstraintMode(TEnumAsByte<EDOFMode> ConstraintMode)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetConstraintMode"));

	ULandscapeGizmoRenderComponent_SetConstraintMode_Params params;
	params.ConstraintMode = ConstraintMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionResponseToChannel
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ECollisionChannel> Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECollisionResponse> NewResponse                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75A81E800              		 offset:e1e800                        

void ULandscapeGizmoRenderComponent::SetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> NewResponse)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetCollisionResponseToChannel"));

	ULandscapeGizmoRenderComponent_SetCollisionResponseToChannel_Params params;
	params.Channel = Channel;
	params.NewResponse = NewResponse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionResponseToAllChannels
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ECollisionResponse> NewResponse                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75A291880              		 offset:891880                        

void ULandscapeGizmoRenderComponent::SetCollisionResponseToAllChannels(TEnumAsByte<ECollisionResponse> NewResponse)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetCollisionResponseToAllChannels"));

	ULandscapeGizmoRenderComponent_SetCollisionResponseToAllChannels_Params params;
	params.NewResponse = NewResponse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionProfileName
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InCollisionProfileName         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75BACEC70              		 offset:20cec70                       

void ULandscapeGizmoRenderComponent::SetCollisionProfileName(const struct FName& InCollisionProfileName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetCollisionProfileName"));

	ULandscapeGizmoRenderComponent_SetCollisionProfileName_Params params;
	params.InCollisionProfileName = InCollisionProfileName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionObjectType
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ECollisionChannel> Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75B29F3E0              		 offset:189f3e0                       

void ULandscapeGizmoRenderComponent::SetCollisionObjectType(TEnumAsByte<ECollisionChannel> Channel)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetCollisionObjectType"));

	ULandscapeGizmoRenderComponent_SetCollisionObjectType_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ECollisionEnabled> NewType                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75DE89020              		 offset:4489020                       

void ULandscapeGizmoRenderComponent::SetCollisionEnabled(TEnumAsByte<ECollisionEnabled> NewType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetCollisionEnabled"));

	ULandscapeGizmoRenderComponent_SetCollisionEnabled_Params params;
	params.NewType = NewType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCenterOfMass
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 CenterOfMassOffset             (Parm, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E77CF00              		 offset:4d7cf00                       

void ULandscapeGizmoRenderComponent::SetCenterOfMass(const struct FVector& CenterOfMassOffset, const struct FName& BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetCenterOfMass"));

	ULandscapeGizmoRenderComponent_SetCenterOfMass_Params params;
	params.CenterOfMassOffset = CenterOfMassOffset;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCastShadow
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           NewCastShadow                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75D712FE0              		 offset:3d12fe0                       

void ULandscapeGizmoRenderComponent::SetCastShadow(bool NewCastShadow)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetCastShadow"));

	ULandscapeGizmoRenderComponent_SetCastShadow_Params params;
	params.NewCastShadow = NewCastShadow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetBoundsScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewBoundsScale                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75BBCD480              		 offset:21cd480                       

void ULandscapeGizmoRenderComponent::SetBoundsScale(float NewBoundsScale)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetBoundsScale"));

	ULandscapeGizmoRenderComponent_SetBoundsScale_Params params;
	params.NewBoundsScale = NewBoundsScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAngularDamping
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InDamping                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75B365D30              		 offset:1965d30                       

void ULandscapeGizmoRenderComponent::SetAngularDamping(float InDamping)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetAngularDamping"));

	ULandscapeGizmoRenderComponent_SetAngularDamping_Params params;
	params.InDamping = InDamping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAllUseCCD
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           InUseCCD                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF759D7D090              		 offset:37d090                        

void ULandscapeGizmoRenderComponent::SetAllUseCCD(bool InUseCCD)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetAllUseCCD"));

	ULandscapeGizmoRenderComponent_SetAllUseCCD_Params params;
	params.InUseCCD = InUseCCD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 NewVel                         (Parm, IsPlainOldData)
// bool                           bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75A026D80              		 offset:626d80                        

void ULandscapeGizmoRenderComponent::SetAllPhysicsLinearVelocity(const struct FVector& NewVel, bool bAddToCurrent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity"));

	ULandscapeGizmoRenderComponent_SetAllPhysicsLinearVelocity_Params params;
	params.NewVel = NewVel;
	params.bAddToCurrent = bAddToCurrent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocity
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 NewAngVel                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75AC37DE0              		 offset:1237de0                       

void ULandscapeGizmoRenderComponent::SetAllPhysicsAngularVelocity(const struct FVector& NewAngVel, bool bAddToCurrent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocity"));

	ULandscapeGizmoRenderComponent_SetAllPhysicsAngularVelocity_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAllMassScale
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InMassScale                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75CE69380              		 offset:3469380                       

void ULandscapeGizmoRenderComponent::SetAllMassScale(float InMassScale)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.SetAllMassScale"));

	ULandscapeGizmoRenderComponent_SetAllMassScale_Params params;
	params.InMassScale = InMassScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.ScaleByMomentOfInertia
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 InputVector                    (Parm, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D372B70              		 offset:3972b70                       

struct FVector ULandscapeGizmoRenderComponent::ScaleByMomentOfInertia(const struct FVector& InputVector, const struct FName& BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.ScaleByMomentOfInertia"));

	ULandscapeGizmoRenderComponent_ScaleByMomentOfInertia_Params params;
	params.InputVector = InputVector;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.PutRigidBodyToSleep
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75A9567F0              		 offset:f567f0                        

void ULandscapeGizmoRenderComponent::PutRigidBodyToSleep(const struct FName& BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.PutRigidBodyToSleep"));

	ULandscapeGizmoRenderComponent_PutRigidBodyToSleep_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.K2_LineTraceComponent
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 TraceStart                     (Parm, IsPlainOldData)
// struct FVector                 TraceEnd                       (Parm, IsPlainOldData)
// bool                           bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShowTrace                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, OutParm, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, OutParm, IsPlainOldData)
// struct FName                   BoneName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF759E260F0              		 offset:4260f0                        

bool ULandscapeGizmoRenderComponent::K2_LineTraceComponent(const struct FVector& TraceStart, const struct FVector& TraceEnd, bool bTraceComplex, bool bShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.K2_LineTraceComponent"));

	ULandscapeGizmoRenderComponent_K2_LineTraceComponent_Params params;
	params.TraceStart = TraceStart;
	params.TraceEnd = TraceEnd;
	params.bTraceComplex = bTraceComplex;
	params.bShowTrace = bShowTrace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
	if (BoneName != nullptr)
		*BoneName = params.BoneName;
	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_IsQueryCollisionEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D3B7700              		 offset:39b7700                       

bool ULandscapeGizmoRenderComponent::K2_IsQueryCollisionEnabled()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.K2_IsQueryCollisionEnabled"));

	ULandscapeGizmoRenderComponent_K2_IsQueryCollisionEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_IsPhysicsCollisionEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A291840              		 offset:891840                        

bool ULandscapeGizmoRenderComponent::K2_IsPhysicsCollisionEnabled()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.K2_IsPhysicsCollisionEnabled"));

	ULandscapeGizmoRenderComponent_K2_IsPhysicsCollisionEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_IsCollisionEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A65ADD0              		 offset:c5add0                        

bool ULandscapeGizmoRenderComponent::K2_IsCollisionEnabled()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.K2_IsCollisionEnabled"));

	ULandscapeGizmoRenderComponent_K2_IsCollisionEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IsOverlappingComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*     OtherComp                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75CE11D60              		 offset:3411d60                       

bool ULandscapeGizmoRenderComponent::IsOverlappingComponent(class UPrimitiveComponent* OtherComp)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.IsOverlappingComponent"));

	ULandscapeGizmoRenderComponent_IsOverlappingComponent_Params params;
	params.OtherComp = OtherComp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IsOverlappingActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Other                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B0940D0              		 offset:16940d0                       

bool ULandscapeGizmoRenderComponent::IsOverlappingActor(class AActor* Other)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.IsOverlappingActor"));

	ULandscapeGizmoRenderComponent_IsOverlappingActor_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IsGravityEnabled
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75BBE8A20              		 offset:21e8a20                       

bool ULandscapeGizmoRenderComponent::IsGravityEnabled()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.IsGravityEnabled"));

	ULandscapeGizmoRenderComponent_IsGravityEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IsAnyRigidBodyAwake
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B693550              		 offset:1c93550                       

bool ULandscapeGizmoRenderComponent::IsAnyRigidBodyAwake()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.IsAnyRigidBodyAwake"));

	ULandscapeGizmoRenderComponent_IsAnyRigidBodyAwake_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IgnoreComponentWhenMoving
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bShouldIgnore                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF759AB2430              		 offset:b2430                         

void ULandscapeGizmoRenderComponent::IgnoreComponentWhenMoving(class UPrimitiveComponent* Component, bool bShouldIgnore)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.IgnoreComponentWhenMoving"));

	ULandscapeGizmoRenderComponent_IgnoreComponentWhenMoving_Params params;
	params.Component = Component;
	params.bShouldIgnore = bShouldIgnore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.IgnoreActorWhenMoving
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShouldIgnore                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75AE17510              		 offset:1417510                       

void ULandscapeGizmoRenderComponent::IgnoreActorWhenMoving(class AActor* Actor, bool bShouldIgnore)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.IgnoreActorWhenMoving"));

	ULandscapeGizmoRenderComponent_IgnoreActorWhenMoving_Params params;
	params.Actor = Actor;
	params.bShouldIgnore = bShouldIgnore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.GetWalkableSlopeOverride
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FWalkableSlopeOverride  ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D9A3850              		 offset:3fa3850                       

struct FWalkableSlopeOverride ULandscapeGizmoRenderComponent::GetWalkableSlopeOverride()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetWalkableSlopeOverride"));

	ULandscapeGizmoRenderComponent_GetWalkableSlopeOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetPhysicsLinearVelocityAtPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Point                          (Parm, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B82D3D0              		 offset:1e2d3d0                       

struct FVector ULandscapeGizmoRenderComponent::GetPhysicsLinearVelocityAtPoint(const struct FVector& Point, const struct FName& BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetPhysicsLinearVelocityAtPoint"));

	ULandscapeGizmoRenderComponent_GetPhysicsLinearVelocityAtPoint_Params params;
	params.Point = Point;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75E9831B0              		 offset:4f831b0                       

struct FVector ULandscapeGizmoRenderComponent::GetPhysicsLinearVelocity(const struct FName& BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity"));

	ULandscapeGizmoRenderComponent_GetPhysicsLinearVelocity_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75E72C980              		 offset:4d2c980                       

struct FVector ULandscapeGizmoRenderComponent::GetPhysicsAngularVelocity(const struct FName& BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity"));

	ULandscapeGizmoRenderComponent_GetPhysicsAngularVelocity_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetOverlappingComponents
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UPrimitiveComponent*> InOverlappingComponents        (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF75E31B2B0              		 offset:491b2b0                       

void ULandscapeGizmoRenderComponent::GetOverlappingComponents(TArray<class UPrimitiveComponent*>* InOverlappingComponents)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetOverlappingComponents"));

	ULandscapeGizmoRenderComponent_GetOverlappingComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InOverlappingComponents != nullptr)
		*InOverlappingComponents = params.InOverlappingComponents;
}


// Function Engine.PrimitiveComponent.GetOverlappingActors
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>          OverlappingActors              (Parm, OutParm, ZeroConstructor)
// class UClass*                  ClassFilter                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75A92E620              		 offset:f2e620                        

void ULandscapeGizmoRenderComponent::GetOverlappingActors(class UClass* ClassFilter, TArray<class AActor*>* OverlappingActors)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetOverlappingActors"));

	ULandscapeGizmoRenderComponent_GetOverlappingActors_Params params;
	params.ClassFilter = ClassFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OverlappingActors != nullptr)
		*OverlappingActors = params.OverlappingActors;
}


// Function Engine.PrimitiveComponent.GetOverlapInfos
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FOverlapInfo>    ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
// FunctionAddress:0x00007FF75DF88C80              		 offset:4588c80                       

TArray<struct FOverlapInfo> ULandscapeGizmoRenderComponent::GetOverlapInfos()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetOverlapInfos"));

	ULandscapeGizmoRenderComponent_GetOverlapInfos_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetNumMaterials
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75CDB37A0              		 offset:33b37a0                       

int ULandscapeGizmoRenderComponent::GetNumMaterials()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetNumMaterials"));

	ULandscapeGizmoRenderComponent_GetNumMaterials_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetMaterialFromCollisionFaceIndex
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            FaceIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75EAA54D0              		 offset:50a54d0                       

class UMaterialInterface* ULandscapeGizmoRenderComponent::GetMaterialFromCollisionFaceIndex(int FaceIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetMaterialFromCollisionFaceIndex"));

	ULandscapeGizmoRenderComponent_GetMaterialFromCollisionFaceIndex_Params params;
	params.FaceIndex = FaceIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetMaterial
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ElementIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75CAA3150              		 offset:30a3150                       

class UMaterialInterface* ULandscapeGizmoRenderComponent::GetMaterial(int ElementIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetMaterial"));

	ULandscapeGizmoRenderComponent_GetMaterial_Params params;
	params.ElementIndex = ElementIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetMassScale
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF759FB3E40              		 offset:5b3e40                        

float ULandscapeGizmoRenderComponent::GetMassScale(const struct FName& BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetMassScale"));

	ULandscapeGizmoRenderComponent_GetMassScale_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetMass
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A250460              		 offset:850460                        

float ULandscapeGizmoRenderComponent::GetMass()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetMass"));

	ULandscapeGizmoRenderComponent_GetMass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetLinearDamping
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A74E100              		 offset:d4e100                        

float ULandscapeGizmoRenderComponent::GetLinearDamping()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetLinearDamping"));

	ULandscapeGizmoRenderComponent_GetLinearDamping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetInertiaTensor
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF759B47B30              		 offset:147b30                        

struct FVector ULandscapeGizmoRenderComponent::GetInertiaTensor(const struct FName& BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetInertiaTensor"));

	ULandscapeGizmoRenderComponent_GetInertiaTensor_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCollisionResponseToChannel
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ECollisionChannel> Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECollisionResponse> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D5BB720              		 offset:3bbb720                       

TEnumAsByte<ECollisionResponse> ULandscapeGizmoRenderComponent::GetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetCollisionResponseToChannel"));

	ULandscapeGizmoRenderComponent_GetCollisionResponseToChannel_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCollisionProfileName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75ED93CD0              		 offset:5393cd0                       

struct FName ULandscapeGizmoRenderComponent::GetCollisionProfileName()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetCollisionProfileName"));

	ULandscapeGizmoRenderComponent_GetCollisionProfileName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCollisionObjectType
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ECollisionChannel> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75EC0C810              		 offset:520c810                       

TEnumAsByte<ECollisionChannel> ULandscapeGizmoRenderComponent::GetCollisionObjectType()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetCollisionObjectType"));

	ULandscapeGizmoRenderComponent_GetCollisionObjectType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCollisionEnabled
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ECollisionEnabled> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF759C63270              		 offset:263270                        

TEnumAsByte<ECollisionEnabled> ULandscapeGizmoRenderComponent::GetCollisionEnabled()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetCollisionEnabled"));

	ULandscapeGizmoRenderComponent_GetCollisionEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetClosestPointOnCollision
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 Point                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 OutPointOnBody                 (Parm, OutParm, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75E2ABFE0              		 offset:48abfe0                       

float ULandscapeGizmoRenderComponent::GetClosestPointOnCollision(const struct FVector& Point, const struct FName& BoneName, struct FVector* OutPointOnBody)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetClosestPointOnCollision"));

	ULandscapeGizmoRenderComponent_GetClosestPointOnCollision_Params params;
	params.Point = Point;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPointOnBody != nullptr)
		*OutPointOnBody = params.OutPointOnBody;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCenterOfMass
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D7F9F70              		 offset:3df9f70                       

struct FVector ULandscapeGizmoRenderComponent::GetCenterOfMass(const struct FName& BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetCenterOfMass"));

	ULandscapeGizmoRenderComponent_GetCenterOfMass_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetAngularDamping
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75DC57610              		 offset:4257610                       

float ULandscapeGizmoRenderComponent::GetAngularDamping()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.GetAngularDamping"));

	ULandscapeGizmoRenderComponent_GetAngularDamping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            ElementIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      SourceMaterial                 (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D02B040              		 offset:362b040                       

class UMaterialInstanceDynamic* ULandscapeGizmoRenderComponent::CreateDynamicMaterialInstance(int ElementIndex, class UMaterialInterface* SourceMaterial)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance"));

	ULandscapeGizmoRenderComponent_CreateDynamicMaterialInstance_Params params;
	params.ElementIndex = ElementIndex;
	params.SourceMaterial = SourceMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            ElementIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      Parent                         (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75E8E1A30              		 offset:4ee1a30                       

class UMaterialInstanceDynamic* ULandscapeGizmoRenderComponent::CreateAndSetMaterialInstanceDynamicFromMaterial(int ElementIndex, class UMaterialInterface* Parent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial"));

	ULandscapeGizmoRenderComponent_CreateAndSetMaterialInstanceDynamicFromMaterial_Params params;
	params.ElementIndex = ElementIndex;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            ElementIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF759F8BAD0              		 offset:58bad0                        

class UMaterialInstanceDynamic* ULandscapeGizmoRenderComponent::CreateAndSetMaterialInstanceDynamic(int ElementIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic"));

	ULandscapeGizmoRenderComponent_CreateAndSetMaterialInstanceDynamic_Params params;
	params.ElementIndex = ElementIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreComponents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UPrimitiveComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF75D6275E0              		 offset:3c275e0                       

TArray<class UPrimitiveComponent*> ULandscapeGizmoRenderComponent::CopyArrayOfMoveIgnoreComponents()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreComponents"));

	ULandscapeGizmoRenderComponent_CopyArrayOfMoveIgnoreComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF75E96E9F0              		 offset:4f6e9f0                       

TArray<class AActor*> ULandscapeGizmoRenderComponent::CopyArrayOfMoveIgnoreActors()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors"));

	ULandscapeGizmoRenderComponent_CopyArrayOfMoveIgnoreActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.ClearMoveIgnoreComponents
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF75ECF3C50              		 offset:52f3c50                       

void ULandscapeGizmoRenderComponent::ClearMoveIgnoreComponents()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.ClearMoveIgnoreComponents"));

	ULandscapeGizmoRenderComponent_ClearMoveIgnoreComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.ClearMoveIgnoreActors
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF75B189D80              		 offset:1789d80                       

void ULandscapeGizmoRenderComponent::ClearMoveIgnoreActors()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.ClearMoveIgnoreActors"));

	ULandscapeGizmoRenderComponent_ClearMoveIgnoreActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.CanCharacterStepUp
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75EDC93A0              		 offset:53c93a0                       

bool ULandscapeGizmoRenderComponent::CanCharacterStepUp(class APawn* Pawn)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.CanCharacterStepUp"));

	ULandscapeGizmoRenderComponent_CanCharacterStepUp_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.AddTorque
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Torque                         (Parm, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75A913D20              		 offset:f13d20                        

void ULandscapeGizmoRenderComponent::AddTorque(const struct FVector& Torque, const struct FName& BoneName, bool bAccelChange)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddTorque"));

	ULandscapeGizmoRenderComponent_AddTorque_Params params;
	params.Torque = Torque;
	params.BoneName = BoneName;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddRadialImpulse
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Origin                         (Parm, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Strength                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ERadialImpulseFalloff> Falloff                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bVelChange                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75CC19420              		 offset:3219420                       

void ULandscapeGizmoRenderComponent::AddRadialImpulse(const struct FVector& Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff, bool bVelChange)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddRadialImpulse"));

	ULandscapeGizmoRenderComponent_AddRadialImpulse_Params params;
	params.Origin = Origin;
	params.Radius = Radius;
	params.Strength = Strength;
	params.Falloff = Falloff;
	params.bVelChange = bVelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddRadialForce
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Origin                         (Parm, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Strength                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ERadialImpulseFalloff> Falloff                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75D8296B0              		 offset:3e296b0                       

void ULandscapeGizmoRenderComponent::AddRadialForce(const struct FVector& Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff, bool bAccelChange)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddRadialForce"));

	ULandscapeGizmoRenderComponent_AddRadialForce_Params params;
	params.Origin = Origin;
	params.Radius = Radius;
	params.Strength = Strength;
	params.Falloff = Falloff;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddImpulseAtLocation
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Impulse                        (Parm, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75B81A4C0              		 offset:1e1a4c0                       

void ULandscapeGizmoRenderComponent::AddImpulseAtLocation(const struct FVector& Impulse, const struct FVector& Location, const struct FName& BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddImpulseAtLocation"));

	ULandscapeGizmoRenderComponent_AddImpulseAtLocation_Params params;
	params.Impulse = Impulse;
	params.Location = Location;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddImpulse
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Impulse                        (Parm, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bVelChange                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF759FFB8B0              		 offset:5fb8b0                        

void ULandscapeGizmoRenderComponent::AddImpulse(const struct FVector& Impulse, const struct FName& BoneName, bool bVelChange)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddImpulse"));

	ULandscapeGizmoRenderComponent_AddImpulse_Params params;
	params.Impulse = Impulse;
	params.BoneName = BoneName;
	params.bVelChange = bVelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddForceAtLocationLocal
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 force                          (Parm, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75CF89390              		 offset:3589390                       

void ULandscapeGizmoRenderComponent::AddForceAtLocationLocal(const struct FVector& force, const struct FVector& Location, const struct FName& BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddForceAtLocationLocal"));

	ULandscapeGizmoRenderComponent_AddForceAtLocationLocal_Params params;
	params.force = force;
	params.Location = Location;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddForceAtLocation
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 force                          (Parm, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75B7A3930              		 offset:1da3930                       

void ULandscapeGizmoRenderComponent::AddForceAtLocation(const struct FVector& force, const struct FVector& Location, const struct FName& BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddForceAtLocation"));

	ULandscapeGizmoRenderComponent_AddForceAtLocation_Params params;
	params.force = force;
	params.Location = Location;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddForce
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 force                          (Parm, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75A879470              		 offset:e79470                        

void ULandscapeGizmoRenderComponent::AddForce(const struct FVector& force, const struct FName& BoneName, bool bAccelChange)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddForce"));

	ULandscapeGizmoRenderComponent_AddForce_Params params;
	params.force = force;
	params.BoneName = BoneName;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddAngularImpulse
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Impulse                        (Parm, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bVelChange                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75ECF3B30              		 offset:52f3b30                       

void ULandscapeGizmoRenderComponent::AddAngularImpulse(const struct FVector& Impulse, const struct FName& BoneName, bool bVelChange)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.PrimitiveComponent.AddAngularImpulse"));

	ULandscapeGizmoRenderComponent_AddAngularImpulse_Params params;
	params.Impulse = Impulse;
	params.BoneName = BoneName;
	params.bVelChange = bVelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.EditorApplySpline
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USplineComponent*        InSplineComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          StartWidth                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndWidth                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartSideFalloff               (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndSideFalloff                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartRoll                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndRoll                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumSubdivisions                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRaiseHeights                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLowerHeights                  (Parm, ZeroConstructor, IsPlainOldData)
// class ULandscapeLayerInfoObject* PaintLayer                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75B882210              		 offset:1e82210                       

void ALandscapeProxy::EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Landscape.LandscapeProxy.EditorApplySpline"));

	ALandscapeProxy_EditorApplySpline_Params params;
	params.InSplineComponent = InSplineComponent;
	params.StartWidth = StartWidth;
	params.EndWidth = EndWidth;
	params.StartSideFalloff = StartSideFalloff;
	params.EndSideFalloff = EndSideFalloff;
	params.StartRoll = StartRoll;
	params.EndRoll = EndRoll;
	params.NumSubdivisions = NumSubdivisions;
	params.bRaiseHeights = bRaiseHeights;
	params.bLowerHeights = bLowerHeights;
	params.PaintLayer = PaintLayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InLODDistanceFactor            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF759B75E90              		 offset:175e90                        

void ALandscapeProxy::ChangeLODDistanceFactor(float InLODDistanceFactor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Landscape.LandscapeProxy.ChangeLODDistanceFactor"));

	ALandscapeProxy_ChangeLODDistanceFactor_Params params;
	params.InLODDistanceFactor = InLODDistanceFactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.EditorApplySpline
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USplineComponent*        InSplineComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          StartWidth                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndWidth                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartSideFalloff               (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndSideFalloff                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartRoll                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndRoll                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumSubdivisions                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRaiseHeights                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLowerHeights                  (Parm, ZeroConstructor, IsPlainOldData)
// class ULandscapeLayerInfoObject* PaintLayer                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75B882210              		 offset:1e82210                       

void ALandscape::EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Landscape.LandscapeProxy.EditorApplySpline"));

	ALandscape_EditorApplySpline_Params params;
	params.InSplineComponent = InSplineComponent;
	params.StartWidth = StartWidth;
	params.EndWidth = EndWidth;
	params.StartSideFalloff = StartSideFalloff;
	params.EndSideFalloff = EndSideFalloff;
	params.StartRoll = StartRoll;
	params.EndRoll = EndRoll;
	params.NumSubdivisions = NumSubdivisions;
	params.bRaiseHeights = bRaiseHeights;
	params.bLowerHeights = bLowerHeights;
	params.PaintLayer = PaintLayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InLODDistanceFactor            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF759B75E90              		 offset:175e90                        

void ALandscape::ChangeLODDistanceFactor(float InLODDistanceFactor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Landscape.LandscapeProxy.ChangeLODDistanceFactor"));

	ALandscape_ChangeLODDistanceFactor_Params params;
	params.InLODDistanceFactor = InLODDistanceFactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
