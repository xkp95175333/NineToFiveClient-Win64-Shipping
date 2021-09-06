// BlueprintGeneratedClass BP_LoadOutCharacter.BP_LoadOutCharacter_C
// Size: 0x560 (Inherited: 0x220)
struct ABP_LoadOutCharacter_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USkeletalMeshComponent* Player1_3P_FacialHair; // 0x228(0x08)
	struct USkeletalMeshComponent* Player1_3P_Hair; // 0x230(0x08)
	struct UStaticMeshComponent* celular_modelo_fbx; // 0x238(0x08)
	struct UWidgetComponent* NameTagWidget; // 0x240(0x08)
	struct USkeletalMeshComponent* Player1_3P_BackpackCharm; // 0x248(0x08)
	struct USkeletalMeshComponent* Player1_3P_Face; // 0x250(0x08)
	struct USkeletalMeshComponent* Player1_3P_Backpack; // 0x258(0x08)
	struct UHWVisualArmorComponent* HWVisualArmor; // 0x260(0x08)
	struct USkeletalMeshComponent* Player1_3P_Gloves; // 0x268(0x08)
	struct USkeletalMeshComponent* Player1_3P_Legs; // 0x270(0x08)
	struct USkeletalMeshComponent* Player1_3P_Head; // 0x278(0x08)
	struct USkeletalMeshComponent* Player1_3P_Chest; // 0x280(0x08)
	struct USceneComponent* Scene; // 0x288(0x08)
	struct AHWWeapon* SpawnedWeapon; // 0x290(0x08)
	struct TArray<struct AActor*> PartActors; // 0x298(0x10)
	float PlayRate; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct FHWWeaponParts PrimaryWeapon; // 0x2b0(0xb0)
	struct FVector NameTagOffset; // 0x360(0x0c)
	bool AllowDisplayKickButton; // 0x36c(0x01)
	char pad_36D[0x3]; // 0x36d(0x03)
	struct FString Player Id; // 0x370(0x10)
	bool LocalPlayer; // 0x380(0x01)
	enum class ELoadoutCharacterPoseType ViewPose; // 0x381(0x01)
	char pad_382[0x6]; // 0x382(0x06)
	struct FHWPlayerPublicProfile CurrentPublicProfile; // 0x388(0x1c0)
	float BackpackViewAlpha; // 0x548(0x04)
	bool HideBackpack; // 0x54c(0x01)
	bool HideNameTag; // 0x54d(0x01)
	char pad_54E[0x2]; // 0x54e(0x02)
	struct FMulticastInlineDelegate OnLoadoutChanged; // 0x550(0x10)

	struct UMeshComponent* GetArmorMeshComponent(enum class EHWArmorType Type, bool FirstPerson); // Function BP_LoadOutCharacter.BP_LoadOutCharacter_C.GetArmorMeshComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x13c4ca0
	void UpdateCellphoneState(); // Function BP_LoadOutCharacter.BP_LoadOutCharacter_C.UpdateCellphoneState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetViewPose(enum class ELoadoutCharacterPoseType Pose); // Function BP_LoadOutCharacter.BP_LoadOutCharacter_C.SetViewPose // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetViewPose(enum class ELoadoutCharacterPoseType ViewPose); // Function BP_LoadOutCharacter.BP_LoadOutCharacter_C.GetViewPose // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void UpdateAllowDisplayKickButton(); // Function BP_LoadOutCharacter.BP_LoadOutCharacter_C.UpdateAllowDisplayKickButton // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetNameTag(struct FString Name, struct FString BackendPlayerId); // Function BP_LoadOutCharacter.BP_LoadOutCharacter_C.SetNameTag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Get World Location for Slot(enum class BPE_Customization_Slot_Type SlotType, struct FVector WorldPos); // Function BP_LoadOutCharacter.BP_LoadOutCharacter_C.Get World Location for Slot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetVisible(bool IsVisible); // Function BP_LoadOutCharacter.BP_LoadOutCharacter_C.SetVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetLoadoutFromData(struct FHWLoadoutData Loadout, struct FString ReceiverId); // Function BP_LoadOutCharacter.BP_LoadOutCharacter_C.SetLoadoutFromData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void StripRarityFromId(struct FString Input, struct FString Output); // Function BP_LoadOutCharacter.BP_LoadOutCharacter_C.StripRarityFromId // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetLoadoutFromPublicProfile(struct FHWPlayerPublicProfile Profile, struct FString BackendPlayerId); // Function BP_LoadOutCharacter.BP_LoadOutCharacter_C.SetLoadoutFromPublicProfile // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SpawnWeapon(); // Function BP_LoadOutCharacter.BP_LoadOutCharacter_C.SpawnWeapon // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UserConstructionScript(); // Function BP_LoadOutCharacter.BP_LoadOutCharacter_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Update Name Tag Position Offset(); // Function BP_LoadOutCharacter.BP_LoadOutCharacter_C.Update Name Tag Position Offset // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Set Name Tag Position Offset(struct FVector NameTagOffset); // Function BP_LoadOutCharacter.BP_LoadOutCharacter_C.Set Name Tag Position Offset // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Set Name Tag Visible(bool Visible); // Function BP_LoadOutCharacter.BP_LoadOutCharacter_C.Set Name Tag Visible // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Destroy Name Tag(); // Function BP_LoadOutCharacter.BP_LoadOutCharacter_C.Destroy Name Tag // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Set AllowDisplayKickButton(bool AllowDisplayKickButton); // Function BP_LoadOutCharacter.BP_LoadOutCharacter_C.Set AllowDisplayKickButton // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveTick(float DeltaSeconds); // Function BP_LoadOutCharacter.BP_LoadOutCharacter_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_LoadOutCharacter.BP_LoadOutCharacter_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveBeginPlay(); // Function BP_LoadOutCharacter.BP_LoadOutCharacter_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void ArmorSetUpdated(); // Function BP_LoadOutCharacter.BP_LoadOutCharacter_C.ArmorSetUpdated // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ArmorMeshComponentUpdated(enum class EHWArmorType Type, bool FirstPerson); // Function BP_LoadOutCharacter.BP_LoadOutCharacter_C.ArmorMeshComponentUpdated // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateNameTagLocation(); // Function BP_LoadOutCharacter.BP_LoadOutCharacter_C.UpdateNameTagLocation // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_LoadOutCharacter(int32_t EntryPoint); // Function BP_LoadOutCharacter.BP_LoadOutCharacter_C.ExecuteUbergraph_BP_LoadOutCharacter // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnLoadoutChanged__DelegateSignature(struct ABP_LoadOutCharacter_C* LoadoutCharacter); // Function BP_LoadOutCharacter.BP_LoadOutCharacter_C.OnLoadoutChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

