#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_PhysXVehicles_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

<<<<<<< HEAD
=======
// Function PhysXVehicles.VehicleAnimInstance.GetVehicle
struct UVehicleAnimInstance_GetVehicle_Params
{
	class AWheeledVehicle*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
// Function PhysXVehicles.VehicleWheel.IsInAir
struct UVehicleWheel_IsInAir_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhysXVehicles.VehicleWheel.GetSuspensionOffset
struct UVehicleWheel_GetSuspensionOffset_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhysXVehicles.VehicleWheel.GetSteerAngle
struct UVehicleWheel_GetSteerAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhysXVehicles.VehicleWheel.GetRotationAngle
struct UVehicleWheel_GetRotationAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhysXVehicles.VehicleWheel.GetLongitudinalSlip
struct UVehicleWheel_GetLongitudinalSlip_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhysXVehicles.VehicleWheel.GetLateralSlip
struct UVehicleWheel_GetLateralSlip_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears
struct UWheeledVehicleMovementComponent_SetUseAutoGears_Params
{
<<<<<<< HEAD
	bool*                                              bUseAuto;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
=======
	bool                                               bUseAuto;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput
struct UWheeledVehicleMovementComponent_SetThrottleInput_Params
{
<<<<<<< HEAD
	float*                                             Throttle;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
=======
	float                                              Throttle;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear
struct UWheeledVehicleMovementComponent_SetTargetGear_Params
{
<<<<<<< HEAD
	int*                                               GearNum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bImmediate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                GearNum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bImmediate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput
struct UWheeledVehicleMovementComponent_SetSteeringInput_Params
{
<<<<<<< HEAD
	float*                                             Steering;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
=======
	float                                              Steering;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput
struct UWheeledVehicleMovementComponent_SetHandbrakeInput_Params
{
<<<<<<< HEAD
	bool*                                              bNewHandbrake;                                            // (Parm, ZeroConstructor, IsPlainOldData)
=======
	bool                                               bNewHandbrake;                                            // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask
struct UWheeledVehicleMovementComponent_SetGroupsToIgnoreMask_Params
{
<<<<<<< HEAD
	struct FNavAvoidanceMask*                          GroupMask;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
=======
	struct FNavAvoidanceMask                           GroupMask;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore
struct UWheeledVehicleMovementComponent_SetGroupsToIgnore_Params
{
<<<<<<< HEAD
	int*                                               GroupFlags;                                               // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                GroupFlags;                                               // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask
struct UWheeledVehicleMovementComponent_SetGroupsToAvoidMask_Params
{
<<<<<<< HEAD
	struct FNavAvoidanceMask*                          GroupMask;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
=======
	struct FNavAvoidanceMask                           GroupMask;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid
struct UWheeledVehicleMovementComponent_SetGroupsToAvoid_Params
{
<<<<<<< HEAD
	int*                                               GroupFlags;                                               // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                GroupFlags;                                               // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp
struct UWheeledVehicleMovementComponent_SetGearUp_Params
{
<<<<<<< HEAD
	bool*                                              bNewGearUp;                                               // (Parm, ZeroConstructor, IsPlainOldData)
=======
	bool                                               bNewGearUp;                                               // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown
struct UWheeledVehicleMovementComponent_SetGearDown_Params
{
<<<<<<< HEAD
	bool*                                              bNewGearDown;                                             // (Parm, ZeroConstructor, IsPlainOldData)
=======
	bool                                               bNewGearDown;                                             // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput
struct UWheeledVehicleMovementComponent_SetBrakeInput_Params
{
<<<<<<< HEAD
	float*                                             Brake;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
=======
	float                                              Brake;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask
struct UWheeledVehicleMovementComponent_SetAvoidanceGroupMask_Params
{
<<<<<<< HEAD
	struct FNavAvoidanceMask*                          GroupMask;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
=======
	struct FNavAvoidanceMask                           GroupMask;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup
struct UWheeledVehicleMovementComponent_SetAvoidanceGroup_Params
{
<<<<<<< HEAD
	int*                                               GroupFlags;                                               // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                GroupFlags;                                               // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled
struct UWheeledVehicleMovementComponent_SetAvoidanceEnabled_Params
{
<<<<<<< HEAD
	bool*                                              bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
=======
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState
struct UWheeledVehicleMovementComponent_ServerUpdateState_Params
{
<<<<<<< HEAD
	float*                                             InSteeringInput;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InThrottleInput;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InBrakeInput;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InHandbrakeInput;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               CurrentGear;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t*                                          Checksum;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
=======
	float                                              InSteeringInput;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InThrottleInput;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InBrakeInput;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InHandbrakeInput;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentGear;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           Checksum;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.OnRep_TirePunctured
struct UWheeledVehicleMovementComponent_OnRep_TirePunctured_Params
{
<<<<<<< HEAD
	TArray<bool>*                                      LastTirePunctured;                                        // (Parm, ZeroConstructor)
=======
	TArray<bool>                                       LastTirePunctured;                                        // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears
struct UWheeledVehicleMovementComponent_GetUseAutoGears_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear
struct UWheeledVehicleMovementComponent_GetTargetGear_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.GetSideSpeed
struct UWheeledVehicleMovementComponent_GetSideSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed
struct UWheeledVehicleMovementComponent_GetForwardSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed
struct UWheeledVehicleMovementComponent_GetEngineRotationSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed
struct UWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear
struct UWheeledVehicleMovementComponent_GetCurrentGear_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

<<<<<<< HEAD
// Function PhysXVehicles.VehicleAnimInstance.GetVehicle
struct UVehicleAnimInstance_GetVehicle_Params
{
	class AWheeledVehicle*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetSteerAngle
struct USimpleWheeledVehicleMovementComponent_SetSteerAngle_Params
{
	float*                                             SteerAngle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
=======
// Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetSteerAngle
struct USimpleWheeledVehicleMovementComponent_SetSteerAngle_Params
{
	float                                              SteerAngle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetDriveTorque
struct USimpleWheeledVehicleMovementComponent_SetDriveTorque_Params
{
<<<<<<< HEAD
	float*                                             DriveTorque;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
=======
	float                                              DriveTorque;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetBrakeTorque
struct USimpleWheeledVehicleMovementComponent_SetBrakeTorque_Params
{
<<<<<<< HEAD
	float*                                             BrakeTorque;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
=======
	float                                              BrakeTorque;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
