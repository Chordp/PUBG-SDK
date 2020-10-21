// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_PrefabAsset_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrefabAsset.PrefabActor.SetPrefab
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrefabAsset*            NewPrefab                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceRevertEvenDisconnected   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75C4E8400              		 offset:2ae8400                       

void APrefabActor::SetPrefab(class UPrefabAsset* NewPrefab, bool bForceRevertEvenDisconnected)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PrefabAsset.PrefabActor.SetPrefab"));

	APrefabActor_SetPrefab_Params params;
	params.NewPrefab = NewPrefab;
	params.bForceRevertEvenDisconnected = bForceRevertEvenDisconnected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrefabAsset.PrefabActor.SetMobility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EComponentMobility> InMobility                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75C4E8380              		 offset:2ae8380                       

void APrefabActor::SetMobility(TEnumAsByte<EComponentMobility> InMobility)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PrefabAsset.PrefabActor.SetMobility"));

	APrefabActor_SetMobility_Params params;
	params.InMobility = InMobility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrefabAsset.PrefabActor.GetPrefab
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrefabAsset*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75C4E8350              		 offset:2ae8350                       

class UPrefabAsset* APrefabActor::GetPrefab()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PrefabAsset.PrefabActor.GetPrefab"));

	APrefabActor_GetPrefab_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrefabAsset.PrefabActor.DestroyPrefabActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bDestroyAttachedChildren       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF759B9D600              		 offset:19d600                        

void APrefabActor::DestroyPrefabActor(bool bDestroyAttachedChildren)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PrefabAsset.PrefabActor.DestroyPrefabActor"));

	APrefabActor_DestroyPrefabActor_Params params;
	params.bDestroyAttachedChildren = bDestroyAttachedChildren;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.WasRecentlyRendered
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Tolerance                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D4D2570              		 offset:3ad2570                       

bool APrefabActorHolder::WasRecentlyRendered(float Tolerance)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.WasRecentlyRendered"));

	APrefabActorHolder_WasRecentlyRendered_Params params;
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

void APrefabActorHolder::UserConstructionScript()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.UserConstructionScript"));

	APrefabActorHolder_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.TearOff
// (Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF75D56A740              		 offset:3b6a740                       

void APrefabActorHolder::TearOff()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.TearOff"));

	APrefabActorHolder_TearOff_Params params;

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

void APrefabActorHolder::SnapRootComponentTo(class AActor* InParentActor, const struct FName& InSocketName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SnapRootComponentTo"));

	APrefabActorHolder_SnapRootComponentTo_Params params;
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

void APrefabActorHolder::SetTickGroup(TEnumAsByte<ETickingGroup> NewTickGroup)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetTickGroup"));

	APrefabActorHolder_SetTickGroup_Params params;
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

void APrefabActorHolder::SetTickableWhenPaused(bool bTickableWhenPaused)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetTickableWhenPaused"));

	APrefabActorHolder_SetTickableWhenPaused_Params params;
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

void APrefabActorHolder::SetReplicates(bool bInReplicates)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetReplicates"));

	APrefabActorHolder_SetReplicates_Params params;
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

void APrefabActorHolder::SetReplicateMovement(bool bInReplicateMovement)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetReplicateMovement"));

	APrefabActorHolder_SetReplicateMovement_Params params;
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

void APrefabActorHolder::SetOwner(class AActor* NewOwner)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetOwner"));

	APrefabActorHolder_SetOwner_Params params;
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

void APrefabActorHolder::SetLifeSpan(float InLifespan)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetLifeSpan"));

	APrefabActorHolder_SetLifeSpan_Params params;
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

void APrefabActorHolder::SetActorTickInterval(float TickInterval)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetActorTickInterval"));

	APrefabActorHolder_SetActorTickInterval_Params params;
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

void APrefabActorHolder::SetActorTickEnabled(bool bEnabled)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetActorTickEnabled"));

	APrefabActorHolder_SetActorTickEnabled_Params params;
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

void APrefabActorHolder::SetActorScale3D(const struct FVector& NewScale3D)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetActorScale3D"));

	APrefabActorHolder_SetActorScale3D_Params params;
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

void APrefabActorHolder::SetActorRelativeScale3D(const struct FVector& NewRelativeScale)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetActorRelativeScale3D"));

	APrefabActorHolder_SetActorRelativeScale3D_Params params;
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

void APrefabActorHolder::SetActorHiddenInGame(bool bNewHidden)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetActorHiddenInGame"));

	APrefabActorHolder_SetActorHiddenInGame_Params params;
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

void APrefabActorHolder::SetActorEnableCollision(bool bNewActorEnableCollision)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetActorEnableCollision"));

	APrefabActorHolder_SetActorEnableCollision_Params params;
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

void APrefabActorHolder::RemoveTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.RemoveTickPrerequisiteComponent"));

	APrefabActorHolder_RemoveTickPrerequisiteComponent_Params params;
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

void APrefabActorHolder::RemoveTickPrerequisiteActor(class AActor* PrerequisiteActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.RemoveTickPrerequisiteActor"));

	APrefabActorHolder_RemoveTickPrerequisiteActor_Params params;
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

void APrefabActorHolder::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveTick"));

	APrefabActorHolder_ReceiveTick_Params params;
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

void APrefabActorHolder::ReceiveRadialDamage(float DamageReceived, class UDamageType* DamageType, const struct FVector& Origin, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveRadialDamage"));

	APrefabActorHolder_ReceiveRadialDamage_Params params;
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

void APrefabActorHolder::ReceivePointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceivePointDamage"));

	APrefabActorHolder_ReceivePointDamage_Params params;
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

void APrefabActorHolder::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveHit"));

	APrefabActorHolder_ReceiveHit_Params params;
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

void APrefabActorHolder::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveEndPlay"));

	APrefabActorHolder_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void APrefabActorHolder::ReceiveDestroyed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveDestroyed"));

	APrefabActorHolder_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void APrefabActorHolder::ReceiveBeginPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveBeginPlay"));

	APrefabActorHolder_ReceiveBeginPlay_Params params;

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

void APrefabActorHolder::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveAnyDamage"));

	APrefabActorHolder_ReceiveAnyDamage_Params params;
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

void APrefabActorHolder::ReceiveActorOnReleased(const struct FKey& ButtonReleased)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorOnReleased"));

	APrefabActorHolder_ReceiveActorOnReleased_Params params;
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

void APrefabActorHolder::ReceiveActorOnInputTouchLeave(TEnumAsByte<ETouchIndex> FingerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorOnInputTouchLeave"));

	APrefabActorHolder_ReceiveActorOnInputTouchLeave_Params params;
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

void APrefabActorHolder::ReceiveActorOnInputTouchEnter(TEnumAsByte<ETouchIndex> FingerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorOnInputTouchEnter"));

	APrefabActorHolder_ReceiveActorOnInputTouchEnter_Params params;
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

void APrefabActorHolder::ReceiveActorOnInputTouchEnd(TEnumAsByte<ETouchIndex> FingerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorOnInputTouchEnd"));

	APrefabActorHolder_ReceiveActorOnInputTouchEnd_Params params;
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

void APrefabActorHolder::ReceiveActorOnInputTouchBegin(TEnumAsByte<ETouchIndex> FingerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorOnInputTouchBegin"));

	APrefabActorHolder_ReceiveActorOnInputTouchBegin_Params params;
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

void APrefabActorHolder::ReceiveActorOnClicked(const struct FKey& ButtonPressed)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorOnClicked"));

	APrefabActorHolder_ReceiveActorOnClicked_Params params;
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

void APrefabActorHolder::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorEndOverlap"));

	APrefabActorHolder_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorEndCursorOver
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void APrefabActorHolder::ReceiveActorEndCursorOver()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorEndCursorOver"));

	APrefabActorHolder_ReceiveActorEndCursorOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void APrefabActorHolder::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorBeginOverlap"));

	APrefabActorHolder_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorBeginCursorOver
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void APrefabActorHolder::ReceiveActorBeginCursorOver()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorBeginCursorOver"));

	APrefabActorHolder_ReceiveActorBeginCursorOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_Role
// (Native, Public)
// FunctionAddress:0x00007FF75D07DB70              		 offset:367db70                       

void APrefabActorHolder::OnRep_Role()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.OnRep_Role"));

	APrefabActorHolder_OnRep_Role_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_ReplicateMovement
// (Native, Public)
// FunctionAddress:0x00007FF75B42D470              		 offset:1a2d470                       

void APrefabActorHolder::OnRep_ReplicateMovement()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.OnRep_ReplicateMovement"));

	APrefabActorHolder_OnRep_ReplicateMovement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_ReplicatedMovement
// (Native, Public)
// FunctionAddress:0x00007FF759BFF3A0              		 offset:1ff3a0                        

void APrefabActorHolder::OnRep_ReplicatedMovement()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.OnRep_ReplicatedMovement"));

	APrefabActorHolder_OnRep_ReplicatedMovement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_Owner
// (Native, Protected)
// FunctionAddress:0x00007FF75A1E1A30              		 offset:7e1a30                        

void APrefabActorHolder::OnRep_Owner()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.OnRep_Owner"));

	APrefabActorHolder_OnRep_Owner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_Instigator
// (Native, Public)
// FunctionAddress:0x00007FF75A1CCEF0              		 offset:7ccef0                        

void APrefabActorHolder::OnRep_Instigator()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.OnRep_Instigator"));

	APrefabActorHolder_OnRep_Instigator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_AttachmentReplication
// (Native, Public)
// FunctionAddress:0x00007FF75CBB05C0              		 offset:31b05c0                       

void APrefabActorHolder::OnRep_AttachmentReplication()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.OnRep_AttachmentReplication"));

	APrefabActorHolder_OnRep_AttachmentReplication_Params params;

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

void APrefabActorHolder::MakeNoise(float Loudness, class APawn* NoiseInstigator, const struct FVector& NoiseLocation, float MaxRange, const struct FName& Tag)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.MakeNoise"));

	APrefabActorHolder_MakeNoise_Params params;
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

class UMaterialInstanceDynamic* APrefabActorHolder::MakeMIDForMaterial(class UMaterialInterface* Parent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.MakeMIDForMaterial"));

	APrefabActorHolder_MakeMIDForMaterial_Params params;
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

bool APrefabActorHolder::K2_TeleportTo(const struct FVector& DestLocation, const struct FRotator& DestRotation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_TeleportTo"));

	APrefabActorHolder_K2_TeleportTo_Params params;
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

bool APrefabActorHolder::K2_SetActorTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_SetActorTransform"));

	APrefabActorHolder_K2_SetActorTransform_Params params;
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

bool APrefabActorHolder::K2_SetActorRotation(const struct FRotator& NewRotation, bool bTeleportPhysics)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_SetActorRotation"));

	APrefabActorHolder_K2_SetActorRotation_Params params;
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

void APrefabActorHolder::K2_SetActorRelativeTransform(const struct FTransform& NewRelativeTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_SetActorRelativeTransform"));

	APrefabActorHolder_K2_SetActorRelativeTransform_Params params;
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

void APrefabActorHolder::K2_SetActorRelativeRotation(const struct FRotator& NewRelativeRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_SetActorRelativeRotation"));

	APrefabActorHolder_K2_SetActorRelativeRotation_Params params;
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

void APrefabActorHolder::K2_SetActorRelativeLocation(const struct FVector& NewRelativeLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_SetActorRelativeLocation"));

	APrefabActorHolder_K2_SetActorRelativeLocation_Params params;
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

bool APrefabActorHolder::K2_SetActorLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_SetActorLocationAndRotation"));

	APrefabActorHolder_K2_SetActorLocationAndRotation_Params params;
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

bool APrefabActorHolder::K2_SetActorLocation(const struct FVector& NewLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_SetActorLocation"));

	APrefabActorHolder_K2_SetActorLocation_Params params;
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

void APrefabActorHolder::K2_OnReset()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_OnReset"));

	APrefabActorHolder_K2_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_OnEndViewTarget
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void APrefabActorHolder::K2_OnEndViewTarget(class APlayerController* PC)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_OnEndViewTarget"));

	APrefabActorHolder_K2_OnEndViewTarget_Params params;
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

void APrefabActorHolder::K2_OnBecomeViewTarget(class APlayerController* PC)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_OnBecomeViewTarget"));

	APrefabActorHolder_K2_OnBecomeViewTarget_Params params;
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

class USceneComponent* APrefabActorHolder::K2_GetRootComponent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_GetRootComponent"));

	APrefabActorHolder_K2_GetRootComponent_Params params;

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

struct FRotator APrefabActorHolder::K2_GetActorRotation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_GetActorRotation"));

	APrefabActorHolder_K2_GetActorRotation_Params params;

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

struct FVector APrefabActorHolder::K2_GetActorLocation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_GetActorLocation"));

	APrefabActorHolder_K2_GetActorLocation_Params params;

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

void APrefabActorHolder::K2_DetachFromActor(EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_DetachFromActor"));

	APrefabActorHolder_K2_DetachFromActor_Params params;
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

void APrefabActorHolder::K2_DestroyComponent(class UActorComponent* Component)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_DestroyComponent"));

	APrefabActorHolder_K2_DestroyComponent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_DestroyActor
// (Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF75A14D4D0              		 offset:74d4d0                        

void APrefabActorHolder::K2_DestroyActor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_DestroyActor"));

	APrefabActorHolder_K2_DestroyActor_Params params;

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

void APrefabActorHolder::K2_AttachToComponent(class USceneComponent* Parent, const struct FName& SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AttachToComponent"));

	APrefabActorHolder_K2_AttachToComponent_Params params;
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

void APrefabActorHolder::K2_AttachToActor(class AActor* ParentActor, const struct FName& SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AttachToActor"));

	APrefabActorHolder_K2_AttachToActor_Params params;
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

void APrefabActorHolder::K2_AttachRootComponentToActor(class AActor* InParentActor, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> AttachLocationType, bool bWeldSimulatedBodies)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AttachRootComponentToActor"));

	APrefabActorHolder_K2_AttachRootComponentToActor_Params params;
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

void APrefabActorHolder::K2_AttachRootComponentTo(class USceneComponent* InParent, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> AttachLocationType, bool bWeldSimulatedBodies)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AttachRootComponentTo"));

	APrefabActorHolder_K2_AttachRootComponentTo_Params params;
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

void APrefabActorHolder::K2_AddActorWorldTransform(const struct FTransform& DeltaTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AddActorWorldTransform"));

	APrefabActorHolder_K2_AddActorWorldTransform_Params params;
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

void APrefabActorHolder::K2_AddActorWorldRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AddActorWorldRotation"));

	APrefabActorHolder_K2_AddActorWorldRotation_Params params;
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

void APrefabActorHolder::K2_AddActorWorldOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AddActorWorldOffset"));

	APrefabActorHolder_K2_AddActorWorldOffset_Params params;
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

void APrefabActorHolder::K2_AddActorLocalTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AddActorLocalTransform"));

	APrefabActorHolder_K2_AddActorLocalTransform_Params params;
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

void APrefabActorHolder::K2_AddActorLocalRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AddActorLocalRotation"));

	APrefabActorHolder_K2_AddActorLocalRotation_Params params;
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

void APrefabActorHolder::K2_AddActorLocalOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AddActorLocalOffset"));

	APrefabActorHolder_K2_AddActorLocalOffset_Params params;
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

bool APrefabActorHolder::IsOverlappingActor(class AActor* Other)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.IsOverlappingActor"));

	APrefabActorHolder_IsOverlappingActor_Params params;
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

bool APrefabActorHolder::IsChildActor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.IsChildActor"));

	APrefabActorHolder_IsChildActor_Params params;

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

bool APrefabActorHolder::IsActorTickEnabled()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.IsActorTickEnabled"));

	APrefabActorHolder_IsActorTickEnabled_Params params;

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

bool APrefabActorHolder::IsActorBeingDestroyed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.IsActorBeingDestroyed"));

	APrefabActorHolder_IsActorBeingDestroyed_Params params;

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

bool APrefabActorHolder::HasAuthority()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.HasAuthority"));

	APrefabActorHolder_HasAuthority_Params params;

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

float APrefabActorHolder::GetVerticalDistanceTo(class AActor* OtherActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetVerticalDistanceTo"));

	APrefabActorHolder_GetVerticalDistanceTo_Params params;
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

struct FVector APrefabActorHolder::GetVelocity()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetVelocity"));

	APrefabActorHolder_GetVelocity_Params params;

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

struct FTransform APrefabActorHolder::GetTransform()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetTransform"));

	APrefabActorHolder_GetTransform_Params params;

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

bool APrefabActorHolder::GetTickableWhenPaused()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetTickableWhenPaused"));

	APrefabActorHolder_GetTickableWhenPaused_Params params;

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

float APrefabActorHolder::GetSquaredDistanceTo(class AActor* OtherActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetSquaredDistanceTo"));

	APrefabActorHolder_GetSquaredDistanceTo_Params params;
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

TEnumAsByte<ENetRole> APrefabActorHolder::GetRemoteRole()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetRemoteRole"));

	APrefabActorHolder_GetRemoteRole_Params params;

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

class UChildActorComponent* APrefabActorHolder::GetParentComponent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetParentComponent"));

	APrefabActorHolder_GetParentComponent_Params params;

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

class AActor* APrefabActorHolder::GetParentActor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetParentActor"));

	APrefabActorHolder_GetParentActor_Params params;

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

class AActor* APrefabActorHolder::GetOwner()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetOwner"));

	APrefabActorHolder_GetOwner_Params params;

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

void APrefabActorHolder::GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OverlappingComponents)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetOverlappingComponents"));

	APrefabActorHolder_GetOverlappingComponents_Params params;

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

void APrefabActorHolder::GetOverlappingActors(class UClass* ClassFilter, TArray<class AActor*>* OverlappingActors)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetOverlappingActors"));

	APrefabActorHolder_GetOverlappingActors_Params params;
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

float APrefabActorHolder::GetLifeSpan()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetLifeSpan"));

	APrefabActorHolder_GetLifeSpan_Params params;

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

class AController* APrefabActorHolder::GetInstigatorController()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetInstigatorController"));

	APrefabActorHolder_GetInstigatorController_Params params;

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

class APawn* APrefabActorHolder::GetInstigator()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetInstigator"));

	APrefabActorHolder_GetInstigator_Params params;

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

struct FVector APrefabActorHolder::GetInputVectorAxisValue(const struct FKey& InputAxisKey)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetInputVectorAxisValue"));

	APrefabActorHolder_GetInputVectorAxisValue_Params params;
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

float APrefabActorHolder::GetInputAxisValue(const struct FName& InputAxisName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetInputAxisValue"));

	APrefabActorHolder_GetInputAxisValue_Params params;
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

float APrefabActorHolder::GetInputAxisKeyValue(const struct FKey& InputAxisKey)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetInputAxisKeyValue"));

	APrefabActorHolder_GetInputAxisKeyValue_Params params;
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

float APrefabActorHolder::GetHorizontalDotProductTo(class AActor* OtherActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetHorizontalDotProductTo"));

	APrefabActorHolder_GetHorizontalDotProductTo_Params params;
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

float APrefabActorHolder::GetHorizontalDistanceTo(class AActor* OtherActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetHorizontalDistanceTo"));

	APrefabActorHolder_GetHorizontalDistanceTo_Params params;
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

float APrefabActorHolder::GetGameTimeSinceCreation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetGameTimeSinceCreation"));

	APrefabActorHolder_GetGameTimeSinceCreation_Params params;

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

float APrefabActorHolder::GetDotProductTo(class AActor* OtherActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetDotProductTo"));

	APrefabActorHolder_GetDotProductTo_Params params;
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

float APrefabActorHolder::GetDistanceTo(class AActor* OtherActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetDistanceTo"));

	APrefabActorHolder_GetDistanceTo_Params params;
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

TArray<class UActorComponent*> APrefabActorHolder::GetComponentsByTag(class UClass* ComponentClass, const struct FName& Tag)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetComponentsByTag"));

	APrefabActorHolder_GetComponentsByTag_Params params;
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

TArray<class UActorComponent*> APrefabActorHolder::GetComponentsByClass(class UClass* ComponentClass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetComponentsByClass"));

	APrefabActorHolder_GetComponentsByClass_Params params;
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

class UActorComponent* APrefabActorHolder::GetComponentByClass(class UClass* ComponentClass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetComponentByClass"));

	APrefabActorHolder_GetComponentByClass_Params params;
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

struct FName APrefabActorHolder::GetAttachParentSocketName()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetAttachParentSocketName"));

	APrefabActorHolder_GetAttachParentSocketName_Params params;

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

class AActor* APrefabActorHolder::GetAttachParentActor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetAttachParentActor"));

	APrefabActorHolder_GetAttachParentActor_Params params;

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

void APrefabActorHolder::GetAttachedActors(TArray<class AActor*>* OutActors)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetAttachedActors"));

	APrefabActorHolder_GetAttachedActors_Params params;

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

void APrefabActorHolder::GetAllChildActors(bool bIncludeDescendants, TArray<class AActor*>* ChildActors)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetAllChildActors"));

	APrefabActorHolder_GetAllChildActors_Params params;
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

struct FVector APrefabActorHolder::GetActorUpVector()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorUpVector"));

	APrefabActorHolder_GetActorUpVector_Params params;

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

float APrefabActorHolder::GetActorTimeDilation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorTimeDilation"));

	APrefabActorHolder_GetActorTimeDilation_Params params;

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

float APrefabActorHolder::GetActorTickInterval()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorTickInterval"));

	APrefabActorHolder_GetActorTickInterval_Params params;

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

struct FVector APrefabActorHolder::GetActorScale3D()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorScale3D"));

	APrefabActorHolder_GetActorScale3D_Params params;

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

struct FVector APrefabActorHolder::GetActorRightVector()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorRightVector"));

	APrefabActorHolder_GetActorRightVector_Params params;

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

struct FVector APrefabActorHolder::GetActorRelativeScale3D()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorRelativeScale3D"));

	APrefabActorHolder_GetActorRelativeScale3D_Params params;

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

struct FVector APrefabActorHolder::GetActorForwardVector()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorForwardVector"));

	APrefabActorHolder_GetActorForwardVector_Params params;

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

void APrefabActorHolder::GetActorEyesViewPoint(struct FVector* OutLocation, struct FRotator* OutRotation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorEyesViewPoint"));

	APrefabActorHolder_GetActorEyesViewPoint_Params params;

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

bool APrefabActorHolder::GetActorEnableCollision()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorEnableCollision"));

	APrefabActorHolder_GetActorEnableCollision_Params params;

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

void APrefabActorHolder::GetActorBounds(bool bOnlyCollidingComponents, struct FVector* Origin, struct FVector* BoxExtent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorBounds"));

	APrefabActorHolder_GetActorBounds_Params params;
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

void APrefabActorHolder::ForceNetUpdate()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ForceNetUpdate"));

	APrefabActorHolder_ForceNetUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.FlushNetDormancy
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF75EE02D90              		 offset:5402d90                       

void APrefabActorHolder::FlushNetDormancy()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.FlushNetDormancy"));

	APrefabActorHolder_FlushNetDormancy_Params params;

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

void APrefabActorHolder::EnableInput(class APlayerController* PlayerController)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.EnableInput"));

	APrefabActorHolder_EnableInput_Params params;
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

void APrefabActorHolder::DisableInput(class APlayerController* PlayerController)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.DisableInput"));

	APrefabActorHolder_DisableInput_Params params;
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

void APrefabActorHolder::DetachRootComponentFromParent(bool bMaintainWorldPosition)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.DetachRootComponentFromParent"));

	APrefabActorHolder_DetachRootComponentFromParent_Params params;
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

void APrefabActorHolder::AddTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.AddTickPrerequisiteComponent"));

	APrefabActorHolder_AddTickPrerequisiteComponent_Params params;
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

void APrefabActorHolder::AddTickPrerequisiteActor(class AActor* PrerequisiteActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.AddTickPrerequisiteActor"));

	APrefabActorHolder_AddTickPrerequisiteActor_Params params;
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

class UActorComponent* APrefabActorHolder::AddComponent(const struct FName& TemplateName, bool bManualAttachment, const struct FTransform& RelativeTransform, class UObject* ComponentTemplateContext)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.AddComponent"));

	APrefabActorHolder_AddComponent_Params params;
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

bool APrefabActorHolder::ActorHasTag(const struct FName& Tag)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ActorHasTag"));

	APrefabActorHolder_ActorHasTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
