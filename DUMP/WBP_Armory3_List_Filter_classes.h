// WidgetBlueprintGeneratedClass WBP_Armory3_List_Filter.WBP_Armory3_List_Filter_C
// Size: 0x448 (Inherited: 0x268)
struct UWBP_Armory3_List_Filter_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWBP_RadioButton_C* AR_Button; // 0x270(0x08)
	struct UWBP_RadioButton_C* CatButton1; // 0x278(0x08)
	struct UWBP_RadioButton_C* CatButton2; // 0x280(0x08)
	struct UWBP_MainButton_C* ClearFilterButton; // 0x288(0x08)
	struct UWBP_RichTextLabel_C* DisplayedItemsLabel; // 0x290(0x08)
	struct UWBP_RadioButton_C* Farmira_Button; // 0x298(0x08)
	struct UWBP_RadioButton_C* LMG_Button; // 0x2a0(0x08)
	struct UWBP_RadioButton_C* MashMedia_Button; // 0x2a8(0x08)
	struct UWBP_RadioButton_C* NWF_Button; // 0x2b0(0x08)
	struct UWBP_RadioButton_C* Pistol_Button; // 0x2b8(0x08)
	struct UWBP_RadioButton_C* SG_Button; // 0x2c0(0x08)
	struct UWBP_RadioButton_C* SGR_Button; // 0x2c8(0x08)
	struct UWBP_RadioButton_C* SMG_Button; // 0x2d0(0x08)
	struct UWBP_RadioButton_C* Sniper_Button; // 0x2d8(0x08)
	struct UUniformGridPanel* VendorButtons; // 0x2e0(0x08)
	struct UVerticalBox* VendorSelector; // 0x2e8(0x08)
	struct UWBP_Box_C* WBP_Box; // 0x2f0(0x08)
	struct UWBP_Box_C* WBP_Box_816; // 0x2f8(0x08)
	struct UWBP_Box_C* WBP_Box_1066; // 0x300(0x08)
	struct UWBP_SectionHeaderBlack_C* WBP_SectionHeaderType; // 0x308(0x08)
	struct UWBP_SectionHeaderBlack_C* WBP_SectionHeaderWeaponType; // 0x310(0x08)
	struct UWBP_SectionHeaderBlack_C* WBP_SectionHeaderWeaponType_2; // 0x318(0x08)
	struct UUniformGridPanel* WeaponCategoryButtons; // 0x320(0x08)
	struct UUniformGridPanel* WeaponTypeButtons; // 0x328(0x08)
	struct UVerticalBox* WeaponTypeSelector; // 0x330(0x08)
	struct FMulticastInlineDelegate OnFilterChanged; // 0x338(0x10)
	struct TMap<enum class EHWFaction, struct UWBP_RadioButton_C*> FactionButtonMap; // 0x348(0x50)
	struct TMap<enum class EHWWeaponType, struct UWBP_RadioButton_C*> WeaponTypeButtonMap; // 0x398(0x50)
	struct TMap<enum class EHWWeaponCategory, struct UWBP_RadioButton_C*> WeaponCategoryButtonMap; // 0x3e8(0x50)
	int32_t CurrentDisplayedCount; // 0x438(0x04)
	int32_t CurrentTotalCount; // 0x43c(0x04)
	struct UHWArmoryWeaponModelFilter* ItemFilter; // 0x440(0x08)

	void Find All Buttons(struct UPanelWidget* panel, struct TArray<struct UWBP_RadioButton_C*> Buttons); // Function WBP_Armory3_List_Filter.WBP_Armory3_List_Filter_C.Find All Buttons // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	bool AcceptsItem(struct UHWArmoryWeaponModel* Item); // Function WBP_Armory3_List_Filter.WBP_Armory3_List_Filter_C.AcceptsItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Armory3_List_Filter.WBP_Armory3_List_Filter_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void AddClickHandlers(); // Function WBP_Armory3_List_Filter.WBP_Armory3_List_Filter_C.AddClickHandlers // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnVendorClicked(struct UWBP_RadioButton_C* Button); // Function WBP_Armory3_List_Filter.WBP_Armory3_List_Filter_C.OnVendorClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnWeaponTypeClicked(struct UWBP_RadioButton_C* Button); // Function WBP_Armory3_List_Filter.WBP_Armory3_List_Filter_C.OnWeaponTypeClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetItemFilter(struct UHWArmoryWeaponModelFilter* Filter); // Function WBP_Armory3_List_Filter.WBP_Armory3_List_Filter_C.SetItemFilter // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CreateButtonMaps(); // Function WBP_Armory3_List_Filter.WBP_Armory3_List_Filter_C.CreateButtonMaps // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ResetAllSelections(); // Function WBP_Armory3_List_Filter.WBP_Armory3_List_Filter_C.ResetAllSelections // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ResetSelection(struct TArray<struct UWBP_RadioButton_C*> Buttons); // Function WBP_Armory3_List_Filter.WBP_Armory3_List_Filter_C.ResetSelection // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateDisplayedCount(int32_t Displayed, int32_t Total); // Function WBP_Armory3_List_Filter.WBP_Armory3_List_Filter_C.UpdateDisplayedCount // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ResetFilter(); // Function WBP_Armory3_List_Filter.WBP_Armory3_List_Filter_C.ResetFilter // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnCategoryClicked(struct UWBP_RadioButton_C* Button); // Function WBP_Armory3_List_Filter.WBP_Armory3_List_Filter_C.OnCategoryClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ClearFilterButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_Armory3_List_Filter.WBP_Armory3_List_Filter_C.BndEvt__ClearFilterButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory3_List_Filter(int32_t EntryPoint); // Function WBP_Armory3_List_Filter.WBP_Armory3_List_Filter_C.ExecuteUbergraph_WBP_Armory3_List_Filter // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnFilterChanged__DelegateSignature(); // Function WBP_Armory3_List_Filter.WBP_Armory3_List_Filter_C.OnFilterChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

