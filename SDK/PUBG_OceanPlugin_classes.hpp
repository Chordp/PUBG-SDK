#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_OceanPlugin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OceanPlugin.BuoyancyForceComponent
// 0x00B0 (0x0550 - 0x04A0)
class UBuoyancyForceComponent : public USceneComponent
{
public:
	class AOceanManager*                               OceanManager;                                             // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MeshDensity;                                              // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FluidDensity;                                             // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FluidLinearDamping;                                       // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FluidAngularDamping;                                      // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VelocityDamper;                                           // 0x04B8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               ClampMaxVelocity;                                         // 0x04C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04C5(0x0003) MISSED OFFSET
	float                                              MaxUnderwaterVelocity;                                    // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TestPointRadius;                                          // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             TestPoints;                                               // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               ApplyForceToBones;                                        // 0x04E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SnapToSurfaceIfNoPhysics;                                 // 0x04E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TwoGerstnerIterations;                                    // 0x04E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x04E3(0x0005) MISSED OFFSET
	TArray<float>                                      PointDensityOverride;                                     // 0x04E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FStructBoneOverride>                 BoneOverride;                                             // 0x04F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               DrawDebugPoints;                                          // 0x0508(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableStayUprightConstraint;                              // 0x0509(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x050A(0x0002) MISSED OFFSET
	float                                              StayUprightStiffness;                                     // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StayUprightDamping;                                       // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    StayUprightDesiredRotation;                               // 0x0514(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               EnableWaveForces;                                         // 0x0520(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0521(0x0003) MISSED OFFSET
	float                                              WaveForceMultiplier;                                      // 0x0524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETickingGroup>                         TickGroup;                                                // 0x0528(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0529(0x0003) MISSED OFFSET
	float                                              WaveHightMultiplier;                                      // 0x052C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClientOnly;                                              // 0x0530(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1F];                                      // 0x0531(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class OceanPlugin.BuoyancyForceComponent"));

		return ptr;
	}

};


// Class OceanPlugin.OceanManager
// 0x0088 (0x0488 - 0x0400)
class AOceanManager : public AActor
{
public:
	bool                                               EnableGerstnerWaves;                                      // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0401(0x0003) MISSED OFFSET
	struct FVector2D                                   GlobalWaveDirection;                                      // 0x0404(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              GlobalWaveSpeed;                                          // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GlobalWaveAmplitude;                                      // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceCheck;                                            // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FWaveParameter>                      WaveClusters;                                             // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FWaveSetParameters>                  WaveSetOffsetsOverride;                                   // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              NetWorkTimeOffset;                                        // 0x0438(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableLandscapeModulation;                               // 0x043C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x043D(0x0003) MISSED OFFSET
	float                                              ModulationStartHeight;                                    // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ModulationMaxHeight;                                      // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ModulationPower;                                          // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x044C(0x0004) MISSED OFFSET
	class ALandscape*                                  Landscape;                                                // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  HeightmapTexture;                                         // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x28];                                      // 0x0460(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class OceanPlugin.OceanManager"));

		return ptr;
	}


	void LoadLandscapeHeightmap(class UTexture2D* Tex2D);
	struct FVector GetWaveHeightValue(const struct FVector& Location, class UWorld* World, bool HeightOnly, bool TwoIterations, bool InClientOnly);
	struct FLinearColor GetHeightmapPixel(float U, float V);
};


// Class OceanPlugin.AdvancedBuoyancyComponent
// 0x0120 (0x05C0 - 0x04A0)
class UAdvancedBuoyancyComponent : public USceneComponent
{
public:
	bool                                               bUseDrag;                                                 // 0x04A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugOn;                                                 // 0x04A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x04A2(0x0006) MISSED OFFSET
	class AOceanManager*                               TheOcean;                                                 // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WaterDensity;                                             // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Gravity;                                                  // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MeshDensity;                                              // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x04BC(0x0014) MISSED OFFSET
	class UStaticMeshComponent*                        BuoyantMesh;                                              // 0x04D0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x04D8(0x0008) MISSED OFFSET
	struct FTransform                                  MeshTransform;                                            // 0x04E0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              FalseVolume;                                              // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BuoyancyReductionCoefficient;                             // 0x0514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BuoyancyPitchReductionCoefficient;                        // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DensityCorrection;                                        // 0x051C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DensityCorrectionModifier;                                // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SubmergedVolume;                                          // 0x0524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ImpactCoefficient;                                        // 0x0528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DragCoefficient;                                          // 0x052C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SuctionCoefficient;                                       // 0x0538(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ViscousDragCoefficient;                                   // 0x0544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSlamAcceleration;                                      // 0x0548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x054C(0x0004) MISSED OFFSET
	TArray<struct FVector>                             AdvancedGridHeight;                                       // 0x0550(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FForceTriangle>                      SubmergedTris;                                            // 0x0560(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      TriSizes;                                                 // 0x0570(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      TriSubmergedArea;                                         // 0x0580(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData04[0x30];                                      // 0x0590(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class OceanPlugin.AdvancedBuoyancyComponent"));

		return ptr;
	}


	float TriangleArea(const struct FVector& A, const struct FVector& B, const struct FVector& C);
	TArray<struct FForceTriangle> SplitTriangle(const struct FBuoyancyVertex& H, const struct FBuoyancyVertex& M, const struct FBuoyancyVertex& L, const struct FVector& InArrow);
	void SetMeshDensity(float NewDensity, float NewWaterDensity);
	float GetOceanDepthFromGrid(const struct FVector& Position, bool bJustGetHeightAtLocation);
	void GetOcean();
	void DrawDebugStuff(const struct FForceTriangle& TriForce, const struct FColor& DebugColor);
	void ApplySlamForce(const struct FVector& SlamForce, const struct FVector& TriCenter);
	void ApplyForce(const struct FForceTriangle& TriForce);
};


// Class OceanPlugin.BuoyancyComponent
// 0x0080 (0x02C0 - 0x0240)
class UBuoyancyComponent : public UMovementComponent
{
public:
	float                                              MeshDensity;                                              // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FluidDensity;                                             // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FluidLinearDamping;                                       // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FluidAngularDamping;                                      // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VelocityDamper;                                           // 0x0250(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               ClampMaxVelocity;                                         // 0x025C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x025D(0x0003) MISSED OFFSET
	float                                              MaxUnderwaterVelocity;                                    // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TestPointRadius;                                          // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             TestPoints;                                               // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      PointDensityOverride;                                     // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               DrawDebugPoints;                                          // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableStayUprightConstraint;                              // 0x0289(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x028A(0x0002) MISSED OFFSET
	float                                              StayUprightStiffness;                                     // 0x028C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StayUprightDamping;                                       // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    StayUprightDesiredRotation;                               // 0x0294(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               EnableWaveForces;                                         // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02A1(0x0003) MISSED OFFSET
	float                                              WaveForceMultiplier;                                      // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x18];                                      // 0x02A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class OceanPlugin.BuoyancyComponent"));

		return ptr;
	}

};


// Class OceanPlugin.BuoyantDestructibleComponent
// 0x0050 (0x0D60 - 0x0D10)
class UBuoyantDestructibleComponent : public UDestructibleComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0D10(0x0010) MISSED OFFSET
	class AOceanManager*                               OceanManager;                                             // 0x0D20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChunkDensity;                                             // 0x0D28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FluidDensity;                                             // 0x0D2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FluidLinearDamping;                                       // 0x0D30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FluidAngularDamping;                                      // 0x0D34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VelocityDamper;                                           // 0x0D38(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               ClampMaxVelocity;                                         // 0x0D44(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0D45(0x0003) MISSED OFFSET
	float                                              MaxUnderwaterVelocity;                                    // 0x0D48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TestPointRadius;                                          // 0x0D4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DrawDebugPoints;                                          // 0x0D50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableWaveForces;                                         // 0x0D51(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0D52(0x0002) MISSED OFFSET
	float                                              WaveForceMultiplier;                                      // 0x0D54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChunkSleepThreshold;                                      // 0x0D58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChunkStabilizationThreshold;                              // 0x0D5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class OceanPlugin.BuoyantDestructibleComponent"));

		return ptr;
	}

};


// Class OceanPlugin.BuoyantDestructible
// 0x0008 (0x0408 - 0x0400)
class ABuoyantDestructible : public AActor
{
public:
	class UBuoyantDestructibleComponent*               BuoyantDestructibleComponent;                             // 0x0400(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class OceanPlugin.BuoyantDestructible"));

		return ptr;
	}

};


// Class OceanPlugin.BuoyantMeshComponent
// 0x0070 (0x0BB0 - 0x0B40)
class UBuoyantMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0B40(0x0008) MISSED OFFSET
	bool                                               bVerticalForcesOnly;                                      // 0x0B48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseWaterPatch;                                           // 0x0B49(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseStaticForces;                                         // 0x0B4A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseDynamicForces;                                        // 0x0B4B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0B4C(0x0004) MISSED OFFSET
	class AOceanManager*                               OceanManager;                                             // 0x0B50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawForceArrows;                                         // 0x0B58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawWaterline;                                           // 0x0B59(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawVertices;                                            // 0x0B5A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawTriangles;                                           // 0x0B5B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawSubtriangles;                                        // 0x0B5C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0B5D(0x0003) MISSED OFFSET
	float                                              ForceArrowSize;                                           // 0x0B60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideMeshDensity;                                     // 0x0B64(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0B65(0x0003) MISSED OFFSET
	float                                              MeshDensity;                                              // 0x0B68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideMass;                                            // 0x0B6C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0B6D(0x0003) MISSED OFFSET
	float                                              Mass;                                                     // 0x0B70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WaterDensity;                                             // 0x0B74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x28];                                      // 0x0B78(0x0028) MISSED OFFSET
	class UWaterHeightmapComponent*                    WaterHeightmap;                                           // 0x0BA0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData06[0x8];                                       // 0x0BA8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class OceanPlugin.BuoyantMeshComponent"));

		return ptr;
	}

};


// Class OceanPlugin.CustomVehicleController
// 0x0008 (0x0770 - 0x0768)
class ACustomVehicleController : public APlayerController
{
public:
	class APawn*                                       PlayerPawn;                                               // 0x0768(0x0008) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class OceanPlugin.CustomVehicleController"));

		return ptr;
	}


	bool GetIsDriving();
	void ExitVehicle();
	void EnterVehicle(class APawn* Vehicle);
	void EnableBuoyancy();
	void DrawBuoyancyPoints();
};


// Class OceanPlugin.FishManager
// 0x0058 (0x0458 - 0x0400)
class AFishManager : public AActor
{
public:
	TArray<class UClass*>                              flockTypes;                                               // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      numInFlock;                                               // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              minZ;                                                     // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              maxZ;                                                     // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              underwaterBoxLength;                                      // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               attachToPlayer;                                           // 0x042C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugMode;                                                // 0x042D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x042E(0x0002) MISSED OFFSET
	class UClass*                                      playerType;                                               // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0438(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class OceanPlugin.FishManager"));

		return ptr;
	}

};


// Class OceanPlugin.FlockFish
// 0x0180 (0x05E8 - 0x0468)
class AFlockFish : public APawn
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0468(0x0010) MISSED OFFSET
	class USphereComponent*                            FishInteractionSphere;                                    // 0x0478(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               isLeader;                                                 // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0481(0x0007) MISSED OFFSET
	TArray<class UClass*>                              enemyTypes;                                               // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UClass*>                              preyTypes;                                                // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      neighborType;                                             // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              followDist;                                               // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeed;                                                 // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              turnSpeed;                                                // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              turnFrequency;                                            // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              hungerResetTime;                                          // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              distBehindSpeedUpRange;                                   // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SeperationDistanceMultiplier;                             // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FleeDistanceMultiplier;                                   // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FleeAccelerationMultiplier;                               // 0x04D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChaseAccelerationMultiplier;                              // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SeekDecelerationMultiplier;                               // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AvoidForceMultiplier;                                     // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AvoidanceForce;                                           // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      playerType;                                               // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     underwaterMin;                                            // 0x04F0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     underwaterMax;                                            // 0x04FC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              CustomZSeekMin;                                           // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CustomZSeekMax;                                           // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NumNeighborsToEvaluate;                                   // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpdateEveryTick;                                          // 0x0514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0518(0x0010) MISSED OFFSET
	bool                                               DebugMode;                                                // 0x0528(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xBF];                                      // 0x0529(0x00BF) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class OceanPlugin.FlockFish"));

		return ptr;
	}


	void OnEndOverlap(class UPrimitiveComponent* activatedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnBeginOverlap(class UPrimitiveComponent* activatedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class OceanPlugin.InfiniteSystemComponent
// 0x0020 (0x04C0 - 0x04A0)
class UInfiniteSystemComponent : public USceneComponent
{
public:
	bool                                               UpdateInEditor;                                           // 0x04A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFollowMethod>                         FollowMethod;                                             // 0x04A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x04A2(0x0002) MISSED OFFSET
	float                                              GridSnapSize;                                             // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxLookAtDistance;                                        // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ScaleByDistance;                                          // 0x04AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04AD(0x0003) MISSED OFFSET
	float                                              ScaleDistanceFactor;                                      // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScaleStartDistance;                                       // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScaleMin;                                                 // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScaleMax;                                                 // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class OceanPlugin.InfiniteSystemComponent"));

		return ptr;
	}

};


// Class OceanPlugin.OceanMeshComponent
// 0x0030 (0x09E0 - 0x09B0)
class UOceanMeshComponent : public UPrimitiveComponent
{
public:
	class UMaterialInterface*                          DefaultMaterial;                                          // 0x09B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          LODMaterial;                                              // 0x09B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          SimpleMaterial;                                           // 0x09C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoundsExtent;                                             // 0x09C8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              LODTransitionStart;                                       // 0x09D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LODTransitionEnd;                                         // 0x09D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x09DC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class OceanPlugin.OceanMeshComponent"));

		return ptr;
	}


	void SetLODTransitionRange(float InLODTransitionStart, float InLODTransitionEnd);
	void SetBoundsExtent(const struct FVector& Extent);
};


// Class OceanPlugin.TimeManager
// 0x00C8 (0x04C8 - 0x0400)
class ATimeManager : public AActor
{
public:
	struct FTimeDate                                   CurrentLocalTime;                                         // 0x0400(0x001C) (BlueprintVisible, BlueprintReadOnly)
	float                                              Latitude;                                                 // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Longitude;                                                // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OffsetUTC;                                                // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OffsetDST;                                                // 0x0428(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowDaylightSavings;                                    // 0x042C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDaylightSavingsActive;                                   // 0x042D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x042E(0x0002) MISSED OFFSET
	float                                              TimeScaleMultiplier;                                      // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SolarTime;                                                // 0x0434(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LocalClockTime;                                           // 0x0438(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimeCorrection;                                           // 0x043C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LSTM;                                                     // 0x0440(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DayOfYear;                                                // 0x0444(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EoT;                                                      // 0x0448(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SolarAltAngle;                                            // 0x044C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SolarDeclination;                                         // 0x0450(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SolarAzimuth;                                             // 0x0454(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SolarHRA;                                                 // 0x0458(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SiderealTime;                                             // 0x045C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LunarAltAngle;                                            // 0x0460(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LunarHRA;                                                 // 0x0464(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LunarDeclination;                                         // 0x0468(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LunarAzimuth;                                             // 0x046C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LunarRightAsc;                                            // 0x0470(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LunarElapsedDays;                                         // 0x0474(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EcLongitude;                                              // 0x0478(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EcLatitude;                                               // 0x047C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EcDistance;                                               // 0x0480(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PartL;                                                    // 0x0484(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PartM;                                                    // 0x0488(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PartF;                                                    // 0x048C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0490(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class OceanPlugin.TimeManager"));

		return ptr;
	}


	void SetCurrentLocalTime(float Time);
	bool IsLeapYear(int Year);
	void InitializeCalendar(const struct FTimeDate& Time);
	void IncrementTime(float DeltaSeconds);
	float GetYearPhase();
	float GetElapsedDayInMinutes();
	int GetDaysInYear(int Year);
	int GetDaysInMonth(int Year, int Month);
	float GetDayPhase();
	int GetDayOfYear(const struct FTimeDate& Time);
	struct FRotator CalculateSunAngle();
	float CalculateMoonPhase();
	struct FRotator CalculateMoonAngle();
};


// Class OceanPlugin.WaterHeightmapComponent
// 0x0080 (0x0270 - 0x01F0)
class UWaterHeightmapComponent : public UActorComponent
{
public:
	float                                              DesiredCellSize;                                          // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyCollidingComponents;                                 // 0x01F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01F5(0x0003) MISSED OFFSET
	float                                              GridSizeMultiplier;                                       // 0x01F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawUsedTriangles;                                       // 0x01FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawHeightmap;                                           // 0x01FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x62];                                      // 0x01FE(0x0062) MISSED OFFSET
	class AOceanManager*                               OceanManager;                                             // 0x0260(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0268(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class OceanPlugin.WaterHeightmapComponent"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
