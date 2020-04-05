#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_AIModule_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

<<<<<<< HEAD
// Class AIModule.AISenseEvent
// 0x0000 (0x0028 - 0x0028)
class UAISenseEvent : public UObject
{
public:
=======
// Class AIModule.PathFollowingComponent
// 0x02C0 (0x04B0 - 0x01F0)
class UPathFollowingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x130];                                     // 0x01F0(0x0130) MISSED OFFSET
	class UNavMovementComponent*                       MovementComp;                                             // 0x0320(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0328(0x0008) MISSED OFFSET
	class ANavigationData*                             MyNavData;                                                // 0x0330(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x178];                                     // 0x0338(0x0178) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.AISenseEvent"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.PathFollowingComponent"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD
};


// Class AIModule.AISenseEvent_Damage
// 0x0030 (0x0058 - 0x0028)
class UAISenseEvent_Damage : public UAISenseEvent
{
public:
	struct FAIDamageEvent                              Event;                                                    // 0x0028(0x0030) (Edit, BlueprintVisible)
=======

	void OnNavDataRegistered(class ANavigationData* NavData);
	void OnActorBump(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	struct FVector GetPathDestination();
	TEnumAsByte<EPathFollowingAction> GetPathActionType();
};


// Class AIModule.AIController
// 0x0090 (0x0518 - 0x0488)
class AAIController : public AController
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0488(0x0038) MISSED OFFSET
	unsigned char                                      bStopAILogicOnUnposses : 1;                               // 0x04C0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bLOSflag : 1;                                             // 0x04C0(0x0001)
	unsigned char                                      bSkipExtraLOSChecks : 1;                                  // 0x04C0(0x0001)
	unsigned char                                      bAllowStrafe : 1;                                         // 0x04C0(0x0001)
	unsigned char                                      bWantsPlayerState : 1;                                    // 0x04C0(0x0001)
	unsigned char                                      bSetControlRotationFromPawnOrientation : 1;               // 0x04C0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x7];                                       // 0x04C1(0x0007) MISSED OFFSET
	class UPathFollowingComponent*                     PathFollowingComponent;                                   // 0x04C8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UBrainComponent*                             BrainComponent;                                           // 0x04D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAIPerceptionComponent*                      PerceptionComponent;                                      // 0x04D8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UPawnActionsComponent*                       ActionsComp;                                              // 0x04E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlackboardComponent*                        Blackboard;                                               // 0x04E8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGameplayTasksComponent*                     CachedGameplayTasksComponent;                             // 0x04F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      DefaultNavigationFilterClass;                             // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    ReceiveMoveCompleted;                                     // 0x0500(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0510(0x0008) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.AISenseEvent_Damage"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.AIController"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD
};


// Class AIModule.AISenseEvent_Hearing
// 0x0030 (0x0058 - 0x0028)
class UAISenseEvent_Hearing : public UAISenseEvent
{
public:
	struct FAINoiseEvent                               Event;                                                    // 0x0028(0x0030) (Edit, BlueprintVisible)
=======

	bool UseBlackboard(class UBlackboardData* BlackboardAsset, class UBlackboardComponent** BlackboardComponent);
	void UnclaimTaskResource(class UClass* ResourceClass);
	void SetMoveBlockDetection(bool bEnable);
	bool RunBehaviorTree(class UBehaviorTree* BTAsset);
	void OnUsingBlackBoard(class UBlackboardComponent* BlackboardComp, class UBlackboardData* BlackboardAsset);
	void OnUnpossess(class APawn* UnpossessedPawn);
	void OnPossess(class APawn* PossessedPawn);
	void OnGameplayTaskResourcesClaimed(const struct FGameplayResourceSet& NewlyClaimed, const struct FGameplayResourceSet& FreshlyReleased);
	TEnumAsByte<EPathFollowingRequestResult> MoveToLocation(const struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath);
	TEnumAsByte<EPathFollowingRequestResult> MoveToActor(class AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath);
	void K2_SetFocus(class AActor* NewFocus);
	void K2_SetFocalPoint(const struct FVector& FP);
	void K2_ClearFocus();
	bool HasPartialPath();
	class UPathFollowingComponent* GetPathFollowingComponent();
	TEnumAsByte<EPathFollowingStatus> GetMoveStatus();
	struct FVector GetImmediateMoveDestination();
	class AActor* GetFocusActor();
	struct FVector GetFocalPointOnActor(class AActor* Actor);
	struct FVector GetFocalPoint();
	class UAIPerceptionComponent* GetAIPerceptionComponent();
	void ClaimTaskResource(class UClass* ResourceClass);
};


// Class AIModule.BTNode
// 0x0030 (0x0058 - 0x0028)
class UBTNode : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FString                                     NodeName;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor)
	class UBehaviorTree*                               TreeAsset;                                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBTCompositeNode*                            ParentNode;                                               // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.AISenseEvent_Hearing"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTNode"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.AISightTargetInterface
// 0x0000 (0x0028 - 0x0028)
class UAISightTargetInterface : public UInterface
{
public:
=======
// Class AIModule.BTTaskNode
// 0x0018 (0x0070 - 0x0058)
class UBTTaskNode : public UBTNode
{
public:
	TArray<class UBTService*>                          Services;                                                 // 0x0058(0x0010) (ZeroConstructor)
	unsigned char                                      bIgnoreRestartSelf : 1;                                   // 0x0068(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.AISightTargetInterface"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTTaskNode"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.AISystem
// 0x00C8 (0x0110 - 0x0048)
class UAISystem : public UAISystemBase
{
public:
	struct FStringClassReference                       PerceptionSystemClassName;                                // 0x0048(0x0010) (Edit, Config, GlobalConfig)
	struct FStringClassReference                       HotSpotManagerClassName;                                  // 0x0058(0x0010) (Edit, Config, GlobalConfig)
	float                                              AcceptanceRadius;                                         // 0x0068(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	float                                              PathfollowingRegularPathPointAcceptanceRadius;            // 0x006C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	float                                              PathfollowingNavLinkAcceptanceRadius;                     // 0x0070(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bFinishMoveOnGoalOverlap;                                 // 0x0074(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bAcceptPartialPaths;                                      // 0x0075(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bAllowStrafing;                                           // 0x0076(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bEnableBTAITasks;                                         // 0x0077(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bAllowControllersAsEQSQuerier;                            // 0x0078(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bEnableDebuggerPlugin;                                    // 0x0079(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     DefaultSightCollisionChannel;                             // 0x007A(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x007B(0x0005) MISSED OFFSET
	class UBehaviorTreeManager*                        BehaviorTreeManager;                                      // 0x0080(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UEnvQueryManager*                            EnvironmentQueryManager;                                  // 0x0088(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAIPerceptionSystem*                         PerceptionSystem;                                         // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UAIAsyncTaskBlueprintProxy*>          AllProxyObjects;                                          // 0x0098(0x0010) (ZeroConstructor, Transient)
	class UAIHotSpotManager*                           HotSpotManager;                                           // 0x00A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UNavLocalGridManager*                        NavLocalGrids;                                            // 0x00B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x58];                                      // 0x00B8(0x0058) MISSED OFFSET
=======
// Class AIModule.BTTask_BlackboardBase
// 0x0028 (0x0098 - 0x0070)
class UBTTask_BlackboardBase : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x0070(0x0028) (Edit)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.AISystem"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_BlackboardBase"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD

	void AILoggingVerbose();
	void AIIgnorePlayers();
};


// Class AIModule.AITask
// 0x0008 (0x0070 - 0x0068)
class UAITask : public UGameplayTask
{
public:
	class AAIController*                               OwnerController;                                          // 0x0068(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
=======
};


// Class AIModule.BTTask_MoveTo
// 0x0018 (0x00B0 - 0x0098)
class UBTTask_MoveTo : public UBTTask_BlackboardBase
{
public:
	float                                              AcceptableRadius;                                         // 0x0098(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	class UClass*                                      FilterClass;                                              // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ObservedBlackboardValueTolerance;                         // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bObserveBlackboardValue : 1;                              // 0x00AC(0x0001)
	unsigned char                                      bAllowStrafe : 1;                                         // 0x00AC(0x0001) (Edit)
	unsigned char                                      bAllowPartialPath : 1;                                    // 0x00AC(0x0001) (Edit)
	unsigned char                                      bTrackMovingGoal : 1;                                     // 0x00AC(0x0001) (Edit)
	unsigned char                                      bProjectGoalLocation : 1;                                 // 0x00AC(0x0001) (Edit)
	unsigned char                                      bStopOnOverlap : 1;                                       // 0x00AC(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.AITask"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_MoveTo"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.AITask_LockLogic
// 0x0000 (0x0070 - 0x0070)
class UAITask_LockLogic : public UAITask
=======
// Class AIModule.AIResourceInterface
// 0x0000 (0x0028 - 0x0028)
class UAIResourceInterface : public UInterface
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.AITask_LockLogic"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.AIResourceInterface"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.AITask_MoveTo
// 0x00A0 (0x0110 - 0x0070)
class UAITask_MoveTo : public UAITask
{
public:
	struct FScriptMulticastDelegate                    OnRequestFailed;                                          // 0x0070(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMoveFinished;                                           // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FAIMoveRequest                              MoveRequest;                                              // 0x0090(0x0040)
	unsigned char                                      UnknownData00[0x40];                                      // 0x00D0(0x0040) MISSED OFFSET
=======
// Class AIModule.AIAsyncTaskBlueprintProxy
// 0x0040 (0x0068 - 0x0028)
class UAIAsyncTaskBlueprintProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFail;                                                   // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.AITask_MoveTo"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.AIAsyncTaskBlueprintProxy"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}


<<<<<<< HEAD
	class UAITask_MoveTo* STATIC_AIMoveTo(class AAIController** Controller, struct FVector* GoalLocation, class AActor** GoalActor, float* AcceptanceRadius, TEnumAsByte<EAIOptionFlag>* StopOnOverlap, TEnumAsByte<EAIOptionFlag>* AcceptPartialPath, bool* bUsePathfinding, bool* bLockAILogic);
};


// Class AIModule.EnvQueryItemType
// 0x0008 (0x0030 - 0x0028)
class UEnvQueryItemType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
=======
	void OnMoveCompleted(const struct FAIRequestID& RequestID, TEnumAsByte<EPathFollowingResult> MovementResult);
};


// Class AIModule.AIBlueprintHelperLibrary
// 0x0000 (0x0028 - 0x0028)
class UAIBlueprintHelperLibrary : public UBlueprintFunctionLibrary
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryItemType"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.AIBlueprintHelperLibrary"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD
};


// Class AIModule.EnvQueryContext
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext : public UObject
=======

	void STATIC_UnlockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic);
	class APawn* STATIC_SpawnAIFromClass(class UObject* WorldContextObject, class UClass* PawnClass, class UBehaviorTree* BehaviorTree, const struct FVector& Location, const struct FRotator& Rotation, bool bNoCollisionFail);
	void STATIC_SendAIMessage(class APawn* Target, const struct FName& Message, class UObject* MessageSource, bool bSuccess);
	void STATIC_LockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic);
	bool STATIC_IsValidAIRotation(const struct FRotator& Rotation);
	bool STATIC_IsValidAILocation(const struct FVector& Location);
	bool STATIC_IsValidAIDirection(const struct FVector& DirectionVector);
	class UBlackboardComponent* STATIC_GetBlackboard(class AActor* Target);
	class AAIController* STATIC_GetAIController(class AActor* ControlledActor);
	class UAIAsyncTaskBlueprintProxy* STATIC_CreateMoveToProxyObject(class UObject* WorldContextObject, class APawn* Pawn, const struct FVector& Destination, class AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap);
};


// Class AIModule.AIPerceptionListenerInterface
// 0x0000 (0x0028 - 0x0028)
class UAIPerceptionListenerInterface : public UInterface
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryContext"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.AIPerceptionListenerInterface"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BehaviorTreeTypes
// 0x0000 (0x0028 - 0x0028)
class UBehaviorTreeTypes : public UObject
=======
// Class AIModule.GenericTeamAgentInterface
// 0x0000 (0x0028 - 0x0028)
class UGenericTeamAgentInterface : public UInterface
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BehaviorTreeTypes"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.GenericTeamAgentInterface"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.EnvQueryTypes
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryTypes : public UObject
=======
// Class AIModule.DetourCrowdAIController
// 0x0000 (0x0518 - 0x0518)
class ADetourCrowdAIController : public AAIController
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryTypes"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.DetourCrowdAIController"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.AITask_RunEQS
// 0x00E0 (0x0150 - 0x0070)
class UAITask_RunEQS : public UAITask
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0070(0x00E0) MISSED OFFSET
=======
// Class AIModule.GridPathAIController
// 0x0000 (0x0518 - 0x0518)
class AGridPathAIController : public AAIController
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.AITask_RunEQS"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.GridPathAIController"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD

	class UAITask_RunEQS* STATIC_RunEQS(class AAIController** Controller, class UEnvQuery** QueryTemplate);
};


// Class AIModule.BrainComponent
// 0x0060 (0x0250 - 0x01F0)
class UBrainComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01F0(0x0008) MISSED OFFSET
	class UBlackboardComponent*                        BlackboardComp;                                           // 0x01F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AAIController*                               AIOwner;                                                  // 0x0200(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0208(0x0048) MISSED OFFSET
=======
};


// Class AIModule.AIDataProvider
// 0x0000 (0x0028 - 0x0028)
class UAIDataProvider : public UObject
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BrainComponent"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.AIDataProvider"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD

	void StopLogic(struct FString* Reason);
	void RestartLogic();
	bool IsRunning();
	bool IsPaused();
};


// Class AIModule.BehaviorTreeComponent
// 0x0140 (0x0390 - 0x0250)
class UBehaviorTreeComponent : public UBrainComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0250(0x0020) MISSED OFFSET
	TArray<class UBTNode*>                             NodeInstances;                                            // 0x0270(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x110];                                     // 0x0280(0x0110) MISSED OFFSET
=======
};


// Class AIModule.AIDataProvider_QueryParams
// 0x0018 (0x0040 - 0x0028)
class UAIDataProvider_QueryParams : public UAIDataProvider
{
public:
	struct FName                                       ParamName;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IntValue;                                                 // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               boolValue;                                                // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BehaviorTreeComponent"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.AIDataProvider_QueryParams"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD

	void SetDynamicSubtree(struct FGameplayTag* InjectTag, class UBehaviorTree** BehaviorAsset);
	float GetTagCooldownEndTime(struct FGameplayTag* CooldownTag);
	void AddCooldownTagDuration(struct FGameplayTag* CooldownTag, float* CooldownDuration, bool* bAddToExistingDuration);
};


// Class AIModule.BTNode
// 0x0030 (0x0058 - 0x0028)
class UBTNode : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FString                                     NodeName;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor)
	class UBehaviorTree*                               TreeAsset;                                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBTCompositeNode*                            ParentNode;                                               // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
=======
};


// Class AIModule.AIDataProvider_Random
// 0x0010 (0x0050 - 0x0040)
class UAIDataProvider_Random : public UAIDataProvider_QueryParams
{
public:
	float                                              Min;                                                      // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bInteger : 1;                                             // 0x0048(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTNode"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.AIDataProvider_Random"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BTCompositeNode
// 0x0078 (0x00D0 - 0x0058)
class UBTCompositeNode : public UBTNode
{
public:
	TArray<struct FBTCompositeChild>                   Children;                                                 // 0x0058(0x0010) (ZeroConstructor)
	TArray<class UBTService*>                          Services;                                                 // 0x0068(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0078(0x0058) MISSED OFFSET
=======
// Class AIModule.AIHotSpotManager
// 0x0000 (0x0028 - 0x0028)
class UAIHotSpotManager : public UObject
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTCompositeNode"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.AIHotSpotManager"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BehaviorTree
// 0x0038 (0x0060 - 0x0028)
class UBehaviorTree : public UObject
{
public:
	class UBTCompositeNode*                            RootNode;                                                 // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBlackboardData*                             BlackboardAsset;                                          // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UBTDecorator*>                        RootDecorators;                                           // 0x0038(0x0010) (ZeroConstructor)
	TArray<struct FBTDecoratorLogic>                   RootDecoratorOps;                                         // 0x0048(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
=======
// Class AIModule.AISense
// 0x00F8 (0x0120 - 0x0028)
class UAISense : public UObject
{
public:
	float                                              DefaultExpirationAge;                                     // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	EAISenseNotifyType                                 NotifyType;                                               // 0x002C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	unsigned char                                      bWantsNewPawnNotification : 1;                            // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance)
	unsigned char                                      bAutoRegisterAllPawnsAsSources : 1;                       // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	class UAIPerceptionSystem*                         PerceptionSystemInstance;                                 // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xE0];                                      // 0x0040(0x00E0) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BehaviorTree"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.AISense"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BehaviorTreeManager
// 0x0028 (0x0050 - 0x0028)
class UBehaviorTreeManager : public UObject
{
public:
	int                                                MaxDebuggerSteps;                                         // 0x0028(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<struct FBehaviorTreeTemplateInfo>           LoadedTemplates;                                          // 0x0030(0x0010) (ZeroConstructor)
	TArray<class UBehaviorTreeComponent*>              ActiveComponents;                                         // 0x0040(0x0010) (ExportObject, ZeroConstructor)
=======
// Class AIModule.AIPerceptionSystem
// 0x0108 (0x0130 - 0x0028)
class UAIPerceptionSystem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET
	TArray<class UAISense*>                            Senses;                                                   // 0x0080(0x0010) (ZeroConstructor)
	float                                              PerceptionAgingRate;                                      // 0x0090(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x9C];                                      // 0x0094(0x009C) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BehaviorTreeManager"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.AIPerceptionSystem"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD
};


// Class AIModule.BlackboardKeyType
// 0x0008 (0x0030 - 0x0028)
class UBlackboardKeyType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
=======

	void STATIC_ReportPerceptionEvent(class UObject* WorldContext, class UAISenseEvent* PerceptionEvent);
	void ReportEvent(class UAISenseEvent* PerceptionEvent);
	bool STATIC_RegisterPerceptionStimuliSource(class UObject* WorldContext, class UClass* Sense, class AActor* Target);
	void OnPerceptionStimuliSourceEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
	class UClass* STATIC_GetSenseClassForStimulus(class UObject* WorldContext, const struct FAIStimulus& Stimulus);
};


// Class AIModule.AIPerceptionComponent
// 0x00E0 (0x02D0 - 0x01F0)
class UAIPerceptionComponent : public UActorComponent
{
public:
	TArray<class UAISenseConfig*>                      SensesConfig;                                             // 0x01F0(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      DominantSense;                                            // 0x0200(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0208(0x0010) MISSED OFFSET
	class AAIController*                               AIOwner;                                                  // 0x0218(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x80];                                      // 0x0220(0x0080) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPerceptionUpdated;                                      // 0x02A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTargetPerceptionUpdated;                                // 0x02B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x10];                                      // 0x02C0(0x0010) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BlackboardKeyType"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.AIPerceptionComponent"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD
};


// Class AIModule.BlackboardData
// 0x0020 (0x0050 - 0x0030)
class UBlackboardData : public UDataAsset
{
public:
	class UBlackboardData*                             Parent;                                                   // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FBlackboardEntry>                    Keys;                                                     // 0x0038(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bHasSynchronizedKeys : 1;                                 // 0x0048(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
=======

	void RequestStimuliListenerUpdate();
	void OnOwnerEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
	void GetPerceivedHostileActors(TArray<class AActor*>* OutActors);
	void GetPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors);
	void GetKnownPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors);
	void GetCurrentlyPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors);
	bool GetActorsPerception(class AActor* Actor, struct FActorPerceptionBlueprintInfo* Info);
};


// Class AIModule.AIPerceptionStimuliSourceComponent
// 0x0020 (0x0210 - 0x01F0)
class UAIPerceptionStimuliSourceComponent : public UActorComponent
{
public:
	unsigned char                                      bAutoRegisterAsSource : 1;                                // 0x01F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Config)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01F1(0x0007) MISSED OFFSET
	TArray<class UClass*>                              RegisterAsSourceForSenses;                                // 0x01F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0208(0x0008) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BlackboardData"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.AIPerceptionStimuliSourceComponent"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD
};


// Class AIModule.BlackboardComponent
// 0x0100 (0x02F0 - 0x01F0)
class UBlackboardComponent : public UActorComponent
{
public:
	class UBrainComponent*                             BrainComp;                                                // 0x01F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UBlackboardData*                             BlackboardAsset;                                          // 0x01F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0200(0x0020) MISSED OFFSET
	TArray<class UBlackboardKeyType*>                  KeyInstances;                                             // 0x0220(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0xC0];                                      // 0x0230(0x00C0) MISSED OFFSET
=======

	void UnregisterFromSense(class UClass* SenseClass);
	void UnregisterFromPerceptionSystem();
	void RegisterWithPerceptionSystem();
	void RegisterForSense(class UClass* SenseClass);
};


// Class AIModule.AIResource_Movement
// 0x0000 (0x0038 - 0x0038)
class UAIResource_Movement : public UGameplayTaskResource
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BlackboardComponent"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.AIResource_Movement"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD

	void SetValueAsVector(struct FName* KeyName, struct FVector* VectorValue);
	void SetValueAsString(struct FName* KeyName, struct FString* StringValue);
	void SetValueAsRotator(struct FName* KeyName, struct FRotator* VectorValue);
	void SetValueAsObject(struct FName* KeyName, class UObject** ObjectValue);
	void SetValueAsName(struct FName* KeyName, struct FName* NameValue);
	void SetValueAsInt(struct FName* KeyName, int* IntValue);
	void SetValueAsFloat(struct FName* KeyName, float* FloatValue);
	void SetValueAsEnum(struct FName* KeyName, unsigned char* EnumValue);
	void SetValueAsClass(struct FName* KeyName, class UClass** ClassValue);
	void SetValueAsBool(struct FName* KeyName, bool* BoolValue);
	bool IsVectorValueSet(struct FName* KeyName);
	struct FVector GetValueAsVector(struct FName* KeyName);
	struct FString GetValueAsString(struct FName* KeyName);
	struct FRotator GetValueAsRotator(struct FName* KeyName);
	class UObject* GetValueAsObject(struct FName* KeyName);
	struct FName GetValueAsName(struct FName* KeyName);
	int GetValueAsInt(struct FName* KeyName);
	float GetValueAsFloat(struct FName* KeyName);
	unsigned char GetValueAsEnum(struct FName* KeyName);
	class UClass* GetValueAsClass(struct FName* KeyName);
	bool GetValueAsBool(struct FName* KeyName);
	bool GetRotationFromEntry(struct FName* KeyName, struct FRotator* ResultRotation);
	bool GetLocationFromEntry(struct FName* KeyName, struct FVector* ResultLocation);
	void ClearValue(struct FName* KeyName);
};


// Class AIModule.BlackboardKeyType_Bool
// 0x0000 (0x0030 - 0x0030)
class UBlackboardKeyType_Bool : public UBlackboardKeyType
=======
};


// Class AIModule.AIResource_Logic
// 0x0000 (0x0038 - 0x0038)
class UAIResource_Logic : public UGameplayTaskResource
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BlackboardKeyType_Bool"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.AIResource_Logic"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BlackboardKeyType_Class
// 0x0008 (0x0038 - 0x0030)
class UBlackboardKeyType_Class : public UBlackboardKeyType
{
public:
	class UClass*                                      BaseClass;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
=======
// Class AIModule.AISense_Blueprint
// 0x0030 (0x0150 - 0x0120)
class UAISense_Blueprint : public UAISense
{
public:
	class UClass*                                      ListenerDataType;                                         // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UAIPerceptionComponent*>              ListenerContainer;                                        // 0x0128(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	TArray<class UAISenseEvent*>                       UnprocessedEvents;                                        // 0x0138(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0148(0x0008) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BlackboardKeyType_Class"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.AISense_Blueprint"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD
};


// Class AIModule.BlackboardKeyType_Enum
// 0x0020 (0x0050 - 0x0030)
class UBlackboardKeyType_Enum : public UBlackboardKeyType
{
public:
	class UEnum*                                       EnumType;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     EnumName;                                                 // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      bIsEnumNameValid : 1;                                     // 0x0048(0x0001) (Edit, DisableEditOnInstance, EditConst)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
=======

	float OnUpdate(TArray<class UAISenseEvent*> EventsToProcess);
	void OnListenerUpdated(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void OnListenerUnregistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void OnListenerRegistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void K2_OnNewPawn(class APawn* NewPawn);
	void GetAllListenerComponents(TArray<class UAIPerceptionComponent*>* ListenerComponents);
	void GetAllListenerActors(TArray<class AActor*>* ListenerActors);
};


// Class AIModule.AISense_Damage
// 0x0010 (0x0130 - 0x0120)
class UAISense_Damage : public UAISense
{
public:
	TArray<struct FAIDamageEvent>                      RegisteredEvents;                                         // 0x0120(0x0010) (ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BlackboardKeyType_Enum"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.AISense_Damage"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD
};


// Class AIModule.BlackboardKeyType_Float
// 0x0000 (0x0030 - 0x0030)
class UBlackboardKeyType_Float : public UBlackboardKeyType
{
public:
=======

	void STATIC_ReportDamageEvent(class UObject* WorldContext, class AActor* DamagedActor, class AActor* Instigator, float DamageAmount, const struct FVector& EventLocation, const struct FVector& HitLocation);
};


// Class AIModule.AISense_Hearing
// 0x0070 (0x0190 - 0x0120)
class UAISense_Hearing : public UAISense
{
public:
	TArray<struct FAINoiseEvent>                       NoiseEvents;                                              // 0x0120(0x0010) (ZeroConstructor)
	float                                              SpeedOfSoundSq;                                           // 0x0130(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5C];                                      // 0x0134(0x005C) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BlackboardKeyType_Float"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.AISense_Hearing"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD
};


// Class AIModule.BlackboardKeyType_Int
// 0x0000 (0x0030 - 0x0030)
class UBlackboardKeyType_Int : public UBlackboardKeyType
{
public:
=======

	void STATIC_ReportNoiseEvent(class UObject* WorldContext, const struct FVector& NoiseLocation, float Loudness, class AActor* Instigator, float MaxRange, const struct FName& Tag);
};


// Class AIModule.AISense_Prediction
// 0x0010 (0x0130 - 0x0120)
class UAISense_Prediction : public UAISense
{
public:
	TArray<struct FAIPredictionEvent>                  RegisteredEvents;                                         // 0x0120(0x0010) (ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BlackboardKeyType_Int"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.AISense_Prediction"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD
};


// Class AIModule.BlackboardKeyType_Name
// 0x0000 (0x0030 - 0x0030)
class UBlackboardKeyType_Name : public UBlackboardKeyType
{
public:
=======

	void STATIC_RequestPawnPredictionEvent(class APawn* Requestor, class AActor* PredictedActor, float PredictionTime);
	void STATIC_RequestControllerPredictionEvent(class AAIController* Requestor, class AActor* PredictedActor, float PredictionTime);
};


// Class AIModule.AISense_Sight
// 0x00E0 (0x0200 - 0x0120)
class UAISense_Sight : public UAISense
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0120(0x00B0) MISSED OFFSET
	int                                                MaxTracesPerTick;                                         // 0x01D0(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                MinQueriesPerTimeSliceCheck;                              // 0x01D4(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	double                                             MaxTimeSlicePerTick;                                      // 0x01D8(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              HighImportanceQueryDistanceThreshold;                     // 0x01E0(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01E4(0x0004) MISSED OFFSET
	float                                              MaxQueryImportance;                                       // 0x01E8(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              SightLimitQueryImportance;                                // 0x01EC(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x01F0(0x0010) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BlackboardKeyType_Name"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.AISense_Sight"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BlackboardKeyType_NativeEnum
// 0x0018 (0x0048 - 0x0030)
class UBlackboardKeyType_NativeEnum : public UBlackboardKeyType
{
public:
	struct FString                                     EnumName;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UEnum*                                       EnumType;                                                 // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
=======
// Class AIModule.AISense_Team
// 0x0010 (0x0130 - 0x0120)
class UAISense_Team : public UAISense
{
public:
	TArray<struct FAITeamStimulusEvent>                RegisteredEvents;                                         // 0x0120(0x0010) (ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BlackboardKeyType_NativeEnum"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.AISense_Team"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BlackboardKeyType_Object
// 0x0008 (0x0038 - 0x0030)
class UBlackboardKeyType_Object : public UBlackboardKeyType
{
public:
	class UClass*                                      BaseClass;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
=======
// Class AIModule.AISense_Touch
// 0x0010 (0x0130 - 0x0120)
class UAISense_Touch : public UAISense
{
public:
	TArray<struct FAITouchEvent>                       RegisteredEvents;                                         // 0x0120(0x0010) (ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BlackboardKeyType_Object"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.AISense_Touch"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BlackboardKeyType_Rotator
// 0x0000 (0x0030 - 0x0030)
class UBlackboardKeyType_Rotator : public UBlackboardKeyType
=======
// Class AIModule.AISenseBlueprintListener
// 0x0000 (0x0100 - 0x0100)
class UAISenseBlueprintListener : public UUserDefinedStruct
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BlackboardKeyType_Rotator"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.AISenseBlueprintListener"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BlackboardKeyType_String
// 0x0010 (0x0040 - 0x0030)
class UBlackboardKeyType_String : public UBlackboardKeyType
{
public:
	struct FString                                     StringValue;                                              // 0x0030(0x0010) (ZeroConstructor)
=======
// Class AIModule.AISenseConfig
// 0x0020 (0x0048 - 0x0028)
class UAISenseConfig : public UObject
{
public:
	struct FColor                                      DebugColor;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              MaxAge;                                                   // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bStartsEnabled : 1;                                       // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0031(0x0017) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BlackboardKeyType_String"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.AISenseConfig"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BlackboardKeyType_Vector
// 0x0000 (0x0030 - 0x0030)
class UBlackboardKeyType_Vector : public UBlackboardKeyType
{
public:
=======
// Class AIModule.AISenseConfig_Blueprint
// 0x0008 (0x0050 - 0x0048)
class UAISenseConfig_Blueprint : public UAISenseConfig
{
public:
	class UClass*                                      Implementation;                                           // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BlackboardKeyType_Vector"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.AISenseConfig_Blueprint"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BTFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UBTFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
=======
// Class AIModule.AISenseConfig_Damage
// 0x0008 (0x0050 - 0x0048)
class UAISenseConfig_Damage : public UAISenseConfig
{
public:
	class UClass*                                      Implementation;                                           // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTFunctionLibrary"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.AISenseConfig_Damage"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD

	void STATIC_StopUsingExternalEvent(class UBTNode** NodeOwner);
	void STATIC_StartUsingExternalEvent(class UBTNode** NodeOwner, class AActor** OwningActor);
	void STATIC_SetBlackboardValueAsVector(class UBTNode** NodeOwner, struct FBlackboardKeySelector* Key, struct FVector* Value);
	void STATIC_SetBlackboardValueAsString(class UBTNode** NodeOwner, struct FBlackboardKeySelector* Key, struct FString* Value);
	void STATIC_SetBlackboardValueAsRotator(class UBTNode** NodeOwner, struct FBlackboardKeySelector* Key, struct FRotator* Value);
	void STATIC_SetBlackboardValueAsObject(class UBTNode** NodeOwner, struct FBlackboardKeySelector* Key, class UObject** Value);
	void STATIC_SetBlackboardValueAsName(class UBTNode** NodeOwner, struct FBlackboardKeySelector* Key, struct FName* Value);
	void STATIC_SetBlackboardValueAsInt(class UBTNode** NodeOwner, struct FBlackboardKeySelector* Key, int* Value);
	void STATIC_SetBlackboardValueAsFloat(class UBTNode** NodeOwner, struct FBlackboardKeySelector* Key, float* Value);
	void STATIC_SetBlackboardValueAsEnum(class UBTNode** NodeOwner, struct FBlackboardKeySelector* Key, unsigned char* Value);
	void STATIC_SetBlackboardValueAsClass(class UBTNode** NodeOwner, struct FBlackboardKeySelector* Key, class UClass** Value);
	void STATIC_SetBlackboardValueAsBool(class UBTNode** NodeOwner, struct FBlackboardKeySelector* Key, bool* Value);
	class UBlackboardComponent* STATIC_GetOwnersBlackboard(class UBTNode** NodeOwner);
	class UBehaviorTreeComponent* STATIC_GetOwnerComponent(class UBTNode** NodeOwner);
	struct FVector STATIC_GetBlackboardValueAsVector(class UBTNode** NodeOwner, struct FBlackboardKeySelector* Key);
	struct FString STATIC_GetBlackboardValueAsString(class UBTNode** NodeOwner, struct FBlackboardKeySelector* Key);
	struct FRotator STATIC_GetBlackboardValueAsRotator(class UBTNode** NodeOwner, struct FBlackboardKeySelector* Key);
	class UObject* STATIC_GetBlackboardValueAsObject(class UBTNode** NodeOwner, struct FBlackboardKeySelector* Key);
	struct FName STATIC_GetBlackboardValueAsName(class UBTNode** NodeOwner, struct FBlackboardKeySelector* Key);
	int STATIC_GetBlackboardValueAsInt(class UBTNode** NodeOwner, struct FBlackboardKeySelector* Key);
	float STATIC_GetBlackboardValueAsFloat(class UBTNode** NodeOwner, struct FBlackboardKeySelector* Key);
	unsigned char STATIC_GetBlackboardValueAsEnum(class UBTNode** NodeOwner, struct FBlackboardKeySelector* Key);
	class UClass* STATIC_GetBlackboardValueAsClass(class UBTNode** NodeOwner, struct FBlackboardKeySelector* Key);
	bool STATIC_GetBlackboardValueAsBool(class UBTNode** NodeOwner, struct FBlackboardKeySelector* Key);
	class AActor* STATIC_GetBlackboardValueAsActor(class UBTNode** NodeOwner, struct FBlackboardKeySelector* Key);
	void STATIC_ClearBlackboardValueAsVector(class UBTNode** NodeOwner, struct FBlackboardKeySelector* Key);
	void STATIC_ClearBlackboardValue(class UBTNode** NodeOwner, struct FBlackboardKeySelector* Key);
};


// Class AIModule.BTAuxiliaryNode
// 0x0008 (0x0060 - 0x0058)
class UBTAuxiliaryNode : public UBTNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
=======
};


// Class AIModule.AISenseConfig_Hearing
// 0x0018 (0x0060 - 0x0048)
class UAISenseConfig_Hearing : public UAISenseConfig
{
public:
	class UClass*                                      Implementation;                                           // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData)
	float                                              HearingRange;                                             // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LoSHearingRange;                                          // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bUseLoSHearing : 1;                                       // 0x0058(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	struct FAISenseAffiliationFilter                   DetectionByAffiliation;                                   // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTAuxiliaryNode"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.AISenseConfig_Hearing"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BTDecorator
// 0x0008 (0x0068 - 0x0060)
class UBTDecorator : public UBTAuxiliaryNode
{
public:
	unsigned char                                      UnknownData00 : 7;                                        // 0x0060(0x0001)
	unsigned char                                      bInverseCondition : 1;                                    // 0x0060(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	TEnumAsByte<EBTFlowAbortMode>                      FlowAbortMode;                                            // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
=======
// Class AIModule.AISenseConfig_Prediction
// 0x0000 (0x0048 - 0x0048)
class UAISenseConfig_Prediction : public UAISenseConfig
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.AISenseConfig_Prediction"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BTDecorator_BlackboardBase
// 0x0028 (0x0090 - 0x0068)
class UBTDecorator_BlackboardBase : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x0068(0x0028) (Edit)
=======
// Class AIModule.AISenseConfig_Sight
// 0x0020 (0x0068 - 0x0048)
class UAISenseConfig_Sight : public UAISenseConfig
{
public:
	class UClass*                                      Implementation;                                           // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData)
	float                                              SightRadius;                                              // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              LoseSightRadius;                                          // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              PeripheralVisionAngleDegrees;                             // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	struct FAISenseAffiliationFilter                   DetectionByAffiliation;                                   // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoSuccessRangeFromLastSeenLocation;                     // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_BlackboardBase"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.AISenseConfig_Sight"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BTDecorator_Blackboard
// 0x0030 (0x00C0 - 0x0090)
class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase
{
public:
	int                                                IntValue;                                                 // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     StringValue;                                              // 0x0098(0x0010) (Edit, ZeroConstructor)
	struct FString                                     CachedDescription;                                        // 0x00A8(0x0010) (ZeroConstructor)
	unsigned char                                      OperationType;                                            // 0x00B8(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBTBlackboardRestart>                  NotifyObserver;                                           // 0x00B9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00BA(0x0006) MISSED OFFSET
=======
// Class AIModule.AISenseConfig_Team
// 0x0000 (0x0048 - 0x0048)
class UAISenseConfig_Team : public UAISenseConfig
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_Blackboard"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.AISenseConfig_Team"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BTDecorator_ConditionalLoop
// 0x0000 (0x00C0 - 0x00C0)
class UBTDecorator_ConditionalLoop : public UBTDecorator_Blackboard
=======
// Class AIModule.AISenseConfig_Touch
// 0x0000 (0x0048 - 0x0048)
class UAISenseConfig_Touch : public UAISenseConfig
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_ConditionalLoop"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.AISenseConfig_Touch"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BTDecorator_IsAtLocation
// 0x0040 (0x00D0 - 0x0090)
class UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase
{
public:
	float                                              AcceptableRadius;                                         // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	struct FAIDataProviderFloatValue                   ParametrizedAcceptableRadius;                             // 0x0098(0x0030) (Edit)
	EFAIDistanceType                                   GeometricDistanceType;                                    // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00C9(0x0003) MISSED OFFSET
	unsigned char                                      bUseParametrizedRadius : 1;                               // 0x00CC(0x0001)
	unsigned char                                      bUseNavAgentGoalLocation : 1;                             // 0x00CC(0x0001) (Edit)
	unsigned char                                      bPathFindingBasedTest : 1;                                // 0x00CC(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
=======
// Class AIModule.AISenseEvent
// 0x0000 (0x0028 - 0x0028)
class UAISenseEvent : public UObject
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_IsAtLocation"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.AISenseEvent"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BTDecorator_IsBBEntryOfClass
// 0x0008 (0x0098 - 0x0090)
class UBTDecorator_IsBBEntryOfClass : public UBTDecorator_BlackboardBase
{
public:
	class UClass*                                      TestClass;                                                // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
=======
// Class AIModule.BTAuxiliaryNode
// 0x0008 (0x0060 - 0x0058)
class UBTAuxiliaryNode : public UBTNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_IsBBEntryOfClass"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTAuxiliaryNode"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BTDecorator_BlueprintBase
// 0x0038 (0x00A0 - 0x0068)
class UBTDecorator_BlueprintBase : public UBTDecorator
{
public:
	class AAIController*                               AIOwner;                                                  // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      ActorOwner;                                               // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FName>                               ObservedKeyNames;                                         // 0x0078(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0088(0x0010) MISSED OFFSET
	unsigned char                                      bShowPropertyDetails : 1;                                 // 0x0098(0x0001) (Edit, DisableEditOnTemplate)
	unsigned char                                      bCheckConditionOnlyBlackBoardChanges : 1;                 // 0x0098(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bIsObservingBB : 1;                                       // 0x0098(0x0001)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
=======
// Class AIModule.BTDecorator
// 0x0008 (0x0068 - 0x0060)
class UBTDecorator : public UBTAuxiliaryNode
{
public:
	unsigned char                                      UnknownData00 : 7;                                        // 0x0060(0x0001)
	unsigned char                                      bInverseCondition : 1;                                    // 0x0060(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	TEnumAsByte<EBTFlowAbortMode>                      FlowAbortMode;                                            // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_BlueprintBase"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD

	void ReceiveTickAI(class AAIController** OwnerController, class APawn** ControlledPawn, float* DeltaSeconds);
	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ReceiveObserverDeactivatedAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ReceiveObserverDeactivated(class AActor** OwnerActor);
	void ReceiveObserverActivatedAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ReceiveObserverActivated(class AActor** OwnerActor);
	void ReceiveExecutionStartAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ReceiveExecutionStart(class AActor** OwnerActor);
	void ReceiveExecutionFinishAI(class AAIController** OwnerController, class APawn** ControlledPawn, TEnumAsByte<EBTNodeResult>* NodeResult);
	void ReceiveExecutionFinish(class AActor** OwnerActor, TEnumAsByte<EBTNodeResult>* NodeResult);
	bool PerformConditionCheckAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	bool PerformConditionCheck(class AActor** OwnerActor);
	bool IsDecoratorObserverActive();
	bool IsDecoratorExecutionActive();
};


// Class AIModule.BTDecorator_CheckGameplayTagsOnActor
// 0x0060 (0x00C8 - 0x0068)
class UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      ActorToCheck;                                             // 0x0068(0x0028) (Edit)
	EGameplayContainerMatchType                        TagsToMatch;                                              // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x0098(0x0020) (Edit)
	struct FString                                     CachedDescription;                                        // 0x00B8(0x0010) (ZeroConstructor)
=======
};


// Class AIModule.BTService
// 0x0010 (0x0070 - 0x0060)
class UBTService : public UBTAuxiliaryNode
{
public:
	float                                              Interval;                                                 // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomDeviation;                                          // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCallTickOnSearchStart : 1;                               // 0x0068(0x0001) (Edit)
	unsigned char                                      bRestartTimerOnEachActivation : 1;                        // 0x0068(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_CheckGameplayTagsOnActor"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTService"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BTDecorator_CompareBBEntries
// 0x0058 (0x00C0 - 0x0068)
class UBTDecorator_CompareBBEntries : public UBTDecorator
{
public:
	TEnumAsByte<EBlackBoardEntryComparison>            Operator;                                                 // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      BlackboardKeyA;                                           // 0x0070(0x0028) (Edit)
	struct FBlackboardKeySelector                      BlackboardKeyB;                                           // 0x0098(0x0028) (Edit)
=======
// Class AIModule.BTService_BlackboardBase
// 0x0028 (0x0098 - 0x0070)
class UBTService_BlackboardBase : public UBTService
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x0070(0x0028) (Edit)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_CompareBBEntries"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTService_BlackboardBase"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BTDecorator_ConeCheck
// 0x0088 (0x00F0 - 0x0068)
class UBTDecorator_ConeCheck : public UBTDecorator
{
public:
	float                                              ConeHalfAngle;                                            // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      ConeOrigin;                                               // 0x0070(0x0028) (Edit)
	struct FBlackboardKeySelector                      ConeDirection;                                            // 0x0098(0x0028) (Edit)
	struct FBlackboardKeySelector                      Observed;                                                 // 0x00C0(0x0028) (Edit)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
=======
// Class AIModule.BTService_DefaultFocus
// 0x0008 (0x00A0 - 0x0098)
class UBTService_DefaultFocus : public UBTService_BlackboardBase
{
public:
	unsigned char                                      FocusPriority;                                            // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_ConeCheck"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTService_DefaultFocus"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BTDecorator_Cooldown
// 0x0008 (0x0070 - 0x0068)
class UBTDecorator_Cooldown : public UBTDecorator
{
public:
	float                                              CooldownTime;                                             // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
=======
// Class AIModule.BTTask_Wait
// 0x0008 (0x0078 - 0x0070)
class UBTTask_Wait : public UBTTaskNode
{
public:
	float                                              WaitTime;                                                 // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomDeviation;                                          // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_Cooldown"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_Wait"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BTDecorator_DoesPathExist
// 0x0060 (0x00C8 - 0x0068)
class UBTDecorator_DoesPathExist : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      BlackboardKeyA;                                           // 0x0068(0x0028) (Edit)
	struct FBlackboardKeySelector                      BlackboardKeyB;                                           // 0x0090(0x0028) (Edit)
	unsigned char                                      bUseSelf : 1;                                             // 0x00B8(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	TEnumAsByte<EPathExistanceQueryType>               PathQueryType;                                            // 0x00BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	class UClass*                                      FilterClass;                                              // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
=======
// Class AIModule.BTTask_WaitBlackboardTime
// 0x0028 (0x00A0 - 0x0078)
class UBTTask_WaitBlackboardTime : public UBTTask_Wait
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x0078(0x0028) (Edit)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_DoesPathExist"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_WaitBlackboardTime"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BTDecorator_ForceSuccess
// 0x0000 (0x0068 - 0x0068)
class UBTDecorator_ForceSuccess : public UBTDecorator
{
public:
=======
// Class AIModule.AISenseEvent_Damage
// 0x0030 (0x0058 - 0x0028)
class UAISenseEvent_Damage : public UAISenseEvent
{
public:
	struct FAIDamageEvent                              Event;                                                    // 0x0028(0x0030) (Edit, BlueprintVisible)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_ForceSuccess"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.AISenseEvent_Damage"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BTDecorator_KeepInCone
// 0x0060 (0x00C8 - 0x0068)
class UBTDecorator_KeepInCone : public UBTDecorator
{
public:
	float                                              ConeHalfAngle;                                            // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      ConeOrigin;                                               // 0x0070(0x0028) (Edit)
	struct FBlackboardKeySelector                      Observed;                                                 // 0x0098(0x0028) (Edit)
	unsigned char                                      bUseSelfAsOrigin : 1;                                     // 0x00C0(0x0001)
	unsigned char                                      bUseSelfAsObserved : 1;                                   // 0x00C0(0x0001)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
=======
// Class AIModule.AISenseEvent_Hearing
// 0x0030 (0x0058 - 0x0028)
class UAISenseEvent_Hearing : public UAISenseEvent
{
public:
	struct FAINoiseEvent                               Event;                                                    // 0x0028(0x0030) (Edit, BlueprintVisible)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_KeepInCone"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.AISenseEvent_Hearing"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BTDecorator_Loop
// 0x0010 (0x0078 - 0x0068)
class UBTDecorator_Loop : public UBTDecorator
{
public:
	int                                                NumLoops;                                                 // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bInfiniteLoop;                                            // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	float                                              InfiniteLoopTimeoutTime;                                  // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
=======
// Class AIModule.AISightTargetInterface
// 0x0000 (0x0028 - 0x0028)
class UAISightTargetInterface : public UInterface
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_Loop"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.AISightTargetInterface"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BTDecorator_ReachedMoveGoal
// 0x0000 (0x0068 - 0x0068)
class UBTDecorator_ReachedMoveGoal : public UBTDecorator
{
public:
=======
// Class AIModule.AISystem
// 0x00C8 (0x0110 - 0x0048)
class UAISystem : public UAISystemBase
{
public:
	struct FStringClassReference                       PerceptionSystemClassName;                                // 0x0048(0x0010) (Edit, Config, GlobalConfig)
	struct FStringClassReference                       HotSpotManagerClassName;                                  // 0x0058(0x0010) (Edit, Config, GlobalConfig)
	float                                              AcceptanceRadius;                                         // 0x0068(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	float                                              PathfollowingRegularPathPointAcceptanceRadius;            // 0x006C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	float                                              PathfollowingNavLinkAcceptanceRadius;                     // 0x0070(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bFinishMoveOnGoalOverlap;                                 // 0x0074(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bAcceptPartialPaths;                                      // 0x0075(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bAllowStrafing;                                           // 0x0076(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bEnableBTAITasks;                                         // 0x0077(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bAllowControllersAsEQSQuerier;                            // 0x0078(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bEnableDebuggerPlugin;                                    // 0x0079(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     DefaultSightCollisionChannel;                             // 0x007A(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x007B(0x0005) MISSED OFFSET
	class UBehaviorTreeManager*                        BehaviorTreeManager;                                      // 0x0080(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UEnvQueryManager*                            EnvironmentQueryManager;                                  // 0x0088(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAIPerceptionSystem*                         PerceptionSystem;                                         // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UAIAsyncTaskBlueprintProxy*>          AllProxyObjects;                                          // 0x0098(0x0010) (ZeroConstructor, Transient)
	class UAIHotSpotManager*                           HotSpotManager;                                           // 0x00A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UNavLocalGridManager*                        NavLocalGrids;                                            // 0x00B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x58];                                      // 0x00B8(0x0058) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_ReachedMoveGoal"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.AISystem"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD
};


// Class AIModule.BTDecorator_SetTagCooldown
// 0x0010 (0x0078 - 0x0068)
class UBTDecorator_SetTagCooldown : public UBTDecorator
{
public:
	struct FGameplayTag                                CooldownTag;                                              // 0x0068(0x0008) (Edit)
	float                                              CooldownDuration;                                         // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAddToExistingDuration;                                   // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
=======

	void AILoggingVerbose();
	void AIIgnorePlayers();
};


// Class AIModule.AITask
// 0x0008 (0x0070 - 0x0068)
class UAITask : public UGameplayTask
{
public:
	class AAIController*                               OwnerController;                                          // 0x0068(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_SetTagCooldown"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.AITask"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BTDecorator_TagCooldown
// 0x0010 (0x0078 - 0x0068)
class UBTDecorator_TagCooldown : public UBTDecorator
{
public:
	struct FGameplayTag                                CooldownTag;                                              // 0x0068(0x0008) (Edit)
	float                                              CooldownDuration;                                         // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAddToExistingDuration;                                   // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bActivatesCooldown;                                       // 0x0075(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0076(0x0002) MISSED OFFSET
=======
// Class AIModule.AITask_LockLogic
// 0x0000 (0x0070 - 0x0070)
class UAITask_LockLogic : public UAITask
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_TagCooldown"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.AITask_LockLogic"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BTDecorator_TimeLimit
// 0x0008 (0x0070 - 0x0068)
class UBTDecorator_TimeLimit : public UBTDecorator
{
public:
	float                                              TimeLimit;                                                // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
=======
// Class AIModule.AITask_MoveTo
// 0x00A0 (0x0110 - 0x0070)
class UAITask_MoveTo : public UAITask
{
public:
	struct FScriptMulticastDelegate                    OnRequestFailed;                                          // 0x0070(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMoveFinished;                                           // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FAIMoveRequest                              MoveRequest;                                              // 0x0090(0x0040)
	unsigned char                                      UnknownData00[0x40];                                      // 0x00D0(0x0040) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_TimeLimit"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.AITask_MoveTo"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD
};


// Class AIModule.BTService
// 0x0010 (0x0070 - 0x0060)
class UBTService : public UBTAuxiliaryNode
{
public:
	float                                              Interval;                                                 // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomDeviation;                                          // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCallTickOnSearchStart : 1;                               // 0x0068(0x0001) (Edit)
	unsigned char                                      bRestartTimerOnEachActivation : 1;                        // 0x0068(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
=======

	class UAITask_MoveTo* STATIC_AIMoveTo(class AAIController* Controller, const struct FVector& GoalLocation, class AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<EAIOptionFlag> StopOnOverlap, TEnumAsByte<EAIOptionFlag> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic);
};


// Class AIModule.EnvQueryItemType
// 0x0008 (0x0030 - 0x0028)
class UEnvQueryItemType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTService"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryItemType"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BTService_BlackboardBase
// 0x0028 (0x0098 - 0x0070)
class UBTService_BlackboardBase : public UBTService
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x0070(0x0028) (Edit)
=======
// Class AIModule.EnvQueryContext
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext : public UObject
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTService_BlackboardBase"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryContext"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BTService_DefaultFocus
// 0x0008 (0x00A0 - 0x0098)
class UBTService_DefaultFocus : public UBTService_BlackboardBase
{
public:
	unsigned char                                      FocusPriority;                                            // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
=======
// Class AIModule.BehaviorTreeTypes
// 0x0000 (0x0028 - 0x0028)
class UBehaviorTreeTypes : public UObject
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTService_DefaultFocus"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BehaviorTreeTypes"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BTService_RunEQS
// 0x0088 (0x0120 - 0x0098)
class UBTService_RunEQS : public UBTService_BlackboardBase
{
public:
	struct FEQSParametrizedQueryExecutionRequest       EQSRequest;                                               // 0x0098(0x0048) (Edit)
	unsigned char                                      UnknownData00[0x40];                                      // 0x00E0(0x0040) MISSED OFFSET
=======
// Class AIModule.EnvQueryTypes
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryTypes : public UObject
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTService_RunEQS"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryTypes"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BTService_BlueprintBase
// 0x0028 (0x0098 - 0x0070)
class UBTService_BlueprintBase : public UBTService
{
public:
	class AAIController*                               AIOwner;                                                  // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      ActorOwner;                                               // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET
	unsigned char                                      bShowPropertyDetails : 1;                                 // 0x0090(0x0001) (Edit, DisableEditOnTemplate)
	unsigned char                                      bShowEventDetails : 1;                                    // 0x0090(0x0001) (Edit, DisableEditOnTemplate)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
=======
// Class AIModule.AITask_RunEQS
// 0x00E0 (0x0150 - 0x0070)
class UAITask_RunEQS : public UAITask
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0070(0x00E0) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTService_BlueprintBase"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.AITask_RunEQS"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}


<<<<<<< HEAD
	void ReceiveTickAI(class AAIController** OwnerController, class APawn** ControlledPawn, float* DeltaSeconds);
	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ReceiveSearchStartAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ReceiveSearchStart(class AActor** OwnerActor);
	void ReceiveDeactivationAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ReceiveDeactivation(class AActor** OwnerActor);
	void ReceiveActivationAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ReceiveActivation(class AActor** OwnerActor);
	bool IsServiceActive();
};


// Class AIModule.BTComposite_Selector
// 0x0000 (0x00D0 - 0x00D0)
class UBTComposite_Selector : public UBTCompositeNode
{
public:
=======
	class UAITask_RunEQS* STATIC_RunEQS(class AAIController* Controller, class UEnvQuery* QueryTemplate);
};


// Class AIModule.BrainComponent
// 0x0060 (0x0250 - 0x01F0)
class UBrainComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01F0(0x0008) MISSED OFFSET
	class UBlackboardComponent*                        BlackboardComp;                                           // 0x01F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AAIController*                               AIOwner;                                                  // 0x0200(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0208(0x0048) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTComposite_Selector"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BrainComponent"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD
};


// Class AIModule.BTComposite_Sequence
// 0x0000 (0x00D0 - 0x00D0)
class UBTComposite_Sequence : public UBTCompositeNode
{
public:
=======

	void StopLogic(const struct FString& Reason);
	void RestartLogic();
	bool IsRunning();
	bool IsPaused();
};


// Class AIModule.BehaviorTreeComponent
// 0x0140 (0x0390 - 0x0250)
class UBehaviorTreeComponent : public UBrainComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0250(0x0020) MISSED OFFSET
	TArray<class UBTNode*>                             NodeInstances;                                            // 0x0270(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x110];                                     // 0x0280(0x0110) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTComposite_Sequence"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BehaviorTreeComponent"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD
};


// Class AIModule.BTComposite_SimpleParallel
// 0x0000 (0x00D0 - 0x00D0)
class UBTComposite_SimpleParallel : public UBTCompositeNode
{
public:
=======

	void SetDynamicSubtree(const struct FGameplayTag& InjectTag, class UBehaviorTree* BehaviorAsset);
	float GetTagCooldownEndTime(const struct FGameplayTag& CooldownTag);
	void AddCooldownTagDuration(const struct FGameplayTag& CooldownTag, float CooldownDuration, bool bAddToExistingDuration);
};


// Class AIModule.BTCompositeNode
// 0x0078 (0x00D0 - 0x0058)
class UBTCompositeNode : public UBTNode
{
public:
	TArray<struct FBTCompositeChild>                   Children;                                                 // 0x0058(0x0010) (ZeroConstructor)
	TArray<class UBTService*>                          Services;                                                 // 0x0068(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0078(0x0058) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTComposite_SimpleParallel"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTCompositeNode"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BTTaskNode
// 0x0018 (0x0070 - 0x0058)
class UBTTaskNode : public UBTNode
{
public:
	TArray<class UBTService*>                          Services;                                                 // 0x0058(0x0010) (ZeroConstructor)
	unsigned char                                      bIgnoreRestartSelf : 1;                                   // 0x0068(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
=======
// Class AIModule.BehaviorTree
// 0x0038 (0x0060 - 0x0028)
class UBehaviorTree : public UObject
{
public:
	class UBTCompositeNode*                            RootNode;                                                 // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBlackboardData*                             BlackboardAsset;                                          // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UBTDecorator*>                        RootDecorators;                                           // 0x0038(0x0010) (ZeroConstructor)
	TArray<struct FBTDecoratorLogic>                   RootDecoratorOps;                                         // 0x0048(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTTaskNode"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BehaviorTree"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BTTask_BlackboardBase
// 0x0028 (0x0098 - 0x0070)
class UBTTask_BlackboardBase : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x0070(0x0028) (Edit)
=======
// Class AIModule.BehaviorTreeManager
// 0x0028 (0x0050 - 0x0028)
class UBehaviorTreeManager : public UObject
{
public:
	int                                                MaxDebuggerSteps;                                         // 0x0028(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<struct FBehaviorTreeTemplateInfo>           LoadedTemplates;                                          // 0x0030(0x0010) (ZeroConstructor)
	TArray<class UBehaviorTreeComponent*>              ActiveComponents;                                         // 0x0040(0x0010) (ExportObject, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_BlackboardBase"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BehaviorTreeManager"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BTTask_MoveTo
// 0x0018 (0x00B0 - 0x0098)
class UBTTask_MoveTo : public UBTTask_BlackboardBase
{
public:
	float                                              AcceptableRadius;                                         // 0x0098(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	class UClass*                                      FilterClass;                                              // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ObservedBlackboardValueTolerance;                         // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bObserveBlackboardValue : 1;                              // 0x00AC(0x0001)
	unsigned char                                      bAllowStrafe : 1;                                         // 0x00AC(0x0001) (Edit)
	unsigned char                                      bAllowPartialPath : 1;                                    // 0x00AC(0x0001) (Edit)
	unsigned char                                      bTrackMovingGoal : 1;                                     // 0x00AC(0x0001) (Edit)
	unsigned char                                      bProjectGoalLocation : 1;                                 // 0x00AC(0x0001) (Edit)
	unsigned char                                      bStopOnOverlap : 1;                                       // 0x00AC(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET
=======
// Class AIModule.BlackboardKeyType
// 0x0008 (0x0030 - 0x0028)
class UBlackboardKeyType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_MoveTo"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BlackboardKeyType"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BTTask_MoveDirectlyToward
// 0x0008 (0x00B8 - 0x00B0)
class UBTTask_MoveDirectlyToward : public UBTTask_MoveTo
{
public:
	unsigned char                                      bDisablePathUpdateOnGoalLocationChange : 1;               // 0x00B0(0x0001)
	unsigned char                                      bProjectVectorGoalToNavigation : 1;                       // 0x00B0(0x0001)
	unsigned char                                      bUpdatedDeprecatedProperties : 1;                         // 0x00B0(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
=======
// Class AIModule.BlackboardData
// 0x0020 (0x0050 - 0x0030)
class UBlackboardData : public UDataAsset
{
public:
	class UBlackboardData*                             Parent;                                                   // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FBlackboardEntry>                    Keys;                                                     // 0x0038(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bHasSynchronizedKeys : 1;                                 // 0x0048(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_MoveDirectlyToward"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BlackboardData"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BTTask_RotateToFaceBBEntry
// 0x0008 (0x00A0 - 0x0098)
class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase
{
public:
	float                                              Precision;                                                // 0x0098(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
=======
// Class AIModule.BlackboardComponent
// 0x0100 (0x02F0 - 0x01F0)
class UBlackboardComponent : public UActorComponent
{
public:
	class UBrainComponent*                             BrainComp;                                                // 0x01F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UBlackboardData*                             BlackboardAsset;                                          // 0x01F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0200(0x0020) MISSED OFFSET
	TArray<class UBlackboardKeyType*>                  KeyInstances;                                             // 0x0220(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0xC0];                                      // 0x0230(0x00C0) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_RotateToFaceBBEntry"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BlackboardComponent"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD
};


// Class AIModule.BTTask_RunEQSQuery
// 0x00E8 (0x0180 - 0x0098)
class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase
{
public:
	class UEnvQuery*                                   QueryTemplate;                                            // 0x0098(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<struct FEnvNamedValue>                      QueryParams;                                              // 0x00A0(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FAIDynamicParam>                     QueryConfig;                                              // 0x00B0(0x0010) (Edit, ZeroConstructor, EditConst)
	TEnumAsByte<EEnvQueryRunMode>                      RunMode;                                                  // 0x00C0(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      EQSQueryBlackboardKey;                                    // 0x00C8(0x0028) (Edit, EditConst)
	bool                                               bUseBBKey;                                                // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	struct FEQSParametrizedQueryExecutionRequest       EQSRequest;                                               // 0x00F8(0x0048) (Edit)
	unsigned char                                      UnknownData02[0x40];                                      // 0x0140(0x0040) MISSED OFFSET
=======

	void SetValueAsVector(const struct FName& KeyName, const struct FVector& VectorValue);
	void SetValueAsString(const struct FName& KeyName, const struct FString& StringValue);
	void SetValueAsRotator(const struct FName& KeyName, const struct FRotator& VectorValue);
	void SetValueAsObject(const struct FName& KeyName, class UObject* ObjectValue);
	void SetValueAsName(const struct FName& KeyName, const struct FName& NameValue);
	void SetValueAsInt(const struct FName& KeyName, int IntValue);
	void SetValueAsFloat(const struct FName& KeyName, float FloatValue);
	void SetValueAsEnum(const struct FName& KeyName, unsigned char EnumValue);
	void SetValueAsClass(const struct FName& KeyName, class UClass* ClassValue);
	void SetValueAsBool(const struct FName& KeyName, bool boolValue);
	bool IsVectorValueSet(const struct FName& KeyName);
	struct FVector GetValueAsVector(const struct FName& KeyName);
	struct FString GetValueAsString(const struct FName& KeyName);
	struct FRotator GetValueAsRotator(const struct FName& KeyName);
	class UObject* GetValueAsObject(const struct FName& KeyName);
	struct FName GetValueAsName(const struct FName& KeyName);
	int GetValueAsInt(const struct FName& KeyName);
	float GetValueAsFloat(const struct FName& KeyName);
	unsigned char GetValueAsEnum(const struct FName& KeyName);
	class UClass* GetValueAsClass(const struct FName& KeyName);
	bool GetValueAsBool(const struct FName& KeyName);
	bool GetRotationFromEntry(const struct FName& KeyName, struct FRotator* ResultRotation);
	bool GetLocationFromEntry(const struct FName& KeyName, struct FVector* ResultLocation);
	void ClearValue(const struct FName& KeyName);
};


// Class AIModule.BlackboardKeyType_Bool
// 0x0000 (0x0030 - 0x0030)
class UBlackboardKeyType_Bool : public UBlackboardKeyType
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_RunEQSQuery"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BlackboardKeyType_Bool"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BTTask_BlueprintBase
// 0x0030 (0x00A0 - 0x0070)
class UBTTask_BlueprintBase : public UBTTaskNode
{
public:
	class AAIController*                               AIOwner;                                                  // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      ActorOwner;                                               // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0080(0x0018) MISSED OFFSET
	unsigned char                                      bShowPropertyDetails : 1;                                 // 0x0098(0x0001) (Edit, DisableEditOnTemplate)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
=======
// Class AIModule.BlackboardKeyType_Class
// 0x0008 (0x0038 - 0x0030)
class UBlackboardKeyType_Class : public UBlackboardKeyType
{
public:
	class UClass*                                      BaseClass;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_BlueprintBase"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BlackboardKeyType_Class"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD

	void SetFinishOnMessageWithId(struct FName* MessageName, int* RequestID);
	void SetFinishOnMessage(struct FName* MessageName);
	void ReceiveTickAI(class AAIController** OwnerController, class APawn** ControlledPawn, float* DeltaSeconds);
	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ReceiveExecute(class AActor** OwnerActor);
	void ReceiveAbortAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ReceiveAbort(class AActor** OwnerActor);
	bool IsTaskExecuting();
	bool IsTaskAborting();
	void FinishExecute(bool* bSuccess);
	void FinishAbort();
};


// Class AIModule.BTTask_GameplayTaskBase
// 0x0008 (0x0078 - 0x0070)
class UBTTask_GameplayTaskBase : public UBTTaskNode
{
public:
	unsigned char                                      bWaitForGameplayTask : 1;                                 // 0x0070(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
=======
};


// Class AIModule.BlackboardKeyType_Enum
// 0x0020 (0x0050 - 0x0030)
class UBlackboardKeyType_Enum : public UBlackboardKeyType
{
public:
	class UEnum*                                       EnumType;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     EnumName;                                                 // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      bIsEnumNameValid : 1;                                     // 0x0048(0x0001) (Edit, DisableEditOnInstance, EditConst)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_GameplayTaskBase"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BlackboardKeyType_Enum"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BTTask_MakeNoise
// 0x0008 (0x0078 - 0x0070)
class UBTTask_MakeNoise : public UBTTaskNode
{
public:
	float                                              Loudnes;                                                  // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
=======
// Class AIModule.BlackboardKeyType_Float
// 0x0000 (0x0030 - 0x0030)
class UBlackboardKeyType_Float : public UBlackboardKeyType
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_MakeNoise"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BlackboardKeyType_Float"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BTTask_PawnActionBase
// 0x0000 (0x0070 - 0x0070)
class UBTTask_PawnActionBase : public UBTTaskNode
=======
// Class AIModule.BlackboardKeyType_Int
// 0x0000 (0x0030 - 0x0030)
class UBlackboardKeyType_Int : public UBlackboardKeyType
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_PawnActionBase"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BlackboardKeyType_Int"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BTTask_PushPawnAction
// 0x0008 (0x0078 - 0x0070)
class UBTTask_PushPawnAction : public UBTTask_PawnActionBase
{
public:
	class UPawnAction*                                 Action;                                                   // 0x0070(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
=======
// Class AIModule.BlackboardKeyType_Name
// 0x0000 (0x0030 - 0x0030)
class UBlackboardKeyType_Name : public UBlackboardKeyType
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_PushPawnAction"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BlackboardKeyType_Name"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BTTask_PlayAnimation
// 0x0080 (0x00F0 - 0x0070)
class UBTTask_PlayAnimation : public UBTTaskNode
{
public:
	class UAnimationAsset*                             AnimationToPlay;                                          // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLooping : 1;                                             // 0x0078(0x0001) (Edit)
	unsigned char                                      bNonBlocking : 1;                                         // 0x0078(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	class UBehaviorTreeComponent*                      MyOwnerComp;                                              // 0x0080(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      CachedSkelMesh;                                           // 0x0088(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x60];                                      // 0x0090(0x0060) MISSED OFFSET
=======
// Class AIModule.BlackboardKeyType_NativeEnum
// 0x0018 (0x0048 - 0x0030)
class UBlackboardKeyType_NativeEnum : public UBlackboardKeyType
{
public:
	struct FString                                     EnumName;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UEnum*                                       EnumType;                                                 // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_PlayAnimation"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BlackboardKeyType_NativeEnum"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BTTask_PlaySound
// 0x0008 (0x0078 - 0x0070)
class UBTTask_PlaySound : public UBTTaskNode
{
public:
	class USoundCue*                                   SoundToPlay;                                              // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
=======
// Class AIModule.BlackboardKeyType_Object
// 0x0008 (0x0038 - 0x0030)
class UBlackboardKeyType_Object : public UBlackboardKeyType
{
public:
	class UClass*                                      BaseClass;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_PlaySound"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BlackboardKeyType_Object"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BTTask_RunBehavior
// 0x0008 (0x0078 - 0x0070)
class UBTTask_RunBehavior : public UBTTaskNode
{
public:
	class UBehaviorTree*                               BehaviorAsset;                                            // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
=======
// Class AIModule.BlackboardKeyType_Rotator
// 0x0000 (0x0030 - 0x0030)
class UBlackboardKeyType_Rotator : public UBlackboardKeyType
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_RunBehavior"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BlackboardKeyType_Rotator"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BTTask_RunBehaviorDynamic
// 0x0018 (0x0088 - 0x0070)
class UBTTask_RunBehaviorDynamic : public UBTTaskNode
{
public:
	struct FGameplayTag                                InjectionTag;                                             // 0x0070(0x0008) (Edit)
	class UBehaviorTree*                               DefaultBehaviorAsset;                                     // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBehaviorTree*                               BehaviorAsset;                                            // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
=======
// Class AIModule.BlackboardKeyType_String
// 0x0010 (0x0040 - 0x0030)
class UBlackboardKeyType_String : public UBlackboardKeyType
{
public:
	struct FString                                     StringValue;                                              // 0x0030(0x0010) (ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_RunBehaviorDynamic"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BlackboardKeyType_String"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BTTask_SetTagCooldown
// 0x0010 (0x0080 - 0x0070)
class UBTTask_SetTagCooldown : public UBTTaskNode
{
public:
	struct FGameplayTag                                CooldownTag;                                              // 0x0070(0x0008) (Edit)
	bool                                               bAddToExistingDuration;                                   // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	float                                              CooldownDuration;                                         // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
=======
// Class AIModule.BlackboardKeyType_Vector
// 0x0000 (0x0030 - 0x0030)
class UBlackboardKeyType_Vector : public UBlackboardKeyType
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_SetTagCooldown"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BlackboardKeyType_Vector"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.BTTask_Wait
// 0x0008 (0x0078 - 0x0070)
class UBTTask_Wait : public UBTTaskNode
{
public:
	float                                              WaitTime;                                                 // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomDeviation;                                          // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
=======
// Class AIModule.BTFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UBTFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_Wait"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTFunctionLibrary"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD
};


// Class AIModule.BTTask_WaitBlackboardTime
// 0x0028 (0x00A0 - 0x0078)
class UBTTask_WaitBlackboardTime : public UBTTask_Wait
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x0078(0x0028) (Edit)
=======

	void STATIC_StopUsingExternalEvent(class UBTNode* NodeOwner);
	void STATIC_StartUsingExternalEvent(class UBTNode* NodeOwner, class AActor* OwningActor);
	void STATIC_SetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FVector& Value);
	void STATIC_SetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FString& Value);
	void STATIC_SetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FRotator& Value);
	void STATIC_SetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UObject* Value);
	void STATIC_SetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FName& Value);
	void STATIC_SetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, int Value);
	void STATIC_SetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, float Value);
	void STATIC_SetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, unsigned char Value);
	void STATIC_SetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UClass* Value);
	void STATIC_SetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, bool Value);
	class UBlackboardComponent* STATIC_GetOwnersBlackboard(class UBTNode* NodeOwner);
	class UBehaviorTreeComponent* STATIC_GetOwnerComponent(class UBTNode* NodeOwner);
	struct FVector STATIC_GetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	struct FString STATIC_GetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	struct FRotator STATIC_GetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	class UObject* STATIC_GetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	struct FName STATIC_GetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	int STATIC_GetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	float STATIC_GetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	unsigned char STATIC_GetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	class UClass* STATIC_GetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	bool STATIC_GetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	class AActor* STATIC_GetBlackboardValueAsActor(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	void STATIC_ClearBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	void STATIC_ClearBlackboardValue(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
};


// Class AIModule.BTDecorator_BlackboardBase
// 0x0028 (0x0090 - 0x0068)
class UBTDecorator_BlackboardBase : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x0068(0x0028) (Edit)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_WaitBlackboardTime"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_BlackboardBase"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.CrowdAgentInterface
// 0x0000 (0x0028 - 0x0028)
class UCrowdAgentInterface : public UInterface
{
public:
=======
// Class AIModule.BTDecorator_Blackboard
// 0x0030 (0x00C0 - 0x0090)
class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase
{
public:
	int                                                IntValue;                                                 // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     StringValue;                                              // 0x0098(0x0010) (Edit, ZeroConstructor)
	struct FString                                     CachedDescription;                                        // 0x00A8(0x0010) (ZeroConstructor)
	unsigned char                                      OperationType;                                            // 0x00B8(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBTBlackboardRestart>                  NotifyObserver;                                           // 0x00B9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00BA(0x0006) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.CrowdAgentInterface"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_Blackboard"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.CrowdManager
// 0x00C0 (0x00E8 - 0x0028)
class UCrowdManager : public UObject
{
public:
	class ANavigationData*                             MyNavData;                                                // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FCrowdAvoidanceConfig>               AvoidanceConfig;                                          // 0x0030(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FCrowdAvoidanceSamplingPattern>      SamplingPatterns;                                         // 0x0040(0x0010) (Edit, ZeroConstructor, Config)
	int                                                MaxAgents;                                                // 0x0050(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxAgentRadius;                                           // 0x0054(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxAvoidedAgents;                                         // 0x0058(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxAvoidedWalls;                                          // 0x005C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              NavmeshCheckInterval;                                     // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PathOptimizationInterval;                                 // 0x0064(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              SeparationDirClamp;                                       // 0x0068(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00 : 4;                                        // 0x006C(0x0001)
	unsigned char                                      bResolveCollisions : 1;                                   // 0x006C(0x0001) (Edit, Config)
	unsigned char                                      UnknownData01[0x7B];                                      // 0x006D(0x007B) MISSED OFFSET
=======
// Class AIModule.BTDecorator_ConditionalLoop
// 0x0000 (0x00C0 - 0x00C0)
class UBTDecorator_ConditionalLoop : public UBTDecorator_Blackboard
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.CrowdManager"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_ConditionalLoop"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.EnvQuery
// 0x0018 (0x0048 - 0x0030)
class UEnvQuery : public UDataAsset
{
public:
	struct FName                                       QueryName;                                                // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UEnvQueryOption*>                     Options;                                                  // 0x0038(0x0010) (ZeroConstructor)
=======
// Class AIModule.BTDecorator_IsAtLocation
// 0x0040 (0x00D0 - 0x0090)
class UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase
{
public:
	float                                              AcceptableRadius;                                         // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	struct FAIDataProviderFloatValue                   ParametrizedAcceptableRadius;                             // 0x0098(0x0030) (Edit)
	EFAIDistanceType                                   GeometricDistanceType;                                    // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00C9(0x0003) MISSED OFFSET
	unsigned char                                      bUseParametrizedRadius : 1;                               // 0x00CC(0x0001)
	unsigned char                                      bUseNavAgentGoalLocation : 1;                             // 0x00CC(0x0001) (Edit)
	unsigned char                                      bPathFindingBasedTest : 1;                                // 0x00CC(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQuery"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_IsAtLocation"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.EnvQueryContext_BlueprintBase
// 0x0008 (0x0030 - 0x0028)
class UEnvQueryContext_BlueprintBase : public UEnvQueryContext
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
=======
// Class AIModule.BTDecorator_IsBBEntryOfClass
// 0x0008 (0x0098 - 0x0090)
class UBTDecorator_IsBBEntryOfClass : public UBTDecorator_BlackboardBase
{
public:
	class UClass*                                      TestClass;                                                // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryContext_BlueprintBase"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_IsBBEntryOfClass"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD

	void ProvideSingleLocation(class UObject** QuerierObject, class AActor** QuerierActor, struct FVector* ResultingLocation);
	void ProvideSingleActor(class UObject** QuerierObject, class AActor** QuerierActor, class AActor** ResultingActor);
	void ProvideLocationsSet(class UObject** QuerierObject, class AActor** QuerierActor, TArray<struct FVector>* ResultingLocationSet);
	void ProvideActorsSet(class UObject** QuerierObject, class AActor** QuerierActor, TArray<class AActor*>* ResultingActorsSet);
};


// Class AIModule.EnvQueryContext_Item
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_Item : public UEnvQueryContext
{
public:
=======
};


// Class AIModule.BTDecorator_BlueprintBase
// 0x0038 (0x00A0 - 0x0068)
class UBTDecorator_BlueprintBase : public UBTDecorator
{
public:
	class AAIController*                               AIOwner;                                                  // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      ActorOwner;                                               // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FName>                               ObservedKeyNames;                                         // 0x0078(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0088(0x0010) MISSED OFFSET
	unsigned char                                      bShowPropertyDetails : 1;                                 // 0x0098(0x0001) (Edit, DisableEditOnTemplate)
	unsigned char                                      bCheckConditionOnlyBlackBoardChanges : 1;                 // 0x0098(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bIsObservingBB : 1;                                       // 0x0098(0x0001)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryContext_Item"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_BlueprintBase"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD
};


// Class AIModule.EnvQueryContext_Querier
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_Querier : public UEnvQueryContext
{
public:
=======

	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveObserverDeactivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveObserverDeactivated(class AActor* OwnerActor);
	void ReceiveObserverActivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveObserverActivated(class AActor* OwnerActor);
	void ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecutionStart(class AActor* OwnerActor);
	void ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, TEnumAsByte<EBTNodeResult> NodeResult);
	void ReceiveExecutionFinish(class AActor* OwnerActor, TEnumAsByte<EBTNodeResult> NodeResult);
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	bool PerformConditionCheck(class AActor* OwnerActor);
	bool IsDecoratorObserverActive();
	bool IsDecoratorExecutionActive();
};


// Class AIModule.BTDecorator_CheckGameplayTagsOnActor
// 0x0060 (0x00C8 - 0x0068)
class UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      ActorToCheck;                                             // 0x0068(0x0028) (Edit)
	EGameplayContainerMatchType                        TagsToMatch;                                              // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x0098(0x0020) (Edit)
	struct FString                                     CachedDescription;                                        // 0x00B8(0x0010) (ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryContext_Querier"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_CheckGameplayTagsOnActor"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.EnvQueryDebugHelpers
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryDebugHelpers : public UObject
{
public:
=======
// Class AIModule.BTDecorator_CompareBBEntries
// 0x0058 (0x00C0 - 0x0068)
class UBTDecorator_CompareBBEntries : public UBTDecorator
{
public:
	TEnumAsByte<EBlackBoardEntryComparison>            Operator;                                                 // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      BlackboardKeyA;                                           // 0x0070(0x0028) (Edit)
	struct FBlackboardKeySelector                      BlackboardKeyB;                                           // 0x0098(0x0028) (Edit)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryDebugHelpers"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_CompareBBEntries"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.EQSQueryResultSourceInterface
// 0x0000 (0x0028 - 0x0028)
class UEQSQueryResultSourceInterface : public UInterface
{
public:
=======
// Class AIModule.BTDecorator_ConeCheck
// 0x0088 (0x00F0 - 0x0068)
class UBTDecorator_ConeCheck : public UBTDecorator
{
public:
	float                                              ConeHalfAngle;                                            // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      ConeOrigin;                                               // 0x0070(0x0028) (Edit)
	struct FBlackboardKeySelector                      ConeDirection;                                            // 0x0098(0x0028) (Edit)
	struct FBlackboardKeySelector                      Observed;                                                 // 0x00C0(0x0028) (Edit)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.EQSQueryResultSourceInterface"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_ConeCheck"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.EnvQueryInstanceBlueprintWrapper
// 0x0050 (0x0078 - 0x0028)
class UEnvQueryInstanceBlueprintWrapper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	int                                                QueryID;                                                  // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x24];                                      // 0x0034(0x0024) MISSED OFFSET
	class UClass*                                      ItemType;                                                 // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                OptionIndex;                                              // 0x0060(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnQueryFinishedEvent;                                     // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
=======
// Class AIModule.BTDecorator_Cooldown
// 0x0008 (0x0070 - 0x0068)
class UBTDecorator_Cooldown : public UBTDecorator
{
public:
	float                                              CooldownTime;                                             // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryInstanceBlueprintWrapper"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_Cooldown"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD

	void SetNamedParam(struct FName* ParamName, float* Value);
	TArray<struct FVector> GetResultsAsLocations();
	TArray<class AActor*> GetResultsAsActors();
	float GetItemScore(int* ItemIndex);
	void EQSQueryDoneSignature__DelegateSignature(class UEnvQueryInstanceBlueprintWrapper** QueryInstance, TEnumAsByte<EEnvQueryStatus>* QueryStatus);
};


// Class AIModule.EnvQueryItemType_VectorBase
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryItemType_VectorBase : public UEnvQueryItemType
{
public:
=======
};


// Class AIModule.BTDecorator_DoesPathExist
// 0x0060 (0x00C8 - 0x0068)
class UBTDecorator_DoesPathExist : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      BlackboardKeyA;                                           // 0x0068(0x0028) (Edit)
	struct FBlackboardKeySelector                      BlackboardKeyB;                                           // 0x0090(0x0028) (Edit)
	unsigned char                                      bUseSelf : 1;                                             // 0x00B8(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	TEnumAsByte<EPathExistanceQueryType>               PathQueryType;                                            // 0x00BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	class UClass*                                      FilterClass;                                              // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryItemType_VectorBase"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_DoesPathExist"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.EnvQueryItemType_ActorBase
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryItemType_ActorBase : public UEnvQueryItemType_VectorBase
=======
// Class AIModule.BTDecorator_ForceSuccess
// 0x0000 (0x0068 - 0x0068)
class UBTDecorator_ForceSuccess : public UBTDecorator
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryItemType_ActorBase"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_ForceSuccess"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.EnvQueryItemType_Actor
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryItemType_Actor : public UEnvQueryItemType_ActorBase
{
public:
=======
// Class AIModule.BTDecorator_KeepInCone
// 0x0060 (0x00C8 - 0x0068)
class UBTDecorator_KeepInCone : public UBTDecorator
{
public:
	float                                              ConeHalfAngle;                                            // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      ConeOrigin;                                               // 0x0070(0x0028) (Edit)
	struct FBlackboardKeySelector                      Observed;                                                 // 0x0098(0x0028) (Edit)
	unsigned char                                      bUseSelfAsOrigin : 1;                                     // 0x00C0(0x0001)
	unsigned char                                      bUseSelfAsObserved : 1;                                   // 0x00C0(0x0001)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryItemType_Actor"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_KeepInCone"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.EnvQueryItemType_Direction
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryItemType_Direction : public UEnvQueryItemType_VectorBase
{
public:
=======
// Class AIModule.BTDecorator_Loop
// 0x0010 (0x0078 - 0x0068)
class UBTDecorator_Loop : public UBTDecorator
{
public:
	int                                                NumLoops;                                                 // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bInfiniteLoop;                                            // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	float                                              InfiniteLoopTimeoutTime;                                  // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryItemType_Direction"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_Loop"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.EnvQueryItemType_Point
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryItemType_Point : public UEnvQueryItemType_VectorBase
=======
// Class AIModule.BTDecorator_ReachedMoveGoal
// 0x0000 (0x0068 - 0x0068)
class UBTDecorator_ReachedMoveGoal : public UBTDecorator
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryItemType_Point"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_ReachedMoveGoal"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.EnvQueryManager
// 0x0110 (0x0138 - 0x0028)
class UEnvQueryManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0028(0x0078) MISSED OFFSET
	TArray<struct FEnvQueryInstanceCache>              InstanceCache;                                            // 0x00A0(0x0010) (ZeroConstructor, Transient)
	TArray<class UEnvQueryContext*>                    LocalContexts;                                            // 0x00B0(0x0010) (ZeroConstructor, Transient)
	TArray<class UEnvQueryInstanceBlueprintWrapper*>   GCShieldedWrappers;                                       // 0x00C0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x54];                                      // 0x00D0(0x0054) MISSED OFFSET
	float                                              MaxAllowedTestingTime;                                    // 0x0124(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bTestQueriesUsingBreadth;                                 // 0x0128(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0129(0x0003) MISSED OFFSET
	int                                                QueryCountWarningThreshold;                               // 0x012C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	double                                             QueryCountWarningInterval;                                // 0x0130(0x0008) (ZeroConstructor, Config, IsPlainOldData)
=======
// Class AIModule.BTDecorator_SetTagCooldown
// 0x0010 (0x0078 - 0x0068)
class UBTDecorator_SetTagCooldown : public UBTDecorator
{
public:
	struct FGameplayTag                                CooldownTag;                                              // 0x0068(0x0008) (Edit)
	float                                              CooldownDuration;                                         // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAddToExistingDuration;                                   // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryManager"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_SetTagCooldown"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD

	class UEnvQueryInstanceBlueprintWrapper* STATIC_RunEQSQuery(class UObject** WorldContext, class UEnvQuery** QueryTemplate, class UObject** Querier, TEnumAsByte<EEnvQueryRunMode>* RunMode, class UClass** WrapperClass);
};


// Class AIModule.EnvQueryNode
// 0x0008 (0x0030 - 0x0028)
class UEnvQueryNode : public UObject
{
public:
	int                                                VerNum;                                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
=======
};


// Class AIModule.BTDecorator_TagCooldown
// 0x0010 (0x0078 - 0x0068)
class UBTDecorator_TagCooldown : public UBTDecorator
{
public:
	struct FGameplayTag                                CooldownTag;                                              // 0x0068(0x0008) (Edit)
	float                                              CooldownDuration;                                         // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAddToExistingDuration;                                   // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bActivatesCooldown;                                       // 0x0075(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0076(0x0002) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryNode"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_TagCooldown"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.EnvQueryGenerator
// 0x0020 (0x0050 - 0x0030)
class UEnvQueryGenerator : public UEnvQueryNode
{
public:
	struct FString                                     OptionName;                                               // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      ItemType;                                                 // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAutoSortTests : 1;                                       // 0x0048(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
=======
// Class AIModule.BTDecorator_TimeLimit
// 0x0008 (0x0070 - 0x0068)
class UBTDecorator_TimeLimit : public UBTDecorator
{
public:
	float                                              TimeLimit;                                                // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryGenerator"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_TimeLimit"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.EnvQueryGenerator_ActorsOfClass
// 0x0070 (0x00C0 - 0x0050)
class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator
{
public:
	class UClass*                                      SearchedActorClass;                                       // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAIDataProviderBoolValue                    GenerateOnlyActorsInRadius;                               // 0x0058(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   SearchRadius;                                             // 0x0088(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      SearchCenter;                                             // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
=======
// Class AIModule.BTService_RunEQS
// 0x0088 (0x0120 - 0x0098)
class UBTService_RunEQS : public UBTService_BlackboardBase
{
public:
	struct FEQSParametrizedQueryExecutionRequest       EQSRequest;                                               // 0x0098(0x0048) (Edit)
	unsigned char                                      UnknownData00[0x40];                                      // 0x00E0(0x0040) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryGenerator_ActorsOfClass"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTService_RunEQS"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.EnvQueryGenerator_BlueprintBase
// 0x0030 (0x0080 - 0x0050)
class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator
{
public:
	struct FText                                       GeneratorsActionDescription;                              // 0x0050(0x0018) (Edit)
	class UClass*                                      Context;                                                  // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      GeneratedItemType;                                        // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
=======
// Class AIModule.BTService_BlueprintBase
// 0x0028 (0x0098 - 0x0070)
class UBTService_BlueprintBase : public UBTService
{
public:
	class AAIController*                               AIOwner;                                                  // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      ActorOwner;                                               // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET
	unsigned char                                      bShowPropertyDetails : 1;                                 // 0x0090(0x0001) (Edit, DisableEditOnTemplate)
	unsigned char                                      bShowEventDetails : 1;                                    // 0x0090(0x0001) (Edit, DisableEditOnTemplate)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryGenerator_BlueprintBase"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTService_BlueprintBase"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}


<<<<<<< HEAD
	class UObject* GetQuerier();
	void DoItemGeneration(TArray<struct FVector>* ContextLocations);
	void AddGeneratedVector(struct FVector* GeneratedVector);
	void AddGeneratedActor(class AActor** GeneratedActor);
};


// Class AIModule.EnvQueryGenerator_Composite
// 0x0018 (0x0068 - 0x0050)
class UEnvQueryGenerator_Composite : public UEnvQueryGenerator
{
public:
	TArray<class UEnvQueryGenerator*>                  Generators;                                               // 0x0050(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
	bool                                               bHasMatchingItemType;                                     // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
=======
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveSearchStart(class AActor* OwnerActor);
	void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveDeactivation(class AActor* OwnerActor);
	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveActivation(class AActor* OwnerActor);
	bool IsServiceActive();
};


// Class AIModule.BTComposite_Selector
// 0x0000 (0x00D0 - 0x00D0)
class UBTComposite_Selector : public UBTCompositeNode
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryGenerator_Composite"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTComposite_Selector"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.EnvQueryGenerator_CurrentLocation
// 0x0008 (0x0058 - 0x0050)
class UEnvQueryGenerator_CurrentLocation : public UEnvQueryGenerator
{
public:
	class UClass*                                      QueryContext;                                             // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
=======
// Class AIModule.BTComposite_Sequence
// 0x0000 (0x00D0 - 0x00D0)
class UBTComposite_Sequence : public UBTCompositeNode
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryGenerator_CurrentLocation"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTComposite_Sequence"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.EnvQueryGenerator_ProjectedPoints
// 0x0030 (0x0080 - 0x0050)
class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator
{
public:
	struct FEnvTraceData                               ProjectionData;                                           // 0x0050(0x0030) (Edit, DisableEditOnInstance)
=======
// Class AIModule.BTComposite_SimpleParallel
// 0x0000 (0x00D0 - 0x00D0)
class UBTComposite_SimpleParallel : public UBTCompositeNode
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryGenerator_ProjectedPoints"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTComposite_SimpleParallel"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.EnvQueryGenerator_Cone
// 0x00D0 (0x0150 - 0x0080)
class UEnvQueryGenerator_Cone : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   AlignedPointsDistance;                                    // 0x0080(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ConeDegrees;                                              // 0x00B0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   AngleStep;                                                // 0x00E0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   Range;                                                    // 0x0110(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      CenterActor;                                              // 0x0140(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIncludeContextLocation : 1;                              // 0x0148(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0149(0x0007) MISSED OFFSET
=======
// Class AIModule.BTTask_MoveDirectlyToward
// 0x0008 (0x00B8 - 0x00B0)
class UBTTask_MoveDirectlyToward : public UBTTask_MoveTo
{
public:
	unsigned char                                      bDisablePathUpdateOnGoalLocationChange : 1;               // 0x00B0(0x0001)
	unsigned char                                      bProjectVectorGoalToNavigation : 1;                       // 0x00B0(0x0001)
	unsigned char                                      bUpdatedDeprecatedProperties : 1;                         // 0x00B0(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryGenerator_Cone"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_MoveDirectlyToward"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.EnvQueryGenerator_Donut
// 0x0128 (0x01A8 - 0x0080)
class UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   InnerRadius;                                              // 0x0080(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   OuterRadius;                                              // 0x00B0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderIntValue                     NumberOfRings;                                            // 0x00E0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderIntValue                     PointsPerRing;                                            // 0x0110(0x0030) (Edit, DisableEditOnInstance)
	struct FEnvDirection                               ArcDirection;                                             // 0x0140(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ArcAngle;                                                 // 0x0160(0x0030) (Edit, DisableEditOnInstance)
	bool                                               bUseSpiralPattern;                                        // 0x0190(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0191(0x0007) MISSED OFFSET
	class UClass*                                      Center;                                                   // 0x0198(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDefineArc : 1;                                           // 0x01A0(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01A1(0x0007) MISSED OFFSET
=======
// Class AIModule.BTTask_RotateToFaceBBEntry
// 0x0008 (0x00A0 - 0x0098)
class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase
{
public:
	float                                              Precision;                                                // 0x0098(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryGenerator_Donut"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_RotateToFaceBBEntry"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.EnvQueryGenerator_OnCircle
// 0x0168 (0x01E8 - 0x0080)
class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   CircleRadius;                                             // 0x0080(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   SpaceBetween;                                             // 0x00B0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderIntValue                     NumberOfPoints;                                           // 0x00E0(0x0030) (Edit, DisableEditOnInstance)
	EPointOnCircleSpacingMethod                        PointOnCircleSpacingMethod;                               // 0x0110(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
	struct FEnvDirection                               ArcDirection;                                             // 0x0118(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ArcAngle;                                                 // 0x0138(0x0030) (Edit, DisableEditOnInstance)
	float                                              AngleRadians;                                             // 0x0168(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x016C(0x0004) MISSED OFFSET
	class UClass*                                      CircleCenter;                                             // 0x0170(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreAnyContextActorsWhenGeneratingCircle;              // 0x0178(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0179(0x0007) MISSED OFFSET
	struct FAIDataProviderFloatValue                   CircleCenterZOffset;                                      // 0x0180(0x0030) (Edit)
	struct FEnvTraceData                               TraceData;                                                // 0x01B0(0x0030) (Edit)
	unsigned char                                      bDefineArc : 1;                                           // 0x01E0(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x7];                                       // 0x01E1(0x0007) MISSED OFFSET
=======
// Class AIModule.BTTask_RunEQSQuery
// 0x00E8 (0x0180 - 0x0098)
class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase
{
public:
	class UEnvQuery*                                   QueryTemplate;                                            // 0x0098(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<struct FEnvNamedValue>                      QueryParams;                                              // 0x00A0(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FAIDynamicParam>                     QueryConfig;                                              // 0x00B0(0x0010) (Edit, ZeroConstructor, EditConst)
	TEnumAsByte<EEnvQueryRunMode>                      RunMode;                                                  // 0x00C0(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      EQSQueryBlackboardKey;                                    // 0x00C8(0x0028) (Edit, EditConst)
	bool                                               bUseBBKey;                                                // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	struct FEQSParametrizedQueryExecutionRequest       EQSRequest;                                               // 0x00F8(0x0048) (Edit)
	unsigned char                                      UnknownData02[0x40];                                      // 0x0140(0x0040) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryGenerator_OnCircle"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_RunEQSQuery"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.EnvQueryGenerator_SimpleGrid
// 0x0068 (0x00E8 - 0x0080)
class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   GridSize;                                                 // 0x0080(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   SpaceBetween;                                             // 0x00B0(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      GenerateAround;                                           // 0x00E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
=======
// Class AIModule.BTTask_BlueprintBase
// 0x0030 (0x00A0 - 0x0070)
class UBTTask_BlueprintBase : public UBTTaskNode
{
public:
	class AAIController*                               AIOwner;                                                  // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      ActorOwner;                                               // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0080(0x0018) MISSED OFFSET
	unsigned char                                      bShowPropertyDetails : 1;                                 // 0x0098(0x0001) (Edit, DisableEditOnTemplate)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryGenerator_SimpleGrid"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_BlueprintBase"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD
};


// Class AIModule.EnvQueryGenerator_PathingGrid
// 0x0068 (0x0150 - 0x00E8)
class UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid
{
public:
	struct FAIDataProviderBoolValue                    PathToItem;                                               // 0x00E8(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      NavigationFilter;                                         // 0x0118(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAIDataProviderFloatValue                   ScanRangeMultiplier;                                      // 0x0120(0x0030) (Edit, DisableEditOnInstance)
=======

	void SetFinishOnMessageWithId(const struct FName& MessageName, int RequestID);
	void SetFinishOnMessage(const struct FName& MessageName);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecute(class AActor* OwnerActor);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveAbort(class AActor* OwnerActor);
	bool IsTaskExecuting();
	bool IsTaskAborting();
	void FinishExecute(bool bSuccess);
	void FinishAbort();
};


// Class AIModule.BTTask_GameplayTaskBase
// 0x0008 (0x0078 - 0x0070)
class UBTTask_GameplayTaskBase : public UBTTaskNode
{
public:
	unsigned char                                      bWaitForGameplayTask : 1;                                 // 0x0070(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryGenerator_PathingGrid"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_GameplayTaskBase"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.EnvQueryTest
// 0x0190 (0x01C0 - 0x0030)
class UEnvQueryTest : public UEnvQueryNode
{
public:
	int                                                TestOrder;                                                // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnvTestPurpose>                       TestPurpose;                                              // 0x0034(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	struct FString                                     TestComment;                                              // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<EEnvTestFilterOperator>                MultipleContextFilterOp;                                  // 0x0048(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvTestScoreOperator>                 MultipleContextScoreOp;                                   // 0x0049(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvTestFilterType>                    FilterType;                                               // 0x004A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x004B(0x0005) MISSED OFFSET
	struct FAIDataProviderBoolValue                    BoolValue;                                                // 0x0050(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   FloatValueMin;                                            // 0x0080(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   FloatValueMax;                                            // 0x00B0(0x0030) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x1];                                       // 0x00E0(0x0001) MISSED OFFSET
	TEnumAsByte<EEnvTestScoreEquation>                 ScoringEquation;                                          // 0x00E1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvQueryTestClamping>                 ClampMinType;                                             // 0x00E2(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvQueryTestClamping>                 ClampMaxType;                                             // 0x00E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EEQSNormalizationType                              NormalizationType;                                        // 0x00E4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00E5(0x0003) MISSED OFFSET
	struct FAIDataProviderFloatValue                   ScoreClampMin;                                            // 0x00E8(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ScoreClampMax;                                            // 0x0118(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ScoringFactor;                                            // 0x0148(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ReferenceValue;                                           // 0x0178(0x0030) (Edit, DisableEditOnInstance)
	bool                                               bDefineReferenceValue;                                    // 0x01A8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0xF];                                       // 0x01A9(0x000F) MISSED OFFSET
	unsigned char                                      bWorkOnFloatValues : 1;                                   // 0x01B8(0x0001)
	unsigned char                                      UnknownData05[0x7];                                       // 0x01B9(0x0007) MISSED OFFSET
=======
// Class AIModule.BTTask_MakeNoise
// 0x0008 (0x0078 - 0x0070)
class UBTTask_MakeNoise : public UBTTaskNode
{
public:
	float                                              Loudnes;                                                  // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryTest"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_MakeNoise"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.EnvQueryTest_Distance
// 0x0010 (0x01D0 - 0x01C0)
class UEnvQueryTest_Distance : public UEnvQueryTest
{
public:
	TEnumAsByte<EEnvTestDistance>                      TestMode;                                                 // 0x01C0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01C1(0x0007) MISSED OFFSET
	class UClass*                                      DistanceTo;                                               // 0x01C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
=======
// Class AIModule.BTTask_PawnActionBase
// 0x0000 (0x0070 - 0x0070)
class UBTTask_PawnActionBase : public UBTTaskNode
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryTest_Distance"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_PawnActionBase"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.EnvQueryTest_Dot
// 0x0048 (0x0208 - 0x01C0)
class UEnvQueryTest_Dot : public UEnvQueryTest
{
public:
	struct FEnvDirection                               LineA;                                                    // 0x01C0(0x0020) (Edit, DisableEditOnInstance)
	struct FEnvDirection                               LineB;                                                    // 0x01E0(0x0020) (Edit, DisableEditOnInstance)
	EEnvTestDot                                        TestMode;                                                 // 0x0200(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAbsoluteValue;                                           // 0x0201(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0202(0x0006) MISSED OFFSET
=======
// Class AIModule.BTTask_PushPawnAction
// 0x0008 (0x0078 - 0x0070)
class UBTTask_PushPawnAction : public UBTTask_PawnActionBase
{
public:
	class UPawnAction*                                 Action;                                                   // 0x0070(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryTest_Dot"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_PushPawnAction"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.EnvQueryTest_GameplayTags
// 0x0070 (0x0230 - 0x01C0)
class UEnvQueryTest_GameplayTags : public UEnvQueryTest
{
public:
	struct FGameplayTagQuery                           TagQueryToMatch;                                          // 0x01C0(0x0048) (Edit)
	bool                                               bUpdatedToUseQuery;                                       // 0x0208(0x0001) (ZeroConstructor, IsPlainOldData)
	EGameplayContainerMatchType                        TagsToMatch;                                              // 0x0209(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x020A(0x0006) MISSED OFFSET
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x0210(0x0020)
=======
// Class AIModule.BTTask_PlayAnimation
// 0x0080 (0x00F0 - 0x0070)
class UBTTask_PlayAnimation : public UBTTaskNode
{
public:
	class UAnimationAsset*                             AnimationToPlay;                                          // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLooping : 1;                                             // 0x0078(0x0001) (Edit)
	unsigned char                                      bNonBlocking : 1;                                         // 0x0078(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	class UBehaviorTreeComponent*                      MyOwnerComp;                                              // 0x0080(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      CachedSkelMesh;                                           // 0x0088(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x60];                                      // 0x0090(0x0060) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryTest_GameplayTags"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_PlayAnimation"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.EnvQueryTest_Overlap
// 0x0020 (0x01E0 - 0x01C0)
class UEnvQueryTest_Overlap : public UEnvQueryTest
{
public:
	struct FEnvOverlapData                             OverlapData;                                              // 0x01C0(0x0020) (Edit, DisableEditOnInstance)
=======
// Class AIModule.BTTask_PlaySound
// 0x0008 (0x0078 - 0x0070)
class UBTTask_PlaySound : public UBTTaskNode
{
public:
	class USoundCue*                                   SoundToPlay;                                              // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryTest_Overlap"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_PlaySound"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.EnvQueryTest_Pathfinding
// 0x0078 (0x0238 - 0x01C0)
class UEnvQueryTest_Pathfinding : public UEnvQueryTest
{
public:
	TEnumAsByte<EEnvTestPathfinding>                   TestMode;                                                 // 0x01C0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01C1(0x0007) MISSED OFFSET
	class UClass*                                      Context;                                                  // 0x01C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAIDataProviderBoolValue                    PathFromContext;                                          // 0x01D0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderBoolValue                    SkipUnreachable;                                          // 0x0200(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      FilterClass;                                              // 0x0230(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
=======
// Class AIModule.BTTask_RunBehavior
// 0x0008 (0x0078 - 0x0070)
class UBTTask_RunBehavior : public UBTTaskNode
{
public:
	class UBehaviorTree*                               BehaviorAsset;                                            // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryTest_Pathfinding"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_RunBehavior"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.EnvQueryTest_PathfindingBatch
// 0x0030 (0x0268 - 0x0238)
class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding
{
public:
	struct FAIDataProviderFloatValue                   ScanRangeMultiplier;                                      // 0x0238(0x0030) (Edit, DisableEditOnInstance)
=======
// Class AIModule.BTTask_RunBehaviorDynamic
// 0x0018 (0x0088 - 0x0070)
class UBTTask_RunBehaviorDynamic : public UBTTaskNode
{
public:
	struct FGameplayTag                                InjectionTag;                                             // 0x0070(0x0008) (Edit)
	class UBehaviorTree*                               DefaultBehaviorAsset;                                     // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBehaviorTree*                               BehaviorAsset;                                            // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryTest_PathfindingBatch"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_RunBehaviorDynamic"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.EnvQueryTest_Project
// 0x0030 (0x01F0 - 0x01C0)
class UEnvQueryTest_Project : public UEnvQueryTest
{
public:
	struct FEnvTraceData                               ProjectionData;                                           // 0x01C0(0x0030) (Edit, DisableEditOnInstance)
=======
// Class AIModule.BTTask_SetTagCooldown
// 0x0010 (0x0080 - 0x0070)
class UBTTask_SetTagCooldown : public UBTTaskNode
{
public:
	struct FGameplayTag                                CooldownTag;                                              // 0x0070(0x0008) (Edit)
	bool                                               bAddToExistingDuration;                                   // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	float                                              CooldownDuration;                                         // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryTest_Project"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_SetTagCooldown"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.EnvQueryTest_Random
// 0x0000 (0x01C0 - 0x01C0)
class UEnvQueryTest_Random : public UEnvQueryTest
=======
// Class AIModule.CrowdAgentInterface
// 0x0000 (0x0028 - 0x0028)
class UCrowdAgentInterface : public UInterface
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryTest_Random"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.CrowdAgentInterface"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.EnvQueryTest_Trace
// 0x00C8 (0x0288 - 0x01C0)
class UEnvQueryTest_Trace : public UEnvQueryTest
{
public:
	struct FEnvTraceData                               TraceData;                                                // 0x01C0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderBoolValue                    TraceFromContext;                                         // 0x01F0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ItemHeightOffset;                                         // 0x0220(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ContextHeightOffset;                                      // 0x0250(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      Context;                                                  // 0x0280(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
=======
// Class AIModule.CrowdManager
// 0x00C0 (0x00E8 - 0x0028)
class UCrowdManager : public UObject
{
public:
	class ANavigationData*                             MyNavData;                                                // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FCrowdAvoidanceConfig>               AvoidanceConfig;                                          // 0x0030(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FCrowdAvoidanceSamplingPattern>      SamplingPatterns;                                         // 0x0040(0x0010) (Edit, ZeroConstructor, Config)
	int                                                MaxAgents;                                                // 0x0050(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxAgentRadius;                                           // 0x0054(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxAvoidedAgents;                                         // 0x0058(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxAvoidedWalls;                                          // 0x005C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              NavmeshCheckInterval;                                     // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PathOptimizationInterval;                                 // 0x0064(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              SeparationDirClamp;                                       // 0x0068(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00 : 4;                                        // 0x006C(0x0001)
	unsigned char                                      bResolveCollisions : 1;                                   // 0x006C(0x0001) (Edit, Config)
	unsigned char                                      UnknownData01[0x7B];                                      // 0x006D(0x007B) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryTest_Trace"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.CrowdManager"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.EnvQueryOption
// 0x0018 (0x0040 - 0x0028)
class UEnvQueryOption : public UObject
{
public:
	class UEnvQueryGenerator*                          Generator;                                                // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UEnvQueryTest*>                       Tests;                                                    // 0x0030(0x0010) (ZeroConstructor)
=======
// Class AIModule.EnvQuery
// 0x0018 (0x0048 - 0x0030)
class UEnvQuery : public UDataAsset
{
public:
	struct FName                                       QueryName;                                                // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UEnvQueryOption*>                     Options;                                                  // 0x0038(0x0010) (ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryOption"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQuery"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.EQSRenderingComponent
// 0x0030 (0x09E0 - 0x09B0)
class UEQSRenderingComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x09B0(0x0030) MISSED OFFSET
=======
// Class AIModule.EnvQueryContext_BlueprintBase
// 0x0008 (0x0030 - 0x0028)
class UEnvQueryContext_BlueprintBase : public UEnvQueryContext
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.EQSRenderingComponent"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryContext_BlueprintBase"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD
};


// Class AIModule.EQSTestingPawn
// 0x0070 (0x0890 - 0x0820)
class AEQSTestingPawn : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0820(0x0008) MISSED OFFSET
	class UEnvQuery*                                   QueryTemplate;                                            // 0x0828(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FEnvNamedValue>                      QueryParams;                                              // 0x0830(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FAIDynamicParam>                     QueryConfig;                                              // 0x0840(0x0010) (Edit, ZeroConstructor)
	float                                              TimeLimitPerStep;                                         // 0x0850(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                StepToDebugDraw;                                          // 0x0854(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EEnvQueryHightlightMode                            HighlightMode;                                            // 0x0858(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0859(0x0003) MISSED OFFSET
	unsigned char                                      bDrawLabels : 1;                                          // 0x085C(0x0001) (Edit)
	unsigned char                                      bDrawFailedItems : 1;                                     // 0x085C(0x0001) (Edit)
	unsigned char                                      bReRunQueryOnlyOnFinishedMove : 1;                        // 0x085C(0x0001) (Edit)
	unsigned char                                      bShouldBeVisibleInGame : 1;                               // 0x085C(0x0001) (Edit)
	unsigned char                                      bTickDuringGame : 1;                                      // 0x085C(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x085D(0x0003) MISSED OFFSET
	TEnumAsByte<EEnvQueryRunMode>                      QueryingMode;                                             // 0x0860(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2F];                                      // 0x0861(0x002F) MISSED OFFSET
=======

	void ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation);
	void ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor);
	void ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet);
	void ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet);
};


// Class AIModule.EnvQueryContext_Item
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_Item : public UEnvQueryContext
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.EQSTestingPawn"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryContext_Item"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.NavFilter_AIControllerDefault
// 0x0000 (0x0048 - 0x0048)
class UNavFilter_AIControllerDefault : public UNavigationQueryFilter
=======
// Class AIModule.EnvQueryContext_Querier
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_Querier : public UEnvQueryContext
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.NavFilter_AIControllerDefault"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryContext_Querier"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.NavLocalGridManager
// 0x0030 (0x0058 - 0x0028)
class UNavLocalGridManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET
=======
// Class AIModule.EnvQueryDebugHelpers
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryDebugHelpers : public UObject
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.NavLocalGridManager"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryDebugHelpers"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD

	bool STATIC_SetLocalNavigationGridDensity(class UObject** WorldContext, float* CellSize);
	void STATIC_RemoveLocalNavigationGrid(class UObject** WorldContext, int* GridId, bool* bRebuildGrids);
	bool STATIC_FindLocalNavigationGridPath(class UObject** WorldContext, struct FVector* Start, struct FVector* End, TArray<struct FVector>* PathPoints);
	int STATIC_AddLocalNavigationGridForPoints(class UObject** WorldContext, TArray<struct FVector>* Locations, int* Radius2D, float* Height, bool* bRebuildGrids);
	int STATIC_AddLocalNavigationGridForPoint(class UObject** WorldContext, struct FVector* Location, int* Radius2D, float* Height, bool* bRebuildGrids);
	int STATIC_AddLocalNavigationGridForCapsule(class UObject** WorldContext, struct FVector* Location, float* CapsuleRadius, float* CapsuleHalfHeight, int* Radius2D, float* Height, bool* bRebuildGrids);
	int STATIC_AddLocalNavigationGridForBox(class UObject** WorldContext, struct FVector* Location, struct FVector* Extent, struct FRotator* Rotation, int* Radius2D, float* Height, bool* bRebuildGrids);
};


// Class AIModule.PathFollowingComponent
// 0x02C0 (0x04B0 - 0x01F0)
class UPathFollowingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x130];                                     // 0x01F0(0x0130) MISSED OFFSET
	class UNavMovementComponent*                       MovementComp;                                             // 0x0320(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0328(0x0008) MISSED OFFSET
	class ANavigationData*                             MyNavData;                                                // 0x0330(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x178];                                     // 0x0338(0x0178) MISSED OFFSET
=======
};


// Class AIModule.EQSQueryResultSourceInterface
// 0x0000 (0x0028 - 0x0028)
class UEQSQueryResultSourceInterface : public UInterface
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.PathFollowingComponent"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.EQSQueryResultSourceInterface"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD

	void OnNavDataRegistered(class ANavigationData** NavData);
	void OnActorBump(class AActor** SelfActor, class AActor** OtherActor, struct FVector* NormalImpulse, struct FHitResult* Hit);
	struct FVector GetPathDestination();
	TEnumAsByte<EPathFollowingAction> GetPathActionType();
};


// Class AIModule.CrowdFollowingComponent
// 0x0050 (0x0500 - 0x04B0)
class UCrowdFollowingComponent : public UPathFollowingComponent
{
public:
	struct FVector                                     CrowdAgentMoveDirection;                                  // 0x04B0(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04BC(0x0004) MISSED OFFSET
	class UCharacterMovementComponent*                 CharacterMovement;                                        // 0x04C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FNavAvoidanceMask                           AvoidanceGroup;                                           // 0x04C8(0x0004) (Deprecated, IsPlainOldData)
	struct FNavAvoidanceMask                           GroupsToAvoid;                                            // 0x04CC(0x0004) (Deprecated, IsPlainOldData)
	struct FNavAvoidanceMask                           GroupsToIgnore;                                           // 0x04D0(0x0004) (Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2C];                                      // 0x04D4(0x002C) MISSED OFFSET
=======
};


// Class AIModule.EnvQueryInstanceBlueprintWrapper
// 0x0050 (0x0078 - 0x0028)
class UEnvQueryInstanceBlueprintWrapper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	int                                                QueryID;                                                  // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x24];                                      // 0x0034(0x0024) MISSED OFFSET
	class UClass*                                      ItemType;                                                 // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                OptionIndex;                                              // 0x0060(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnQueryFinishedEvent;                                     // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.CrowdFollowingComponent"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryInstanceBlueprintWrapper"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}


<<<<<<< HEAD
	void SuspendCrowdSteering(bool* bSuspend);
};


// Class AIModule.GridPathFollowingComponent
// 0x0030 (0x04E0 - 0x04B0)
class UGridPathFollowingComponent : public UPathFollowingComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x04B0(0x0030) MISSED OFFSET
=======
	void SetNamedParam(const struct FName& ParamName, float Value);
	TArray<struct FVector> GetResultsAsLocations();
	TArray<class AActor*> GetResultsAsActors();
	float GetItemScore(int ItemIndex);
	void EQSQueryDoneSignature__DelegateSignature(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);
};


// Class AIModule.EnvQueryItemType_VectorBase
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryItemType_VectorBase : public UEnvQueryItemType
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.GridPathFollowingComponent"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryItemType_VectorBase"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.PawnAction
// 0x00A8 (0x00D0 - 0x0028)
class UPawnAction : public UObject
{
public:
	class UPawnAction*                                 ChildAction;                                              // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UPawnAction*                                 ParentAction;                                             // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UPawnActionsComponent*                       OwnerComponent;                                           // 0x0038(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UObject*                                     Instigator;                                               // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UBrainComponent*                             BrainComp;                                                // 0x0048(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0050(0x0068) MISSED OFFSET
	unsigned char                                      bAllowNewSameClassInstance : 1;                           // 0x00B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      bReplaceActiveSameClassInstance : 1;                      // 0x00B8(0x0001) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      bShouldPauseMovement : 1;                                 // 0x00B8(0x0001) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      bAlwaysNotifyOnFinished : 1;                              // 0x00B8(0x0001) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x17];                                      // 0x00B9(0x0017) MISSED OFFSET
=======
// Class AIModule.EnvQueryItemType_ActorBase
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryItemType_ActorBase : public UEnvQueryItemType_VectorBase
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.PawnAction"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryItemType_ActorBase"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD

	TEnumAsByte<EAIRequestPriority> GetActionPriority();
	void Finish(TEnumAsByte<EPawnActionResult>* WithResult);
	class UPawnAction* STATIC_CreateActionInstance(class UObject** WorldContextObject, class UClass** ActionClass);
};


// Class AIModule.PawnAction_BlueprintBase
// 0x0000 (0x00D0 - 0x00D0)
class UPawnAction_BlueprintBase : public UPawnAction
=======
};


// Class AIModule.EnvQueryItemType_Actor
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryItemType_Actor : public UEnvQueryItemType_ActorBase
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.PawnAction_BlueprintBase"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryItemType_Actor"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD

	void ActionTick(class APawn** ControlledPawn, float* DeltaSeconds);
	void ActionStart(class APawn** ControlledPawn);
	void ActionResume(class APawn** ControlledPawn);
	void ActionPause(class APawn** ControlledPawn);
	void ActionFinished(class APawn** ControlledPawn, TEnumAsByte<EPawnActionResult>* WithResult);
};


// Class AIModule.PawnAction_Move
// 0x0050 (0x0120 - 0x00D0)
class UPawnAction_Move : public UPawnAction
{
public:
	class AActor*                                      GoalActor;                                                // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     GoalLocation;                                             // 0x00D8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              AcceptableRadius;                                         // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAllowStrafe : 1;                                         // 0x00F0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bFinishOnOverlap : 1;                                     // 0x00F0(0x0001)
	unsigned char                                      bUsePathfinding : 1;                                      // 0x00F0(0x0001)
	unsigned char                                      bAllowPartialPath : 1;                                    // 0x00F0(0x0001)
	unsigned char                                      bProjectGoalToNavigation : 1;                             // 0x00F0(0x0001)
	unsigned char                                      bUpdatePathToGoal : 1;                                    // 0x00F0(0x0001)
	unsigned char                                      bAbortChildActionOnPathChange : 1;                        // 0x00F0(0x0001)
	unsigned char                                      UnknownData00[0x2F];                                      // 0x00F1(0x002F) MISSED OFFSET
=======
};


// Class AIModule.EnvQueryItemType_Direction
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryItemType_Direction : public UEnvQueryItemType_VectorBase
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.PawnAction_Move"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryItemType_Direction"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.PawnAction_Repeat
// 0x0020 (0x00F0 - 0x00D0)
class UPawnAction_Repeat : public UPawnAction
{
public:
	class UPawnAction*                                 ActionToRepeat;                                           // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPawnAction*                                 RecentActionCopy;                                         // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EPawnActionFailHandling>               ChildFailureHandlingMode;                                 // 0x00E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x00E1(0x000F) MISSED OFFSET
=======
// Class AIModule.EnvQueryItemType_Point
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryItemType_Point : public UEnvQueryItemType_VectorBase
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.PawnAction_Repeat"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryItemType_Point"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.PawnAction_Sequence
// 0x0030 (0x0100 - 0x00D0)
class UPawnAction_Sequence : public UPawnAction
{
public:
	TArray<class UPawnAction*>                         ActionSequence;                                           // 0x00D0(0x0010) (ZeroConstructor)
	TEnumAsByte<EPawnActionFailHandling>               ChildFailureHandlingMode;                                 // 0x00E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00E1(0x0007) MISSED OFFSET
	class UPawnAction*                                 RecentActionCopy;                                         // 0x00E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00F0(0x0010) MISSED OFFSET
=======
// Class AIModule.EnvQueryManager
// 0x0110 (0x0138 - 0x0028)
class UEnvQueryManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0028(0x0078) MISSED OFFSET
	TArray<struct FEnvQueryInstanceCache>              InstanceCache;                                            // 0x00A0(0x0010) (ZeroConstructor, Transient)
	TArray<class UEnvQueryContext*>                    LocalContexts;                                            // 0x00B0(0x0010) (ZeroConstructor, Transient)
	TArray<class UEnvQueryInstanceBlueprintWrapper*>   GCShieldedWrappers;                                       // 0x00C0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x54];                                      // 0x00D0(0x0054) MISSED OFFSET
	float                                              MaxAllowedTestingTime;                                    // 0x0124(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bTestQueriesUsingBreadth;                                 // 0x0128(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0129(0x0003) MISSED OFFSET
	int                                                QueryCountWarningThreshold;                               // 0x012C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	double                                             QueryCountWarningInterval;                                // 0x0130(0x0008) (ZeroConstructor, Config, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.PawnAction_Sequence"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryManager"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD
};


// Class AIModule.PawnAction_Wait
// 0x0010 (0x00E0 - 0x00D0)
class UPawnAction_Wait : public UPawnAction
{
public:
	float                                              TimeToWait;                                               // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x00D4(0x000C) MISSED OFFSET
=======

	class UEnvQueryInstanceBlueprintWrapper* STATIC_RunEQSQuery(class UObject* WorldContext, class UEnvQuery* QueryTemplate, class UObject* Querier, TEnumAsByte<EEnvQueryRunMode> RunMode, class UClass* WrapperClass);
};


// Class AIModule.EnvQueryNode
// 0x0008 (0x0030 - 0x0028)
class UEnvQueryNode : public UObject
{
public:
	int                                                VerNum;                                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.PawnAction_Wait"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryNode"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.PawnActionsComponent
// 0x0040 (0x0230 - 0x01F0)
class UPawnActionsComponent : public UActorComponent
{
public:
	class APawn*                                       ControlledPawn;                                           // 0x01F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FPawnActionStack>                    ActionStacks;                                             // 0x01F8(0x0010) (ZeroConstructor)
	TArray<struct FPawnActionEvent>                    ActionEvents;                                             // 0x0208(0x0010) (ZeroConstructor)
	class UPawnAction*                                 CurrentAction;                                            // 0x0218(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0220(0x0010) MISSED OFFSET
=======
// Class AIModule.EnvQueryGenerator
// 0x0020 (0x0050 - 0x0030)
class UEnvQueryGenerator : public UEnvQueryNode
{
public:
	struct FString                                     OptionName;                                               // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      ItemType;                                                 // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAutoSortTests : 1;                                       // 0x0048(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.PawnActionsComponent"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryGenerator"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD

	bool K2_PushAction(class UPawnAction** NewAction, TEnumAsByte<EAIRequestPriority>* Priority, class UObject** Instigator);
	bool STATIC_K2_PerformAction(class APawn** Pawn, class UPawnAction** Action, TEnumAsByte<EAIRequestPriority>* Priority);
	TEnumAsByte<EPawnActionAbortState> K2_ForceAbortAction(class UPawnAction** ActionToAbort);
	TEnumAsByte<EPawnActionAbortState> K2_AbortAction(class UPawnAction** ActionToAbort);
};


// Class AIModule.PawnSensingComponent
// 0x0050 (0x0240 - 0x01F0)
class UPawnSensingComponent : public UActorComponent
{
public:
	float                                              HearingThreshold;                                         // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LOSHearingThreshold;                                      // 0x01F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SightRadius;                                              // 0x01F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SensingInterval;                                          // 0x01FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HearingMaxSoundAge;                                       // 0x0200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableSensingUpdates : 1;                                // 0x0204(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bOnlySensePlayers : 1;                                    // 0x0204(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSeePawns : 1;                                            // 0x0204(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bHearNoises : 1;                                          // 0x0204(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0205(0x000B) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSeePawn;                                                // 0x0210(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHearNoise;                                              // 0x0220(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              PeripheralVisionAngle;                                    // 0x0230(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PeripheralVisionCosine;                                   // 0x0234(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0238(0x0008) MISSED OFFSET
=======
};


// Class AIModule.EnvQueryGenerator_ActorsOfClass
// 0x0070 (0x00C0 - 0x0050)
class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator
{
public:
	class UClass*                                      SearchedActorClass;                                       // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAIDataProviderBoolValue                    GenerateOnlyActorsInRadius;                               // 0x0058(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   SearchRadius;                                             // 0x0088(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      SearchCenter;                                             // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.PawnSensingComponent"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryGenerator_ActorsOfClass"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD

	void SetSensingUpdatesEnabled(bool* bEnabled);
	void SetSensingInterval(float* NewSensingInterval);
	void SetPeripheralVisionAngle(float* NewPeripheralVisionAngle);
	void SeePawnDelegate__DelegateSignature(class APawn** Pawn);
	void HearNoiseDelegate__DelegateSignature(class APawn** Instigator, struct FVector* Location, float* Volume);
	float GetPeripheralVisionCosine();
	float GetPeripheralVisionAngle();
};


// Class AIModule.VisualLoggerExtension
// 0x0000 (0x0028 - 0x0028)
class UVisualLoggerExtension : public UObject
{
public:
=======
};


// Class AIModule.EnvQueryGenerator_BlueprintBase
// 0x0030 (0x0080 - 0x0050)
class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator
{
public:
	struct FText                                       GeneratorsActionDescription;                              // 0x0050(0x0018) (Edit)
	class UClass*                                      Context;                                                  // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      GeneratedItemType;                                        // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.VisualLoggerExtension"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryGenerator_BlueprintBase"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD
};


// Class AIModule.AIResourceInterface
// 0x0000 (0x0028 - 0x0028)
class UAIResourceInterface : public UInterface
{
public:
=======

	class UObject* GetQuerier();
	void DoItemGeneration(TArray<struct FVector> ContextLocations);
	void AddGeneratedVector(const struct FVector& GeneratedVector);
	void AddGeneratedActor(class AActor* GeneratedActor);
};


// Class AIModule.EnvQueryGenerator_Composite
// 0x0018 (0x0068 - 0x0050)
class UEnvQueryGenerator_Composite : public UEnvQueryGenerator
{
public:
	TArray<class UEnvQueryGenerator*>                  Generators;                                               // 0x0050(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
	bool                                               bHasMatchingItemType;                                     // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.AIResourceInterface"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryGenerator_Composite"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.AIAsyncTaskBlueprintProxy
// 0x0040 (0x0068 - 0x0028)
class UAIAsyncTaskBlueprintProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFail;                                                   // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET
=======
// Class AIModule.EnvQueryGenerator_CurrentLocation
// 0x0008 (0x0058 - 0x0050)
class UEnvQueryGenerator_CurrentLocation : public UEnvQueryGenerator
{
public:
	class UClass*                                      QueryContext;                                             // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.AIAsyncTaskBlueprintProxy"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryGenerator_CurrentLocation"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD

	void OnMoveCompleted(struct FAIRequestID* RequestID, TEnumAsByte<EPathFollowingResult>* MovementResult);
};


// Class AIModule.AIBlueprintHelperLibrary
// 0x0000 (0x0028 - 0x0028)
class UAIBlueprintHelperLibrary : public UBlueprintFunctionLibrary
{
public:
=======
};


// Class AIModule.EnvQueryGenerator_ProjectedPoints
// 0x0030 (0x0080 - 0x0050)
class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator
{
public:
	struct FEnvTraceData                               ProjectionData;                                           // 0x0050(0x0030) (Edit, DisableEditOnInstance)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.AIBlueprintHelperLibrary"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryGenerator_ProjectedPoints"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD

	void STATIC_UnlockAIResourcesWithAnimation(class UAnimInstance** AnimInstance, bool* bUnlockMovement, bool* UnlockAILogic);
	class APawn* STATIC_SpawnAIFromClass(class UObject** WorldContextObject, class UClass** PawnClass, class UBehaviorTree** BehaviorTree, struct FVector* Location, struct FRotator* Rotation, bool* bNoCollisionFail);
	void STATIC_SendAIMessage(class APawn** Target, struct FName* Message, class UObject** MessageSource, bool* bSuccess);
	void STATIC_LockAIResourcesWithAnimation(class UAnimInstance** AnimInstance, bool* bLockMovement, bool* LockAILogic);
	bool STATIC_IsValidAIRotation(struct FRotator* Rotation);
	bool STATIC_IsValidAILocation(struct FVector* Location);
	bool STATIC_IsValidAIDirection(struct FVector* DirectionVector);
	class UBlackboardComponent* STATIC_GetBlackboard(class AActor** Target);
	class AAIController* STATIC_GetAIController(class AActor** ControlledActor);
	class UAIAsyncTaskBlueprintProxy* STATIC_CreateMoveToProxyObject(class UObject** WorldContextObject, class APawn** Pawn, struct FVector* Destination, class AActor** TargetActor, float* AcceptanceRadius, bool* bStopOnOverlap);
};


// Class AIModule.AIPerceptionListenerInterface
// 0x0000 (0x0028 - 0x0028)
class UAIPerceptionListenerInterface : public UInterface
{
public:
=======
};


// Class AIModule.EnvQueryGenerator_Cone
// 0x00D0 (0x0150 - 0x0080)
class UEnvQueryGenerator_Cone : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   AlignedPointsDistance;                                    // 0x0080(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ConeDegrees;                                              // 0x00B0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   AngleStep;                                                // 0x00E0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   Range;                                                    // 0x0110(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      CenterActor;                                              // 0x0140(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIncludeContextLocation : 1;                              // 0x0148(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0149(0x0007) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.AIPerceptionListenerInterface"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryGenerator_Cone"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.GenericTeamAgentInterface
// 0x0000 (0x0028 - 0x0028)
class UGenericTeamAgentInterface : public UInterface
{
public:
=======
// Class AIModule.EnvQueryGenerator_Donut
// 0x0128 (0x01A8 - 0x0080)
class UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   InnerRadius;                                              // 0x0080(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   OuterRadius;                                              // 0x00B0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderIntValue                     NumberOfRings;                                            // 0x00E0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderIntValue                     PointsPerRing;                                            // 0x0110(0x0030) (Edit, DisableEditOnInstance)
	struct FEnvDirection                               ArcDirection;                                             // 0x0140(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ArcAngle;                                                 // 0x0160(0x0030) (Edit, DisableEditOnInstance)
	bool                                               bUseSpiralPattern;                                        // 0x0190(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0191(0x0007) MISSED OFFSET
	class UClass*                                      Center;                                                   // 0x0198(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDefineArc : 1;                                           // 0x01A0(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01A1(0x0007) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.GenericTeamAgentInterface"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryGenerator_Donut"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.AIController
// 0x0090 (0x04F8 - 0x0468)
class AAIController : public AController
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0468(0x0038) MISSED OFFSET
	unsigned char                                      bStopAILogicOnUnposses : 1;                               // 0x04A0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bLOSflag : 1;                                             // 0x04A0(0x0001)
	unsigned char                                      bSkipExtraLOSChecks : 1;                                  // 0x04A0(0x0001)
	unsigned char                                      bAllowStrafe : 1;                                         // 0x04A0(0x0001)
	unsigned char                                      bWantsPlayerState : 1;                                    // 0x04A0(0x0001)
	unsigned char                                      bSetControlRotationFromPawnOrientation : 1;               // 0x04A0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x7];                                       // 0x04A1(0x0007) MISSED OFFSET
	class UPathFollowingComponent*                     PathFollowingComponent;                                   // 0x04A8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UBrainComponent*                             BrainComponent;                                           // 0x04B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAIPerceptionComponent*                      PerceptionComponent;                                      // 0x04B8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UPawnActionsComponent*                       ActionsComp;                                              // 0x04C0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlackboardComponent*                        Blackboard;                                               // 0x04C8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGameplayTasksComponent*                     CachedGameplayTasksComponent;                             // 0x04D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      DefaultNavigationFilterClass;                             // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    ReceiveMoveCompleted;                                     // 0x04E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x8];                                       // 0x04F0(0x0008) MISSED OFFSET
=======
// Class AIModule.EnvQueryGenerator_OnCircle
// 0x0168 (0x01E8 - 0x0080)
class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   CircleRadius;                                             // 0x0080(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   SpaceBetween;                                             // 0x00B0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderIntValue                     NumberOfPoints;                                           // 0x00E0(0x0030) (Edit, DisableEditOnInstance)
	EPointOnCircleSpacingMethod                        PointOnCircleSpacingMethod;                               // 0x0110(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
	struct FEnvDirection                               ArcDirection;                                             // 0x0118(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ArcAngle;                                                 // 0x0138(0x0030) (Edit, DisableEditOnInstance)
	float                                              AngleRadians;                                             // 0x0168(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x016C(0x0004) MISSED OFFSET
	class UClass*                                      CircleCenter;                                             // 0x0170(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreAnyContextActorsWhenGeneratingCircle;              // 0x0178(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0179(0x0007) MISSED OFFSET
	struct FAIDataProviderFloatValue                   CircleCenterZOffset;                                      // 0x0180(0x0030) (Edit)
	struct FEnvTraceData                               TraceData;                                                // 0x01B0(0x0030) (Edit)
	unsigned char                                      bDefineArc : 1;                                           // 0x01E0(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x7];                                       // 0x01E1(0x0007) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.AIController"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryGenerator_OnCircle"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD

	bool UseBlackboard(class UBlackboardData** BlackboardAsset, class UBlackboardComponent** BlackboardComponent);
	void UnclaimTaskResource(class UClass** ResourceClass);
	void SetMoveBlockDetection(bool* bEnable);
	bool RunBehaviorTree(class UBehaviorTree** BTAsset);
	void OnUsingBlackBoard(class UBlackboardComponent** BlackboardComp, class UBlackboardData** BlackboardAsset);
	void OnUnpossess(class APawn** UnpossessedPawn);
	void OnPossess(class APawn** PossessedPawn);
	void OnGameplayTaskResourcesClaimed(struct FGameplayResourceSet* NewlyClaimed, struct FGameplayResourceSet* FreshlyReleased);
	TEnumAsByte<EPathFollowingRequestResult> MoveToLocation(struct FVector* Dest, float* AcceptanceRadius, bool* bStopOnOverlap, bool* bUsePathfinding, bool* bProjectDestinationToNavigation, bool* bCanStrafe, class UClass** FilterClass, bool* bAllowPartialPath);
	TEnumAsByte<EPathFollowingRequestResult> MoveToActor(class AActor** Goal, float* AcceptanceRadius, bool* bStopOnOverlap, bool* bUsePathfinding, bool* bCanStrafe, class UClass** FilterClass, bool* bAllowPartialPath);
	void K2_SetFocus(class AActor** NewFocus);
	void K2_SetFocalPoint(struct FVector* FP);
	void K2_ClearFocus();
	bool HasPartialPath();
	class UPathFollowingComponent* GetPathFollowingComponent();
	TEnumAsByte<EPathFollowingStatus> GetMoveStatus();
	struct FVector GetImmediateMoveDestination();
	class AActor* GetFocusActor();
	struct FVector GetFocalPointOnActor(class AActor** Actor);
	struct FVector GetFocalPoint();
	class UAIPerceptionComponent* GetAIPerceptionComponent();
	void ClaimTaskResource(class UClass** ResourceClass);
};


// Class AIModule.DetourCrowdAIController
// 0x0000 (0x04F8 - 0x04F8)
class ADetourCrowdAIController : public AAIController
{
public:
=======
};


// Class AIModule.EnvQueryGenerator_SimpleGrid
// 0x0068 (0x00E8 - 0x0080)
class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   GridSize;                                                 // 0x0080(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   SpaceBetween;                                             // 0x00B0(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      GenerateAround;                                           // 0x00E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.DetourCrowdAIController"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryGenerator_SimpleGrid"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.GridPathAIController
// 0x0000 (0x04F8 - 0x04F8)
class AGridPathAIController : public AAIController
{
public:
=======
// Class AIModule.EnvQueryGenerator_PathingGrid
// 0x0068 (0x0150 - 0x00E8)
class UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid
{
public:
	struct FAIDataProviderBoolValue                    PathToItem;                                               // 0x00E8(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      NavigationFilter;                                         // 0x0118(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAIDataProviderFloatValue                   ScanRangeMultiplier;                                      // 0x0120(0x0030) (Edit, DisableEditOnInstance)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.GridPathAIController"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryGenerator_PathingGrid"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.AIDataProvider
// 0x0000 (0x0028 - 0x0028)
class UAIDataProvider : public UObject
{
public:
=======
// Class AIModule.EnvQueryTest
// 0x0190 (0x01C0 - 0x0030)
class UEnvQueryTest : public UEnvQueryNode
{
public:
	int                                                TestOrder;                                                // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnvTestPurpose>                       TestPurpose;                                              // 0x0034(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	struct FString                                     TestComment;                                              // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<EEnvTestFilterOperator>                MultipleContextFilterOp;                                  // 0x0048(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvTestScoreOperator>                 MultipleContextScoreOp;                                   // 0x0049(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvTestFilterType>                    FilterType;                                               // 0x004A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x004B(0x0005) MISSED OFFSET
	struct FAIDataProviderBoolValue                    boolValue;                                                // 0x0050(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   FloatValueMin;                                            // 0x0080(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   FloatValueMax;                                            // 0x00B0(0x0030) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x1];                                       // 0x00E0(0x0001) MISSED OFFSET
	TEnumAsByte<EEnvTestScoreEquation>                 ScoringEquation;                                          // 0x00E1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvQueryTestClamping>                 ClampMinType;                                             // 0x00E2(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvQueryTestClamping>                 ClampMaxType;                                             // 0x00E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EEQSNormalizationType                              NormalizationType;                                        // 0x00E4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00E5(0x0003) MISSED OFFSET
	struct FAIDataProviderFloatValue                   ScoreClampMin;                                            // 0x00E8(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ScoreClampMax;                                            // 0x0118(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ScoringFactor;                                            // 0x0148(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ReferenceValue;                                           // 0x0178(0x0030) (Edit, DisableEditOnInstance)
	bool                                               bDefineReferenceValue;                                    // 0x01A8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0xF];                                       // 0x01A9(0x000F) MISSED OFFSET
	unsigned char                                      bWorkOnFloatValues : 1;                                   // 0x01B8(0x0001)
	unsigned char                                      UnknownData05[0x7];                                       // 0x01B9(0x0007) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.AIDataProvider"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryTest"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.AIDataProvider_QueryParams
// 0x0018 (0x0040 - 0x0028)
class UAIDataProvider_QueryParams : public UAIDataProvider
{
public:
	struct FName                                       ParamName;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IntValue;                                                 // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               BoolValue;                                                // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
=======
// Class AIModule.EnvQueryTest_Distance
// 0x0010 (0x01D0 - 0x01C0)
class UEnvQueryTest_Distance : public UEnvQueryTest
{
public:
	TEnumAsByte<EEnvTestDistance>                      TestMode;                                                 // 0x01C0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01C1(0x0007) MISSED OFFSET
	class UClass*                                      DistanceTo;                                               // 0x01C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.AIDataProvider_QueryParams"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryTest_Distance"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.AIDataProvider_Random
// 0x0010 (0x0050 - 0x0040)
class UAIDataProvider_Random : public UAIDataProvider_QueryParams
{
public:
	float                                              Min;                                                      // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bInteger : 1;                                             // 0x0048(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
=======
// Class AIModule.EnvQueryTest_Dot
// 0x0048 (0x0208 - 0x01C0)
class UEnvQueryTest_Dot : public UEnvQueryTest
{
public:
	struct FEnvDirection                               LineA;                                                    // 0x01C0(0x0020) (Edit, DisableEditOnInstance)
	struct FEnvDirection                               LineB;                                                    // 0x01E0(0x0020) (Edit, DisableEditOnInstance)
	EEnvTestDot                                        TestMode;                                                 // 0x0200(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAbsoluteValue;                                           // 0x0201(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0202(0x0006) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.AIDataProvider_Random"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryTest_Dot"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.AIHotSpotManager
// 0x0000 (0x0028 - 0x0028)
class UAIHotSpotManager : public UObject
{
public:
=======
// Class AIModule.EnvQueryTest_GameplayTags
// 0x0070 (0x0230 - 0x01C0)
class UEnvQueryTest_GameplayTags : public UEnvQueryTest
{
public:
	struct FGameplayTagQuery                           TagQueryToMatch;                                          // 0x01C0(0x0048) (Edit)
	bool                                               bUpdatedToUseQuery;                                       // 0x0208(0x0001) (ZeroConstructor, IsPlainOldData)
	EGameplayContainerMatchType                        TagsToMatch;                                              // 0x0209(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x020A(0x0006) MISSED OFFSET
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x0210(0x0020)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.AIHotSpotManager"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryTest_GameplayTags"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.AISense
// 0x00F8 (0x0120 - 0x0028)
class UAISense : public UObject
{
public:
	float                                              DefaultExpirationAge;                                     // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	EAISenseNotifyType                                 NotifyType;                                               // 0x002C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	unsigned char                                      bWantsNewPawnNotification : 1;                            // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance)
	unsigned char                                      bAutoRegisterAllPawnsAsSources : 1;                       // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	class UAIPerceptionSystem*                         PerceptionSystemInstance;                                 // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xE0];                                      // 0x0040(0x00E0) MISSED OFFSET
=======
// Class AIModule.EnvQueryTest_Overlap
// 0x0020 (0x01E0 - 0x01C0)
class UEnvQueryTest_Overlap : public UEnvQueryTest
{
public:
	struct FEnvOverlapData                             OverlapData;                                              // 0x01C0(0x0020) (Edit, DisableEditOnInstance)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.AISense"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryTest_Overlap"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.AIPerceptionSystem
// 0x0108 (0x0130 - 0x0028)
class UAIPerceptionSystem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET
	TArray<class UAISense*>                            Senses;                                                   // 0x0080(0x0010) (ZeroConstructor)
	float                                              PerceptionAgingRate;                                      // 0x0090(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x9C];                                      // 0x0094(0x009C) MISSED OFFSET
=======
// Class AIModule.EnvQueryTest_Pathfinding
// 0x0078 (0x0238 - 0x01C0)
class UEnvQueryTest_Pathfinding : public UEnvQueryTest
{
public:
	TEnumAsByte<EEnvTestPathfinding>                   TestMode;                                                 // 0x01C0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01C1(0x0007) MISSED OFFSET
	class UClass*                                      Context;                                                  // 0x01C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAIDataProviderBoolValue                    PathFromContext;                                          // 0x01D0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderBoolValue                    SkipUnreachable;                                          // 0x0200(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      FilterClass;                                              // 0x0230(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.AIPerceptionSystem"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryTest_Pathfinding"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD

	void STATIC_ReportPerceptionEvent(class UObject** WorldContext, class UAISenseEvent** PerceptionEvent);
	void ReportEvent(class UAISenseEvent** PerceptionEvent);
	bool STATIC_RegisterPerceptionStimuliSource(class UObject** WorldContext, class UClass** Sense, class AActor** Target);
	void OnPerceptionStimuliSourceEndPlay(class AActor** Actor, TEnumAsByte<EEndPlayReason>* EndPlayReason);
	class UClass* STATIC_GetSenseClassForStimulus(class UObject** WorldContext, struct FAIStimulus* Stimulus);
};


// Class AIModule.AIPerceptionComponent
// 0x00E0 (0x02D0 - 0x01F0)
class UAIPerceptionComponent : public UActorComponent
{
public:
	TArray<class UAISenseConfig*>                      SensesConfig;                                             // 0x01F0(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      DominantSense;                                            // 0x0200(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0208(0x0010) MISSED OFFSET
	class AAIController*                               AIOwner;                                                  // 0x0218(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x80];                                      // 0x0220(0x0080) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPerceptionUpdated;                                      // 0x02A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTargetPerceptionUpdated;                                // 0x02B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x10];                                      // 0x02C0(0x0010) MISSED OFFSET
=======
};


// Class AIModule.EnvQueryTest_PathfindingBatch
// 0x0030 (0x0268 - 0x0238)
class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding
{
public:
	struct FAIDataProviderFloatValue                   ScanRangeMultiplier;                                      // 0x0238(0x0030) (Edit, DisableEditOnInstance)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.AIPerceptionComponent"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryTest_PathfindingBatch"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD

	void RequestStimuliListenerUpdate();
	void OnOwnerEndPlay(class AActor** Actor, TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void GetPerceivedHostileActors(TArray<class AActor*>* OutActors);
	void GetPerceivedActors(class UClass** SenseToUse, TArray<class AActor*>* OutActors);
	void GetKnownPerceivedActors(class UClass** SenseToUse, TArray<class AActor*>* OutActors);
	void GetCurrentlyPerceivedActors(class UClass** SenseToUse, TArray<class AActor*>* OutActors);
	bool GetActorsPerception(class AActor** Actor, struct FActorPerceptionBlueprintInfo* Info);
};


// Class AIModule.AIPerceptionStimuliSourceComponent
// 0x0020 (0x0210 - 0x01F0)
class UAIPerceptionStimuliSourceComponent : public UActorComponent
{
public:
	unsigned char                                      bAutoRegisterAsSource : 1;                                // 0x01F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Config)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01F1(0x0007) MISSED OFFSET
	TArray<class UClass*>                              RegisterAsSourceForSenses;                                // 0x01F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0208(0x0008) MISSED OFFSET
=======
};


// Class AIModule.EnvQueryTest_Project
// 0x0030 (0x01F0 - 0x01C0)
class UEnvQueryTest_Project : public UEnvQueryTest
{
public:
	struct FEnvTraceData                               ProjectionData;                                           // 0x01C0(0x0030) (Edit, DisableEditOnInstance)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.AIPerceptionStimuliSourceComponent"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryTest_Project"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD

	void UnregisterFromSense(class UClass** SenseClass);
	void UnregisterFromPerceptionSystem();
	void RegisterWithPerceptionSystem();
	void RegisterForSense(class UClass** SenseClass);
};


// Class AIModule.AIResource_Movement
// 0x0000 (0x0038 - 0x0038)
class UAIResource_Movement : public UGameplayTaskResource
=======
};


// Class AIModule.EnvQueryTest_Random
// 0x0000 (0x01C0 - 0x01C0)
class UEnvQueryTest_Random : public UEnvQueryTest
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.AIResource_Movement"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryTest_Random"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.AIResource_Logic
// 0x0000 (0x0038 - 0x0038)
class UAIResource_Logic : public UGameplayTaskResource
{
public:
=======
// Class AIModule.EnvQueryTest_Trace
// 0x00C8 (0x0288 - 0x01C0)
class UEnvQueryTest_Trace : public UEnvQueryTest
{
public:
	struct FEnvTraceData                               TraceData;                                                // 0x01C0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderBoolValue                    TraceFromContext;                                         // 0x01F0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ItemHeightOffset;                                         // 0x0220(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ContextHeightOffset;                                      // 0x0250(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      Context;                                                  // 0x0280(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.AIResource_Logic"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryTest_Trace"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.AISense_Blueprint
// 0x0030 (0x0150 - 0x0120)
class UAISense_Blueprint : public UAISense
{
public:
	class UClass*                                      ListenerDataType;                                         // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UAIPerceptionComponent*>              ListenerContainer;                                        // 0x0128(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	TArray<class UAISenseEvent*>                       UnprocessedEvents;                                        // 0x0138(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0148(0x0008) MISSED OFFSET
=======
// Class AIModule.EnvQueryOption
// 0x0018 (0x0040 - 0x0028)
class UEnvQueryOption : public UObject
{
public:
	class UEnvQueryGenerator*                          Generator;                                                // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UEnvQueryTest*>                       Tests;                                                    // 0x0030(0x0010) (ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.AISense_Blueprint"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryOption"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD

	float OnUpdate(TArray<class UAISenseEvent*>* EventsToProcess);
	void OnListenerUpdated(class AActor** ActorListener, class UAIPerceptionComponent** PerceptionComponent);
	void OnListenerUnregistered(class AActor** ActorListener, class UAIPerceptionComponent** PerceptionComponent);
	void OnListenerRegistered(class AActor** ActorListener, class UAIPerceptionComponent** PerceptionComponent);
	void K2_OnNewPawn(class APawn** NewPawn);
	void GetAllListenerComponents(TArray<class UAIPerceptionComponent*>* ListenerComponents);
	void GetAllListenerActors(TArray<class AActor*>* ListenerActors);
};


// Class AIModule.AISense_Damage
// 0x0010 (0x0130 - 0x0120)
class UAISense_Damage : public UAISense
{
public:
	TArray<struct FAIDamageEvent>                      RegisteredEvents;                                         // 0x0120(0x0010) (ZeroConstructor)
=======
};


// Class AIModule.EQSRenderingComponent
// 0x0030 (0x09E0 - 0x09B0)
class UEQSRenderingComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x09B0(0x0030) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.AISense_Damage"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.EQSRenderingComponent"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD

	void STATIC_ReportDamageEvent(class UObject** WorldContext, class AActor** DamagedActor, class AActor** Instigator, float* DamageAmount, struct FVector* EventLocation, struct FVector* HitLocation);
};


// Class AIModule.AISense_Hearing
// 0x0070 (0x0190 - 0x0120)
class UAISense_Hearing : public UAISense
{
public:
	TArray<struct FAINoiseEvent>                       NoiseEvents;                                              // 0x0120(0x0010) (ZeroConstructor)
	float                                              SpeedOfSoundSq;                                           // 0x0130(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5C];                                      // 0x0134(0x005C) MISSED OFFSET
=======
};


// Class AIModule.EQSTestingPawn
// 0x0070 (0x08B0 - 0x0840)
class AEQSTestingPawn : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0840(0x0008) MISSED OFFSET
	class UEnvQuery*                                   QueryTemplate;                                            // 0x0848(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FEnvNamedValue>                      QueryParams;                                              // 0x0850(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FAIDynamicParam>                     QueryConfig;                                              // 0x0860(0x0010) (Edit, ZeroConstructor)
	float                                              TimeLimitPerStep;                                         // 0x0870(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                StepToDebugDraw;                                          // 0x0874(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EEnvQueryHightlightMode                            HighlightMode;                                            // 0x0878(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0879(0x0003) MISSED OFFSET
	unsigned char                                      bDrawLabels : 1;                                          // 0x087C(0x0001) (Edit)
	unsigned char                                      bDrawFailedItems : 1;                                     // 0x087C(0x0001) (Edit)
	unsigned char                                      bReRunQueryOnlyOnFinishedMove : 1;                        // 0x087C(0x0001) (Edit)
	unsigned char                                      bShouldBeVisibleInGame : 1;                               // 0x087C(0x0001) (Edit)
	unsigned char                                      bTickDuringGame : 1;                                      // 0x087C(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x087D(0x0003) MISSED OFFSET
	TEnumAsByte<EEnvQueryRunMode>                      QueryingMode;                                             // 0x0880(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2F];                                      // 0x0881(0x002F) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.AISense_Hearing"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.EQSTestingPawn"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD

	void STATIC_ReportNoiseEvent(class UObject** WorldContext, struct FVector* NoiseLocation, float* Loudness, class AActor** Instigator, float* MaxRange, struct FName* Tag);
};


// Class AIModule.AISense_Prediction
// 0x0010 (0x0130 - 0x0120)
class UAISense_Prediction : public UAISense
{
public:
	TArray<struct FAIPredictionEvent>                  RegisteredEvents;                                         // 0x0120(0x0010) (ZeroConstructor)
=======
};


// Class AIModule.NavFilter_AIControllerDefault
// 0x0000 (0x0048 - 0x0048)
class UNavFilter_AIControllerDefault : public UNavigationQueryFilter
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.AISense_Prediction"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.NavFilter_AIControllerDefault"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD

	void STATIC_RequestPawnPredictionEvent(class APawn** Requestor, class AActor** PredictedActor, float* PredictionTime);
	void STATIC_RequestControllerPredictionEvent(class AAIController** Requestor, class AActor** PredictedActor, float* PredictionTime);
};


// Class AIModule.AISense_Sight
// 0x00E0 (0x0200 - 0x0120)
class UAISense_Sight : public UAISense
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0120(0x00B0) MISSED OFFSET
	int                                                MaxTracesPerTick;                                         // 0x01D0(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                MinQueriesPerTimeSliceCheck;                              // 0x01D4(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	double                                             MaxTimeSlicePerTick;                                      // 0x01D8(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              HighImportanceQueryDistanceThreshold;                     // 0x01E0(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01E4(0x0004) MISSED OFFSET
	float                                              MaxQueryImportance;                                       // 0x01E8(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              SightLimitQueryImportance;                                // 0x01EC(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x01F0(0x0010) MISSED OFFSET
=======
};


// Class AIModule.NavLocalGridManager
// 0x0030 (0x0058 - 0x0028)
class UNavLocalGridManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.AISense_Sight"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.NavLocalGridManager"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD
};


// Class AIModule.AISense_Team
// 0x0010 (0x0130 - 0x0120)
class UAISense_Team : public UAISense
{
public:
	TArray<struct FAITeamStimulusEvent>                RegisteredEvents;                                         // 0x0120(0x0010) (ZeroConstructor)
=======

	bool STATIC_SetLocalNavigationGridDensity(class UObject* WorldContext, float CellSize);
	void STATIC_RemoveLocalNavigationGrid(class UObject* WorldContext, int GridId, bool bRebuildGrids);
	bool STATIC_FindLocalNavigationGridPath(class UObject* WorldContext, const struct FVector& Start, const struct FVector& End, TArray<struct FVector>* PathPoints);
	int STATIC_AddLocalNavigationGridForPoints(class UObject* WorldContext, TArray<struct FVector> Locations, int Radius2D, float Height, bool bRebuildGrids);
	int STATIC_AddLocalNavigationGridForPoint(class UObject* WorldContext, const struct FVector& Location, int Radius2D, float Height, bool bRebuildGrids);
	int STATIC_AddLocalNavigationGridForCapsule(class UObject* WorldContext, const struct FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, int Radius2D, float Height, bool bRebuildGrids);
	int STATIC_AddLocalNavigationGridForBox(class UObject* WorldContext, const struct FVector& Location, const struct FVector& Extent, const struct FRotator& Rotation, int Radius2D, float Height, bool bRebuildGrids);
};


// Class AIModule.CrowdFollowingComponent
// 0x0050 (0x0500 - 0x04B0)
class UCrowdFollowingComponent : public UPathFollowingComponent
{
public:
	struct FVector                                     CrowdAgentMoveDirection;                                  // 0x04B0(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04BC(0x0004) MISSED OFFSET
	class UCharacterMovementComponent*                 CharacterMovement;                                        // 0x04C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FNavAvoidanceMask                           AvoidanceGroup;                                           // 0x04C8(0x0004) (Deprecated, IsPlainOldData)
	struct FNavAvoidanceMask                           GroupsToAvoid;                                            // 0x04CC(0x0004) (Deprecated, IsPlainOldData)
	struct FNavAvoidanceMask                           GroupsToIgnore;                                           // 0x04D0(0x0004) (Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2C];                                      // 0x04D4(0x002C) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.AISense_Team"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.CrowdFollowingComponent"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD
};


// Class AIModule.AISense_Touch
// 0x0010 (0x0130 - 0x0120)
class UAISense_Touch : public UAISense
{
public:
	TArray<struct FAITouchEvent>                       RegisteredEvents;                                         // 0x0120(0x0010) (ZeroConstructor)
=======

	void SuspendCrowdSteering(bool bSuspend);
};


// Class AIModule.GridPathFollowingComponent
// 0x0030 (0x04E0 - 0x04B0)
class UGridPathFollowingComponent : public UPathFollowingComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x04B0(0x0030) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.AISense_Touch"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.GridPathFollowingComponent"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.AISenseBlueprintListener
// 0x0000 (0x0100 - 0x0100)
class UAISenseBlueprintListener : public UUserDefinedStruct
{
public:
=======
// Class AIModule.PawnAction
// 0x00A8 (0x00D0 - 0x0028)
class UPawnAction : public UObject
{
public:
	class UPawnAction*                                 ChildAction;                                              // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UPawnAction*                                 ParentAction;                                             // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UPawnActionsComponent*                       OwnerComponent;                                           // 0x0038(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UObject*                                     Instigator;                                               // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UBrainComponent*                             BrainComp;                                                // 0x0048(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0050(0x0068) MISSED OFFSET
	unsigned char                                      bAllowNewSameClassInstance : 1;                           // 0x00B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      bReplaceActiveSameClassInstance : 1;                      // 0x00B8(0x0001) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      bShouldPauseMovement : 1;                                 // 0x00B8(0x0001) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      bAlwaysNotifyOnFinished : 1;                              // 0x00B8(0x0001) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x17];                                      // 0x00B9(0x0017) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.AISenseBlueprintListener"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.PawnAction"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD
};


// Class AIModule.AISenseConfig
// 0x0020 (0x0048 - 0x0028)
class UAISenseConfig : public UObject
{
public:
	struct FColor                                      DebugColor;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              MaxAge;                                                   // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bStartsEnabled : 1;                                       // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0031(0x0017) MISSED OFFSET
=======

	TEnumAsByte<EAIRequestPriority> GetActionPriority();
	void Finish(TEnumAsByte<EPawnActionResult> WithResult);
	class UPawnAction* STATIC_CreateActionInstance(class UObject* WorldContextObject, class UClass* ActionClass);
};


// Class AIModule.PawnAction_BlueprintBase
// 0x0000 (0x00D0 - 0x00D0)
class UPawnAction_BlueprintBase : public UPawnAction
{
public:
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.AISenseConfig"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.PawnAction_BlueprintBase"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD
};


// Class AIModule.AISenseConfig_Blueprint
// 0x0008 (0x0050 - 0x0048)
class UAISenseConfig_Blueprint : public UAISenseConfig
{
public:
	class UClass*                                      Implementation;                                           // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData)
=======

	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionStart(class APawn* ControlledPawn);
	void ActionResume(class APawn* ControlledPawn);
	void ActionPause(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
};


// Class AIModule.PawnAction_Move
// 0x0050 (0x0120 - 0x00D0)
class UPawnAction_Move : public UPawnAction
{
public:
	class AActor*                                      GoalActor;                                                // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     GoalLocation;                                             // 0x00D8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              AcceptableRadius;                                         // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAllowStrafe : 1;                                         // 0x00F0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bFinishOnOverlap : 1;                                     // 0x00F0(0x0001)
	unsigned char                                      bUsePathfinding : 1;                                      // 0x00F0(0x0001)
	unsigned char                                      bAllowPartialPath : 1;                                    // 0x00F0(0x0001)
	unsigned char                                      bProjectGoalToNavigation : 1;                             // 0x00F0(0x0001)
	unsigned char                                      bUpdatePathToGoal : 1;                                    // 0x00F0(0x0001)
	unsigned char                                      bAbortChildActionOnPathChange : 1;                        // 0x00F0(0x0001)
	unsigned char                                      UnknownData00[0x2F];                                      // 0x00F1(0x002F) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.AISenseConfig_Blueprint"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.PawnAction_Move"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.AISenseConfig_Damage
// 0x0008 (0x0050 - 0x0048)
class UAISenseConfig_Damage : public UAISenseConfig
{
public:
	class UClass*                                      Implementation;                                           // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData)
=======
// Class AIModule.PawnAction_Repeat
// 0x0020 (0x00F0 - 0x00D0)
class UPawnAction_Repeat : public UPawnAction
{
public:
	class UPawnAction*                                 ActionToRepeat;                                           // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPawnAction*                                 RecentActionCopy;                                         // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EPawnActionFailHandling>               ChildFailureHandlingMode;                                 // 0x00E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x00E1(0x000F) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.AISenseConfig_Damage"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.PawnAction_Repeat"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.AISenseConfig_Hearing
// 0x0018 (0x0060 - 0x0048)
class UAISenseConfig_Hearing : public UAISenseConfig
{
public:
	class UClass*                                      Implementation;                                           // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData)
	float                                              HearingRange;                                             // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LoSHearingRange;                                          // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bUseLoSHearing : 1;                                       // 0x0058(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	struct FAISenseAffiliationFilter                   DetectionByAffiliation;                                   // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, IsPlainOldData)
=======
// Class AIModule.PawnAction_Sequence
// 0x0030 (0x0100 - 0x00D0)
class UPawnAction_Sequence : public UPawnAction
{
public:
	TArray<class UPawnAction*>                         ActionSequence;                                           // 0x00D0(0x0010) (ZeroConstructor)
	TEnumAsByte<EPawnActionFailHandling>               ChildFailureHandlingMode;                                 // 0x00E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00E1(0x0007) MISSED OFFSET
	class UPawnAction*                                 RecentActionCopy;                                         // 0x00E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00F0(0x0010) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.AISenseConfig_Hearing"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.PawnAction_Sequence"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.AISenseConfig_Prediction
// 0x0000 (0x0048 - 0x0048)
class UAISenseConfig_Prediction : public UAISenseConfig
{
public:
=======
// Class AIModule.PawnAction_Wait
// 0x0010 (0x00E0 - 0x00D0)
class UPawnAction_Wait : public UPawnAction
{
public:
	float                                              TimeToWait;                                               // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x00D4(0x000C) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.AISenseConfig_Prediction"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.PawnAction_Wait"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


<<<<<<< HEAD
// Class AIModule.AISenseConfig_Sight
// 0x0020 (0x0068 - 0x0048)
class UAISenseConfig_Sight : public UAISenseConfig
{
public:
	class UClass*                                      Implementation;                                           // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData)
	float                                              SightRadius;                                              // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              LoseSightRadius;                                          // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              PeripheralVisionAngleDegrees;                             // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	struct FAISenseAffiliationFilter                   DetectionByAffiliation;                                   // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoSuccessRangeFromLastSeenLocation;                     // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
=======
// Class AIModule.PawnActionsComponent
// 0x0040 (0x0230 - 0x01F0)
class UPawnActionsComponent : public UActorComponent
{
public:
	class APawn*                                       ControlledPawn;                                           // 0x01F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FPawnActionStack>                    ActionStacks;                                             // 0x01F8(0x0010) (ZeroConstructor)
	TArray<struct FPawnActionEvent>                    ActionEvents;                                             // 0x0208(0x0010) (ZeroConstructor)
	class UPawnAction*                                 CurrentAction;                                            // 0x0218(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0220(0x0010) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.AISenseConfig_Sight"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.PawnActionsComponent"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD
};


// Class AIModule.AISenseConfig_Team
// 0x0000 (0x0048 - 0x0048)
class UAISenseConfig_Team : public UAISenseConfig
{
public:
=======

	bool K2_PushAction(class UPawnAction* NewAction, TEnumAsByte<EAIRequestPriority> Priority, class UObject* Instigator);
	bool STATIC_K2_PerformAction(class APawn* Pawn, class UPawnAction* Action, TEnumAsByte<EAIRequestPriority> Priority);
	TEnumAsByte<EPawnActionAbortState> K2_ForceAbortAction(class UPawnAction* ActionToAbort);
	TEnumAsByte<EPawnActionAbortState> K2_AbortAction(class UPawnAction* ActionToAbort);
};


// Class AIModule.PawnSensingComponent
// 0x0050 (0x0240 - 0x01F0)
class UPawnSensingComponent : public UActorComponent
{
public:
	float                                              HearingThreshold;                                         // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LOSHearingThreshold;                                      // 0x01F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SightRadius;                                              // 0x01F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SensingInterval;                                          // 0x01FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HearingMaxSoundAge;                                       // 0x0200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableSensingUpdates : 1;                                // 0x0204(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bOnlySensePlayers : 1;                                    // 0x0204(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSeePawns : 1;                                            // 0x0204(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bHearNoises : 1;                                          // 0x0204(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0205(0x000B) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSeePawn;                                                // 0x0210(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHearNoise;                                              // 0x0220(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              PeripheralVisionAngle;                                    // 0x0230(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PeripheralVisionCosine;                                   // 0x0234(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0238(0x0008) MISSED OFFSET
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.AISenseConfig_Team"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.PawnSensingComponent"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

<<<<<<< HEAD
};


// Class AIModule.AISenseConfig_Touch
// 0x0000 (0x0048 - 0x0048)
class UAISenseConfig_Touch : public UAISenseConfig
=======

	void SetSensingUpdatesEnabled(bool bEnabled);
	void SetSensingInterval(float NewSensingInterval);
	void SetPeripheralVisionAngle(float NewPeripheralVisionAngle);
	void SeePawnDelegate__DelegateSignature(class APawn* Pawn);
	void HearNoiseDelegate__DelegateSignature(class APawn* Instigator, const struct FVector& Location, float Volume);
	float GetPeripheralVisionCosine();
	float GetPeripheralVisionAngle();
};


// Class AIModule.VisualLoggerExtension
// 0x0000 (0x0028 - 0x0028)
class UVisualLoggerExtension : public UObject
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
<<<<<<< HEAD
			ptr = UObject::FindClass(_xor_("Class AIModule.AISenseConfig_Touch"));
=======
			ptr = UObject::FindClass(_xor_("Class AIModule.VisualLoggerExtension"));
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
