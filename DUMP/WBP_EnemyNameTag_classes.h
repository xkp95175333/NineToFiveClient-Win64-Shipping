// WidgetBlueprintGeneratedClass WBP_EnemyNameTag.WBP_EnemyNameTag_C
// Size: 0x290 (Inherited: 0x268)
struct UWBP_EnemyNameTag_C : UHWWidgetBase {
	struct UWBP_DownedPlayer_C* downed; // 0x268(0x08)
	struct USizeBox* revive_prompt; // 0x270(0x08)
	struct UImage* TeamIcon; // 0x278(0x08)
	struct AHWPlayerState* TrackedPlayer; // 0x280(0x08)
	struct AHWCharacter* TrackedCharacter; // 0x288(0x08)

	void Initialize(struct AHWPlayerState* Player); // Function WBP_EnemyNameTag.WBP_EnemyNameTag_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetColor(bool Hostile); // Function WBP_EnemyNameTag.WBP_EnemyNameTag_C.SetColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetTeam(int32_t Team); // Function WBP_EnemyNameTag.WBP_EnemyNameTag_C.SetTeam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

