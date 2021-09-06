// WidgetBlueprintGeneratedClass WBP_MatchDebugMenu.WBP_MatchDebugMenu_C
// Size: 0x408 (Inherited: 0x268)
struct UWBP_MatchDebugMenu_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWBP_Button_C* BackButton; // 0x270(0x08)
	struct UWBP_Label_C* CurrentPageTitle; // 0x278(0x08)
	struct UWBP_Button_C* DumpCharVisualDataBtn; // 0x280(0x08)
	struct UWBP_DebugMenuPage_ChangeArmorSet_C* EditLoadout; // 0x288(0x08)
	struct UWBP_Button_C* LowGraphicsButton; // 0x290(0x08)
	struct UWBP_Button_C* OpenArmorSetEdit; // 0x298(0x08)
	struct UWBP_Button_C* OpenSpawnDummy; // 0x2a0(0x08)
	struct UWBP_Button_C* OpenTeleportList; // 0x2a8(0x08)
	struct UWBP_Button_C* OpenWeaponEdit; // 0x2b0(0x08)
	struct UWBP_Button_C* PotatoGraphicsButton; // 0x2b8(0x08)
	struct UWBP_Button_C* ReportMeshVisibilityBugBtn; // 0x2c0(0x08)
	struct UWBP_DebugMenu_SpawnTargetDummy_C* SpawnTargetDummy; // 0x2c8(0x08)
	struct UVerticalBox* SubMenuButtons; // 0x2d0(0x08)
	struct UWidgetSwitcher* SubMenuSwitcher; // 0x2d8(0x08)
	struct UWBP_DebugMenuPage_Teleport_C* Teleport; // 0x2e0(0x08)
	struct UWBP_Button_C* ToggleDeveloperMode; // 0x2e8(0x08)
	struct UWBP_Button_C* UltraGraphicsButton; // 0x2f0(0x08)
	struct UWBP_DebugMenuPage_ViewModes_C* ViewModes; // 0x2f8(0x08)
	struct UWBP_Button_C* ViewModesBtn; // 0x300(0x08)
	struct UWBP_Button_C* WBP_Button; // 0x308(0x08)
	struct UWBP_Label_C* WBP_Label; // 0x310(0x08)
	struct UWBP_Label_C* WBP_Label_3; // 0x318(0x08)
	struct UWBP_Label_C* WBP_Label_4; // 0x320(0x08)
	struct UWBP_DebugMenuPage_EditWeapon_C* WeaponEditor; // 0x328(0x08)
	struct UObject* RootItem; // 0x330(0x08)
	struct TArray<enum class EHWVendor> MaterialVendors; // 0x338(0x10)
	struct TArray<enum class EHWRarity> MaterialRarities; // 0x348(0x10)
	struct FHWWeaponParts CachedWeaponData; // 0x358(0xb0)

	void SendSpecterVisibilityDebug(); // Function WBP_MatchDebugMenu.WBP_MatchDebugMenu_C.SendSpecterVisibilityDebug // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetHWPlayerController(struct AHWPlayerController* Controller); // Function WBP_MatchDebugMenu.WBP_MatchDebugMenu_C.GetHWPlayerController // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_MatchDebugMenu.WBP_MatchDebugMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnError(enum class EHWErrorMessage Error); // Function WBP_MatchDebugMenu.WBP_MatchDebugMenu_C.OnError // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnComplete(struct FHWResponseBase Response); // Function WBP_MatchDebugMenu.WBP_MatchDebugMenu_C.OnComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnDialogClosed(bool Result); // Function WBP_MatchDebugMenu.WBP_MatchDebugMenu_C.OnDialogClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GoToSubmenu(struct UWidget* PageWidget); // Function WBP_MatchDebugMenu.WBP_MatchDebugMenu_C.GoToSubmenu // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_MatchDebugMenu.WBP_MatchDebugMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMenuKeyPressed(); // Function WBP_MatchDebugMenu.WBP_MatchDebugMenu_C.OnMenuKeyPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GoToTopMenu(); // Function WBP_MatchDebugMenu.WBP_MatchDebugMenu_C.GoToTopMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Close Menu(); // Function WBP_MatchDebugMenu.WBP_MatchDebugMenu_C.Close Menu // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReloadOnComplete(struct FHWResponseBase Response); // Function WBP_MatchDebugMenu.WBP_MatchDebugMenu_C.ReloadOnComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__OpenWeaponEdit_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_MatchDebugMenu.WBP_MatchDebugMenu_C.BndEvt__OpenWeaponEdit_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__EditWeapon_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(); // Function WBP_MatchDebugMenu.WBP_MatchDebugMenu_C.BndEvt__EditWeapon_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__OpenTeleportList_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_MatchDebugMenu.WBP_MatchDebugMenu_C.BndEvt__OpenTeleportList_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_Button_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_MatchDebugMenu.WBP_MatchDebugMenu_C.BndEvt__WBP_Button_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__OpenSpawnDummy_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_MatchDebugMenu.WBP_MatchDebugMenu_C.BndEvt__OpenSpawnDummy_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ToggleDeveloperMode_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_MatchDebugMenu.WBP_MatchDebugMenu_C.BndEvt__ToggleDeveloperMode_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__OpenArmorSetEdit_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_MatchDebugMenu.WBP_MatchDebugMenu_C.BndEvt__OpenArmorSetEdit_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ViewModesBtn_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_MatchDebugMenu.WBP_MatchDebugMenu_C.BndEvt__ViewModesBtn_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_Button_91_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_MatchDebugMenu.WBP_MatchDebugMenu_C.BndEvt__WBP_Button_91_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_Button_180_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_MatchDebugMenu.WBP_MatchDebugMenu_C.BndEvt__WBP_Button_180_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_Button_258_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_MatchDebugMenu.WBP_MatchDebugMenu_C.BndEvt__WBP_Button_258_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ReportMeshVisibilityBugBtn_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_MatchDebugMenu.WBP_MatchDebugMenu_C.BndEvt__ReportMeshVisibilityBugBtn_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_MatchDebugMenu_DumpCharVisualDataBtn_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_MatchDebugMenu.WBP_MatchDebugMenu_C.BndEvt__WBP_MatchDebugMenu_DumpCharVisualDataBtn_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_MatchDebugMenu(int32_t EntryPoint); // Function WBP_MatchDebugMenu.WBP_MatchDebugMenu_C.ExecuteUbergraph_WBP_MatchDebugMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

