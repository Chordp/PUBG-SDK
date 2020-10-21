#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Char_AnimBP2_AD_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Char_AnimBP2_AD.Char_AnimBP2_AD_C
// 0x7040 (0x76F0 - 0x06B0)
class UChar_AnimBP2_AD_C : public UTslSubAnimInstanceAD
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06B0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_6858B89D434DC9A018BA1F86018D99F2;// 0x06B8(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3166C1D34CCEE9DE505E50BE099C79B3;// 0x0798(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0E24DE40452827368AB25ABC6C39988D;// 0x0868(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9D8FC3B44057FB2E96023EA1100F3EE0;// 0x08B8(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_79543BC34208F5A2998576B4B1C24451;// 0x0988(0x0050)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4964E0124B433D2C8A8D11BA13C814E9;// 0x09D8(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_88F74E0F477B923EBE9A39819AEC7E08;// 0x0A20(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_7E0583A74A77BDB5C45E329298309627;// 0x0A68(0x0308)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5281AF5E46B772C10E201990EDC52EC6;// 0x0D70(0x0308)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1EAF30A44EDC91A55C4B23B22C8AB9D7;// 0x1078(0x0140)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_03F7975E4949213957F3B9991F3705BD;// 0x11B8(0x0140)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0C39D73D4520533E63A8DCA336E95EB6;// 0x12F8(0x0140)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_75C299834E3453906B9CEEB07221EAF8;// 0x1438(0x0308)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_43D326104AE9974829111DB69CC78D46;// 0x1740(0x0308)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A16433A7481F09F01E6B6B9144767418;// 0x1A48(0x0308)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_00E0A4C943F82595BB3C6B8CE20996CE;// 0x1D50(0x0140)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_EE63188643E1AEBF28043BB098C2459D;// 0x1E90(0x00E0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_48975F4E43BD73C0E2BA6EABF407D832;// 0x1F70(0x0140)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_DD38E511470CAE0C99369682E7090C6A;// 0x20B0(0x0140)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CA39757E4B074D0F67FD598124C209D6;// 0x21F0(0x0050)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_52682F6C48C1F6C95A84F4B4F96D19A2;// 0x2240(0x0308)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_217DF85C4C82CE01918D8EB6BEBAF190;// 0x2548(0x0308)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9997000B4301459AF62196BBC4B4F055;// 0x2850(0x0308)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_471844BE4C1A4D1D576325BBBC44E5FE;// 0x2B58(0x0308)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_32FDE60B487C6281B0C984A5EB7C59E7;// 0x2E60(0x0308)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_341F0903481B95A57B4B1C8516AA5CE6;// 0x3168(0x0308)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_1446F79A43957CD6BB64D68DEEAFE27C;// 0x3470(0x0308)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A432FB974507DF25887A3B97254C6514;// 0x3778(0x0308)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5E9C7B9E455885FE04ED948A93ABA6F0;// 0x3A80(0x0308)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_CCC1353149CF0A59C6FA719945997AAF;// 0x3D88(0x0308)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_0516D6B443F0B1330B5C4EBA42D70956;// 0x4090(0x0308)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_7234131049786331C11A73A7494F5C74;// 0x4398(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9EF77C294D83A399B73CB79CED3E8D5C;// 0x43E0(0x0050)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_C6C1E38047DC4DBE0037818E43C8458B;// 0x4430(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_40FD3A324A04DD654D7EC2BF11E3D15E;// 0x4478(0x00E0)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_678C12BF425875CE5EB71F8A65C441BB;  // 0x4558(0x0068)
	struct FAnimNode_Root                              AnimGraphNode_Root_9A97FFF840A1620A8CD398AD393169B2;      // 0x45C0(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5D5468444980E8132F752DBAFB8017BE;// 0x4608(0x0308)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_7D5C236B49FA3990E23ACBA4BB936658;// 0x4910(0x0308)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_C05D15204B5FF6F323DB4096829194C3;// 0x4C18(0x0308)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_67A4BA164CD0A398DAFD9DBF362B7B76;// 0x4F20(0x0308)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_833E09B04D799D654831C49F626EA34D;// 0x5228(0x0308)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A10D68BC4CFAED8A3ACEF9932053A6AF;// 0x5530(0x0050)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_ECCF496443A9C43DEEF9E09350ECEF39;// 0x5580(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_C65B932E4D1B452834E441A6CCA26E48;// 0x55C8(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_8B57BF214BCEE81D695E12AFA49C69D2;// 0x5610(0x0308)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_410B9909487FC4BCADAA5FA82548642A;// 0x5918(0x0308)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2F035D29416ED9477FC431B232470EB3;// 0x5C20(0x0308)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_C7D98E164D698FF66CB29AB1B48007D4;// 0x5F28(0x0308)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_B254F6D8468ABEBCEAB6B58F44E23ED5;// 0x6230(0x0308)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2DCA098E42A7313FE1B60897F74EA378;// 0x6538(0x0050)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_1CB246B4475C1DBB86974DB312B598B4;// 0x6588(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_252987904CD6E6CA6538978A5258C24F;// 0x65D0(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_08885EB74EECF959571A1D992F1647D4;// 0x6618(0x0308)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_BA43493C4CCFB57C821807B7FB57B7DE;// 0x6920(0x0308)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_F84B4CB94A6C8D8E5F32C49AD59790D4;// 0x6C28(0x0308)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_1E1C5CEB4FE550D96136EBB2FA6521DC;// 0x6F30(0x0308)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5C48E0F44F92CDDD947DD0898544B98C;// 0x7238(0x0308)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_134FDCD94BCC080661BD0497C26F3827;// 0x7540(0x0050)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_AC8997DA4F4676858E5669BD9F1688AB;// 0x7590(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3C2E54494CC8876AB936D68983BE709F;// 0x75D8(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_AA81E9A149CE4A24CBA4FB998542A4BC;// 0x7620(0x00D0)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass Char_AnimBP2_AD.Char_AnimBP2_AD_C"));

		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_AD_AnimGraphNode_AnimDynamics_08885EB74EECF959571A1D992F1647D4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_AD_AnimGraphNode_AnimDynamics_BA43493C4CCFB57C821807B7FB57B7DE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_AD_AnimGraphNode_AnimDynamics_F84B4CB94A6C8D8E5F32C49AD59790D4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_AD_AnimGraphNode_AnimDynamics_1E1C5CEB4FE550D96136EBB2FA6521DC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_AD_AnimGraphNode_AnimDynamics_5C48E0F44F92CDDD947DD0898544B98C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_AD_AnimGraphNode_BlendListByBool_AA81E9A149CE4A24CBA4FB998542A4BC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_AD_AnimGraphNode_AnimDynamics_8B57BF214BCEE81D695E12AFA49C69D2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_AD_AnimGraphNode_AnimDynamics_833E09B04D799D654831C49F626EA34D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_AD_AnimGraphNode_AnimDynamics_67A4BA164CD0A398DAFD9DBF362B7B76();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_AD_AnimGraphNode_AnimDynamics_C05D15204B5FF6F323DB4096829194C3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_AD_AnimGraphNode_AnimDynamics_7D5C236B49FA3990E23ACBA4BB936658();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_AD_AnimGraphNode_AnimDynamics_5D5468444980E8132F752DBAFB8017BE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_AD_AnimGraphNode_AnimDynamics_0516D6B443F0B1330B5C4EBA42D70956();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_AD_AnimGraphNode_AnimDynamics_CCC1353149CF0A59C6FA719945997AAF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_AD_AnimGraphNode_AnimDynamics_5E9C7B9E455885FE04ED948A93ABA6F0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_AD_AnimGraphNode_AnimDynamics_A432FB974507DF25887A3B97254C6514();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_AD_AnimGraphNode_AnimDynamics_1446F79A43957CD6BB64D68DEEAFE27C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_AD_AnimGraphNode_AnimDynamics_341F0903481B95A57B4B1C8516AA5CE6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_AD_AnimGraphNode_AnimDynamics_32FDE60B487C6281B0C984A5EB7C59E7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_AD_AnimGraphNode_AnimDynamics_471844BE4C1A4D1D576325BBBC44E5FE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_AD_AnimGraphNode_AnimDynamics_9997000B4301459AF62196BBC4B4F055();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_AD_AnimGraphNode_AnimDynamics_217DF85C4C82CE01918D8EB6BEBAF190();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_AD_AnimGraphNode_ModifyBone_DD38E511470CAE0C99369682E7090C6A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_AD_AnimGraphNode_ModifyBone_48975F4E43BD73C0E2BA6EABF407D832();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_AD_AnimGraphNode_ModifyBone_00E0A4C943F82595BB3C6B8CE20996CE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_AD_AnimGraphNode_AnimDynamics_A16433A7481F09F01E6B6B9144767418();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_AD_AnimGraphNode_AnimDynamics_43D326104AE9974829111DB69CC78D46();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_AD_AnimGraphNode_AnimDynamics_75C299834E3453906B9CEEB07221EAF8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_AD_AnimGraphNode_ModifyBone_0C39D73D4520533E63A8DCA336E95EB6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_AD_AnimGraphNode_ModifyBone_03F7975E4949213957F3B9991F3705BD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_AD_AnimGraphNode_ModifyBone_1EAF30A44EDC91A55C4B23B22C8AB9D7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_AD_AnimGraphNode_BlendListByBool_9D8FC3B44057FB2E96023EA1100F3EE0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_AD_AnimGraphNode_BlendListByBool_3166C1D34CCEE9DE505E50BE099C79B3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_AD_AnimGraphNode_BlendListByEnum_6858B89D434DC9A018BA1F86018D99F2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_AD_AnimGraphNode_AnimDynamics_B254F6D8468ABEBCEAB6B58F44E23ED5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_AD_AnimGraphNode_AnimDynamics_C7D98E164D698FF66CB29AB1B48007D4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_AD_AnimGraphNode_AnimDynamics_2F035D29416ED9477FC431B232470EB3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_AD_AnimGraphNode_AnimDynamics_410B9909487FC4BCADAA5FA82548642A();
	void ExecuteUbergraph_Char_AnimBP2_AD(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
