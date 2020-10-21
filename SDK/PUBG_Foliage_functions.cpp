// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Foliage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Engine.Actor.WasRecentlyRendered
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Tolerance                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D4D2570              		 offset:3ad2570                       

bool AInstancedFoliageActor::WasRecentlyRendered(float Tolerance)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.WasRecentlyRendered"));

	AInstancedFoliageActor_WasRecentlyRendered_Params params;
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

void AInstancedFoliageActor::UserConstructionScript()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.UserConstructionScript"));

	AInstancedFoliageActor_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.TearOff
// (Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF75D56A740              		 offset:3b6a740                       

void AInstancedFoliageActor::TearOff()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.TearOff"));

	AInstancedFoliageActor_TearOff_Params params;

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

void AInstancedFoliageActor::SnapRootComponentTo(class AActor* InParentActor, const struct FName& InSocketName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SnapRootComponentTo"));

	AInstancedFoliageActor_SnapRootComponentTo_Params params;
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

void AInstancedFoliageActor::SetTickGroup(TEnumAsByte<ETickingGroup> NewTickGroup)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetTickGroup"));

	AInstancedFoliageActor_SetTickGroup_Params params;
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

void AInstancedFoliageActor::SetTickableWhenPaused(bool bTickableWhenPaused)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetTickableWhenPaused"));

	AInstancedFoliageActor_SetTickableWhenPaused_Params params;
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

void AInstancedFoliageActor::SetReplicates(bool bInReplicates)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetReplicates"));

	AInstancedFoliageActor_SetReplicates_Params params;
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

void AInstancedFoliageActor::SetReplicateMovement(bool bInReplicateMovement)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetReplicateMovement"));

	AInstancedFoliageActor_SetReplicateMovement_Params params;
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

void AInstancedFoliageActor::SetOwner(class AActor* NewOwner)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetOwner"));

	AInstancedFoliageActor_SetOwner_Params params;
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

void AInstancedFoliageActor::SetLifeSpan(float InLifespan)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetLifeSpan"));

	AInstancedFoliageActor_SetLifeSpan_Params params;
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

void AInstancedFoliageActor::SetActorTickInterval(float TickInterval)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetActorTickInterval"));

	AInstancedFoliageActor_SetActorTickInterval_Params params;
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

void AInstancedFoliageActor::SetActorTickEnabled(bool bEnabled)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetActorTickEnabled"));

	AInstancedFoliageActor_SetActorTickEnabled_Params params;
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

void AInstancedFoliageActor::SetActorScale3D(const struct FVector& NewScale3D)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetActorScale3D"));

	AInstancedFoliageActor_SetActorScale3D_Params params;
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

void AInstancedFoliageActor::SetActorRelativeScale3D(const struct FVector& NewRelativeScale)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetActorRelativeScale3D"));

	AInstancedFoliageActor_SetActorRelativeScale3D_Params params;
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

void AInstancedFoliageActor::SetActorHiddenInGame(bool bNewHidden)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetActorHiddenInGame"));

	AInstancedFoliageActor_SetActorHiddenInGame_Params params;
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

void AInstancedFoliageActor::SetActorEnableCollision(bool bNewActorEnableCollision)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.SetActorEnableCollision"));

	AInstancedFoliageActor_SetActorEnableCollision_Params params;
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

void AInstancedFoliageActor::RemoveTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.RemoveTickPrerequisiteComponent"));

	AInstancedFoliageActor_RemoveTickPrerequisiteComponent_Params params;
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

void AInstancedFoliageActor::RemoveTickPrerequisiteActor(class AActor* PrerequisiteActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.RemoveTickPrerequisiteActor"));

	AInstancedFoliageActor_RemoveTickPrerequisiteActor_Params params;
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

void AInstancedFoliageActor::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveTick"));

	AInstancedFoliageActor_ReceiveTick_Params params;
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

void AInstancedFoliageActor::ReceiveRadialDamage(float DamageReceived, class UDamageType* DamageType, const struct FVector& Origin, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveRadialDamage"));

	AInstancedFoliageActor_ReceiveRadialDamage_Params params;
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

void AInstancedFoliageActor::ReceivePointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceivePointDamage"));

	AInstancedFoliageActor_ReceivePointDamage_Params params;
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

void AInstancedFoliageActor::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveHit"));

	AInstancedFoliageActor_ReceiveHit_Params params;
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

void AInstancedFoliageActor::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveEndPlay"));

	AInstancedFoliageActor_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void AInstancedFoliageActor::ReceiveDestroyed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveDestroyed"));

	AInstancedFoliageActor_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void AInstancedFoliageActor::ReceiveBeginPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveBeginPlay"));

	AInstancedFoliageActor_ReceiveBeginPlay_Params params;

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

void AInstancedFoliageActor::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveAnyDamage"));

	AInstancedFoliageActor_ReceiveAnyDamage_Params params;
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

void AInstancedFoliageActor::ReceiveActorOnReleased(const struct FKey& ButtonReleased)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorOnReleased"));

	AInstancedFoliageActor_ReceiveActorOnReleased_Params params;
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

void AInstancedFoliageActor::ReceiveActorOnInputTouchLeave(TEnumAsByte<ETouchIndex> FingerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorOnInputTouchLeave"));

	AInstancedFoliageActor_ReceiveActorOnInputTouchLeave_Params params;
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

void AInstancedFoliageActor::ReceiveActorOnInputTouchEnter(TEnumAsByte<ETouchIndex> FingerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorOnInputTouchEnter"));

	AInstancedFoliageActor_ReceiveActorOnInputTouchEnter_Params params;
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

void AInstancedFoliageActor::ReceiveActorOnInputTouchEnd(TEnumAsByte<ETouchIndex> FingerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorOnInputTouchEnd"));

	AInstancedFoliageActor_ReceiveActorOnInputTouchEnd_Params params;
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

void AInstancedFoliageActor::ReceiveActorOnInputTouchBegin(TEnumAsByte<ETouchIndex> FingerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorOnInputTouchBegin"));

	AInstancedFoliageActor_ReceiveActorOnInputTouchBegin_Params params;
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

void AInstancedFoliageActor::ReceiveActorOnClicked(const struct FKey& ButtonPressed)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorOnClicked"));

	AInstancedFoliageActor_ReceiveActorOnClicked_Params params;
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

void AInstancedFoliageActor::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorEndOverlap"));

	AInstancedFoliageActor_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorEndCursorOver
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void AInstancedFoliageActor::ReceiveActorEndCursorOver()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorEndCursorOver"));

	AInstancedFoliageActor_ReceiveActorEndCursorOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void AInstancedFoliageActor::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorBeginOverlap"));

	AInstancedFoliageActor_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorBeginCursorOver
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void AInstancedFoliageActor::ReceiveActorBeginCursorOver()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ReceiveActorBeginCursorOver"));

	AInstancedFoliageActor_ReceiveActorBeginCursorOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_Role
// (Native, Public)
// FunctionAddress:0x00007FF75D07DB70              		 offset:367db70                       

void AInstancedFoliageActor::OnRep_Role()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.OnRep_Role"));

	AInstancedFoliageActor_OnRep_Role_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_ReplicateMovement
// (Native, Public)
// FunctionAddress:0x00007FF75B42D470              		 offset:1a2d470                       

void AInstancedFoliageActor::OnRep_ReplicateMovement()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.OnRep_ReplicateMovement"));

	AInstancedFoliageActor_OnRep_ReplicateMovement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_ReplicatedMovement
// (Native, Public)
// FunctionAddress:0x00007FF759BFF3A0              		 offset:1ff3a0                        

void AInstancedFoliageActor::OnRep_ReplicatedMovement()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.OnRep_ReplicatedMovement"));

	AInstancedFoliageActor_OnRep_ReplicatedMovement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_Owner
// (Native, Protected)
// FunctionAddress:0x00007FF75A1E1A30              		 offset:7e1a30                        

void AInstancedFoliageActor::OnRep_Owner()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.OnRep_Owner"));

	AInstancedFoliageActor_OnRep_Owner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_Instigator
// (Native, Public)
// FunctionAddress:0x00007FF75A1CCEF0              		 offset:7ccef0                        

void AInstancedFoliageActor::OnRep_Instigator()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.OnRep_Instigator"));

	AInstancedFoliageActor_OnRep_Instigator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_AttachmentReplication
// (Native, Public)
// FunctionAddress:0x00007FF75CBB05C0              		 offset:31b05c0                       

void AInstancedFoliageActor::OnRep_AttachmentReplication()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.OnRep_AttachmentReplication"));

	AInstancedFoliageActor_OnRep_AttachmentReplication_Params params;

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

void AInstancedFoliageActor::MakeNoise(float Loudness, class APawn* NoiseInstigator, const struct FVector& NoiseLocation, float MaxRange, const struct FName& Tag)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.MakeNoise"));

	AInstancedFoliageActor_MakeNoise_Params params;
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

class UMaterialInstanceDynamic* AInstancedFoliageActor::MakeMIDForMaterial(class UMaterialInterface* Parent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.MakeMIDForMaterial"));

	AInstancedFoliageActor_MakeMIDForMaterial_Params params;
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

bool AInstancedFoliageActor::K2_TeleportTo(const struct FVector& DestLocation, const struct FRotator& DestRotation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_TeleportTo"));

	AInstancedFoliageActor_K2_TeleportTo_Params params;
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

bool AInstancedFoliageActor::K2_SetActorTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_SetActorTransform"));

	AInstancedFoliageActor_K2_SetActorTransform_Params params;
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

bool AInstancedFoliageActor::K2_SetActorRotation(const struct FRotator& NewRotation, bool bTeleportPhysics)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_SetActorRotation"));

	AInstancedFoliageActor_K2_SetActorRotation_Params params;
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

void AInstancedFoliageActor::K2_SetActorRelativeTransform(const struct FTransform& NewRelativeTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_SetActorRelativeTransform"));

	AInstancedFoliageActor_K2_SetActorRelativeTransform_Params params;
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

void AInstancedFoliageActor::K2_SetActorRelativeRotation(const struct FRotator& NewRelativeRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_SetActorRelativeRotation"));

	AInstancedFoliageActor_K2_SetActorRelativeRotation_Params params;
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

void AInstancedFoliageActor::K2_SetActorRelativeLocation(const struct FVector& NewRelativeLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_SetActorRelativeLocation"));

	AInstancedFoliageActor_K2_SetActorRelativeLocation_Params params;
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

bool AInstancedFoliageActor::K2_SetActorLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_SetActorLocationAndRotation"));

	AInstancedFoliageActor_K2_SetActorLocationAndRotation_Params params;
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

bool AInstancedFoliageActor::K2_SetActorLocation(const struct FVector& NewLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_SetActorLocation"));

	AInstancedFoliageActor_K2_SetActorLocation_Params params;
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

void AInstancedFoliageActor::K2_OnReset()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_OnReset"));

	AInstancedFoliageActor_K2_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_OnEndViewTarget
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void AInstancedFoliageActor::K2_OnEndViewTarget(class APlayerController* PC)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_OnEndViewTarget"));

	AInstancedFoliageActor_K2_OnEndViewTarget_Params params;
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

void AInstancedFoliageActor::K2_OnBecomeViewTarget(class APlayerController* PC)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_OnBecomeViewTarget"));

	AInstancedFoliageActor_K2_OnBecomeViewTarget_Params params;
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

class USceneComponent* AInstancedFoliageActor::K2_GetRootComponent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_GetRootComponent"));

	AInstancedFoliageActor_K2_GetRootComponent_Params params;

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

struct FRotator AInstancedFoliageActor::K2_GetActorRotation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_GetActorRotation"));

	AInstancedFoliageActor_K2_GetActorRotation_Params params;

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

struct FVector AInstancedFoliageActor::K2_GetActorLocation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_GetActorLocation"));

	AInstancedFoliageActor_K2_GetActorLocation_Params params;

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

void AInstancedFoliageActor::K2_DetachFromActor(EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_DetachFromActor"));

	AInstancedFoliageActor_K2_DetachFromActor_Params params;
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

void AInstancedFoliageActor::K2_DestroyComponent(class UActorComponent* Component)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_DestroyComponent"));

	AInstancedFoliageActor_K2_DestroyComponent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_DestroyActor
// (Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF75A14D4D0              		 offset:74d4d0                        

void AInstancedFoliageActor::K2_DestroyActor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_DestroyActor"));

	AInstancedFoliageActor_K2_DestroyActor_Params params;

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

void AInstancedFoliageActor::K2_AttachToComponent(class USceneComponent* Parent, const struct FName& SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AttachToComponent"));

	AInstancedFoliageActor_K2_AttachToComponent_Params params;
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

void AInstancedFoliageActor::K2_AttachToActor(class AActor* ParentActor, const struct FName& SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AttachToActor"));

	AInstancedFoliageActor_K2_AttachToActor_Params params;
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

void AInstancedFoliageActor::K2_AttachRootComponentToActor(class AActor* InParentActor, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> AttachLocationType, bool bWeldSimulatedBodies)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AttachRootComponentToActor"));

	AInstancedFoliageActor_K2_AttachRootComponentToActor_Params params;
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

void AInstancedFoliageActor::K2_AttachRootComponentTo(class USceneComponent* InParent, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> AttachLocationType, bool bWeldSimulatedBodies)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AttachRootComponentTo"));

	AInstancedFoliageActor_K2_AttachRootComponentTo_Params params;
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

void AInstancedFoliageActor::K2_AddActorWorldTransform(const struct FTransform& DeltaTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AddActorWorldTransform"));

	AInstancedFoliageActor_K2_AddActorWorldTransform_Params params;
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

void AInstancedFoliageActor::K2_AddActorWorldRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AddActorWorldRotation"));

	AInstancedFoliageActor_K2_AddActorWorldRotation_Params params;
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

void AInstancedFoliageActor::K2_AddActorWorldOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AddActorWorldOffset"));

	AInstancedFoliageActor_K2_AddActorWorldOffset_Params params;
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

void AInstancedFoliageActor::K2_AddActorLocalTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AddActorLocalTransform"));

	AInstancedFoliageActor_K2_AddActorLocalTransform_Params params;
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

void AInstancedFoliageActor::K2_AddActorLocalRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AddActorLocalRotation"));

	AInstancedFoliageActor_K2_AddActorLocalRotation_Params params;
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

void AInstancedFoliageActor::K2_AddActorLocalOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.K2_AddActorLocalOffset"));

	AInstancedFoliageActor_K2_AddActorLocalOffset_Params params;
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

bool AInstancedFoliageActor::IsOverlappingActor(class AActor* Other)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.IsOverlappingActor"));

	AInstancedFoliageActor_IsOverlappingActor_Params params;
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

bool AInstancedFoliageActor::IsChildActor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.IsChildActor"));

	AInstancedFoliageActor_IsChildActor_Params params;

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

bool AInstancedFoliageActor::IsActorTickEnabled()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.IsActorTickEnabled"));

	AInstancedFoliageActor_IsActorTickEnabled_Params params;

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

bool AInstancedFoliageActor::IsActorBeingDestroyed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.IsActorBeingDestroyed"));

	AInstancedFoliageActor_IsActorBeingDestroyed_Params params;

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

bool AInstancedFoliageActor::HasAuthority()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.HasAuthority"));

	AInstancedFoliageActor_HasAuthority_Params params;

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

float AInstancedFoliageActor::GetVerticalDistanceTo(class AActor* OtherActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetVerticalDistanceTo"));

	AInstancedFoliageActor_GetVerticalDistanceTo_Params params;
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

struct FVector AInstancedFoliageActor::GetVelocity()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetVelocity"));

	AInstancedFoliageActor_GetVelocity_Params params;

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

struct FTransform AInstancedFoliageActor::GetTransform()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetTransform"));

	AInstancedFoliageActor_GetTransform_Params params;

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

bool AInstancedFoliageActor::GetTickableWhenPaused()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetTickableWhenPaused"));

	AInstancedFoliageActor_GetTickableWhenPaused_Params params;

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

float AInstancedFoliageActor::GetSquaredDistanceTo(class AActor* OtherActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetSquaredDistanceTo"));

	AInstancedFoliageActor_GetSquaredDistanceTo_Params params;
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

TEnumAsByte<ENetRole> AInstancedFoliageActor::GetRemoteRole()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetRemoteRole"));

	AInstancedFoliageActor_GetRemoteRole_Params params;

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

class UChildActorComponent* AInstancedFoliageActor::GetParentComponent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetParentComponent"));

	AInstancedFoliageActor_GetParentComponent_Params params;

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

class AActor* AInstancedFoliageActor::GetParentActor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetParentActor"));

	AInstancedFoliageActor_GetParentActor_Params params;

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

class AActor* AInstancedFoliageActor::GetOwner()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetOwner"));

	AInstancedFoliageActor_GetOwner_Params params;

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

void AInstancedFoliageActor::GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OverlappingComponents)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetOverlappingComponents"));

	AInstancedFoliageActor_GetOverlappingComponents_Params params;

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

void AInstancedFoliageActor::GetOverlappingActors(class UClass* ClassFilter, TArray<class AActor*>* OverlappingActors)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetOverlappingActors"));

	AInstancedFoliageActor_GetOverlappingActors_Params params;
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

float AInstancedFoliageActor::GetLifeSpan()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetLifeSpan"));

	AInstancedFoliageActor_GetLifeSpan_Params params;

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

class AController* AInstancedFoliageActor::GetInstigatorController()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetInstigatorController"));

	AInstancedFoliageActor_GetInstigatorController_Params params;

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

class APawn* AInstancedFoliageActor::GetInstigator()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetInstigator"));

	AInstancedFoliageActor_GetInstigator_Params params;

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

struct FVector AInstancedFoliageActor::GetInputVectorAxisValue(const struct FKey& InputAxisKey)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetInputVectorAxisValue"));

	AInstancedFoliageActor_GetInputVectorAxisValue_Params params;
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

float AInstancedFoliageActor::GetInputAxisValue(const struct FName& InputAxisName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetInputAxisValue"));

	AInstancedFoliageActor_GetInputAxisValue_Params params;
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

float AInstancedFoliageActor::GetInputAxisKeyValue(const struct FKey& InputAxisKey)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetInputAxisKeyValue"));

	AInstancedFoliageActor_GetInputAxisKeyValue_Params params;
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

float AInstancedFoliageActor::GetHorizontalDotProductTo(class AActor* OtherActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetHorizontalDotProductTo"));

	AInstancedFoliageActor_GetHorizontalDotProductTo_Params params;
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

float AInstancedFoliageActor::GetHorizontalDistanceTo(class AActor* OtherActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetHorizontalDistanceTo"));

	AInstancedFoliageActor_GetHorizontalDistanceTo_Params params;
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

float AInstancedFoliageActor::GetGameTimeSinceCreation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetGameTimeSinceCreation"));

	AInstancedFoliageActor_GetGameTimeSinceCreation_Params params;

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

float AInstancedFoliageActor::GetDotProductTo(class AActor* OtherActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetDotProductTo"));

	AInstancedFoliageActor_GetDotProductTo_Params params;
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

float AInstancedFoliageActor::GetDistanceTo(class AActor* OtherActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetDistanceTo"));

	AInstancedFoliageActor_GetDistanceTo_Params params;
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

TArray<class UActorComponent*> AInstancedFoliageActor::GetComponentsByTag(class UClass* ComponentClass, const struct FName& Tag)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetComponentsByTag"));

	AInstancedFoliageActor_GetComponentsByTag_Params params;
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

TArray<class UActorComponent*> AInstancedFoliageActor::GetComponentsByClass(class UClass* ComponentClass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetComponentsByClass"));

	AInstancedFoliageActor_GetComponentsByClass_Params params;
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

class UActorComponent* AInstancedFoliageActor::GetComponentByClass(class UClass* ComponentClass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetComponentByClass"));

	AInstancedFoliageActor_GetComponentByClass_Params params;
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

struct FName AInstancedFoliageActor::GetAttachParentSocketName()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetAttachParentSocketName"));

	AInstancedFoliageActor_GetAttachParentSocketName_Params params;

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

class AActor* AInstancedFoliageActor::GetAttachParentActor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetAttachParentActor"));

	AInstancedFoliageActor_GetAttachParentActor_Params params;

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

void AInstancedFoliageActor::GetAttachedActors(TArray<class AActor*>* OutActors)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetAttachedActors"));

	AInstancedFoliageActor_GetAttachedActors_Params params;

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

void AInstancedFoliageActor::GetAllChildActors(bool bIncludeDescendants, TArray<class AActor*>* ChildActors)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetAllChildActors"));

	AInstancedFoliageActor_GetAllChildActors_Params params;
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

struct FVector AInstancedFoliageActor::GetActorUpVector()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorUpVector"));

	AInstancedFoliageActor_GetActorUpVector_Params params;

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

float AInstancedFoliageActor::GetActorTimeDilation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorTimeDilation"));

	AInstancedFoliageActor_GetActorTimeDilation_Params params;

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

float AInstancedFoliageActor::GetActorTickInterval()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorTickInterval"));

	AInstancedFoliageActor_GetActorTickInterval_Params params;

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

struct FVector AInstancedFoliageActor::GetActorScale3D()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorScale3D"));

	AInstancedFoliageActor_GetActorScale3D_Params params;

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

struct FVector AInstancedFoliageActor::GetActorRightVector()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorRightVector"));

	AInstancedFoliageActor_GetActorRightVector_Params params;

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

struct FVector AInstancedFoliageActor::GetActorRelativeScale3D()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorRelativeScale3D"));

	AInstancedFoliageActor_GetActorRelativeScale3D_Params params;

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

struct FVector AInstancedFoliageActor::GetActorForwardVector()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorForwardVector"));

	AInstancedFoliageActor_GetActorForwardVector_Params params;

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

void AInstancedFoliageActor::GetActorEyesViewPoint(struct FVector* OutLocation, struct FRotator* OutRotation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorEyesViewPoint"));

	AInstancedFoliageActor_GetActorEyesViewPoint_Params params;

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

bool AInstancedFoliageActor::GetActorEnableCollision()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorEnableCollision"));

	AInstancedFoliageActor_GetActorEnableCollision_Params params;

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

void AInstancedFoliageActor::GetActorBounds(bool bOnlyCollidingComponents, struct FVector* Origin, struct FVector* BoxExtent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.GetActorBounds"));

	AInstancedFoliageActor_GetActorBounds_Params params;
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

void AInstancedFoliageActor::ForceNetUpdate()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ForceNetUpdate"));

	AInstancedFoliageActor_ForceNetUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.FlushNetDormancy
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF75EE02D90              		 offset:5402d90                       

void AInstancedFoliageActor::FlushNetDormancy()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.FlushNetDormancy"));

	AInstancedFoliageActor_FlushNetDormancy_Params params;

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

void AInstancedFoliageActor::EnableInput(class APlayerController* PlayerController)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.EnableInput"));

	AInstancedFoliageActor_EnableInput_Params params;
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

void AInstancedFoliageActor::DisableInput(class APlayerController* PlayerController)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.DisableInput"));

	AInstancedFoliageActor_DisableInput_Params params;
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

void AInstancedFoliageActor::DetachRootComponentFromParent(bool bMaintainWorldPosition)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.DetachRootComponentFromParent"));

	AInstancedFoliageActor_DetachRootComponentFromParent_Params params;
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

void AInstancedFoliageActor::AddTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.AddTickPrerequisiteComponent"));

	AInstancedFoliageActor_AddTickPrerequisiteComponent_Params params;
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

void AInstancedFoliageActor::AddTickPrerequisiteActor(class AActor* PrerequisiteActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.AddTickPrerequisiteActor"));

	AInstancedFoliageActor_AddTickPrerequisiteActor_Params params;
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

class UActorComponent* AInstancedFoliageActor::AddComponent(const struct FName& TemplateName, bool bManualAttachment, const struct FTransform& RelativeTransform, class UObject* ComponentTemplateContext)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.AddComponent"));

	AInstancedFoliageActor_AddComponent_Params params;
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

bool AInstancedFoliageActor::ActorHasTag(const struct FName& Tag)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.Actor.ActorHasTag"));

	AInstancedFoliageActor_ActorHasTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Foliage.InteractiveFoliageActor.CapsuleTouched
// (Final, Native, Protected, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComp                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Other                          (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OverlapInfo                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF75AA91540              		 offset:1091540                       

void AInteractiveFoliageActor::CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Foliage.InteractiveFoliageActor.CapsuleTouched"));

	AInteractiveFoliageActor_CapsuleTouched_Params params;
	params.OverlappedComp = OverlappedComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.OverlapInfo = OverlapInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StaticMeshComponent.SetStaticMesh
// (Native, Public, BlueprintCallable)
// Parameters:
// class UStaticMesh*             NewMesh                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A1630B0              		 offset:7630b0                        

bool UInteractiveFoliageComponent::SetStaticMesh(class UStaticMesh* NewMesh)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.StaticMeshComponent.SetStaticMesh"));

	UInteractiveFoliageComponent_SetStaticMesh_Params params;
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

void UInteractiveFoliageComponent::SetForcedLodModel(int NewForcedLodModel)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.StaticMeshComponent.SetForcedLodModel"));

	UInteractiveFoliageComponent_SetForcedLodModel_Params params;
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

void UInteractiveFoliageComponent::OnRep_StaticMesh(class UStaticMesh* OldStaticMesh)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.StaticMeshComponent.OnRep_StaticMesh"));

	UInteractiveFoliageComponent_OnRep_StaticMesh_Params params;
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

void UInteractiveFoliageComponent::GetLocalBounds(struct FVector* Min, struct FVector* Max)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.StaticMeshComponent.GetLocalBounds"));

	UInteractiveFoliageComponent_GetLocalBounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Min != nullptr)
		*Min = params.Min;
	if (Max != nullptr)
		*Max = params.Max;
}


// Function Foliage.ProceduralFoliageSpawner.Simulate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NumSteps                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75D1DB980              		 offset:37db980                       

void UProceduralFoliageSpawner::Simulate(int NumSteps)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Foliage.ProceduralFoliageSpawner.Simulate"));

	UProceduralFoliageSpawner_Simulate_Params params;
	params.NumSteps = NumSteps;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
