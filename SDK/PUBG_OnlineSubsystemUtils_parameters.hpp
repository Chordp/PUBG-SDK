#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_OnlineSubsystemUtils_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress
struct UAchievementBlueprintLibrary_GetCachedAchievementProgress_Params
{
<<<<<<< HEAD
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      AchievementID;                                            // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AchievementID;                                            // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               bFoundID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Progress;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription
struct UAchievementBlueprintLibrary_GetCachedAchievementDescription_Params
{
<<<<<<< HEAD
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      AchievementID;                                            // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AchievementID;                                            // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               bFoundID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm, OutParm)
	struct FText                                       LockedDescription;                                        // (Parm, OutParm)
	struct FText                                       UnlockedDescription;                                      // (Parm, OutParm)
	bool                                               bHidden;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
struct UAchievementQueryCallbackProxy_CacheAchievements_Params
{
<<<<<<< HEAD
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	class UAchievementQueryCallbackProxy*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
struct UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Params
{
<<<<<<< HEAD
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	class UAchievementQueryCallbackProxy*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
struct UAchievementWriteCallbackProxy_WriteAchievementProgress_Params
{
<<<<<<< HEAD
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      AchievementName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UserTag;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AchievementName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                UserTag;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	class UAchievementWriteCallbackProxy*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
struct UConnectionCallbackProxy_ConnectToService_Params
{
<<<<<<< HEAD
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	class UConnectionCallbackProxy*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
struct UCreateSessionCallbackProxy_CreateSession_Params
{
<<<<<<< HEAD
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               PublicConnections;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bUseLAN;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PublicConnections;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLAN;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	class UCreateSessionCallbackProxy*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
struct UDestroySessionCallbackProxy_DestroySession_Params
{
<<<<<<< HEAD
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	class UDestroySessionCallbackProxy*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
struct UEndMatchCallbackProxy_EndMatch_Params
{
<<<<<<< HEAD
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UTurnBasedMatchInterface>*  MatchActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    MatchId;                                                  // (Parm, ZeroConstructor)
	TEnumAsByte<EMPMatchOutcome>*                      LocalPlayerOutcome;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMPMatchOutcome>*                      OtherPlayersOutcome;                                      // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UTurnBasedMatchInterface>   MatchActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MatchId;                                                  // (Parm, ZeroConstructor)
	TEnumAsByte<EMPMatchOutcome>                       LocalPlayerOutcome;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMPMatchOutcome>                       OtherPlayersOutcome;                                      // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	class UEndMatchCallbackProxy*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
struct UEndTurnCallbackProxy_EndTurn_Params
{
<<<<<<< HEAD
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    MatchId;                                                  // (Parm, ZeroConstructor)
	TScriptInterface<class UTurnBasedMatchInterface>*  TurnBasedMatchInterface;                                  // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MatchId;                                                  // (Parm, ZeroConstructor)
	TScriptInterface<class UTurnBasedMatchInterface>   TurnBasedMatchInterface;                                  // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	class UEndTurnCallbackProxy*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
struct UFindSessionsCallbackProxy_GetServerName_Params
{
<<<<<<< HEAD
	struct FBlueprintSessionResult*                    Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
=======
	struct FBlueprintSessionResult                     Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
struct UFindSessionsCallbackProxy_GetPingInMs_Params
{
<<<<<<< HEAD
	struct FBlueprintSessionResult*                    Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
=======
	struct FBlueprintSessionResult                     Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
struct UFindSessionsCallbackProxy_GetMaxPlayers_Params
{
<<<<<<< HEAD
	struct FBlueprintSessionResult*                    Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
=======
	struct FBlueprintSessionResult                     Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
struct UFindSessionsCallbackProxy_GetCurrentPlayers_Params
{
<<<<<<< HEAD
	struct FBlueprintSessionResult*                    Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
=======
	struct FBlueprintSessionResult                     Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
struct UFindSessionsCallbackProxy_FindSessions_Params
{
<<<<<<< HEAD
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MaxResults;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bUseLAN;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxResults;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLAN;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	class UFindSessionsCallbackProxy*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
struct UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Params
{
<<<<<<< HEAD
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UTurnBasedMatchInterface>*  MatchActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MinPlayers;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MaxPlayers;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               PlayerGroup;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ShowExistingMatches;                                      // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UTurnBasedMatchInterface>   MatchActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MinPlayers;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxPlayers;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerGroup;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowExistingMatches;                                      // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	class UFindTurnBasedMatchCallbackProxy*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase
struct UInAppPurchaseCallbackProxy_CreateProxyObjectForInAppPurchase_Params
{
<<<<<<< HEAD
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FInAppPurchaseProductRequest*               ProductRequest;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
=======
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FInAppPurchaseProductRequest                ProductRequest;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	class UInAppPurchaseCallbackProxy*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery
struct UInAppPurchaseQueryCallbackProxy_CreateProxyObjectForInAppPurchaseQuery_Params
{
<<<<<<< HEAD
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>*                            ProductIdentifiers;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
=======
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             ProductIdentifiers;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	class UInAppPurchaseQueryCallbackProxy*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore
struct UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Params
{
<<<<<<< HEAD
	TArray<struct FInAppPurchaseProductRequest>*       ConsumableProductFlags;                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
=======
	TArray<struct FInAppPurchaseProductRequest>        ConsumableProductFlags;                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	class UInAppPurchaseRestoreCallbackProxy*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
struct UJoinSessionCallbackProxy_JoinSession_Params
{
<<<<<<< HEAD
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBlueprintSessionResult*                    SearchResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
=======
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBlueprintSessionResult                     SearchResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	class UJoinSessionCallbackProxy*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger
struct ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Params
{
<<<<<<< HEAD
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      StatName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StatValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StatName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StatValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
struct ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Params
{
<<<<<<< HEAD
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      SessionName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SessionName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	class ULeaderboardFlushCallbackProxy*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
struct ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Params
{
<<<<<<< HEAD
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      StatName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StatName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	class ULeaderboardQueryCallbackProxy*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout
struct ULogoutCallbackProxy_Logout_Params
{
<<<<<<< HEAD
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	class ULogoutCallbackProxy*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected
struct AOnlineBeaconClient_ClientOnConnected_Params
{
};

// Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
struct APartyBeaconClient_ServerUpdateReservationRequest_Params
{
<<<<<<< HEAD
	struct FString*                                    SessionId;                                                // (Parm, ZeroConstructor)
	struct FPartyReservation*                          ReservationUpdate;                                        // (ConstParm, Parm, ReferenceParm)
=======
	struct FString                                     SessionId;                                                // (Parm, ZeroConstructor)
	struct FPartyReservation                           ReservationUpdate;                                        // (ConstParm, Parm, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
struct APartyBeaconClient_ServerReservationRequest_Params
{
<<<<<<< HEAD
	struct FString*                                    SessionId;                                                // (Parm, ZeroConstructor)
	struct FPartyReservation*                          Reservation;                                              // (ConstParm, Parm, ReferenceParm)
=======
	struct FString                                     SessionId;                                                // (Parm, ZeroConstructor)
	struct FPartyReservation                           Reservation;                                              // (ConstParm, Parm, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
struct APartyBeaconClient_ServerCancelReservationRequest_Params
{
<<<<<<< HEAD
	struct FUniqueNetIdRepl*                           PartyLeader;                                              // (ConstParm, Parm, ReferenceParm)
=======
	struct FUniqueNetIdRepl                            PartyLeader;                                              // (ConstParm, Parm, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates
struct APartyBeaconClient_ClientSendReservationUpdates_Params
{
<<<<<<< HEAD
	int*                                               NumRemainingReservations;                                 // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                NumRemainingReservations;                                 // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull
struct APartyBeaconClient_ClientSendReservationFull_Params
{
};

// Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
struct APartyBeaconClient_ClientReservationResponse_Params
{
<<<<<<< HEAD
	TEnumAsByte<EPartyReservationResult>*              ReservationResponse;                                      // (Parm, ZeroConstructor, IsPlainOldData)
=======
	TEnumAsByte<EPartyReservationResult>               ReservationResponse;                                      // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse
struct APartyBeaconClient_ClientCancelReservationResponse_Params
{
<<<<<<< HEAD
	TEnumAsByte<EPartyReservationResult>*              ReservationResponse;                                      // (Parm, ZeroConstructor, IsPlainOldData)
=======
	TEnumAsByte<EPartyReservationResult>               ReservationResponse;                                      // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function OnlineSubsystemUtils.TestBeaconClient.ServerPong
struct ATestBeaconClient_ServerPong_Params
{
};

// Function OnlineSubsystemUtils.TestBeaconClient.ClientPing
struct ATestBeaconClient_ClientPing_Params
{
};

// Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
struct UQuitMatchCallbackProxy_QuitMatch_Params
{
<<<<<<< HEAD
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    MatchId;                                                  // (Parm, ZeroConstructor)
	TEnumAsByte<EMPMatchOutcome>*                      Outcome;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TurnTimeoutInSeconds;                                     // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MatchId;                                                  // (Parm, ZeroConstructor)
	TEnumAsByte<EMPMatchOutcome>                       Outcome;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TurnTimeoutInSeconds;                                     // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	class UQuitMatchCallbackProxy*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
struct UShowLoginUICallbackProxy_ShowExternalLoginUI_Params
{
<<<<<<< HEAD
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          InPlayerController;                                       // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           InPlayerController;                                       // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	class UShowLoginUICallbackProxy*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject
struct UTurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject_Params
{
<<<<<<< HEAD
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName
struct UTurnBasedBlueprintLibrary_GetPlayerDisplayName_Params
{
<<<<<<< HEAD
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    MatchId;                                                  // (Parm, ZeroConstructor)
	int*                                               PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MatchId;                                                  // (Parm, ZeroConstructor)
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	struct FString                                     PlayerDisplayName;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex
struct UTurnBasedBlueprintLibrary_GetMyPlayerIndex_Params
{
<<<<<<< HEAD
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    MatchId;                                                  // (Parm, ZeroConstructor)
=======
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MatchId;                                                  // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	int                                                PlayerIndex;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn
struct UTurnBasedBlueprintLibrary_GetIsMyTurn_Params
{
<<<<<<< HEAD
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    MatchId;                                                  // (Parm, ZeroConstructor)
=======
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MatchId;                                                  // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               bIsMyTurn;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
