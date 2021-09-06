// WidgetBlueprintGeneratedClass WBP_DownedPlayer.WBP_DownedPlayer_C
// Size: 0x2a9 (Inherited: 0x260)
struct UWBP_DownedPlayer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Healing; // 0x268(0x08)
	struct UWidgetAnimation* Init; // 0x270(0x08)
	struct UWidgetAnimation* Pulse; // 0x278(0x08)
	struct UImage* AnimFlasher; // 0x280(0x08)
	struct UImage* healingpanel; // 0x288(0x08)
	struct UOverlay* Overlay; // 0x290(0x08)
	struct UWBP_CircularProgressBar_C* WBP_CircularProgressBar; // 0x298(0x08)
	struct UHWInjuryComponent* InjuryComp; // 0x2a0(0x08)
	bool IsActive; // 0x2a8(0x01)

	void On Being Revived(bool BeingRevived); // Function WBP_DownedPlayer.WBP_DownedPlayer_C.On Being Revived // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnVitalityChanged(enum class EHWVitalityState State); // Function WBP_DownedPlayer.WBP_DownedPlayer_C.OnVitalityChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void InitVisible(); // Function WBP_DownedPlayer.WBP_DownedPlayer_C.InitVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetPlayerPawn(struct APawn* Pawn); // Function WBP_DownedPlayer.WBP_DownedPlayer_C.SetPlayerPawn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_DownedPlayer.WBP_DownedPlayer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_DownedPlayer.WBP_DownedPlayer_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_DownedPlayer(int32_t EntryPoint); // Function WBP_DownedPlayer.WBP_DownedPlayer_C.ExecuteUbergraph_WBP_DownedPlayer // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

