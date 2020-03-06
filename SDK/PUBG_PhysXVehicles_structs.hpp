#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Basic.hpp"
#include "PUBG_Engine_classes.hpp"
#include "PUBG_CoreUObject_classes.hpp"
#include "PUBG_AnimGraphRuntime_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum PhysXVehicles.EVehicleDifferential4W
enum class EVehicleDifferential4W : uint8_t
{
	LimitedSlip_4W                 = 0,
	LimitedSlip_FrontDrive         = 1,
	LimitedSlip_RearDrive          = 2,
	Open_4W                        = 3,
	Open_FrontDrive                = 4,
	Open_RearDrive                 = 5,
	EVehicleDifferential4W_MAX     = 6
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PhysXVehicles.WheelDetailedConfig
// 0x0014
struct FWheelDetailedConfig
{
	float                                              CamberAtRest;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CamberAtMaxCompression;                                   // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CamberAtMaxDroop;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ToeAngle;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MOIOverride;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct PhysXVehicles.WheelSetup
// 0x0030
struct FWheelSetup
{
	class UClass*                                      WheelClass;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      PuncturedWheelClass;                                      // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DefaultWheelClass;                                        // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AdditionalOffset;                                         // 0x0020(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct PhysXVehicles.VehicleAntiRollbarSetup
// 0x000C
struct FVehicleAntiRollbarSetup
{
	uint32_t                                           Wheel0;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           Wheel1;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Stiffness;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PhysXVehicles.ReplicatedVehicleState
// 0x0014
struct FReplicatedVehicleState
{
	float                                              SteeringInput;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ThrottleInput;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BrakeInput;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HandbrakeInput;                                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CurrentGear;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PhysXVehicles.VehicleInputRate
// 0x0008
struct FVehicleInputRate
{
	float                                              RiseRate;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FallRate;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PhysXVehicles.VehicleEngineData
// 0x0090
struct FVehicleEngineData
{
	struct FRuntimeFloatCurve                          TorqueCurve;                                              // 0x0000(0x0078) (Edit)
	float                                              MaxRPM;                                                   // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MOI;                                                      // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DampingRateFullThrottle;                                  // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DampingRateZeroThrottleClutchEngaged;                     // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DampingRateZeroThrottleClutchDisengaged;                  // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
};

// ScriptStruct PhysXVehicles.VehicleDifferential4WData
// 0x001C
struct FVehicleDifferential4WData
{
	TEnumAsByte<EVehicleDifferential4W>                DifferentialType;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              FrontRearSplit;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FrontLeftRightSplit;                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RearLeftRightSplit;                                       // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CentreBias;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FrontBias;                                                // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RearBias;                                                 // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PhysXVehicles.VehicleGearData
// 0x000C
struct FVehicleGearData
{
	float                                              Ratio;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DownRatio;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UpRatio;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PhysXVehicles.VehicleTransmissionData
// 0x0030
struct FVehicleTransmissionData
{
	bool                                               bUseGearAutoBox;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              GearSwitchTime;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GearAutoBoxLatency;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FinalRatio;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FVehicleGearData>                    ForwardGears;                                             // 0x0010(0x0010) (Edit, ZeroConstructor)
	float                                              ReverseGearRatio;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NeutralGearUpRatio;                                       // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ClutchStrength;                                           // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct PhysXVehicles.TireConfigMaterialFriction
// 0x0010
struct FTireConfigMaterialFriction
{
	class UPhysicalMaterial*                           PhysicalMaterial;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FrictionScale;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct PhysXVehicles.TireConfigFrictionVsSlipGraph
// 0x0028
struct FTireConfigFrictionVsSlipGraph
{
	bool                                               bOverrideDefaultFrictionVsSlipGraph;                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FVector2D>                           FrictionSlipDatas;                                        // 0x0008(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct PhysXVehicles.VehicleAnimInstanceProxy
// 0x0020 (0x0530 - 0x0510)
struct FVehicleAnimInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0510(0x0020) MISSED OFFSET
};

// ScriptStruct PhysXVehicles.PhysXWheelState
// 0x0048
struct FPhysXWheelState
{
	float                                              LongitudinalSlip;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LateralSlip;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SuspSpringForce;                                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TireFriction;                                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bInAir;                                                   // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              RotationSpeed;                                            // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UPhysicalMaterial*                           PhysicalMaterial;                                         // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              SuspJounce;                                               // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LatDir;                                                   // 0x002C(0x000C) (IsPlainOldData)
	struct FVector                                     LongDir;                                                  // 0x0038(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct PhysXVehicles.AnimNode_WheelHandler
// 0x0018 (0x0110 - 0x00F8)
struct FAnimNode_WheelHandler : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x00F8(0x0018) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
