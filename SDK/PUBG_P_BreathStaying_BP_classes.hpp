#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_P_BreathStaying_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass P_BreathStaying_BP.P_BreathStaying_BP_C
// 0x0000 (0x04C0 - 0x04C0)
class AP_BreathStaying_BP_C : public ATslParticle
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass P_BreathStaying_BP.P_BreathStaying_BP_C"));

		return ptr;
	}


	void SetParticleParameter(const struct FName& Name, const struct FVector& Value, bool bEnableRTPC);
	void OnParticleFinish(class UParticleSystemComponent* PSystem);
	void OnParticleCollide(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, const struct FName& BoneName, class UPhysicalMaterial* PhysMat);
	void OnParameterUpdated();
	void GetWaterVolumeHeight(bool* OutbIsInWater, float* OutWaterHeight);
	TEnumAsByte<EPhysicalSurface> GetPhysicalSurfaceFromRay(const struct FVector& StartActorOffset, const struct FVector& TraceRay);
	struct FVector GetParticleVectorParamter(const struct FName& Name, const struct FVector& DefaultValue);
	float GetParticleParamterByName(const struct FName& Name, float DefaultValue);
	float GetParticleParamter(const struct FString& Name, float DefaultValue);
	float STATIC_GetEmitterGlobalSpawnRateScale();
	void ForceSpawn(int EmitterIndex, const struct FVector& InLocation);
	void AttachToParent();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
