#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_WeaponDisplay_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WeaponDisplay.BP_WeaponDisplay_C
// 0x0178 (0x0738 - 0x05C0)
class ABP_WeaponDisplay_C : public ATslWeaponDisplay
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05C0(0x0008) (Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      Weapon_Textured_Mesh;                                     // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Weapon_Cutout_Mesh;                                       // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Weapon_Hidden_Mesh;                                       // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Weapon_Meshes;                                            // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       PostProcess;                                              // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             WeaponHolder;                                             // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Sphere;                                                   // 0x05F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Crowbar;                                                  // 0x0608(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               HasSpawnedWeapon;                                         // 0x0618(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LocalTesting;                                             // 0x0619(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsMouseButtonDown;                                        // 0x061A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WasMouseButtonJustReleased;                               // 0x061B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LastMouseSet;                                             // 0x061C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x061D(0x0003) MISSED OFFSET
	float                                              LastMouseX;                                               // 0x0620(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastMouseY;                                               // 0x0624(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MouseDeltaX;                                              // 0x0628(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MouseDeltaY;                                              // 0x062C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BPUserModified;                                           // 0x0630(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0631(0x0007) MISSED OFFSET
	class UCurveFloat*                                 BPDecayCurveDefault;                                      // 0x0638(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 BPDecayCurveContinousSpin;                                // 0x0640(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BPMomentumAccumulationMultiplier;                         // 0x0648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BPDecayTimer;                                             // 0x064C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BPDecayTimeInSeconds;                                     // 0x0650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BPRotationDirection;                                      // 0x0654(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BPRotationSpeed;                                          // 0x0658(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BPRotationDeltaMin;                                       // 0x065C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BPRotationDeltaMax;                                       // 0x0660(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BPReturningToFace;                                        // 0x0664(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0665(0x0003) MISSED OFFSET
	float                                              BPFaceRotationTimer;                                      // 0x0668(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BPFaceRotationSpeed;                                      // 0x066C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    BPFaceRotationFrom;                                       // 0x0670(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    BPFaceRotationTo;                                         // 0x067C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    BPFaceRotationRight;                                      // 0x0688(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               BPAutoSpinEnabled;                                        // 0x0694(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BPReturnToFaceEnabled;                                    // 0x0695(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0696(0x0002) MISSED OFFSET
	struct FRotator                                    BPFaceRotationLeft;                                       // 0x0698(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               BPOverrideTargetFacing;                                   // 0x06A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x06A5(0x0003) MISSED OFFSET
	struct FRotator                                    BPFaceRotationDefault;                                    // 0x06A8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              BPFaceRotationStep;                                       // 0x06B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     Kar98k;                                                   // 0x06B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Transition_Speed;                                         // 0x06C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x06CC(0x0004) MISSED OFFSET
	TArray<class UCurveFloat*>                         Transition_Curve;                                         // 0x06D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     crossbow;                                                 // 0x06E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     AUG;                                                      // 0x06F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     Mini14;                                                   // 0x0700(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     AWM;                                                      // 0x0710(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     Akm;                                                      // 0x0720(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               UserSetMomentum;                                          // 0x0730(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AttachmentsLoaded;                                        // 0x0731(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0732(0x0002) MISSED OFFSET
	int                                                AttachmentIndex;                                          // 0x0734(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_WeaponDisplay.BP_WeaponDisplay_C"));

		return ptr;
	}


	void UserConstructionScript();
	void AddStaticMeshAsyncEvent(bool* indexMatch);
	void ExecuteUbergraph_BP_WeaponDisplay(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
