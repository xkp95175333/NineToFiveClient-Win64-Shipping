// WidgetBlueprintGeneratedClass WBP_BriefingMap.WBP_BriefingMap_C
// Size: 0x2e4 (Inherited: 0x268)
struct UWBP_BriefingMap_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* IntroOutro; // 0x270(0x08)
	struct UImage* BackgroundImage; // 0x278(0x08)
	struct UImage* DiagLines; // 0x280(0x08)
	struct UImage* DivLine; // 0x288(0x08)
	struct UImage* DivLine_2; // 0x290(0x08)
	struct UWBP_RichTextLabel_C* GameMode; // 0x298(0x08)
	struct UWBP_RichTextLabel_C* Location; // 0x2a0(0x08)
	struct UWBP_Map_C* Map; // 0x2a8(0x08)
	struct UWBP_Map_PlayerDetails_C* Player1; // 0x2b0(0x08)
	struct UWBP_Map_PlayerDetails_C* Player2; // 0x2b8(0x08)
	struct UWBP_Map_PlayerDetails_C* Player3; // 0x2c0(0x08)
	struct UImage* TextureFilter; // 0x2c8(0x08)
	struct UWBP_RichTextLabel_C* Timer; // 0x2d0(0x08)
	struct UWBP_DrawLegends_C* WBP_DrawLegends; // 0x2d8(0x08)
	int32_t SecondsLeft; // 0x2e0(0x04)

	void GetReceiverId(struct FHWWeaponParts Parts, struct FName Receiver); // Function WBP_BriefingMap.WBP_BriefingMap_C.GetReceiverId // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void Construct(); // Function WBP_BriefingMap.WBP_BriefingMap_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateTimer(); // Function WBP_BriefingMap.WBP_BriefingMap_C.UpdateTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Destruct(); // Function WBP_BriefingMap.WBP_BriefingMap_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_BriefingMap(int32_t EntryPoint); // Function WBP_BriefingMap.WBP_BriefingMap_C.ExecuteUbergraph_WBP_BriefingMap // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

