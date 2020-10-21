#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_DefaultRifleSetting_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TslGame.TslWeapon_Trajectory.SimulateUnderwaterTrail
struct ADefaultRifleSetting_C_SimulateUnderwaterTrail_Params
{
	struct FVector                                     SurfaceImpactPoint;                                       // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ShootDirection;                                           // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	float                                              TravelDistance;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.SimulateUnderwaterHit
struct ADefaultRifleSetting_C_SimulateUnderwaterHit_Params
{
	struct FVector                                     UnderwaterImpactPoint;                                    // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ShootOrigin;                                              // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.SimulateHit_UnReliable_AI
struct ADefaultRifleSetting_C_SimulateHit_UnReliable_AI_Params
{
	struct FHitResult                                  Impact;                                                   // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     RelLocation;                                              // (ConstParm, Parm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.SimulateHit_UnReliable
struct ADefaultRifleSetting_C_SimulateHit_UnReliable_Params
{
	struct FHitResult                                  Impact;                                                   // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     RelLocation;                                              // (ConstParm, Parm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.SimulateHit_Reliable_AI
struct ADefaultRifleSetting_C_SimulateHit_Reliable_AI_Params
{
	struct FHitResult                                  Impact;                                                   // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     RelLocation;                                              // (ConstParm, Parm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.SimulateHit_Reliable
struct ADefaultRifleSetting_C_SimulateHit_Reliable_Params
{
	struct FHitResult                                  Impact;                                                   // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     RelLocation;                                              // (ConstParm, Parm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.Simulate_CreateAmmoInstance
struct ADefaultRifleSetting_C_Simulate_CreateAmmoInstance_Params
{
	struct FVector                                     ServerStartTrace;                                         // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Dir;                                                      // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FAttackId                                   AttackId;                                                 // (ConstParm, Parm, ReferenceParm)
};

// Function TslGame.TslWeapon_Trajectory.SetCurrentRecoilValue
struct ADefaultRifleSetting_C_SetCurrentRecoilValue_Params
{
	float                                              InCurrent_RecoilValue;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.SetCurrentBullet
struct ADefaultRifleSetting_C_SetCurrentBullet_Params
{
	int                                                InCurrent_Bullet;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.ServerWallCheckTest
struct ADefaultRifleSetting_C_ServerWallCheckTest_Params
{
	struct FVector                                     TraceStart;                                               // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     TraceEnd;                                                 // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.ServerTestBallistics
struct ADefaultRifleSetting_C_ServerTestBallistics_Params
{
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     OriginDir;                                                // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.ServerNotifyShoot_AI
struct ADefaultRifleSetting_C_ServerNotifyShoot_AI_Params
{
	class ATslCharacter*                               TargetCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.ServerNotifyHit
struct ADefaultRifleSetting_C_ServerNotifyHit_Params
{
	TArray<int>                                        Ints2;                                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	struct FVector                                     vd;                                                       // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	float                                              t1;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           uintr;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              t2;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           uinta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           uintp;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           uintb;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              L3;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              L4;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CR_P;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CR_Y;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        Ints;                                                     // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	unsigned char                                      h0;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           h1;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                h2;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      uint1;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                chksum1;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                checksum_CD;                                              // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     SI;                                                       // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     L1;                                                       // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     L2;                                                       // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	int                                                LC;                                                       // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	uint16_t                                           Segment;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Dir0;                                                     // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	unsigned char                                      bUnder;                                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     E1;                                                       // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	float                                              S1;                                                       // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ClientImpactLocation;                                     // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     RelativeImpact;                                           // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FHitResult                                  ImpactFromClient;                                         // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	TArray<int>                                        Ints3;                                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	struct FVector                                     ClientOrigin;                                             // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     TraceStart;                                               // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   ShootDir;                                                 // (Parm)
	float                                              TravelDistance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TT;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAttackId                                   AttackId;                                                 // (Parm)
	uint32_t                                           HitSeq;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelLocation;                                              // (ConstParm, Parm, IsPlainOldData)
	float                                              SpeedLoss;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OD;                                                       // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	float                                              ts;                                                       // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     IV;                                                       // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     BaseMoveDelta;                                            // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	float                                              InDevMultiplier;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InRecY;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InCachedY;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWasPenetration;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSocket;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.ServerNotifyCrack
struct ADefaultRifleSetting_C_ServerNotifyCrack_Params
{
	class ATslCharacter*                               TargetCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize                         LocationRelative;                                         // (Parm)
	float                                              BulletVelocity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.ServerNotifyAmmoSpawned
struct ADefaultRifleSetting_C_ServerNotifyAmmoSpawned_Params
{
	struct FVector                                     ServerStartTrace;                                         // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Dir;                                                      // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FAttackId                                   AttackId;                                                 // (ConstParm, Parm, ReferenceParm)
};

// Function TslGame.TslWeapon_Trajectory.ServerLogBodyPenetration
struct ADefaultRifleSetting_C_ServerLogBodyPenetration_Params
{
	int                                                AttackId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       DamageZone;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamageDiff;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.OnWorldOriginShifted
struct ADefaultRifleSetting_C_OnWorldOriginShifted_Params
{
	struct FVector                                     InShiftVector;                                            // (ConstParm, Parm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.OnRep_WeaponSpread
struct ADefaultRifleSetting_C_OnRep_WeaponSpread_Params
{
	float                                              LastWeaponSpread;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.IsRecoilDebugEnabled_BP
struct ADefaultRifleSetting_C_IsRecoilDebugEnabled_BP_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.IsBulletInAir
struct ADefaultRifleSetting_C_IsBulletInAir_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.GetWeaponTrajectoryData
struct ADefaultRifleSetting_C_GetWeaponTrajectoryData_Params
{
	class UWeaponTrajectoryData*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.GetWeaponTrajectoryConfig
struct ADefaultRifleSetting_C_GetWeaponTrajectoryConfig_Params
{
	struct FWeaponTrajectoryConfig                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function TslGame.TslWeapon_Trajectory.GetTrajectoryConfig
struct ADefaultRifleSetting_C_GetTrajectoryConfig_Params
{
	struct FTrajectoryWeaponData                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.TslWeapon_Trajectory.GetStanceSwayModifier
struct ADefaultRifleSetting_C_GetStanceSwayModifier_Params
{
	EAnimStance                                        Stance;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.GetRecoilStartTime
struct ADefaultRifleSetting_C_GetRecoilStartTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.GetRecoilDebugInfo
struct ADefaultRifleSetting_C_GetRecoilDebugInfo_Params
{
	struct FRecoilDebugInfo                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TslGame.TslWeapon_Trajectory.GetRecoilDebugCurrentBullet
struct ADefaultRifleSetting_C_GetRecoilDebugCurrentBullet_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.GetRecoilConfig
struct ADefaultRifleSetting_C_GetRecoilConfig_Params
{
	struct FWeaponRecoilConfig                         ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function TslGame.TslWeapon_Trajectory.GetRecoilBlendInTime
struct ADefaultRifleSetting_C_GetRecoilBlendInTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.GetInertiaPitchAdditive
struct ADefaultRifleSetting_C_GetInertiaPitchAdditive_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.GetCurrentStabilityVar
struct ADefaultRifleSetting_C_GetCurrentStabilityVar_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.GetCurrentReoveryTarget
struct ADefaultRifleSetting_C_GetCurrentReoveryTarget_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.GetCurrentRecoilValue
struct ADefaultRifleSetting_C_GetCurrentRecoilValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.GetCurrentRecoilTarget
struct ADefaultRifleSetting_C_GetCurrentRecoilTarget_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.GetBulletRotation
struct ADefaultRifleSetting_C_GetBulletRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.GetBulletLocation
struct ADefaultRifleSetting_C_GetBulletLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.ClientWallCheckFail
struct ADefaultRifleSetting_C_ClientWallCheckFail_Params
{
	struct FVector                                     TraceStart;                                               // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     TraceEnd;                                                 // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Impact;                                                   // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
