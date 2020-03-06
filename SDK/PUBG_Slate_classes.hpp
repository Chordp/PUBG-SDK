#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Slate_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Slate.ButtonWidgetStyle
// 0x02A8 (0x02D8 - 0x0030)
class UButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FButtonStyle                                ButtonStyle;                                              // 0x0030(0x02A8) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Slate.ButtonWidgetStyle"));

		return ptr;
	}

};


// Class Slate.CheckBoxWidgetStyle
// 0x05E0 (0x0610 - 0x0030)
class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FCheckBoxStyle                              CheckBoxStyle;                                            // 0x0030(0x05E0) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Slate.CheckBoxWidgetStyle"));

		return ptr;
	}

};


// Class Slate.ComboBoxWidgetStyle
// 0x0428 (0x0458 - 0x0030)
class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FComboBoxStyle                              ComboBoxStyle;                                            // 0x0030(0x0428) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Slate.ComboBoxWidgetStyle"));

		return ptr;
	}

};


// Class Slate.ComboButtonWidgetStyle
// 0x03E0 (0x0410 - 0x0030)
class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FComboButtonStyle                           ComboButtonStyle;                                         // 0x0030(0x03E0) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Slate.ComboButtonWidgetStyle"));

		return ptr;
	}

};


// Class Slate.EditableTextBoxWidgetStyle
// 0x0870 (0x08A0 - 0x0030)
class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextBoxStyle                       EditableTextBoxStyle;                                     // 0x0030(0x0870) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Slate.EditableTextBoxWidgetStyle"));

		return ptr;
	}

};


// Class Slate.EditableTextWidgetStyle
// 0x0248 (0x0278 - 0x0030)
class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextStyle                          EditableTextStyle;                                        // 0x0030(0x0248) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Slate.EditableTextWidgetStyle"));

		return ptr;
	}

};


// Class Slate.ProgressWidgetStyle
// 0x01B8 (0x01E8 - 0x0030)
class UProgressWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FProgressBarStyle                           ProgressBarStyle;                                         // 0x0030(0x01B8) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Slate.ProgressWidgetStyle"));

		return ptr;
	}

};


// Class Slate.ScrollBarWidgetStyle
// 0x0518 (0x0548 - 0x0030)
class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x0030(0x0518) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Slate.ScrollBarWidgetStyle"));

		return ptr;
	}

};


// Class Slate.ScrollBoxWidgetStyle
// 0x0248 (0x0278 - 0x0030)
class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBoxStyle                             ScrollBoxStyle;                                           // 0x0030(0x0248) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Slate.ScrollBoxWidgetStyle"));

		return ptr;
	}

};


// Class Slate.SlateSettings
// 0x0008 (0x0030 - 0x0028)
class USlateSettings : public UObject
{
public:
	bool                                               bVirtualKeyboardSendsTextChanged;                         // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bVirtualKeyboardDisplayOnFocus;                           // 0x0029(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bExplicitCanvasChildZOrder;                               // 0x002A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x002B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Slate.SlateSettings"));

		return ptr;
	}

};


// Class Slate.SpinBoxWidgetStyle
// 0x0310 (0x0340 - 0x0030)
class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FSpinBoxStyle                               SpinBoxStyle;                                             // 0x0030(0x0310) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Slate.SpinBoxWidgetStyle"));

		return ptr;
	}

};


// Class Slate.TextBlockWidgetStyle
// 0x0208 (0x0238 - 0x0030)
class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FTextBlockStyle                             TextBlockStyle;                                           // 0x0030(0x0208) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Slate.TextBlockWidgetStyle"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
