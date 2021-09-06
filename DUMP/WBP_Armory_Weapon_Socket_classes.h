// WidgetBlueprintGeneratedClass WBP_Armory_Weapon_Socket.WBP_Armory_Weapon_Socket_C
// Size: 0x340 (Inherited: 0x268)
struct UWBP_Armory_Weapon_Socket_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* Socket_Default_OnClick; // 0x270(0x08)
	struct UWidgetAnimation* Socket_Editable_OnClick; // 0x278(0x08)
	struct UWidgetAnimation* Socket_Default_OnHover; // 0x280(0x08)
	struct UWidgetAnimation* Socket_Editable_OnHover; // 0x288(0x08)
	struct UButton* Button_2; // 0x290(0x08)
	struct UButton* ButtonDefault; // 0x298(0x08)
	struct UButton* ButtonEditable; // 0x2a0(0x08)
	struct UWBP_RichTextLabel_C* NewItemsAmount; // 0x2a8(0x08)
	struct UHorizontalBox* Socket_Default; // 0x2b0(0x08)
	struct UHorizontalBox* Socket_Editable; // 0x2b8(0x08)
	struct UHorizontalBox* Socket_Locked; // 0x2c0(0x08)
	struct UImage* SocketBG_2; // 0x2c8(0x08)
	struct UImage* SocketBG_3; // 0x2d0(0x08)
	struct UWBP_RichTextLabel_C* text1; // 0x2d8(0x08)
	struct UWBP_RichTextLabel_C* Text2; // 0x2e0(0x08)
	struct UWBP_RichTextLabel_C* Text3; // 0x2e8(0x08)
	struct UWBP_UIAnimation_RingHighlight_C* WBP_UIAnimation_RingHighlight; // 0x2f0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x2f8(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x300(0x10)
	enum class EHWWeaponPartType WeaponPart; // 0x310(0x01)
	enum class BPE_Armory_Weapon_Socket_State CurrentState; // 0x311(0x01)
	char pad_312[0x6]; // 0x312(0x06)
	struct FText InstalledPartName; // 0x318(0x18)
	struct TArray<enum class EHWCraftingParameterGroup> AffectedParameters; // 0x330(0x10)

	struct UWidget* CreateTooltipWidget(); // Function WBP_Armory_Weapon_Socket.WBP_Armory_Weapon_Socket_C.CreateTooltipWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void BndEvt__ButtonAdd_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Armory_Weapon_Socket.WBP_Armory_Weapon_Socket_C.BndEvt__ButtonAdd_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ButtonFilled_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Armory_Weapon_Socket.WBP_Armory_Weapon_Socket_C.BndEvt__ButtonFilled_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void SetState(enum class BPE_Armory_Weapon_Socket_State State); // Function WBP_Armory_Weapon_Socket.WBP_Armory_Weapon_Socket_C.SetState // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Armory_Weapon_Socket.WBP_Armory_Weapon_Socket_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ButtonAdd_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Armory_Weapon_Socket.WBP_Armory_Weapon_Socket_C.BndEvt__ButtonAdd_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ButtonFilled_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Armory_Weapon_Socket.WBP_Armory_Weapon_Socket_C.BndEvt__ButtonFilled_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ButtonAdd_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Armory_Weapon_Socket.WBP_Armory_Weapon_Socket_C.BndEvt__ButtonAdd_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ButtonFilled_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Armory_Weapon_Socket.WBP_Armory_Weapon_Socket_C.BndEvt__ButtonFilled_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ButtonAdd_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature(); // Function WBP_Armory_Weapon_Socket.WBP_Armory_Weapon_Socket_C.BndEvt__ButtonAdd_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ButtonFilled_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature(); // Function WBP_Armory_Weapon_Socket.WBP_Armory_Weapon_Socket_C.BndEvt__ButtonFilled_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ButtonAdd_K2Node_ComponentBoundEvent_12_OnButtonReleasedEvent__DelegateSignature(); // Function WBP_Armory_Weapon_Socket.WBP_Armory_Weapon_Socket_C.BndEvt__ButtonAdd_K2Node_ComponentBoundEvent_12_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ButtonFilled_K2Node_ComponentBoundEvent_14_OnButtonReleasedEvent__DelegateSignature(); // Function WBP_Armory_Weapon_Socket.WBP_Armory_Weapon_Socket_C.BndEvt__ButtonFilled_K2Node_ComponentBoundEvent_14_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory_Weapon_Socket(int32_t EntryPoint); // Function WBP_Armory_Weapon_Socket.WBP_Armory_Weapon_Socket_C.ExecuteUbergraph_WBP_Armory_Weapon_Socket // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnClicked__DelegateSignature(enum class EHWWeaponPartType WeaponPart, struct UWBP_Armory_Weapon_Socket_C* Widget); // Function WBP_Armory_Weapon_Socket.WBP_Armory_Weapon_Socket_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

