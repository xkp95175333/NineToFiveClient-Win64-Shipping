// WidgetBlueprintGeneratedClass WBP_TeammateMarkers.WBP_TeammateMarkers_C
// Size: 0x2c0 (Inherited: 0x260)
struct UWBP_TeammateMarkers_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* LowHealth_Anim; // 0x268(0x08)
	struct UBorder* ColorLayer; // 0x270(0x08)
	struct UImage* Default; // 0x278(0x08)
	struct UWBP_DownedPlayer_C* downed; // 0x280(0x08)
	struct UImage* DroneEnabled; // 0x288(0x08)
	struct UImage* LowHealth; // 0x290(0x08)
	struct UImage* OnDrone; // 0x298(0x08)
	struct UWidgetSwitcher* Switcher; // 0x2a0(0x08)
	struct AHWHumanCharacter* Character; // 0x2a8(0x08)
	struct UHWInjuryComponent* InjuryComp; // 0x2b0(0x08)
	struct AHWDroneCharacter* Drone; // 0x2b8(0x08)

	void SetCharacter(struct AHWCharacter* Character); // Function WBP_TeammateMarkers.WBP_TeammateMarkers_C.SetCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetColor(struct FLinearColor Color); // Function WBP_TeammateMarkers.WBP_TeammateMarkers_C.SetColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_TeammateMarkers.WBP_TeammateMarkers_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_TeammateMarkers(int32_t EntryPoint); // Function WBP_TeammateMarkers.WBP_TeammateMarkers_C.ExecuteUbergraph_WBP_TeammateMarkers // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

