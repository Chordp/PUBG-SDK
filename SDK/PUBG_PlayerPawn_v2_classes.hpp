#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_PlayerPawn_v2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerPawn_v2.PlayerPawn_v2_C
// 0x0150 (0x2650 - 0x2500)
class APlayerPawn_v2_C : public ATslCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2500(0x0008) (Transient, DuplicateTransient)
	class UCapsuleComponent*                           Hit_Prone;                                                // 0x2508(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           Hit_Stand;                                                // 0x2510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTimerHandle                                TestInspectHandle;                                        // 0x2518(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimInstance*                               BaseAnimInstance;                                         // 0x2520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AudioListenerIsSet;                                       // 0x2528(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x2529(0x0003) MISSED OFFSET
	float                                              MinVCut;                                                  // 0x252C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinZVCut;                                                 // 0x2530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DmgFactor;                                                // 0x2534(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VDampingZ;                                                // 0x2538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x253C(0x0004) MISSED OFFSET
	struct FTslItemStringClass                         TestWeaponItemClass;                                      // 0x2540(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTslItemStringClass                         TestAmmoItemClass;                                        // 0x2548(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              MaxJumpZVelocity;                                         // 0x2550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovementAfterJumpCounter;                                 // 0x2554(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinJumpZVelocity;                                         // 0x2558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovementAfterJumpCounterDecrease;                         // 0x255C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxMovementAfterJumpCounter;                              // 0x2560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x2564(0x0004) MISSED OFFSET
	class UCurveVector*                                Curve_TPP2FPP;                                            // 0x2568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                Curve_FPP2TPP;                                            // 0x2570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                Curve_TPP2FPP_Pitch;                                      // 0x2578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                Curve_FPP2TPP_Pitch;                                      // 0x2580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsWeaponShoulderAttached;                                // 0x2588(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x2589(0x0003) MISSED OFFSET
	float                                              ADS_ReadyAngle;                                           // 0x258C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SocketOffset_YZ;                                          // 0x2590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x2594(0x0004) MISSED OFFSET
	class ATslWeapon_Gun*                              ActiveGunRef;                                             // 0x2598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCameraUnderWater;                                        // 0x25A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x25A1(0x0007) MISSED OFFSET
	class ABP_CameraMan_C*                             CameraManRef;                                             // 0x25A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              YawTarget;                                                // 0x25B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              YawStep;                                                  // 0x25B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GameTime;                                                 // 0x25B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x25BC(0x0004) MISSED OFFSET
	class UCameraModifier_CameraShake*                 Shake;                                                    // 0x25C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponCollisionAlpha;                                     // 0x25C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x25CC(0x0004) MISSED OFFSET
	class UW_SprintBar_C*                              SprintBarWidget;                                          // 0x25D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        ImpactMeshRef;                                            // 0x25D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HeavyFallStarted;                                         // 0x25E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PhysicalAnimationInitialized;                             // 0x25E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x6];                                       // 0x25E2(0x0006) MISSED OFFSET
	class AAudioTestActor_C*                           AudioActorRef;                                            // 0x25E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_EjectDamage;                                        // 0x25F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_BulletCamActor_C*                        WeaponBulletCamRef;                                       // 0x25F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UW_WeaponMenu_C*                             WeapMenuRef;                                              // 0x2600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_ActiveRagdollActor_C*                    RagdollActorRef;                                          // 0x2608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RagdollActorPos;                                          // 0x2610(0x000C) (Edit, BlueprintVisible, Net, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x261C(0x0004) MISSED OFFSET
	class UW_RecoilDebugMenu_C*                        RecoilMenuRef;                                            // 0x2620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               DistributedLoadout;                                       // 0x2628(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTslStringClass                             AudioTestClassString;                                     // 0x2638(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UW_AIItemMenu_C*                             aiWeapMenu;                                               // 0x2648(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass PlayerPawn_v2.PlayerPawn_v2_C"));

		return ptr;
	}


	void GetAIController(TArray<class ATslNewBotCharacter*>* Array, class ATslNewBotAIController** AsTsl_New_Bot_AIController);
	void AIWeaponMenuInit();
	void DistributeCurrentLoadout(TArray<struct FName>* InItem);
	void RecoilDebug_ToggleMouse();
	void RecoilDebug_Reset();
	void RecoilDebug_AddDataRow();
	void BlurScopeOutside();
	void Tick_PhysicalAnimation();
	void TEMP_WeapMenu_InitShow(bool ForceClose);
	void FixupThirdPersonCamera(class USceneComponent* AttachComponent);
	void InitBulletCam();
	void ProcessMPC();
	void TestInspectObject();
	void TickSimulatePhysicsForAccessories();
	void LocalMagDrop(const struct FVector& Velocity);
	void ProcessPhysicalAnimation();
	void ProcessLocalOnlyFunctions();
	void TEMPORARY_ProcessSprintBar();
	void InitializePhysicsForAccessories();
	void CheckWeaponCollision();
	void HandleMovementParameters();
	void CheckCameraUnderwater();
	void SetInertia();
	void ScopingSocketOffsetMoving();
	void AdjustCameraSwitching();
	void CheckForScoping();
	void push(const struct FVector& Delta_Location);
	void UserConstructionScript();
	void InpActEvt_NumPadZero_K2Node_InputKeyEvent(const struct FKey& Key);
	void InpActEvt_Multiply_K2Node_InputKeyEvent(const struct FKey& Key);
	void InpActEvt_NumPadSix_K2Node_InputKeyEvent(const struct FKey& Key);
	void InpActEvt_NumPadFour_K2Node_InputKeyEvent(const struct FKey& Key);
	void InpActEvt_NumPadOne_K2Node_InputKeyEvent(const struct FKey& Key);
	void InpActEvt_Add_K2Node_InputKeyEvent(const struct FKey& Key);
	void InpActEvt_Subtract_K2Node_InputKeyEvent(const struct FKey& Key);
	void InpActEvt_NumPadThree_K2Node_InputKeyEvent(const struct FKey& Key);
	void InpActEvt_NumPadSeven_K2Node_InputKeyEvent(const struct FKey& Key);
	void InpActEvt_NumPadNine_K2Node_InputKeyEvent(const struct FKey& Key);
	void InpActEvt_NumPadEight_K2Node_InputKeyEvent(const struct FKey& Key);
	void InpActEvt_NumPadTwo_K2Node_InputKeyEvent(const struct FKey& Key);
	void InpActEvt_NumPadFive_K2Node_InputKeyEvent(const struct FKey& Key);
	void InpActEvt_Decimal_K2Node_InputKeyEvent(const struct FKey& Key);
	void InpActEvt_Divide_K2Node_InputKeyEvent(const struct FKey& Key);
	void InpActEvt_Comma_K2Node_InputKeyEvent(const struct FKey& Key);
	void InpActEvt_Period_K2Node_InputKeyEvent(const struct FKey& Key);
	void InpActEvt_Semicolon_K2Node_InputKeyEvent(const struct FKey& Key);
	void OnTest_InspectObject();
	void OnIncreaseMaxFlyAccerleration();
	void OnDecreaseMaxFlyAccerleration();
	void ToggleInvincibility();
	void ToggleFreeMode();
	void Client_AdjustFlySpeed(float MaxSpeed, float MaxAccel, float Deccel);
	void OnInvulnerable();
	void OnTest_SetupWeapon();
	void OnFreeMoveMode();
	void ReceiveBeginPlay();
	void ServerSetInvulnerability();
	void SetupWeaponBlueprint();
	void SpawnBulletPassByEffect(const struct FVector& Location, float BulletVelocity);
	void ServerFreeMove();
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void NotHaveHealItemNotifyMessage(const struct FText& ItemName);
	void NotHaveBoostItemNotifyMessage();
	void ActivateADS_Debuff();
	void Cheat_GiveItem(const struct FName& ItemRef);
	void Cheat_Server_GiveItem(const struct FName& ItemRef);
	void Cheat_Give_Current_Ammo();
	void Cheat_RevivePlayer();
	void NotHaveThrowItemNotifyMessage(const struct FText& ItemName);
	void Server_SetActiveRagdoll(bool InActivate);
	void ServerSetupWeapon();
	void Client_ResetMesh();
	void Server_HandleRagdollActor(bool bSpawn);
	void SimulateHeadShot(const struct FTransform& SpawnTransform, const struct FTransform& ImpactTransform);
	void OnLanded(const struct FHitResult& Hit);
	void Server_setRagdollActorPos(const struct FVector& InPos);
	void HaveNotAnyHealItemNotifyMessage();
	void RemoveCrosshair();
	void OnWeaponChanged();
	void OnShowDynamicCrosshair(bool bShow);
	void OnTakeAnyDamage_Event(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void OnCharacterWeaponRecoil_Event();
	void GiveShieldToPlayer_BP();
	void Server_AttachShield();
	void Cheat_Server_Distribute_Loadout(TArray<struct FName> ItemRef);
	void Server_GiveAIItem(const struct FName& ItemID, TArray<class ATslNewBotCharacter*> aiCharacter);
	void Server_UseMedItem(TArray<class ATslNewBotCharacter*> aiCharacter, ECastableItemType ItemType);
	void ExecuteUbergraph_PlayerPawn_v2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
