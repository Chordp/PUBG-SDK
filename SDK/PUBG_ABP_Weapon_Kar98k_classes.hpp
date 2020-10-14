#pragma once

// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Weapon_Kar98k_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Weapon_Kar98k.ABP_Weapon_Kar98k_C
// 0x09C4 (0x0E4C - 0x0488)
class UABP_Weapon_Kar98k_C : public UTslGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0488(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_54202F4D4356180788A09FB6755FC87D;      // 0x0490(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_71D460D54075C36AA5C2019A71AA4D40;      // 0x04D8(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_62AF327940874CF70C37908CEEB9A299;      // 0x0548(0x0070)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_535B35864D6D73BE83E3B0B9F7682E1B;// 0x05B8(0x0140)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3E2088744337103ED0574AB818B09483;// 0x06F8(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_51E3C84E43C0E8972AFE0B973181BE94;// 0x0740(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F04618AC46C758D4557155A3D6C5281B;// 0x0788(0x0140)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_21737C5C46F8C2B4D22D6AA0A7564D0C;// 0x08C8(0x0070)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_291D982749D2C15B5A42458E533D3353;// 0x0938(0x0140)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_43A4B63640B00C90EE186E9BCF655F5A;// 0x0A78(0x0140)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_18C910A44F9008AC742A4E9E701EA7F8;// 0x0BB8(0x0140)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_033A2398482A3043781C368D6E04B471;// 0x0CF8(0x0140)
	float                                              ClipShowAlpha;                                            // 0x0E38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MagRootAlpha;                                             // 0x0E3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ATslWeapon_Gun*                              GunRef;                                                   // 0x0E40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              BoltActionAlpha;                                          // 0x0E48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass ABP_Weapon_Kar98k.ABP_Weapon_Kar98k_C"));

		return ptr;
	}


	void Handle_ReloadByOne_Stop();
	void Handle_ReloadByOne_Single();
	void Handle_ReloadByOne_Start();
	void Handle_FireCycle();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_AnimGraphNode_ModifyBone_18C910A44F9008AC742A4E9E701EA7F8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_AnimGraphNode_ModifyBone_033A2398482A3043781C368D6E04B471();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_AnimGraphNode_ModifyBone_43A4B63640B00C90EE186E9BCF655F5A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_AnimGraphNode_ModifyBone_291D982749D2C15B5A42458E533D3353();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_AnimGraphNode_ModifyBone_F04618AC46C758D4557155A3D6C5281B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_AnimGraphNode_ModifyBone_535B35864D6D73BE83E3B0B9F7682E1B();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void WeaponFireCycle_Event();
	void AnimNotify_ClipShow();
	void AnimNotify_ClipHide();
	void Reload2_Event();
	void ReloadByOneStart_Event(int* AmmoToReload);
	void ReloadByOneSingle_Event();
	void ReloadByOneEnd_Event();
	void AnimNotify_ShellEject();
	void CancelReload_Event();
	void ExecuteUbergraph_ABP_Weapon_Kar98k(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
