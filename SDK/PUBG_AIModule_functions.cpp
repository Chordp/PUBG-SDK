// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_AIModule_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIModule.PathFollowingComponent.OnNavDataRegistered
// (Final, Native, Protected)
// Parameters:
// class ANavigationData*         NavData                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D88295D0              		 offset:1e695d0                       

void UPathFollowingComponent::OnNavDataRegistered(class ANavigationData* NavData)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.PathFollowingComponent.OnNavDataRegistered"));

	UPathFollowingComponent_OnNavDataRegistered_Params params;
	params.NavData = NavData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.PathFollowingComponent.OnActorBump
// (Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class AActor*                  SelfActor                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D88292A0              		 offset:1e692a0                       

void UPathFollowingComponent::OnActorBump(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.PathFollowingComponent.OnActorBump"));

	UPathFollowingComponent_OnActorBump_Params params;
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.PathFollowingComponent.GetPathDestination
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D88286C0              		 offset:1e686c0                       

struct FVector UPathFollowingComponent::GetPathDestination()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.PathFollowingComponent.GetPathDestination"));

	UPathFollowingComponent_GetPathDestination_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.PathFollowingComponent.GetPathActionType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EPathFollowingAction> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8828690              		 offset:1e68690                       

TEnumAsByte<EPathFollowingAction> UPathFollowingComponent::GetPathActionType()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.PathFollowingComponent.GetPathActionType"));

	UPathFollowingComponent_GetPathActionType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AIController.UseBlackboard
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UBlackboardData*         BlackboardAsset                (Parm, ZeroConstructor, IsPlainOldData)
// class UBlackboardComponent*    BlackboardComponent            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D882A6A0              		 offset:1e6a6a0                       

bool AAIController::UseBlackboard(class UBlackboardData* BlackboardAsset, class UBlackboardComponent** BlackboardComponent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIController.UseBlackboard"));

	AAIController_UseBlackboard_Params params;
	params.BlackboardAsset = BlackboardAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BlackboardComponent != nullptr)
		*BlackboardComponent = params.BlackboardComponent;

	return params.ReturnValue;
}


// Function AIModule.AIController.UnclaimTaskResource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ResourceClass                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D882A470              		 offset:1e6a470                       

void AAIController::UnclaimTaskResource(class UClass* ResourceClass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIController.UnclaimTaskResource"));

	AAIController_UnclaimTaskResource_Params params;
	params.ResourceClass = ResourceClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIController.SetMoveBlockDetection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D882A210              		 offset:1e6a210                       

void AAIController::SetMoveBlockDetection(bool bEnable)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIController.SetMoveBlockDetection"));

	AAIController_SetMoveBlockDetection_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIController.RunBehaviorTree
// (Native, Public, BlueprintCallable)
// Parameters:
// class UBehaviorTree*           BTAsset                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D882A040              		 offset:1e6a040                       

bool AAIController::RunBehaviorTree(class UBehaviorTree* BTAsset)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIController.RunBehaviorTree"));

	AAIController_RunBehaviorTree_Params params;
	params.BTAsset = BTAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AIController.OnUsingBlackBoard
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UBlackboardComponent*    BlackboardComp                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UBlackboardData*         BlackboardAsset                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AAIController::OnUsingBlackBoard(class UBlackboardComponent* BlackboardComp, class UBlackboardData* BlackboardAsset)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIController.OnUsingBlackBoard"));

	AAIController_OnUsingBlackBoard_Params params;
	params.BlackboardComp = BlackboardComp;
	params.BlackboardAsset = BlackboardAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIController.OnUnpossess
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                   UnpossessedPawn                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AAIController::OnUnpossess(class APawn* UnpossessedPawn)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIController.OnUnpossess"));

	AAIController_OnUnpossess_Params params;
	params.UnpossessedPawn = UnpossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIController.OnPossess
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                   PossessedPawn                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AAIController::OnPossess(class APawn* PossessedPawn)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIController.OnPossess"));

	AAIController_OnPossess_Params params;
	params.PossessedPawn = PossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIController.OnGameplayTaskResourcesClaimed
// (Native, Public)
// Parameters:
// struct FGameplayResourceSet    NewlyClaimed                   (Parm)
// struct FGameplayResourceSet    FreshlyReleased                (Parm)
// FunctionAddress:0x00007FF6D8829440              		 offset:1e69440                       

void AAIController::OnGameplayTaskResourcesClaimed(const struct FGameplayResourceSet& NewlyClaimed, const struct FGameplayResourceSet& FreshlyReleased)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIController.OnGameplayTaskResourcesClaimed"));

	AAIController_OnGameplayTaskResourcesClaimed_Params params;
	params.NewlyClaimed = NewlyClaimed;
	params.FreshlyReleased = FreshlyReleased;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIController.MoveToLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Dest                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          AcceptanceRadius               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bStopOnOverlap                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUsePathfinding                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bProjectDestinationToNavigation (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCanStrafe                     (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAllowPartialPath              (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPathFollowingRequestResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8829030              		 offset:1e69030                       

TEnumAsByte<EPathFollowingRequestResult> AAIController::MoveToLocation(const struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIController.MoveToLocation"));

	AAIController_MoveToLocation_Params params;
	params.Dest = Dest;
	params.AcceptanceRadius = AcceptanceRadius;
	params.bStopOnOverlap = bStopOnOverlap;
	params.bUsePathfinding = bUsePathfinding;
	params.bProjectDestinationToNavigation = bProjectDestinationToNavigation;
	params.bCanStrafe = bCanStrafe;
	params.FilterClass = FilterClass;
	params.bAllowPartialPath = bAllowPartialPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AIController.MoveToActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Goal                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          AcceptanceRadius               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bStopOnOverlap                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUsePathfinding                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCanStrafe                     (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAllowPartialPath              (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPathFollowingRequestResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8828E10              		 offset:1e68e10                       

TEnumAsByte<EPathFollowingRequestResult> AAIController::MoveToActor(class AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIController.MoveToActor"));

	AAIController_MoveToActor_Params params;
	params.Goal = Goal;
	params.AcceptanceRadius = AcceptanceRadius;
	params.bStopOnOverlap = bStopOnOverlap;
	params.bUsePathfinding = bUsePathfinding;
	params.bCanStrafe = bCanStrafe;
	params.FilterClass = FilterClass;
	params.bAllowPartialPath = bAllowPartialPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AIController.K2_SetFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  NewFocus                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8828C80              		 offset:1e68c80                       

void AAIController::K2_SetFocus(class AActor* NewFocus)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIController.K2_SetFocus"));

	AAIController_K2_SetFocus_Params params;
	params.NewFocus = NewFocus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIController.K2_SetFocalPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 FP                             (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8828BF0              		 offset:1e68bf0                       

void AAIController::K2_SetFocalPoint(const struct FVector& FP)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIController.K2_SetFocalPoint"));

	AAIController_K2_SetFocalPoint_Params params;
	params.FP = FP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIController.K2_ClearFocus
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D8828BD0              		 offset:1e68bd0                       

void AAIController::K2_ClearFocus()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIController.K2_ClearFocus"));

	AAIController_K2_ClearFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIController.HasPartialPath
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D88289F0              		 offset:1e689f0                       

bool AAIController::HasPartialPath()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIController.HasPartialPath"));

	AAIController_HasPartialPath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AIController.GetPathFollowingComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPathFollowingComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6D8828700              		 offset:1e68700                       

class UPathFollowingComponent* AAIController::GetPathFollowingComponent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIController.GetPathFollowingComponent"));

	AAIController_GetPathFollowingComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AIController.GetMoveStatus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EPathFollowingStatus> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8828660              		 offset:1e68660                       

TEnumAsByte<EPathFollowingStatus> AAIController::GetMoveStatus()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIController.GetMoveStatus"));

	AAIController_GetMoveStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AIController.GetImmediateMoveDestination
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8828530              		 offset:1e68530                       

struct FVector AAIController::GetImmediateMoveDestination()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIController.GetImmediateMoveDestination"));

	AAIController_GetImmediateMoveDestination_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AIController.GetFocusActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8828500              		 offset:1e68500                       

class AActor* AAIController::GetFocusActor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIController.GetFocusActor"));

	AAIController_GetFocusActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AIController.GetFocalPointOnActor
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8828450              		 offset:1e68450                       

struct FVector AAIController::GetFocalPointOnActor(class AActor* Actor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIController.GetFocalPointOnActor"));

	AAIController_GetFocalPointOnActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AIController.GetFocalPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8828410              		 offset:1e68410                       

struct FVector AAIController::GetFocalPoint()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIController.GetFocalPoint"));

	AAIController_GetFocalPoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AIController.GetAIPerceptionComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAIPerceptionComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6D8828000              		 offset:1e68000                       

class UAIPerceptionComponent* AAIController::GetAIPerceptionComponent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIController.GetAIPerceptionComponent"));

	AAIController_GetAIPerceptionComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AIController.ClaimTaskResource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ResourceClass                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8827D40              		 offset:1e67d40                       

void AAIController::ClaimTaskResource(class UClass* ResourceClass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIController.ClaimTaskResource"));

	AAIController_ClaimTaskResource_Params params;
	params.ResourceClass = ResourceClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted
// (Final, Native, Public)
// Parameters:
// struct FAIRequestID            RequestID                      (Parm)
// TEnumAsByte<EPathFollowingResult> MovementResult                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8829510              		 offset:1e69510                       

void UAIAsyncTaskBlueprintProxy::OnMoveCompleted(const struct FAIRequestID& RequestID, TEnumAsByte<EPathFollowingResult> MovementResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted"));

	UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Params params;
	params.RequestID = RequestID;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnimInstance*           AnimInstance                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUnlockMovement                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UnlockAILogic                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D882A4F0              		 offset:1e6a4f0                       

void UAIBlueprintHelperLibrary::STATIC_UnlockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation"));

	UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Params params;
	params.AnimInstance = AnimInstance;
	params.bUnlockMovement = bUnlockMovement;
	params.UnlockAILogic = UnlockAILogic;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  PawnClass                      (Parm, ZeroConstructor, IsPlainOldData)
// class UBehaviorTree*           BehaviorTree                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, IsPlainOldData)
// bool                           bNoCollisionFail               (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D882A2A0              		 offset:1e6a2a0                       

class APawn* UAIBlueprintHelperLibrary::STATIC_SpawnAIFromClass(class UObject* WorldContextObject, class UClass* PawnClass, class UBehaviorTree* BehaviorTree, const struct FVector& Location, const struct FRotator& Rotation, bool bNoCollisionFail)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass"));

	UAIBlueprintHelperLibrary_SpawnAIFromClass_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PawnClass = PawnClass;
	params.BehaviorTree = BehaviorTree;
	params.Location = Location;
	params.Rotation = Rotation;
	params.bNoCollisionFail = bNoCollisionFail;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.SendAIMessage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APawn*                   Target                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Message                        (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 MessageSource                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D882A0E0              		 offset:1e6a0e0                       

void UAIBlueprintHelperLibrary::STATIC_SendAIMessage(class APawn* Target, const struct FName& Message, class UObject* MessageSource, bool bSuccess)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIBlueprintHelperLibrary.SendAIMessage"));

	UAIBlueprintHelperLibrary_SendAIMessage_Params params;
	params.Target = Target;
	params.Message = Message;
	params.MessageSource = MessageSource;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnimInstance*           AnimInstance                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLockMovement                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           LockAILogic                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8828D00              		 offset:1e68d00                       

void UAIBlueprintHelperLibrary::STATIC_LockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation"));

	UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Params params;
	params.AnimInstance = AnimInstance;
	params.bLockMovement = bLockMovement;
	params.LockAILogic = LockAILogic;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                Rotation                       (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8828B40              		 offset:1e68b40                       

bool UAIBlueprintHelperLibrary::STATIC_IsValidAIRotation(const struct FRotator& Rotation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation"));

	UAIBlueprintHelperLibrary_IsValidAIRotation_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8828AB0              		 offset:1e68ab0                       

bool UAIBlueprintHelperLibrary::STATIC_IsValidAILocation(const struct FVector& Location)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation"));

	UAIBlueprintHelperLibrary_IsValidAILocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.IsValidAIDirection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 DirectionVector                (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8828A20              		 offset:1e68a20                       

bool UAIBlueprintHelperLibrary::STATIC_IsValidAIDirection(const struct FVector& DirectionVector)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIBlueprintHelperLibrary.IsValidAIDirection"));

	UAIBlueprintHelperLibrary_IsValidAIDirection_Params params;
	params.DirectionVector = DirectionVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.GetBlackboard
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UBlackboardComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6D88282A0              		 offset:1e682a0                       

class UBlackboardComponent* UAIBlueprintHelperLibrary::STATIC_GetBlackboard(class AActor* Target)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIBlueprintHelperLibrary.GetBlackboard"));

	UAIBlueprintHelperLibrary_GetBlackboard_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.GetAIController
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  ControlledActor                (Parm, ZeroConstructor, IsPlainOldData)
// class AAIController*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8827F80              		 offset:1e67f80                       

class AAIController* UAIBlueprintHelperLibrary::STATIC_GetAIController(class AActor* ControlledActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIBlueprintHelperLibrary.GetAIController"));

	UAIBlueprintHelperLibrary_GetAIController_Params params;
	params.ControlledActor = ControlledActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Destination                    (Parm, IsPlainOldData)
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          AcceptanceRadius               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bStopOnOverlap                 (Parm, ZeroConstructor, IsPlainOldData)
// class UAIAsyncTaskBlueprintProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8827DC0              		 offset:1e67dc0                       

class UAIAsyncTaskBlueprintProxy* UAIBlueprintHelperLibrary::STATIC_CreateMoveToProxyObject(class UObject* WorldContextObject, class APawn* Pawn, const struct FVector& Destination, class AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject"));

	UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Pawn = Pawn;
	params.Destination = Destination;
	params.TargetActor = TargetActor;
	params.AcceptanceRadius = AcceptanceRadius;
	params.bStopOnOverlap = bStopOnOverlap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AIPerceptionSystem.ReportPerceptionEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// class UAISenseEvent*           PerceptionEvent                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8829D70              		 offset:1e69d70                       

void UAIPerceptionSystem::STATIC_ReportPerceptionEvent(class UObject* WorldContext, class UAISenseEvent* PerceptionEvent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIPerceptionSystem.ReportPerceptionEvent"));

	UAIPerceptionSystem_ReportPerceptionEvent_Params params;
	params.WorldContext = WorldContext;
	params.PerceptionEvent = PerceptionEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIPerceptionSystem.ReportEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAISenseEvent*           PerceptionEvent                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8829B30              		 offset:1e69b30                       

void UAIPerceptionSystem::ReportEvent(class UAISenseEvent* PerceptionEvent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIPerceptionSystem.ReportEvent"));

	UAIPerceptionSystem_ReportEvent_Params params;
	params.PerceptionEvent = PerceptionEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Sense                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8829850              		 offset:1e69850                       

bool UAIPerceptionSystem::STATIC_RegisterPerceptionStimuliSource(class UObject* WorldContext, class UClass* Sense, class AActor* Target)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource"));

	UAIPerceptionSystem_RegisterPerceptionStimuliSource_Params params;
	params.WorldContext = WorldContext;
	params.Sense = Sense;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay
// (Final, Native, Protected)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8829710              		 offset:1e69710                       

void UAIPerceptionSystem::OnPerceptionStimuliSourceEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay"));

	UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Params params;
	params.Actor = Actor;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FAIStimulus             Stimulus                       (ConstParm, Parm, OutParm, ReferenceParm)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D88288D0              		 offset:1e688d0                       

class UClass* UAIPerceptionSystem::STATIC_GetSenseClassForStimulus(class UObject* WorldContext, const struct FAIStimulus& Stimulus)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus"));

	UAIPerceptionSystem_GetSenseClassForStimulus_Params params;
	params.WorldContext = WorldContext;
	params.Stimulus = Stimulus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D882A020              		 offset:1e6a020                       

void UAIPerceptionComponent::RequestStimuliListenerUpdate()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate"));

	UAIPerceptionComponent_RequestStimuliListenerUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIPerceptionComponent.OnOwnerEndPlay
// (Final, Native, Public)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8829650              		 offset:1e69650                       

void UAIPerceptionComponent::OnOwnerEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIPerceptionComponent.OnOwnerEndPlay"));

	UAIPerceptionComponent_OnOwnerEndPlay_Params params;
	params.Actor = Actor;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>          OutActors                      (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF6D8828820              		 offset:1e68820                       

void UAIPerceptionComponent::GetPerceivedHostileActors(TArray<class AActor*>* OutActors)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors"));

	UAIPerceptionComponent_GetPerceivedHostileActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;
}


// Function AIModule.AIPerceptionComponent.GetPerceivedActors
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  SenseToUse                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          OutActors                      (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF6D8828730              		 offset:1e68730                       

void UAIPerceptionComponent::GetPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIPerceptionComponent.GetPerceivedActors"));

	UAIPerceptionComponent_GetPerceivedActors_Params params;
	params.SenseToUse = SenseToUse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;
}


// Function AIModule.AIPerceptionComponent.GetKnownPerceivedActors
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  SenseToUse                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          OutActors                      (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF6D8828570              		 offset:1e68570                       

void UAIPerceptionComponent::GetKnownPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIPerceptionComponent.GetKnownPerceivedActors"));

	UAIPerceptionComponent_GetKnownPerceivedActors_Params params;
	params.SenseToUse = SenseToUse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;
}


// Function AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  SenseToUse                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          OutActors                      (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF6D8828320              		 offset:1e68320                       

void UAIPerceptionComponent::GetCurrentlyPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors"));

	UAIPerceptionComponent_GetCurrentlyPerceivedActors_Params params;
	params.SenseToUse = SenseToUse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;
}


// Function AIModule.AIPerceptionComponent.GetActorsPerception
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FActorPerceptionBlueprintInfo Info                           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8828030              		 offset:1e68030                       

bool UAIPerceptionComponent::GetActorsPerception(class AActor* Actor, struct FActorPerceptionBlueprintInfo* Info)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIPerceptionComponent.GetActorsPerception"));

	UAIPerceptionComponent_GetActorsPerception_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;

	return params.ReturnValue;
}


// Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  SenseClass                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D882A620              		 offset:1e6a620                       

void UAIPerceptionStimuliSourceComponent::UnregisterFromSense(class UClass* SenseClass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense"));

	UAIPerceptionStimuliSourceComponent_UnregisterFromSense_Params params;
	params.SenseClass = SenseClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D882A600              		 offset:1e6a600                       

void UAIPerceptionStimuliSourceComponent::UnregisterFromPerceptionSystem()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem"));

	UAIPerceptionStimuliSourceComponent_UnregisterFromPerceptionSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D8829940              		 offset:1e69940                       

void UAIPerceptionStimuliSourceComponent::RegisterWithPerceptionSystem()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem"));

	UAIPerceptionStimuliSourceComponent_RegisterWithPerceptionSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  SenseClass                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D88297D0              		 offset:1e697d0                       

void UAIPerceptionStimuliSourceComponent::RegisterForSense(class UClass* SenseClass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense"));

	UAIPerceptionStimuliSourceComponent_RegisterForSense_Params params;
	params.SenseClass = SenseClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AISense_Blueprint.OnUpdate
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class UAISenseEvent*>   EventsToProcess                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

float UAISense_Blueprint::OnUpdate(TArray<class UAISenseEvent*> EventsToProcess)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AISense_Blueprint.OnUpdate"));

	UAISense_Blueprint_OnUpdate_Params params;
	params.EventsToProcess = EventsToProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AISense_Blueprint.OnListenerUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  ActorListener                  (Parm, ZeroConstructor, IsPlainOldData)
// class UAIPerceptionComponent*  PerceptionComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UAISense_Blueprint::OnListenerUpdated(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AISense_Blueprint.OnListenerUpdated"));

	UAISense_Blueprint_OnListenerUpdated_Params params;
	params.ActorListener = ActorListener;
	params.PerceptionComponent = PerceptionComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AISense_Blueprint.OnListenerUnregistered
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  ActorListener                  (Parm, ZeroConstructor, IsPlainOldData)
// class UAIPerceptionComponent*  PerceptionComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UAISense_Blueprint::OnListenerUnregistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AISense_Blueprint.OnListenerUnregistered"));

	UAISense_Blueprint_OnListenerUnregistered_Params params;
	params.ActorListener = ActorListener;
	params.PerceptionComponent = PerceptionComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AISense_Blueprint.OnListenerRegistered
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  ActorListener                  (Parm, ZeroConstructor, IsPlainOldData)
// class UAIPerceptionComponent*  PerceptionComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UAISense_Blueprint::OnListenerRegistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AISense_Blueprint.OnListenerRegistered"));

	UAISense_Blueprint_OnListenerRegistered_Params params;
	params.ActorListener = ActorListener;
	params.PerceptionComponent = PerceptionComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AISense_Blueprint.K2_OnNewPawn
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                   NewPawn                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UAISense_Blueprint::K2_OnNewPawn(class APawn* NewPawn)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AISense_Blueprint.K2_OnNewPawn"));

	UAISense_Blueprint_K2_OnNewPawn_Params params;
	params.NewPawn = NewPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AISense_Blueprint.GetAllListenerComponents
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UAIPerceptionComponent*> ListenerComponents             (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF6D88281F0              		 offset:1e681f0                       

void UAISense_Blueprint::GetAllListenerComponents(TArray<class UAIPerceptionComponent*>* ListenerComponents)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AISense_Blueprint.GetAllListenerComponents"));

	UAISense_Blueprint_GetAllListenerComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ListenerComponents != nullptr)
		*ListenerComponents = params.ListenerComponents;
}


// Function AIModule.AISense_Blueprint.GetAllListenerActors
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>          ListenerActors                 (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF6D8828140              		 offset:1e68140                       

void UAISense_Blueprint::GetAllListenerActors(TArray<class AActor*>* ListenerActors)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AISense_Blueprint.GetAllListenerActors"));

	UAISense_Blueprint_GetAllListenerActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ListenerActors != nullptr)
		*ListenerActors = params.ListenerActors;
}


// Function AIModule.AISense_Damage.ReportDamageEvent
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 EventLocation                  (Parm, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8829960              		 offset:1e69960                       

void UAISense_Damage::STATIC_ReportDamageEvent(class UObject* WorldContext, class AActor* DamagedActor, class AActor* Instigator, float DamageAmount, const struct FVector& EventLocation, const struct FVector& HitLocation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AISense_Damage.ReportDamageEvent"));

	UAISense_Damage_ReportDamageEvent_Params params;
	params.WorldContext = WorldContext;
	params.DamagedActor = DamagedActor;
	params.Instigator = Instigator;
	params.DamageAmount = DamageAmount;
	params.EventLocation = EventLocation;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AISense_Hearing.ReportNoiseEvent
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NoiseLocation                  (Parm, IsPlainOldData)
// float                          Loudness                       (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxRange                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8829BB0              		 offset:1e69bb0                       

void UAISense_Hearing::STATIC_ReportNoiseEvent(class UObject* WorldContext, const struct FVector& NoiseLocation, float Loudness, class AActor* Instigator, float MaxRange, const struct FName& Tag)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AISense_Hearing.ReportNoiseEvent"));

	UAISense_Hearing_ReportNoiseEvent_Params params;
	params.WorldContext = WorldContext;
	params.NoiseLocation = NoiseLocation;
	params.Loudness = Loudness;
	params.Instigator = Instigator;
	params.MaxRange = MaxRange;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AISense_Prediction.RequestPawnPredictionEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APawn*                   Requestor                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  PredictedActor                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          PredictionTime                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8829F20              		 offset:1e69f20                       

void UAISense_Prediction::STATIC_RequestPawnPredictionEvent(class APawn* Requestor, class AActor* PredictedActor, float PredictionTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AISense_Prediction.RequestPawnPredictionEvent"));

	UAISense_Prediction_RequestPawnPredictionEvent_Params params;
	params.Requestor = Requestor;
	params.PredictedActor = PredictedActor;
	params.PredictionTime = PredictionTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AISense_Prediction.RequestControllerPredictionEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AAIController*           Requestor                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  PredictedActor                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          PredictionTime                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8829E20              		 offset:1e69e20                       

void UAISense_Prediction::STATIC_RequestControllerPredictionEvent(class AAIController* Requestor, class AActor* PredictedActor, float PredictionTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AISense_Prediction.RequestControllerPredictionEvent"));

	UAISense_Prediction_RequestControllerPredictionEvent_Params params;
	params.Requestor = Requestor;
	params.PredictedActor = PredictedActor;
	params.PredictionTime = PredictionTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AISystem.AILoggingVerbose
// (Exec, Native, Public)
// FunctionAddress:0x00007FF6D9DADAC0              		 offset:33edac0                       

void UAISystem::AILoggingVerbose()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AISystem.AILoggingVerbose"));

	UAISystem_AILoggingVerbose_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AISystem.AIIgnorePlayers
// (Exec, Native, Public)
// FunctionAddress:0x00007FF6DA08C390              		 offset:36cc390                       

void UAISystem::AIIgnorePlayers()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AISystem.AIIgnorePlayers"));

	UAISystem_AIIgnorePlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.AITask_MoveTo.AIMoveTo
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AAIController*           Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 GoalLocation                   (Parm, IsPlainOldData)
// class AActor*                  GoalActor                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          AcceptanceRadius               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAIOptionFlag>     StopOnOverlap                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAIOptionFlag>     AcceptPartialPath              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUsePathfinding                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLockAILogic                   (Parm, ZeroConstructor, IsPlainOldData)
// class UAITask_MoveTo*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08C3B0              		 offset:36cc3b0                       

class UAITask_MoveTo* UAITask_MoveTo::STATIC_AIMoveTo(class AAIController* Controller, const struct FVector& GoalLocation, class AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<EAIOptionFlag> StopOnOverlap, TEnumAsByte<EAIOptionFlag> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AITask_MoveTo.AIMoveTo"));

	UAITask_MoveTo_AIMoveTo_Params params;
	params.Controller = Controller;
	params.GoalLocation = GoalLocation;
	params.GoalActor = GoalActor;
	params.AcceptanceRadius = AcceptanceRadius;
	params.StopOnOverlap = StopOnOverlap;
	params.AcceptPartialPath = AcceptPartialPath;
	params.bUsePathfinding = bUsePathfinding;
	params.bLockAILogic = bLockAILogic;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.AITask_RunEQS.RunEQS
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AAIController*           Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class UEnvQuery*               QueryTemplate                  (Parm, ZeroConstructor, IsPlainOldData)
// class UAITask_RunEQS*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08F380              		 offset:36cf380                       

class UAITask_RunEQS* UAITask_RunEQS::STATIC_RunEQS(class AAIController* Controller, class UEnvQuery* QueryTemplate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AITask_RunEQS.RunEQS"));

	UAITask_RunEQS_RunEQS_Params params;
	params.Controller = Controller;
	params.QueryTemplate = QueryTemplate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BrainComponent.StopLogic
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Reason                         (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6DA091100              		 offset:36d1100                       

void UBrainComponent::StopLogic(const struct FString& Reason)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BrainComponent.StopLogic"));

	UBrainComponent_StopLogic_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BrainComponent.RestartLogic
// (Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6D94B25D0              		 offset:2af25d0                       

void UBrainComponent::RestartLogic()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BrainComponent.RestartLogic"));

	UBrainComponent_RestartLogic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BrainComponent.IsRunning
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08EE10              		 offset:36cee10                       

bool UBrainComponent::IsRunning()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BrainComponent.IsRunning"));

	UBrainComponent_IsRunning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BrainComponent.IsPaused
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08EDE0              		 offset:36cede0                       

bool UBrainComponent::IsPaused()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BrainComponent.IsPaused"));

	UBrainComponent_IsPaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BehaviorTreeComponent.SetDynamicSubtree
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag            InjectTag                      (Parm)
// class UBehaviorTree*           BehaviorAsset                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DA0902C0              		 offset:36d02c0                       

void UBehaviorTreeComponent::SetDynamicSubtree(const struct FGameplayTag& InjectTag, class UBehaviorTree* BehaviorAsset)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BehaviorTreeComponent.SetDynamicSubtree"));

	UBehaviorTreeComponent_SetDynamicSubtree_Params params;
	params.InjectTag = InjectTag;
	params.BehaviorAsset = BehaviorAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag            CooldownTag                    (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08E630              		 offset:36ce630                       

float UBehaviorTreeComponent::GetTagCooldownEndTime(const struct FGameplayTag& CooldownTag)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime"));

	UBehaviorTreeComponent_GetTagCooldownEndTime_Params params;
	params.CooldownTag = CooldownTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag            CooldownTag                    (Parm)
// float                          CooldownDuration               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAddToExistingDuration         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08C5F0              		 offset:36cc5f0                       

void UBehaviorTreeComponent::AddCooldownTagDuration(const struct FGameplayTag& CooldownTag, float CooldownDuration, bool bAddToExistingDuration)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration"));

	UBehaviorTreeComponent_AddCooldownTagDuration_Params params;
	params.CooldownTag = CooldownTag;
	params.CooldownDuration = CooldownDuration;
	params.bAddToExistingDuration = bAddToExistingDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BlackboardComponent.SetValueAsVector
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 VectorValue                    (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA090F60              		 offset:36d0f60                       

void UBlackboardComponent::SetValueAsVector(const struct FName& KeyName, const struct FVector& VectorValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.SetValueAsVector"));

	UBlackboardComponent_SetValueAsVector_Params params;
	params.KeyName = KeyName;
	params.VectorValue = VectorValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BlackboardComponent.SetValueAsString
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 StringValue                    (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6DA090E20              		 offset:36d0e20                       

void UBlackboardComponent::SetValueAsString(const struct FName& KeyName, const struct FString& StringValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.SetValueAsString"));

	UBlackboardComponent_SetValueAsString_Params params;
	params.KeyName = KeyName;
	params.StringValue = StringValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BlackboardComponent.SetValueAsRotator
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                VectorValue                    (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA090D30              		 offset:36d0d30                       

void UBlackboardComponent::SetValueAsRotator(const struct FName& KeyName, const struct FRotator& VectorValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.SetValueAsRotator"));

	UBlackboardComponent_SetValueAsRotator_Params params;
	params.KeyName = KeyName;
	params.VectorValue = VectorValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BlackboardComponent.SetValueAsObject
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 ObjectValue                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DA090C60              		 offset:36d0c60                       

void UBlackboardComponent::SetValueAsObject(const struct FName& KeyName, class UObject* ObjectValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.SetValueAsObject"));

	UBlackboardComponent_SetValueAsObject_Params params;
	params.KeyName = KeyName;
	params.ObjectValue = ObjectValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BlackboardComponent.SetValueAsName
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   NameValue                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DA090B90              		 offset:36d0b90                       

void UBlackboardComponent::SetValueAsName(const struct FName& KeyName, const struct FName& NameValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.SetValueAsName"));

	UBlackboardComponent_SetValueAsName_Params params;
	params.KeyName = KeyName;
	params.NameValue = NameValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BlackboardComponent.SetValueAsInt
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            IntValue                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DA090AC0              		 offset:36d0ac0                       

void UBlackboardComponent::SetValueAsInt(const struct FName& KeyName, int IntValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.SetValueAsInt"));

	UBlackboardComponent_SetValueAsInt_Params params;
	params.KeyName = KeyName;
	params.IntValue = IntValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BlackboardComponent.SetValueAsFloat
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          FloatValue                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DA0909F0              		 offset:36d09f0                       

void UBlackboardComponent::SetValueAsFloat(const struct FName& KeyName, float FloatValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.SetValueAsFloat"));

	UBlackboardComponent_SetValueAsFloat_Params params;
	params.KeyName = KeyName;
	params.FloatValue = FloatValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BlackboardComponent.SetValueAsEnum
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// unsigned char                  EnumValue                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DA090920              		 offset:36d0920                       

void UBlackboardComponent::SetValueAsEnum(const struct FName& KeyName, unsigned char EnumValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.SetValueAsEnum"));

	UBlackboardComponent_SetValueAsEnum_Params params;
	params.KeyName = KeyName;
	params.EnumValue = EnumValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BlackboardComponent.SetValueAsClass
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UClass*                  ClassValue                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DA090850              		 offset:36d0850                       

void UBlackboardComponent::SetValueAsClass(const struct FName& KeyName, class UClass* ClassValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.SetValueAsClass"));

	UBlackboardComponent_SetValueAsClass_Params params;
	params.KeyName = KeyName;
	params.ClassValue = ClassValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BlackboardComponent.SetValueAsBool
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           boolValue                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DA090780              		 offset:36d0780                       

void UBlackboardComponent::SetValueAsBool(const struct FName& KeyName, bool boolValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.SetValueAsBool"));

	UBlackboardComponent_SetValueAsBool_Params params;
	params.KeyName = KeyName;
	params.boolValue = boolValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BlackboardComponent.IsVectorValueSet
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08EED0              		 offset:36ceed0                       

bool UBlackboardComponent::IsVectorValueSet(const struct FName& KeyName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.IsVectorValueSet"));

	UBlackboardComponent_IsVectorValueSet_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsVector
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08ECD0              		 offset:36cecd0                       

struct FVector UBlackboardComponent::GetValueAsVector(const struct FName& KeyName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.GetValueAsVector"));

	UBlackboardComponent_GetValueAsVector_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsString
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6DA08EBE0              		 offset:36cebe0                       

struct FString UBlackboardComponent::GetValueAsString(const struct FName& KeyName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.GetValueAsString"));

	UBlackboardComponent_GetValueAsString_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsRotator
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08EB30              		 offset:36ceb30                       

struct FRotator UBlackboardComponent::GetValueAsRotator(const struct FName& KeyName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.GetValueAsRotator"));

	UBlackboardComponent_GetValueAsRotator_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsObject
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08EA90              		 offset:36cea90                       

class UObject* UBlackboardComponent::GetValueAsObject(const struct FName& KeyName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.GetValueAsObject"));

	UBlackboardComponent_GetValueAsObject_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsName
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08E9F0              		 offset:36ce9f0                       

struct FName UBlackboardComponent::GetValueAsName(const struct FName& KeyName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.GetValueAsName"));

	UBlackboardComponent_GetValueAsName_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsInt
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08E950              		 offset:36ce950                       

int UBlackboardComponent::GetValueAsInt(const struct FName& KeyName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.GetValueAsInt"));

	UBlackboardComponent_GetValueAsInt_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsFloat
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08E8B0              		 offset:36ce8b0                       

float UBlackboardComponent::GetValueAsFloat(const struct FName& KeyName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.GetValueAsFloat"));

	UBlackboardComponent_GetValueAsFloat_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsEnum
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08E810              		 offset:36ce810                       

unsigned char UBlackboardComponent::GetValueAsEnum(const struct FName& KeyName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.GetValueAsEnum"));

	UBlackboardComponent_GetValueAsEnum_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsClass
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08E770              		 offset:36ce770                       

class UClass* UBlackboardComponent::GetValueAsClass(const struct FName& KeyName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.GetValueAsClass"));

	UBlackboardComponent_GetValueAsClass_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsBool
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08E6D0              		 offset:36ce6d0                       

bool UBlackboardComponent::GetValueAsBool(const struct FName& KeyName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.GetValueAsBool"));

	UBlackboardComponent_GetValueAsBool_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetRotationFromEntry
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                ResultRotation                 (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08E540              		 offset:36ce540                       

bool UBlackboardComponent::GetRotationFromEntry(const struct FName& KeyName, struct FRotator* ResultRotation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.GetRotationFromEntry"));

	UBlackboardComponent_GetRotationFromEntry_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultRotation != nullptr)
		*ResultRotation = params.ResultRotation;

	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetLocationFromEntry
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ResultLocation                 (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08E1C0              		 offset:36ce1c0                       

bool UBlackboardComponent::GetLocationFromEntry(const struct FName& KeyName, struct FVector* ResultLocation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.GetLocationFromEntry"));

	UBlackboardComponent_GetLocationFromEntry_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultLocation != nullptr)
		*ResultLocation = params.ResultLocation;

	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.ClearValue
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08D190              		 offset:36cd190                       

void UBlackboardComponent::ClearValue(const struct FName& KeyName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.ClearValue"));

	UBlackboardComponent_ClearValue_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTFunctionLibrary.StopUsingExternalEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DA0911B0              		 offset:36d11b0                       

void UBTFunctionLibrary::STATIC_StopUsingExternalEvent(class UBTNode* NodeOwner)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.StopUsingExternalEvent"));

	UBTFunctionLibrary_StopUsingExternalEvent_Params params;
	params.NodeOwner = NodeOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTFunctionLibrary.StartUsingExternalEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OwningActor                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DA091050              		 offset:36d1050                       

void UBTFunctionLibrary::STATIC_StartUsingExternalEvent(class UBTNode* NodeOwner, class AActor* OwningActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.StartUsingExternalEvent"));

	UBTFunctionLibrary_StartUsingExternalEvent_Params params;
	params.NodeOwner = NodeOwner;
	params.OwningActor = OwningActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 Value                          (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA090170              		 offset:36d0170                       

void UBTFunctionLibrary::STATIC_SetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FVector& Value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector"));

	UBTFunctionLibrary_SetBlackboardValueAsVector_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 Value                          (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6DA08FFE0              		 offset:36cffe0                       

void UBTFunctionLibrary::STATIC_SetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FString& Value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString"));

	UBTFunctionLibrary_SetBlackboardValueAsString_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FRotator                Value                          (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08FE90              		 offset:36cfe90                       

void UBTFunctionLibrary::STATIC_SetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FRotator& Value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator"));

	UBTFunctionLibrary_SetBlackboardValueAsRotator_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 Value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08FD50              		 offset:36cfd50                       

void UBTFunctionLibrary::STATIC_SetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UObject* Value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject"));

	UBTFunctionLibrary_SetBlackboardValueAsObject_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   Value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08FC10              		 offset:36cfc10                       

void UBTFunctionLibrary::STATIC_SetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FName& Value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName"));

	UBTFunctionLibrary_SetBlackboardValueAsName_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08FAD0              		 offset:36cfad0                       

void UBTFunctionLibrary::STATIC_SetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, int Value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt"));

	UBTFunctionLibrary_SetBlackboardValueAsInt_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08F990              		 offset:36cf990                       

void UBTFunctionLibrary::STATIC_SetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, float Value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat"));

	UBTFunctionLibrary_SetBlackboardValueAsFloat_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// unsigned char                  Value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08F850              		 offset:36cf850                       

void UBTFunctionLibrary::STATIC_SetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, unsigned char Value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum"));

	UBTFunctionLibrary_SetBlackboardValueAsEnum_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UClass*                  Value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08F710              		 offset:36cf710                       

void UBTFunctionLibrary::STATIC_SetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UClass* Value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass"));

	UBTFunctionLibrary_SetBlackboardValueAsClass_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08F5D0              		 offset:36cf5d0                       

void UBTFunctionLibrary::STATIC_SetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, bool Value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool"));

	UBTFunctionLibrary_SetBlackboardValueAsBool_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTFunctionLibrary.GetOwnersBlackboard
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// class UBlackboardComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08E330              		 offset:36ce330                       

class UBlackboardComponent* UBTFunctionLibrary::STATIC_GetOwnersBlackboard(class UBTNode* NodeOwner)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.GetOwnersBlackboard"));

	UBTFunctionLibrary_GetOwnersBlackboard_Params params;
	params.NodeOwner = NodeOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetOwnerComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// class UBehaviorTreeComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08E2B0              		 offset:36ce2b0                       

class UBehaviorTreeComponent* UBTFunctionLibrary::STATIC_GetOwnerComponent(class UBTNode* NodeOwner)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.GetOwnerComponent"));

	UBTFunctionLibrary_GetOwnerComponent_Params params;
	params.NodeOwner = NodeOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08E020              		 offset:36ce020                       

struct FVector UBTFunctionLibrary::STATIC_GetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector"));

	UBTFunctionLibrary_GetBlackboardValueAsVector_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6DA08DEE0              		 offset:36cdee0                       

struct FString UBTFunctionLibrary::STATIC_GetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString"));

	UBTFunctionLibrary_GetBlackboardValueAsString_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08DDD0              		 offset:36cddd0                       

struct FRotator UBTFunctionLibrary::STATIC_GetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator"));

	UBTFunctionLibrary_GetBlackboardValueAsRotator_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08DCD0              		 offset:36cdcd0                       

class UObject* UBTFunctionLibrary::STATIC_GetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject"));

	UBTFunctionLibrary_GetBlackboardValueAsObject_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08DBC0              		 offset:36cdbc0                       

struct FName UBTFunctionLibrary::STATIC_GetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName"));

	UBTFunctionLibrary_GetBlackboardValueAsName_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08DAC0              		 offset:36cdac0                       

int UBTFunctionLibrary::STATIC_GetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt"));

	UBTFunctionLibrary_GetBlackboardValueAsInt_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08D9C0              		 offset:36cd9c0                       

float UBTFunctionLibrary::STATIC_GetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat"));

	UBTFunctionLibrary_GetBlackboardValueAsFloat_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08D8C0              		 offset:36cd8c0                       

unsigned char UBTFunctionLibrary::STATIC_GetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum"));

	UBTFunctionLibrary_GetBlackboardValueAsEnum_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08D7C0              		 offset:36cd7c0                       

class UClass* UBTFunctionLibrary::STATIC_GetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass"));

	UBTFunctionLibrary_GetBlackboardValueAsClass_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08D6C0              		 offset:36cd6c0                       

bool UBTFunctionLibrary::STATIC_GetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool"));

	UBTFunctionLibrary_GetBlackboardValueAsBool_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08D5C0              		 offset:36cd5c0                       

class AActor* UBTFunctionLibrary::STATIC_GetBlackboardValueAsActor(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor"));

	UBTFunctionLibrary_GetBlackboardValueAsActor_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF6DA08D0A0              		 offset:36cd0a0                       

void UBTFunctionLibrary::STATIC_ClearBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector"));

	UBTFunctionLibrary_ClearBlackboardValueAsVector_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTFunctionLibrary.ClearBlackboardValue
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF6DA08CFB0              		 offset:36ccfb0                       

void UBTFunctionLibrary::STATIC_ClearBlackboardValue(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.ClearBlackboardValue"));

	UBTFunctionLibrary_ClearBlackboardValue_Params params;
	params.NodeOwner = NodeOwner;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBTDecorator_BlueprintBase::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI"));

	UBTDecorator_BlueprintBase_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBTDecorator_BlueprintBase::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTDecorator_BlueprintBase.ReceiveTick"));

	UBTDecorator_BlueprintBase_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBTDecorator_BlueprintBase::ReceiveObserverDeactivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI"));

	UBTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBTDecorator_BlueprintBase::ReceiveObserverDeactivated(class AActor* OwnerActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated"));

	UBTDecorator_BlueprintBase_ReceiveObserverDeactivated_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBTDecorator_BlueprintBase::ReceiveObserverActivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI"));

	UBTDecorator_BlueprintBase_ReceiveObserverActivatedAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBTDecorator_BlueprintBase::ReceiveObserverActivated(class AActor* OwnerActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated"));

	UBTDecorator_BlueprintBase_ReceiveObserverActivated_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBTDecorator_BlueprintBase::ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI"));

	UBTDecorator_BlueprintBase_ReceiveExecutionStartAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBTDecorator_BlueprintBase::ReceiveExecutionStart(class AActor* OwnerActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart"));

	UBTDecorator_BlueprintBase_ReceiveExecutionStart_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBTNodeResult>     NodeResult                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBTDecorator_BlueprintBase::ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, TEnumAsByte<EBTNodeResult> NodeResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI"));

	UBTDecorator_BlueprintBase_ReceiveExecutionFinishAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.NodeResult = NodeResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBTNodeResult>     NodeResult                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBTDecorator_BlueprintBase::ReceiveExecutionFinish(class AActor* OwnerActor, TEnumAsByte<EBTNodeResult> NodeResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish"));

	UBTDecorator_BlueprintBase_ReceiveExecutionFinish_Params params;
	params.OwnerActor = OwnerActor;
	params.NodeResult = NodeResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

bool UBTDecorator_BlueprintBase::PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI"));

	UBTDecorator_BlueprintBase_PerformConditionCheckAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

bool UBTDecorator_BlueprintBase::PerformConditionCheck(class AActor* OwnerActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck"));

	UBTDecorator_BlueprintBase_PerformConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08EDB0              		 offset:36cedb0                       

bool UBTDecorator_BlueprintBase::IsDecoratorObserverActive()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive"));

	UBTDecorator_BlueprintBase_IsDecoratorObserverActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08ED80              		 offset:36ced80                       

bool UBTDecorator_BlueprintBase::IsDecoratorExecutionActive()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive"));

	UBTDecorator_BlueprintBase_IsDecoratorExecutionActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BTService_BlueprintBase.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBTService_BlueprintBase::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTService_BlueprintBase.ReceiveTickAI"));

	UBTService_BlueprintBase_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTService_BlueprintBase.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBTService_BlueprintBase::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTService_BlueprintBase.ReceiveTick"));

	UBTService_BlueprintBase_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBTService_BlueprintBase::ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI"));

	UBTService_BlueprintBase_ReceiveSearchStartAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTService_BlueprintBase.ReceiveSearchStart
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBTService_BlueprintBase::ReceiveSearchStart(class AActor* OwnerActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTService_BlueprintBase.ReceiveSearchStart"));

	UBTService_BlueprintBase_ReceiveSearchStart_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBTService_BlueprintBase::ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI"));

	UBTService_BlueprintBase_ReceiveDeactivationAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTService_BlueprintBase.ReceiveDeactivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBTService_BlueprintBase::ReceiveDeactivation(class AActor* OwnerActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTService_BlueprintBase.ReceiveDeactivation"));

	UBTService_BlueprintBase_ReceiveDeactivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTService_BlueprintBase.ReceiveActivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBTService_BlueprintBase::ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTService_BlueprintBase.ReceiveActivationAI"));

	UBTService_BlueprintBase_ReceiveActivationAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTService_BlueprintBase.ReceiveActivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBTService_BlueprintBase::ReceiveActivation(class AActor* OwnerActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTService_BlueprintBase.ReceiveActivation"));

	UBTService_BlueprintBase_ReceiveActivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTService_BlueprintBase.IsServiceActive
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08EE40              		 offset:36cee40                       

bool UBTService_BlueprintBase::IsServiceActive()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTService_BlueprintBase.IsServiceActive"));

	UBTService_BlueprintBase_IsServiceActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FName                   MessageName                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            RequestID                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DA090410              		 offset:36d0410                       

void UBTTask_BlueprintBase::SetFinishOnMessageWithId(const struct FName& MessageName, int RequestID)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId"));

	UBTTask_BlueprintBase_SetFinishOnMessageWithId_Params params;
	params.MessageName = MessageName;
	params.RequestID = RequestID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FName                   MessageName                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DA090390              		 offset:36d0390                       

void UBTTask_BlueprintBase::SetFinishOnMessage(const struct FName& MessageName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage"));

	UBTTask_BlueprintBase_SetFinishOnMessage_Params params;
	params.MessageName = MessageName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTTask_BlueprintBase.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBTTask_BlueprintBase::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTTask_BlueprintBase.ReceiveTickAI"));

	UBTTask_BlueprintBase_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTTask_BlueprintBase.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBTTask_BlueprintBase::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTTask_BlueprintBase.ReceiveTick"));

	UBTTask_BlueprintBase_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBTTask_BlueprintBase::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI"));

	UBTTask_BlueprintBase_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTTask_BlueprintBase.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBTTask_BlueprintBase::ReceiveExecute(class AActor* OwnerActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTTask_BlueprintBase.ReceiveExecute"));

	UBTTask_BlueprintBase_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBTTask_BlueprintBase::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI"));

	UBTTask_BlueprintBase_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTTask_BlueprintBase.ReceiveAbort
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBTTask_BlueprintBase::ReceiveAbort(class AActor* OwnerActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTTask_BlueprintBase.ReceiveAbort"));

	UBTTask_BlueprintBase_ReceiveAbort_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTTask_BlueprintBase.IsTaskExecuting
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08EEA0              		 offset:36ceea0                       

bool UBTTask_BlueprintBase::IsTaskExecuting()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTTask_BlueprintBase.IsTaskExecuting"));

	UBTTask_BlueprintBase_IsTaskExecuting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BTTask_BlueprintBase.IsTaskAborting
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08EE70              		 offset:36cee70                       

bool UBTTask_BlueprintBase::IsTaskAborting()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTTask_BlueprintBase.IsTaskAborting"));

	UBTTask_BlueprintBase_IsTaskAborting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.BTTask_BlueprintBase.FinishExecute
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08D530              		 offset:36cd530                       

void UBTTask_BlueprintBase::FinishExecute(bool bSuccess)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTTask_BlueprintBase.FinishExecute"));

	UBTTask_BlueprintBase_FinishExecute_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.BTTask_BlueprintBase.FinishAbort
// (Final, Native, Protected, BlueprintCallable)
// FunctionAddress:0x00007FF6DA08D510              		 offset:36cd510                       

void UBTTask_BlueprintBase::FinishAbort()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTTask_BlueprintBase.FinishAbort"));

	UBTTask_BlueprintBase_FinishAbort_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent, Const)
// Parameters:
// class UObject*                 QuerierObject                  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  QuerierActor                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ResultingLocation              (Parm, OutParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UEnvQueryContext_BlueprintBase::ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation"));

	UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Params params;
	params.QuerierObject = QuerierObject;
	params.QuerierActor = QuerierActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultingLocation != nullptr)
		*ResultingLocation = params.ResultingLocation;
}


// Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor
// (Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// class UObject*                 QuerierObject                  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  QuerierActor                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ResultingActor                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UEnvQueryContext_BlueprintBase::ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor"));

	UEnvQueryContext_BlueprintBase_ProvideSingleActor_Params params;
	params.QuerierObject = QuerierObject;
	params.QuerierActor = QuerierActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultingActor != nullptr)
		*ResultingActor = params.ResultingActor;
}


// Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet
// (Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// class UObject*                 QuerierObject                  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  QuerierActor                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         ResultingLocationSet           (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UEnvQueryContext_BlueprintBase::ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet"));

	UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Params params;
	params.QuerierObject = QuerierObject;
	params.QuerierActor = QuerierActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultingLocationSet != nullptr)
		*ResultingLocationSet = params.ResultingLocationSet;
}


// Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet
// (Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// class UObject*                 QuerierObject                  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  QuerierActor                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ResultingActorsSet             (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UEnvQueryContext_BlueprintBase::ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet"));

	UEnvQueryContext_BlueprintBase_ProvideActorsSet_Params params;
	params.QuerierObject = QuerierObject;
	params.QuerierActor = QuerierActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultingActorsSet != nullptr)
		*ResultingActorsSet = params.ResultingActorsSet;
}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ParamName                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DA0905A0              		 offset:36d05a0                       

void UEnvQueryInstanceBlueprintWrapper::SetNamedParam(const struct FName& ParamName, float Value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam"));

	UEnvQueryInstanceBlueprintWrapper_SetNamedParam_Params params;
	params.ParamName = ParamName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6DA08E4B0              		 offset:36ce4b0                       

TArray<struct FVector> UEnvQueryInstanceBlueprintWrapper::GetResultsAsLocations()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations"));

	UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6DA08E420              		 offset:36ce420                       

TArray<class AActor*> UEnvQueryInstanceBlueprintWrapper::GetResultsAsActors()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors"));

	UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ItemIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08E130              		 offset:36ce130                       

float UEnvQueryInstanceBlueprintWrapper::GetItemScore(int ItemIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore"));

	UEnvQueryInstanceBlueprintWrapper_GetItemScore_Params params;
	params.ItemIndex = ItemIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper* QueryInstance                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEnvQueryStatus>   QueryStatus                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UEnvQueryInstanceBlueprintWrapper::EQSQueryDoneSignature__DelegateSignature(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature"));

	UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Params params;
	params.QueryInstance = QueryInstance;
	params.QueryStatus = QueryStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.EnvQueryManager.RunEQSQuery
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// class UEnvQuery*               QueryTemplate                  (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Querier                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEnvQueryRunMode>  RunMode                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  WrapperClass                   (Parm, ZeroConstructor, IsPlainOldData)
// class UEnvQueryInstanceBlueprintWrapper* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08F440              		 offset:36cf440                       

class UEnvQueryInstanceBlueprintWrapper* UEnvQueryManager::STATIC_RunEQSQuery(class UObject* WorldContext, class UEnvQuery* QueryTemplate, class UObject* Querier, TEnumAsByte<EEnvQueryRunMode> RunMode, class UClass* WrapperClass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.EnvQueryManager.RunEQSQuery"));

	UEnvQueryManager_RunEQSQuery_Params params;
	params.WorldContext = WorldContext;
	params.QueryTemplate = QueryTemplate;
	params.Querier = Querier;
	params.RunMode = RunMode;
	params.WrapperClass = WrapperClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08E3F0              		 offset:36ce3f0                       

class UObject* UEnvQueryGenerator_BlueprintBase::GetQuerier()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier"));

	UEnvQueryGenerator_BlueprintBase_GetQuerier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration
// (Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// TArray<struct FVector>         ContextLocations               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UEnvQueryGenerator_BlueprintBase::DoItemGeneration(TArray<struct FVector> ContextLocations)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration"));

	UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Params params;
	params.ContextLocations = ContextLocations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FVector                 GeneratedVector                (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08C780              		 offset:36cc780                       

void UEnvQueryGenerator_BlueprintBase::AddGeneratedVector(const struct FVector& GeneratedVector)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector"));

	UEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Params params;
	params.GeneratedVector = GeneratedVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class AActor*                  GeneratedActor                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08C700              		 offset:36cc700                       

void UEnvQueryGenerator_BlueprintBase::AddGeneratedActor(class AActor* GeneratedActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor"));

	UEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Params params;
	params.GeneratedActor = GeneratedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.NavLocalGridManager.SetLocalNavigationGridDensity
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          CellSize                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA0904D0              		 offset:36d04d0                       

bool UNavLocalGridManager::STATIC_SetLocalNavigationGridDensity(class UObject* WorldContext, float CellSize)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.NavLocalGridManager.SetLocalNavigationGridDensity"));

	UNavLocalGridManager_SetLocalNavigationGridDensity_Params params;
	params.WorldContext = WorldContext;
	params.CellSize = CellSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.NavLocalGridManager.RemoveLocalNavigationGrid
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            GridId                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRebuildGrids                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08F290              		 offset:36cf290                       

void UNavLocalGridManager::STATIC_RemoveLocalNavigationGrid(class UObject* WorldContext, int GridId, bool bRebuildGrids)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.NavLocalGridManager.RemoveLocalNavigationGrid"));

	UNavLocalGridManager_RemoveLocalNavigationGrid_Params params;
	params.WorldContext = WorldContext;
	params.GridId = GridId;
	params.bRebuildGrids = bRebuildGrids;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.NavLocalGridManager.FindLocalNavigationGridPath
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Start                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 End                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// TArray<struct FVector>         PathPoints                     (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08D2E0              		 offset:36cd2e0                       

bool UNavLocalGridManager::STATIC_FindLocalNavigationGridPath(class UObject* WorldContext, const struct FVector& Start, const struct FVector& End, TArray<struct FVector>* PathPoints)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.NavLocalGridManager.FindLocalNavigationGridPath"));

	UNavLocalGridManager_FindLocalNavigationGridPath_Params params;
	params.WorldContext = WorldContext;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PathPoints != nullptr)
		*PathPoints = params.PathPoints;

	return params.ReturnValue;
}


// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Locations                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Radius2D                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRebuildGrids                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08CDE0              		 offset:36ccde0                       

int UNavLocalGridManager::STATIC_AddLocalNavigationGridForPoints(class UObject* WorldContext, TArray<struct FVector> Locations, int Radius2D, float Height, bool bRebuildGrids)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints"));

	UNavLocalGridManager_AddLocalNavigationGridForPoints_Params params;
	params.WorldContext = WorldContext;
	params.Locations = Locations;
	params.Radius2D = Radius2D;
	params.Height = Height;
	params.bRebuildGrids = bRebuildGrids;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// int                            Radius2D                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRebuildGrids                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08CC30              		 offset:36ccc30                       

int UNavLocalGridManager::STATIC_AddLocalNavigationGridForPoint(class UObject* WorldContext, const struct FVector& Location, int Radius2D, float Height, bool bRebuildGrids)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint"));

	UNavLocalGridManager_AddLocalNavigationGridForPoint_Params params;
	params.WorldContext = WorldContext;
	params.Location = Location;
	params.Radius2D = Radius2D;
	params.Height = Height;
	params.bRebuildGrids = bRebuildGrids;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          CapsuleRadius                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          CapsuleHalfHeight              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Radius2D                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRebuildGrids                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08CA30              		 offset:36cca30                       

int UNavLocalGridManager::STATIC_AddLocalNavigationGridForCapsule(class UObject* WorldContext, const struct FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, int Radius2D, float Height, bool bRebuildGrids)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule"));

	UNavLocalGridManager_AddLocalNavigationGridForCapsule_Params params;
	params.WorldContext = WorldContext;
	params.Location = Location;
	params.CapsuleRadius = CapsuleRadius;
	params.CapsuleHalfHeight = CapsuleHalfHeight;
	params.Radius2D = Radius2D;
	params.Height = Height;
	params.bRebuildGrids = bRebuildGrids;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForBox
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Extent                         (Parm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, IsPlainOldData)
// int                            Radius2D                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRebuildGrids                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08C810              		 offset:36cc810                       

int UNavLocalGridManager::STATIC_AddLocalNavigationGridForBox(class UObject* WorldContext, const struct FVector& Location, const struct FVector& Extent, const struct FRotator& Rotation, int Radius2D, float Height, bool bRebuildGrids)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.NavLocalGridManager.AddLocalNavigationGridForBox"));

	UNavLocalGridManager_AddLocalNavigationGridForBox_Params params;
	params.WorldContext = WorldContext;
	params.Location = Location;
	params.Extent = Extent;
	params.Rotation = Rotation;
	params.Radius2D = Radius2D;
	params.Height = Height;
	params.bRebuildGrids = bRebuildGrids;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bSuspend                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DA091220              		 offset:36d1220                       

void UCrowdFollowingComponent::SuspendCrowdSteering(bool bSuspend)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering"));

	UCrowdFollowingComponent_SuspendCrowdSteering_Params params;
	params.bSuspend = bSuspend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.PawnAction.GetActionPriority
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EAIRequestPriority> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D8AD7D30              		 offset:2117d30                       

TEnumAsByte<EAIRequestPriority> UPawnAction::GetActionPriority()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.PawnAction.GetActionPriority"));

	UPawnAction_GetActionPriority_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.PawnAction.Finish
// (Native, Protected, BlueprintCallable)
// Parameters:
// TEnumAsByte<EPawnActionResult> WithResult                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08D480              		 offset:36cd480                       

void UPawnAction::Finish(TEnumAsByte<EPawnActionResult> WithResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.PawnAction.Finish"));

	UPawnAction_Finish_Params params;
	params.WithResult = WithResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.PawnAction.CreateActionInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ActionClass                    (Parm, ZeroConstructor, IsPlainOldData)
// class UPawnAction*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08D220              		 offset:36cd220                       

class UPawnAction* UPawnAction::STATIC_CreateActionInstance(class UObject* WorldContextObject, class UClass* ActionClass)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.PawnAction.CreateActionInstance"));

	UPawnAction_CreateActionInstance_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ActionClass = ActionClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.PawnAction_BlueprintBase.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UPawnAction_BlueprintBase::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.PawnAction_BlueprintBase.ActionTick"));

	UPawnAction_BlueprintBase_ActionTick_Params params;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.PawnAction_BlueprintBase.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UPawnAction_BlueprintBase::ActionStart(class APawn* ControlledPawn)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.PawnAction_BlueprintBase.ActionStart"));

	UPawnAction_BlueprintBase_ActionStart_Params params;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.PawnAction_BlueprintBase.ActionResume
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UPawnAction_BlueprintBase::ActionResume(class APawn* ControlledPawn)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.PawnAction_BlueprintBase.ActionResume"));

	UPawnAction_BlueprintBase_ActionResume_Params params;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.PawnAction_BlueprintBase.ActionPause
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UPawnAction_BlueprintBase::ActionPause(class APawn* ControlledPawn)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.PawnAction_BlueprintBase.ActionPause"));

	UPawnAction_BlueprintBase_ActionPause_Params params;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.PawnAction_BlueprintBase.ActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPawnActionResult> WithResult                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UPawnAction_BlueprintBase::ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.PawnAction_BlueprintBase.ActionFinished"));

	UPawnAction_BlueprintBase_ActionFinished_Params params;
	params.ControlledPawn = ControlledPawn;
	params.WithResult = WithResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.PawnActionsComponent.K2_PushAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPawnAction*             NewAction                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAIRequestPriority> Priority                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08F190              		 offset:36cf190                       

bool UPawnActionsComponent::K2_PushAction(class UPawnAction* NewAction, TEnumAsByte<EAIRequestPriority> Priority, class UObject* Instigator)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.PawnActionsComponent.K2_PushAction"));

	UPawnActionsComponent_K2_PushAction_Params params;
	params.NewAction = NewAction;
	params.Priority = Priority;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.PawnActionsComponent.K2_PerformAction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// class UPawnAction*             Action                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAIRequestPriority> Priority                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08F090              		 offset:36cf090                       

bool UPawnActionsComponent::STATIC_K2_PerformAction(class APawn* Pawn, class UPawnAction* Action, TEnumAsByte<EAIRequestPriority> Priority)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.PawnActionsComponent.K2_PerformAction"));

	UPawnActionsComponent_K2_PerformAction_Params params;
	params.Pawn = Pawn;
	params.Action = Action;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.PawnActionsComponent.K2_ForceAbortAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPawnAction*             ActionToAbort                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPawnActionAbortState> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08F000              		 offset:36cf000                       

TEnumAsByte<EPawnActionAbortState> UPawnActionsComponent::K2_ForceAbortAction(class UPawnAction* ActionToAbort)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.PawnActionsComponent.K2_ForceAbortAction"));

	UPawnActionsComponent_K2_ForceAbortAction_Params params;
	params.ActionToAbort = ActionToAbort;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.PawnActionsComponent.K2_AbortAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPawnAction*             ActionToAbort                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPawnActionAbortState> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08EF70              		 offset:36cef70                       

TEnumAsByte<EPawnActionAbortState> UPawnActionsComponent::K2_AbortAction(class UPawnAction* ActionToAbort)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.PawnActionsComponent.K2_AbortAction"));

	UPawnActionsComponent_K2_AbortAction_Params params;
	params.ActionToAbort = ActionToAbort;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DA0906F0              		 offset:36d06f0                       

void UPawnSensingComponent::SetSensingUpdatesEnabled(bool bEnabled)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled"));

	UPawnSensingComponent_SetSensingUpdatesEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.PawnSensingComponent.SetSensingInterval
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewSensingInterval             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DA090670              		 offset:36d0670                       

void UPawnSensingComponent::SetSensingInterval(float NewSensingInterval)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.PawnSensingComponent.SetSensingInterval"));

	UPawnSensingComponent_SetSensingInterval_Params params;
	params.NewSensingInterval = NewSensingInterval;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewPeripheralVisionAngle       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D94BE260              		 offset:2afe260                       

void UPawnSensingComponent::SetPeripheralVisionAngle(float NewPeripheralVisionAngle)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle"));

	UPawnSensingComponent_SetPeripheralVisionAngle_Params params;
	params.NewPeripheralVisionAngle = NewPeripheralVisionAngle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UPawnSensingComponent::SeePawnDelegate__DelegateSignature(class APawn* Pawn)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature"));

	UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms, HasDefaults)
// Parameters:
// class APawn*                   Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UPawnSensingComponent::HearNoiseDelegate__DelegateSignature(class APawn* Instigator, const struct FVector& Location, float Volume)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature"));

	UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Params params;
	params.Instigator = Instigator;
	params.Location = Location;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08E3D0              		 offset:36ce3d0                       

float UPawnSensingComponent::GetPeripheralVisionCosine()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine"));

	UPawnSensingComponent_GetPeripheralVisionCosine_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA08E3B0              		 offset:36ce3b0                       

float UPawnSensingComponent::GetPeripheralVisionAngle()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle"));

	UPawnSensingComponent_GetPeripheralVisionAngle_Params params;

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
