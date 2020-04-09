#pragma once

// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_P_Sniper_Kar98_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass P_Sniper_Kar98_BP.P_Sniper_Kar98_BP_C
// 0x0000 (0x0498 - 0x0498)
class AP_Sniper_Kar98_BP_C : public ATslParticle
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass P_Sniper_Kar98_BP.P_Sniper_Kar98_BP_C"));

		return ptr;
	}


	void STATIC_SetParticleParameter(const struct FName& Name, const struct FVector& Value, bool bEnableRTPC);
	void STATIC_OnParticleFinish(class UParticleSystemComponent* PSystem);
	void STATIC_OnParticleCollide(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, const struct FName& BoneName, class UPhysicalMaterial* PhysMat);
	void STATIC_OnParameterUpdated();
	void STATIC_GetWaterVolumeHeight(bool* OutbIsInWater, float* OutWaterHeight);
	TEnumAsByte<EPhysicalSurface> STATIC_GetPhysicalSurfaceFromRay(const struct FVector& StartActorOffset, const struct FVector& TraceRay);
	struct FVector STATIC_GetParticleVectorParamter(const struct FName& Name, const struct FVector& DefaultValue);
	float STATIC_GetParticleParamterByName(const struct FName& Name, float DefaultValue);
	float STATIC_GetParticleParamter(const struct FString& Name, float DefaultValue);
	float STATIC_GetEmitterGlobalSpawnRateScale();
	void STATIC_ForceSpawn(int emitterIndex, const struct FVector& InLocation);
	void STATIC_AttachToParent();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
