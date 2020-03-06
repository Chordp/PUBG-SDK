#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_PhysXVehicles_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PhysXVehicles.VehicleAnimInstance
// 0x0568 (0x0900 - 0x0398)
class UVehicleAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x548];                                     // 0x0398(0x0548) MISSED OFFSET
	class UWheeledVehicleMovementComponent*            WheeledVehicleMovementComponent;                          // 0x08E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	bool                                               bUseSupsensionInterpolation;                              // 0x08E8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x08E9(0x0003) MISSED OFFSET
	float                                              VehicleSuspensionInterpSpeed_ContactUpwards;              // 0x08EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VehicleSuspensionInterpSpeed_Contact;                     // 0x08F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VehicleSuspensionInterpSpeed_NoContact;                   // 0x08F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x08F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class PhysXVehicles.VehicleAnimInstance"));

		return ptr;
	}


	class AWheeledVehicle* GetVehicle();
};


// Class PhysXVehicles.WheeledVehicle
// 0x0010 (0x0478 - 0x0468)
class AWheeledVehicle : public APawn
{
public:
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x0468(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UWheeledVehicleMovementComponent*            VehicleMovement;                                          // 0x0470(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class PhysXVehicles.WheeledVehicle"));

		return ptr;
	}

};


// Class PhysXVehicles.VehicleWheel
// 0x0100 (0x0128 - 0x0028)
class UVehicleWheel : public UObject
{
public:
	class UStaticMesh*                                 CollisionMesh;                                            // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDontCreateShape;                                         // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutoAdjustCollisionSize;                                 // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	struct FVector                                     Offset;                                                   // 0x0034(0x000C) (Edit, IsPlainOldData)
	float                                              ShapeRadius;                                              // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShapeWidth;                                               // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Mass;                                                     // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DampingRate;                                              // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SteerAngle;                                               // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAffectedByHandbrake;                                     // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	class UTireType*                                   TireType;                                                 // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTireConfig*                                 TireConfig;                                               // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LatStiffMaxLoad;                                          // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LatStiffValue;                                            // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LongStiffValue;                                           // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SuspensionForceOffset;                                    // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SuspensionForceOffsetX;                                   // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SuspensionTravelDir;                                      // 0x007C(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     TireForceOffset;                                          // 0x0088(0x000C) (Edit, IsPlainOldData)
	float                                              SuspensionMaxRaise;                                       // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SuspensionMaxDrop;                                        // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SuspensionNaturalFrequency;                               // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SuspensionDampingRatio;                                   // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DampenerBoundScale;                                       // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DampenerReboundScale;                                     // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FWheelDetailedConfig                        WheelDetailedConfig;                                      // 0x00AC(0x0014) (Edit)
	float                                              MaxBrakeTorque;                                           // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxHandBrakeTorque;                                       // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     QueryChannel;                                             // 0x00C8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET
	class UWheeledVehicleMovementComponent*            VehicleSim;                                               // 0x00D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	int                                                WheelIndex;                                               // 0x00D8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DebugLongSlip;                                            // 0x00DC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DebugLatSlip;                                             // 0x00E0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DebugNormalizedTireLoad;                                  // 0x00E4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00E8(0x0004) MISSED OFFSET
	float                                              DebugWheelTorque;                                         // 0x00EC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DebugLongForce;                                           // 0x00F0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DebugLatForce;                                            // 0x00F4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x00F8(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     OldLocation;                                              // 0x0104(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0110(0x000C) (Transient, IsPlainOldData)
	float                                              RealWheelRotationSpeed;                                   // 0x011C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0120(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class PhysXVehicles.VehicleWheel"));

		return ptr;
	}


	bool IsInAir();
	float GetSuspensionOffset();
	float GetSteerAngle();
	float GetRotationAngle();
	float GetLongitudinalSlip();
	float GetLateralSlip();
};


// Class PhysXVehicles.WheeledVehicleMovementComponent
// 0x0190 (0x0410 - 0x0280)
class UWheeledVehicleMovementComponent : public UPawnMovementComponent
{
public:
	unsigned char                                      bDeprecatedSpringOffsetMode : 1;                          // 0x0280(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0281(0x0007) MISSED OFFSET
	TArray<bool>                                       TirePunctured;                                            // 0x0288(0x0010) (Net, ZeroConstructor, Transient)
	TArray<struct FWheelSetup>                         WheelSetups;                                              // 0x0298(0x0010) (Edit, ZeroConstructor)
	TArray<struct FVehicleAntiRollbarSetup>            AntirollSetups;                                           // 0x02A8(0x0010) (Edit, ZeroConstructor)
	float                                              Mass;                                                     // 0x02B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DragCoefficient;                                          // 0x02BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ChassisWidth;                                             // 0x02C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ChassisHeight;                                            // 0x02C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReverseAsBrake;                                          // 0x02C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02C9(0x0003) MISSED OFFSET
	float                                              DragArea;                                                 // 0x02CC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              EstimatedMaxEngineSpeed;                                  // 0x02D0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              MaxEngineRPM;                                             // 0x02D4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DebugDragMagnitude;                                       // 0x02D8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     InertiaTensorScale;                                       // 0x02DC(0x000C) (Edit, IsPlainOldData)
	float                                              MinNormalizedTireLoad;                                    // 0x02E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinNormalizedTireLoadFiltered;                            // 0x02EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxNormalizedTireLoad;                                    // 0x02F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxNormalizedTireLoadFiltered;                            // 0x02F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThresholdLongitudinalSpeed;                               // 0x02F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LowForwardSpeedSubStepCount;                              // 0x02FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                HighForwardSpeedSubStepCount;                             // 0x0300(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0304(0x0004) MISSED OFFSET
	TArray<class UVehicleWheel*>                       Wheels;                                                   // 0x0308(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0318(0x0018) MISSED OFFSET
	unsigned char                                      bUseRVOAvoidance : 1;                                     // 0x0330(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0331(0x0003) MISSED OFFSET
	float                                              RVOAvoidanceRadius;                                       // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RVOAvoidanceHeight;                                       // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AvoidanceConsiderationRadius;                             // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RVOSteeringStep;                                          // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RVOThrottleStep;                                          // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AvoidanceUID;                                             // 0x0348(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FNavAvoidanceMask                           AvoidanceGroup;                                           // 0x034C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FNavAvoidanceMask                           GroupsToAvoid;                                            // 0x0350(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FNavAvoidanceMask                           GroupsToIgnore;                                           // 0x0354(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              AvoidanceWeight;                                          // 0x0358(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PendingLaunchVelocity;                                    // 0x035C(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0368(0x0004) MISSED OFFSET
	struct FReplicatedVehicleState                     ReplicatedState;                                          // 0x036C(0x0014) (Net, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0380(0x0004) MISSED OFFSET
	float                                              RawSteeringInput;                                         // 0x0384(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              RawThrottleInput;                                         // 0x0388(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              RawBrakeInput;                                            // 0x038C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bRawHandbrakeInput : 1;                                   // 0x0390(0x0001) (Transient)
	unsigned char                                      bRawGearUpInput : 1;                                      // 0x0390(0x0001) (Transient)
	unsigned char                                      bRawGearDownInput : 1;                                    // 0x0390(0x0001) (Transient)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0391(0x0003) MISSED OFFSET
	float                                              LastForwardInput;                                         // 0x0394(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              LastRightInput;                                           // 0x0398(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              LastHandbrakeInput;                                       // 0x039C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                LastGear;                                                 // 0x03A0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              SteeringInput;                                            // 0x03A4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ThrottleInput;                                            // 0x03A8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              BrakeInput;                                               // 0x03AC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              HandbrakeInput;                                           // 0x03B0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              IdleBrakeInput;                                           // 0x03B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StopThreshold;                                            // 0x03B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WrongDirectionThreshold;                                  // 0x03BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVehicleInputRate                           ThrottleInputRate;                                        // 0x03C0(0x0008) (Edit)
	struct FVehicleInputRate                           BrakeInputRate;                                           // 0x03C8(0x0008) (Edit)
	struct FVehicleInputRate                           HandbrakeInputRate;                                       // 0x03D0(0x0008) (Edit)
	struct FVehicleInputRate                           SteeringInputRate;                                        // 0x03D8(0x0008) (Edit)
	unsigned char                                      bWasAvoidanceUpdated : 1;                                 // 0x03E0(0x0001) (Transient)
	unsigned char                                      UnknownData08[0x2F];                                      // 0x03E1(0x002F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class PhysXVehicles.WheeledVehicleMovementComponent"));

		return ptr;
	}


	void SetUseAutoGears(bool bUseAuto);
	void SetThrottleInput(float Throttle);
	void SetTargetGear(int GearNum, bool bImmediate);
	void SetSteeringInput(float Steering);
	void SetHandbrakeInput(bool bNewHandbrake);
	void SetGroupsToIgnoreMask(const struct FNavAvoidanceMask& GroupMask);
	void SetGroupsToIgnore(int GroupFlags);
	void SetGroupsToAvoidMask(const struct FNavAvoidanceMask& GroupMask);
	void SetGroupsToAvoid(int GroupFlags);
	void SetGearUp(bool bNewGearUp);
	void SetGearDown(bool bNewGearDown);
	void SetBrakeInput(float Brake);
	void SetAvoidanceGroupMask(const struct FNavAvoidanceMask& GroupMask);
	void SetAvoidanceGroup(int GroupFlags);
	void SetAvoidanceEnabled(bool bEnable);
	void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int CurrentGear, uint32_t Checksum);
	void OnRep_TirePunctured(TArray<bool> LastTirePunctured);
	bool GetUseAutoGears();
	int GetTargetGear();
	float GetSideSpeed();
	float GetForwardSpeed();
	float GetEngineRotationSpeed();
	float GetEngineMaxRotationSpeed();
	int GetCurrentGear();
};


// Class PhysXVehicles.WheeledVehicleMovementComponent4W
// 0x0160 (0x0570 - 0x0410)
class UWheeledVehicleMovementComponent4W : public UWheeledVehicleMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0410(0x0088) MISSED OFFSET
	struct FVehicleDifferential4WData                  DifferentialSetup;                                        // 0x0498(0x001C) (Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04B4(0x0004) MISSED OFFSET
	struct FVehicleTransmissionData                    TransmissionSetup;                                        // 0x04B8(0x0030) (Edit)
	struct FRuntimeFloatCurve                          SteeringCurve;                                            // 0x04E8(0x0078) (Edit)
	float                                              AckermannAccuracy;                                        // 0x0560(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0564(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class PhysXVehicles.WheeledVehicleMovementComponent4W"));

		return ptr;
	}

};


// Class PhysXVehicles.TireConfig
// 0x0050 (0x0080 - 0x0030)
class UTireConfig : public UDataAsset
{
public:
	float                                              FrictionScale;                                            // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FTireConfigMaterialFriction>         TireFrictionScales;                                       // 0x0038(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	struct FTireConfigFrictionVsSlipGraph              FrictionVsSlipConfig;                                     // 0x0050(0x0028) (Edit)
	bool                                               bOverrideCamberStiffness;                                 // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	float                                              CamberStiffnessOverride;                                  // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class PhysXVehicles.TireConfig"));

		return ptr;
	}

};


// Class PhysXVehicles.SimpleWheeledVehicleMovementComponent
// 0x0000 (0x0410 - 0x0410)
class USimpleWheeledVehicleMovementComponent : public UWheeledVehicleMovementComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class PhysXVehicles.SimpleWheeledVehicleMovementComponent"));

		return ptr;
	}


	void SetSteerAngle(float SteerAngle, int WheelIndex);
	void SetDriveTorque(float DriveTorque, int WheelIndex);
	void SetBrakeTorque(float BrakeTorque, int WheelIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
