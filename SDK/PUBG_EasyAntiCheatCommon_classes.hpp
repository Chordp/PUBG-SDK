#pragma once

// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_EasyAntiCheatCommon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class EasyAntiCheatCommon.EasyAntiCheatNetComponent
// 0x0010 (0x0210 - 0x0200)
class UEasyAntiCheatNetComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0200(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class EasyAntiCheatCommon.EasyAntiCheatNetComponent"));

		return ptr;
	}


	void STATIC_ToggleActive();
	void STATIC_SetTickGroup(TEnumAsByte<ETickingGroup> NewTickGroup);
	void STATIC_SetTickableWhenPaused(bool bTickableWhenPaused);
	void STATIC_SetIsReplicated(bool ShouldReplicate);
	void STATIC_SetComponentTickInterval(float TickInterval);
	void STATIC_SetComponentTickEnabled(bool bEnabled);
	void STATIC_SetAutoActivate(bool bNewAutoActivate);
	void STATIC_SetActive(bool bNewActive, bool bReset);
	void STATIC_RemoveTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);
	void STATIC_RemoveTickPrerequisiteActor(class AActor* PrerequisiteActor);
	void STATIC_ReceiveTick(float DeltaSeconds);
	void STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void STATIC_ReceiveBeginPlay();
	void STATIC_OnRep_IsActive();
	void STATIC_K2_DestroyComponent(class UObject* Object);
	bool STATIC_IsComponentTickEnabled();
	bool STATIC_IsBeingDestroyed();
	bool STATIC_IsActive();
	class AActor* STATIC_GetOwner();
	float STATIC_GetComponentTickInterval();
	void STATIC_Deactivate();
	bool STATIC_ComponentHasTag(const struct FName& Tag);
	void STATIC_AddTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);
	void STATIC_AddTickPrerequisiteActor(class AActor* PrerequisiteActor);
	void STATIC_Activate(bool bReset);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
