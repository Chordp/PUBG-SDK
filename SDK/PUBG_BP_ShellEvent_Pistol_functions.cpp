// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_ShellEvent_Pistol_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ShellEvent_Pistol.BP_ShellEvent_Pistol_C.RunEvent
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector                 InCollideDirection             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 InHitLocation                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 InHitNormal                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FName                   InBoneName                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UWorld*                  InWorld                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  InActor                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UBP_ShellEvent_Pistol_C::RunEvent(const struct FVector& InCollideDirection, const struct FVector& InHitLocation, const struct FVector& InHitNormal, const struct FName& InBoneName, class UWorld* InWorld, class AActor* InActor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_ShellEvent_Pistol.BP_ShellEvent_Pistol_C.RunEvent"));

	UBP_ShellEvent_Pistol_C_RunEvent_Params params;
	params.InCollideDirection = InCollideDirection;
	params.InHitLocation = InHitLocation;
	params.InHitNormal = InHitNormal;
	params.InBoneName = InBoneName;
	params.InWorld = InWorld;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShellEvent_Pistol.BP_ShellEvent_Pistol_C.ExecuteUbergraph_BP_ShellEvent_Pistol
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UBP_ShellEvent_Pistol_C::ExecuteUbergraph_BP_ShellEvent_Pistol(int EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_ShellEvent_Pistol.BP_ShellEvent_Pistol_C.ExecuteUbergraph_BP_ShellEvent_Pistol"));

	UBP_ShellEvent_Pistol_C_ExecuteUbergraph_BP_ShellEvent_Pistol_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
