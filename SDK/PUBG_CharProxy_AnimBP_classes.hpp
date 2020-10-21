#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CharProxy_AnimBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass CharProxy_AnimBP.CharProxy_AnimBP_C
// 0x6351 (0x68C1 - 0x0570)
class UCharProxy_AnimBP_C : public UTslInventoryAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0570(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_CF4C69E94D4584561F0E05BD3E8362E5;// 0x0578(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_88CAAB864B27793D6A4FEA9278275EBA;// 0x0658(0x0070)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D1F2A2F94C6F6B4125EA27959FC98302;// 0x06C8(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_88EF657744D7CD0A7FDC0899BF7388B1;// 0x0718(0x00E0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_64036C624695CCAE871C91A12B7E4BD6;  // 0x07F8(0x0130)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_9A2FC77A4F553199FE35D8B9FB312960;  // 0x0928(0x0130)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0A58(0x0008) MISSED OFFSET
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_217FCB10470A39214309EBB1129EC727;    // 0x0A60(0x01A0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_825C3AE34510DAC702F38299520320E5;  // 0x0C00(0x0130)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_50E1CCC144ED9B7CFB3C1890CBA2E662;    // 0x0D30(0x01A0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_94E5E49E48018345AB9C488D9EB44172;  // 0x0ED0(0x0130)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_1F1853924178BAEA6BEACCB192D84949;// 0x1000(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_E5C510214B9D93BD292810BFE2F603D1;// 0x1048(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_C2F30D7E4BD89239D23E298DD1729B77;// 0x1090(0x00E0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_8FC1604343ED2A23C11EAEB5261125E0;// 0x1170(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_5432A2504DCB7C5C33D17E850B0953B1;// 0x11B8(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_FE57F22747D2CBE68A6B6C8735A0AA7D;// 0x1200(0x0128)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_406BD3B743A02018F5ECE0B6152CF4CC;// 0x1328(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_21B205254447B5FE68F94B84047A1376;// 0x1408(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_203D8C8B449C7B836D3E24B6FE69D850;// 0x1458(0x0050)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_044C21FF45F8C9135ED72E90A1317ACF;// 0x14A8(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_D52F2FC34283A3A47745B6B886AFFBB0;// 0x1588(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7E97E81B42424702F70AC7A0BE1DAC7B;// 0x1668(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7A7BFE2C46B8961489CB07A5A54B844B;// 0x16B8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_13BC291546E37382B9421CB005024781;// 0x1708(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4FEB3CBB4993C735E5697B9ABA86D593;// 0x1758(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7EF5FE2D4969E9806EE6038352FFCA29;// 0x17A8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CBC1D0164B60BC6744CC67A7498B6C73;// 0x17F8(0x0050)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_24E7A2C345D59A37751D55ACF23B7355;  // 0x1848(0x0130)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_60F7F60D46063AC788F6DAA1F7DDBE0D;// 0x1978(0x0140)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_074320674063AC07AB26F283D6D78E58;// 0x1AB8(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D9BD57E94786BDB98B1024BAA5B2A680;// 0x1B00(0x0140)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_341CAEF947395CE8613E1AA1A1B0CEB9;// 0x1C40(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_50CC758845EBAE09DFE0FFA151BC45A3;// 0x1D20(0x0128)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_F55B74BC41101BEBCB2E1FB32E00F62E;// 0x1E48(0x0108)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BFBC4F03438CEF46794AF49E56D43629;// 0x1F50(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5C591DE54F0AB6A9C9ADEEB4FDDC4C62;// 0x1FD0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B23A39644DB5ECB2C2CC0A9BBA7BD3B7;// 0x2050(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B4789EB84B94BAF324DEDE8E04D6F50B;// 0x20D0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1B9B424241FB104B11A537B7349DA4C7;// 0x2150(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3DA5C7214658D193C32CA1B3EDEC5B06;// 0x21D0(0x0080)
	struct FTslAnimNode_BlendListRandom                TslAnimGNode_BlendListRandom_F9E266B24579866CA50116A9A5AEEC44;// 0x2250(0x0120)
	struct FTslAnimNode_LobbyAnimSequence              TslAnimGNode_LobbyAnimSequence_531BEF47483A967D265BCEA41B76213F;// 0x2370(0x0100)
	struct FTslAnimNode_LobbyAnimSequence              TslAnimGNode_LobbyAnimSequence_EFB7997B46EBC25E4A13AF9813CAED41;// 0x2470(0x0100)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A5965D5342D8C33B8E9E9393808FB6FD4;// 0x2570(0x0048)
	struct FTslAnimNode_LobbyAnimSequence              TslAnimGNode_LobbyAnimSequence_4DC5C840461193E66E77CAA5D42AA989;// 0x25B8(0x0100)
	struct FTslAnimNode_BlendListRandom                TslAnimGNode_BlendListRandom_BCA660E54BEA71CAFED51B83EAB5A330;// 0x26B8(0x0120)
	struct FTslAnimNode_LobbyAnimSequence              TslAnimGNode_LobbyAnimSequence_B2157E35433CD1DB30B5C2A23D8766D0;// 0x27D8(0x0100)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A5965D5342D8C33B8E9E9393808FB6FD3;// 0x28D8(0x0048)
	struct FTslAnimNode_BlendListRandom                TslAnimGNode_BlendListRandom_5FEBC6E944AAE906A6EF128E81217A23;// 0x2920(0x0120)
	struct FTslAnimNode_LobbyAnimSequence              TslAnimGNode_LobbyAnimSequence_B40256D5470A10C97DE212BD7C2CEE7D;// 0x2A40(0x0100)
	struct FTslAnimNode_LobbyAnimSequence              TslAnimGNode_LobbyAnimSequence_9466048A4DE0D1C40429FD8213399D1E;// 0x2B40(0x0100)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A5965D5342D8C33B8E9E9393808FB6FD2;// 0x2C40(0x0048)
	struct FTslAnimNode_BlendListRandom                TslAnimGNode_BlendListRandom_B028C4E545C7A16ACA23A68B6D3132EA;// 0x2C88(0x0120)
	struct FTslAnimNode_LobbyAnimSequence              TslAnimGNode_LobbyAnimSequence_65B850774C53532B188729B969A51945;// 0x2DA8(0x0100)
	struct FTslAnimNode_LobbyAnimSequence              TslAnimGNode_LobbyAnimSequence_D61C21E745C13E71CA53A8B5899F55FF;// 0x2EA8(0x0100)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A5965D5342D8C33B8E9E9393808FB6FD;// 0x2FA8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_42B4671A4DA1A6449F28E6BF77BB3235;// 0x2FF0(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_DE260CEA407C68776D9118B2960C17E9;// 0x30D0(0x00D0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_FC292CB34C9D970E666EF9B7433D62D3;// 0x31A0(0x0308)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_631C88D546201C974F742CB8806E8F09;// 0x34A8(0x0308)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_E9C191E14BB06C296AAC56B0AB1FA6BF;// 0x37B0(0x0308)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5991C3C04B715B36A0D33080B66FBECE;// 0x3AB8(0x0308)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_01099A7D4A5ABA33AFBA468333D3C0E6;// 0x3DC0(0x0308)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5AC0BDB14D2A3D1267886E90B77FE3C8;// 0x40C8(0x0308)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_138D096848F6627DCB3C9496E0576FF0;// 0x43D0(0x0140)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_B60838F74D3948F45299BAA39E5A42CA;// 0x4510(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_E4F411C2440952ED340FA18691589094;// 0x4558(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6C5CC2124BFDF72A2E770B838AB7F6EE;// 0x4638(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_BD6709DD4B5C02B97A30ADA130680965;// 0x4688(0x0140)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_32A421124D76CB4FA4D07B8B33404E2F;// 0x47C8(0x0140)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_DEE412844DF63DD57177199BCCB4D6C7;// 0x4908(0x00E0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_7DD4DF2E4EE51B857C8F8BBA6ADD08B0;// 0x49E8(0x00E0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A84BCBEA47A42CFCC1746B9714A69C80;// 0x4AC8(0x0308)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9CE93AA14E65AE0F24AC659FCD3CDBB6;// 0x4DD0(0x0308)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_784B5B1A4FE48049FF3706AADCE816F3;// 0x50D8(0x0308)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_241AE0874FD9B2E6CFF20FBFA731C9BB;// 0x53E0(0x0308)
	unsigned char                                      UnknownData01[0x8];                                       // 0x56E8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B28D304546719889502F7196BE77331D;// 0x56F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_48F8697745D40D58C66DF0A99B77D1B7;// 0x5770(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4AA6112D4D3576942566988274BF8537;// 0x57F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BB4308DA4AABC54CC57CA8849CF9FD4D;// 0x5870(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B669BF064CA73609C8747CBC24DFFA67;// 0x58F0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FF4764054176C39B518808A6ADE577B5;// 0x5960(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_09EDA3AB4B94830C91DD21B77FC031A2;// 0x59A8(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FC5FEA4E4757AF43D7DA82B1DAEEA210;// 0x59F8(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_50319A28442CEC6A66F09AAA1CF432E7;// 0x5A40(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4C9B2CCE4DB510CFA8E9CD9B5715C2FE;// 0x5A88(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_27EF191A40B139062F7EE1B35E0F5853;// 0x5AD0(0x0140)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_26AC071F48330830E366B3ABF7151241;// 0x5C10(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4D78DCDC49DAE824B3D93692F28215C9;      // 0x5C80(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_92BF24D7422E4FF37C7292874E8128C4;      // 0x5CF0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_45540D0F4B3D1253461381A0E8211501;// 0x5D60(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_B1B8D05047C0276E40EC4982E8DCD52A;// 0x5DA8(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_1ACF15E14242FCF6F35B54AD108C5E4D;// 0x5E88(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8CEB5EA94DE47DD2F9566D9864274BC1;// 0x5F68(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BC8D319540A5FD23C5CA519E8C2FFA0D;// 0x5FD8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FF5F1D0D4999D3FC20A9ABBDD916501E;// 0x6048(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_60D457F0437BD0941E743F97374335F4;// 0x60B8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7E444141446032D2C667E3B21195FB53;// 0x6128(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DB5FD9AC41A1DAD6D3BA2581D0A1FA47;// 0x6198(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CFCF09BC463F7C0AC6A052A0EB3DA6AD;// 0x6208(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_04EA736E43AC456809982C905F923F52;// 0x6278(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6735DA1E474C3C86505F22BF5AD37830;// 0x62E8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_276D5CDF43F85F28142267B089375167;// 0x6358(0x0070)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_911A5BF94D7FA7D6B7D58297CEF93149;// 0x63C8(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_Root_8D65CA8E4C2DF91736AC45B7731017E9;      // 0x6418(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1656669B4874480FB29CDFB13B3CD70A;// 0x6460(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_80285FE6415E1F8AA30E20833DB065D9;// 0x64D0(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_A50437FC42EBAFCE394BF6B0A50A57E2;// 0x6540(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8AE019434ED53F35CBE569BF7BDBC106;// 0x6620(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8097202E431F22442C132CB2787BD89C;// 0x6690(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C3833E7F4F5CED3C7DCF5385E0BFE33C;// 0x6700(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FB62FE64461BE757B0AE46ADF7A89846;// 0x6770(0x0070)
	EAnimWeaponType                                    AnimWeaponType;                                           // 0x67E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x67E1(0x0007) MISSED OFFSET
	class UBlendSpaceBase*                             GripBlendspace;                                           // 0x67E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlendTime;                                                // 0x67F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PistolOffset;                                             // 0x67F4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              GripType;                                                 // 0x6800(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlinkAlpha;                                               // 0x6804(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	EWeaponClass                                       WeaponClassEnum;                                          // 0x6808(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x6809(0x0003) MISSED OFFSET
	float                                              LH_GripIndex;                                             // 0x680C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpaceBase*                             LH_GripBS;                                                // 0x6810(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsLobbyReady;                                             // 0x6818(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x6819(0x0003) MISSED OFFSET
	struct FVector                                     Wind;                                                     // 0x681C(0x000C) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     InitialWind;                                              // 0x6828(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x6834(0x0004) MISSED OFFSET
	class UCurveFloat*                                 Curve;                                                    // 0x6838(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     AxisFix;                                                  // 0x6840(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x684C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 LobbyAdjust;                                              // 0x6850(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               AnimWeapon_Default;                                       // 0x6858(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               AnimWeapon_Pistol;                                        // 0x6860(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               AnimWeapon_SR;                                            // 0x6868(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               AnimWeapon_Shotgun;                                       // 0x6870(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               AnimWeapon_SMG;                                           // 0x6878(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               AnimWeapon_LMG;                                           // 0x6880(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               AnimWeapon_Melee;                                         // 0x6888(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               AnimWeapon_DMR;                                           // 0x6890(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               AnimWeapon_Carbine;                                       // 0x6898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               AnimWeapon_Rifle;                                         // 0x68A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AdjustedIKLH;                                             // 0x68A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x68AC(0x0004) MISSED OFFSET
	class UAnimSequence*                               AnimUnarmed;                                              // 0x68B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AdjustedIKRH;                                             // 0x68B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AD_BlendIn;                                               // 0x68BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EThrownWeaponType                                  ThrownClass;                                              // 0x68C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass CharProxy_AnimBP.CharProxy_AnimBP_C"));

		return ptr;
	}


	void ProcessLobbyCharacter(class ALobbyCharacter* LobbyCharRef);
	void UpdateBlink();
	void GetAnimWeaponType(EAnimWeaponType* AnimWeaponType);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_ModifyBone_138D096848F6627DCB3C9496E0576FF0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_ModifyBone_BD6709DD4B5C02B97A30ADA130680965();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_ModifyBone_32A421124D76CB4FA4D07B8B33404E2F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_BlendListByEnum_7DD4DF2E4EE51B857C8F8BBA6ADD08B0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_AnimDynamics_A84BCBEA47A42CFCC1746B9714A69C80();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_AnimDynamics_9CE93AA14E65AE0F24AC659FCD3CDBB6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_AnimDynamics_784B5B1A4FE48049FF3706AADCE816F3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_AnimDynamics_241AE0874FD9B2E6CFF20FBFA731C9BB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_TransitionResult_B28D304546719889502F7196BE77331D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_TransitionResult_48F8697745D40D58C66DF0A99B77D1B7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_TslAnimGNode_BlendListRandom_B028C4E545C7A16ACA23A68B6D3132EA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_TransitionResult_4AA6112D4D3576942566988274BF8537();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_TransitionResult_BB4308DA4AABC54CC57CA8849CF9FD4D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_ModifyBone_27EF191A40B139062F7EE1B35E0F5853();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_TslAnimGNode_BlendListRandom_5FEBC6E944AAE906A6EF128E81217A23();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_SequencePlayer_8CEB5EA94DE47DD2F9566D9864274BC1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_SequencePlayer_BC8D319540A5FD23C5CA519E8C2FFA0D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_SequencePlayer_FF5F1D0D4999D3FC20A9ABBDD916501E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_SequencePlayer_60D457F0437BD0941E743F97374335F4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_SequencePlayer_7E444141446032D2C667E3B21195FB53();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_SequencePlayer_DB5FD9AC41A1DAD6D3BA2581D0A1FA47();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_SequencePlayer_CFCF09BC463F7C0AC6A052A0EB3DA6AD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_SequencePlayer_04EA736E43AC456809982C905F923F52();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_SequencePlayer_6735DA1E474C3C86505F22BF5AD37830();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_SequencePlayer_276D5CDF43F85F28142267B089375167();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_SequencePlayer_1656669B4874480FB29CDFB13B3CD70A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_SequencePlayer_80285FE6415E1F8AA30E20833DB065D9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_BlendListByEnum_A50437FC42EBAFCE394BF6B0A50A57E2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_AnimDynamics_5AC0BDB14D2A3D1267886E90B77FE3C8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_AnimDynamics_01099A7D4A5ABA33AFBA468333D3C0E6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_TslAnimGNode_BlendListRandom_BCA660E54BEA71CAFED51B83EAB5A330();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_TslAnimGNode_BlendListRandom_F9E266B24579866CA50116A9A5AEEC44();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_AnimDynamics_5991C3C04B715B36A0D33080B66FBECE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_TransitionResult_3DA5C7214658D193C32CA1B3EDEC5B06();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_AnimDynamics_E9C191E14BB06C296AAC56B0AB1FA6BF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_TransitionResult_1B9B424241FB104B11A537B7349DA4C7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_TransitionResult_B4789EB84B94BAF324DEDE8E04D6F50B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_TransitionResult_5C591DE54F0AB6A9C9ADEEB4FDDC4C62();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_TwoWayBlend_F55B74BC41101BEBCB2E1FB32E00F62E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_BlendSpacePlayer_50CC758845EBAE09DFE0FFA151BC45A3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_BlendListByEnum_341CAEF947395CE8613E1AA1A1B0CEB9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_ModifyBone_D9BD57E94786BDB98B1024BAA5B2A680();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_ModifyBone_60F7F60D46063AC788F6DAA1F7DDBE0D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_BlendListByEnum_044C21FF45F8C9135ED72E90A1317ACF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_AnimDynamics_631C88D546201C974F742CB8806E8F09();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_BlendSpacePlayer_FE57F22747D2CBE68A6B6C8735A0AA7D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_LayeredBoneBlend_C2F30D7E4BD89239D23E298DD1729B77();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_AnimDynamics_FC292CB34C9D970E666EF9B7433D62D3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_CopyBone_94E5E49E48018345AB9C488D9EB44172();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_Fabrik_50E1CCC144ED9B7CFB3C1890CBA2E662();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_CopyBone_825C3AE34510DAC702F38299520320E5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_Fabrik_217FCB10470A39214309EBB1129EC727();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void OnReady_Event(bool bReady);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CharProxy_AnimBP_AnimGraphNode_BlendListByBool_DE260CEA407C68776D9118B2960C17E9();
	void OnLobbyEmotePlay_Event(const struct FName& EmoteName);
	void ExecuteUbergraph_CharProxy_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
