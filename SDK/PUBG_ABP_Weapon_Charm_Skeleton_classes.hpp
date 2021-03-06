#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Weapon_Charm_Skeleton_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Weapon_Charm_Skeleton.ABP_Weapon_Charm_Skeleton_C
// 0x0558 (0x0978 - 0x0420)
class UABP_Weapon_Charm_Skeleton_C : public UTslCharmAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_7F6C6AAD4824811342096881C9426A55;      // 0x0428(0x0048)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_571D90424F74437EB84AF18DAA4BC2A3;// 0x0470(0x0030)
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_8568CC1447E38623765165B831AB16EF; // 0x04A0(0x0350)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4EE4C47546E12E947412C59A9A168182;// 0x07F0(0x0140)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F873FCDC4556A79005D705BD9179D3FE;// 0x0930(0x0048)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass ABP_Weapon_Charm_Skeleton.ABP_Weapon_Charm_Skeleton_C"));

		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Charm_Skeleton_AnimGraphNode_ModifyBone_4EE4C47546E12E947412C59A9A168182();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Charm_Skeleton_AnimGraphNode_RigidBody_8568CC1447E38623765165B831AB16EF();
	void ExecuteUbergraph_ABP_Weapon_Charm_Skeleton(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
