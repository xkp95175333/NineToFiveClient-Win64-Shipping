// WidgetBlueprintGeneratedClass WBP_Missions.WBP_Missions_C
// Size: 0x338 (Inherited: 0x270)
struct UWBP_Missions_C : UWBP_MenuScreenBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UListView* AvailableMissionsList; // 0x278(0x08)
	struct UImage* BG; // 0x280(0x08)
	struct UImage* Bottomline; // 0x288(0x08)
	struct UWBP_Missions_Card_C* Card1; // 0x290(0x08)
	struct UWBP_Missions_Card_C* Card2; // 0x298(0x08)
	struct UWBP_Missions_Card_C* Card3; // 0x2a0(0x08)
	struct UWBP_SectionHeaderBlack_C* Header1; // 0x2a8(0x08)
	struct UWBP_SectionHeaderBlack_C* Header2; // 0x2b0(0x08)
	struct UWBP_RichTextLabel_C* NextUpdateLabel; // 0x2b8(0x08)
	struct UWBP_RichTextLabel_C* TimerLabel; // 0x2c0(0x08)
	struct UImage* Topline; // 0x2c8(0x08)
	struct UWBP_ScreenHeader_C* WBP_ScreenHeader; // 0x2d0(0x08)
	struct TArray<struct UBP_Mission_Item_Data_C*> MissionItems; // 0x2d8(0x10)
	struct TArray<struct UBP_Mission_Item_Data_C*> ActiveItems; // 0x2e8(0x10)
	struct FString MissionsLastRefreshed; // 0x2f8(0x10)
	struct UBP_LocalGameState_C* LocalPlayerProfile; // 0x308(0x08)
	struct FMulticastInlineDelegate NotifyMissionsSeen; // 0x310(0x10)
	struct TArray<struct UBP_Mission_Item_Data_C*> NormalMissionItems; // 0x320(0x10)
	struct FTimerHandle RefreshMissionsTimerHandle; // 0x330(0x08)

	bool ShouldRefreshMissions(struct FString IsoString); // Function WBP_Missions.WBP_Missions_C.ShouldRefreshMissions // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetTimeToNextMissionRefresh(struct FTimespan Result, bool Succeeded); // Function WBP_Missions.WBP_Missions_C.GetTimeToNextMissionRefresh // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void OnBack(bool IsHandled); // Function WBP_Missions.WBP_Missions_C.OnBack // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShouldPromoteWeekendMission(struct FHWMission Mission, bool bPromote); // Function WBP_Missions.WBP_Missions_C.ShouldPromoteWeekendMission // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	bool CompareMissionActivationTimes(struct UObject* First, struct UObject* Second); // Function WBP_Missions.WBP_Missions_C.CompareMissionActivationTimes // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HasFreeMissionSlot(bool Result); // Function WBP_Missions.WBP_Missions_C.HasFreeMissionSlot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void UpdateActiveMissions(); // Function WBP_Missions.WBP_Missions_C.UpdateActiveMissions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateTimerLabel(); // Function WBP_Missions.WBP_Missions_C.UpdateTimerLabel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDetailsChanged(struct FHWPlayerDetails Data); // Function WBP_Missions.WBP_Missions_C.OnPlayerDetailsChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerInventoryChanged(struct FHWPlayerInventory Data); // Function WBP_Missions.WBP_Missions_C.OnPlayerInventoryChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStatsChanged(struct FHWPlayerStats Data); // Function WBP_Missions.WBP_Missions_C.OnPlayerStatsChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerMissionChanged(struct FHWPlayerMission Data); // Function WBP_Missions.WBP_Missions_C.OnPlayerMissionChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateMissions(struct TArray<struct FHWMission> Missions); // Function WBP_Missions.WBP_Missions_C.UpdateMissions // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void InitializeScreen(); // Function WBP_Missions.WBP_Missions_C.InitializeScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AvailableMissionsList_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature(struct UObject* Item); // Function WBP_Missions.WBP_Missions_C.BndEvt__AvailableMissionsList_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Missions.WBP_Missions_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerProgressionChanged(struct FHWPlayerProgression Data); // Function WBP_Missions.WBP_Missions_C.OnPlayerProgressionChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AvailableMissionsList_K2Node_ComponentBoundEvent_1_OnItemIsHoveredChangedDynamic__DelegateSignature(struct UObject* Item, bool bIsHovered); // Function WBP_Missions.WBP_Missions_C.BndEvt__AvailableMissionsList_K2Node_ComponentBoundEvent_1_OnItemIsHoveredChangedDynamic__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void RefreshMissions(); // Function WBP_Missions.WBP_Missions_C.RefreshMissions // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Missions(int32_t EntryPoint); // Function WBP_Missions.WBP_Missions_C.ExecuteUbergraph_WBP_Missions // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void NotifyMissionsSeen__DelegateSignature(bool HasNotSeen); // Function WBP_Missions.WBP_Missions_C.NotifyMissionsSeen__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

