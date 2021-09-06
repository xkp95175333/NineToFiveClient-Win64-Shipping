// WidgetBlueprintGeneratedClass WBP_DealtDamage_Entry.WBP_DealtDamage_Entry_C
// Size: 0x384 (Inherited: 0x260)
struct UWBP_DealtDamage_Entry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* fatalX; // 0x268(0x08)
	struct UTextBlock* Message; // 0x270(0x08)
	struct FHWHumanDamageParams DamageParams; // 0x278(0xf0)
	struct FHWHumanDamageResult DamageResult; // 0x368(0x1c)

	void Init Shot Human Hit(struct FHWHumanDamageParams Params, struct FHWHumanDamageResult Result); // Function WBP_DealtDamage_Entry.WBP_DealtDamage_Entry_C.Init Shot Human Hit // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void MarkVitality(enum class EHWVitalityState Vitality); // Function WBP_DealtDamage_Entry.WBP_DealtDamage_Entry_C.MarkVitality // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_DealtDamage_Entry.WBP_DealtDamage_Entry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_DealtDamage_Entry.WBP_DealtDamage_Entry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_DealtDamage_Entry(int32_t EntryPoint); // Function WBP_DealtDamage_Entry.WBP_DealtDamage_Entry_C.ExecuteUbergraph_WBP_DealtDamage_Entry // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

