#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Charm_Common_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Charm_Common.ABP_Charm_Common_C
// 0x0558 (0x0960 - 0x0408)
class UABP_Charm_Common_C : public UTslCharmAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0408(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_12A4C0C54753078C5409CC8D4DDB3F76;      // 0x0410(0x0048)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_717211054E88D71E7EA2C8848FF55191;// 0x0458(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_EF5A58AE4280BB234B36F48D7520FF84;// 0x0488(0x0048)
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_8538612846363ECDC0868F81EE414107; // 0x04D0(0x0350)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_EE8E4B654952686C402109A27DEC775E;// 0x0820(0x0140)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass ABP_Charm_Common.ABP_Charm_Common_C"));

		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Charm_Common_AnimGraphNode_ModifyBone_EE8E4B654952686C402109A27DEC775E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Charm_Common_AnimGraphNode_RigidBody_8538612846363ECDC0868F81EE414107();
	void ExecuteUbergraph_ABP_Charm_Common(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
