// WidgetBlueprintGeneratedClass WBP_RoundResults2_Stats.WBP_RoundResults2_Stats_C
// Size: 0x420 (Inherited: 0x260)
struct UWBP_RoundResults2_Stats_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_RichTextLabel_C* Assists_1; // 0x268(0x08)
	struct UWBP_RichTextLabel_C* Assists_2; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* Assists_3; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* AssistsLabel; // 0x280(0x08)
	struct UImage* Background; // 0x288(0x08)
	struct UMenuAnchor* ContextMenu1; // 0x290(0x08)
	struct UMenuAnchor* ContextMenu2; // 0x298(0x08)
	struct UMenuAnchor* ContextMenu3; // 0x2a0(0x08)
	struct UWBP_ImageButton_C* ContextMenuButton1; // 0x2a8(0x08)
	struct UWBP_ImageButton_C* ContextMenuButton2; // 0x2b0(0x08)
	struct UWBP_ImageButton_C* ContextMenuButton3; // 0x2b8(0x08)
	struct UImage* Image; // 0x2c0(0x08)
	struct UImage* Image_2; // 0x2c8(0x08)
	struct UImage* Image_115; // 0x2d0(0x08)
	struct UWBP_RichTextLabel_C* Kills_1; // 0x2d8(0x08)
	struct UWBP_RichTextLabel_C* Kills_2; // 0x2e0(0x08)
	struct UWBP_RichTextLabel_C* Kills_3; // 0x2e8(0x08)
	struct UWBP_RichTextLabel_C* KillsLabel; // 0x2f0(0x08)
	struct USizeBox* MVP; // 0x2f8(0x08)
	struct USizeBox* MVP_2; // 0x300(0x08)
	struct USizeBox* MVP_3; // 0x308(0x08)
	struct UImage* PlatformIcon; // 0x310(0x08)
	struct UImage* PlatformIcon_2; // 0x318(0x08)
	struct UImage* PlatformIcon_3; // 0x320(0x08)
	struct UWBP_RichTextLabel_C* PlayerNickname_1; // 0x328(0x08)
	struct UWBP_RichTextLabel_C* PlayerNickname_2; // 0x330(0x08)
	struct UWBP_RichTextLabel_C* PlayerNickname_3; // 0x338(0x08)
	struct UHorizontalBox* SelectedState; // 0x340(0x08)
	struct UImage* TeamIcon; // 0x348(0x08)
	struct UWBP_RichTextLabel_C* TeamTitle; // 0x350(0x08)
	struct UBorder* TitleBackground; // 0x358(0x08)
	struct TArray<struct UWBP_RichTextLabel_C*> PlayerNames; // 0x360(0x10)
	struct TArray<struct UWBP_RichTextLabel_C*> Kills; // 0x370(0x10)
	struct TArray<struct UWBP_RichTextLabel_C*> Assists; // 0x380(0x10)
	struct TArray<struct USizeBox*> PlayerMarkers; // 0x390(0x10)
	struct FLinearColor WinnerColor; // 0x3a0(0x10)
	struct FLinearColor LoserColor; // 0x3b0(0x10)
	struct TArray<struct UWidget*> MVPs; // 0x3c0(0x10)
	struct FMulticastInlineDelegate OnTeamClicked; // 0x3d0(0x10)
	int32_t TeamIndex; // 0x3e0(0x04)
	char pad_3E4[0x4]; // 0x3e4(0x04)
	struct TArray<struct FString> TeamPlayerIds; // 0x3e8(0x10)
	struct TArray<struct FString> TeamPlayerNames; // 0x3f8(0x10)
	struct FString PlayerId; // 0x408(0x10)
	struct UWBP_FriendList_OptionsMenu_C* OptionsMenu; // 0x418(0x08)

	void OnCloseContextMenu(); // Function WBP_RoundResults2_Stats.WBP_RoundResults2_Stats_C.OnCloseContextMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct UUserWidget* On_ContextMenu1_GetMenuContent_3(); // Function WBP_RoundResults2_Stats.WBP_RoundResults2_Stats_C.On_ContextMenu1_GetMenuContent_3 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct UUserWidget* On_ContextMenu1_GetMenuContent_2(); // Function WBP_RoundResults2_Stats.WBP_RoundResults2_Stats_C.On_ContextMenu1_GetMenuContent_2 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct UUserWidget* On_ContextMenu1_GetMenuContent_1(); // Function WBP_RoundResults2_Stats.WBP_RoundResults2_Stats_C.On_ContextMenu1_GetMenuContent_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetSelected(bool IsSelected); // Function WBP_RoundResults2_Stats.WBP_RoundResults2_Stats_C.SetSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_RoundResults2_Stats.WBP_RoundResults2_Stats_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetPlayerLine(struct UWBP_RichTextLabel_C* PlayerNameWidget, struct UWBP_RichTextLabel_C* KillsWidget, struct UWBP_RichTextLabel_C* AssistsWidget, struct USizeBox* MyMarker, struct UWidget* MVPWidget, struct FString PlayerName, bool IsMe, int32_t Kills, int32_t Assists, bool MVP); // Function WBP_RoundResults2_Stats.WBP_RoundResults2_Stats_C.SetPlayerLine // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetKillsAndAssists(struct UWBP_RichTextLabel_C* KillsWidget, struct UWBP_RichTextLabel_C* AssistsWidget, int32_t Kills, int32_t Assists, bool IsMe); // Function WBP_RoundResults2_Stats.WBP_RoundResults2_Stats_C.SetKillsAndAssists // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetPlayerName(struct UWBP_RichTextLabel_C* PlayerNameWidget, struct FText Content, bool IsMe, struct USizeBox* MyMarker); // Function WBP_RoundResults2_Stats.WBP_RoundResults2_Stats_C.SetPlayerName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetTeamIconAndTitle(int32_t Team, bool Winner); // Function WBP_RoundResults2_Stats.WBP_RoundResults2_Stats_C.SetTeamIconAndTitle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetWinner(bool Win); // Function WBP_RoundResults2_Stats.WBP_RoundResults2_Stats_C.SetWinner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateStats(struct TArray<struct FFPlayerStats> Stats, bool Win, int32_t Team, struct FHWTeamRoundRewards TeamRewards); // Function WBP_RoundResults2_Stats.WBP_RoundResults2_Stats_C.UpdateStats // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_RoundResults2_Stats.WBP_RoundResults2_Stats_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ContextMenuButton1_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(struct UWBP_ImageButton_C* Button); // Function WBP_RoundResults2_Stats.WBP_RoundResults2_Stats_C.BndEvt__ContextMenuButton1_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ContextMenuButton2_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(struct UWBP_ImageButton_C* Button); // Function WBP_RoundResults2_Stats.WBP_RoundResults2_Stats_C.BndEvt__ContextMenuButton2_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ContextMenuButton3_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature(struct UWBP_ImageButton_C* Button); // Function WBP_RoundResults2_Stats.WBP_RoundResults2_Stats_C.BndEvt__ContextMenuButton3_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_RoundResults2_Stats(int32_t EntryPoint); // Function WBP_RoundResults2_Stats.WBP_RoundResults2_Stats_C.ExecuteUbergraph_WBP_RoundResults2_Stats // (Final|UbergraphFunction) // @ game+0x13c4ca0
	void OnTeamClicked__DelegateSignature(int32_t Index); // Function WBP_RoundResults2_Stats.WBP_RoundResults2_Stats_C.OnTeamClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

