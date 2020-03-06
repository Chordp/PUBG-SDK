#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Basic.hpp"
#include "PUBG_SlateCore_classes.hpp"
#include "PUBG_CoreUObject_classes.hpp"
#include "PUBG_InputCore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Slate.ETextFlowDirection
enum class ETextFlowDirection : uint8_t
{
	Auto                           = 0,
	LeftToRight                    = 1,
	RightToLeft                    = 2,
	ETextFlowDirection_MAX         = 3
};


// Enum Slate.ETextWrappingPolicy
enum class ETextWrappingPolicy : uint8_t
{
	DefaultWrapping                = 0,
	AllowPerCharacterWrapping      = 1,
	ETextWrappingPolicy_MAX        = 2
};


// Enum Slate.ETextJustify
enum class ETextJustify : uint8_t
{
	Left                           = 0,
	Center                         = 1,
	Right                          = 2,
	ETextJustify_MAX               = 3
};


// Enum Slate.ETableViewMode
enum class ETableViewMode : uint8_t
{
	List                           = 0,
	Tile                           = 1,
	Tree                           = 2,
	ETableViewMode_MAX             = 3
};


// Enum Slate.ESelectionMode
enum class ESelectionMode : uint8_t
{
	None                           = 0,
	Single                         = 1,
	SingleToggle                   = 2,
	Multi                          = 3,
	ESelectionMode_MAX             = 4
};


// Enum Slate.EStretch
enum class EStretch : uint8_t
{
	None                           = 0,
	Fill                           = 1,
	ScaleToFit                     = 2,
	ScaleToFitX                    = 3,
	ScaleToFitY                    = 4,
	ScaleToFill                    = 5,
	ScaleBySafeZone                = 6,
	UserSpecified                  = 7,
	EStretch_MAX                   = 8
};


// Enum Slate.EStretchDirection
enum class EStretchDirection : uint8_t
{
	Both                           = 0,
	DownOnly                       = 1,
	UpOnly                         = 2,
	EStretchDirection_MAX          = 3
};


// Enum Slate.EProgressBarFillType
enum class EProgressBarFillType : uint8_t
{
	LeftToRight                    = 0,
	RightToLeft                    = 1,
	FillFromCenter                 = 2,
	TopToBottom                    = 3,
	BottomToTop                    = 4,
	EProgressBarFillType_MAX       = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Slate.InputChord
// 0x0020
struct FInputChord
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (Edit)
	unsigned char                                      bShift : 1;                                               // 0x0018(0x0001) (Edit)
	unsigned char                                      bCtrl : 1;                                                // 0x0018(0x0001) (Edit)
	unsigned char                                      bAlt : 1;                                                 // 0x0018(0x0001) (Edit)
	unsigned char                                      bCmd : 1;                                                 // 0x0018(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct Slate.Anchors
// 0x0010
struct FAnchors
{
	struct FVector2D                                   Minimum;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   Maximum;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
