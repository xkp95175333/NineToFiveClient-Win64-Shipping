// WidgetBlueprintGeneratedClass WBP_Armory3_WeaponView_Details.WBP_Armory3_WeaponView_Details_C
// Size: 0x2ad (Inherited: 0x260)
struct UWBP_Armory3_WeaponView_Details_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_Armory3_WeaponInfo_Tab_C* Information_Tab; // 0x268(0x08)
	struct UImage* Lines; // 0x270(0x08)
	struct UWBP_Armory3_WeaponParameters_Tab_C* Parameters_Tab; // 0x278(0x08)
	struct UWidgetSwitcher* TabSwitcher; // 0x280(0x08)
	struct UWBP_RichTextLabel_C* VariationText; // 0x288(0x08)
	struct UWBP_NavigationBar_C* WBP_NavigationBar; // 0x290(0x08)
	struct UWBP_RichTextLabel_C* WeaponName; // 0x298(0x08)
	struct UHWArmoryWeaponModel* WeaponModel; // 0x2a0(0x08)
	int32_t CurrentVariationIndex; // 0x2a8(0x04)
	bool Acquired; // 0x2ac(0x01)

	void SetWeaponName(); // Function WBP_Armory3_WeaponView_Details.WBP_Armory3_WeaponView_Details_C.SetWeaponName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Set Content(struct UHWArmoryWeaponModel* WeaponModel, bool IsComparison, int32_t ComparisonIndex); // Function WBP_Armory3_WeaponView_Details.WBP_Armory3_WeaponView_Details_C.Set Content // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_NavigationBar_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct FName ID); // Function WBP_Armory3_WeaponView_Details.WBP_Armory3_WeaponView_Details_C.BndEvt__WBP_NavigationBar_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory3_WeaponView_Details(int32_t EntryPoint); // Function WBP_Armory3_WeaponView_Details.WBP_Armory3_WeaponView_Details_C.ExecuteUbergraph_WBP_Armory3_WeaponView_Details // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

