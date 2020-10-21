#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_PlayerPawn_v2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PlayerPawn_v2.PlayerPawn_v2_C.GetAIController
struct APlayerPawn_v2_C_GetAIController_Params
{
	TArray<class ATslNewBotCharacter*>                 Array;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ATslNewBotAIController*                      AsTsl_New_Bot_AIController;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.AIWeaponMenuInit
struct APlayerPawn_v2_C_AIWeaponMenuInit_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.DistributeCurrentLoadout
struct APlayerPawn_v2_C_DistributeCurrentLoadout_Params
{
	TArray<struct FName>                               InItem;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.RecoilDebug_ToggleMouse
struct APlayerPawn_v2_C_RecoilDebug_ToggleMouse_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.RecoilDebug_Reset
struct APlayerPawn_v2_C_RecoilDebug_Reset_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.RecoilDebug_AddDataRow
struct APlayerPawn_v2_C_RecoilDebug_AddDataRow_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.BlurScopeOutside
struct APlayerPawn_v2_C_BlurScopeOutside_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.Tick_PhysicalAnimation
struct APlayerPawn_v2_C_Tick_PhysicalAnimation_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.TEMP_WeapMenu_InitShow
struct APlayerPawn_v2_C_TEMP_WeapMenu_InitShow_Params
{
	bool                                               ForceClose;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.FixupThirdPersonCamera
struct APlayerPawn_v2_C_FixupThirdPersonCamera_Params
{
	class USceneComponent*                             AttachComponent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InitBulletCam
struct APlayerPawn_v2_C_InitBulletCam_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessMPC
struct APlayerPawn_v2_C_ProcessMPC_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.TestInspectObject
struct APlayerPawn_v2_C_TestInspectObject_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.TickSimulatePhysicsForAccessories
struct APlayerPawn_v2_C_TickSimulatePhysicsForAccessories_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.LocalMagDrop
struct APlayerPawn_v2_C_LocalMagDrop_Params
{
	struct FVector                                     Velocity;                                                 // (Parm, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessPhysicalAnimation
struct APlayerPawn_v2_C_ProcessPhysicalAnimation_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ProcessLocalOnlyFunctions
struct APlayerPawn_v2_C_ProcessLocalOnlyFunctions_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.TEMPORARY_ProcessSprintBar
struct APlayerPawn_v2_C_TEMPORARY_ProcessSprintBar_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InitializePhysicsForAccessories
struct APlayerPawn_v2_C_InitializePhysicsForAccessories_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.CheckWeaponCollision
struct APlayerPawn_v2_C_CheckWeaponCollision_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.HandleMovementParameters
struct APlayerPawn_v2_C_HandleMovementParameters_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.CheckCameraUnderwater
struct APlayerPawn_v2_C_CheckCameraUnderwater_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.SetInertia
struct APlayerPawn_v2_C_SetInertia_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ScopingSocketOffsetMoving
struct APlayerPawn_v2_C_ScopingSocketOffsetMoving_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.AdjustCameraSwitching
struct APlayerPawn_v2_C_AdjustCameraSwitching_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.CheckForScoping
struct APlayerPawn_v2_C_CheckForScoping_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.push
struct APlayerPawn_v2_C_push_Params
{
	struct FVector                                     Delta_Location;                                           // (Parm, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.UserConstructionScript
struct APlayerPawn_v2_C_UserConstructionScript_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadZero_K2Node_InputKeyEvent
struct APlayerPawn_v2_C_InpActEvt_NumPadZero_K2Node_InputKeyEvent_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Multiply_K2Node_InputKeyEvent
struct APlayerPawn_v2_C_InpActEvt_Multiply_K2Node_InputKeyEvent_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadSix_K2Node_InputKeyEvent
struct APlayerPawn_v2_C_InpActEvt_NumPadSix_K2Node_InputKeyEvent_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadFour_K2Node_InputKeyEvent
struct APlayerPawn_v2_C_InpActEvt_NumPadFour_K2Node_InputKeyEvent_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadOne_K2Node_InputKeyEvent
struct APlayerPawn_v2_C_InpActEvt_NumPadOne_K2Node_InputKeyEvent_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Add_K2Node_InputKeyEvent
struct APlayerPawn_v2_C_InpActEvt_Add_K2Node_InputKeyEvent_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Subtract_K2Node_InputKeyEvent
struct APlayerPawn_v2_C_InpActEvt_Subtract_K2Node_InputKeyEvent_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadThree_K2Node_InputKeyEvent
struct APlayerPawn_v2_C_InpActEvt_NumPadThree_K2Node_InputKeyEvent_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadSeven_K2Node_InputKeyEvent
struct APlayerPawn_v2_C_InpActEvt_NumPadSeven_K2Node_InputKeyEvent_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadNine_K2Node_InputKeyEvent
struct APlayerPawn_v2_C_InpActEvt_NumPadNine_K2Node_InputKeyEvent_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadEight_K2Node_InputKeyEvent
struct APlayerPawn_v2_C_InpActEvt_NumPadEight_K2Node_InputKeyEvent_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadTwo_K2Node_InputKeyEvent
struct APlayerPawn_v2_C_InpActEvt_NumPadTwo_K2Node_InputKeyEvent_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_NumPadFive_K2Node_InputKeyEvent
struct APlayerPawn_v2_C_InpActEvt_NumPadFive_K2Node_InputKeyEvent_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Decimal_K2Node_InputKeyEvent
struct APlayerPawn_v2_C_InpActEvt_Decimal_K2Node_InputKeyEvent_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Divide_K2Node_InputKeyEvent
struct APlayerPawn_v2_C_InpActEvt_Divide_K2Node_InputKeyEvent_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Comma_K2Node_InputKeyEvent
struct APlayerPawn_v2_C_InpActEvt_Comma_K2Node_InputKeyEvent_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Period_K2Node_InputKeyEvent
struct APlayerPawn_v2_C_InpActEvt_Period_K2Node_InputKeyEvent_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.InpActEvt_Semicolon_K2Node_InputKeyEvent
struct APlayerPawn_v2_C_InpActEvt_Semicolon_K2Node_InputKeyEvent_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.OnTest_InspectObject
struct APlayerPawn_v2_C_OnTest_InspectObject_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.OnIncreaseMaxFlyAccerleration
struct APlayerPawn_v2_C_OnIncreaseMaxFlyAccerleration_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.OnDecreaseMaxFlyAccerleration
struct APlayerPawn_v2_C_OnDecreaseMaxFlyAccerleration_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ToggleInvincibility
struct APlayerPawn_v2_C_ToggleInvincibility_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ToggleFreeMode
struct APlayerPawn_v2_C_ToggleFreeMode_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.Client_AdjustFlySpeed
struct APlayerPawn_v2_C_Client_AdjustFlySpeed_Params
{
	float                                              MaxSpeed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxAccel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Deccel;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.OnInvulnerable
struct APlayerPawn_v2_C_OnInvulnerable_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.OnTest_SetupWeapon
struct APlayerPawn_v2_C_OnTest_SetupWeapon_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.OnFreeMoveMode
struct APlayerPawn_v2_C_OnFreeMoveMode_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ReceiveBeginPlay
struct APlayerPawn_v2_C_ReceiveBeginPlay_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ServerSetInvulnerability
struct APlayerPawn_v2_C_ServerSetInvulnerability_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.SetupWeaponBlueprint
struct APlayerPawn_v2_C_SetupWeaponBlueprint_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.SpawnBulletPassByEffect
struct APlayerPawn_v2_C_SpawnBulletPassByEffect_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	float                                              BulletVelocity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ServerFreeMove
struct APlayerPawn_v2_C_ServerFreeMove_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct APlayerPawn_v2_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.NotHaveHealItemNotifyMessage
struct APlayerPawn_v2_C_NotHaveHealItemNotifyMessage_Params
{
	struct FText                                       ItemName;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.NotHaveBoostItemNotifyMessage
struct APlayerPawn_v2_C_NotHaveBoostItemNotifyMessage_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ActivateADS_Debuff
struct APlayerPawn_v2_C_ActivateADS_Debuff_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_GiveItem
struct APlayerPawn_v2_C_Cheat_GiveItem_Params
{
	struct FName                                       ItemRef;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_Server_GiveItem
struct APlayerPawn_v2_C_Cheat_Server_GiveItem_Params
{
	struct FName                                       ItemRef;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_Give_Current_Ammo
struct APlayerPawn_v2_C_Cheat_Give_Current_Ammo_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_RevivePlayer
struct APlayerPawn_v2_C_Cheat_RevivePlayer_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.NotHaveThrowItemNotifyMessage
struct APlayerPawn_v2_C_NotHaveThrowItemNotifyMessage_Params
{
	struct FText                                       ItemName;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.Server_SetActiveRagdoll
struct APlayerPawn_v2_C_Server_SetActiveRagdoll_Params
{
	bool                                               InActivate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ServerSetupWeapon
struct APlayerPawn_v2_C_ServerSetupWeapon_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.Client_ResetMesh
struct APlayerPawn_v2_C_Client_ResetMesh_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.Server_HandleRagdollActor
struct APlayerPawn_v2_C_Server_HandleRagdollActor_Params
{
	bool                                               bSpawn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.SimulateHeadShot
struct APlayerPawn_v2_C_SimulateHeadShot_Params
{
	struct FTransform                                  SpawnTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTransform                                  ImpactTransform;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.OnLanded
struct APlayerPawn_v2_C_OnLanded_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.Server_setRagdollActorPos
struct APlayerPawn_v2_C_Server_setRagdollActorPos_Params
{
	struct FVector                                     InPos;                                                    // (Parm, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.HaveNotAnyHealItemNotifyMessage
struct APlayerPawn_v2_C_HaveNotAnyHealItemNotifyMessage_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.RemoveCrosshair
struct APlayerPawn_v2_C_RemoveCrosshair_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.OnWeaponChanged
struct APlayerPawn_v2_C_OnWeaponChanged_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.OnShowDynamicCrosshair
struct APlayerPawn_v2_C_OnShowDynamicCrosshair_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.OnTakeAnyDamage_Event
struct APlayerPawn_v2_C_OnTakeAnyDamage_Event_Params
{
	class AActor*                                      DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.OnCharacterWeaponRecoil_Event
struct APlayerPawn_v2_C_OnCharacterWeaponRecoil_Event_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.GiveShieldToPlayer_BP
struct APlayerPawn_v2_C_GiveShieldToPlayer_BP_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.Server_AttachShield
struct APlayerPawn_v2_C_Server_AttachShield_Params
{
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.Cheat_Server_Distribute_Loadout
struct APlayerPawn_v2_C_Cheat_Server_Distribute_Loadout_Params
{
	TArray<struct FName>                               ItemRef;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.Server_GiveAIItem
struct APlayerPawn_v2_C_Server_GiveAIItem_Params
{
	struct FName                                       ItemID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ATslNewBotCharacter*>                 aiCharacter;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.Server_UseMedItem
struct APlayerPawn_v2_C_Server_UseMedItem_Params
{
	TArray<class ATslNewBotCharacter*>                 aiCharacter;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	ECastableItemType                                  ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_v2.PlayerPawn_v2_C.ExecuteUbergraph_PlayerPawn_v2
struct APlayerPawn_v2_C_ExecuteUbergraph_PlayerPawn_v2_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
