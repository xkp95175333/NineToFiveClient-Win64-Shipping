// WidgetBlueprintGeneratedClass WBP_PlayerCard_Small.WBP_PlayerCard_Small_C
// Size: 0x279 (Inherited: 0x268)
struct UWBP_PlayerCard_Small_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWBP_RichTextLabel_C* PlayerName; // 0x270(0x08)
	bool IsMyTeam; // 0x278(0x01)

	void Initialize(struct UTexture2D* Image, struct FString Name, bool OwnTeam); // Function WBP_PlayerCard_Small.WBP_PlayerCard_Small_C.Initialize // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_PlayerCard_Small.WBP_PlayerCard_Small_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_PlayerCard_Small(int32_t EntryPoint); // Function WBP_PlayerCard_Small.WBP_PlayerCard_Small_C.ExecuteUbergraph_WBP_PlayerCard_Small // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

