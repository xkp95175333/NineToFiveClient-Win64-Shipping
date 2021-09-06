// WidgetBlueprintGeneratedClass WBP_MapMarker_Text.WBP_MapMarker_Text_C
// Size: 0x2a0 (Inherited: 0x28d)
struct UWBP_MapMarker_Text_C : UWBP_MapMarker_C {
	char pad_28D[0x3]; // 0x28d(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UTextBlock* TextBlock_71; // 0x298(0x08)

	struct FText GetText_1(); // Function WBP_MapMarker_Text.WBP_MapMarker_Text_C.GetText_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void Construct(); // Function WBP_MapMarker_Text.WBP_MapMarker_Text_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_MapMarker_Text(int32_t EntryPoint); // Function WBP_MapMarker_Text.WBP_MapMarker_Text_C.ExecuteUbergraph_WBP_MapMarker_Text // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

