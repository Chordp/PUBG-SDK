#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_OceanPlugin_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OceanPlugin.OceanManager.LoadLandscapeHeightmap
struct AOceanManager_LoadLandscapeHeightmap_Params
{
<<<<<<< HEAD
	class UTexture2D**                                 Tex2D;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UTexture2D*                                  Tex2D;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function OceanPlugin.OceanManager.GetWaveHeightValue
struct AOceanManager_GetWaveHeightValue_Params
{
<<<<<<< HEAD
	struct FVector*                                    Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UWorld**                                     World;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              HeightOnly;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              TwoIterations;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InClientOnly;                                             // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UWorld*                                      World;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HeightOnly;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TwoIterations;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InClientOnly;                                             // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.OceanManager.GetHeightmapPixel
struct AOceanManager_GetHeightmapPixel_Params
{
<<<<<<< HEAD
	float*                                             U;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             V;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
=======
	float                                              U;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              V;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.AdvancedBuoyancyComponent.TriangleArea
struct UAdvancedBuoyancyComponent_TriangleArea_Params
{
<<<<<<< HEAD
	struct FVector*                                    A;                                                        // (Parm, IsPlainOldData)
	struct FVector*                                    B;                                                        // (Parm, IsPlainOldData)
	struct FVector*                                    C;                                                        // (Parm, IsPlainOldData)
=======
	struct FVector                                     A;                                                        // (Parm, IsPlainOldData)
	struct FVector                                     B;                                                        // (Parm, IsPlainOldData)
	struct FVector                                     C;                                                        // (Parm, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.AdvancedBuoyancyComponent.SplitTriangle
struct UAdvancedBuoyancyComponent_SplitTriangle_Params
{
<<<<<<< HEAD
	struct FBuoyancyVertex*                            H;                                                        // (Parm)
	struct FBuoyancyVertex*                            M;                                                        // (Parm)
	struct FBuoyancyVertex*                            L;                                                        // (Parm)
	struct FVector*                                    InArrow;                                                  // (Parm, IsPlainOldData)
=======
	struct FBuoyancyVertex                             H;                                                        // (Parm)
	struct FBuoyancyVertex                             M;                                                        // (Parm)
	struct FBuoyancyVertex                             L;                                                        // (Parm)
	struct FVector                                     InArrow;                                                  // (Parm, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	TArray<struct FForceTriangle>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OceanPlugin.AdvancedBuoyancyComponent.SetMeshDensity
struct UAdvancedBuoyancyComponent_SetMeshDensity_Params
{
<<<<<<< HEAD
	float*                                             NewDensity;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NewWaterDensity;                                          // (Parm, ZeroConstructor, IsPlainOldData)
=======
	float                                              NewDensity;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewWaterDensity;                                          // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function OceanPlugin.AdvancedBuoyancyComponent.GetOceanDepthFromGrid
struct UAdvancedBuoyancyComponent_GetOceanDepthFromGrid_Params
{
<<<<<<< HEAD
	struct FVector*                                    Position;                                                 // (Parm, IsPlainOldData)
	bool*                                              bJustGetHeightAtLocation;                                 // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FVector                                     Position;                                                 // (Parm, IsPlainOldData)
	bool                                               bJustGetHeightAtLocation;                                 // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.AdvancedBuoyancyComponent.GetOcean
struct UAdvancedBuoyancyComponent_GetOcean_Params
{
};

// Function OceanPlugin.AdvancedBuoyancyComponent.DrawDebugStuff
struct UAdvancedBuoyancyComponent_DrawDebugStuff_Params
{
<<<<<<< HEAD
	struct FForceTriangle*                             TriForce;                                                 // (Parm)
	struct FColor*                                     DebugColor;                                               // (Parm, IsPlainOldData)
=======
	struct FForceTriangle                              TriForce;                                                 // (Parm)
	struct FColor                                      DebugColor;                                               // (Parm, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function OceanPlugin.AdvancedBuoyancyComponent.ApplySlamForce
struct UAdvancedBuoyancyComponent_ApplySlamForce_Params
{
<<<<<<< HEAD
	struct FVector*                                    SlamForce;                                                // (Parm, IsPlainOldData)
	struct FVector*                                    TriCenter;                                                // (Parm, IsPlainOldData)
=======
	struct FVector                                     SlamForce;                                                // (Parm, IsPlainOldData)
	struct FVector                                     TriCenter;                                                // (Parm, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function OceanPlugin.AdvancedBuoyancyComponent.ApplyForce
struct UAdvancedBuoyancyComponent_ApplyForce_Params
{
<<<<<<< HEAD
	struct FForceTriangle*                             TriForce;                                                 // (Parm)
=======
	struct FForceTriangle                              TriForce;                                                 // (Parm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function OceanPlugin.CustomVehicleController.GetIsDriving
struct ACustomVehicleController_GetIsDriving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.CustomVehicleController.ExitVehicle
struct ACustomVehicleController_ExitVehicle_Params
{
};

// Function OceanPlugin.CustomVehicleController.EnterVehicle
struct ACustomVehicleController_EnterVehicle_Params
{
<<<<<<< HEAD
	class APawn**                                      Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class APawn*                                       Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function OceanPlugin.CustomVehicleController.EnableBuoyancy
struct ACustomVehicleController_EnableBuoyancy_Params
{
};

// Function OceanPlugin.CustomVehicleController.DrawBuoyancyPoints
struct ACustomVehicleController_DrawBuoyancyPoints_Params
{
};

// Function OceanPlugin.FlockFish.OnEndOverlap
struct AFlockFish_OnEndOverlap_Params
{
<<<<<<< HEAD
	class UPrimitiveComponent**                        activatedComp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UPrimitiveComponent*                         activatedComp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function OceanPlugin.FlockFish.OnBeginOverlap
struct AFlockFish_OnBeginOverlap_Params
{
<<<<<<< HEAD
	class UPrimitiveComponent**                        activatedComp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
=======
	class UPrimitiveComponent*                         activatedComp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function OceanPlugin.OceanMeshComponent.SetLODTransitionRange
struct UOceanMeshComponent_SetLODTransitionRange_Params
{
<<<<<<< HEAD
	float*                                             InLODTransitionStart;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InLODTransitionEnd;                                       // (Parm, ZeroConstructor, IsPlainOldData)
=======
	float                                              InLODTransitionStart;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InLODTransitionEnd;                                       // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function OceanPlugin.OceanMeshComponent.SetBoundsExtent
struct UOceanMeshComponent_SetBoundsExtent_Params
{
<<<<<<< HEAD
	struct FVector*                                    Extent;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
=======
	struct FVector                                     Extent;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function OceanPlugin.TimeManager.SetCurrentLocalTime
struct ATimeManager_SetCurrentLocalTime_Params
{
<<<<<<< HEAD
	float*                                             Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
=======
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function OceanPlugin.TimeManager.IsLeapYear
struct ATimeManager_IsLeapYear_Params
{
<<<<<<< HEAD
	int*                                               Year;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                Year;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.TimeManager.InitializeCalendar
struct ATimeManager_InitializeCalendar_Params
{
<<<<<<< HEAD
	struct FTimeDate*                                  Time;                                                     // (Parm)
=======
	struct FTimeDate                                   Time;                                                     // (Parm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function OceanPlugin.TimeManager.IncrementTime
struct ATimeManager_IncrementTime_Params
{
<<<<<<< HEAD
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
=======
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function OceanPlugin.TimeManager.GetYearPhase
struct ATimeManager_GetYearPhase_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.TimeManager.GetElapsedDayInMinutes
struct ATimeManager_GetElapsedDayInMinutes_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.TimeManager.GetDaysInYear
struct ATimeManager_GetDaysInYear_Params
{
<<<<<<< HEAD
	int*                                               Year;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                Year;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.TimeManager.GetDaysInMonth
struct ATimeManager_GetDaysInMonth_Params
{
<<<<<<< HEAD
	int*                                               Year;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Month;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                Year;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Month;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.TimeManager.GetDayPhase
struct ATimeManager_GetDayPhase_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.TimeManager.GetDayOfYear
struct ATimeManager_GetDayOfYear_Params
{
<<<<<<< HEAD
	struct FTimeDate*                                  Time;                                                     // (Parm)
=======
	struct FTimeDate                                   Time;                                                     // (Parm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.TimeManager.CalculateSunAngle
struct ATimeManager_CalculateSunAngle_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.TimeManager.CalculateMoonPhase
struct ATimeManager_CalculateMoonPhase_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OceanPlugin.TimeManager.CalculateMoonAngle
struct ATimeManager_CalculateMoonAngle_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
