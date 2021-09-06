// WidgetBlueprintGeneratedClass WBP_MenuTutorial.WBP_MenuTutorial_C
// Size: 0x320 (Inherited: 0x268)
struct UWBP_MenuTutorial_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWBP_Tutorial_ClickIndicator_C* ClickIndicator; // 0x270(0x08)
	struct UBorder* Dimmer; // 0x278(0x08)
	struct UWBP_MainButton_C* SkipButton; // 0x280(0x08)
	struct UWBP_Tutorial_Tooltip_C* TooltipDialog; // 0x288(0x08)
	struct FTimerHandle Indicator_UpdateTimer; // 0x290(0x08)
	struct UWidget* Indicator_Target; // 0x298(0x08)
	enum class BPE_ClickIndicatorType Requested_Indicator_Type; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct TScriptInterface<None> CurrentTutorialSequence; // 0x2a8(0x10)
	int32_t CurrentTutorialStep; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct UWBP_Main_C* MainWidget; // 0x2c0(0x08)
	struct UObject* CurrentWaitItem; // 0x2c8(0x08)
	struct UWidget* CurrentWaitItemWidget; // 0x2d0(0x08)
	enum class BPE_TutorialEventType CurrentWaitEvent; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct UWidget* CurrentWaitWidget; // 0x2e0(0x08)
	struct UBP_Tutorial_Sequence_Armory_C* Sequence_Armory; // 0x2e8(0x08)
	struct UBP_Tutorial_Sequence_Rigs_C* Sequence_Rigs; // 0x2f0(0x08)
	bool Tooltip_PointRight; // 0x2f8(0x01)
	char pad_2F9[0x7]; // 0x2f9(0x07)
	struct FTimerHandle Tooltip_UpdateTimer; // 0x300(0x08)
	struct UBP_Tutorial_Sequence_Weapon_Upgrade_C* Sequence_Weapon_Upgrade; // 0x308(0x08)
	struct UObject* Sequence_Crafting; // 0x310(0x08)
	struct FTimerHandle RefreshTutorialTimer; // 0x318(0x08)

	void GetTutorialDebugStatus(struct FString Status); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.GetTutorialDebugStatus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetCurrentSequence(struct TScriptInterface<None> Sequence); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.GetCurrentSequence // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ConfirmTutorialSkip(); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.ConfirmTutorialSkip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnTutorialSkipConfirmed1(bool Result); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.OnTutorialSkipConfirmed1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetLoadoutCharacterVisible(bool Visible); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.SetLoadoutCharacterVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RefreshWait Item Widget(struct UWidget* WaitItemWidget); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.RefreshWait Item Widget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Get Click Indicator Type(enum class BPE_ClickIndicatorType Type); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.Get Click Indicator Type // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void IntersectRect(struct FVector2D RectTopLeft, struct FVector2D RectBottomRight, struct FVector2D ClipTopLeft, struct FVector2D ClipBottomRight, struct FVector2D ResultTopLeft, struct FVector2D ResultBottomRight); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.IntersectRect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetViewportRectangleForWidget(struct UWidget* Widget, struct FVector2D TopLeft, struct FVector2D BottomRight); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.GetViewportRectangleForWidget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void UpdateDimmerRectangle_DimAll(); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.UpdateDimmerRectangle_DimAll // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnListViewEntryReleased(struct UUserWidget* Widget); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.OnListViewEntryReleased // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetWeaponWithUpgradePoints(); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.GetWeaponWithUpgradePoints // (Public|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetPlayer(struct UHWPlayerProfile* Player); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.GetPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void HideTooltip(); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.HideTooltip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetViewController(struct TScriptInterface<None> Result); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.GetViewController // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void ShowMessagePopup(struct FText Title, struct FText Message); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.ShowMessagePopup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateDimmerRectangle(struct UWidget* Widget); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.UpdateDimmerRectangle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowTooltip(struct FText Title, struct FText Content, struct UWidget* OnWidget, bool PointRight); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.ShowTooltip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateTooltip(); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.UpdateTooltip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnListViewEntryGenerated(struct UUserWidget* Widget); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.OnListViewEntryGenerated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnClicked_WBP_Rigs_WeaponButton(struct UWBP_Rigs_WeaponButton_C* Button); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.OnClicked_WBP_Rigs_WeaponButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnClicked_WBP_Rigs_ItemButton(struct FString Category, struct UWBP_Rigs_ItemButton_C* Button); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.OnClicked_WBP_Rigs_ItemButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetWidgetFilter(struct TArray<struct UWidget*> Widgets); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.SetWidgetFilter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnClicked_WBP_Rigs_DroneAbilityButton(struct UWBP_Rigs_DroneAbilityButton_C* Button); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.OnClicked_WBP_Rigs_DroneAbilityButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnClicked_WBP_Rigs_ArmorSetButton(struct UWBP_Rigs_ArmorSetButton_C* Button); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.OnClicked_WBP_Rigs_ArmorSetButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnClicked_WBP_Rigs_AssButton(int32_t Index, enum class EHWArmorFeatureType AssType, struct FName AssId, struct UWBP_Rigs_AssButton_C* Button); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.OnClicked_WBP_Rigs_AssButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void WaitForRigButtonClick(struct UWidget* Button, struct FText Text, enum class BPE_ClickIndicatorType Type); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.WaitForRigButtonClick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetWaitState(enum class BPE_TutorialEventType Event, struct UWidget* Widget, struct UObject* Item); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.SetWaitState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ClearWaitState(); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.ClearWaitState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetTutorialStatusWaitObject(struct FString Obj); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.GetTutorialStatusWaitObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void IsTutorialActive(bool Result); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.IsTutorialActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void FindWaitItemWidget(); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.FindWaitItemWidget // (Public|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GoToNextStepOnDialogClose(bool Result); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.GoToNextStepOnDialogClose // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void WaitForTutorialEvent(enum class BPE_TutorialEventType Event, struct UWidget* ShowIndicatorOnWidget, struct FText Text, enum class BPE_ClickIndicatorType Type, struct TArray<struct UWidget*> AllowedWidgets); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.WaitForTutorialEvent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DoNothingOnDialogClose(bool Result); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.DoNothingOnDialogClose // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Wait for Socket Click(struct UWBP_Armory_Weapon_Socket_C* Socket, struct FText Text, enum class BPE_ClickIndicatorType Type); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.Wait for Socket Click // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnClicked_Socket(enum class EHWWeaponPartType PartType, struct UWBP_Armory_Weapon_Socket_C* Widget); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.OnClicked_Socket // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnClicked_ListViewItem(struct UObject* Item); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.OnClicked_ListViewItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnClicked_WBP_ImageButton(struct UWBP_ImageButton_C* Button); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.OnClicked_WBP_ImageButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void WaitForListViewClick(struct UListView* ListView, struct UObject* Item, struct FText Text); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.WaitForListViewClick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CompleteTutorial(); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.CompleteTutorial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SkipTutorial(); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.SkipTutorial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GoToNextStep(); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.GoToNextStep // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnClicked_WBP_MainButton(struct UWBP_MainButton_C* Button); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.OnClicked_WBP_MainButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnClicked_WBP_Button(struct UWBP_Button_C* Button); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.OnClicked_WBP_Button // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnClicked_Common(); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.OnClicked_Common // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateClickIndicator(); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.UpdateClickIndicator // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HideClickIndicator(); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.HideClickIndicator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowClick Indicator(struct UWidget* OnWidget, struct FText Text, enum class BPE_ClickIndicatorType Type); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.ShowClick Indicator // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Wait for Button Click(struct UWidget* Button, struct FText Text, enum class BPE_ClickIndicatorType Type); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.Wait for Button Click // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateTutorial(); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.UpdateTutorial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void InitializeSequences(struct UWBP_Main_C* MainWidget); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.InitializeSequences // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerMissionChanged(struct FHWPlayerMission Data); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.OnPlayerMissionChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__SkipButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.BndEvt__SkipButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__TooltipDialog_K2Node_ComponentBoundEvent_1_OnClose__DelegateSignature(); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.BndEvt__TooltipDialog_K2Node_ComponentBoundEvent_1_OnClose__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStatsChanged(struct FHWPlayerStats Data); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.OnPlayerStatsChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerProgressionChanged(struct FHWPlayerProgression Data); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.OnPlayerProgressionChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerMissionsChanged(); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.OnPlayerMissionsChanged // (BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerInventoryChanged(struct FHWPlayerInventory Data); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.OnPlayerInventoryChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDetailsChanged(struct FHWPlayerDetails Data); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.OnPlayerDetailsChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void RefreshTutorialOnNextTick(); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.RefreshTutorialOnNextTick // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void NotifyTutorialEvent(enum class BPE_TutorialEventType EventType); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.NotifyTutorialEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Initialize(struct UUserWidget* MainWidget); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RefreshTutorial(); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.RefreshTutorial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void StartTutorial(enum class BPE_MenuTutorialPart Part, bool Forced); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.StartTutorial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_MenuTutorial(int32_t EntryPoint); // Function WBP_MenuTutorial.WBP_MenuTutorial_C.ExecuteUbergraph_WBP_MenuTutorial // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

