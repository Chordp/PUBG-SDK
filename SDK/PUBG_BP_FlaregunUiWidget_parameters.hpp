#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_FlaregunUiWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_FlaregunUiWidget.BP_FlaregunUiWidget_C.IsCarePackageComming
struct UBP_FlaregunUiWidget_C_IsCarePackageComming_Params
{
	bool                                               IsCarePackageComing;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsVehicleComing;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FlaregunUiWidget.BP_FlaregunUiWidget_C.ShowTitle
struct UBP_FlaregunUiWidget_C_ShowTitle_Params
{
	bool*                                              bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FlaregunUiWidget.BP_FlaregunUiWidget_C.IsCharacterInWhiteZone
struct UBP_FlaregunUiWidget_C_IsCharacterInWhiteZone_Params
{
	bool                                               IsIn;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FlaregunUiWidget.BP_FlaregunUiWidget_C.SetVehicleNumber
struct UBP_FlaregunUiWidget_C_SetVehicleNumber_Params
{
	int*                                               NumVehicle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              CanFire;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              WaitingMine;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FlaregunUiWidget.BP_FlaregunUiWidget_C.SetPackageNumber
struct UBP_FlaregunUiWidget_C_SetPackageNumber_Params
{
	int*                                               NumPackage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              CanFire;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              WaitingMine;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FlaregunUiWidget.BP_FlaregunUiWidget_C.Tick
struct UBP_FlaregunUiWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FlaregunUiWidget.BP_FlaregunUiWidget_C.ExecuteUbergraph_BP_FlaregunUiWidget
struct UBP_FlaregunUiWidget_C_ExecuteUbergraph_BP_FlaregunUiWidget_Params
{
	int*                                               EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
