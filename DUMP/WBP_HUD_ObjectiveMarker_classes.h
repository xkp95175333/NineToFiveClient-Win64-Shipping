// WidgetBlueprintGeneratedClass WBP_HUD_ObjectiveMarker.WBP_HUD_ObjectiveMarker_C
// Size: 0x31c (Inherited: 0x260)
struct UWBP_HUD_ObjectiveMarker_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* TimerHighlight; // 0x268(0x08)
	struct UWidgetAnimation* StateChange; // 0x270(0x08)
	struct UWidgetAnimation* Flash; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* Active; // 0x280(0x08)
	struct UImage* AnimFlasher; // 0x288(0x08)
	struct UImage* ArrowDown; // 0x290(0x08)
	struct UImage* ArrowUp; // 0x298(0x08)
	struct UImage* BG_captured; // 0x2a0(0x08)
	struct UImage* Locked; // 0x2a8(0x08)
	struct UBorder* MainAlignmentColor; // 0x2b0(0x08)
	struct UImage* MainMarkerBG_3; // 0x2b8(0x08)
	struct UWidgetSwitcher* MainSideSwitcher; // 0x2c0(0x08)
	struct UWidgetSwitcher* MarkerType; // 0x2c8(0x08)
	struct UWBP_RichTextLabel_C* Name; // 0x2d0(0x08)
	struct UImage* Paused; // 0x2d8(0x08)
	struct UWBP_CircularProgressBar_C* ProgressBar_3; // 0x2e0(0x08)
	struct UImage* Shadow; // 0x2e8(0x08)
	struct UImage* SideMarkerBG; // 0x2f0(0x08)
	struct UWidgetSwitcher* Status_3; // 0x2f8(0x08)
	struct UWBP_RichTextLabel_C* Timer; // 0x300(0x08)
	struct UOverlay* TimerContainer; // 0x308(0x08)
	struct AHWMapMarker* worldMarker; // 0x310(0x08)
	bool ShouldBeVisible; // 0x318(0x01)
	bool ShowArrows; // 0x319(0x01)
	bool ShowTimer; // 0x31a(0x01)
	bool SideObjective; // 0x31b(0x01)

	void UpdateTimer(); // Function WBP_HUD_ObjectiveMarker.WBP_HUD_ObjectiveMarker_C.UpdateTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateArrows(); // Function WBP_HUD_ObjectiveMarker.WBP_HUD_ObjectiveMarker_C.UpdateArrows // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateLetter(struct FString Letter); // Function WBP_HUD_ObjectiveMarker.WBP_HUD_ObjectiveMarker_C.UpdateLetter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateVisibility(bool Visible, bool OutVisible); // Function WBP_HUD_ObjectiveMarker.WBP_HUD_ObjectiveMarker_C.UpdateVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateProgress(float Progress, bool Paused, bool Locked); // Function WBP_HUD_ObjectiveMarker.WBP_HUD_ObjectiveMarker_C.UpdateProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetAlignmentColor(int32_t OwningTeam); // Function WBP_HUD_ObjectiveMarker.WBP_HUD_ObjectiveMarker_C.SetAlignmentColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Initialize(struct AHWMapMarker* worldMarker, bool ShowName, bool ShowArrows, bool ShowTimer); // Function WBP_HUD_ObjectiveMarker.WBP_HUD_ObjectiveMarker_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_HUD_ObjectiveMarker.WBP_HUD_ObjectiveMarker_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void CustomEvent(struct FHWRoundObjectivesData ObjectiveData, struct FText ObjectiveData_ObjectText, struct FText ObjectiveData_SecondaryText, int32_t ObjectiveData_Time); // Function WBP_HUD_ObjectiveMarker.WBP_HUD_ObjectiveMarker_C.CustomEvent // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Destruct(); // Function WBP_HUD_ObjectiveMarker.WBP_HUD_ObjectiveMarker_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_HUD_ObjectiveMarker(int32_t EntryPoint); // Function WBP_HUD_ObjectiveMarker.WBP_HUD_ObjectiveMarker_C.ExecuteUbergraph_WBP_HUD_ObjectiveMarker // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

