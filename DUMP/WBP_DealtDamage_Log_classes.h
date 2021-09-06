// WidgetBlueprintGeneratedClass WBP_DealtDamage_Log.WBP_DealtDamage_Log_C
// Size: 0x288 (Inherited: 0x260)
struct UWBP_DealtDamage_Log_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UVerticalBox* Items; // 0x268(0x08)
	struct UWBP_DealtDamage_Entry_C* WBP_DealtDamage_Entry; // 0x270(0x08)
	struct UWBP_DealtDamage_Entry_C* WBP_DealtDamage_Entry_2; // 0x278(0x08)
	struct UWBP_DealtDamage_Entry_C* WBP_DealtDamage_Entry_3; // 0x280(0x08)

	void Construct(); // Function WBP_DealtDamage_Log.WBP_DealtDamage_Log_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void AddDamageEvent(struct AHWPlayerController* Controller, struct FHWDiagDamageDealt Value); // Function WBP_DealtDamage_Log.WBP_DealtDamage_Log_C.AddDamageEvent // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_DealtDamage_Log(int32_t EntryPoint); // Function WBP_DealtDamage_Log.WBP_DealtDamage_Log_C.ExecuteUbergraph_WBP_DealtDamage_Log // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

