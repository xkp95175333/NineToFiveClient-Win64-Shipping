// WidgetBlueprintGeneratedClass WBP_Armory3_WeaponPart_Tooltip.WBP_Armory3_WeaponPart_Tooltip_C
// Size: 0x2f0 (Inherited: 0x260)
struct UWBP_Armory3_WeaponPart_Tooltip_C : UUserWidget {
	struct UWBP_Armory3_WeaponPart_Set_C* AddOrBasicWeaponPartSet_Info; // 0x260(0x08)
	struct UImage* Header_Divider; // 0x268(0x08)
	struct UWBP_Armory3_WeaponPart_Set_C* OnRemoveWeaponPartSet_Info; // 0x270(0x08)
	struct UOverlay* Overlay_46; // 0x278(0x08)
	struct UVerticalBox* ParametersBox; // 0x280(0x08)
	struct UVerticalBox* SetsBox; // 0x288(0x08)
	struct USpacer* Spacer_123; // 0x290(0x08)
	struct UWBP_Armory3_ParameterBar_C* WBP_Armory3_ParameterBar; // 0x298(0x08)
	struct UWBP_Armory3_ParameterBar_C* WBP_Armory3_ParameterBar_2; // 0x2a0(0x08)
	struct UWBP_Armory3_ParameterBar_C* WBP_Armory3_ParameterBar_3; // 0x2a8(0x08)
	struct UWBP_Armory3_ParameterBar_C* WBP_Armory3_ParameterBar_4; // 0x2b0(0x08)
	struct UWBP_Box_C* WBP_Box; // 0x2b8(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel; // 0x2c0(0x08)
	struct UHWWeaponParameters* WeaponParameters; // 0x2c8(0x08)
	struct FString ReceiverItemId; // 0x2d0(0x10)
	struct FName ReceiverId; // 0x2e0(0x08)
	struct FName AssembledWeaponId; // 0x2e8(0x08)

	void CreateParameterBar(enum class BPE_Armory_Progress_Bar_Mode DisplayMode, struct UHWWeaponParameter* WeaponParameter); // Function WBP_Armory3_WeaponPart_Tooltip.WBP_Armory3_WeaponPart_Tooltip_C.CreateParameterBar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetPartSetContent(struct UHWArmoryWeaponPartItem* HoveredPart, bool IsComparison); // Function WBP_Armory3_WeaponPart_Tooltip.WBP_Armory3_WeaponPart_Tooltip_C.SetPartSetContent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetPartContent(struct FString ReceiverItemId, struct UHWArmoryWeaponPartItem* HoveredPart); // Function WBP_Armory3_WeaponPart_Tooltip.WBP_Armory3_WeaponPart_Tooltip_C.SetPartContent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetPartComparisonContent(struct FString ReceiverItemId, struct UHWArmoryWeaponPartItem* HoveredPart); // Function WBP_Armory3_WeaponPart_Tooltip.WBP_Armory3_WeaponPart_Tooltip_C.SetPartComparisonContent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

