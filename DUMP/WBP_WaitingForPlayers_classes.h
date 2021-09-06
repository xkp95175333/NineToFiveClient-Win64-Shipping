// WidgetBlueprintGeneratedClass WBP_WaitingForPlayers.WBP_WaitingForPlayers_C
// Size: 0x2a0 (Inherited: 0x268)
struct UWBP_WaitingForPlayers_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* background_video; // 0x270(0x08)
	struct UCircularThrobber* CircularThrobber_1006; // 0x278(0x08)
	struct UImage* LoadingAnim; // 0x280(0x08)
	struct UTextBlock* PlayerCount; // 0x288(0x08)
	struct UTextBlock* TextBlock_2; // 0x290(0x08)
	struct UMediaPlayer* MediaPlayer; // 0x298(0x08)

	struct FText GetText_1(); // Function WBP_WaitingForPlayers.WBP_WaitingForPlayers_C.GetText_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_WaitingForPlayers.WBP_WaitingForPlayers_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_WaitingForPlayers.WBP_WaitingForPlayers_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Destruct(); // Function WBP_WaitingForPlayers.WBP_WaitingForPlayers_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_WaitingForPlayers(int32_t EntryPoint); // Function WBP_WaitingForPlayers.WBP_WaitingForPlayers_C.ExecuteUbergraph_WBP_WaitingForPlayers // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

