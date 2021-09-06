// WidgetBlueprintGeneratedClass WBP_DebugMenu.WBP_DebugMenu_C
// Size: 0x47c (Inherited: 0x268)
struct UWBP_DebugMenu_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWBP_DebugMenuPage_AutomatedTests_C* AutomatedTests; // 0x270(0x08)
	struct UWBP_Button_C* AutomatedTestsBtn; // 0x278(0x08)
	struct UWBP_Button_C* BackButton; // 0x280(0x08)
	struct UWBP_Button_C* CloseButton; // 0x288(0x08)
	struct UWBP_Label_C* CurrentPageTitle; // 0x290(0x08)
	struct UWBP_DebugMenuPage_FakeMatch_C* FakeMatch; // 0x298(0x08)
	struct UWBP_DebugMenuPage_Inventory_C* Inventory; // 0x2a0(0x08)
	struct UWBP_Button_C* LowGraphicsButton; // 0x2a8(0x08)
	struct UWBP_DebugMenuPage_Misc_C* Misc; // 0x2b0(0x08)
	struct UWBP_Button_C* OpenFakeMatchMenu; // 0x2b8(0x08)
	struct UWBP_Button_C* OpenInventoryMenu; // 0x2c0(0x08)
	struct UWBP_Button_C* OpenMiscMenu; // 0x2c8(0x08)
	struct UWBP_Button_C* OpenProfileInfo; // 0x2d0(0x08)
	struct UWBP_Button_C* OpenProgressionMenu; // 0x2d8(0x08)
	struct UWBP_Button_C* OpenTutorialMenu; // 0x2e0(0x08)
	struct UWBP_Button_C* PotatoGraphicsButton; // 0x2e8(0x08)
	struct UWBP_DebugMenuPage_ProfileInfo_C* ProfileInfo; // 0x2f0(0x08)
	struct UWBP_DebugMenuPage_Progression_C* Progression; // 0x2f8(0x08)
	struct UVerticalBox* SubMenuButtons; // 0x300(0x08)
	struct UWidgetSwitcher* SubMenuSwitcher; // 0x308(0x08)
	struct UWBP_Button_C* ToggleCheatsVisibility; // 0x310(0x08)
	struct UWBP_Button_C* ToggleDeveloperMode; // 0x318(0x08)
	struct UWBP_DebugMenuPage_Tutorial_C* Tutorial; // 0x320(0x08)
	struct UWBP_Button_C* UltraGraphicsButton; // 0x328(0x08)
	struct UWBP_DebugMenuPage_ViewModes_C* ViewModes; // 0x330(0x08)
	struct UWBP_Button_C* ViewModesBtn; // 0x338(0x08)
	struct UObject* RootItem; // 0x340(0x08)
	struct TArray<enum class EHWVendor> MaterialVendors; // 0x348(0x10)
	struct TArray<enum class EHWRarity> MaterialRarities; // 0x358(0x10)
	struct FHWWeaponParts CachedWeaponData; // 0x368(0xb0)
	struct TArray<struct FString> CosmeticPartCheckResults; // 0x418(0x10)
	struct TMap<struct FString, int32_t> WeaponsMap; // 0x428(0x50)
	int32_t tmpCount; // 0x478(0x04)

	void GetHWPlayerController(struct AHWPlayerController* Controller); // Function WBP_DebugMenu.WBP_DebugMenu_C.GetHWPlayerController // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void BndEvt__ToggleDeveloperMode_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenu.WBP_DebugMenu_C.BndEvt__ToggleDeveloperMode_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ViewModesBtn_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenu.WBP_DebugMenu_C.BndEvt__ViewModesBtn_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__OpenFakeMatchMenu_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenu.WBP_DebugMenu_C.BndEvt__OpenFakeMatchMenu_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Misc_K2Node_ComponentBoundEvent_9_OnClosed__DelegateSignature(); // Function WBP_DebugMenu.WBP_DebugMenu_C.BndEvt__Misc_K2Node_ComponentBoundEvent_9_OnClosed__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__OpenTutorialMenu_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenu.WBP_DebugMenu_C.BndEvt__OpenTutorialMenu_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Tutorial_K2Node_ComponentBoundEvent_17_OnClosed__DelegateSignature(); // Function WBP_DebugMenu.WBP_DebugMenu_C.BndEvt__Tutorial_K2Node_ComponentBoundEvent_17_OnClosed__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ToggleCheatsVisibility_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenu.WBP_DebugMenu_C.BndEvt__ToggleCheatsVisibility_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_DebugMenu.WBP_DebugMenu_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AutomatedTestsBtn_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenu.WBP_DebugMenu_C.BndEvt__AutomatedTestsBtn_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__PotatoGraphicsButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenu.WBP_DebugMenu_C.BndEvt__PotatoGraphicsButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__LowGraphicsButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenu.WBP_DebugMenu_C.BndEvt__LowGraphicsButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__UltraGraphicsButton_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenu.WBP_DebugMenu_C.BndEvt__UltraGraphicsButton_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_Button_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenu.WBP_DebugMenu_C.BndEvt__WBP_Button_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__FakeMatch_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature(); // Function WBP_DebugMenu.WBP_DebugMenu_C.BndEvt__FakeMatch_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_DebugMenu_OpenProfileInfo_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenu.WBP_DebugMenu_C.BndEvt__WBP_DebugMenu_OpenProfileInfo_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ReloadOnComplete(struct FHWResponseBase Response); // Function WBP_DebugMenu.WBP_DebugMenu_C.ReloadOnComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Close Menu(); // Function WBP_DebugMenu.WBP_DebugMenu_C.Close Menu // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GoToTopMenu(); // Function WBP_DebugMenu.WBP_DebugMenu_C.GoToTopMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnMenuKeyPressed(); // Function WBP_DebugMenu.WBP_DebugMenu_C.OnMenuKeyPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnDialogClosed(bool Result); // Function WBP_DebugMenu.WBP_DebugMenu_C.OnDialogClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnComplete(struct FHWResponseBase Response); // Function WBP_DebugMenu.WBP_DebugMenu_C.OnComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnError(enum class EHWErrorMessage Error); // Function WBP_DebugMenu.WBP_DebugMenu_C.OnError // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenu.WBP_DebugMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void GoToSubmenu(struct UWidget* PageWidget); // Function WBP_DebugMenu.WBP_DebugMenu_C.GoToSubmenu // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__PageMisc_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenu.WBP_DebugMenu_C.BndEvt__PageMisc_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__PagePlayer_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenu.WBP_DebugMenu_C.BndEvt__PagePlayer_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_DebugMenu.WBP_DebugMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_DebugMenu_WBP_Button_130_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenu.WBP_DebugMenu_C.BndEvt__WBP_DebugMenu_WBP_Button_130_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnProgressionClosed(); // Function WBP_DebugMenu.WBP_DebugMenu_C.OnProgressionClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_DebugMenu(int32_t EntryPoint); // Function WBP_DebugMenu.WBP_DebugMenu_C.ExecuteUbergraph_WBP_DebugMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

