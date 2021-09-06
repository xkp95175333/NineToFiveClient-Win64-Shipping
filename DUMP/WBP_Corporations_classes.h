// WidgetBlueprintGeneratedClass WBP_Corporations.WBP_Corporations_C
// Size: 0x290 (Inherited: 0x268)
struct UWBP_Corporations_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* BorderLeft; // 0x270(0x08)
	struct UImage* BorderRight; // 0x278(0x08)
	struct UVerticalBox* CorporationsList; // 0x280(0x08)
	struct UWBP_ScreenHeader_C* Title; // 0x288(0x08)

	void OnPlayerDetailsChanged(struct FHWPlayerDetails Data); // Function WBP_Corporations.WBP_Corporations_C.OnPlayerDetailsChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerInventoryChanged(struct FHWPlayerInventory Data); // Function WBP_Corporations.WBP_Corporations_C.OnPlayerInventoryChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerMissionChanged(struct FHWPlayerMission Data); // Function WBP_Corporations.WBP_Corporations_C.OnPlayerMissionChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerProgressionChanged(struct FHWPlayerProgression Data); // Function WBP_Corporations.WBP_Corporations_C.OnPlayerProgressionChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStatsChanged(struct FHWPlayerStats Data); // Function WBP_Corporations.WBP_Corporations_C.OnPlayerStatsChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Corporations(int32_t EntryPoint); // Function WBP_Corporations.WBP_Corporations_C.ExecuteUbergraph_WBP_Corporations // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

