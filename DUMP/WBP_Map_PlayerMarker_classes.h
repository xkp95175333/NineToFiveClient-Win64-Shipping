// WidgetBlueprintGeneratedClass WBP_Map_PlayerMarker.WBP_Map_PlayerMarker_C
// Size: 0x278 (Inherited: 0x260)
struct UWBP_Map_PlayerMarker_C : UUserWidget {
	struct UImage* Background; // 0x260(0x08)
	struct UImage* Icon; // 0x268(0x08)
	struct UWBP_RichTextLabel_C* Name; // 0x270(0x08)

	void SetData(struct FString Name, struct FSlateColor PlayerColor, bool IsDrone); // Function WBP_Map_PlayerMarker.WBP_Map_PlayerMarker_C.SetData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

