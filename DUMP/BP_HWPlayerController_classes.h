// BlueprintGeneratedClass BP_HWPlayerController.BP_HWPlayerController_C
// Size: 0xe88 (Inherited: 0xe50)
struct ABP_HWPlayerController_C : AHWPlayerController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe50(0x08)
	struct UUserWidget* DebugStats; // 0xe58(0x08)
	bool DebugStatsVisible; // 0xe60(0x01)
	char pad_E61[0x7]; // 0xe61(0x07)
	struct FMulticastInlineDelegate ChatMessageDispatcher; // 0xe68(0x10)
	struct UWBP_SignalDetector_C* WBP_SignalDetector; // 0xe78(0x08)
	struct UWBP_InvalidCompanionLocation_C* WBP_InvalidCompanionLocation; // 0xe80(0x08)

	void GetLastVisitedMainViewId(struct FName ID); // Function BP_HWPlayerController.BP_HWPlayerController_C.GetLastVisitedMainViewId // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetShopItemDataForReceiver(struct FName ReceiverId, struct FHWShopItem ShopItem, bool IsAvailable, struct FBP_ShopSubsectionWithCampaignId SubsectionData); // Function BP_HWPlayerController.BP_HWPlayerController_C.GetShopItemDataForReceiver // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetMenuTutorial(struct TScriptInterface<None> Tutorial); // Function BP_HWPlayerController.BP_HWPlayerController_C.GetMenuTutorial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void IsInMainMenu(bool InMainMenu); // Function BP_HWPlayerController.BP_HWPlayerController_C.IsInMainMenu // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GoToCorporation(enum class EHWFaction Corporation, enum class BPE_UIView From, struct UUserWidget* Widget); // Function BP_HWPlayerController.BP_HWPlayerController_C.GoToCorporation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetLastViewedWeapon(struct FName WeaponID); // Function BP_HWPlayerController.BP_HWPlayerController_C.GetLastViewedWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetCharacterVoice(); // Function BP_HWPlayerController.BP_HWPlayerController_C.SetCharacterVoice // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HandleSignalDetector(struct AActor* DetectedActor, bool Detected, struct AActor* Spotter, float Duration); // Function BP_HWPlayerController.BP_HWPlayerController_C.HandleSignalDetector // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnMarkerUpdated(struct AHWPlayerController* Controller, struct AHWMapMarker* UpdatedMarker); // Function BP_HWPlayerController.BP_HWPlayerController_C.OnMarkerUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void InpActEvt_F2_K2Node_InputKeyEvent_1(struct FKey Key); // Function BP_HWPlayerController.BP_HWPlayerController_C.InpActEvt_F2_K2Node_InputKeyEvent_1 // (BlueprintEvent) // @ game+0x13c4ca0
	void GoToAccessLevel(int32_t Level); // Function BP_HWPlayerController.BP_HWPlayerController_C.GoToAccessLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GoToView(enum class BPE_UIView View, enum class BPE_UIMenuVisibility MenuVisibility); // Function BP_HWPlayerController.BP_HWPlayerController_C.GoToView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GoToShopCategory(struct FString Category); // Function BP_HWPlayerController.BP_HWPlayerController_C.GoToShopCategory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GoToShopItemDetails(struct FHWShopItem ShopItem, struct FString SubsectionId, struct FString CampaignId, bool BundleItem, int32_t OpenedIndex); // Function BP_HWPlayerController.BP_HWPlayerController_C.GoToShopItemDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GoToMainTab(struct FName Tab); // Function BP_HWPlayerController.BP_HWPlayerController_C.GoToMainTab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void FocusMainWidget(); // Function BP_HWPlayerController.BP_HWPlayerController_C.FocusMainWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetMenuVisibility(enum class BPE_UIMenuVisibility Visibility); // Function BP_HWPlayerController.BP_HWPlayerController_C.SetMenuVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GoToLoadout(struct FString LoadoutName); // Function BP_HWPlayerController.BP_HWPlayerController_C.GoToLoadout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GoToWeaponView(struct FString WeaponID, struct FText Title); // Function BP_HWPlayerController.BP_HWPlayerController_C.GoToWeaponView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GoToArmoryItem(struct UHWArmoryItem* ArmoryItem, struct UHWArmoryWeaponItem* WeaponItem, struct FText Title); // Function BP_HWPlayerController.BP_HWPlayerController_C.GoToArmoryItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetMenuFooter(enum class BPE_UIView View); // Function BP_HWPlayerController.BP_HWPlayerController_C.SetMenuFooter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetLastViewedWeapon(struct FName WeaponID); // Function BP_HWPlayerController.BP_HWPlayerController_C.SetLastViewedWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetHeaderFooterVisibility(bool IsVisible); // Function BP_HWPlayerController.BP_HWPlayerController_C.SetHeaderFooterVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ScrollShopCategoryToIndex(struct FString Category, int32_t Index); // Function BP_HWPlayerController.BP_HWPlayerController_C.ScrollShopCategoryToIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GoToArmoryWeaponView(struct UHWArmoryWeaponModel* WeaponModel, bool GotoParamVIew, enum class EHWWeaponPartType ZoomToPartType); // Function BP_HWPlayerController.BP_HWPlayerController_C.GoToArmoryWeaponView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BP_MoveTargetDummySpawner(); // Function BP_HWPlayerController.BP_HWPlayerController_C.BP_MoveTargetDummySpawner // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BP_ReviveTargetDummy(); // Function BP_HWPlayerController.BP_HWPlayerController_C.BP_ReviveTargetDummy // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BP_SpawnTargetDummy(); // Function BP_HWPlayerController.BP_HWPlayerController_C.BP_SpawnTargetDummy // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamChatMessageReceived(struct FHWTextChatMessage Msg); // Function BP_HWPlayerController.BP_HWPlayerController_C.OnTeamChatMessageReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundStateSetClient(enum class EHWRoundState State); // Function BP_HWPlayerController.BP_HWPlayerController_C.OnRoundStateSetClient // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveBeginPlay(); // Function BP_HWPlayerController.BP_HWPlayerController_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void BP_InitDebugTools(); // Function BP_HWPlayerController.BP_HWPlayerController_C.BP_InitDebugTools // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDetected(struct AActor* DetectedActor, bool Detected, struct AActor* SourceActor, float Duration); // Function BP_HWPlayerController.BP_HWPlayerController_C.OnDetected // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ShowPIPFromAim(); // Function BP_HWPlayerController.BP_HWPlayerController_C.ShowPIPFromAim // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HidePIPFromAim(); // Function BP_HWPlayerController.BP_HWPlayerController_C.HidePIPFromAim // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RemoveCompanionRender(); // Function BP_HWPlayerController.BP_HWPlayerController_C.RemoveCompanionRender // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BPPossessCompanion(); // Function BP_HWPlayerController.BP_HWPlayerController_C.BPPossessCompanion // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BPUnPossessCompanion(); // Function BP_HWPlayerController.BP_HWPlayerController_C.BPUnPossessCompanion // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void CombatCompanionInvalidSpawnLocation(); // Function BP_HWPlayerController.BP_HWPlayerController_C.CombatCompanionInvalidSpawnLocation // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_HWPlayerController(int32_t EntryPoint); // Function BP_HWPlayerController.BP_HWPlayerController_C.ExecuteUbergraph_BP_HWPlayerController // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void ChatMessageDispatcher__DelegateSignature(struct FHWTextChatMessage Msg); // Function BP_HWPlayerController.BP_HWPlayerController_C.ChatMessageDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

