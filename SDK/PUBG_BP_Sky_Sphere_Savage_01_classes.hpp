#pragma once

// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_Sky_Sphere_Savage_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Sky_Sphere_Savage_01.BP_Sky_Sphere_Savage_01_C
// 0x00A8 (0x04A8 - 0x0400)
class ABP_Sky_Sphere_Savage_01_C : public AActor
{
public:
	class UStaticMeshComponent*                        Sky_Sphere_mesh;                                          // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Base;                                                     // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Sky_material;                                             // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Refresh_material;                                         // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0419(0x0007) MISSED OFFSET
	class ADirectionalLight*                           Directional_light_actor;                                  // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               Colors_determined_by_sun_position;                        // 0x0428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0429(0x0003) MISSED OFFSET
	float                                              Sun_height;                                               // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Sun_brightness;                                           // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Horizon_falloff;                                          // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Zenith_color;                                             // 0x0438(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Horizon_color;                                            // 0x0448(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Cloud_color;                                              // 0x0458(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Overall_color;                                            // 0x0468(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Cloud_speed;                                              // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cloud_opacity;                                            // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Stars_brightness;                                         // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0484(0x0004) MISSED OFFSET
	class UCurveLinearColor*                           Horizon_color_curve;                                      // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveLinearColor*                           Zenith_color_curve;                                       // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveLinearColor*                           Cloud_color_curve;                                        // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          SkyMat;                                                   // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_Sky_Sphere_Savage_01.BP_Sky_Sphere_Savage_01_C"));

		return ptr;
	}


	void UpdateSunDirection();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
