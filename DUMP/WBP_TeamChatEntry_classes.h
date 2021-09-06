// WidgetBlueprintGeneratedClass WBP_TeamChatEntry.WBP_TeamChatEntry_C
// Size: 0x2f8 (Inherited: 0x268)
struct UWBP_TeamChatEntry_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* Flash; // 0x270(0x08)
	struct UWBP_Label_C* Message; // 0x278(0x08)
	struct UWBP_Label_C* Sender; // 0x280(0x08)
	struct FSlateColor ColorMyText; // 0x288(0x28)
	struct FSlateColor ColorChatText; // 0x2b0(0x28)
	struct FString SenderName; // 0x2d8(0x10)
	struct FString MessageText; // 0x2e8(0x10)

	void SetAmITheSender(bool Value); // Function WBP_TeamChatEntry.WBP_TeamChatEntry_C.SetAmITheSender // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetMessage(struct FHWTextChatMessage txtMessage, bool Highlight); // Function WBP_TeamChatEntry.WBP_TeamChatEntry_C.SetMessage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetData(struct UObject* Object); // Function WBP_TeamChatEntry.WBP_TeamChatEntry_C.SetData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetPlayerName(struct FString PlayerId, struct FString Name); // Function WBP_TeamChatEntry.WBP_TeamChatEntry_C.GetPlayerName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void BP_OnEntryReleased(); // Function WBP_TeamChatEntry.WBP_TeamChatEntry_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_TeamChatEntry.WBP_TeamChatEntry_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_TeamChatEntry.WBP_TeamChatEntry_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_TeamChatEntry.WBP_TeamChatEntry_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_TeamChatEntry(int32_t EntryPoint); // Function WBP_TeamChatEntry.WBP_TeamChatEntry_C.ExecuteUbergraph_WBP_TeamChatEntry // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

