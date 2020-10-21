#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_FireEffectController_JerryCan_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FireEffectController_JerryCan.BP_FireEffectController_JerryCan_C
// 0x0000 (0x05F0 - 0x05F0)
class ABP_FireEffectController_JerryCan_C : public ATslEffectController
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_FireEffectController_JerryCan.BP_FireEffectController_JerryCan_C"));

		return ptr;
	}


	void TickDamageFields();
	void OnTakeDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void EndEffect();
	void Client_ShowDebugString(const struct FVector& InLocation, const struct FString& InText, class AActor* InActor, const struct FColor& InColor, float InTime);
	void Client_ShowDebugSphere(const struct FVector& InLocation, float InRadius, const struct FColor& InColor, float InTime);
	void Client_ShowDebugLine(const struct FVector& InStart, const struct FVector& InEnd, const struct FColor& InColor, float InTime);
	void Client_ShowDebugCoordinateSystem(const struct FVector& InStart, const struct FQuat& InQuat, float InTime, float InSize);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
