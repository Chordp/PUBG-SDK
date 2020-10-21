#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Char_AnimBP2_IK_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Char_AnimBP2_IK.Char_AnimBP2_IK_C
// 0x4588 (0x49A8 - 0x0420)
class UChar_AnimBP2_IK_C : public UTslSubAnimInstanceIK
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D51DAAD5482BE0BAA3EFD683A81E1B86;      // 0x0428(0x0048)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_0D02679B467BFB21FA9F85A0251AF7AC;  // 0x0470(0x0068)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4BAAE4D14BF829EC9F42D3A816961F3A;// 0x04D8(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_5448E7F84472E54365F333B73235CDD4;// 0x05B8(0x0128)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_F900ACDC447709723F3BA18ABEA05E37;// 0x06E0(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_D66A3B984A847898E5482D8094AB8F12;// 0x07C0(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7FD3891F4028A72EAA090C8BC10C64A5;// 0x08A0(0x0050)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_C5BA06D447B771DD77703492010533BB;// 0x08F0(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_5F4F36224C0B387DE211959C34E1CAD0;// 0x0938(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_BF129FB34F0EAE290119D5885B80E593;// 0x0980(0x00E0)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_2AE9DF8A4BA6A7ECBCFC1294F3ECD470;    // 0x0A60(0x01A0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_E34368E7486669E6FB6DC99259ACCC8C;  // 0x0C00(0x0130)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_3ABA55C741435C76BA58AB9044FF1FBB;    // 0x0D30(0x01A0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_B3888E8445301039752740977DC559FF;  // 0x0ED0(0x0130)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_D04BBCD94153F5B1DE5C18A400C33307;// 0x1000(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_91D1A31247A78B52A580E2B528A30A0E;      // 0x1048(0x0070)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_01205A534952D88B7F75688C73B92E91;// 0x10B8(0x0140)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D9F0CE81400901BBA8665C93ADB97638;      // 0x11F8(0x0070)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4105359F42586F90D82EFAAA9B64C3E4;// 0x1268(0x0128)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_0872A09D4EC27204894E64BA5CB22C89;// 0x1390(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_E9CAEF0947E2FD4184A5A99977DC08FA;// 0x1498(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_CB399F5545F6B0DD552944BD5BEF6655;// 0x14E0(0x00E0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_C5D16BAE470EBFD84BA2C9860EF5897D;// 0x15C0(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_0C09137B4349AB111973E9B5709C67A2;// 0x1608(0x0048)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_2D3A7CC548811E51AA660C87F79B47DC;  // 0x1650(0x0130)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_5C91D151452184D8DF39CEBC2ED4A8BB;  // 0x1780(0x0130)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_8DFEF1074570B7F8F5D163B1EC560978;  // 0x18B0(0x0130)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_4C7F34B24019F2015448B3B138AD5132;// 0x19E0(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2EE45E454D52C73A9101E9BD14B09F98;      // 0x1AC0(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7C08C81A49538440F07F6FBCA5D3F439;      // 0x1B30(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6293E22A46890FC0A0D5ECA7D17FAA4B;// 0x1BA0(0x00D0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_636EB79148CF4D61EB2591824D132290;      // 0x1C70(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_1421DB5843C824364C6394ADB3158596;      // 0x1CE0(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_7BE222DD4F4F4A935112DF8459B0E5B1;// 0x1D50(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_02F059844754CEF40C4B9E8042F324BB;      // 0x1E30(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_909484884375FFB38ECBB98E1F365DE2;      // 0x1EA0(0x0070)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_E89CBBF04EF4BFE4ECC9DDB3CBDFD83E; // 0x1F10(0x0150)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8D0F766442A705D3060B6DA2E208EC84;      // 0x2060(0x0070)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5355DB9D49A7BAAE0BA74A892246BA1B;// 0x20D0(0x0050)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_1255222A446FAC08DF275181F3DC1727;  // 0x2120(0x0130)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_3A4057CD4F830DDAA4AEA3B094E0B1B6;  // 0x2250(0x0130)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7D8FB16A4CC39BD14EE8818271503387;// 0x2380(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7F254D9040E9014B9D9CD78378CAA547;// 0x23D0(0x0050)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_CAAC030F466490128199119F7A63D6B5;// 0x2420(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D14799DA44D0411CA7875DB60D8FD480;// 0x2468(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_E081D1B446D14E1C16BF068950DBEFFB;// 0x24B8(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7526B18144960DDFE145E186B7508BDB;// 0x2598(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E6B122E746CF31160BADCC92451B0100;// 0x25E8(0x0140)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_27F0787D4594CECEF170119FC63751AE;// 0x2728(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6C42E40849ED2D84AE10C09E8FA5FC42;// 0x2778(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0B11BFD940E5E90EC59F5C81B615D4E9;// 0x27C8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9B0F8F8445D9F29DB21CE4AEA2C176F3;// 0x2818(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E4A8283F409E5CEED0C58EBCF0631DDB;// 0x2868(0x0140)
	unsigned char                                      UnknownData00[0x8];                                       // 0x29A8(0x0008) MISSED OFFSET
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_2ADD92494C2F8312547B38A0BF2D0FBA;    // 0x29B0(0x01A0)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_CF2535AA48974B6C2966ACA1C0E4CF91;    // 0x2B50(0x01A0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_EAE320404C59108D185729A08B6F2F07;// 0x2CF0(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_196636B341C39D87EAF60480293E7C1D;// 0x2D38(0x0050)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_58E6809B428AD3EA9C06FF94E4A01BB9;// 0x2D88(0x0048)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_5B99997447EE0CBF1D9163839ED33943;    // 0x2DD0(0x01A0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_7E01994649D6A5958F06F9B49FA5CFB0;  // 0x2F70(0x0130)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_4E9C0D124E1505EC69F0848F37FFB22A;    // 0x30A0(0x01A0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_539399C6455D055F416DB68211470E54;  // 0x3240(0x0130)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_54C54AB1432211B0FF5ED2935AC6CF05;// 0x3370(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_60C6A36742CA7BE118602C8A9F5A788E;// 0x3450(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E96AF0B44823988019D987ACB95C957F;// 0x34A0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9CBF83CA4BFEF770AFF81FBD4EA00E78;// 0x34F0(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_6317DCAE4FEC5CBC011D6CA7BDB67C9D;// 0x3540(0x00E0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_CBE4635B4B6C3722768EE98C6EFBBEC5;  // 0x3620(0x0130)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CA223CA74D40F8CDF3FA4FB51BA8D530;// 0x3750(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1CD3A4FE44FA0DC079CCB2B7E1470359;// 0x37A0(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6BB8328A4F6BD105ACA3B1A9CDED4865;// 0x3870(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4CD8FC3044345DFDE8067386C10C48F3;// 0x38C0(0x0050)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_1B7A9FF94E5218A252CF4DB6F65C3DD7;  // 0x3910(0x0130)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_81065CE5432A6768787B31AB6562575D;// 0x3A40(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D8F985CE42D07D4B5CD693ABED53B6D2;// 0x3A88(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1C9BA7DD4179EC23D837DA9BF03318FC;// 0x3B58(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_EE931CD34026EF2B9B6753B289776C0E;// 0x3BA8(0x00E0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_3046202C48B3EC8D87C458ACB32D2DD9;// 0x3C88(0x01E8)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_9DD2F1BD480650DD97A38A9DF26D5A67;// 0x3E70(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_16E8A2264BA4F213E53986AE6B9E218A;// 0x3F78(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F0E1DA72431D31B9BEB41F832E5C84FB;// 0x3FC0(0x0048)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_57CCCA5540E9A7CC6C7A7C9CE2169EEF;  // 0x4008(0x0130)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_F7ACA0404A7FD86211163192AC2B8BF7;// 0x4138(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1A83430F4CEEA31460051D9B55AD2A5B;// 0x4180(0x0140)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_E25085374BA6379E4ED4D19EF24E9531;// 0x42C0(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_F415BC6B4EE0BA5D602AAD84D6E41E29;// 0x4308(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_F3FCD50F4C2E150C21E79FA8595383E3;// 0x43E8(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_37812D1E497DACEFDC002BB656FE0C73;// 0x44C8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D1064DC54F3313FA6F4CB091FFC698F9;// 0x4518(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1F4B1CF340B6D9F8CCCFDFA15E602693;// 0x4568(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0F15CA97437D4ED94E215487353254CA;// 0x45B8(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_91B60A794EF4B096B86F4FAD525E08BD;// 0x4608(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7057442B41943087A432CD8F83A0CE82;// 0x46D8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CF1B879D4DF5D17F60035296578A8054;// 0x4728(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_AEC2FD07409C9F1F546663ACFE218AE8;// 0x4778(0x00E0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_FA7F6F794FA47E4D1D5B63B2D96E1E2B; // 0x4858(0x0150)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass Char_AnimBP2_IK.Char_AnimBP2_IK_C"));

		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_IK_AnimGraphNode_BlendListByBool_91B60A794EF4B096B86F4FAD525E08BD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_IK_AnimGraphNode_ModifyBone_1A83430F4CEEA31460051D9B55AD2A5B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_IK_AnimGraphNode_TwoWayBlend_9DD2F1BD480650DD97A38A9DF26D5A67();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_IK_AnimGraphNode_RotationOffsetBlendSpace_3046202C48B3EC8D87C458ACB32D2DD9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_IK_AnimGraphNode_LayeredBoneBlend_EE931CD34026EF2B9B6753B289776C0E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_IK_AnimGraphNode_BlendListByBool_D8F985CE42D07D4B5CD693ABED53B6D2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_IK_AnimGraphNode_BlendListByBool_1CD3A4FE44FA0DC079CCB2B7E1470359();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_IK_AnimGraphNode_LayeredBoneBlend_54C54AB1432211B0FF5ED2935AC6CF05();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_IK_AnimGraphNode_CopyBone_539399C6455D055F416DB68211470E54();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_IK_AnimGraphNode_Fabrik_4E9C0D124E1505EC69F0848F37FFB22A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_IK_AnimGraphNode_CopyBone_7E01994649D6A5958F06F9B49FA5CFB0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_IK_AnimGraphNode_Fabrik_5B99997447EE0CBF1D9163839ED33943();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_IK_AnimGraphNode_Fabrik_CF2535AA48974B6C2966ACA1C0E4CF91();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_IK_AnimGraphNode_Fabrik_2ADD92494C2F8312547B38A0BF2D0FBA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_IK_AnimGraphNode_ModifyBone_E4A8283F409E5CEED0C58EBCF0631DDB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_IK_AnimGraphNode_ModifyBone_E6B122E746CF31160BADCC92451B0100();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_IK_AnimGraphNode_TwoBoneIK_E89CBBF04EF4BFE4ECC9DDB3CBDFD83E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_IK_AnimGraphNode_BlendListByEnum_7BE222DD4F4F4A935112DF8459B0E5B1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_IK_AnimGraphNode_BlendListByBool_6293E22A46890FC0A0D5ECA7D17FAA4B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_IK_AnimGraphNode_BlendListByEnum_4C7F34B24019F2015448B3B138AD5132();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_IK_AnimGraphNode_TwoWayBlend_0872A09D4EC27204894E64BA5CB22C89();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_IK_AnimGraphNode_TwoBoneIK_FA7F6F794FA47E4D1D5B63B2D96E1E2B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_IK_AnimGraphNode_BlendSpacePlayer_4105359F42586F90D82EFAAA9B64C3E4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_IK_AnimGraphNode_ModifyBone_01205A534952D88B7F75688C73B92E91();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_IK_AnimGraphNode_CopyBone_B3888E8445301039752740977DC559FF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_IK_AnimGraphNode_Fabrik_3ABA55C741435C76BA58AB9044FF1FBB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_IK_AnimGraphNode_CopyBone_E34368E7486669E6FB6DC99259ACCC8C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_IK_AnimGraphNode_Fabrik_2AE9DF8A4BA6A7ECBCFC1294F3ECD470();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_IK_AnimGraphNode_LayeredBoneBlend_BF129FB34F0EAE290119D5885B80E593();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_IK_AnimGraphNode_LayeredBoneBlend_AEC2FD07409C9F1F546663ACFE218AE8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_AnimBP2_IK_AnimGraphNode_BlendSpacePlayer_5448E7F84472E54365F333B73235CDD4();
	void ExecuteUbergraph_Char_AnimBP2_IK(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
