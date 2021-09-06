// WidgetBlueprintGeneratedClass WBP_Armory2_CorporationLevel.WBP_Armory2_CorporationLevel_C
// Size: 0x289 (Inherited: 0x260)
struct UWBP_Armory2_CorporationLevel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image_75; // 0x268(0x08)
	struct UWBP_RichTextLabel_C* WBP_CorporationName; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* WBP_Level; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* WBP_LevelData; // 0x280(0x08)
	enum class EHWFaction Corporation; // 0x288(0x01)

	void PreConstruct(bool IsDesignTime); // Function WBP_Armory2_CorporationLevel.WBP_Armory2_CorporationLevel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void SetLevel(int32_t Level); // Function WBP_Armory2_CorporationLevel.WBP_Armory2_CorporationLevel_C.SetLevel // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory2_CorporationLevel(int32_t EntryPoint); // Function WBP_Armory2_CorporationLevel.WBP_Armory2_CorporationLevel_C.ExecuteUbergraph_WBP_Armory2_CorporationLevel // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

