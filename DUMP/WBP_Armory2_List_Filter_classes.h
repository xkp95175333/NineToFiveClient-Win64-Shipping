// WidgetBlueprintGeneratedClass WBP_Armory2_List_Filter.WBP_Armory2_List_Filter_C
// Size: 0x570 (Inherited: 0x268)
struct UWBP_Armory2_List_Filter_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWBP_RadioButton_C* CatButton1; // 0x270(0x08)
	struct UWBP_RadioButton_C* CatButton2; // 0x278(0x08)
	struct UWBP_RadioButton_C* RarityButton1; // 0x280(0x08)
	struct UWBP_RadioButton_C* RarityButton2; // 0x288(0x08)
	struct UWBP_RadioButton_C* RarityButton3; // 0x290(0x08)
	struct UWBP_RadioButton_C* RarityButton4; // 0x298(0x08)
	struct UWBP_RadioButton_C* RarityButton5; // 0x2a0(0x08)
	struct UUniformGridPanel* RarityButtons; // 0x2a8(0x08)
	struct UVerticalBox* RaritySelector; // 0x2b0(0x08)
	struct UWBP_RadioButton_C* TierButton; // 0x2b8(0x08)
	struct UWBP_RadioButton_C* TierButton_2; // 0x2c0(0x08)
	struct UWBP_RadioButton_C* TierButton_3; // 0x2c8(0x08)
	struct UWBP_RadioButton_C* TierButton_4; // 0x2d0(0x08)
	struct UWBP_RadioButton_C* TierButton_5; // 0x2d8(0x08)
	struct UWBP_RadioButton_C* TierButton_6; // 0x2e0(0x08)
	struct UWBP_RadioButton_C* TierButton_7; // 0x2e8(0x08)
	struct UWBP_RadioButton_C* TierButton_8; // 0x2f0(0x08)
	struct UWBP_RadioButton_C* TierButton_9; // 0x2f8(0x08)
	struct UWBP_RadioButton_C* TierButton_10; // 0x300(0x08)
	struct UWBP_RadioButton_C* TierButton_11; // 0x308(0x08)
	struct UWBP_RadioButton_C* TierButton_12; // 0x310(0x08)
	struct UWBP_RadioButton_C* TierButton_13; // 0x318(0x08)
	struct UUniformGridPanel* TierButtons; // 0x320(0x08)
	struct UVerticalBox* TierSelector; // 0x328(0x08)
	struct UWBP_RadioButton_C* VendorButton1; // 0x330(0x08)
	struct UWBP_RadioButton_C* VendorButton2; // 0x338(0x08)
	struct UWBP_RadioButton_C* VendorButton3; // 0x340(0x08)
	struct UUniformGridPanel* VendorButtons; // 0x348(0x08)
	struct UVerticalBox* VendorSelector; // 0x350(0x08)
	struct UWBP_Box_C* WBP_Box; // 0x358(0x08)
	struct UWBP_Box_C* WBP_Box_126; // 0x360(0x08)
	struct UWBP_Box_C* WBP_Box_646; // 0x368(0x08)
	struct UWBP_Box_C* WBP_Box_816; // 0x370(0x08)
	struct UWBP_Box_C* WBP_Box_1066; // 0x378(0x08)
	struct UWBP_SectionHeaderBlack_C* WBP_SectionHeaderRarity; // 0x380(0x08)
	struct UWBP_SectionHeaderBlack_C* WBP_SectionHeaderTier; // 0x388(0x08)
	struct UWBP_SectionHeaderBlack_C* WBP_SectionHeaderType; // 0x390(0x08)
	struct UWBP_SectionHeaderBlack_C* WBP_SectionHeaderWeaponType; // 0x398(0x08)
	struct UWBP_SectionHeaderBlack_C* WBP_SectionHeaderWeaponType_2; // 0x3a0(0x08)
	struct UUniformGridPanel* WeaponCategoryButtons; // 0x3a8(0x08)
	struct UUniformGridPanel* WeaponTypeButtons; // 0x3b0(0x08)
	struct UVerticalBox* WeaponTypeSelector; // 0x3b8(0x08)
	struct FMulticastInlineDelegate OnFilterChanged; // 0x3c0(0x10)
	struct UHWInventoryItemFilter* CurrentItemFilter; // 0x3d0(0x08)
	struct TMap<enum class EHWVendor, struct UWBP_RadioButton_C*> VendorButtonMap; // 0x3d8(0x50)
	struct TMap<enum class EHWRarity, struct UWBP_RadioButton_C*> RarityButtonMap; // 0x428(0x50)
	struct TMap<int32_t, struct UWBP_RadioButton_C*> TierButtonMap; // 0x478(0x50)
	struct TMap<enum class EHWWeaponType, struct UWBP_RadioButton_C*> WeaponTypeButtonMap; // 0x4c8(0x50)
	struct TMap<enum class EHWWeaponCategory, struct UWBP_RadioButton_C*> WeaponCategoryButtonMap; // 0x518(0x50)
	int32_t CurrentDisplayedCount; // 0x568(0x04)
	int32_t CurrentTotalCount; // 0x56c(0x04)

	void Find All Buttons(struct UPanelWidget* panel, struct TArray<struct UWBP_RadioButton_C*> Buttons); // Function WBP_Armory2_List_Filter.WBP_Armory2_List_Filter_C.Find All Buttons // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	bool AcceptsItem(struct UHWInventoryItemBase* Item); // Function WBP_Armory2_List_Filter.WBP_Armory2_List_Filter_C.AcceptsItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Armory2_List_Filter.WBP_Armory2_List_Filter_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void AddClickHandlers(); // Function WBP_Armory2_List_Filter.WBP_Armory2_List_Filter_C.AddClickHandlers // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnVendorClicked(struct UWBP_RadioButton_C* Button); // Function WBP_Armory2_List_Filter.WBP_Armory2_List_Filter_C.OnVendorClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnRarityClick(struct UWBP_RadioButton_C* Button); // Function WBP_Armory2_List_Filter.WBP_Armory2_List_Filter_C.OnRarityClick // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnTierClicked(struct UWBP_RadioButton_C* Button); // Function WBP_Armory2_List_Filter.WBP_Armory2_List_Filter_C.OnTierClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnWeaponTypeClicked(struct UWBP_RadioButton_C* Button); // Function WBP_Armory2_List_Filter.WBP_Armory2_List_Filter_C.OnWeaponTypeClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetItemFilter(struct UHWInventoryItemFilter* Filter); // Function WBP_Armory2_List_Filter.WBP_Armory2_List_Filter_C.SetItemFilter // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CreateButtonMaps(); // Function WBP_Armory2_List_Filter.WBP_Armory2_List_Filter_C.CreateButtonMaps // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ResetAllSelections(); // Function WBP_Armory2_List_Filter.WBP_Armory2_List_Filter_C.ResetAllSelections // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ResetSelection(struct TArray<struct UWBP_RadioButton_C*> Buttons); // Function WBP_Armory2_List_Filter.WBP_Armory2_List_Filter_C.ResetSelection // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateDisplayedCount(int32_t Displayed, int32_t Total); // Function WBP_Armory2_List_Filter.WBP_Armory2_List_Filter_C.UpdateDisplayedCount // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ResetFilter(); // Function WBP_Armory2_List_Filter.WBP_Armory2_List_Filter_C.ResetFilter // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnCategoryClicked(struct UWBP_RadioButton_C* Button); // Function WBP_Armory2_List_Filter.WBP_Armory2_List_Filter_C.OnCategoryClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory2_List_Filter(int32_t EntryPoint); // Function WBP_Armory2_List_Filter.WBP_Armory2_List_Filter_C.ExecuteUbergraph_WBP_Armory2_List_Filter // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnFilterChanged__DelegateSignature(); // Function WBP_Armory2_List_Filter.WBP_Armory2_List_Filter_C.OnFilterChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

