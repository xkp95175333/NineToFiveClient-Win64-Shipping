// WidgetBlueprintGeneratedClass WBP_CorporationBadge.WBP_CorporationBadge_C
// Size: 0x2e8 (Inherited: 0x260)
struct UWBP_CorporationBadge_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* BadgeImage; // 0x268(0x08)
	struct UImage* LeftFader; // 0x270(0x08)
	struct UImage* LevelImage; // 0x278(0x08)
	enum class EHWFaction Corporation; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
	struct TMap<struct FString, struct UTexture2D*> LevelTitleTextures; // 0x288(0x50)
	struct FString Title; // 0x2d8(0x10)

	void Update(); // Function WBP_CorporationBadge.WBP_CorporationBadge_C.Update // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_CorporationBadge.WBP_CorporationBadge_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_CorporationBadge(int32_t EntryPoint); // Function WBP_CorporationBadge.WBP_CorporationBadge_C.ExecuteUbergraph_WBP_CorporationBadge // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

