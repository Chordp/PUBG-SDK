#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_HeadMountedDisplay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HeadMountedDisplay.MotionControllerComponent.IsTracked
struct UMotionControllerComponent_IsTracked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault
struct UMotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault_Params
{
<<<<<<< HEAD
	bool*                                              Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
=======
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice
struct UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice_Params
{
<<<<<<< HEAD
	int*                                               PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EControllerHand*                                   Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EControllerHand                                    Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent
struct UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent_Params
{
<<<<<<< HEAD
	class UMotionControllerComponent**                 MotionControllerComponent;                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
=======
	class UMotionControllerComponent*                  MotionControllerComponent;                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary
struct UMotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount
struct UMotionTrackedDeviceFunctionLibrary_GetMotionTrackingEnabledControllerCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount
struct UMotionTrackedDeviceFunctionLibrary_GetMaximumMotionTrackedControllerCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice
struct UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice_Params
{
<<<<<<< HEAD
	int*                                               PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EControllerHand*                                   Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EControllerHand                                    Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent
struct UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent_Params
{
<<<<<<< HEAD
	class UMotionControllerComponent**                 MotionControllerComponent;                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
=======
	class UMotionControllerComponent*                  MotionControllerComponent;                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice
struct UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice_Params
{
<<<<<<< HEAD
	int*                                               PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EControllerHand*                                   Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EControllerHand                                    Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer
struct UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfControllersForPlayer_Params
{
<<<<<<< HEAD
	int*                                               PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfAllControllers
struct UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfAllControllers_Params
{
};

// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent
struct UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent_Params
{
<<<<<<< HEAD
	class UMotionControllerComponent**                 MotionControllerComponent;                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
=======
	class UMotionControllerComponent*                  MotionControllerComponent;                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// DelegateFunction HeadMountedDisplay.VRNotificationsComponent.VRNotificationsDelegate__DelegateSignature
struct UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
