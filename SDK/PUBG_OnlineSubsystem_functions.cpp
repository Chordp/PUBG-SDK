// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_OnlineSubsystem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 Match                          (Parm, ZeroConstructor)
// bool                           bDidBecomeActive               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UTurnBasedMatchInterface::OnMatchReceivedTurn(const struct FString& Match, bool bDidBecomeActive)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn"));

	UTurnBasedMatchInterface_OnMatchReceivedTurn_Params params;
	params.Match = Match;
	params.bDidBecomeActive = bDidBecomeActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 Match                          (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UTurnBasedMatchInterface::OnMatchEnded(const struct FString& Match)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded"));

	UTurnBasedMatchInterface_OnMatchEnded_Params params;
	params.Match = Match;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
