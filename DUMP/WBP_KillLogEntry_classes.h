// WidgetBlueprintGeneratedClass WBP_KillLogEntry.WBP_KillLogEntry_C
// Size: 0x398 (Inherited: 0x268)
struct UWBP_KillLogEntry_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* ExpiredAnimation; // 0x270(0x08)
	struct UImage* Headshot; // 0x278(0x08)
	struct USizeBox* HeadShotContainer; // 0x280(0x08)
	struct UImage* KillTypeIcon; // 0x288(0x08)
	struct UWBP_RichTextLabel_C* SourceLabel; // 0x290(0x08)
	struct UWBP_RichTextLabel_C* TargetLabel; // 0x298(0x08)
	struct TMap<enum class EHWWeaponType, struct UTexture2D*> WeaponIcons; // 0x2a0(0x50)
	struct UTexture2D* BleedIcon; // 0x2f0(0x08)
	struct UTexture2D* HeadshotIcon; // 0x2f8(0x08)
	struct UTexture2D* FallIcon; // 0x300(0x08)
	struct TMap<enum class EHWDamageType, struct UTexture2D*> DamageTypeIcons; // 0x308(0x50)
	struct UTexture2D* DroneIcon; // 0x358(0x08)
	struct FLinearColor FriendlyColor; // 0x360(0x10)
	struct FLinearColor EnemyColor; // 0x370(0x10)
	int32_t NameMaxLength; // 0x380(0x04)
	char pad_384[0x4]; // 0x384(0x04)
	struct FMulticastInlineDelegate OnExpired; // 0x388(0x10)

	enum class BPE_UIColors GetColor(bool IsFriendly); // Function WBP_KillLogEntry.WBP_KillLogEntry_C.GetColor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetPlayerName(struct FString KillerId, bool IsDrone, struct UWBP_RichTextLabel_C* TargetLabel, bool IsFriendly); // Function WBP_KillLogEntry.WBP_KillLogEntry_C.SetPlayerName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetDamageDealerIcon(struct FName ItemId, enum class EHWWeaponType WeaponType, bool IsDrone, enum class EHWDamageType DamageType, bool WasDowned, struct UTexture2D* Texture); // Function WBP_KillLogEntry.WBP_KillLogEntry_C.GetDamageDealerIcon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetContent(struct FString VictimId, struct FString KillerId, enum class EHWDamageType DamageType, bool WasHeadShot, struct FName ItemId, enum class EHWWeaponType WeaponType, bool IsDrone, bool TargetIsDrone, bool WasDowned, struct FName BleedCauseByDealerName, enum class EHWDamageType BleedCausedByDamageType); // Function WBP_KillLogEntry.WBP_KillLogEntry_C.SetContent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Expired(); // Function WBP_KillLogEntry.WBP_KillLogEntry_C.Expired // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DeleteFromTheFeed(); // Function WBP_KillLogEntry.WBP_KillLogEntry_C.DeleteFromTheFeed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_KillLogEntry(int32_t EntryPoint); // Function WBP_KillLogEntry.WBP_KillLogEntry_C.ExecuteUbergraph_WBP_KillLogEntry // (Final|UbergraphFunction) // @ game+0x13c4ca0
	void OnExpired__DelegateSignature(struct UWidget* Widget); // Function WBP_KillLogEntry.WBP_KillLogEntry_C.OnExpired__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

