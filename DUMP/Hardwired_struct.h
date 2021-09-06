// Enum Hardwired.EHWArmorType
enum class EHWArmorType : uint8 {
	None,
	Head,
	Chest,
	Legs,
	Gloves,
	ChestArmorBadge,
	Backpack,
	BackpackCharm,
	BackpackBadge,
	Face,
	Hair,
	FacialHair,
	Body,
	UpperBody,
	LowerBody,
	EHWArmorType_MAX,
};

// Enum Hardwired.EHWWeaponPartType
enum class EHWWeaponPartType : uint8 {
	None,
	Receiver,
	Grip,
	Stock,
	Barrel,
	BarrelAttachment,
	Scope,
	MagWell,
	Mag,
	Handguard,
	UnderBarrel,
	ChargingHandle,
	ExtraPieces,
	Cosmetics,
	IronsightFront,
	IronsightBack,
	Skin,
	Charm,
	EHWWeaponPartType_MAX,
};

// Enum Hardwired.EHWErrorMessage
enum class EHWErrorMessage : uint8 {
	SessionNotFoundOrExpired,
	InvalidCredentials,
	InvalidEmail,
	InvalidUsername,
	DuplicateUsername,
	DuplicateEmail,
	NotInvitedEmail,
	ChangePasswordInvalidToken,
	AccountNotFound,
	AccountBanned,
	PlayerNotFound,
	PlayerHasNotPoints,
	PlayerHasNotInventoryItem,
	WeaponNotFoundInLockedWeapons,
	ItemNotFound,
	ItemHasNoUpgradePoints,
	CantAffordCrafting,
	CantAffordInstalling,
	CantAffordRerolling,
	CantInstallWeaponPart,
	CantUninstallWeaponPart,
	WeaponPartReceiverNotFound,
	WeaponPartNotFound,
	CantAffordUpgradeBlueprint,
	CantAffordReprogramBlueprint,
	CantDismantleUsedItem,
	CantDismantle,
	UpgradeWrongRarity,
	ReprogramWrongRarity,
	ShopCampaignNotFound,
	ShopCampaignNotActive,
	ShopCampaignSubsectionNotFound,
	ShopItemNotFound,
	ShopItemCantAfford,
	FriendMissingInviteInfo,
	FriendAlreadyConnected,
	FriendInvitationNotFound,
	FriendBlocked,
	FriendRequestBlocked,
	FriendRequestQueueFull,
	MatchmakingMissingTeamInfo,
	MatchmakingOnlyLeaderCanEnter,
	MatchmakingAlreadyInQueue,
	MatchmakingNotAllPlayersReady,
	MatchmakingCantExit,
	MatchmakingTeamIsNotInQueue,
	TeamInvitationNotFoundOrExpired,
	TeamIsFull,
	TeamHasDifferentBuildNumber,
	TeamCantLeave,
	TeamOnlyLeaderCanKick,
	MatchAlreadyEnded,
	MatchNotFound,
	ConfigNameInvalid,
	ConfigNameNotSupported,
	ConfigParsingFailed,
	ConfigNotSaved,
	PlayerLoadFailed,
	StoreLoadoutPlayerDoeNotHavePrimaryWeapon,
	StoreLoadoutPlayerDoeNotHaveSecondaryWeapon,
	StoreLoadoutPlayerDoeNotHaveInventoryItem,
	LoadoutNameCannotBeEmpty,
	LoadoutNameAlreadyInUse,
	CantUnreadyInQueue,
	ServerInMaintenance,
	MaintenanceIncoming,
	InternalServerError,
	UnknownError,
	ConnectionError,
	RequestTimeout,
	IllegalRequest,
	MissionNotFound,
	MissionNeedRefresh,
	MissionMaxNumberOfActive,
	CantChangeMissionState,
	CantAffordBoosting,
	NewMissionNotAllowed,
	CantAffordMission,
	MissionNotCompleted,
	MissionNotActive,
	UnclaimedRewards,
	InvalidContractState,
	MissionRarityLocked,
	InvalidNumberOfMissions,
	HasCompletedMissions,
	FactionNotChosen,
	FactionSelectionNotAllowed,
	AlreadyOwned,
	ZendeskApiError,
	UpdateRequired,
	RealMoneyTransactionAlreadyInProgress,
	RealMoneyTransactionFailToInitialize,
	RealMoneyTransactionFailed,
	RealMoneyTransactionWrongPlatform,
	ShopMaximumPurchased,
	InvalidBonusCode,
	BonusCodeExpired,
	BonusCodeAlreadyClaimed,
	LoginFailed,
	EHWErrorMessage_MAX,
};

// Enum Hardwired.EHWGamePlatform
enum class EHWGamePlatform : uint8 {
	Default,
	Steam,
	Stadia,
	EHWGamePlatform_MAX,
};

// Enum Hardwired.EHWPlayerStatus
enum class EHWPlayerStatus : uint8 {
	Offline,
	InMatch,
	Online,
	EHWPlayerStatus_MAX,
};

// Enum Hardwired.EHWFriendEventType
enum class EHWFriendEventType : uint8 {
	FriendAdded,
	FriendRemoved,
	FriendUpdated,
	InviteAdded,
	InviteRemoved,
	BlockedAdded,
	BlockedRemoved,
	EHWFriendEventType_MAX,
};

// Enum Hardwired.EHWTeamEventType
enum class EHWTeamEventType : uint8 {
	MemberAdded,
	MemberRemoved,
	MemberUpdated,
	EHWTeamEventType_MAX,
};

// Enum Hardwired.EHWTeamInviteEventType
enum class EHWTeamInviteEventType : uint8 {
	InviteAdded,
	InviteRemoved,
	EHWTeamInviteEventType_MAX,
};

// Enum Hardwired.EHWPlatformFriendEventType
enum class EHWPlatformFriendEventType : uint8 {
	FriendAdded,
	FriendRemoved,
	FriendIsPlatform,
	EHWPlatformFriendEventType_MAX,
};

// Enum Hardwired.EHWRarity
enum class EHWRarity : uint8 {
	Rarity1,
	Rarity2,
	Rarity3,
	Rarity4,
	Rarity5,
	EHWRarity_MAX,
};

// Enum Hardwired.EHWPlayerStatType
enum class EHWPlayerStatType : uint8 {
	Kills,
	Deaths,
	Assists,
	Matches,
	Rounds,
	RoundsWon,
	RoundsSurvived,
	TimesMVP,
	PlayersOutlived,
	EnemiesSpotted,
	KillRecord,
	ShotsFired,
	ShotsHit,
	WeaponKills,
	WeaponAssists,
	EHWPlayerStatType_MAX,
};

// Enum Hardwired.EHWInventoryItemType
enum class EHWInventoryItemType : uint8 {
	None,
	Weapon,
	WeaponPart,
	WeaponCosmeticPart,
	WeaponCode,
	Drone,
	DroneAbility,
	ItemConsumable,
	ItemPlaceable,
	ItemThrowable,
	ArmorFeature,
	ArmorSet,
	ArmorCustomization,
	EHWInventoryItemType_MAX,
};

// Enum Hardwired.EHWCraftingParameterGroup
enum class EHWCraftingParameterGroup : uint8 {
	None,
	Efficiency,
	Ammo,
	Handling,
	HitCapability,
	Stealth,
	All,
	EHWCraftingParameterGroup_MAX,
};

// Enum Hardwired.EHWCraftingParameter
enum class EHWCraftingParameter : uint8 {
	RateOfFire,
	PelletsPerShot,
	PelletSpread,
	EquipTime,
	ReloadTime,
	MagCapacity,
	AimStability,
	HipStability,
	OptimalRange,
	MaxRange,
	AimTime,
	FireSoundRange,
	MuzzleFlashSize,
	MinimumDamage,
	EHWCraftingParameter_MAX,
};

// Enum Hardwired.EHWFaction
enum class EHWFaction : uint8 {
	None,
	MashMedia,
	Farmira,
	NewWorldFinance,
	EHWFaction_MAX,
};

// Enum Hardwired.EHWRewardType
enum class EHWRewardType : uint8 {
	None,
	Box,
	Credits,
	HardCurrency,
	XP,
	Material,
	Booster,
	InventoryItem,
	MissionRarityUnlock,
	PerfectPoints,
	PerfectMark,
	Premium,
	EHWRewardType_MAX,
};

// Enum Hardwired.EHWRewardSource
enum class EHWRewardSource : uint8 {
	Debug,
	Support,
	Match,
	Mission,
	Shop,
	RealMoneyShop,
	AccessLevel,
	FinalComp,
	Dismantle,
	SellWeaponCode,
	BonusCode,
	EHWRewardSource_MAX,
};

// Enum Hardwired.EHWCurrencyType
enum class EHWCurrencyType : uint8 {
	Credits,
	HardCurrency,
	RealMoney,
	PerfectPoints,
	MashMedia,
	Farmira,
	NewWorldFinance,
	EHWCurrencyType_MAX,
};

// Enum Hardwired.EHWMissionTrackedStat
enum class EHWMissionTrackedStat : uint8 {
	None,
	Kills,
	KillsPerMatch,
	KillsWithSecondary,
	KillsWithSecondaryPerMatch,
	KillsAndAssists,
	KillsAndAssistsPerMatch,
	KillsAndAssistsWithItems,
	Bleeding,
	BleedingPerMatch,
	Assists,
	AssistsPerMatch,
	AssistsWithDrones,
	DamageEnemy,
	DamageEnemyWithWeaponType,
	DamageEnemyWearingArmorTier,
	DestroyDrones,
	DestroyDronesPerMatch,
	DestroyArmor,
	DestroyArmorPerMatch,
	DestroyDevices,
	HealOther,
	RoundsWon,
	RoundsWonPerMatch,
	RoundsWon_2_or_4,
	MatchesPlayed,
	UseItemsOnOther,
	UseCompanionDrone,
	CreditsEarned,
	CreditsEarnedPerMatch,
	TeamKills,
	TeamDestroyArmor,
	TeamDestroyDrones,
	TeamUseItemsOnOther,
	TeamHealOther,
	TeamKillsWithSecondary,
	TeamMostValuablePlayerTitles,
	EHWMissionTrackedStat_MAX,
};

// Enum Hardwired.EHWMissionKind
enum class EHWMissionKind : uint8 {
	Objectives,
	ItemsDrones,
	Damage,
	Teamwork,
	Loadout,
	Support,
	Weekend,
	EHWMissionKind_MAX,
};

// Enum Hardwired.EHWPlayerProfileType
enum class EHWPlayerProfileType : uint8 {
	Regular,
	Dev,
	EHWPlayerProfileType_MAX,
};

// Enum Hardwired.EHWVitalityState
enum class EHWVitalityState : uint8 {
	Normal,
	Downed,
	Dead,
	EHWVitalityState_MAX,
};

// Enum Hardwired.EHWDamageType
enum class EHWDamageType : uint8 {
	Bullet,
	Melee,
	Explosion,
	Bleeding,
	Falling,
	Fire,
	Gas,
	Undefined,
	EHWDamageType_MAX,
};

// Enum Hardwired.EHWBodypart
enum class EHWBodypart : uint8 {
	None,
	Head,
	Torso,
	LeftArm,
	RightArm,
	LeftLeg,
	RightLeg,
	LAST_INDEX,
	EHWBodypart_MAX,
};

// Enum Hardwired.EHWDamageDealerType
enum class EHWDamageDealerType : uint8 {
	Human,
	Turret,
	EHWDamageDealerType_MAX,
};

// Enum Hardwired.EHWPlayerStatusEffectType
enum class EHWPlayerStatusEffectType : uint8 {
	None,
	HearingLoss,
	BlindingFlash,
	Suppressed,
	Flyby,
	HitByMelee,
	DroneFlash,
	CombatEnhancer,
	FlashMine,
	Bandage,
	SpecterSystem,
	Burn,
	Gas,
	Smoke,
	EHWPlayerStatusEffectType_MAX,
};

// Enum Hardwired.EHWActionType
enum class EHWActionType : uint8 {
	AS_NONE,
	AS_Look,
	AS_Fire,
	AS_Aim,
	AS_Reload,
	AS_Vault,
	AS_Melee,
	AS_WeaponSwitch,
	AS_Interact,
	AS_Lean,
	AS_Move,
	AS_Crouch,
	AS_CombatCompanionDeploy,
	AS_Sprint,
	AS_Place,
	AS_Throw,
	AS_Consume,
	AS_Item1,
	AS_Item2,
	AS_Item3,
	AS_MAX,
};

// Enum Hardwired.EHWWeaponState
enum class EHWWeaponState : uint8 {
	Invalid,
	Idle,
	Firing,
	Reloading,
	Equipping,
	Unequipping,
	EHWWeaponState_MAX,
};

// Enum Hardwired.EHWPlayerVaultType
enum class EHWPlayerVaultType : uint8 {
	None,
	OverRailing,
	OverRailingAndFall,
	OverRailingFromSprint,
	OverRailingFromSprintAndFall,
	OntoPlatform,
	OntoPlatformAndCrouch,
	OntoPlatformFromSprint,
	OntoPlatformFromSprintAndCrouch,
	EHWPlayerVaultType_MAX,
};

// Enum Hardwired.EHWImpactSoundType
enum class EHWImpactSoundType : uint8 {
	None,
	ArmorBlocked,
	ArmorDamaged,
	ArmorDestroyed,
	Turret,
	Fall,
	Flesh,
	Fire,
	Gas,
	Headshot,
	Downed,
	Killed,
	EHWImpactSoundType_MAX,
};

// Enum Hardwired.EHWPlayerMessageType
enum class EHWPlayerMessageType : uint8 {
	Info,
	InfoWithDetails,
	InfoWithImage,
	Action,
	EHWPlayerMessageType_MAX,
};

// Enum Hardwired.EHWServerLocation
enum class EHWServerLocation : uint8 {
	None,
	US_EAST,
	US_WEST,
	EU_CENTRAL,
	AUSTRALIA,
	ASIA,
	EHWServerLocation_MAX,
};

// Enum Hardwired.EHWGameplayEventType
enum class EHWGameplayEventType : uint8 {
	None,
	Assist,
	AssistWithItem,
	AssistWithDrone,
	AssistReward,
	CauseBleeding,
	DestroyArmor,
	DestroyCompanionDrone,
	DestroyDevice,
	DestroyItem,
	DamageEnemy,
	HealOtherWithDrone,
	Kill,
	KillConfirm,
	KillWithSecondary,
	KillWithItem,
	MatchWin,
	RoundDraw,
	RoundLoss,
	RoundWin,
	TeamSupportDirect,
	TeamSupportIndirect,
	UseCompanionDrone,
	UseItemOnOther,
	HealOrRevive,
	Electronic,
	EnemyDowned,
	EnemyDownedWithSecondary,
	EnemyDownedWithSniper,
	EnemyDownedWithItem,
	MatchRewardCredits,
	MostValuablePlayerTitle,
	ShotFired,
	ShotHit,
	EnemySpotted,
	LevelEliminationActivateRightTerminal,
	LevelEliminationTargetPlayerEliminated,
	LevelEliminationTargetPlayerSurvived,
	LevelEliminationTerminalActivate,
	LevelEliminationTerminalCapture,
	LevelEliminationZoneCapture,
	LevelEvacuationCallHelicopter,
	LevelEvacuationDeactivateZone,
	LevelEvacuationEliminateTargets,
	LevelEvacuationExtractBriefcase,
	LevelEvacuationPickupBriefcase,
	LevelEvacuationPossessDevice,
	LevelEvacuationCaptureTerminal,
	LevelHeistBombDoor,
	LevelHeistCallDrone,
	LevelHeistDestroyBomb,
	LevelHeistDrillRepair,
	LevelHeistDrillSetup,
	LevelHeistEliminateTargets,
	LevelHeistExtractGoldBag,
	LevelHeistOpenSafe,
	LevelIntelAcquireCode,
	LevelIntelDestroyHackingDeviceRound1,
	LevelIntelDestroyHackingDeviceRound2,
	LevelIntelEliminateTargets,
	LevelIntelExtraction,
	LevelIntelOpenSafe,
	LevelIntelPlayerSurvived,
	LevelIntelVaultOpen,
	LevelIntroDestroyBox,
	LevelIntroDestroyHackingDevice,
	LevelIntroOpenSafe,
	LevelIntroPossessBox,
	LevelIntroZoneCapture,
	Count,
	EHWGameplayEventType_MAX,
};

// Enum Hardwired.EHWMetaMessageAlignment
enum class EHWMetaMessageAlignment : uint8 {
	Neutral,
	Positive,
	Negative,
	EHWMetaMessageAlignment_MAX,
};

// Enum Hardwired.EHWMetaMessagePriority
enum class EHWMetaMessagePriority : uint8 {
	High,
	Medium,
	EHWMetaMessagePriority_MAX,
};

// Enum Hardwired.EHWToastMessagePriority
enum class EHWToastMessagePriority : uint8 {
	Low,
	Medium,
	High,
	EHWToastMessagePriority_MAX,
};

// Enum Hardwired.EHWToastMessageType
enum class EHWToastMessageType : uint8 {
	Normal,
	Bleeding,
	Reward,
	Kill,
	Assist,
	EHWToastMessageType_MAX,
};

// Enum Hardwired.EHWRoundState
enum class EHWRoundState : uint8 {
	NONE,
	Prematch,
	MapBriefing,
	RoundIntro,
	RoundInProgress,
	RoundOutro,
	LAST,
	EHWRoundState_MAX,
};

// Enum Hardwired.EHWArmorFeatureType
enum class EHWArmorFeatureType : uint8 {
	None,
	AutoHeal,
	AutoPing,
	BlockDamageOverflow,
	BlockFriendlyFire,
	FlashMeleeAttacker,
	ShowElectronicSignals,
	ShowNavigator,
	ShowShotDirection,
	ShowTeamInfo,
	SignalDetector,
	BallisticChip,
	SmokeGuard,
	ElectronicRadar,
	FlashSuppressor,
	AutoCauterize,
	AutoDefibrillator,
	BloodBank,
	MuscleEnhancer,
	BlastPadding,
	OrganizedRig,
	EMPShielding,
	BallisticVest,
	SilentKiller,
	KineticDampeners,
	AgilityEnhancer,
	ThermalLayer,
	BallisticLeggings,
	TacticalPouch,
	EHWArmorFeatureType_MAX,
};

// Enum Hardwired.EHWHostileTeam
enum class EHWHostileTeam : uint8 {
	Team0,
	Team1,
	Team2,
	AllTeams,
	NoTeam,
	EHWHostileTeam_MAX,
};

// Enum Hardwired.EHWWeaponType
enum class EHWWeaponType : uint8 {
	Undefined,
	Pistol,
	Shotgun,
	AssaultRifle,
	SniperRifle,
	SMG,
	LMG,
	ShotgunRevolver,
	EHWWeaponType_MAX,
};

// Enum Hardwired.EHWDetectionStatus
enum class EHWDetectionStatus : uint8 {
	None,
	PingStationary,
	PingDynamic,
	PingDistance,
	SilhouetteStationary,
	SilhouetteDynamic,
	OutlineStationary,
	OutlineDynamic,
	EHWDetectionStatus_MAX,
};

// Enum Hardwired.EHWItemUsageType
enum class EHWItemUsageType : uint8 {
	None,
	Consumable,
	Placeable,
	Throwable,
	EHWItemUsageType_MAX,
};

// Enum Hardwired.EHWPingReason
enum class EHWPingReason : uint8 {
	Moving,
	MovingDrone,
	Enemy,
	Attack,
	Defend,
	Danger,
	EnemyDrone,
	DEFAULT,
	EHWPingReason_MAX,
};

// Enum Hardwired.EHWCameraStatus
enum class EHWCameraStatus : uint8 {
	Idle,
	BeingViewed,
	EHWCameraStatus_MAX,
};

// Enum Hardwired.EHWChatChannelType
enum class EHWChatChannelType : uint8 {
	Party,
	FireTeam,
	Merged,
	MAX,
	FIRST,
	None,
};

// Enum Hardwired.EHWVoiceChatMode
enum class EHWVoiceChatMode : uint8 {
	Automatic,
	PushToTalk,
	AlwaysOff,
	EHWVoiceChatMode_MAX,
};

// Enum Hardwired.EHWMeleeType
enum class EHWMeleeType : uint8 {
	Normal,
	Quick,
	EHWMeleeType_MAX,
};

// Enum Hardwired.EHWLogLevel
enum class EHWLogLevel : uint8 {
	Log,
	Warning,
	Error,
	EHWLogLevel_MAX,
};

// Enum Hardwired.EHWFindResult
enum class EHWFindResult : uint8 {
	Found,
	NotFound,
	EHWFindResult_MAX,
};

// Enum Hardwired.EHWDroneAbilityMode
enum class EHWDroneAbilityMode : uint8 {
	Normal,
	Disabled,
	RouteToOtherAbility,
	EHWDroneAbilityMode_MAX,
};

// Enum Hardwired.EHWGamepadType
enum class EHWGamepadType : uint8 {
	Gamepad_None,
	Gamepad_SwitchPro,
	Gamepad_DualJoyCon,
	Gamepad_LeftJoyCon,
	Gamepad_RightJoyCon,
	Gamepad_Handheld,
	Gamepad_PS4,
	Gamepad_XboxOne,
	Gamepad_Stadia,
	Gamepad_MAX,
};

// Enum Hardwired.EHWLootTypeForUI
enum class EHWLootTypeForUI : uint8 {
	None,
	Credits,
	Materials,
	BlueprintCode,
	Blueprint,
	ArmorSet,
	WeaponPart,
	Booster,
	PerfectPoints,
	PerfectMark,
	EHWLootTypeForUI_MAX,
};

// Enum Hardwired.EHWUnequipType
enum class EHWUnequipType : uint8 {
	Normal,
	Fast,
	Instant,
	EHWUnequipType_MAX,
};

// Enum Hardwired.EHWPaymentStatus
enum class EHWPaymentStatus : uint8 {
	Created,
	InitializedWithBackend,
	PaymentStarted,
	PaymentCompleted,
	FinalizedWithBackend,
	EHWPaymentStatus_MAX,
};

// Enum Hardwired.EHWBuildType
enum class EHWBuildType : uint8 {
	Development,
	Debug,
	Test,
	Shipping,
	EHWBuildType_MAX,
};

// Enum Hardwired.EHWObjectFound
enum class EHWObjectFound : uint8 {
	Found,
	NotFound,
	EHWObjectFound_MAX,
};

// Enum Hardwired.EHWDataOperation
enum class EHWDataOperation : uint8 {
	Changed,
	Unchanged,
	EHWDataOperation_MAX,
};

// Enum Hardwired.EHWProgressBarType
enum class EHWProgressBarType : uint8 {
	Default,
	Reviving,
	Healing,
	EHWProgressBarType_MAX,
};

// Enum Hardwired.EHWWeaponCategory
enum class EHWWeaponCategory : uint8 {
	None,
	Primary,
	Secondary,
	EHWWeaponCategory_MAX,
};

// Enum Hardwired.EHWDirection
enum class EHWDirection : uint8 {
	Up,
	Down,
	Left,
	Right,
	EHWDirection_MAX,
};

// Enum Hardwired.EHWArmoryItemSelectionType
enum class EHWArmoryItemSelectionType : uint8 {
	CheckMark,
	RightArrow,
	DownArrow,
	EHWArmoryItemSelectionType_MAX,
};

// Enum Hardwired.EHWCharacterAction
enum class EHWCharacterAction : uint8 {
	Default,
	Sprinting,
	EHWCharacterAction_MAX,
};

// Enum Hardwired.EHWCharacterPosture
enum class EHWCharacterPosture : uint8 {
	Standing,
	Crouched,
	Downed,
	DEFAULT,
	EHWCharacterPosture_MAX,
};

// Enum Hardwired.EHWDroneAnalyticsEvent
enum class EHWDroneAnalyticsEvent : uint8 {
	Spawn,
	Activate,
	SwitchToCompanion,
	SwitchToCharacter,
	Pickup,
	Destroyed,
	INVALID,
	EHWDroneAnalyticsEvent_MAX,
};

// Enum Hardwired.EHWVersionInfoField
enum class EHWVersionInfoField : uint8 {
	BuildId,
	Branch,
	Changeset,
	EHWVersionInfoField_MAX,
};

// Enum Hardwired.EHWSelectableButtonPressBehavior
enum class EHWSelectableButtonPressBehavior : uint8 {
	None,
	Select,
	Toggle,
	RadioButton,
	EHWSelectableButtonPressBehavior_MAX,
};

// Enum Hardwired.EHWIKType
enum class EHWIKType : uint8 {
	Off,
	Flat,
	Full,
	EHWIKType_MAX,
};

// Enum Hardwired.EHWRoundObjectiveState
enum class EHWRoundObjectiveState : uint8 {
	None,
	Todo,
	InProgress,
	Done,
	EHWRoundObjectiveState_MAX,
};

// Enum Hardwired.EHWViewpoint
enum class EHWViewpoint : uint8 {
	Default,
	FirstPerson,
	ThirdPerson,
	EHWViewpoint_MAX,
};

// Enum Hardwired.EHWAnalyticsItemUseEventType
enum class EHWAnalyticsItemUseEventType : uint8 {
	Start,
	End,
	Aborted,
	Explode,
	Impact,
	Pickup,
	Destroy,
	Trigger,
	Interact,
	Jam,
	Ping,
	Spot,
	INVALID,
	EHWAnalyticsItemUseEventType_MAX,
};

// Enum Hardwired.EHWWeaponVisibility
enum class EHWWeaponVisibility : uint8 {
	HiddenBoth,
	Visible1P,
	Visible3P,
	VisibleBoth,
	EHWWeaponVisibility_MAX,
};

// Enum Hardwired.EHWAnalyticsTargetType
enum class EHWAnalyticsTargetType : uint8 {
	None,
	Player,
	Environment,
	Destructible,
	EHWAnalyticsTargetType_MAX,
};

// Enum Hardwired.EHWMapMarkerType
enum class EHWMapMarkerType : uint8 {
	None,
	Area,
	Enemy,
	Friendly,
	Objective,
	Pickup,
	Ping,
	Target,
	Text,
	Camera,
	CameraTerminal,
	DroneSpawn,
	Attack,
	Capture,
	Defend,
	Destroy,
	Device,
	DisablePoint,
	Eliminate,
	Escape,
	Intel,
	PreventEscape,
	SideObjective,
	EHWMapMarkerType_MAX,
};

// Enum Hardwired.EHWPickupMode
enum class EHWPickupMode : uint8 {
	Overlap,
	Interact,
	EHWPickupMode_MAX,
};

// Enum Hardwired.EHWPlayerRewardType
enum class EHWPlayerRewardType : uint8 {
	Assist,
	Bleed,
	Boost,
	FatalInjury,
	Heal,
	Kill,
	SaveLife,
	SmallInjury,
	LAST_INDEX,
	EHWPlayerRewardType_MAX,
};

// Enum Hardwired.EHWPhysicalMaterialImpactSoundType
enum class EHWPhysicalMaterialImpactSoundType : uint8 {
	Default,
	Bullet,
	Shotgun,
	SmallExplosion,
	LargeExplosion,
	EHWPhysicalMaterialImpactSoundType_MAX,
};

// Enum Hardwired.EHWPlayerJourneyStep
enum class EHWPlayerJourneyStep : uint8 {
	GetStarterPack,
	StartMatchMaking,
	MatchFound,
	MatchFinished,
	StartTutorialUI,
	SkipTutorialUI,
	CompleteTutorialUI,
	OpenStop,
	BrowseShop,
	BuyingShopItem,
	CreateLoadout,
	EditLoadout,
	CheckEquipmentMod,
	BrowseSettings,
	ChangeSettings,
	EHWPlayerJourneyStep_MAX,
};

// Enum Hardwired.EHWWeaponPartSoundType
enum class EHWWeaponPartSoundType : uint8 {
	DUMMY,
	FireEnemy,
	FireFriend,
	FireSelf,
	DryShot,
	Reload,
	CockPull,
	CockRelease,
	MagazineConnect,
	MagazineLock,
	MagazinePull,
	MagazineGrab,
	WeaponClose,
	WeaponOpen,
	Count,
	EHWWeaponPartSoundType_MAX,
};

// Enum Hardwired.EHWFingerPoseTypes
enum class EHWFingerPoseTypes : uint8 {
	Default,
	Hipfire,
	Aiming,
	AimFire,
	EHWFingerPoseTypes_MAX,
};

// Enum Hardwired.EHWWeaponPartAnimationType
enum class EHWWeaponPartAnimationType : uint8 {
	DUMMY,
	ReloadBegin,
	ReloadEnd,
	Reload,
	PartialReloadLoop,
	FullReloadBegin,
	FullReloadEnd,
	FullReload,
	Equip,
	Unequip,
	UnequipFast,
	UnequipInstant,
	HipFire,
	AimFire,
	HipFireLastShot,
	AimFireLastShot,
	Melee,
	QuickMelee,
	Aftershot,
	AftershotAiming,
	EHWWeaponPartAnimationType_MAX,
};

// Enum Hardwired.EHWJoinErrorType
enum class EHWJoinErrorType : uint8 {
	None,
	NoSessionId,
	DuplicateLogin,
	Backfilled,
	PlayerNotAllowed,
	EHWJoinErrorType_MAX,
};

// Enum Hardwired.EHWRoundOutcome
enum class EHWRoundOutcome : uint8 {
	Won,
	Lost,
	Tied,
	EHWRoundOutcome_MAX,
};

// Enum Hardwired.EHWPhysicalMaterialAudioType
enum class EHWPhysicalMaterialAudioType : uint8 {
	None,
	Airduct,
	Airduct_Ext,
	Asphalt,
	Brick,
	Brick_Pile,
	Broke_Glass,
	Cardboard,
	Ceramic,
	Concrete,
	Concrete_Carpet,
	Dumpster,
	Fabric,
	Flesh,
	Foliage,
	Grass,
	Gravel,
	Glass_Broken,
	Glass_Large,
	Glass_Medium,
	Glass_Small,
	Glass_Tempered,
	Leather_Couch,
	Marble,
	Mattress,
	Metal,
	Metal_Beam,
	Metal_Car,
	Metal_Corrugated_Iron,
	Metal_Desk,
	Metal_Manhole,
	Metal_Pipe,
	Metal_Platform,
	Metal_Ramp,
	Metal_Staircase,
	Mud,
	Oil_Drum,
	Player,
	Plastic,
	Rubber,
	Rubber_Mat,
	Sand,
	Tarpaulin,
	Tea_Chest,
	Tile_Ceramic,
	Tile_Roof,
	Trash,
	Solid_Wood,
	Water,
	Wood,
	Wood_Board,
	Wood_Desk,
	Wood_Floorboard_Clean,
	Wood_Floorboard_Dirty,
	Wood_Hard,
	Wood_on_Metal,
	Wood_Soft,
	Wood_Solid_Carpet,
	Wood_Solid_Tiled,
	EHWPhysicalMaterialAudioType_MAX,
};

// Enum Hardwired.EHWInputType
enum class EHWInputType : uint8 {
	None,
	MouseKeyboard,
	Gamepad,
	Unknown,
	EHWInputType_MAX,
};

// Enum Hardwired.EHWApplicationState
enum class EHWApplicationState : uint8 {
	None,
	Startup,
	Login,
	Register,
	NewPlayer,
	TrainingGround,
	Home,
	Matchmaking,
	Combat,
	EHWApplicationState_MAX,
};

// Enum Hardwired.EHWWeaponPartSubType
enum class EHWWeaponPartSubType : uint8 {
	None,
	IronSights,
	Optical,
	RedDot,
	SkeletonStock,
	FullStock,
	Stockless,
	ShortBarrel,
	LongBarrel,
	MuzzleBrake,
	Suppressor,
	VerticalGrip,
	AngledGrip,
	LaserSight,
	Flashlight,
	BoxMagazine,
	DrumMagazine,
	RevolverCylinder,
	FlashHider,
	EHWWeaponPartSubType_MAX,
};

// Enum Hardwired.EHWWeaponParameterDataValueType
enum class EHWWeaponParameterDataValueType : uint8 {
	Rarity1,
	Rarity2,
	Rarity3,
	Rarity4,
	Rarity5,
	Rarity5_Max,
	Limit,
	EHWWeaponParameterDataValueType_MAX,
};

// Enum Hardwired.EHWWeaponFireMode
enum class EHWWeaponFireMode : uint8 {
	Continuous,
	Burst,
	EHWWeaponFireMode_MAX,
};

// Enum Hardwired.EHWWeaponAttributeType
enum class EHWWeaponAttributeType : uint8 {
	None,
	AimTime,
	AimRecovery,
	AmmoReserve,
	ArmorDamage,
	EquipTime,
	HipRecovery,
	MagCapacity,
	MaxRange,
	MuzzleFlashSize,
	OptimalRange,
	PelletSpread,
	PelletSpreadHip,
	RateOfFire,
	RecoilAim,
	RecoilHip,
	ReloadTime,
	SharpnessTime,
	SwayAmplitude,
	SwayRecovery,
	EHWWeaponAttributeType_MAX,
};

// Enum Hardwired.EHWVendor
enum class EHWVendor : uint8 {
	None,
	Alliance,
	Apex,
	Foundry,
	Merlin,
	EHWVendor_MAX,
};

// Enum Hardwired.EHWTeamStatus
enum class EHWTeamStatus : uint8 {
	Open,
	Matchmaking,
	Playing,
	Closed,
	EHWTeamStatus_MAX,
};

// Enum Hardwired.EHWSupportRequestType
enum class EHWSupportRequestType : uint8 {
	BugReport,
	SupportRequest,
	PlayerReport,
	EHWSupportRequestType_MAX,
};

// Enum Hardwired.EHWSetAbilityType
enum class EHWSetAbilityType : uint8 {
	None,
	DamageToObjects,
	AmmoReserves,
	UsableOneHanded,
	HipFireBonus,
	EHWSetAbilityType_MAX,
};

// Enum Hardwired.EHWRealMoneyTransactionStatus
enum class EHWRealMoneyTransactionStatus : uint8 {
	INITIALIZE,
	SUCCESS,
	FAILED,
	REFUNDED,
	EHWRealMoneyTransactionStatus_MAX,
};

// Enum Hardwired.EHWPerfectMarkType
enum class EHWPerfectMarkType : uint8 {
	None,
	NameTag,
	EHWPerfectMarkType_MAX,
};

// Enum Hardwired.EHWPaymentPlatform
enum class EHWPaymentPlatform : uint8 {
	Test,
	Steam,
	Stadia,
	EHWPaymentPlatform_MAX,
};

// Enum Hardwired.EHWMissionState
enum class EHWMissionState : uint8 {
	NotStarted,
	InProgress,
	Completed,
	RewardClaimed,
	Expired,
	EHWMissionState_MAX,
};

// Enum Hardwired.EHWMissionCategory
enum class EHWMissionCategory : uint8 {
	Daily,
	Weekly,
	WeekMercenary,
	EHWMissionCategory_MAX,
};

// Enum Hardwired.EHWMatchStatus
enum class EHWMatchStatus : uint8 {
	Open,
	Matched,
	Started,
	Close,
	Waiting,
	EHWMatchStatus_MAX,
};

// Enum Hardwired.EHWItemSlotSize
enum class EHWItemSlotSize : uint8 {
	Small,
	Medium,
	Large,
	EHWItemSlotSize_MAX,
};

// Enum Hardwired.EHWHTTPMethod
enum class EHWHTTPMethod : uint8 {
	Get,
	Post,
	EHWHTTPMethod_MAX,
};

// Enum Hardwired.EHWGameRole
enum class EHWGameRole : uint8 {
	DEV,
	QA,
	BETA,
	PROD,
	EHWGameRole_MAX,
};

// Enum Hardwired.EHWDroneAbilityType
enum class EHWDroneAbilityType : uint8 {
	Single,
	Continuous,
	Toggleable,
	EHWDroneAbilityType_MAX,
};

// Enum Hardwired.EHWCraftingItemType
enum class EHWCraftingItemType : uint8 {
	None,
	WeaponPart,
	Armor,
	EHWCraftingItemType_MAX,
};

// Enum Hardwired.EHWConfigKeyType
enum class EHWConfigKeyType : uint8 {
	WeaponPartDetachCost,
	EHWConfigKeyType_MAX,
};

// Enum Hardwired.EHWCombatHitRangeResult
enum class EHWCombatHitRangeResult : uint8 {
	None,
	OutOfRange,
	WithinRange,
	WithinOptimalRange,
	EHWCombatHitRangeResult_MAX,
};

// Enum Hardwired.EHWCombatHitArmorResult
enum class EHWCombatHitArmorResult : uint8 {
	None,
	ArmorDamaged,
	ArmorDestroyedByDamage,
	ArmorPenetrated,
	EHWCombatHitArmorResult_MAX,
};

// Enum Hardwired.EHWCharacterBodyType
enum class EHWCharacterBodyType : uint8 {
	None,
	Masculine,
	Feminine,
	EHWCharacterBodyType_MAX,
};

// Enum Hardwired.EHWBoosterType
enum class EHWBoosterType : uint8 {
	IncomeMultiplier,
	CraftingDiscount,
	BlueprintCodeDiscount,
	UpgradePointDiscount,
	MaterialDropChanceMultiplier,
	EHWBoosterType_MAX,
};

// Enum Hardwired.EHWBonusCodeType
enum class EHWBonusCodeType : uint8 {
	Static,
	Dynamic,
	EHWBonusCodeType_MAX,
};

// Enum Hardwired.EHWBonusCodePlatform
enum class EHWBonusCodePlatform : uint8 {
	Steam,
	Stadia,
	All,
	EHWBonusCodePlatform_MAX,
};

// Enum Hardwired.EHWBodypartFilter
enum class EHWBodypartFilter : uint8 {
	None,
	Head,
	Torso,
	LeftArm,
	RightArm,
	LeftLeg,
	RightLeg,
	Arms,
	Legs,
	Any,
	LAST_INDEX,
	EHWBodypartFilter_MAX,
};

// Enum Hardwired.EHWBlueprintEditType
enum class EHWBlueprintEditType : uint8 {
	None,
	EditAnywhere,
	EditDefaultsOnly,
	EditInstanceOnly,
	EHWBlueprintEditType_MAX,
};

// Enum Hardwired.EHWBlueprintAccessType
enum class EHWBlueprintAccessType : uint8 {
	None,
	BlueprintReadOnly,
	BlueprintReadWrite,
	EHWBlueprintAccessType_MAX,
};

// Enum Hardwired.EHWArmorSetClass
enum class EHWArmorSetClass : uint8 {
	Light,
	Medium,
	Heavy,
	EHWArmorSetClass_MAX,
};

// Enum Hardwired.EHWAdminCommandType
enum class EHWAdminCommandType : uint8 {
	ChangeName,
	ChangeCurrency,
	ChangeXP,
	ChangeLevel,
	GiveRewardBox,
	GiveInventoryItem,
	GiveWeapon,
	EHWAdminCommandType_MAX,
};

// Enum Hardwired.EHWGenericPopupInputType
enum class EHWGenericPopupInputType : uint8 {
	Text,
	ComboBox,
	Radio,
	EHWGenericPopupInputType_MAX,
};

// Enum Hardwired.EHWGenericPopupStyle
enum class EHWGenericPopupStyle : uint8 {
	Default,
	Warning,
	EHWGenericPopupStyle_MAX,
};

// Enum Hardwired.EHWUseAbortReason
enum class EHWUseAbortReason : uint8 {
	Automatic,
	UserIntentional,
	EHWUseAbortReason_MAX,
};

// Enum Hardwired.EHWCraftingParameterValueType
enum class EHWCraftingParameterValueType : uint8 {
	MinimumValue,
	MinimumRange,
	Value,
	ValueWithoutUpgrades,
	EHWCraftingParameterValueType_MAX,
};

// Enum Hardwired.EHWCraftingParameterScale
enum class EHWCraftingParameterScale : uint8 {
	Global,
	Model,
	EHWCraftingParameterScale_MAX,
};

// Enum Hardwired.EHWLocallyControlledBranches
enum class EHWLocallyControlledBranches : uint8 {
	Local,
	Other,
	EHWLocallyControlledBranches_MAX,
};

// Enum Hardwired.EHWCapsuleRotationType
enum class EHWCapsuleRotationType : uint8 {
	None,
	LockRotation,
	UseAimRotation,
	EHWCapsuleRotationType_MAX,
};

// Enum Hardwired.EHWInterpolationState
enum class EHWInterpolationState : uint8 {
	None,
	Start,
	End,
	EHWInterpolationState_MAX,
};

// Enum Hardwired.EHWInRoundHUDMode
enum class EHWInRoundHUDMode : uint8 {
	None,
	Human,
	Drone,
	Spectator,
	EHWInRoundHUDMode_MAX,
};

// Enum Hardwired.EHWShopDataStatus
enum class EHWShopDataStatus : uint8 {
	None,
	Loading,
	Ready,
	Failed,
	EHWShopDataStatus_MAX,
};

// Enum Hardwired.EHWTurretState
enum class EHWTurretState : uint8 {
	None,
	Idle,
	Aggro,
	Attacking,
	EHWTurretState_MAX,
};

// Enum Hardwired.EHWUsernameFormatError
enum class EHWUsernameFormatError : uint8 {
	None,
	AtLeast3Chars,
	CharLengthLimit,
	HasEmptySpace,
	GotSpecialChar,
	GotBlacklistedChar,
	EHWUsernameFormatError_MAX,
};

// Enum Hardwired.EHWTeamResponse
enum class EHWTeamResponse : uint8 {
	None,
	Player,
	Friendly,
	Hostile,
	EHWTeamResponse_MAX,
};

// Enum Hardwired.EHWRarityComparisonType
enum class EHWRarityComparisonType : uint8 {
	LowerRarity,
	EqualRarity,
	NextRarity,
	HigherRarity,
	EHWRarityComparisonType_MAX,
};

// Enum Hardwired.EHWWeaponCostType
enum class EHWWeaponCostType : uint8 {
	CreditValue,
	MaterialValue,
	ReprogrammingCost,
	CodeSellPrice,
	UpgradeWeaponCreditsCost,
	UpgradeWeaponMaterialsCost,
	ResetWeaponUpgradesCost,
	EHWWeaponCostType_MAX,
};

// Enum Hardwired.EHWVerticalTextBoxRotation
enum class EHWVerticalTextBoxRotation : uint8 {
	Horizontal,
	Clockwise,
	Counterclockwise,
	EHWVerticalTextBoxRotation_MAX,
};

// Enum Hardwired.EHWVoiceChatStatus
enum class EHWVoiceChatStatus : uint8 {
	Disabled,
	Pending,
	Enabled,
	EHWVoiceChatStatus_MAX,
};

// Enum Hardwired.EHWWeaponItemType
enum class EHWWeaponItemType : uint8 {
	None,
	Blueprint,
	BlueprintNotAvailable,
	EmptySlot,
	SlotNotAvailable,
	CraftedWeapon,
	PurchasedWeapon,
	EHWWeaponItemType_MAX,
};

// Enum Hardwired.EHWWeaponParameterValueType
enum class EHWWeaponParameterValueType : uint8 {
	MinimumValue,
	MaximumValue,
	BlueprintMaximumValue,
	CurrentValue,
	EHWWeaponParameterValueType_MAX,
};

// Enum Hardwired.ERecoilShapeType
enum class ERecoilShapeType : uint8 {
	None,
	Oval,
	Triangle,
	InvertedTriangle,
	Square,
	ERecoilShapeType_MAX,
};

// Enum Hardwired.EHWSocketActionResult
enum class EHWSocketActionResult : uint8 {
	Then,
	SocketNotFound,
	EHWSocketActionResult_MAX,
};

// ScriptStruct Hardwired.HWStatusData
// Size: 0x68 (Inherited: 0x00)
struct FHWStatusData {
	struct FString ReleaseVersion; // 0x00(0x10)
	struct FString ApiVersion; // 0x10(0x10)
	struct FString StartScheduled; // 0x20(0x10)
	struct FString MaintenanceScheduled; // 0x30(0x10)
	struct FString MaintenanceEndScheduled; // 0x40(0x10)
	bool IsInMaintenance; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FString CurrentDate; // 0x58(0x10)
};

// ScriptStruct Hardwired.HWLoadPublicProfileResponse
// Size: 0x1c0 (Inherited: 0x00)
struct FHWLoadPublicProfileResponse {
	struct FHWPlayerPublicProfile PlayerPublicProfile; // 0x00(0x1c0)
};

// ScriptStruct Hardwired.HWPlayerPublicProfile
// Size: 0x1c0 (Inherited: 0x00)
struct FHWPlayerPublicProfile {
	struct FString PlayerId; // 0x00(0x10)
	int32_t Level; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString DisplayName; // 0x18(0x10)
	struct FHWWeaponParts PrimaryWeapon; // 0x28(0xb0)
	struct FHWWeaponParts SecondaryWeapon; // 0xd8(0xb0)
	struct FName ArmorSetId; // 0x188(0x08)
	struct FName Item1; // 0x190(0x08)
	struct FName Item2; // 0x198(0x08)
	struct FName Item3; // 0x1a0(0x08)
	struct FName CharacterId; // 0x1a8(0x08)
	struct TArray<struct FHWArmorPart> CosmeticArmorParts; // 0x1b0(0x10)
};

// ScriptStruct Hardwired.HWArmorPart
// Size: 0x0c (Inherited: 0x00)
struct FHWArmorPart {
	enum class EHWArmorType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName PartId; // 0x04(0x08)
};

// ScriptStruct Hardwired.HWWeaponParts
// Size: 0xb0 (Inherited: 0x00)
struct FHWWeaponParts {
	struct FString DebugName; // 0x00(0x10)
	struct TMap<enum class EHWWeaponPartType, struct FName> WeaponParts; // 0x10(0x50)
	struct TMap<enum class EHWWeaponPartType, struct FName> WeaponCosmeticIds; // 0x60(0x50)
};

// ScriptStruct Hardwired.HWFriend
// Size: 0x38 (Inherited: 0x00)
struct FHWFriend {
	struct FString PlayerId; // 0x00(0x10)
	struct FString Date; // 0x10(0x10)
	struct FString DisplayName; // 0x20(0x10)
	enum class EHWPlayerStatus PlayerStatus; // 0x30(0x01)
	enum class EHWGamePlatform Platform; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// ScriptStruct Hardwired.HWTeamPlayer
// Size: 0x40 (Inherited: 0x00)
struct FHWTeamPlayer {
	struct FString PlayerId; // 0x00(0x10)
	struct FString DisplayName; // 0x10(0x10)
	int32_t Level; // 0x20(0x04)
	int32_t MatchesPlayed; // 0x24(0x04)
	struct TArray<struct FString> LastPlayedMaps; // 0x28(0x10)
	bool ReadyToPlay; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Hardwired.HWTeamInvitation
// Size: 0x40 (Inherited: 0x00)
struct FHWTeamInvitation {
	struct FString TeamId; // 0x00(0x10)
	struct FString InviterId; // 0x10(0x10)
	struct FString InviterName; // 0x20(0x10)
	struct FString InviteTime; // 0x30(0x10)
};

// ScriptStruct Hardwired.HWResponseBase
// Size: 0x01 (Inherited: 0x00)
struct FHWResponseBase {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Hardwired.HWLoginResponse
// Size: 0x10 (Inherited: 0x00)
struct FHWLoginResponse {
	struct FString SessionId; // 0x00(0x10)
};

// ScriptStruct Hardwired.HWNewsResponse
// Size: 0x20 (Inherited: 0x00)
struct FHWNewsResponse {
	struct FString Title; // 0x00(0x10)
	struct FString Text; // 0x10(0x10)
};

// ScriptStruct Hardwired.HWProfileWithCollectedRewardsResponse
// Size: 0x4d8 (Inherited: 0x00)
struct FHWProfileWithCollectedRewardsResponse {
	struct FHWPlayerProfileData PlayerProfileData; // 0x00(0x4c0)
	struct TArray<struct FHWReward> Rewards; // 0x4c0(0x10)
	bool AdditionalReward; // 0x4d0(0x01)
	char pad_4D1[0x7]; // 0x4d1(0x07)
};

// ScriptStruct Hardwired.HWReward
// Size: 0x268 (Inherited: 0x00)
struct FHWReward {
	struct FString ID; // 0x00(0x10)
	int32_t Amount; // 0x10(0x04)
	int32_t Level; // 0x14(0x04)
	struct FString SourceId; // 0x18(0x10)
	struct FString SourceExtra; // 0x28(0x10)
	enum class EHWRewardSource Source; // 0x38(0x01)
	enum class EHWRewardType Type; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct FHWInventoryItem InventoryItem; // 0x40(0x70)
	enum class EHWFaction Faction; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	struct FHWBoosterItem Booster; // 0xb4(0x08)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct FHWWeaponPartItem WeaponPartItem; // 0xc0(0x88)
	struct FHWWeaponCodeItem WeaponCode; // 0x148(0x118)
	enum class EHWRarity Rarity; // 0x260(0x01)
	bool Purchased; // 0x261(0x01)
	bool Locked; // 0x262(0x01)
	char pad_263[0x5]; // 0x263(0x05)
};

// ScriptStruct Hardwired.HWWeaponCodeItem
// Size: 0x118 (Inherited: 0x00)
struct FHWWeaponCodeItem {
	enum class EHWRarity Rarity; // 0x00(0x01)
	enum class EHWCraftingParameterGroup ParameterGroup; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TMap<enum class EHWCraftingParameter, float> Rolls; // 0x08(0x50)
	struct TMap<enum class EHWCraftingParameterGroup, int32_t> UpgradePoints; // 0x58(0x50)
	struct FString ID; // 0xa8(0x10)
	struct FName ConfigId; // 0xb8(0x08)
	enum class EHWInventoryItemType ConfigType; // 0xc0(0x01)
	bool HasBeenSeen; // 0xc1(0x01)
	bool Purchased; // 0xc2(0x01)
	char pad_C3[0x5]; // 0xc3(0x05)
	struct TMap<enum class EHWPlayerStatType, int32_t> Stats; // 0xc8(0x50)
};

// ScriptStruct Hardwired.HWWeaponPartItem
// Size: 0x88 (Inherited: 0x00)
struct FHWWeaponPartItem {
	struct FName SetId; // 0x00(0x08)
	enum class EHWWeaponPartType Type; // 0x08(0x01)
	bool CanDismantle; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FName CosmeticId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString ID; // 0x18(0x10)
	struct FName ConfigId; // 0x28(0x08)
	enum class EHWInventoryItemType ConfigType; // 0x30(0x01)
	bool HasBeenSeen; // 0x31(0x01)
	bool Purchased; // 0x32(0x01)
	char pad_33[0x5]; // 0x33(0x05)
	struct TMap<enum class EHWPlayerStatType, int32_t> Stats; // 0x38(0x50)
};

// ScriptStruct Hardwired.HWBoosterItem
// Size: 0x08 (Inherited: 0x00)
struct FHWBoosterItem {
	enum class EHWFaction Faction; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Tier; // 0x04(0x04)
};

// ScriptStruct Hardwired.HWInventoryItem
// Size: 0x70 (Inherited: 0x00)
struct FHWInventoryItem {
	struct FString ID; // 0x00(0x10)
	struct FName ConfigId; // 0x10(0x08)
	enum class EHWInventoryItemType ConfigType; // 0x18(0x01)
	bool HasBeenSeen; // 0x19(0x01)
	bool Purchased; // 0x1a(0x01)
	char pad_1B[0x5]; // 0x1b(0x05)
	struct TMap<enum class EHWPlayerStatType, int32_t> Stats; // 0x20(0x50)
};

// ScriptStruct Hardwired.HWPlayerProfileData
// Size: 0x4c0 (Inherited: 0x00)
struct FHWPlayerProfileData {
	struct FHWPlayerDetails PlayerDetails; // 0x00(0xf0)
	struct FHWPlayerStats PlayerStats; // 0xf0(0xc0)
	struct FHWPlayerMission PlayerMission; // 0x1b0(0x30)
	struct FHWPlayerInventory PlayerInventory; // 0x1e0(0x1f8)
	struct FHWPlayerProgression PlayerProgression; // 0x3d8(0x28)
	struct FHWPlayerWallet PlayerWallet; // 0x400(0xb0)
	struct FString PlayerId; // 0x4b0(0x10)
};

// ScriptStruct Hardwired.HWPlayerWallet
// Size: 0xb0 (Inherited: 0x00)
struct FHWPlayerWallet {
	struct TMap<enum class EHWCurrencyType, struct FHWPlayerCurrency> PlayerCurrencies; // 0x00(0x50)
	struct TMap<struct FString, int32_t> AmountByShopItemId; // 0x50(0x50)
	struct FString PlayerId; // 0xa0(0x10)
};

// ScriptStruct Hardwired.HWPlayerCurrency
// Size: 0x18 (Inherited: 0x00)
struct FHWPlayerCurrency {
	int64_t Max; // 0x00(0x08)
	int64_t Total; // 0x08(0x08)
	int64_t Bought; // 0x10(0x08)
};

// ScriptStruct Hardwired.HWPlayerProgression
// Size: 0x28 (Inherited: 0x00)
struct FHWPlayerProgression {
	int32_t Level; // 0x00(0x04)
	int32_t Points; // 0x04(0x04)
	struct TArray<struct FString> TutorialsCompleted; // 0x08(0x10)
	struct FString PlayerId; // 0x18(0x10)
};

// ScriptStruct Hardwired.HWPlayerInventory
// Size: 0x1f8 (Inherited: 0x00)
struct FHWPlayerInventory {
	struct FString PerfectMarkEndTimestamp; // 0x00(0x10)
	struct TMap<struct FString, struct FHWLoadoutData> Loadouts; // 0x10(0x50)
	struct TArray<struct FHWInventoryItem> Inventory; // 0x60(0x10)
	struct FHWLoadoutData SelectedLoadout; // 0x70(0x88)
	struct TMap<struct FString, struct FHWWeaponItem> Weapons; // 0xf8(0x50)
	struct TMap<struct FString, struct FHWWeaponPartItem> WeaponParts; // 0x148(0x50)
	struct TMap<struct FString, struct FHWWeaponCodeItem> WeaponCodes; // 0x198(0x50)
	struct FString PlayerId; // 0x1e8(0x10)
};

// ScriptStruct Hardwired.HWWeaponItem
// Size: 0x288 (Inherited: 0x00)
struct FHWWeaponItem {
	struct FString Name; // 0x00(0x10)
	struct FString AcquiredTime; // 0x10(0x10)
	int32_t OrderNumber; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TMap<enum class EHWCraftingParameterGroup, enum class EHWRarity> Rarities; // 0x28(0x50)
	struct TMap<enum class EHWCraftingParameter, float> Rolls; // 0x78(0x50)
	struct TMap<enum class EHWCraftingParameterGroup, int32_t> TotalUpgradePoints; // 0xc8(0x50)
	struct TMap<enum class EHWCraftingParameter, int32_t> UpgradePoints; // 0x118(0x50)
	struct TMap<enum class EHWWeaponPartType, struct FString> Parts; // 0x168(0x50)
	struct TMap<enum class EHWWeaponPartType, struct FString> DefaultParts; // 0x1b8(0x50)
	int32_t TotalCreditsSpentOnCodes; // 0x208(0x04)
	float TotalDamage; // 0x20c(0x04)
	struct FName AssembledWeaponId; // 0x210(0x08)
	struct FString ID; // 0x218(0x10)
	struct FName ConfigId; // 0x228(0x08)
	enum class EHWInventoryItemType ConfigType; // 0x230(0x01)
	bool HasBeenSeen; // 0x231(0x01)
	bool Purchased; // 0x232(0x01)
	char pad_233[0x5]; // 0x233(0x05)
	struct TMap<enum class EHWPlayerStatType, int32_t> Stats; // 0x238(0x50)
};

// ScriptStruct Hardwired.HWLoadoutData
// Size: 0x88 (Inherited: 0x00)
struct FHWLoadoutData {
	struct FString LoadoutName; // 0x00(0x10)
	struct FString PrimaryWeapon; // 0x10(0x10)
	struct FString SecondaryWeapon; // 0x20(0x10)
	struct FName ArmorSetId; // 0x30(0x08)
	struct FName Item1; // 0x38(0x08)
	struct FName Item2; // 0x40(0x08)
	struct FName Item3; // 0x48(0x08)
	struct FName CombatCompanionAbilityActive; // 0x50(0x08)
	struct TArray<struct FName> ArmorFeatures; // 0x58(0x10)
	struct FName CharacterId; // 0x68(0x08)
	struct FName CharacterVoiceId; // 0x70(0x08)
	struct TArray<struct FHWArmorPart> CosmeticArmorParts; // 0x78(0x10)
};

// ScriptStruct Hardwired.HWPlayerMission
// Size: 0x30 (Inherited: 0x00)
struct FHWPlayerMission {
	struct TArray<struct FHWMission> Missions; // 0x00(0x10)
	struct FString LastRefreshedAt; // 0x10(0x10)
	struct FString PlayerId; // 0x20(0x10)
};

// ScriptStruct Hardwired.HWMission
// Size: 0x98 (Inherited: 0x00)
struct FHWMission {
	struct FString MissionId; // 0x00(0x10)
	struct FString ConfigId; // 0x10(0x10)
	enum class EHWFaction Faction; // 0x20(0x01)
	enum class EHWMissionKind Condition; // 0x21(0x01)
	enum class EHWMissionTrackedStat Objective; // 0x22(0x01)
	char pad_23[0x1]; // 0x23(0x01)
	int32_t ObjectiveTargetRoll; // 0x24(0x04)
	struct FString ObjectiveExtra; // 0x28(0x10)
	enum class EHWRewardType RewardType; // 0x38(0x01)
	enum class EHWInventoryItemType RewardInventoryItemType; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct FString RewardId; // 0x40(0x10)
	bool Repeatable; // 0x50(0x01)
	bool Special; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
	struct FString Start; // 0x58(0x10)
	struct FString End; // 0x68(0x10)
	bool Active; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FString ActivatedAt; // 0x80(0x10)
	int32_t Progression; // 0x90(0x04)
	bool RewardCollect; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
};

// ScriptStruct Hardwired.HWPlayerStats
// Size: 0xc0 (Inherited: 0x00)
struct FHWPlayerStats {
	struct TMap<enum class EHWPlayerStatType, int32_t> TotalStats; // 0x00(0x50)
	struct TMap<enum class EHWRewardType, int32_t> MatchesWithoutDrop; // 0x50(0x50)
	struct FString PreviousMatchDate; // 0xa0(0x10)
	struct FString PlayerId; // 0xb0(0x10)
};

// ScriptStruct Hardwired.HWPlayerDetails
// Size: 0xf0 (Inherited: 0x00)
struct FHWPlayerDetails {
	struct FString DisplayName; // 0x00(0x10)
	struct FString LowerCaseName; // 0x10(0x10)
	struct FString CreatedAt; // 0x20(0x10)
	struct FString PolicyAcceptanceAt; // 0x30(0x10)
	struct FString Email; // 0x40(0x10)
	struct FString Version; // 0x50(0x10)
	struct FString CurrentTeamId; // 0x60(0x10)
	struct FString LastSessionId; // 0x70(0x10)
	struct TArray<struct FString> LastSessions; // 0x80(0x10)
	struct FString LastBuildNumber; // 0x90(0x10)
	enum class EHWGamePlatform LastPlatform; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	int32_t LoginNumber; // 0xa4(0x04)
	struct FString Region; // 0xa8(0x10)
	struct FString MacroRegion; // 0xb8(0x10)
	struct FString AbGroup; // 0xc8(0x10)
	enum class EHWPlayerProfileType PlayerProfileType; // 0xd8(0x01)
	bool FriendRequestBlocked; // 0xd9(0x01)
	char pad_DA[0x6]; // 0xda(0x06)
	struct FString PlayerId; // 0xe0(0x10)
};

// ScriptStruct Hardwired.HWFetchRewardsResponse
// Size: 0x10 (Inherited: 0x00)
struct FHWFetchRewardsResponse {
	struct TArray<struct FHWReward> Rewards; // 0x00(0x10)
};

// ScriptStruct Hardwired.HWInstallWeaponPartResponse
// Size: 0x10 (Inherited: 0x00)
struct FHWInstallWeaponPartResponse {
	struct TArray<struct FString> PreviousPartIds; // 0x00(0x10)
};

// ScriptStruct Hardwired.HWMatchBackfillResponse
// Size: 0x10 (Inherited: 0x00)
struct FHWMatchBackfillResponse {
	struct TArray<struct FHWTeamBackfillResponse> TeamBackfillers; // 0x00(0x10)
};

// ScriptStruct Hardwired.HWTeamBackfillResponse
// Size: 0x50 (Inherited: 0x00)
struct FHWTeamBackfillResponse {
	struct FString MatchTeamId; // 0x00(0x10)
	struct FString PreviousTeamId; // 0x10(0x10)
	struct TArray<struct FString> PreviousPlayerIds; // 0x20(0x10)
	struct FString ReplacementTeamId; // 0x30(0x10)
	struct TArray<struct FString> ReplacementPlayerIds; // 0x40(0x10)
};

// ScriptStruct Hardwired.HWFetchPlayerIdFromIdentityResponse
// Size: 0x50 (Inherited: 0x00)
struct FHWFetchPlayerIdFromIdentityResponse {
	struct TMap<struct FString, struct FString> PlayerIdByPlatformId; // 0x00(0x50)
};

// ScriptStruct Hardwired.HWInitiateRealMoneyPurchaseResponse
// Size: 0x10 (Inherited: 0x00)
struct FHWInitiateRealMoneyPurchaseResponse {
	struct FString HwTransactionId; // 0x00(0x10)
};

// ScriptStruct Hardwired.HWFinalizeRealMoneyPurchaseResponse
// Size: 0x4e0 (Inherited: 0x00)
struct FHWFinalizeRealMoneyPurchaseResponse {
	struct FString HwTransactionId; // 0x00(0x10)
	struct FHWPlayerProfileData PlayerProfileData; // 0x10(0x4c0)
	struct TArray<struct FHWReward> Rewards; // 0x4d0(0x10)
};

// ScriptStruct Hardwired.HWOnPaymentCompletedParams
// Size: 0x18 (Inherited: 0x00)
struct FHWOnPaymentCompletedParams {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Hardwired.HWBuyShopItemResult
// Size: 0x18 (Inherited: 0x00)
struct FHWBuyShopItemResult {
	bool Successful; // 0x00(0x01)
	enum class EHWErrorMessage Error; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<struct FHWReward> Rewards; // 0x08(0x10)
};

// ScriptStruct Hardwired.HWLoadShopCampaignsResponse
// Size: 0x10 (Inherited: 0x00)
struct FHWLoadShopCampaignsResponse {
	struct TArray<struct FHWShopCampaign> Campaigns; // 0x00(0x10)
};

// ScriptStruct Hardwired.HWShopCampaign
// Size: 0x58 (Inherited: 0x00)
struct FHWShopCampaign {
	struct FString CampaignId; // 0x00(0x10)
	bool TimeLimited; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float DurationHours; // 0x14(0x04)
	struct FString StartDate; // 0x18(0x10)
	struct FString EndDate; // 0x28(0x10)
	struct TArray<struct FString> SubsectionIds; // 0x38(0x10)
	struct TArray<struct FString> CampaignFilterIds; // 0x48(0x10)
};

// ScriptStruct Hardwired.HWTeamDamagePermission
// Size: 0x10 (Inherited: 0x00)
struct FHWTeamDamagePermission {
	struct TArray<bool> AgainstTeam; // 0x00(0x10)
};

// ScriptStruct Hardwired.NameAndCount
// Size: 0x0c (Inherited: 0x00)
struct FNameAndCount {
	struct FName Name; // 0x00(0x08)
	int32_t Count; // 0x08(0x04)
};

// ScriptStruct Hardwired.HWInjuryReceivedParams
// Size: 0xb0 (Inherited: 0x00)
struct FHWInjuryReceivedParams {
	struct FHWHealthDamageResult Result; // 0x00(0x14)
	struct FHitResult Hit; // 0x14(0x8c)
	struct AHWCharacter* Instigator; // 0xa0(0x08)
	enum class EHWDamageDealerType DamageDealerType; // 0xa8(0x01)
	enum class EHWBodypart Bodypart; // 0xa9(0x01)
	enum class EHWDamageType DamageType; // 0xaa(0x01)
	char pad_AB[0x1]; // 0xab(0x01)
	int32_t VfxTag; // 0xac(0x04)
};

// ScriptStruct Hardwired.HWHealthDamageResult
// Size: 0x14 (Inherited: 0x00)
struct FHWHealthDamageResult {
	struct FHWCommonDamageResult BloodLevel; // 0x00(0x08)
	struct FHWCommonDamageResult DownedBloodLevel; // 0x08(0x08)
	enum class EHWVitalityState VitalityBefore; // 0x10(0x01)
	enum class EHWVitalityState VitalityAfter; // 0x11(0x01)
	bool WasBleeding; // 0x12(0x01)
	bool IsBleeding; // 0x13(0x01)
};

// ScriptStruct Hardwired.HWCommonDamageResult
// Size: 0x08 (Inherited: 0x00)
struct FHWCommonDamageResult {
	float Before; // 0x00(0x04)
	float After; // 0x04(0x04)
};

// ScriptStruct Hardwired.HWActionSet
// Size: 0x10 (Inherited: 0x00)
struct FHWActionSet {
	struct TArray<enum class EHWActionType> FlaggedActions; // 0x00(0x10)
};

// ScriptStruct Hardwired.VOSound
// Size: 0x20 (Inherited: 0x00)
struct FVOSound {
	struct UAkAudioEvent* Self; // 0x00(0x08)
	struct UAkAudioEvent* Ally; // 0x08(0x08)
	struct UAkAudioEvent* Enemy; // 0x10(0x08)
	float DelayBetweenSounds; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Hardwired.HWVaultResult
// Size: 0x38 (Inherited: 0x00)
struct FHWVaultResult {
	bool bSuccess; // 0x00(0x01)
	bool bEndsInCrouch; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float VaultHeight; // 0x04(0x04)
	struct FVector Location; // 0x08(0x0c)
	enum class EHWPlayerVaultType VaultType; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct TArray<struct AActor*> DestructibleActors; // 0x18(0x10)
	struct TArray<struct UHWDestructibleComponent*> DestructibleComponents; // 0x28(0x10)
};

// ScriptStruct Hardwired.HWMeleeTargetData
// Size: 0x38 (Inherited: 0x00)
struct FHWMeleeTargetData {
	struct FVector RelativeHitLocation; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct USceneComponent* HitComponent; // 0x10(0x08)
	struct UPhysicalMaterial* HitPhysicalMaterial; // 0x18(0x08)
	struct FName HitBone; // 0x20(0x08)
	struct FVector_NetQuantizeNormal HitWorldNormal; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Hardwired.HWVaultMontagePlayerData
// Size: 0x28 (Inherited: 0x00)
struct FHWVaultMontagePlayerData {
	struct FName OptionalName; // 0x00(0x08)
	struct UAnimMontage* Anim1P; // 0x08(0x08)
	struct UAnimMontage* Anim3P; // 0x10(0x08)
	struct UAnimMontage* AnimCamera; // 0x18(0x08)
	float DesiredHeight; // 0x20(0x04)
	float InterpTime; // 0x24(0x04)
};

// ScriptStruct Hardwired.HWArmorPhysAssets
// Size: 0x18 (Inherited: 0x00)
struct FHWArmorPhysAssets {
	struct UPhysicsAsset* Heavy; // 0x00(0x08)
	struct UPhysicsAsset* Medium; // 0x08(0x08)
	struct UPhysicsAsset* Light; // 0x10(0x08)
};

// ScriptStruct Hardwired.EventSound
// Size: 0x20 (Inherited: 0x00)
struct FEventSound {
	struct UAkAudioEvent* Actor; // 0x00(0x08)
	struct UAkAudioEvent* Target; // 0x08(0x08)
	struct UAkAudioEvent* Other; // 0x10(0x08)
	int32_t Priority; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Hardwired.HWVaultChecksToPerform
// Size: 0x104 (Inherited: 0x00)
struct FHWVaultChecksToPerform {
	struct FHWVaultDebug VaultDebug; // 0x00(0xb4)
	float VaultMinHeight; // 0xb4(0x04)
	float VaultMaxHeight; // 0xb8(0x04)
	float HighCheckEndHeight; // 0xbc(0x04)
	float HighCheckCapsuleTraceHalfHeight; // 0xc0(0x04)
	struct FVector2D VaultTraceLengthRange; // 0xc4(0x08)
	float SpeedReqForMaxScaleRange; // 0xcc(0x04)
	float ScaleRangeConsideredSprint; // 0xd0(0x04)
	bool ClampScaleRange; // 0xd4(0x01)
	bool FloorScaleRange; // 0xd5(0x01)
	bool bVaultUsesControlRotInsteadOfNormals; // 0xd6(0x01)
	bool bVaultAllowCrouchHeight; // 0xd7(0x01)
	float VaultOverTraceExtraLength; // 0xd8(0x04)
	struct FVector2D VaultClimbDistance; // 0xdc(0x08)
	struct FVector2D VaultMaxOffsetBasedOnDistanceToObject; // 0xe4(0x08)
	struct FVector2D VaultClimbDataDotMultiplier; // 0xec(0x08)
	struct FVector2D VaultFitClimbOffset; // 0xf4(0x08)
	struct FVector2D VaultOverDistance; // 0xfc(0x08)
};

// ScriptStruct Hardwired.HWVaultDebug
// Size: 0xb4 (Inherited: 0x00)
struct FHWVaultDebug {
	struct FHWDebugData DebugHighCheck; // 0x00(0x24)
	struct FHWDebugData DebugInitialCheck; // 0x24(0x24)
	struct FHWDebugData DebugClimbCheck; // 0x48(0x24)
	struct FHWDebugData DebugFitClimbCheck; // 0x6c(0x24)
	struct FHWDebugData DebugJumpOver; // 0x90(0x24)
};

// ScriptStruct Hardwired.HWDebugData
// Size: 0x24 (Inherited: 0x00)
struct FHWDebugData {
	enum class EDrawDebugTrace DrawVaultDebug; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FLinearColor DebugColor; // 0x04(0x10)
	struct FLinearColor TraceHitColor; // 0x14(0x10)
};

// ScriptStruct Hardwired.HWVaultMontage
// Size: 0x10 (Inherited: 0x00)
struct FHWVaultMontage {
	struct TArray<struct FHWVaultMontagePlayerData> MontageAndHeight; // 0x00(0x10)
};

// ScriptStruct Hardwired.HWBodyDamageMultiplierSet
// Size: 0x10 (Inherited: 0x00)
struct FHWBodyDamageMultiplierSet {
	float Head; // 0x00(0x04)
	float Torso; // 0x04(0x04)
	float Arms; // 0x08(0x04)
	float Legs; // 0x0c(0x04)
};

// ScriptStruct Hardwired.HWCharacterSpeeds
// Size: 0x0c (Inherited: 0x00)
struct FHWCharacterSpeeds {
	float Walking; // 0x00(0x04)
	float Running; // 0x04(0x04)
	float Sprinting; // 0x08(0x04)
};

// ScriptStruct Hardwired.HWMessageData
// Size: 0x38 (Inherited: 0x00)
struct FHWMessageData {
	struct FString MessageId; // 0x00(0x10)
	enum class EHWPlayerMessageType Type; // 0x10(0x01)
	bool Read; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct FString CreatedAt; // 0x18(0x10)
	struct FString Content; // 0x28(0x10)
};

// ScriptStruct Hardwired.HWLevelRewardData
// Size: 0x10 (Inherited: 0x00)
struct FHWLevelRewardData {
	enum class EHWGameplayEventType Event; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float CreditsPerUnit; // 0x04(0x04)
	int32_t LimitPerRound; // 0x08(0x04)
	float XpPerUnit; // 0x0c(0x04)
};

// ScriptStruct Hardwired.HWMetaMessageData
// Size: 0x30 (Inherited: 0x00)
struct FHWMetaMessageData {
	enum class EHWMetaMessagePriority Priority; // 0x00(0x01)
	enum class EHWMetaMessageAlignment Alignment; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FText Text; // 0x08(0x18)
	struct UAkAudioEvent* VoiceLine; // 0x20(0x08)
	struct UTexture2D* Icon; // 0x28(0x08)
};

// ScriptStruct Hardwired.HWToastMessageData
// Size: 0x40 (Inherited: 0x00)
struct FHWToastMessageData {
	struct FText Text; // 0x00(0x18)
	struct FText VictimName; // 0x18(0x18)
	enum class EHWToastMessageType Type; // 0x30(0x01)
	enum class EHWToastMessagePriority Priority; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	int32_t Kills; // 0x34(0x04)
	int32_t Assists; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Hardwired.HWPlayerHitReceivedParams
// Size: 0x10 (Inherited: 0x00)
struct FHWPlayerHitReceivedParams {
	struct FVector From; // 0x00(0x0c)
	enum class EHWBodypart Bodypart; // 0x0c(0x01)
	enum class EHWDamageType DamageType; // 0x0d(0x01)
	bool HasArmorDamage; // 0x0e(0x01)
	bool HasHealthDamage; // 0x0f(0x01)
};

// ScriptStruct Hardwired.HWPlayerHitScoredParams
// Size: 0x10 (Inherited: 0x00)
struct FHWPlayerHitScoredParams {
	struct AActor* Target; // 0x00(0x08)
	enum class EHWBodypart Bodypart; // 0x08(0x01)
	enum class EHWDamageType DamageType; // 0x09(0x01)
	bool IsArmorDestroyedShot; // 0x0a(0x01)
	bool IsKillShot; // 0x0b(0x01)
	bool IsDownedShot; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Hardwired.HWDiagDamageDealt
// Size: 0x110 (Inherited: 0x00)
struct FHWDiagDamageDealt {
	struct FHWHumanDamageParams Params; // 0x00(0xf0)
	struct FHWHumanDamageResult Result; // 0xf0(0x1c)
	char pad_10C[0x4]; // 0x10c(0x04)
};

// ScriptStruct Hardwired.HWHumanDamageResult
// Size: 0x1c (Inherited: 0x00)
struct FHWHumanDamageResult {
	struct FHWCommonDamageResult Armor; // 0x00(0x08)
	struct FHWHealthDamageResult Health; // 0x08(0x14)
};

// ScriptStruct Hardwired.HWHumanDamageParams
// Size: 0xf0 (Inherited: 0x00)
struct FHWHumanDamageParams {
	struct FHWCommonDamageParams Common; // 0x00(0xd0)
	struct AHWHumanCharacter* Target; // 0xd0(0x08)
	struct FString TargetId; // 0xd8(0x10)
	enum class EHWBodypart Bodypart; // 0xe8(0x01)
	bool CanCauseBleeding; // 0xe9(0x01)
	bool SkipDownedState; // 0xea(0x01)
	enum class EHWDamageDealerType DamageDealerType; // 0xeb(0x01)
	char pad_EC[0x4]; // 0xec(0x04)
};

// ScriptStruct Hardwired.HWCommonDamageParams
// Size: 0xd0 (Inherited: 0x00)
struct FHWCommonDamageParams {
	struct AActor* DamageDealer; // 0x00(0x08)
	struct FName DamageDealerName; // 0x08(0x08)
	struct AHWCharacter* Instigator; // 0x10(0x08)
	struct AHWPlayerState* InstigatorPS; // 0x18(0x08)
	struct FString InstigatorId; // 0x20(0x10)
	int32_t ItemId; // 0x30(0x04)
	int32_t VfxTag; // 0x34(0x04)
	int32_t AmmoInMag; // 0x38(0x04)
	bool IsPrimaryWeapon; // 0x3c(0x01)
	enum class EHWDamageType DamageType; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
	struct FHitResult Hit; // 0x40(0x8c)
	bool SingleCombatEvent; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
};

// ScriptStruct Hardwired.HWObjectiveCardData
// Size: 0x48 (Inherited: 0x00)
struct FHWObjectiveCardData {
	struct FText Header; // 0x00(0x18)
	struct FText ShortText; // 0x18(0x18)
	struct UTexture2D* Icon; // 0x30(0x08)
	bool IconRotated; // 0x38(0x01)
	bool IsHighlighted; // 0x39(0x01)
	bool IsVisible; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
	struct UTexture2D* Picture; // 0x40(0x08)
};

// ScriptStruct Hardwired.HWRoundPublicProfiles
// Size: 0x20 (Inherited: 0x00)
struct FHWRoundPublicProfiles {
	struct TArray<struct FString> PublicProfileIds; // 0x00(0x10)
	struct TArray<struct FHWPlayerPublicProfile> PublicProfiles; // 0x10(0x10)
};

// ScriptStruct Hardwired.HWRoundResultInfo
// Size: 0x30 (Inherited: 0x00)
struct FHWRoundResultInfo {
	struct TArray<bool> Winners; // 0x00(0x10)
	struct TArray<struct FText> ResultTexts; // 0x10(0x10)
	struct TArray<struct FHWTeamRoundRewards> Rewards; // 0x20(0x10)
};

// ScriptStruct Hardwired.HWTeamRoundRewards
// Size: 0x68 (Inherited: 0x00)
struct FHWTeamRoundRewards {
	struct TArray<enum class EHWFaction> Faction; // 0x00(0x10)
	struct TArray<struct FString> PlayerIds; // 0x10(0x10)
	struct TArray<int32_t> Credits; // 0x20(0x10)
	struct TArray<int32_t> Xp; // 0x30(0x10)
	struct TArray<char> Kills; // 0x40(0x10)
	struct TArray<char> Assists; // 0x50(0x10)
	float Multiplier; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct Hardwired.HWPublicMatchReward
// Size: 0xe0 (Inherited: 0x00)
struct FHWPublicMatchReward {
	struct FString PlayerName; // 0x00(0x10)
	struct FString SessionId; // 0x10(0x10)
	int32_t Team; // 0x20(0x04)
	int32_t PlayerNumber; // 0x24(0x04)
	int32_t TotalKills; // 0x28(0x04)
	int32_t TotalAssists; // 0x2c(0x04)
	float TotalCredits; // 0x30(0x04)
	float TotalAuthority; // 0x34(0x04)
	int32_t TotalDeaths; // 0x38(0x04)
	int32_t TotalRoundsWon; // 0x3c(0x04)
	bool IsMVP; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32_t TotalXp; // 0x44(0x04)
	struct FHWLoadoutData RoundLoadout; // 0x48(0x88)
	struct TArray<struct FHWPlayerRoundReward> RoundRewards; // 0xd0(0x10)
};

// ScriptStruct Hardwired.HWPlayerRoundReward
// Size: 0x14 (Inherited: 0x00)
struct FHWPlayerRoundReward {
	int32_t NumKills; // 0x00(0x04)
	int32_t NumAssists; // 0x04(0x04)
	float Credits; // 0x08(0x04)
	float Authority; // 0x0c(0x04)
	bool bDied; // 0x10(0x01)
	bool bRoundWon; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
};

// ScriptStruct Hardwired.HWTeamScoreData
// Size: 0x28 (Inherited: 0x00)
struct FHWTeamScoreData {
	int32_t Team; // 0x00(0x04)
	int32_t Current; // 0x04(0x04)
	int32_t Max; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText ScoreTitle; // 0x10(0x18)
};

// ScriptStruct Hardwired.HWDetectionUpdate
// Size: 0x18 (Inherited: 0x00)
struct FHWDetectionUpdate {
	struct UHWDetectableComponent* Target; // 0x00(0x08)
	struct TArray<enum class EHWDetectionStatus> DetectionStatus; // 0x08(0x10)
};

// ScriptStruct Hardwired.HWErrorResponse
// Size: 0x28 (Inherited: 0x00)
struct FHWErrorResponse {
	enum class EHWErrorMessage Error; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString ErrorMessage; // 0x08(0x10)
	struct FString ExtendedErrorMessage; // 0x18(0x10)
};

// ScriptStruct Hardwired.HWTextChatMessage
// Size: 0x48 (Inherited: 0x00)
struct FHWTextChatMessage {
	struct FString SenderPlayerId; // 0x00(0x10)
	struct FString SenderPlayerName; // 0x10(0x10)
	struct FString Content; // 0x20(0x10)
	struct FText Time; // 0x30(0x18)
};

// ScriptStruct Hardwired.HWClientDiagMessage
// Size: 0x10 (Inherited: 0x00)
struct FHWClientDiagMessage {
	struct TArray<struct FString> Items; // 0x00(0x10)
};

// ScriptStruct Hardwired.HWPlayerPing
// Size: 0x90 (Inherited: 0x00)
struct FHWPlayerPing {
	enum class EHWPingReason Reason; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FHitResult Hit; // 0x04(0x8c)
};

// ScriptStruct Hardwired.HWRoundObjectivesData
// Size: 0x38 (Inherited: 0x00)
struct FHWRoundObjectivesData {
	struct FText ObjectText; // 0x00(0x18)
	struct FText SecondaryText; // 0x18(0x18)
	int32_t Time; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Hardwired.HWRoundIntroData
// Size: 0x38 (Inherited: 0x00)
struct FHWRoundIntroData {
	struct FText PrimaryObjective; // 0x00(0x18)
	struct FText SecondaryObjective; // 0x18(0x18)
	struct UAkAudioEvent* VO; // 0x30(0x08)
};

// ScriptStruct Hardwired.HWCombatCompanionType
// Size: 0x10 (Inherited: 0x00)
struct FHWCombatCompanionType {
	struct AHWDroneCharacter* CompanionClass; // 0x00(0x08)
	int32_t CombatCompanionInventorySize; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Hardwired.HWSpectatedCharacter
// Size: 0x18 (Inherited: 0x00)
struct FHWSpectatedCharacter {
	struct AHWCharacter* Character; // 0x00(0x08)
	struct FString Name; // 0x08(0x10)
};

// ScriptStruct Hardwired.HWPingAntiSpamConfig
// Size: 0x10 (Inherited: 0x00)
struct FHWPingAntiSpamConfig {
	float SpawnHeat; // 0x00(0x04)
	float SpawnMaxHeat; // 0x04(0x04)
	float VoiceoverHeat; // 0x08(0x04)
	float VoiceoverMaxHeat; // 0x0c(0x04)
};

// ScriptStruct Hardwired.HWHumanArmorHitParams
// Size: 0xb0 (Inherited: 0x00)
struct FHWHumanArmorHitParams {
	struct AActor* DamageSource; // 0x00(0x08)
	struct AHWCharacter* Instigator; // 0x08(0x08)
	struct FHWCommonDamageResult Result; // 0x10(0x08)
	enum class EHWBodypart Bodypart; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FHitResult Hit; // 0x1c(0x8c)
	enum class EHWDamageType DamageType; // 0xa8(0x01)
	enum class EHWDamageDealerType DamageDealerType; // 0xa9(0x01)
	char pad_AA[0x2]; // 0xaa(0x02)
	int32_t VfxTag; // 0xac(0x04)
};

// ScriptStruct Hardwired.HWOnlineFriend
// Size: 0x28 (Inherited: 0x00)
struct FHWOnlineFriend {
	struct FString DisplayName; // 0x00(0x10)
	char pad_10[0x18]; // 0x10(0x18)
};

// ScriptStruct Hardwired.HWVoiceChatPlayerState
// Size: 0x0c (Inherited: 0x00)
struct FHWVoiceChatPlayerState {
	struct FHWVoiceChatPlayerSettings Settings; // 0x00(0x08)
	bool IsSpeaking; // 0x08(0x01)
	bool IsPresent; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct Hardwired.HWVoiceChatPlayerSettings
// Size: 0x08 (Inherited: 0x00)
struct FHWVoiceChatPlayerSettings {
	float Volume; // 0x00(0x04)
	bool Muted; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Hardwired.HWPoolActorList
// Size: 0x18 (Inherited: 0x00)
struct FHWPoolActorList {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct AActor*> Items; // 0x08(0x10)
};

// ScriptStruct Hardwired.HWBulletTrailTableRow
// Size: 0x10 (Inherited: 0x08)
struct FHWBulletTrailTableRow : FTableRowBase {
	struct AHWBulletTrail* Effect; // 0x08(0x08)
};

// ScriptStruct Hardwired.HWImpactVfxEntry
// Size: 0x10 (Inherited: 0x08)
struct FHWImpactVfxEntry : FTableRowBase {
	struct AHWImpactVFX* Effect; // 0x08(0x08)
};

// ScriptStruct Hardwired.HWBonesDiag
// Size: 0x60 (Inherited: 0x00)
struct FHWBonesDiag {
	struct TArray<struct FBoneReference> Bones; // 0x00(0x10)
	struct TArray<struct FName> Sockets; // 0x10(0x10)
	float Thickness; // 0x20(0x04)
	float Length; // 0x24(0x04)
	char pad_28[0x8]; // 0x28(0x08)
	struct FTransform DrawOffset; // 0x30(0x30)
};

// ScriptStruct Hardwired.HWAudioOcclusionSystemData
// Size: 0x6c010 (Inherited: 0x00)
struct FHWAudioOcclusionSystemData {
	char pad_0[0x6c010]; // 0x00(0x6c010)
};

// ScriptStruct Hardwired.HWAudioOcclusionPortalData
// Size: 0x8c (Inherited: 0x00)
struct FHWAudioOcclusionPortalData {
	char pad_0[0x8c]; // 0x00(0x8c)
};

// ScriptStruct Hardwired.HWAudioOcclusionAreaData
// Size: 0x130 (Inherited: 0x00)
struct FHWAudioOcclusionAreaData {
	char pad_0[0x130]; // 0x00(0x130)
};

// ScriptStruct Hardwired.HWAudioOcclusionPortalVolume
// Size: 0x6c (Inherited: 0x00)
struct FHWAudioOcclusionPortalVolume {
	char pad_0[0x6c]; // 0x00(0x6c)
};

// ScriptStruct Hardwired.HWFakeMatchWeaponUsage
// Size: 0x18 (Inherited: 0x00)
struct FHWFakeMatchWeaponUsage {
	struct FString WeaponID; // 0x00(0x10)
	int32_t ArmorDamage; // 0x10(0x04)
	int32_t BodyDamage; // 0x14(0x04)
};

// ScriptStruct Hardwired.HWFakeMatchFlowSettings
// Size: 0x28 (Inherited: 0x00)
struct FHWFakeMatchFlowSettings {
	float MinBudgetPercent; // 0x00(0x04)
	float MaxBudgetPercent; // 0x04(0x04)
	float WinRate; // 0x08(0x04)
	int32_t Round1Budget; // 0x0c(0x04)
	int32_t Round2Budget; // 0x10(0x04)
	int32_t Round3Budget; // 0x14(0x04)
	struct FString FlowName; // 0x18(0x10)
};

// ScriptStruct Hardwired.HWFakeMatchSimulationEvent
// Size: 0x20 (Inherited: 0x00)
struct FHWFakeMatchSimulationEvent {
	int32_t MinTimes; // 0x00(0x04)
	int32_t MaxTimes; // 0x04(0x04)
	enum class EHWGameplayEventType Event; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Extra; // 0x10(0x10)
};

// ScriptStruct Hardwired.HWAnalyticsEventStringArray
// Size: 0x10 (Inherited: 0x00)
struct FHWAnalyticsEventStringArray {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Hardwired.HWServerConfiguration
// Size: 0x48 (Inherited: 0x00)
struct FHWServerConfiguration {
	struct FString Name; // 0x00(0x10)
	struct FString ApiURL; // 0x10(0x10)
	struct FString AnalyticsURL; // 0x20(0x10)
	struct FString IdentityURL; // 0x30(0x10)
	bool Shipping; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct Hardwired.HWObjectBreakData
// Size: 0x18 (Inherited: 0x00)
struct FHWObjectBreakData {
	struct FVector HitDirection; // 0x00(0x0c)
	struct FVector HitLocation; // 0x0c(0x0c)
};

// ScriptStruct Hardwired.HWTerminalAndTeam
// Size: 0x0c (Inherited: 0x00)
struct FHWTerminalAndTeam {
	struct FName TerminalId; // 0x00(0x08)
	int32_t Team; // 0x08(0x04)
};

// ScriptStruct Hardwired.HWStaggerConfig
// Size: 0x0c (Inherited: 0x00)
struct FHWStaggerConfig {
	float SpeedMultiplier; // 0x00(0x04)
	float CooldownMultiplier; // 0x04(0x04)
	float BrakingDeceleration; // 0x08(0x04)
};

// ScriptStruct Hardwired.HWCharacterSpeedConfig
// Size: 0x80 (Inherited: 0x00)
struct FHWCharacterSpeedConfig {
	float VelocityDotForward; // 0x00(0x04)
	float VelocityDotBackward; // 0x04(0x04)
	float VelocityDotStrafe; // 0x08(0x04)
	float MultiplierBackwards; // 0x0c(0x04)
	float MultiplierStrafe; // 0x10(0x04)
	float MultiplierBackwardsLeaning; // 0x14(0x04)
	float MultiplierStrafeLeaning; // 0x18(0x04)
	float MultiplierAiming; // 0x1c(0x04)
	float MultiplierCrouched; // 0x20(0x04)
	float MultiplierBackwardsCrouched; // 0x24(0x04)
	float MultiplierStrafeCrouched; // 0x28(0x04)
	float MultiplierBackwardsLeaningCrouched; // 0x2c(0x04)
	float MultiplierStrafeLeaningCrouched; // 0x30(0x04)
	float MultiplierAimingCrouched; // 0x34(0x04)
	float MultiplierDowned; // 0x38(0x04)
	float MultiplierDownedSmokeGuard; // 0x3c(0x04)
	float MultiplierSprint; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct UCurveFloat* SprintMultiplierCurve; // 0x48(0x08)
	struct UCurveFloat* StrafeMultiplierCurve; // 0x50(0x08)
	float StaggerStrafeMultiplier; // 0x58(0x04)
	float PrimaryAcceleration; // 0x5c(0x04)
	float NormalDeceleration; // 0x60(0x04)
	struct FHWAccelerationModifier NormalAcceleration; // 0x64(0x0c)
	struct FHWAccelerationModifier CrouchAcceleration; // 0x70(0x0c)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct Hardwired.HWAccelerationModifier
// Size: 0x0c (Inherited: 0x00)
struct FHWAccelerationModifier {
	bool Enabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ActivationThreshold; // 0x04(0x04)
	float Acceleration; // 0x08(0x04)
};

// ScriptStruct Hardwired.HWMeleeTargetHeuristics
// Size: 0x48 (Inherited: 0x00)
struct FHWMeleeTargetHeuristics {
	enum class EHWBodypart Bodypart; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Distance; // 0x04(0x04)
	float Dot; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FHWMeleeTargetData AsMeleeTarget; // 0x10(0x38)
};

// ScriptStruct Hardwired.HWMeleeDamageEventParams
// Size: 0x0c (Inherited: 0x00)
struct FHWMeleeDamageEventParams {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct Hardwired.HWElectricDamageEventParams
// Size: 0x20 (Inherited: 0x00)
struct FHWElectricDamageEventParams {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Hardwired.HWCombatHitResultVsObject
// Size: 0x14 (Inherited: 0x00)
struct FHWCombatHitResultVsObject {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct Hardwired.HWPlayerHUDLabelInfo
// Size: 0x20 (Inherited: 0x00)
struct FHWPlayerHUDLabelInfo {
	struct FString Name; // 0x00(0x10)
	bool IsEnemy; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FVector Location; // 0x14(0x0c)
};

// ScriptStruct Hardwired.HWCharacterVisualSceneDiagInfo
// Size: 0x20 (Inherited: 0x00)
struct FHWCharacterVisualSceneDiagInfo {
	struct TArray<struct FHWMaterialParamCollectionDiagInfo> MaterialParamCollections; // 0x00(0x10)
	struct TArray<struct FHWCharacterVisualDiagInfo> AllCharacters; // 0x10(0x10)
};

// ScriptStruct Hardwired.HWCharacterVisualDiagInfo
// Size: 0x30 (Inherited: 0x00)
struct FHWCharacterVisualDiagInfo {
	struct FString Name; // 0x00(0x10)
	struct FString ClassName; // 0x10(0x10)
	struct TArray<struct FHWSkeletalMeshComponentDiagInfo> SkelMeshComponents; // 0x20(0x10)
};

// ScriptStruct Hardwired.HWSkeletalMeshComponentDiagInfo
// Size: 0xc0 (Inherited: 0x00)
struct FHWSkeletalMeshComponentDiagInfo {
	struct FString Name; // 0x00(0x10)
	struct FString Mesh; // 0x10(0x10)
	struct FString AnimInstance; // 0x20(0x10)
	bool IsVisible; // 0x30(0x01)
	bool IsHiddenInGame; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct FString MasterPoseComponent; // 0x38(0x10)
	char pad_48[0x8]; // 0x48(0x08)
	struct FTransform RelTransform; // 0x50(0x30)
	struct FTransform WorldTransform; // 0x80(0x30)
	struct TArray<struct FHWMaterialDiagInfo> Materials; // 0xb0(0x10)
};

// ScriptStruct Hardwired.HWMaterialDiagInfo
// Size: 0x30 (Inherited: 0x00)
struct FHWMaterialDiagInfo {
	struct FString InstName; // 0x00(0x10)
	struct FString MaterialName; // 0x10(0x10)
	struct TArray<struct FHWMaterialParamDiagInfo> Params; // 0x20(0x10)
};

// ScriptStruct Hardwired.HWMaterialParamDiagInfo
// Size: 0x18 (Inherited: 0x00)
struct FHWMaterialParamDiagInfo {
	struct FName Name; // 0x00(0x08)
	struct FString Value; // 0x08(0x10)
};

// ScriptStruct Hardwired.HWMaterialParamCollectionDiagInfo
// Size: 0x20 (Inherited: 0x00)
struct FHWMaterialParamCollectionDiagInfo {
	struct FString Name; // 0x00(0x10)
	struct TArray<struct FHWMaterialParamDiagInfo> Params; // 0x10(0x10)
};

// ScriptStruct Hardwired.HWDroneMovementSpeed
// Size: 0x0c (Inherited: 0x00)
struct FHWDroneMovementSpeed {
	float Forward; // 0x00(0x04)
	float Up; // 0x04(0x04)
	float Down; // 0x08(0x04)
};

// ScriptStruct Hardwired.HWMovementSpeeds
// Size: 0x18 (Inherited: 0x00)
struct FHWMovementSpeeds {
	int32_t WalkSpeedHigh; // 0x00(0x04)
	int32_t WalkSpeedMedium; // 0x04(0x04)
	int32_t WalkSpeedLow; // 0x08(0x04)
	int32_t MaxWeightHigh; // 0x0c(0x04)
	int32_t MaxWeightMedium; // 0x10(0x04)
	int32_t MaxWeightLow; // 0x14(0x04)
};

// ScriptStruct Hardwired.HWContentType
// Size: 0x30 (Inherited: 0x00)
struct FHWContentType {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct Hardwired.HWMapLoadProgressInfo
// Size: 0x70 (Inherited: 0x00)
struct FHWMapLoadProgressInfo {
	struct FString MatchID; // 0x00(0x10)
	struct FString PlayerId; // 0x10(0x10)
	struct FString MapName; // 0x20(0x10)
	struct FString LoadStarted; // 0x30(0x10)
	struct FString LastLoadedLevel; // 0x40(0x10)
	float MemUsedPhysical; // 0x50(0x04)
	float MemUsedVirtual; // 0x54(0x04)
	float MemTotalPhysical; // 0x58(0x04)
	float MemAvailablePhysical; // 0x5c(0x04)
	bool MemOOMDetected; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float LoadSeconds; // 0x64(0x04)
	float Progress; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct Hardwired.HWTeamChat
// Size: 0x20 (Inherited: 0x00)
struct FHWTeamChat {
	struct FString TeamId; // 0x00(0x10)
	struct TArray<struct FHWChatMessage> Messages; // 0x10(0x10)
};

// ScriptStruct Hardwired.HWChatMessage
// Size: 0x30 (Inherited: 0x00)
struct FHWChatMessage {
	struct FString PlayerId; // 0x00(0x10)
	struct FString Content; // 0x10(0x10)
	struct FString Time; // 0x20(0x10)
};

// ScriptStruct Hardwired.HWClientPurchase
// Size: 0x58 (Inherited: 0x00)
struct FHWClientPurchase {
	char pad_0[0x58]; // 0x00(0x58)
};

// ScriptStruct Hardwired.HWItemIdentifier
// Size: 0x20 (Inherited: 0x00)
struct FHWItemIdentifier {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Hardwired.HWMeleeAttributes
// Size: 0x78 (Inherited: 0x00)
struct FHWMeleeAttributes {
	bool InjuryPenetratesArmor; // 0x00(0x01)
	bool BleedPenetratesArmor; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float DestructibleDamage; // 0x04(0x04)
	float HumanDamage; // 0x08(0x04)
	float TraceDistance; // 0x0c(0x04)
	float ExtendTraceZDown; // 0x10(0x04)
	float ExtendTraceZUp; // 0x14(0x04)
	float MaxAngle; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TMap<enum class EHWMeleeType, float> MeleeCooldowns; // 0x20(0x50)
	float EquipTime; // 0x70(0x04)
	int32_t VfxTag; // 0x74(0x04)
};

// ScriptStruct Hardwired.HWFinalizePurchaseParams
// Size: 0x18 (Inherited: 0x00)
struct FHWFinalizePurchaseParams {
	struct FString HwTransactionId; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Hardwired.HWInitiatePurchaseParams
// Size: 0x48 (Inherited: 0x00)
struct FHWInitiatePurchaseParams {
	struct FString ShopItemId; // 0x00(0x10)
	struct FString LocalizedItemDescription; // 0x10(0x10)
	struct FString LanguageCode; // 0x20(0x10)
	struct FString CurrencyCode; // 0x30(0x10)
	enum class EHWPaymentPlatform Platform; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct Hardwired.HWRealMoneyPurchasePrice
// Size: 0x20 (Inherited: 0x00)
struct FHWRealMoneyPurchasePrice {
	int32_t Price; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText Currency; // 0x08(0x18)
};

// ScriptStruct Hardwired.HWMeleeDamageNest
// Size: 0x50 (Inherited: 0x00)
struct FHWMeleeDamageNest {
	struct TMap<enum class EHWArmorType, float> Map; // 0x00(0x50)
};

// ScriptStruct Hardwired.HWWeaponPartRef
// Size: 0x0c (Inherited: 0x00)
struct FHWWeaponPartRef {
	struct FName ID; // 0x00(0x08)
	enum class EHWInventoryItemType ItemType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Hardwired.HWArmorPartSkinParams
// Size: 0x34 (Inherited: 0x00)
struct FHWArmorPartSkinParams {
	bool Enabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FLinearColor Color01; // 0x04(0x10)
	struct FLinearColor Color02; // 0x14(0x10)
	struct FLinearColor Color03; // 0x24(0x10)
};

// ScriptStruct Hardwired.HWWeaponSkinParams
// Size: 0x28 (Inherited: 0x00)
struct FHWWeaponSkinParams {
	bool OverrideColor; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FLinearColor Color; // 0x04(0x10)
	char pad_14[0x4]; // 0x14(0x04)
	struct UTexture2D* Texture; // 0x18(0x08)
	struct UTexture2D* Mask; // 0x20(0x08)
};

// ScriptStruct Hardwired.HWArmorFeature
// Size: 0x10 (Inherited: 0x00)
struct FHWArmorFeature {
	enum class EHWArmorFeatureType FeatureType; // 0x00(0x01)
	bool Active; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FTimerHandle ServerTimerHandle; // 0x08(0x08)
};

// ScriptStruct Hardwired.HWMatchTeamBackfill
// Size: 0x20 (Inherited: 0x00)
struct FHWMatchTeamBackfill {
	struct FString TeamId; // 0x00(0x10)
	struct TArray<struct FString> SessionId; // 0x10(0x10)
};

// ScriptStruct Hardwired.HWMarkerData
// Size: 0xb8 (Inherited: 0x00)
struct FHWMarkerData {
	int32_t OwningTeam; // 0x00(0x04)
	bool VisibleInMap; // 0x04(0x01)
	bool VisibleInHud; // 0x05(0x01)
	bool HasVerticalPin; // 0x06(0x01)
	char pad_7[0x1]; // 0x07(0x01)
	struct TArray<struct FText> MarkerText; // 0x08(0x10)
	bool Active; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<bool> ActiveForTeam; // 0x20(0x10)
	struct TArray<bool> NavigationActiveForTeam; // 0x30(0x10)
	enum class EHWMapMarkerType MarkerType; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<struct AHWPlayerController*> ActiveForPlayers; // 0x48(0x10)
	struct TArray<struct AHWPlayerController*> NavigationActiveForPlayers; // 0x58(0x10)
	struct FLinearColor MarkerColor; // 0x68(0x10)
	float AreaRadius; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct UTexture2D* HUDMarkerTexture; // 0x80(0x08)
	struct AHWPlayerState* OwnerPS; // 0x88(0x08)
	enum class EHWPingReason PingReason; // 0x90(0x01)
	bool TextureRotated; // 0x91(0x01)
	bool TimerPaused; // 0x92(0x01)
	bool Locked; // 0x93(0x01)
	char pad_94[0x4]; // 0x94(0x04)
	struct FString ObjectiveLetter; // 0x98(0x10)
	bool VisibleInObjectivePanel; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	float TimerTargetTimestamp; // 0xac(0x04)
	float TimerStartTimestamp; // 0xb0(0x04)
	float TimerPauseTimestamp; // 0xb4(0x04)
};

// ScriptStruct Hardwired.HWAssistData
// Size: 0x28 (Inherited: 0x00)
struct FHWAssistData {
	struct FString SourceSessionId; // 0x00(0x10)
	enum class EHWGameplayEventType EventType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t ExpirationTimestamp; // 0x14(0x04)
	struct FString WeaponItemId; // 0x18(0x10)
};

// ScriptStruct Hardwired.HWDetectionEffect
// Size: 0x40 (Inherited: 0x00)
struct FHWDetectionEffect {
	int32_t PlayerId; // 0x00(0x04)
	enum class EHWDetectionStatus StatusType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FString ID; // 0x08(0x10)
	struct FString Source; // 0x18(0x10)
	bool SourceWasDrone; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct AActor* SourceActor; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct Hardwired.HWActorComponents
// Size: 0x50 (Inherited: 0x00)
struct FHWActorComponents {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Hardwired.HWDamageToPlayer
// Size: 0x18 (Inherited: 0x00)
struct FHWDamageToPlayer {
	struct FString TargetSessionId; // 0x00(0x10)
	float ArmorDamage; // 0x10(0x04)
	float HealthDamage; // 0x14(0x04)
};

// ScriptStruct Hardwired.HWGameplayEventsForRound
// Size: 0xf0 (Inherited: 0x00)
struct FHWGameplayEventsForRound {
	struct FHWLoadoutData Loadout; // 0x00(0x88)
	struct TMap<struct FString, struct FHWDamageAmount> DamageDonePerWeapon; // 0x88(0x50)
	struct TArray<struct FHWGameplayEvent> Events; // 0xd8(0x10)
	float RoundMultiplier; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
};

// ScriptStruct Hardwired.HWGameplayEvent
// Size: 0x30 (Inherited: 0x00)
struct FHWGameplayEvent {
	enum class EHWGameplayEventType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Extra; // 0x08(0x10)
	struct FString Target; // 0x18(0x10)
	int32_t Count; // 0x28(0x04)
	int32_t Round; // 0x2c(0x04)
};

// ScriptStruct Hardwired.HWDamageAmount
// Size: 0x08 (Inherited: 0x00)
struct FHWDamageAmount {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Hardwired.HWColliderHistoryData
// Size: 0x38 (Inherited: 0x00)
struct FHWColliderHistoryData {
	float Timestamp; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FHWMeshBodyData> Meshes; // 0x08(0x10)
	struct FHWCharacterStateData CharacterState; // 0x18(0x1c)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Hardwired.HWCharacterStateData
// Size: 0x1c (Inherited: 0x00)
struct FHWCharacterStateData {
	struct FVector Pos; // 0x00(0x0c)
	struct FRotator Rot; // 0x0c(0x0c)
	enum class EHWCharacterPosture Posture; // 0x18(0x01)
	int8_t Leaning; // 0x19(0x01)
	enum class EHWCharacterAction Action; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
};

// ScriptStruct Hardwired.HWMeshBodyData
// Size: 0x60 (Inherited: 0x00)
struct FHWMeshBodyData {
	struct FTransform Transform; // 0x00(0x30)
	struct TArray<struct FKSphereElem> SphereElems; // 0x30(0x10)
	struct TArray<struct FKBoxElem> BoxElems; // 0x40(0x10)
	struct TArray<struct FKSphylElem> SphylElems; // 0x50(0x10)
};

// ScriptStruct Hardwired.HWVoiceChatTextMessage
// Size: 0x30 (Inherited: 0x00)
struct FHWVoiceChatTextMessage {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct Hardwired.HWWeekInfoResponse
// Size: 0x60 (Inherited: 0x00)
struct FHWWeekInfoResponse {
	struct FString Title; // 0x00(0x10)
	struct FString Subtitle; // 0x10(0x10)
	struct FString WhatsNewText; // 0x20(0x10)
	struct TArray<struct FString> ColumnTitles; // 0x30(0x10)
	struct TArray<struct FString> ColumnTexts; // 0x40(0x10)
	struct FString QuestionnaireUrl; // 0x50(0x10)
};

// ScriptStruct Hardwired.HWAnalyticsEventAttribute
// Size: 0x30 (Inherited: 0x00)
struct FHWAnalyticsEventAttribute {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct Hardwired.HWPlayerMatchStat
// Size: 0x10 (Inherited: 0x00)
struct FHWPlayerMatchStat {
	int32_t NumKillsThisRound; // 0x00(0x04)
	int32_t NumAssistsThisRound; // 0x04(0x04)
	int32_t NumKillsTotal; // 0x08(0x04)
	int32_t NumAssistsTotal; // 0x0c(0x04)
};

// ScriptStruct Hardwired.HWRoundGoal
// Size: 0x20 (Inherited: 0x00)
struct FHWRoundGoal {
	enum class EHWRoundObjectiveState State; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText Text; // 0x08(0x18)
};

// ScriptStruct Hardwired.HWPlayerText
// Size: 0x20 (Inherited: 0x00)
struct FHWPlayerText {
	struct AHWCharacter* Character; // 0x00(0x08)
	struct FText Text; // 0x08(0x18)
};

// ScriptStruct Hardwired.HWPlayerMatchRewards
// Size: 0x10 (Inherited: 0x00)
struct FHWPlayerMatchRewards {
	struct TArray<struct FHWPlayerRoundReward> Rewards; // 0x00(0x10)
};

// ScriptStruct Hardwired.HWBodyPartArmorState
// Size: 0x08 (Inherited: 0x00)
struct FHWBodyPartArmorState {
	int32_t Hitpoints; // 0x00(0x04)
	int32_t ArmorTier; // 0x04(0x04)
};

// ScriptStruct Hardwired.HWWeaponAnimation
// Size: 0x18 (Inherited: 0x00)
struct FHWWeaponAnimation {
	struct UAnimMontage* Character1P; // 0x00(0x08)
	struct UAnimMontage* Character3P; // 0x08(0x08)
	struct UAnimMontage* Weapon; // 0x10(0x08)
};

// ScriptStruct Hardwired.HWWeaponStats
// Size: 0x20 (Inherited: 0x00)
struct FHWWeaponStats {
	enum class EHWWeaponAttributeType Stat; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Name; // 0x08(0x10)
	int32_t Level; // 0x18(0x04)
	int32_t MaxLevel; // 0x1c(0x04)
};

// ScriptStruct Hardwired.HWWeaponPartSound
// Size: 0x18 (Inherited: 0x00)
struct FHWWeaponPartSound {
	struct UAkAudioEvent* Sound1P; // 0x00(0x08)
	struct UAkAudioEvent* Sound3P; // 0x08(0x08)
	int32_t Priority; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Hardwired.HWWeaponAimpointParams
// Size: 0x1c (Inherited: 0x00)
struct FHWWeaponAimpointParams {
	float AimpointStiffness; // 0x00(0x04)
	float AimpointMass; // 0x04(0x04)
	float AimpointDampening; // 0x08(0x04)
	float AimpointSpeedMultiplier; // 0x0c(0x04)
	struct FVector AimpointForceMultiplier; // 0x10(0x0c)
};

// ScriptStruct Hardwired.HWWeaponAttribute
// Size: 0x20 (Inherited: 0x00)
struct FHWWeaponAttribute {
	enum class EHWWeaponAttributeType Stat; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Name; // 0x08(0x10)
	int32_t Level; // 0x18(0x04)
	int32_t MaxLevel; // 0x1c(0x04)
};

// ScriptStruct Hardwired.SimpleFloatRange
// Size: 0x08 (Inherited: 0x00)
struct FSimpleFloatRange {
	float Min; // 0x00(0x04)
	float Max; // 0x04(0x04)
};

// ScriptStruct Hardwired.AngleAndDistance
// Size: 0x08 (Inherited: 0x00)
struct FAngleAndDistance {
	float Angle; // 0x00(0x04)
	float Distance; // 0x04(0x04)
};

// ScriptStruct Hardwired.HWGameInfo
// Size: 0x08 (Inherited: 0x00)
struct FHWGameInfo {
	int32_t CurrentRound; // 0x00(0x04)
	enum class EHWRoundState RoundState; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Hardwired.HWServerHeartbeatData
// Size: 0x0c (Inherited: 0x00)
struct FHWServerHeartbeatData {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct Hardwired.HWProfileWithPendingRewardsResponse
// Size: 0x4d0 (Inherited: 0x00)
struct FHWProfileWithPendingRewardsResponse {
	struct FHWPlayerProfileData PlayerProfileData; // 0x00(0x4c0)
	struct TArray<struct FHWReward> Rewards; // 0x4c0(0x10)
};

// ScriptStruct Hardwired.HWPollResponse
// Size: 0x1c8 (Inherited: 0x00)
struct FHWPollResponse {
	struct TArray<struct FHWMessageData> Messages; // 0x00(0x10)
	struct FHWFetchTeamResponse FetchTeamResponse; // 0x10(0xf8)
	struct FHWFetchFriendsResponse FetchFriendsResponse; // 0x108(0x40)
	struct FHWGetMatchmakingResponse GetMatchmakingResponse; // 0x148(0x50)
	struct FString CurrentDate; // 0x198(0x10)
	struct FString MaintenanceStart; // 0x1a8(0x10)
	struct FString MaintenanceEnd; // 0x1b8(0x10)
};

// ScriptStruct Hardwired.HWGetMatchmakingResponse
// Size: 0x50 (Inherited: 0x00)
struct FHWGetMatchmakingResponse {
	enum class EHWMatchStatus MatchStatus; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString ServerIp; // 0x08(0x10)
	struct FString MatchID; // 0x18(0x10)
	int32_t TeamIndex; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString Map; // 0x30(0x10)
	struct FString Flow; // 0x40(0x10)
};

// ScriptStruct Hardwired.HWFetchFriendsResponse
// Size: 0x40 (Inherited: 0x00)
struct FHWFetchFriendsResponse {
	struct FHWFriendData FriendData; // 0x00(0x40)
};

// ScriptStruct Hardwired.HWFriendData
// Size: 0x40 (Inherited: 0x00)
struct FHWFriendData {
	struct FString PlayerId; // 0x00(0x10)
	struct TArray<struct FHWFriend> Friends; // 0x10(0x10)
	struct TArray<struct FHWFriend> FriendsInvitation; // 0x20(0x10)
	struct TArray<struct FHWFriend> BlockedPlayers; // 0x30(0x10)
};

// ScriptStruct Hardwired.HWFetchTeamResponse
// Size: 0xf8 (Inherited: 0x00)
struct FHWFetchTeamResponse {
	struct FHWTeamData TeamData; // 0x00(0xe8)
	struct TArray<struct FHWTeamInvitation> Invitations; // 0xe8(0x10)
};

// ScriptStruct Hardwired.HWTeamData
// Size: 0xe8 (Inherited: 0x00)
struct FHWTeamData {
	struct FString TeamId; // 0x00(0x10)
	struct FString LeaderPlayerId; // 0x10(0x10)
	struct FHWMatchTeam MatchTeam; // 0x20(0x20)
	struct FString BuildNumber; // 0x40(0x10)
	struct TArray<struct FHWTeamPlayer> Players; // 0x50(0x10)
	enum class EHWTeamStatus TeamStatus; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FString ChangedStatusTime; // 0x68(0x10)
	struct TMap<struct FString, struct FString> LastPoolTimeByPlayerId; // 0x78(0x50)
	struct FString TicketId; // 0xc8(0x10)
	struct FString PreferredLocation; // 0xd8(0x10)
};

// ScriptStruct Hardwired.HWMatchTeam
// Size: 0x20 (Inherited: 0x00)
struct FHWMatchTeam {
	struct FString MatchTeamId; // 0x00(0x10)
	struct FString BuildNumber; // 0x10(0x10)
};

// ScriptStruct Hardwired.HWPlayerReward
// Size: 0x20 (Inherited: 0x00)
struct FHWPlayerReward {
	struct TArray<struct FHWReward> Rewards; // 0x00(0x10)
	struct FString PlayerId; // 0x10(0x10)
};

// ScriptStruct Hardwired.HWMatchEndedRequest
// Size: 0x70 (Inherited: 0x00)
struct FHWMatchEndedRequest {
	struct FString MatchID; // 0x00(0x10)
	struct TArray<struct FHWMatchResult> Results; // 0x10(0x10)
	struct TArray<struct FHWMatchChatMessage> MatchChatMessages; // 0x20(0x10)
	struct FString MapName; // 0x30(0x10)
	struct FString MapMission; // 0x40(0x10)
	struct FString MapMissionVariation; // 0x50(0x10)
	struct FString Secret; // 0x60(0x10)
};

// ScriptStruct Hardwired.HWMatchChatMessage
// Size: 0x30 (Inherited: 0x00)
struct FHWMatchChatMessage {
	struct FString PlayerId; // 0x00(0x10)
	struct FString Message; // 0x10(0x10)
	struct FString Ts; // 0x20(0x10)
};

// ScriptStruct Hardwired.HWMatchResult
// Size: 0x88 (Inherited: 0x00)
struct FHWMatchResult {
	struct FString SessionId; // 0x00(0x10)
	struct TArray<struct FHWGameplayEvent> Events; // 0x10(0x10)
	float RewardMultiplier; // 0x20(0x04)
	int32_t Team; // 0x24(0x04)
	struct TArray<int32_t> MergedWithTeam; // 0x28(0x10)
	struct TArray<struct FString> ItemsUsed; // 0x38(0x10)
	struct TArray<struct FString> DronesUsed; // 0x48(0x10)
	struct TArray<struct FHWLoadoutData> LoadOutsPerRound; // 0x58(0x10)
	struct TArray<struct FHWMatchUsedWeapon> UsedWeaponInfo; // 0x68(0x10)
	int32_t Deaths; // 0x78(0x04)
	int32_t Kills; // 0x7c(0x04)
	int32_t Assists; // 0x80(0x04)
	bool IsMVP; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
};

// ScriptStruct Hardwired.HWMatchUsedWeapon
// Size: 0x78 (Inherited: 0x00)
struct FHWMatchUsedWeapon {
	struct FString ReceiverItemId; // 0x00(0x10)
	struct TMap<enum class EHWCraftingParameterGroup, float> EffectiveStats; // 0x10(0x50)
	struct TArray<int32_t> UsedInRounds; // 0x60(0x10)
	int32_t TotalDamageToBody; // 0x70(0x04)
	int32_t TotalDamageToArmor; // 0x74(0x04)
};

// ScriptStruct Hardwired.HWLoadResponse
// Size: 0x4c0 (Inherited: 0x00)
struct FHWLoadResponse {
	struct FHWPlayerProfileData PlayerProfileData; // 0x00(0x4c0)
};

// ScriptStruct Hardwired.HWLoadMatchProfilesResponse
// Size: 0x10 (Inherited: 0x00)
struct FHWLoadMatchProfilesResponse {
	struct TArray<struct FHWPlayerProfileData> MatchProfiles; // 0x00(0x10)
};

// ScriptStruct Hardwired.HWDevFakeMatchRequest
// Size: 0xa0 (Inherited: 0x00)
struct FHWDevFakeMatchRequest {
	struct FHWMatchResult Result; // 0x00(0x88)
	int32_t ExtraCredits; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct FString SessionId; // 0x90(0x10)
};

// ScriptStruct Hardwired.HWMatchDevTeam
// Size: 0x1b8 (Inherited: 0x00)
struct FHWMatchDevTeam {
	struct FString MatchTeamId; // 0x00(0x10)
	struct FString Key; // 0x10(0x10)
	int32_t NumPlayers; // 0x20(0x04)
	enum class EHWMatchStatus MatchStatus; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FHWMatch Match; // 0x28(0x180)
	struct TArray<struct FHWTeamPlayer> TeamPlayers; // 0x1a8(0x10)
};

// ScriptStruct Hardwired.HWMatch
// Size: 0x180 (Inherited: 0x00)
struct FHWMatch {
	struct FString MatchID; // 0x00(0x10)
	struct FString Ip; // 0x10(0x10)
	struct FString CreatedTime; // 0x20(0x10)
	struct FHWMatchTeam Team1; // 0x30(0x20)
	struct FHWMatchTeam Team2; // 0x50(0x20)
	struct FHWMatchTeam Team3; // 0x70(0x20)
	struct TArray<struct FHWMatchChatMessage> MatchChatMessages; // 0x90(0x10)
	enum class EHWMatchStatus MatchStatus; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct TArray<struct FString> TeamIds1; // 0xa8(0x10)
	struct TArray<struct FString> TeamIds2; // 0xb8(0x10)
	struct TArray<struct FString> TeamIds3; // 0xc8(0x10)
	struct TArray<struct FString> PlayerIds1; // 0xd8(0x10)
	struct TArray<struct FString> PlayerIds2; // 0xe8(0x10)
	struct TArray<struct FString> PlayerIds3; // 0xf8(0x10)
	struct FString Map; // 0x108(0x10)
	struct FString Flow; // 0x118(0x10)
	struct FString Variation; // 0x128(0x10)
	int32_t NumberOfPlayers; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct FString BackendUrl; // 0x140(0x10)
	struct FString BuildNumber; // 0x150(0x10)
	struct FString ConnectionInfo; // 0x160(0x10)
	struct FString Region; // 0x170(0x10)
};

// ScriptStruct Hardwired.HWMatchBackfillRequest
// Size: 0x30 (Inherited: 0x00)
struct FHWMatchBackfillRequest {
	struct FString MatchID; // 0x00(0x10)
	struct TArray<struct FHWTeamBackfillRequest> TeamBackfillers; // 0x10(0x10)
	struct FString Secret; // 0x20(0x10)
};

// ScriptStruct Hardwired.HWTeamBackfillRequest
// Size: 0x30 (Inherited: 0x00)
struct FHWTeamBackfillRequest {
	struct FString MatchTeamId; // 0x00(0x10)
	struct FString TeamId; // 0x10(0x10)
	struct TArray<struct FString> PlayerIds; // 0x20(0x10)
};

// ScriptStruct Hardwired.HWItemData
// Size: 0x78 (Inherited: 0x00)
struct FHWItemData {
	struct FName ID; // 0x00(0x08)
	struct FString ItemCategory; // 0x08(0x10)
	struct FString Description; // 0x18(0x10)
	struct FString IconPath; // 0x28(0x10)
	enum class EHWItemUsageType UseType; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float UseTime; // 0x3c(0x04)
	float CooldownTime; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString BpClass; // 0x48(0x10)
	bool IsUsableWhileMoving; // 0x58(0x01)
	bool HideFromPlayer; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)
	struct TArray<struct FHWKeyValuePair> Parameters; // 0x60(0x10)
	int32_t Amount; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct Hardwired.HWKeyValuePair
// Size: 0x20 (Inherited: 0x00)
struct FHWKeyValuePair {
	struct FString Key; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct Hardwired.HWGetStatusResponse
// Size: 0x68 (Inherited: 0x00)
struct FHWGetStatusResponse {
	struct FHWStatusData StatusData; // 0x00(0x68)
};

// ScriptStruct Hardwired.HWDevAddMissionTrackedStatsRequest
// Size: 0x20 (Inherited: 0x00)
struct FHWDevAddMissionTrackedStatsRequest {
	struct TArray<struct FHWMissionTrackedValue> Values; // 0x00(0x10)
	struct FString SessionId; // 0x10(0x10)
};

// ScriptStruct Hardwired.HWMissionTrackedValue
// Size: 0x08 (Inherited: 0x00)
struct FHWMissionTrackedValue {
	enum class EHWMissionTrackedStat Stat; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Amount; // 0x04(0x04)
};

// ScriptStruct Hardwired.HWDevAddInventoryItemRequest
// Size: 0x20 (Inherited: 0x00)
struct FHWDevAddInventoryItemRequest {
	struct TArray<struct FHWInventoryItem> Items; // 0x00(0x10)
	struct FString SessionId; // 0x10(0x10)
};

// ScriptStruct Hardwired.HWAssembledWeaponData
// Size: 0x38 (Inherited: 0x00)
struct FHWAssembledWeaponData {
	struct FName ID; // 0x00(0x08)
	struct FName ReceiverId; // 0x08(0x08)
	enum class EHWRarity Rarity; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float Efficiency; // 0x14(0x04)
	float Ammo; // 0x18(0x04)
	float HitCapability; // 0x1c(0x04)
	float Handling; // 0x20(0x04)
	float Stealth; // 0x24(0x04)
	struct TArray<struct FHWPartWithSetId> Parts; // 0x28(0x10)
};

// ScriptStruct Hardwired.HWPartWithSetId
// Size: 0x10 (Inherited: 0x00)
struct FHWPartWithSetId {
	struct FName PartId; // 0x00(0x08)
	struct FName PartSetId; // 0x08(0x08)
};

// ScriptStruct Hardwired.HWWeaponPartSetBonusData
// Size: 0x28 (Inherited: 0x00)
struct FHWWeaponPartSetBonusData {
	struct FName SetId; // 0x00(0x08)
	int32_t PartsCollected; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FHWSetBonusEntry> Bonuses; // 0x10(0x10)
	enum class EHWSetAbilityType AbilityType; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float AbilityParameter; // 0x24(0x04)
};

// ScriptStruct Hardwired.HWSetBonusEntry
// Size: 0x08 (Inherited: 0x00)
struct FHWSetBonusEntry {
	enum class EHWCraftingParameter Parameter; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Amount; // 0x04(0x04)
};

// ScriptStruct Hardwired.HWWeaponPartSetAvailabilityData
// Size: 0x20 (Inherited: 0x00)
struct FHWWeaponPartSetAvailabilityData {
	struct FName SetId; // 0x00(0x08)
	enum class EHWWeaponPartType WeaponPart; // 0x08(0x01)
	enum class EHWRarity MinimumRarity; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct TArray<struct FString> ExcludedReceivers; // 0x10(0x10)
};

// ScriptStruct Hardwired.HWWeaponPartRules
// Size: 0x01 (Inherited: 0x00)
struct FHWWeaponPartRules {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Hardwired.HWWeaponPartData
// Size: 0xc8 (Inherited: 0x00)
struct FHWWeaponPartData {
	struct FName PartId; // 0x00(0x08)
	struct FName ReceiverId; // 0x08(0x08)
	struct FString BlueprintFolder; // 0x10(0x10)
	struct FString BlueprintName; // 0x20(0x10)
	enum class EHWFaction Faction; // 0x30(0x01)
	enum class EHWWeaponPartType Type; // 0x31(0x01)
	enum class EHWWeaponPartSubType SubType; // 0x32(0x01)
	bool IsDefaultPart; // 0x33(0x01)
	bool IsBasedOnDefault; // 0x34(0x01)
	bool IsExcludedFromRewardPool; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
	float RewardProbability; // 0x38(0x04)
	enum class EHWWeaponType WeaponType; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float Weight; // 0x40(0x04)
	bool UsableOneHanded; // 0x44(0x01)
	bool Automatic; // 0x45(0x01)
	char pad_46[0x2]; // 0x46(0x02)
	int32_t AmmoReserve; // 0x48(0x04)
	enum class EHWWeaponFireMode ShootingMode; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	int32_t ShotsPerBurst; // 0x50(0x04)
	float TimeBetweenBursts; // 0x54(0x04)
	float FullReloadMultiplier; // 0x58(0x04)
	float RecoilMultiplierWalking; // 0x5c(0x04)
	float RecoilMultiplierHipFiring; // 0x60(0x04)
	float RecoilMultiplierCrouching; // 0x64(0x04)
	float RecoilMultiplierContinuousFiring; // 0x68(0x04)
	float SpreadBaseMultiplier; // 0x6c(0x04)
	float SpreadMultiplierWalking; // 0x70(0x04)
	float SpreadMultiplierCrouching; // 0x74(0x04)
	float SpreadAutoFire; // 0x78(0x04)
	float SpreadAutoFireTime; // 0x7c(0x04)
	float SwayRecoverySpeed; // 0x80(0x04)
	float AimRecoverySpeed; // 0x84(0x04)
	float HipRecoverySpeed; // 0x88(0x04)
	float HipfireSpread; // 0x8c(0x04)
	bool IsOptical; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	float Magnification; // 0x94(0x04)
	float FovAimed; // 0x98(0x04)
	float FovHands; // 0x9c(0x04)
	float FovWorldAimed; // 0xa0(0x04)
	bool IsFatalOnHeadShot; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	struct TArray<int32_t> FamiliarityMilestones; // 0xa8(0x10)
	float DefaultDamage; // 0xb8(0x04)
	float DamageToObject; // 0xbc(0x04)
	int32_t VfxTag; // 0xc0(0x04)
	bool IsHidden; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
};

// ScriptStruct Hardwired.HWWeaponParameterData
// Size: 0x64 (Inherited: 0x00)
struct FHWWeaponParameterData {
	struct FName PartId; // 0x00(0x08)
	enum class EHWWeaponParameterDataValueType ValueType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t CreditValue; // 0x0c(0x04)
	int32_t MaterialValue; // 0x10(0x04)
	int32_t ReprogrammingCost; // 0x14(0x04)
	int32_t UpgradeCost; // 0x18(0x04)
	int32_t UpgradeMaterialCost; // 0x1c(0x04)
	int32_t ResetUpgradeCost; // 0x20(0x04)
	int32_t CodeSellPrice; // 0x24(0x04)
	int32_t RequiredMaterials; // 0x28(0x04)
	float RateOfFire; // 0x2c(0x04)
	float PelletsPerShot; // 0x30(0x04)
	float PelletSpread; // 0x34(0x04)
	float EquipTime; // 0x38(0x04)
	float ReloadTime; // 0x3c(0x04)
	float MagCapacity; // 0x40(0x04)
	float AimStability; // 0x44(0x04)
	float HipStability; // 0x48(0x04)
	float OptimalRange; // 0x4c(0x04)
	float MaxRange; // 0x50(0x04)
	float FireSoundRange; // 0x54(0x04)
	float MuzzleFlashSize; // 0x58(0x04)
	float AimTime; // 0x5c(0x04)
	float MinimumDamage; // 0x60(0x04)
};

// ScriptStruct Hardwired.HWWeaponInfo
// Size: 0xb0 (Inherited: 0x00)
struct FHWWeaponInfo {
	struct FString Name; // 0x00(0x10)
	struct TMap<enum class EHWWeaponPartType, struct FString> PartIds; // 0x10(0x50)
	struct TMap<enum class EHWWeaponPartType, struct FString> CosmeticIds; // 0x60(0x50)
};

// ScriptStruct Hardwired.HWWeaponCosmeticPartData
// Size: 0x58 (Inherited: 0x00)
struct FHWWeaponCosmeticPartData {
	struct FName PartId; // 0x00(0x08)
	struct FName ReceiverId; // 0x08(0x08)
	struct FName ParentPartId; // 0x10(0x08)
	enum class EHWWeaponPartType Type; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString BlueprintFolder; // 0x20(0x10)
	struct FString BlueprintName; // 0x30(0x10)
	struct FString SkinName; // 0x40(0x10)
	bool IsHiddenWhenLocked; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct Hardwired.HWWalletException
// Size: 0x01 (Inherited: 0x00)
struct FHWWalletException {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Hardwired.HWValidator
// Size: 0x01 (Inherited: 0x00)
struct FHWValidator {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Hardwired.HWValidationContext
// Size: 0x01 (Inherited: 0x00)
struct FHWValidationContext {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Hardwired.HWUpgradeItemRequest
// Size: 0x70 (Inherited: 0x00)
struct FHWUpgradeItemRequest {
	struct FString ItemId; // 0x00(0x10)
	struct TMap<enum class EHWCraftingParameter, int32_t> UpgradePoints; // 0x10(0x50)
	struct FString SessionId; // 0x60(0x10)
};

// ScriptStruct Hardwired.HWUpgradeBlueprintRarityRequest
// Size: 0x28 (Inherited: 0x00)
struct FHWUpgradeBlueprintRarityRequest {
	struct FString BlueprintId; // 0x00(0x10)
	enum class EHWRarity NewRarity; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString SessionId; // 0x18(0x10)
};

// ScriptStruct Hardwired.HWUnlockItemRequest
// Size: 0x20 (Inherited: 0x00)
struct FHWUnlockItemRequest {
	struct FString ItemId; // 0x00(0x10)
	struct FString SessionId; // 0x10(0x10)
};

// ScriptStruct Hardwired.HWUninstallWeaponPartRequest
// Size: 0x28 (Inherited: 0x00)
struct FHWUninstallWeaponPartRequest {
	struct FString WeaponID; // 0x00(0x10)
	enum class EHWWeaponPartType PartType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString SessionId; // 0x18(0x10)
};

// ScriptStruct Hardwired.HWTeamRequest
// Size: 0x20 (Inherited: 0x00)
struct FHWTeamRequest {
	struct FString PlayerId; // 0x00(0x10)
	struct FString SessionId; // 0x10(0x10)
};

// ScriptStruct Hardwired.HWTeamInviteData
// Size: 0x20 (Inherited: 0x00)
struct FHWTeamInviteData {
	struct FString PlayerId; // 0x00(0x10)
	struct TArray<struct FHWTeamInvitation> Invitations; // 0x10(0x10)
};

// ScriptStruct Hardwired.HWTag
// Size: 0x01 (Inherited: 0x00)
struct FHWTag {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Hardwired.HWStoreWeaponRequest
// Size: 0xc8 (Inherited: 0x00)
struct FHWStoreWeaponRequest {
	struct FString WeaponName; // 0x00(0x10)
	struct TMap<enum class EHWWeaponAttributeType, int32_t> WeaponLevel; // 0x10(0x50)
	struct TMap<enum class EHWWeaponPartType, struct FString> WeaponParts; // 0x60(0x50)
	int32_t UpgradePoints; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FString SessionId; // 0xb8(0x10)
};

// ScriptStruct Hardwired.HWStoreLoadoutRequest
// Size: 0xa8 (Inherited: 0x00)
struct FHWStoreLoadoutRequest {
	struct FString PreviousName; // 0x00(0x10)
	struct FHWLoadoutData Loadout; // 0x10(0x88)
	struct FString SessionId; // 0x98(0x10)
};

// ScriptStruct Hardwired.HWStoreConfigResponse
// Size: 0x10 (Inherited: 0x00)
struct FHWStoreConfigResponse {
	struct FString ConfigHash; // 0x00(0x10)
};

// ScriptStruct Hardwired.HWStoreConfigRequest
// Size: 0x20 (Inherited: 0x00)
struct FHWStoreConfigRequest {
	struct FString ConfigName; // 0x00(0x10)
	struct FString ConfigContent; // 0x10(0x10)
};

// ScriptStruct Hardwired.HWSteamMap
// Size: 0x01 (Inherited: 0x00)
struct FHWSteamMap {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Hardwired.HWStartContractStageRequest
// Size: 0x28 (Inherited: 0x00)
struct FHWStartContractStageRequest {
	struct TArray<enum class EHWMissionKind> Missions; // 0x00(0x10)
	enum class EHWRarity Rarity; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString SessionId; // 0x18(0x10)
};

// ScriptStruct Hardwired.HWStadiaMap
// Size: 0x01 (Inherited: 0x00)
struct FHWStadiaMap {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Hardwired.HWSpecialMissionData
// Size: 0x60 (Inherited: 0x00)
struct FHWSpecialMissionData {
	struct FString ID; // 0x00(0x10)
	struct FString StartDate; // 0x10(0x10)
	struct FString EndDate; // 0x20(0x10)
	enum class EHWMissionKind Kind; // 0x30(0x01)
	enum class EHWMissionTrackedStat Objective; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct FString ObjectiveExtra; // 0x38(0x10)
	int32_t Target; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FString RewardBoxId; // 0x50(0x10)
};

// ScriptStruct Hardwired.HWShopSubsection
// Size: 0x58 (Inherited: 0x00)
struct FHWShopSubsection {
	struct FString SubsectionId; // 0x00(0x10)
	struct FString HeaderId; // 0x10(0x10)
	struct FString ParentCategoryId; // 0x20(0x10)
	int32_t Priority; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FString> LayoutTemplateType; // 0x38(0x10)
	struct TArray<struct FString> ShopItemIds; // 0x48(0x10)
};

// ScriptStruct Hardwired.HWShopItem
// Size: 0x78 (Inherited: 0x00)
struct FHWShopItem {
	struct FString ShopItemId; // 0x00(0x10)
	struct FString ImageId; // 0x10(0x10)
	struct FString NameId; // 0x20(0x10)
	struct FString RealMoneyPriceTierId; // 0x30(0x10)
	enum class EHWCurrencyType PriceUnit; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32_t PriceAmount; // 0x44(0x04)
	int32_t DisplayedDiscountPercentage; // 0x48(0x04)
	int32_t MaxPurchases; // 0x4c(0x04)
	struct FString RewardBoxId; // 0x50(0x10)
	bool IsNewDisplay; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FString BackgroundImageId; // 0x68(0x10)
};

// ScriptStruct Hardwired.HWShopCampaignFilters
// Size: 0xe0 (Inherited: 0x00)
struct FHWShopCampaignFilters {
	struct FString CampaignTargetId; // 0x00(0x10)
	struct TArray<struct FString> MacroRegions; // 0x10(0x10)
	struct TArray<struct FString> AbGroups; // 0x20(0x10)
	struct TArray<enum class EHWGamePlatform> Platforms; // 0x30(0x10)
	int32_t MadePurchasesCountLessThan; // 0x40(0x04)
	int32_t MadePurchasesCountMoreThan; // 0x44(0x04)
	int32_t MatchesPlayedLessThan; // 0x48(0x04)
	int32_t MatchesPlayedMoreThan; // 0x4c(0x04)
	int32_t ReturnAfterLessThan; // 0x50(0x04)
	int32_t ReturnAfterMoreThan; // 0x54(0x04)
	int32_t LastPurchaseMoreThan; // 0x58(0x04)
	int32_t LastPurchaseLessThan; // 0x5c(0x04)
	struct TArray<struct FHWCurrencyAndAmount> SpentLessThan; // 0x60(0x10)
	struct TArray<struct FHWCurrencyAndAmount> SpentMoreThan; // 0x70(0x10)
	struct TArray<struct FHWCurrencyAndAmount> WalletMoreThan; // 0x80(0x10)
	struct TArray<struct FHWCurrencyAndAmount> WalletLessThan; // 0x90(0x10)
	struct TArray<struct FString> ItemsNotOwned; // 0xa0(0x10)
	struct TArray<struct FString> ItemsOwned; // 0xb0(0x10)
	struct TArray<struct FString> WeaponsNotOwned; // 0xc0(0x10)
	struct TArray<struct FString> WeaponsOwned; // 0xd0(0x10)
};

// ScriptStruct Hardwired.HWCurrencyAndAmount
// Size: 0x08 (Inherited: 0x00)
struct FHWCurrencyAndAmount {
	enum class EHWCurrencyType CurrencyType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Amount; // 0x04(0x04)
};

// ScriptStruct Hardwired.HWSessionNeededRequest
// Size: 0x10 (Inherited: 0x00)
struct FHWSessionNeededRequest {
	struct FString SessionId; // 0x00(0x10)
};

// ScriptStruct Hardwired.HWSession
// Size: 0x01 (Inherited: 0x00)
struct FHWSession {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Hardwired.HWServerLocationData
// Size: 0x18 (Inherited: 0x00)
struct FHWServerLocationData {
	enum class EHWServerLocation ServerLocation; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString PingUrl; // 0x08(0x10)
};

// ScriptStruct Hardwired.HWSendAnalyticsEventRequest
// Size: 0x30 (Inherited: 0x00)
struct FHWSendAnalyticsEventRequest {
	struct FString EventName; // 0x00(0x10)
	struct FString Content; // 0x10(0x10)
	struct FString SessionId; // 0x20(0x10)
};

// ScriptStruct Hardwired.HWSellBlueprintCodeRequest
// Size: 0x20 (Inherited: 0x00)
struct FHWSellBlueprintCodeRequest {
	struct FString BlueprintId; // 0x00(0x10)
	struct FString SessionId; // 0x10(0x10)
};

// ScriptStruct Hardwired.HWSecretNeededRequest
// Size: 0x10 (Inherited: 0x00)
struct FHWSecretNeededRequest {
	struct FString Secret; // 0x00(0x10)
};

// ScriptStruct Hardwired.HWRewardBoxesData
// Size: 0x50 (Inherited: 0x00)
struct FHWRewardBoxesData {
	struct FString BoxId; // 0x00(0x10)
	int32_t Probability; // 0x10(0x04)
	int32_t AmountMin; // 0x14(0x04)
	int32_t AmountMax; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString TypeId; // 0x20(0x10)
	struct FString SetId; // 0x30(0x10)
	enum class EHWRewardType Type; // 0x40(0x01)
	enum class EHWInventoryItemType InventoryItemType; // 0x41(0x01)
	enum class EHWCraftingParameterGroup CodeGroup; // 0x42(0x01)
	char pad_43[0x1]; // 0x43(0x01)
	float CodeRoll; // 0x44(0x04)
	int32_t CodeUpgradePoints; // 0x48(0x04)
	enum class EHWRarity Rarity; // 0x4c(0x01)
	enum class EHWFaction Faction; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
};

// ScriptStruct Hardwired.HWResetPasswordRequest
// Size: 0x10 (Inherited: 0x00)
struct FHWResetPasswordRequest {
	struct FString Email; // 0x00(0x10)
};

// ScriptStruct Hardwired.HWResetItemUpgradesRequest
// Size: 0x20 (Inherited: 0x00)
struct FHWResetItemUpgradesRequest {
	struct FString ItemId; // 0x00(0x10)
	struct FString SessionId; // 0x10(0x10)
};

// ScriptStruct Hardwired.HWReprogramWeaponRequest
// Size: 0x30 (Inherited: 0x00)
struct FHWReprogramWeaponRequest {
	struct FString WeaponID; // 0x00(0x10)
	struct FString WeaponCodeId; // 0x10(0x10)
	struct FString SessionId; // 0x20(0x10)
};

// ScriptStruct Hardwired.HWReprogramBlueprintRequest
// Size: 0x30 (Inherited: 0x00)
struct FHWReprogramBlueprintRequest {
	struct FString BlueprintId; // 0x00(0x10)
	struct FString BlueprintCodeId; // 0x10(0x10)
	struct FString SessionId; // 0x20(0x10)
};

// ScriptStruct Hardwired.HWReplyTeamInviteRequest
// Size: 0x20 (Inherited: 0x00)
struct FHWReplyTeamInviteRequest {
	struct FString TeamId; // 0x00(0x10)
	struct FString SessionId; // 0x10(0x10)
};

// ScriptStruct Hardwired.HWPriceTier
// Size: 0x38 (Inherited: 0x00)
struct FHWPriceTier {
	struct FString ID; // 0x00(0x10)
	int32_t UsdPrice; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString SteamId; // 0x18(0x10)
	struct FString StadiaId; // 0x28(0x10)
};

// ScriptStruct Hardwired.HWPriceLocalization
// Size: 0x28 (Inherited: 0x00)
struct FHWPriceLocalization {
	struct FString PriceTierId; // 0x00(0x10)
	struct FString CurrencyCode; // 0x10(0x10)
	int32_t Price; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Hardwired.HWPlayerMessageRequest
// Size: 0x20 (Inherited: 0x00)
struct FHWPlayerMessageRequest {
	struct FString MessageId; // 0x00(0x10)
	struct FString SessionId; // 0x10(0x10)
};

// ScriptStruct Hardwired.HWPlayerMessage
// Size: 0x20 (Inherited: 0x00)
struct FHWPlayerMessage {
	struct FString PlayerId; // 0x00(0x10)
	struct TArray<struct FHWMessageData> MessagesData; // 0x10(0x10)
};

// ScriptStruct Hardwired.HWPlatformProduct
// Size: 0x28 (Inherited: 0x00)
struct FHWPlatformProduct {
	struct FString ShopProductId; // 0x00(0x10)
	enum class EHWPaymentPlatform PaymentPlatform; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString PlatformProductId; // 0x18(0x10)
};

// ScriptStruct Hardwired.HWParser
// Size: 0x01 (Inherited: 0x00)
struct FHWParser {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Hardwired.HWOnlineStatus
// Size: 0x28 (Inherited: 0x00)
struct FHWOnlineStatus {
	struct FString PlayerId; // 0x00(0x10)
	struct FString LastDisplayName; // 0x10(0x10)
	enum class EHWPlayerStatus LastPlayerStatus; // 0x20(0x01)
	enum class EHWGamePlatform LastPlatform; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct Hardwired.HWModelBase
// Size: 0x01 (Inherited: 0x00)
struct FHWModelBase {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Hardwired.HWMissionRequest
// Size: 0x20 (Inherited: 0x00)
struct FHWMissionRequest {
	struct FString MissionId; // 0x00(0x10)
	struct FString SessionId; // 0x10(0x10)
};

// ScriptStruct Hardwired.HWMissionData
// Size: 0x58 (Inherited: 0x00)
struct FHWMissionData {
	struct FString ID; // 0x00(0x10)
	enum class EHWMissionKind Kind; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString ShortDescription; // 0x18(0x10)
	struct FString LongDescription; // 0x28(0x10)
	enum class EHWMissionTrackedStat Objective; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FString ObjectiveExtra; // 0x40(0x10)
	int32_t Target; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct Hardwired.HWMaterialDropQuantityData
// Size: 0x18 (Inherited: 0x00)
struct FHWMaterialDropQuantityData {
	enum class EHWRarity Rarity; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<float> OddsPerAmount; // 0x08(0x10)
};

// ScriptStruct Hardwired.HWMatchStartedRequest
// Size: 0x30 (Inherited: 0x00)
struct FHWMatchStartedRequest {
	struct FString MatchID; // 0x00(0x10)
	struct FString Ip; // 0x10(0x10)
	struct FString Secret; // 0x20(0x10)
};

// ScriptStruct Hardwired.HWMatchLeaveRequest
// Size: 0x38 (Inherited: 0x00)
struct FHWMatchLeaveRequest {
	bool Disconnected; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString SessionId; // 0x08(0x10)
	struct FString MatchID; // 0x18(0x10)
	struct FString Secret; // 0x28(0x10)
};

// ScriptStruct Hardwired.HWMatchFetchRequest
// Size: 0x20 (Inherited: 0x00)
struct FHWMatchFetchRequest {
	struct FString MatchID; // 0x00(0x10)
	struct FString Secret; // 0x10(0x10)
};

// ScriptStruct Hardwired.HWMarkAsSeenItemRequest
// Size: 0x28 (Inherited: 0x00)
struct FHWMarkAsSeenItemRequest {
	struct FString ItemId; // 0x00(0x10)
	enum class EHWInventoryItemType Type; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString SessionId; // 0x18(0x10)
};

// ScriptStruct Hardwired.HWLoginRequest
// Size: 0x88 (Inherited: 0x00)
struct FHWLoginRequest {
	enum class EHWGamePlatform Platform; // 0x00(0x01)
	enum class EHWGameRole Role; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FString AppId; // 0x08(0x10)
	struct FString Token; // 0x18(0x10)
	struct FString Name; // 0x28(0x10)
	struct FString Username; // 0x38(0x10)
	struct FString Email; // 0x48(0x10)
	struct FString Password; // 0x58(0x10)
	struct FString BuildNumber; // 0x68(0x10)
	struct FString Region; // 0x78(0x10)
};

// ScriptStruct Hardwired.HWLoadRequest
// Size: 0x10 (Inherited: 0x00)
struct FHWLoadRequest {
	struct FString SessionId; // 0x00(0x10)
};

// ScriptStruct Hardwired.HWLoadPublicProfileRequest
// Size: 0x20 (Inherited: 0x00)
struct FHWLoadPublicProfileRequest {
	struct FString PlayerId; // 0x00(0x10)
	struct FString SessionId; // 0x10(0x10)
};

// ScriptStruct Hardwired.HWLoadMatchProfilesRequest
// Size: 0x20 (Inherited: 0x00)
struct FHWLoadMatchProfilesRequest {
	struct TArray<struct FString> PlayerIds; // 0x00(0x10)
	struct FString Secret; // 0x10(0x10)
};

// ScriptStruct Hardwired.HWLoadConfigResponse
// Size: 0x60 (Inherited: 0x00)
struct FHWLoadConfigResponse {
	struct FString MasterDataConfigId; // 0x00(0x10)
	struct TMap<struct FString, struct FString> Configs; // 0x10(0x50)
};

// ScriptStruct Hardwired.HWLoadConfigRequest
// Size: 0x10 (Inherited: 0x00)
struct FHWLoadConfigRequest {
	struct TArray<struct FString> ConfigName; // 0x00(0x10)
};

// ScriptStruct Hardwired.HWListConfigResponse
// Size: 0x10 (Inherited: 0x00)
struct FHWListConfigResponse {
	struct TArray<struct FHWConfigHashes> ConfigHashes; // 0x00(0x10)
};

// ScriptStruct Hardwired.HWConfigHashes
// Size: 0x20 (Inherited: 0x00)
struct FHWConfigHashes {
	struct FString ConfigName; // 0x00(0x10)
	struct FString ConfigHash; // 0x10(0x10)
};

// ScriptStruct Hardwired.HWLevelProgressionData
// Size: 0x48 (Inherited: 0x00)
struct FHWLevelProgressionData {
	int32_t Level; // 0x00(0x04)
	int32_t RequiredXP; // 0x04(0x04)
	struct FString Title; // 0x08(0x10)
	struct FString RewardId; // 0x18(0x10)
	enum class EHWRarity RewardRarity; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t RewardCredits; // 0x2c(0x04)
	int32_t RewardMaterials; // 0x30(0x04)
	int32_t RewardRerollCost; // 0x34(0x04)
	struct TArray<float> RewardRarityProbabilities; // 0x38(0x10)
};

// ScriptStruct Hardwired.HWLevelModifierData
// Size: 0x18 (Inherited: 0x00)
struct FHWLevelModifierData {
	struct FString ID; // 0x00(0x10)
	int32_t LevelDiff; // 0x10(0x04)
	float Modifier; // 0x14(0x04)
};

// ScriptStruct Hardwired.HWLevelFlowsData
// Size: 0x90 (Inherited: 0x00)
struct FHWLevelFlowsData {
	struct FString ID; // 0x00(0x10)
	struct FString MapName; // 0x10(0x10)
	struct FString FlowId; // 0x20(0x10)
	struct FString Round1; // 0x30(0x10)
	struct FString Round2; // 0x40(0x10)
	struct FString Round3; // 0x50(0x10)
	struct FString MapOverlayRound1; // 0x60(0x10)
	struct FString MapOverlayRound2; // 0x70(0x10)
	struct FString MapOverlayRound3; // 0x80(0x10)
};

// ScriptStruct Hardwired.HWLegacyMap
// Size: 0x01 (Inherited: 0x00)
struct FHWLegacyMap {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Hardwired.HWInviteFriendRequest
// Size: 0x30 (Inherited: 0x00)
struct FHWInviteFriendRequest {
	struct FString PlayerId; // 0x00(0x10)
	struct FString PlayerName; // 0x10(0x10)
	struct FString SessionId; // 0x20(0x10)
};

// ScriptStruct Hardwired.HWInstallWeaponPartRequest
// Size: 0x30 (Inherited: 0x00)
struct FHWInstallWeaponPartRequest {
	struct FString WeaponID; // 0x00(0x10)
	struct FString PartId; // 0x10(0x10)
	struct FString SessionId; // 0x20(0x10)
};

// ScriptStruct Hardwired.HWInitiateRealMoneyPurchaseRequest
// Size: 0x58 (Inherited: 0x00)
struct FHWInitiateRealMoneyPurchaseRequest {
	struct FString ShopItemId; // 0x00(0x10)
	struct FString LocalizedItemDescription; // 0x10(0x10)
	struct FString LanguageCode; // 0x20(0x10)
	struct FString CurrencyCode; // 0x30(0x10)
	enum class EHWPaymentPlatform Platform; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FString SessionId; // 0x48(0x10)
};

// ScriptStruct Hardwired.HWGetPlayerStatsResponse
// Size: 0xa0 (Inherited: 0x00)
struct FHWGetPlayerStatsResponse {
	struct TMap<enum class EHWPlayerStatType, int32_t> TotalStats; // 0x00(0x50)
	struct TMap<enum class EHWPlayerStatType, int32_t> SlidingStats; // 0x50(0x50)
};

// ScriptStruct Hardwired.HWGetPendingRealMoneyPurchaseResponse
// Size: 0x10 (Inherited: 0x00)
struct FHWGetPendingRealMoneyPurchaseResponse {
	struct TArray<struct FString> HwTransactionIds; // 0x00(0x10)
};

// ScriptStruct Hardwired.HWGetDevMatchmakingRequest
// Size: 0x20 (Inherited: 0x00)
struct FHWGetDevMatchmakingRequest {
	struct FString Key; // 0x00(0x10)
	struct FString SessionId; // 0x10(0x10)
};

// ScriptStruct Hardwired.HWGeneralRules
// Size: 0x01 (Inherited: 0x00)
struct FHWGeneralRules {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Hardwired.HWFriendRequest
// Size: 0x20 (Inherited: 0x00)
struct FHWFriendRequest {
	struct FString PlayerId; // 0x00(0x10)
	struct FString SessionId; // 0x10(0x10)
};

// ScriptStruct Hardwired.HWFinalizeRealMoneyPurchaseRequest
// Size: 0x18 (Inherited: 0x00)
struct FHWFinalizeRealMoneyPurchaseRequest {
	bool Success; // 0x00(0x01)
	bool Recovery; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FString SessionId; // 0x08(0x10)
};

// ScriptStruct Hardwired.HWFetchStatsRequest
// Size: 0x20 (Inherited: 0x00)
struct FHWFetchStatsRequest {
	struct FString PlayerId; // 0x00(0x10)
	struct FString SessionId; // 0x10(0x10)
};

// ScriptStruct Hardwired.HWFetchPlayerIdFromIdentityRequest
// Size: 0x28 (Inherited: 0x00)
struct FHWFetchPlayerIdFromIdentityRequest {
	enum class EHWGamePlatform Platform; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FString> PlatformIds; // 0x08(0x10)
	struct FString Secret; // 0x18(0x10)
};

// ScriptStruct Hardwired.HWFetchPlatformIdFromIdentityResponse
// Size: 0x50 (Inherited: 0x00)
struct FHWFetchPlatformIdFromIdentityResponse {
	struct TMap<struct FString, struct FString> PlatformIdByPlayerId; // 0x00(0x50)
};

// ScriptStruct Hardwired.HWFetchPlatformIdFromIdentityRequest
// Size: 0x28 (Inherited: 0x00)
struct FHWFetchPlatformIdFromIdentityRequest {
	enum class EHWGamePlatform Platform; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FString> PlayerIds; // 0x08(0x10)
	struct FString Secret; // 0x18(0x10)
};

// ScriptStruct Hardwired.HWFactionData
// Size: 0x18 (Inherited: 0x00)
struct FHWFactionData {
	enum class EHWFaction Faction; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<enum class EHWVendor> Vendors; // 0x08(0x10)
};

// ScriptStruct Hardwired.HWFactionChangeRequest
// Size: 0x18 (Inherited: 0x00)
struct FHWFactionChangeRequest {
	enum class EHWFaction NewFaction; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString SessionId; // 0x08(0x10)
};

// ScriptStruct Hardwired.HWExitMatchmakingRequest
// Size: 0x10 (Inherited: 0x00)
struct FHWExitMatchmakingRequest {
	struct FString SessionId; // 0x00(0x10)
};

// ScriptStruct Hardwired.HWEnums
// Size: 0x01 (Inherited: 0x00)
struct FHWEnums {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Hardwired.HWEnterMatchmakingRequest
// Size: 0x68 (Inherited: 0x00)
struct FHWEnterMatchmakingRequest {
	struct TMap<enum class EHWServerLocation, int32_t> PingByServerLocation; // 0x00(0x50)
	enum class EHWServerLocation PreferredLocation; // 0x50(0x01)
	bool IsLocationLocked; // 0x51(0x01)
	bool IsTutorial; // 0x52(0x01)
	char pad_53[0x5]; // 0x53(0x05)
	struct FString SessionId; // 0x58(0x10)
};

// ScriptStruct Hardwired.HWEnterDevMatchmakingRequest
// Size: 0x28 (Inherited: 0x00)
struct FHWEnterDevMatchmakingRequest {
	struct FString Key; // 0x00(0x10)
	int32_t NumPlayer; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString SessionId; // 0x18(0x10)
};

// ScriptStruct Hardwired.HWDropRarityOddsData
// Size: 0x18 (Inherited: 0x00)
struct FHWDropRarityOddsData {
	int32_t ID; // 0x00(0x04)
	enum class EHWRewardType RewardType; // 0x04(0x01)
	enum class EHWRarity Rarity; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	struct TArray<float> OddsPerLevel; // 0x08(0x10)
};

// ScriptStruct Hardwired.HWDropChanceData
// Size: 0x14 (Inherited: 0x00)
struct FHWDropChanceData {
	enum class EHWRewardType Reward; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Base; // 0x04(0x04)
	float Increase; // 0x08(0x04)
	float FirstGame; // 0x0c(0x04)
	float FirstGameIncrease; // 0x10(0x04)
};

// ScriptStruct Hardwired.HWDroneData
// Size: 0x78 (Inherited: 0x00)
struct FHWDroneData {
	struct FName ID; // 0x00(0x08)
	struct FString BpClass; // 0x08(0x10)
	int32_t MovementSpeed; // 0x18(0x04)
	int32_t SpeedForward; // 0x1c(0x04)
	int32_t SpeedUp; // 0x20(0x04)
	int32_t SpeedDown; // 0x24(0x04)
	float Hp; // 0x28(0x04)
	float HpRegenerationRate; // 0x2c(0x04)
	float DamageMultiplierRegular; // 0x30(0x04)
	float DamageMultiplierElectric; // 0x34(0x04)
	struct FString PrimaryAbilityClass; // 0x38(0x10)
	enum class EHWDroneAbilityType PrimaryAbilityType; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float PrimaryAbilityCapacity; // 0x4c(0x04)
	float PrimaryAbilityRechargeTime; // 0x50(0x04)
	float PrimaryAbilityActivationTime; // 0x54(0x04)
	struct FString SecondaryAbilityClass; // 0x58(0x10)
	enum class EHWDroneAbilityType SecondaryAbilityType; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float SecondaryAbilityCapacity; // 0x6c(0x04)
	float SecondaryAbilityRechargeTime; // 0x70(0x04)
	float SecondaryAbilityActivationTime; // 0x74(0x04)
};

// ScriptStruct Hardwired.HWDroneAbilityData
// Size: 0x30 (Inherited: 0x00)
struct FHWDroneAbilityData {
	struct FName ID; // 0x00(0x08)
	struct FString AbilityClass; // 0x08(0x10)
	enum class EHWDroneAbilityType AbilityType; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float AbilityCapacity; // 0x1c(0x04)
	float AbilityActivationTime; // 0x20(0x04)
	float AbilityRechargeTime; // 0x24(0x04)
	bool Active; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct Hardwired.HWDismantleItemRequest
// Size: 0x28 (Inherited: 0x00)
struct FHWDismantleItemRequest {
	struct FString ItemId; // 0x00(0x10)
	enum class EHWInventoryItemType Type; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString SessionId; // 0x18(0x10)
};

// ScriptStruct Hardwired.HWDevUpgradeBlueprintRarityRequest
// Size: 0x28 (Inherited: 0x00)
struct FHWDevUpgradeBlueprintRarityRequest {
	struct FString BlueprintItemId; // 0x00(0x10)
	enum class EHWRarity TargetRarity; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString SessionId; // 0x18(0x10)
};

// ScriptStruct Hardwired.HWDevUpdatePlayerRequest
// Size: 0x20 (Inherited: 0x00)
struct FHWDevUpdatePlayerRequest {
	struct FString ProfileDataJson; // 0x00(0x10)
	struct FString SessionId; // 0x10(0x10)
};

// ScriptStruct Hardwired.HWDevSetPerfectMarkRequest
// Size: 0x18 (Inherited: 0x00)
struct FHWDevSetPerfectMarkRequest {
	int32_t SecondsFromNow; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString SessionId; // 0x08(0x10)
};

// ScriptStruct Hardwired.HWDevAddWeaponRequest
// Size: 0x20 (Inherited: 0x00)
struct FHWDevAddWeaponRequest {
	struct FString WeaponID; // 0x00(0x10)
	struct FString SessionId; // 0x10(0x10)
};

// ScriptStruct Hardwired.HWDevAddWeaponPartRequest
// Size: 0x48 (Inherited: 0x00)
struct FHWDevAddWeaponPartRequest {
	struct FString WeaponPartId; // 0x00(0x10)
	struct FString CosmeticId; // 0x10(0x10)
	struct FString SetId; // 0x20(0x10)
	enum class EHWRarity Rarity; // 0x30(0x01)
	enum class EHWInventoryItemType ItemType; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct FString SessionId; // 0x38(0x10)
};

// ScriptStruct Hardwired.HWDevAddWeaponFamiliarityRequest
// Size: 0x28 (Inherited: 0x00)
struct FHWDevAddWeaponFamiliarityRequest {
	struct FString ID; // 0x00(0x10)
	int32_t Amount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString SessionId; // 0x18(0x10)
};

// ScriptStruct Hardwired.HWDevAddWeaponCodeRequest
// Size: 0x30 (Inherited: 0x00)
struct FHWDevAddWeaponCodeRequest {
	struct FString WeaponID; // 0x00(0x10)
	enum class EHWRarity Rarity; // 0x10(0x01)
	enum class EHWCraftingParameterGroup ParameterGroup; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	int32_t UpgradePoints; // 0x14(0x04)
	float RollValue; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString SessionId; // 0x20(0x10)
};

// ScriptStruct Hardwired.HWDevAddRarityPointsRequest
// Size: 0x18 (Inherited: 0x00)
struct FHWDevAddRarityPointsRequest {
	int32_t Amount; // 0x00(0x04)
	enum class EHWRarity Rarity; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FString SessionId; // 0x08(0x10)
};

// ScriptStruct Hardwired.HWDevAddProgressionRequest
// Size: 0x18 (Inherited: 0x00)
struct FHWDevAddProgressionRequest {
	int32_t Amount; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString SessionId; // 0x08(0x10)
};

// ScriptStruct Hardwired.HWDevAddMissionProgressionRequest
// Size: 0x28 (Inherited: 0x00)
struct FHWDevAddMissionProgressionRequest {
	struct FString MissionId; // 0x00(0x10)
	int32_t Amount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString SessionId; // 0x18(0x10)
};

// ScriptStruct Hardwired.HWDevAddHardCurrencyRequest
// Size: 0x18 (Inherited: 0x00)
struct FHWDevAddHardCurrencyRequest {
	int32_t Amount; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString SessionId; // 0x08(0x10)
};

// ScriptStruct Hardwired.HWDevAddCurrencyRequest
// Size: 0x18 (Inherited: 0x00)
struct FHWDevAddCurrencyRequest {
	int32_t Amount; // 0x00(0x04)
	enum class EHWCurrencyType Currency; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FString SessionId; // 0x08(0x10)
};

// ScriptStruct Hardwired.HWDevAddBoxRewardRequest
// Size: 0x28 (Inherited: 0x00)
struct FHWDevAddBoxRewardRequest {
	struct TArray<struct FString> BoxIds; // 0x00(0x10)
	enum class EHWRewardSource Source; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString SessionId; // 0x18(0x10)
};

// ScriptStruct Hardwired.HWDeleteLoadoutRequest
// Size: 0x20 (Inherited: 0x00)
struct FHWDeleteLoadoutRequest {
	struct FString Name; // 0x00(0x10)
	struct FString SessionId; // 0x10(0x10)
};

// ScriptStruct Hardwired.HWDataType
// Size: 0x01 (Inherited: 0x00)
struct FHWDataType {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Hardwired.HWCreateSupportRequest
// Size: 0x68 (Inherited: 0x00)
struct FHWCreateSupportRequest {
	enum class EHWSupportRequestType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Email; // 0x08(0x10)
	struct FString Subject; // 0x18(0x10)
	struct FString Description; // 0x28(0x10)
	struct FString MatchID; // 0x38(0x10)
	struct FString ReportedPlayerId; // 0x48(0x10)
	struct FString SessionId; // 0x58(0x10)
};

// ScriptStruct Hardwired.HWCreateMatchTeamResponse
// Size: 0x30 (Inherited: 0x00)
struct FHWCreateMatchTeamResponse {
	struct FString MatchTeam1Id; // 0x00(0x10)
	struct FString MatchTeam2Id; // 0x10(0x10)
	struct FString MatchTeam3Id; // 0x20(0x10)
};

// ScriptStruct Hardwired.HWCreateMatchTeamRequest
// Size: 0x10 (Inherited: 0x00)
struct FHWCreateMatchTeamRequest {
	struct FString Secret; // 0x00(0x10)
};

// ScriptStruct Hardwired.HWCreateMatchRequest
// Size: 0x10 (Inherited: 0x00)
struct FHWCreateMatchRequest {
	struct FString Secret; // 0x00(0x10)
};

// ScriptStruct Hardwired.HWCraftingParameterData
// Size: 0x1c (Inherited: 0x00)
struct FHWCraftingParameterData {
	enum class EHWCraftingParameter Parameter; // 0x00(0x01)
	enum class EHWCraftingItemType ItemType; // 0x01(0x01)
	bool Visible; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	int32_t UpgradePointsRequired; // 0x04(0x04)
	float UpgradeStep; // 0x08(0x04)
	float FamiliarityStep; // 0x0c(0x04)
	bool IsInteger; // 0x10(0x01)
	enum class EHWCraftingParameterGroup ParameterGroup; // 0x11(0x01)
	enum class EHWWeaponPartType RootPartInUI; // 0x12(0x01)
	bool IsAbstractInUI; // 0x13(0x01)
	float MinValueInUI; // 0x14(0x04)
	float MaxValueInUI; // 0x18(0x04)
};

// ScriptStruct Hardwired.HWCraftItemRequest
// Size: 0x20 (Inherited: 0x00)
struct FHWCraftItemRequest {
	struct TArray<struct FString> BlueprintIds; // 0x00(0x10)
	struct FString SessionId; // 0x10(0x10)
};

// ScriptStruct Hardwired.HWContractData
// Size: 0x68 (Inherited: 0x00)
struct FHWContractData {
	struct FString ID; // 0x00(0x10)
	enum class EHWRarity Rarity; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t Stage; // 0x14(0x04)
	int32_t DurationHours; // 0x18(0x04)
	int32_t NumMissions; // 0x1c(0x04)
	float XpMultiplier; // 0x20(0x04)
	float XpMultiplierAddPerScore; // 0x24(0x04)
	struct TArray<int32_t> Targets; // 0x28(0x10)
	struct TArray<struct FString> RewardsA; // 0x38(0x10)
	struct TArray<struct FString> RewardsB; // 0x48(0x10)
	struct TArray<struct FString> RewardsC; // 0x58(0x10)
};

// ScriptStruct Hardwired.HWConfigModelBase
// Size: 0x01 (Inherited: 0x00)
struct FHWConfigModelBase {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Hardwired.HWConfig
// Size: 0x50 (Inherited: 0x00)
struct FHWConfig {
	struct FString Key; // 0x00(0x10)
	struct FString Section; // 0x10(0x10)
	struct TArray<bool> BooleanValues; // 0x20(0x10)
	struct TArray<float> FloatValues; // 0x30(0x10)
	struct TArray<struct FString> StringValues; // 0x40(0x10)
};

// ScriptStruct Hardwired.HWCompleteTutorialRequest
// Size: 0x20 (Inherited: 0x00)
struct FHWCompleteTutorialRequest {
	struct FString TutorialId; // 0x00(0x10)
	struct FString SessionId; // 0x10(0x10)
};

// ScriptStruct Hardwired.HWClientAssetRules
// Size: 0x01 (Inherited: 0x00)
struct FHWClientAssetRules {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Hardwired.HWClaimBonusCodeRequest
// Size: 0x20 (Inherited: 0x00)
struct FHWClaimBonusCodeRequest {
	struct FString BonusCode; // 0x00(0x10)
	struct FString SessionId; // 0x10(0x10)
};

// ScriptStruct Hardwired.HWCharacterData
// Size: 0x38 (Inherited: 0x00)
struct FHWCharacterData {
	struct FName ID; // 0x00(0x08)
	struct FName FaceId; // 0x08(0x08)
	enum class EHWCharacterBodyType BodyType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString SkinMaterialFolder; // 0x18(0x10)
	struct FString SkinMaterialName; // 0x28(0x10)
};

// ScriptStruct Hardwired.HWChangeWeaponNameRequest
// Size: 0x30 (Inherited: 0x00)
struct FHWChangeWeaponNameRequest {
	struct FString ReceiverId; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct FString SessionId; // 0x20(0x10)
};

// ScriptStruct Hardwired.HWChangeRarityUpgradeMissionRequest
// Size: 0x38 (Inherited: 0x00)
struct FHWChangeRarityUpgradeMissionRequest {
	int32_t SlotIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString NewBlueprintId; // 0x08(0x10)
	struct FString OldBlueprintId; // 0x18(0x10)
	struct FString SessionId; // 0x28(0x10)
};

// ScriptStruct Hardwired.HWChangePasswordRequest
// Size: 0x30 (Inherited: 0x00)
struct FHWChangePasswordRequest {
	struct FString Email; // 0x00(0x10)
	struct FString Token; // 0x10(0x10)
	struct FString NewPassword; // 0x20(0x10)
};

// ScriptStruct Hardwired.HWChangeDisplayNameRequest
// Size: 0x20 (Inherited: 0x00)
struct FHWChangeDisplayNameRequest {
	struct FString NewDisplayName; // 0x00(0x10)
	struct FString SessionId; // 0x10(0x10)
};

// ScriptStruct Hardwired.HWBuyShopItemRequest
// Size: 0x40 (Inherited: 0x00)
struct FHWBuyShopItemRequest {
	struct FString CampaignId; // 0x00(0x10)
	struct FString SubsectionId; // 0x10(0x10)
	struct FString ShopItemId; // 0x20(0x10)
	struct FString SessionId; // 0x30(0x10)
};

// ScriptStruct Hardwired.HWBoosterData
// Size: 0x08 (Inherited: 0x00)
struct FHWBoosterData {
	int32_t Tier; // 0x00(0x04)
	float Multiplier; // 0x04(0x04)
};

// ScriptStruct Hardwired.HWBetaProgress
// Size: 0x01 (Inherited: 0x00)
struct FHWBetaProgress {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Hardwired.HWBPCodesItemDrops
// Size: 0x20 (Inherited: 0x00)
struct FHWBPCodesItemDrops {
	struct FString ItemId; // 0x00(0x10)
	float DropRatio; // 0x10(0x04)
	float DropChance; // 0x14(0x04)
	enum class EHWInventoryItemType Type; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Hardwired.HWArmorSetData
// Size: 0x78 (Inherited: 0x00)
struct FHWArmorSetData {
	struct FName ID; // 0x00(0x08)
	struct FName BaseId; // 0x08(0x08)
	bool IsDefault; // 0x10(0x01)
	bool IsExcludedFromRewardPool; // 0x11(0x01)
	enum class EHWVendor Vendor; // 0x12(0x01)
	char pad_13[0x1]; // 0x13(0x01)
	struct FName ArmorHead; // 0x14(0x08)
	struct FName ArmorBody; // 0x1c(0x08)
	struct FName ArmorChest; // 0x24(0x08)
	struct FName ArmorLegs; // 0x2c(0x08)
	struct FName ArmorGloves; // 0x34(0x08)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString Sound; // 0x40(0x10)
	int32_t HelmetType; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FString SkinDataTable; // 0x58(0x10)
	struct FName SkinName; // 0x68(0x08)
	bool IsHiddenWhenLocked; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct Hardwired.HWArmorSetBaseData
// Size: 0x28 (Inherited: 0x00)
struct FHWArmorSetBaseData {
	struct FName ID; // 0x00(0x08)
	enum class EHWArmorSetClass ArmorSetClass; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct FString> ItemSlots; // 0x10(0x10)
	int32_t ArmorFeatureSlots; // 0x20(0x04)
	int32_t ArmorHP; // 0x24(0x04)
};

// ScriptStruct Hardwired.HWArmorFeatureData
// Size: 0x58 (Inherited: 0x00)
struct FHWArmorFeatureData {
	struct FName ID; // 0x00(0x08)
	enum class EHWArmorFeatureType Type; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString KeyName; // 0x10(0x10)
	struct FString KeyDesc; // 0x20(0x10)
	struct FString DisplayName; // 0x30(0x10)
	struct FString Description; // 0x40(0x10)
	bool Electronic; // 0x50(0x01)
	bool AutoActivate; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
};

// ScriptStruct Hardwired.HWArmorData
// Size: 0x68 (Inherited: 0x00)
struct FHWArmorData {
	struct FName ID; // 0x00(0x08)
	struct FString MeshFolder; // 0x08(0x10)
	struct FString Mesh; // 0x18(0x10)
	struct FString Mesh1P; // 0x28(0x10)
	enum class EHWCharacterBodyType BodyType; // 0x38(0x01)
	enum class EHWArmorType Type; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct TArray<struct FName> MaterialSlots; // 0x40(0x10)
	struct TArray<struct FString> Materials; // 0x50(0x10)
	bool IsHiddenWhenLocked; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct Hardwired.HWAnnotations
// Size: 0x01 (Inherited: 0x00)
struct FHWAnnotations {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Hardwired.HWAnalyticsWeaponParameters
// Size: 0x5b0 (Inherited: 0x00)
struct FHWAnalyticsWeaponParameters {
	struct FHWOptionalString Primary_ReceiverId; // 0x00(0x18)
	struct FHWOptionalString Primary_WeaponHash; // 0x18(0x18)
	struct FHWOptionalString Primary_Receiver; // 0x30(0x18)
	struct FHWOptionalString Primary_Grip; // 0x48(0x18)
	struct FHWOptionalString Primary_Stock; // 0x60(0x18)
	struct FHWOptionalString Primary_Barrel; // 0x78(0x18)
	struct FHWOptionalString Primary_BarrelAttachment; // 0x90(0x18)
	struct FHWOptionalString Primary_Scope; // 0xa8(0x18)
	struct FHWOptionalString Primary_MagWell; // 0xc0(0x18)
	struct FHWOptionalString Primary_Mag; // 0xd8(0x18)
	struct FHWOptionalString Primary_Handguard; // 0xf0(0x18)
	struct FHWOptionalString Primary_UnderBarrel; // 0x108(0x18)
	struct FHWOptionalString Primary_ChargingHandle; // 0x120(0x18)
	struct FHWOptionalString Primary_ExtraPieces; // 0x138(0x18)
	struct FHWOptionalString Primary_Cosmetics; // 0x150(0x18)
	struct FHWOptionalString Primary_IronsightFront; // 0x168(0x18)
	struct FHWOptionalString Primary_IronsightBack; // 0x180(0x18)
	struct FHWOptionalString Primary_Skin; // 0x198(0x18)
	struct FHWOptionalString Primary_Charm; // 0x1b0(0x18)
	struct FHWOptionalFloat Primary_BaseFireRate; // 0x1c8(0x08)
	struct FHWOptionalFloat Primary_ArmorDamageHead; // 0x1d0(0x08)
	struct FHWOptionalFloat Primary_ArmorDamageTorso; // 0x1d8(0x08)
	struct FHWOptionalFloat Primary_ArmorDamageLegs; // 0x1e0(0x08)
	struct FHWOptionalFloat Primary_BodyDamageTorso; // 0x1e8(0x08)
	struct FHWOptionalFloat Primary_BodyDamageLegs; // 0x1f0(0x08)
	struct FHWOptionalFloat Primary_ProjectileOptimalRange; // 0x1f8(0x08)
	struct FHWOptionalFloat Primary_ProjectileMaxRange; // 0x200(0x08)
	struct FHWOptionalFloat Primary_HipfireSpread; // 0x208(0x08)
	struct FHWOptionalFloat Primary_PelletSpread; // 0x210(0x08)
	struct FHWOptionalInt Primary_MagCapacity; // 0x218(0x08)
	struct FHWOptionalInt Primary_TotalAmmoByDefault; // 0x220(0x08)
	struct FHWOptionalFloat Primary_ReloadTime; // 0x228(0x08)
	struct FHWOptionalFloat Primary_EquipTime; // 0x230(0x08)
	struct FHWOptionalFloat Primary_AimTime; // 0x238(0x08)
	struct FHWOptionalFloat Primary_HipStability; // 0x240(0x08)
	struct FHWOptionalFloat Primary_AimStability; // 0x248(0x08)
	struct FHWOptionalFloat Primary_fireSoundRange; // 0x250(0x08)
	struct FHWOptionalFloat Primary_muzzleFlashSize; // 0x258(0x08)
	struct FHWOptionalString Secondary_ReceiverId; // 0x260(0x18)
	struct FHWOptionalString Secondary_WeaponHash; // 0x278(0x18)
	struct FHWOptionalString Secondary_Receiver; // 0x290(0x18)
	struct FHWOptionalString Secondary_Grip; // 0x2a8(0x18)
	struct FHWOptionalString Secondary_Stock; // 0x2c0(0x18)
	struct FHWOptionalString Secondary_Barrel; // 0x2d8(0x18)
	struct FHWOptionalString Secondary_BarrelAttachment; // 0x2f0(0x18)
	struct FHWOptionalString Secondary_Scope; // 0x308(0x18)
	struct FHWOptionalString Secondary_MagWell; // 0x320(0x18)
	struct FHWOptionalString Secondary_Mag; // 0x338(0x18)
	struct FHWOptionalString Secondary_Handguard; // 0x350(0x18)
	struct FHWOptionalString Secondary_UnderBarrel; // 0x368(0x18)
	struct FHWOptionalString Secondary_ChargingHandle; // 0x380(0x18)
	struct FHWOptionalString Secondary_ExtraPieces; // 0x398(0x18)
	struct FHWOptionalString Secondary_Cosmetics; // 0x3b0(0x18)
	struct FHWOptionalString Secondary_IronsightFront; // 0x3c8(0x18)
	struct FHWOptionalString Secondary_IronsightBack; // 0x3e0(0x18)
	struct FHWOptionalString Secondary_Skin; // 0x3f8(0x18)
	struct FHWOptionalString Secondary_Charm; // 0x410(0x18)
	struct FHWOptionalFloat Secondary_BaseFireRate; // 0x428(0x08)
	struct FHWOptionalFloat Secondary_ArmorDamageHead; // 0x430(0x08)
	struct FHWOptionalFloat Secondary_ArmorDamageTorso; // 0x438(0x08)
	struct FHWOptionalFloat Secondary_ArmorDamageLegs; // 0x440(0x08)
	struct FHWOptionalFloat Secondary_BodyDamageTorso; // 0x448(0x08)
	struct FHWOptionalFloat Secondary_BodyDamageLegs; // 0x450(0x08)
	struct FHWOptionalFloat Secondary_ProjectileOptimalRange; // 0x458(0x08)
	struct FHWOptionalFloat Secondary_ProjectileMaxRange; // 0x460(0x08)
	struct FHWOptionalFloat Secondary_HipfireSpread; // 0x468(0x08)
	struct FHWOptionalFloat Secondary_PelletSpread; // 0x470(0x08)
	struct FHWOptionalInt Secondary_MagCapacity; // 0x478(0x08)
	struct FHWOptionalInt Secondary_TotalAmmoByDefault; // 0x480(0x08)
	struct FHWOptionalFloat Secondary_ReloadTime; // 0x488(0x08)
	struct FHWOptionalFloat Secondary_EquipTime; // 0x490(0x08)
	struct FHWOptionalFloat Secondary_AimTime; // 0x498(0x08)
	struct FHWOptionalFloat Secondary_HipStability; // 0x4a0(0x08)
	struct FHWOptionalFloat Secondary_AimStability; // 0x4a8(0x08)
	struct FHWOptionalFloat Secondary_fireSoundRange; // 0x4b0(0x08)
	struct FHWOptionalFloat Secondary_muzzleFlashSize; // 0x4b8(0x08)
	struct FHWOptionalString SourceLoc; // 0x4c0(0x18)
	struct FHWOptionalInt SourceTeam; // 0x4d8(0x08)
	struct FHWOptionalString MatchID; // 0x4e0(0x18)
	struct FHWOptionalString FlowName; // 0x4f8(0x18)
	struct FHWOptionalInt Round; // 0x510(0x08)
	struct FHWOptionalString Map; // 0x518(0x18)
	struct FString Ts; // 0x530(0x10)
	struct FHWOptionalString SourcePlayerId; // 0x540(0x18)
	struct FHWOptionalInt SessionNumber; // 0x558(0x08)
	struct FHWOptionalString BuildId; // 0x560(0x18)
	struct FHWOptionalString Platform; // 0x578(0x18)
	struct FHWOptionalString Country; // 0x590(0x18)
	struct FHWOptionalInt PlayerLevel; // 0x5a8(0x08)
};

// ScriptStruct Hardwired.HWOptional
// Size: 0x01 (Inherited: 0x00)
struct FHWOptional {
	bool HasValue; // 0x00(0x01)
};

// ScriptStruct Hardwired.HWOptionalInt
// Size: 0x08 (Inherited: 0x01)
struct FHWOptionalInt : FHWOptional {
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Value; // 0x04(0x04)
};

// ScriptStruct Hardwired.HWOptionalString
// Size: 0x18 (Inherited: 0x01)
struct FHWOptionalString : FHWOptional {
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Value; // 0x08(0x10)
};

// ScriptStruct Hardwired.HWOptionalFloat
// Size: 0x08 (Inherited: 0x01)
struct FHWOptionalFloat : FHWOptional {
	char pad_1[0x3]; // 0x01(0x03)
	float Value; // 0x04(0x04)
};

// ScriptStruct Hardwired.HWAnalyticsUnfinishedMapLoad
// Size: 0x118 (Inherited: 0x00)
struct FHWAnalyticsUnfinishedMapLoad {
	struct FHWOptionalString MatchID; // 0x00(0x18)
	struct FHWOptionalString MapName; // 0x18(0x18)
	struct FHWOptionalString LoadStarted; // 0x30(0x18)
	struct FHWOptionalString LastLoadedLevel; // 0x48(0x18)
	struct FHWOptionalFloat LoadSeconds; // 0x60(0x08)
	struct FHWOptionalFloat Progress; // 0x68(0x08)
	struct FHWOptionalFloat MemTotalPhysical; // 0x70(0x08)
	struct FHWOptionalFloat MemAvailablePhysical; // 0x78(0x08)
	struct FHWOptionalFloat MemUsedPhysical; // 0x80(0x08)
	struct FHWOptionalFloat MemUsedVirtual; // 0x88(0x08)
	struct FHWOptionalBool MemOOMDetected; // 0x90(0x02)
	char pad_92[0x6]; // 0x92(0x06)
	struct FString Ts; // 0x98(0x10)
	struct FHWOptionalString SourcePlayerId; // 0xa8(0x18)
	struct FHWOptionalInt SessionNumber; // 0xc0(0x08)
	struct FHWOptionalString BuildId; // 0xc8(0x18)
	struct FHWOptionalString Platform; // 0xe0(0x18)
	struct FHWOptionalString Country; // 0xf8(0x18)
	struct FHWOptionalInt PlayerLevel; // 0x110(0x08)
};

// ScriptStruct Hardwired.HWOptionalBool
// Size: 0x02 (Inherited: 0x01)
struct FHWOptionalBool : FHWOptional {
	bool Value; // 0x01(0x01)
};

// ScriptStruct Hardwired.HWAnalyticsTutorial
// Size: 0xb0 (Inherited: 0x00)
struct FHWAnalyticsTutorial {
	struct FHWOptionalString Text; // 0x00(0x18)
	struct FHWOptionalString Map; // 0x18(0x18)
	struct FString Ts; // 0x30(0x10)
	struct FHWOptionalString SourcePlayerId; // 0x40(0x18)
	struct FHWOptionalInt SessionNumber; // 0x58(0x08)
	struct FHWOptionalString BuildId; // 0x60(0x18)
	struct FHWOptionalString Platform; // 0x78(0x18)
	struct FHWOptionalString Country; // 0x90(0x18)
	struct FHWOptionalInt PlayerLevel; // 0xa8(0x08)
};

// ScriptStruct Hardwired.HWAnalyticsStopBleeding
// Size: 0xf0 (Inherited: 0x00)
struct FHWAnalyticsStopBleeding {
	struct FHWOptionalString SourceLoc; // 0x00(0x18)
	struct FHWOptionalInt SourceTeam; // 0x18(0x08)
	struct FHWOptionalString MatchID; // 0x20(0x18)
	struct FHWOptionalString FlowName; // 0x38(0x18)
	struct FHWOptionalInt Round; // 0x50(0x08)
	struct FHWOptionalString Map; // 0x58(0x18)
	struct FString Ts; // 0x70(0x10)
	struct FHWOptionalString SourcePlayerId; // 0x80(0x18)
	struct FHWOptionalInt SessionNumber; // 0x98(0x08)
	struct FHWOptionalString BuildId; // 0xa0(0x18)
	struct FHWOptionalString Platform; // 0xb8(0x18)
	struct FHWOptionalString Country; // 0xd0(0x18)
	struct FHWOptionalInt PlayerLevel; // 0xe8(0x08)
};

// ScriptStruct Hardwired.HWAnalyticsSoftBarricade
// Size: 0x138 (Inherited: 0x00)
struct FHWAnalyticsSoftBarricade {
	struct FHWOptionalInt Team; // 0x00(0x08)
	struct FHWOptionalString Action; // 0x08(0x18)
	struct FHWOptionalString Actor; // 0x20(0x18)
	struct FHWOptionalString PlayerLoc; // 0x38(0x18)
	struct FHWOptionalString ActorLoc; // 0x50(0x18)
	struct FHWOptionalString MatchID; // 0x68(0x18)
	struct FHWOptionalString FlowName; // 0x80(0x18)
	struct FHWOptionalInt Round; // 0x98(0x08)
	struct FHWOptionalString Map; // 0xa0(0x18)
	struct FString Ts; // 0xb8(0x10)
	struct FHWOptionalString SourcePlayerId; // 0xc8(0x18)
	struct FHWOptionalInt SessionNumber; // 0xe0(0x08)
	struct FHWOptionalString BuildId; // 0xe8(0x18)
	struct FHWOptionalString Platform; // 0x100(0x18)
	struct FHWOptionalString Country; // 0x118(0x18)
	struct FHWOptionalInt PlayerLevel; // 0x130(0x08)
};

// ScriptStruct Hardwired.HWAnalyticsSessionStart
// Size: 0xd0 (Inherited: 0x00)
struct FHWAnalyticsSessionStart {
	struct FHWOptionalString MatchID; // 0x00(0x18)
	struct FHWOptionalString FlowName; // 0x18(0x18)
	struct FHWOptionalInt Round; // 0x30(0x08)
	struct FHWOptionalString Map; // 0x38(0x18)
	struct FString Ts; // 0x50(0x10)
	struct FHWOptionalString SourcePlayerId; // 0x60(0x18)
	struct FHWOptionalInt SessionNumber; // 0x78(0x08)
	struct FHWOptionalString BuildId; // 0x80(0x18)
	struct FHWOptionalString Platform; // 0x98(0x18)
	struct FHWOptionalString Country; // 0xb0(0x18)
	struct FHWOptionalInt PlayerLevel; // 0xc8(0x08)
};

// ScriptStruct Hardwired.HWAnalyticsSessionEnd
// Size: 0xf0 (Inherited: 0x00)
struct FHWAnalyticsSessionEnd {
	struct FHWOptionalString EndReason; // 0x00(0x18)
	struct FHWOptionalInt Seconds; // 0x18(0x08)
	struct FHWOptionalString MatchID; // 0x20(0x18)
	struct FHWOptionalString FlowName; // 0x38(0x18)
	struct FHWOptionalInt Round; // 0x50(0x08)
	struct FHWOptionalString Map; // 0x58(0x18)
	struct FString Ts; // 0x70(0x10)
	struct FHWOptionalString SourcePlayerId; // 0x80(0x18)
	struct FHWOptionalInt SessionNumber; // 0x98(0x08)
	struct FHWOptionalString BuildId; // 0xa0(0x18)
	struct FHWOptionalString Platform; // 0xb8(0x18)
	struct FHWOptionalString Country; // 0xd0(0x18)
	struct FHWOptionalInt PlayerLevel; // 0xe8(0x08)
};

// ScriptStruct Hardwired.HWAnalyticsServerHeartbeat
// Size: 0x150 (Inherited: 0x00)
struct FHWAnalyticsServerHeartbeat {
	struct FHWOptionalString Variation; // 0x00(0x18)
	struct FHWOptionalInt NumTicksPassed; // 0x18(0x08)
	struct FHWOptionalInt NumSlowTicks; // 0x20(0x08)
	struct FHWOptionalInt NumVerySlowTicks; // 0x28(0x08)
	struct FHWOptionalFloat AverageFps; // 0x30(0x08)
	struct FHWOptionalInt NumActivePlayers; // 0x38(0x08)
	struct FHWOptionalInt MemoryTotalMegabytes; // 0x40(0x08)
	struct FHWOptionalInt MemoryAvailableMegabytes; // 0x48(0x08)
	struct FHWOptionalString Gpu; // 0x50(0x18)
	struct FHWOptionalString Cpu; // 0x68(0x18)
	struct FHWOptionalString MatchID; // 0x80(0x18)
	struct FHWOptionalString FlowName; // 0x98(0x18)
	struct FHWOptionalInt Round; // 0xb0(0x08)
	struct FHWOptionalString Map; // 0xb8(0x18)
	struct FString Ts; // 0xd0(0x10)
	struct FHWOptionalString SourcePlayerId; // 0xe0(0x18)
	struct FHWOptionalInt SessionNumber; // 0xf8(0x08)
	struct FHWOptionalString BuildId; // 0x100(0x18)
	struct FHWOptionalString Platform; // 0x118(0x18)
	struct FHWOptionalString Country; // 0x130(0x18)
	struct FHWOptionalInt PlayerLevel; // 0x148(0x08)
};

// ScriptStruct Hardwired.HWAnalyticsRoundStart
// Size: 0xf0 (Inherited: 0x00)
struct FHWAnalyticsRoundStart {
	struct FHWOptionalString TeamWonLastRound; // 0x00(0x18)
	struct FHWOptionalInt TotalPLayersAtStart; // 0x18(0x08)
	struct FHWOptionalString MatchID; // 0x20(0x18)
	struct FHWOptionalString FlowName; // 0x38(0x18)
	struct FHWOptionalInt Round; // 0x50(0x08)
	struct FHWOptionalString Map; // 0x58(0x18)
	struct FString Ts; // 0x70(0x10)
	struct FHWOptionalString SourcePlayerId; // 0x80(0x18)
	struct FHWOptionalInt SessionNumber; // 0x98(0x08)
	struct FHWOptionalString BuildId; // 0xa0(0x18)
	struct FHWOptionalString Platform; // 0xb8(0x18)
	struct FHWOptionalString Country; // 0xd0(0x18)
	struct FHWOptionalInt PlayerLevel; // 0xe8(0x08)
};

// ScriptStruct Hardwired.HWAnalyticsRoundEnd
// Size: 0x768 (Inherited: 0x00)
struct FHWAnalyticsRoundEnd {
	struct FHWOptionalInt Kills; // 0x00(0x08)
	struct FHWOptionalInt Assists; // 0x08(0x08)
	struct FHWOptionalBool RoundWon; // 0x10(0x02)
	char pad_12[0x6]; // 0x12(0x06)
	struct FHWOptionalString Disconnect; // 0x18(0x18)
	struct FHWOptionalBool DiedBeforeRoundEnd; // 0x30(0x02)
	char pad_32[0x6]; // 0x32(0x06)
	struct FHWOptionalString Reason; // 0x38(0x18)
	struct FHWOptionalInt NumMapDraws; // 0x50(0x08)
	struct FHWOptionalInt NumMapClears; // 0x58(0x08)
	struct FHWOptionalString PlayerName; // 0x60(0x18)
	struct FHWOptionalBool WonLastRound; // 0x78(0x02)
	char pad_7A[0x6]; // 0x7a(0x06)
	struct FHWOptionalString Armor; // 0x80(0x18)
	struct FHWOptionalString ArmorFeature1; // 0x98(0x18)
	struct FHWOptionalString ArmorFeature2; // 0xb0(0x18)
	struct FHWOptionalString ArmorFeature3; // 0xc8(0x18)
	struct FHWOptionalString ArmorFeature4; // 0xe0(0x18)
	struct FHWOptionalString Item1; // 0xf8(0x18)
	struct FHWOptionalString Item2; // 0x110(0x18)
	struct FHWOptionalString Item3; // 0x128(0x18)
	struct FHWOptionalInt Item1Count; // 0x140(0x08)
	struct FHWOptionalInt Item2Count; // 0x148(0x08)
	struct FHWOptionalInt Item3Count; // 0x150(0x08)
	struct FHWOptionalString CompanionAbility; // 0x158(0x18)
	struct FHWOptionalBool InParty; // 0x170(0x02)
	char pad_172[0x2]; // 0x172(0x02)
	struct FHWOptionalInt PrimarySirSmithereens; // 0x174(0x08)
	struct FHWOptionalInt PrimaryFullLeadAhead; // 0x17c(0x08)
	struct FHWOptionalInt PrimaryMultitasker; // 0x184(0x08)
	struct FHWOptionalInt PrimaryBellyBarrage; // 0x18c(0x08)
	struct FHWOptionalInt SecondarySirSmithereens; // 0x194(0x08)
	struct FHWOptionalInt SecondaryFullLeadAhead; // 0x19c(0x08)
	struct FHWOptionalInt SecondaryMultitasker; // 0x1a4(0x08)
	struct FHWOptionalInt SecondaryBellyBarrage; // 0x1ac(0x08)
	char pad_1B4[0x4]; // 0x1b4(0x04)
	struct FHWOptionalString Primary_ReceiverId; // 0x1b8(0x18)
	struct FHWOptionalString Primary_WeaponHash; // 0x1d0(0x18)
	struct FHWOptionalString Primary_Receiver; // 0x1e8(0x18)
	struct FHWOptionalString Primary_Grip; // 0x200(0x18)
	struct FHWOptionalString Primary_Stock; // 0x218(0x18)
	struct FHWOptionalString Primary_Barrel; // 0x230(0x18)
	struct FHWOptionalString Primary_BarrelAttachment; // 0x248(0x18)
	struct FHWOptionalString Primary_Scope; // 0x260(0x18)
	struct FHWOptionalString Primary_MagWell; // 0x278(0x18)
	struct FHWOptionalString Primary_Mag; // 0x290(0x18)
	struct FHWOptionalString Primary_Handguard; // 0x2a8(0x18)
	struct FHWOptionalString Primary_UnderBarrel; // 0x2c0(0x18)
	struct FHWOptionalString Primary_ChargingHandle; // 0x2d8(0x18)
	struct FHWOptionalString Primary_ExtraPieces; // 0x2f0(0x18)
	struct FHWOptionalString Primary_Cosmetics; // 0x308(0x18)
	struct FHWOptionalString Primary_IronsightFront; // 0x320(0x18)
	struct FHWOptionalString Primary_IronsightBack; // 0x338(0x18)
	struct FHWOptionalString Primary_Skin; // 0x350(0x18)
	struct FHWOptionalString Primary_Charm; // 0x368(0x18)
	struct FHWOptionalFloat Primary_BaseFireRate; // 0x380(0x08)
	struct FHWOptionalFloat Primary_ArmorDamageHead; // 0x388(0x08)
	struct FHWOptionalFloat Primary_ArmorDamageTorso; // 0x390(0x08)
	struct FHWOptionalFloat Primary_ArmorDamageLegs; // 0x398(0x08)
	struct FHWOptionalFloat Primary_BodyDamageTorso; // 0x3a0(0x08)
	struct FHWOptionalFloat Primary_BodyDamageLegs; // 0x3a8(0x08)
	struct FHWOptionalFloat Primary_ProjectileOptimalRange; // 0x3b0(0x08)
	struct FHWOptionalFloat Primary_ProjectileMaxRange; // 0x3b8(0x08)
	struct FHWOptionalFloat Primary_HipfireSpread; // 0x3c0(0x08)
	struct FHWOptionalFloat Primary_PelletSpread; // 0x3c8(0x08)
	struct FHWOptionalInt Primary_MagCapacity; // 0x3d0(0x08)
	struct FHWOptionalInt Primary_TotalAmmoByDefault; // 0x3d8(0x08)
	struct FHWOptionalFloat Primary_ReloadTime; // 0x3e0(0x08)
	struct FHWOptionalFloat Primary_EquipTime; // 0x3e8(0x08)
	struct FHWOptionalFloat Primary_AimTime; // 0x3f0(0x08)
	struct FHWOptionalFloat Primary_HipStability; // 0x3f8(0x08)
	struct FHWOptionalFloat Primary_AimStability; // 0x400(0x08)
	struct FHWOptionalFloat Primary_fireSoundRange; // 0x408(0x08)
	struct FHWOptionalFloat Primary_muzzleFlashSize; // 0x410(0x08)
	struct FHWOptionalString Secondary_ReceiverId; // 0x418(0x18)
	struct FHWOptionalString Secondary_WeaponHash; // 0x430(0x18)
	struct FHWOptionalString Secondary_Receiver; // 0x448(0x18)
	struct FHWOptionalString Secondary_Grip; // 0x460(0x18)
	struct FHWOptionalString Secondary_Stock; // 0x478(0x18)
	struct FHWOptionalString Secondary_Barrel; // 0x490(0x18)
	struct FHWOptionalString Secondary_BarrelAttachment; // 0x4a8(0x18)
	struct FHWOptionalString Secondary_Scope; // 0x4c0(0x18)
	struct FHWOptionalString Secondary_MagWell; // 0x4d8(0x18)
	struct FHWOptionalString Secondary_Mag; // 0x4f0(0x18)
	struct FHWOptionalString Secondary_Handguard; // 0x508(0x18)
	struct FHWOptionalString Secondary_UnderBarrel; // 0x520(0x18)
	struct FHWOptionalString Secondary_ChargingHandle; // 0x538(0x18)
	struct FHWOptionalString Secondary_ExtraPieces; // 0x550(0x18)
	struct FHWOptionalString Secondary_Cosmetics; // 0x568(0x18)
	struct FHWOptionalString Secondary_IronsightFront; // 0x580(0x18)
	struct FHWOptionalString Secondary_IronsightBack; // 0x598(0x18)
	struct FHWOptionalString Secondary_Skin; // 0x5b0(0x18)
	struct FHWOptionalString Secondary_Charm; // 0x5c8(0x18)
	struct FHWOptionalFloat Secondary_BaseFireRate; // 0x5e0(0x08)
	struct FHWOptionalFloat Secondary_ArmorDamageHead; // 0x5e8(0x08)
	struct FHWOptionalFloat Secondary_ArmorDamageTorso; // 0x5f0(0x08)
	struct FHWOptionalFloat Secondary_ArmorDamageLegs; // 0x5f8(0x08)
	struct FHWOptionalFloat Secondary_BodyDamageTorso; // 0x600(0x08)
	struct FHWOptionalFloat Secondary_BodyDamageLegs; // 0x608(0x08)
	struct FHWOptionalFloat Secondary_ProjectileOptimalRange; // 0x610(0x08)
	struct FHWOptionalFloat Secondary_ProjectileMaxRange; // 0x618(0x08)
	struct FHWOptionalFloat Secondary_HipfireSpread; // 0x620(0x08)
	struct FHWOptionalFloat Secondary_PelletSpread; // 0x628(0x08)
	struct FHWOptionalInt Secondary_MagCapacity; // 0x630(0x08)
	struct FHWOptionalInt Secondary_TotalAmmoByDefault; // 0x638(0x08)
	struct FHWOptionalFloat Secondary_ReloadTime; // 0x640(0x08)
	struct FHWOptionalFloat Secondary_EquipTime; // 0x648(0x08)
	struct FHWOptionalFloat Secondary_AimTime; // 0x650(0x08)
	struct FHWOptionalFloat Secondary_HipStability; // 0x658(0x08)
	struct FHWOptionalFloat Secondary_AimStability; // 0x660(0x08)
	struct FHWOptionalFloat Secondary_fireSoundRange; // 0x668(0x08)
	struct FHWOptionalFloat Secondary_muzzleFlashSize; // 0x670(0x08)
	struct FHWOptionalString SourceLoc; // 0x678(0x18)
	struct FHWOptionalInt SourceTeam; // 0x690(0x08)
	struct FHWOptionalString MatchID; // 0x698(0x18)
	struct FHWOptionalString FlowName; // 0x6b0(0x18)
	struct FHWOptionalInt Round; // 0x6c8(0x08)
	struct FHWOptionalString Map; // 0x6d0(0x18)
	struct FString Ts; // 0x6e8(0x10)
	struct FHWOptionalString SourcePlayerId; // 0x6f8(0x18)
	struct FHWOptionalInt SessionNumber; // 0x710(0x08)
	struct FHWOptionalString BuildId; // 0x718(0x18)
	struct FHWOptionalString Platform; // 0x730(0x18)
	struct FHWOptionalString Country; // 0x748(0x18)
	struct FHWOptionalInt PlayerLevel; // 0x760(0x08)
};

// ScriptStruct Hardwired.HWAnalyticsResourceEvent
// Size: 0x118 (Inherited: 0x00)
struct FHWAnalyticsResourceEvent {
	struct FHWOptionalString ResourceId; // 0x00(0x18)
	struct FHWOptionalFloat Amount; // 0x18(0x08)
	struct FHWOptionalString Source; // 0x20(0x18)
	struct FHWOptionalString SourceDetails; // 0x38(0x18)
	struct FHWOptionalString ExtraSourceDetails; // 0x50(0x18)
	struct FHWOptionalInt SourceAmount; // 0x68(0x08)
	struct FHWOptionalString Rarity; // 0x70(0x18)
	struct FHWOptionalBool IsSink; // 0x88(0x02)
	char pad_8A[0x6]; // 0x8a(0x06)
	int64_t Balance; // 0x90(0x08)
	struct FString Ts; // 0x98(0x10)
	struct FHWOptionalString SourcePlayerId; // 0xa8(0x18)
	struct FHWOptionalInt SessionNumber; // 0xc0(0x08)
	struct FHWOptionalString BuildId; // 0xc8(0x18)
	struct FHWOptionalString Platform; // 0xe0(0x18)
	struct FHWOptionalString Country; // 0xf8(0x18)
	struct FHWOptionalInt PlayerLevel; // 0x110(0x08)
};

// ScriptStruct Hardwired.HWAnalyticsPlayerRegister
// Size: 0x98 (Inherited: 0x00)
struct FHWAnalyticsPlayerRegister {
	struct FHWOptionalString Region; // 0x00(0x18)
	struct FString Ts; // 0x18(0x10)
	struct FHWOptionalString SourcePlayerId; // 0x28(0x18)
	struct FHWOptionalInt SessionNumber; // 0x40(0x08)
	struct FHWOptionalString BuildId; // 0x48(0x18)
	struct FHWOptionalString Platform; // 0x60(0x18)
	struct FHWOptionalString Country; // 0x78(0x18)
	struct FHWOptionalInt PlayerLevel; // 0x90(0x08)
};

// ScriptStruct Hardwired.HWAnalyticsPlayerProgression
// Size: 0xc0 (Inherited: 0x00)
struct FHWAnalyticsPlayerProgression {
	struct FHWOptionalString LastMatchId; // 0x00(0x18)
	struct FHWOptionalString SourceOfXpGain; // 0x18(0x18)
	struct FHWOptionalInt XpBalance; // 0x30(0x08)
	struct FHWOptionalInt XpGain; // 0x38(0x08)
	struct FString Ts; // 0x40(0x10)
	struct FHWOptionalString SourcePlayerId; // 0x50(0x18)
	struct FHWOptionalInt SessionNumber; // 0x68(0x08)
	struct FHWOptionalString BuildId; // 0x70(0x18)
	struct FHWOptionalString Platform; // 0x88(0x18)
	struct FHWOptionalString Country; // 0xa0(0x18)
	struct FHWOptionalInt PlayerLevel; // 0xb8(0x08)
};

// ScriptStruct Hardwired.HWAnalyticsPlayerJourney
// Size: 0xb0 (Inherited: 0x00)
struct FHWAnalyticsPlayerJourney {
	struct FHWOptionalString Step; // 0x00(0x18)
	struct FHWOptionalString Note; // 0x18(0x18)
	struct FString Ts; // 0x30(0x10)
	struct FHWOptionalString SourcePlayerId; // 0x40(0x18)
	struct FHWOptionalInt SessionNumber; // 0x58(0x08)
	struct FHWOptionalString BuildId; // 0x60(0x18)
	struct FHWOptionalString Platform; // 0x78(0x18)
	struct FHWOptionalString Country; // 0x90(0x18)
	struct FHWOptionalInt PlayerLevel; // 0xa8(0x08)
};

// ScriptStruct Hardwired.HWAnalyticsPlayerEndReason
// Size: 0x130 (Inherited: 0x00)
struct FHWAnalyticsPlayerEndReason {
	struct FHWOptionalString MatchID; // 0x00(0x18)
	struct FHWOptionalString Reason; // 0x18(0x18)
	struct FHWOptionalString FailureType; // 0x30(0x18)
	struct FHWOptionalString FailureMessage; // 0x48(0x18)
	struct FHWOptionalString MapName; // 0x60(0x18)
	struct FHWOptionalString RoundState; // 0x78(0x18)
	struct FHWOptionalInt RoundNumber; // 0x90(0x08)
	struct FHWOptionalString DebugString; // 0x98(0x18)
	struct FString Ts; // 0xb0(0x10)
	struct FHWOptionalString SourcePlayerId; // 0xc0(0x18)
	struct FHWOptionalInt SessionNumber; // 0xd8(0x08)
	struct FHWOptionalString BuildId; // 0xe0(0x18)
	struct FHWOptionalString Platform; // 0xf8(0x18)
	struct FHWOptionalString Country; // 0x110(0x18)
	struct FHWOptionalInt PlayerLevel; // 0x128(0x08)
};

// ScriptStruct Hardwired.HWAnalyticsPing
// Size: 0x158 (Inherited: 0x00)
struct FHWAnalyticsPing {
	struct FHWOptionalString PingLocation; // 0x00(0x18)
	struct FHWOptionalString Type; // 0x18(0x18)
	struct FHWOptionalString TargetPlayerId; // 0x30(0x18)
	struct FHWOptionalString TargetLoc; // 0x48(0x18)
	struct FHWOptionalInt TargetTeam; // 0x60(0x08)
	struct FHWOptionalString SourceLoc; // 0x68(0x18)
	struct FHWOptionalInt SourceTeam; // 0x80(0x08)
	struct FHWOptionalString MatchID; // 0x88(0x18)
	struct FHWOptionalString FlowName; // 0xa0(0x18)
	struct FHWOptionalInt Round; // 0xb8(0x08)
	struct FHWOptionalString Map; // 0xc0(0x18)
	struct FString Ts; // 0xd8(0x10)
	struct FHWOptionalString SourcePlayerId; // 0xe8(0x18)
	struct FHWOptionalInt SessionNumber; // 0x100(0x08)
	struct FHWOptionalString BuildId; // 0x108(0x18)
	struct FHWOptionalString Platform; // 0x120(0x18)
	struct FHWOptionalString Country; // 0x138(0x18)
	struct FHWOptionalInt PlayerLevel; // 0x150(0x08)
};

// ScriptStruct Hardwired.HWAnalyticsObjProgress
// Size: 0x120 (Inherited: 0x00)
struct FHWAnalyticsObjProgress {
	struct FHWOptionalInt TeamId; // 0x00(0x08)
	struct FHWOptionalString Message; // 0x08(0x18)
	struct FHWOptionalString Note; // 0x20(0x18)
	struct FHWOptionalString Loc; // 0x38(0x18)
	struct FHWOptionalString MatchID; // 0x50(0x18)
	struct FHWOptionalString FlowName; // 0x68(0x18)
	struct FHWOptionalInt Round; // 0x80(0x08)
	struct FHWOptionalString Map; // 0x88(0x18)
	struct FString Ts; // 0xa0(0x10)
	struct FHWOptionalString SourcePlayerId; // 0xb0(0x18)
	struct FHWOptionalInt SessionNumber; // 0xc8(0x08)
	struct FHWOptionalString BuildId; // 0xd0(0x18)
	struct FHWOptionalString Platform; // 0xe8(0x18)
	struct FHWOptionalString Country; // 0x100(0x18)
	struct FHWOptionalInt PlayerLevel; // 0x118(0x08)
};

// ScriptStruct Hardwired.HWAnalyticsMissionRewardReroll
// Size: 0x160 (Inherited: 0x00)
struct FHWAnalyticsMissionRewardReroll {
	struct FHWOptionalString MissionId; // 0x00(0x18)
	struct FHWOptionalString CorporationRoll; // 0x18(0x18)
	struct FHWOptionalString MissionCondition; // 0x30(0x18)
	struct FHWOptionalString ExactCondition; // 0x48(0x18)
	struct FHWOptionalString OldRewardType1; // 0x60(0x18)
	struct FHWOptionalString OldRewardType2; // 0x78(0x18)
	struct FHWOptionalString NewRewardType1; // 0x90(0x18)
	struct FHWOptionalString NewRewardType2; // 0xa8(0x18)
	struct FHWOptionalString CurrencyUsed; // 0xc0(0x18)
	struct FHWOptionalInt CurrencyAmount; // 0xd8(0x08)
	struct FString Ts; // 0xe0(0x10)
	struct FHWOptionalString SourcePlayerId; // 0xf0(0x18)
	struct FHWOptionalInt SessionNumber; // 0x108(0x08)
	struct FHWOptionalString BuildId; // 0x110(0x18)
	struct FHWOptionalString Platform; // 0x128(0x18)
	struct FHWOptionalString Country; // 0x140(0x18)
	struct FHWOptionalInt PlayerLevel; // 0x158(0x08)
};

// ScriptStruct Hardwired.HWAnalyticsMissionAction
// Size: 0x128 (Inherited: 0x00)
struct FHWAnalyticsMissionAction {
	struct FHWOptionalString MissionId; // 0x00(0x18)
	struct FHWOptionalString Action; // 0x18(0x18)
	struct FHWOptionalString CorporationRoll; // 0x30(0x18)
	struct FHWOptionalString MissionCondition; // 0x48(0x18)
	struct FHWOptionalString ExactCondition; // 0x60(0x18)
	struct FHWOptionalString RewardType1; // 0x78(0x18)
	struct FHWOptionalString RewardType2; // 0x90(0x18)
	struct FString Ts; // 0xa8(0x10)
	struct FHWOptionalString SourcePlayerId; // 0xb8(0x18)
	struct FHWOptionalInt SessionNumber; // 0xd0(0x08)
	struct FHWOptionalString BuildId; // 0xd8(0x18)
	struct FHWOptionalString Platform; // 0xf0(0x18)
	struct FHWOptionalString Country; // 0x108(0x18)
	struct FHWOptionalInt PlayerLevel; // 0x120(0x08)
};

// ScriptStruct Hardwired.HWAnalyticsMatchStart
// Size: 0x118 (Inherited: 0x00)
struct FHWAnalyticsMatchStart {
	struct FHWOptionalInt TeamId; // 0x00(0x08)
	struct FHWOptionalBool InParty; // 0x08(0x02)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FHWOptionalInt MatchmakingTime; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
	struct FHWOptionalString FlowVariation; // 0x18(0x18)
	struct FHWOptionalString Region; // 0x30(0x18)
	struct FHWOptionalString MatchID; // 0x48(0x18)
	struct FHWOptionalString FlowName; // 0x60(0x18)
	struct FHWOptionalInt Round; // 0x78(0x08)
	struct FHWOptionalString Map; // 0x80(0x18)
	struct FString Ts; // 0x98(0x10)
	struct FHWOptionalString SourcePlayerId; // 0xa8(0x18)
	struct FHWOptionalInt SessionNumber; // 0xc0(0x08)
	struct FHWOptionalString BuildId; // 0xc8(0x18)
	struct FHWOptionalString Platform; // 0xe0(0x18)
	struct FHWOptionalString Country; // 0xf8(0x18)
	struct FHWOptionalInt PlayerLevel; // 0x110(0x08)
};

// ScriptStruct Hardwired.HWAnalyticsMatchEnd
// Size: 0x138 (Inherited: 0x00)
struct FHWAnalyticsMatchEnd {
	struct FHWOptionalString MapMission; // 0x00(0x18)
	struct FHWOptionalString MapMissionVariation; // 0x18(0x18)
	struct FHWOptionalInt TotalAuthority; // 0x30(0x08)
	struct FHWOptionalInt TotalCredits; // 0x38(0x08)
	struct FHWOptionalInt TotalKills; // 0x40(0x08)
	struct FHWOptionalInt TotalRoundWins; // 0x48(0x08)
	struct FHWOptionalInt TotalDeaths; // 0x50(0x08)
	struct FHWOptionalInt TotalAssists; // 0x58(0x08)
	struct FHWOptionalBool IsMVP; // 0x60(0x02)
	char pad_62[0x6]; // 0x62(0x06)
	struct FHWOptionalString MatchID; // 0x68(0x18)
	struct FHWOptionalString FlowName; // 0x80(0x18)
	struct FHWOptionalInt Round; // 0x98(0x08)
	struct FHWOptionalString Map; // 0xa0(0x18)
	struct FString Ts; // 0xb8(0x10)
	struct FHWOptionalString SourcePlayerId; // 0xc8(0x18)
	struct FHWOptionalInt SessionNumber; // 0xe0(0x08)
	struct FHWOptionalString BuildId; // 0xe8(0x18)
	struct FHWOptionalString Platform; // 0x100(0x18)
	struct FHWOptionalString Country; // 0x118(0x18)
	struct FHWOptionalInt PlayerLevel; // 0x130(0x08)
};

// ScriptStruct Hardwired.HWAnalyticsMapLoadTime
// Size: 0xb8 (Inherited: 0x00)
struct FHWAnalyticsMapLoadTime {
	struct FHWOptionalString Map; // 0x00(0x18)
	struct FHWOptionalFloat LoadTime; // 0x18(0x08)
	struct FHWOptionalString MatchID; // 0x20(0x18)
	struct FString Ts; // 0x38(0x10)
	struct FHWOptionalString SourcePlayerId; // 0x48(0x18)
	struct FHWOptionalInt SessionNumber; // 0x60(0x08)
	struct FHWOptionalString BuildId; // 0x68(0x18)
	struct FHWOptionalString Platform; // 0x80(0x18)
	struct FHWOptionalString Country; // 0x98(0x18)
	struct FHWOptionalInt PlayerLevel; // 0xb0(0x08)
};

// ScriptStruct Hardwired.HWAnalyticsMapDrawing
// Size: 0x108 (Inherited: 0x00)
struct FHWAnalyticsMapDrawing {
	struct FHWOptionalInt SourceTeam; // 0x00(0x08)
	struct FHWOptionalString TypeOfClick; // 0x08(0x18)
	struct FHWOptionalString MarkerLoc; // 0x20(0x18)
	struct FHWOptionalString MatchID; // 0x38(0x18)
	struct FHWOptionalString FlowName; // 0x50(0x18)
	struct FHWOptionalInt Round; // 0x68(0x08)
	struct FHWOptionalString Map; // 0x70(0x18)
	struct FString Ts; // 0x88(0x10)
	struct FHWOptionalString SourcePlayerId; // 0x98(0x18)
	struct FHWOptionalInt SessionNumber; // 0xb0(0x08)
	struct FHWOptionalString BuildId; // 0xb8(0x18)
	struct FHWOptionalString Platform; // 0xd0(0x18)
	struct FHWOptionalString Country; // 0xe8(0x18)
	struct FHWOptionalInt PlayerLevel; // 0x100(0x08)
};

// ScriptStruct Hardwired.HWAnalyticsLogin
// Size: 0x80 (Inherited: 0x00)
struct FHWAnalyticsLogin {
	struct FString Ts; // 0x00(0x10)
	struct FHWOptionalString SourcePlayerId; // 0x10(0x18)
	struct FHWOptionalInt SessionNumber; // 0x28(0x08)
	struct FHWOptionalString BuildId; // 0x30(0x18)
	struct FHWOptionalString Platform; // 0x48(0x18)
	struct FHWOptionalString Country; // 0x60(0x18)
	struct FHWOptionalInt PlayerLevel; // 0x78(0x08)
};

// ScriptStruct Hardwired.HWAnalyticsLevelUp
// Size: 0x80 (Inherited: 0x00)
struct FHWAnalyticsLevelUp {
	struct FString Ts; // 0x00(0x10)
	struct FHWOptionalString SourcePlayerId; // 0x10(0x18)
	struct FHWOptionalInt SessionNumber; // 0x28(0x08)
	struct FHWOptionalString BuildId; // 0x30(0x18)
	struct FHWOptionalString Platform; // 0x48(0x18)
	struct FHWOptionalString Country; // 0x60(0x18)
	struct FHWOptionalInt PlayerLevel; // 0x78(0x08)
};

// ScriptStruct Hardwired.HWAnalyticsItemUse
// Size: 0x1c0 (Inherited: 0x00)
struct FHWAnalyticsItemUse {
	struct FHWOptionalString ItemOwnerPlayerId; // 0x00(0x18)
	struct FHWOptionalInt OwnerTeam; // 0x18(0x08)
	struct FHWOptionalInt ItemAnalyticsCount; // 0x20(0x08)
	struct FHWOptionalString ItemName; // 0x28(0x18)
	struct FHWOptionalString UseType; // 0x40(0x18)
	struct FHWOptionalString ItemCategory; // 0x58(0x18)
	struct FHWOptionalString EventType; // 0x70(0x18)
	struct FHWOptionalString PlayerLocation; // 0x88(0x18)
	struct FHWOptionalString ItemLocation; // 0xa0(0x18)
	struct FHWOptionalString TargetPlayerId; // 0xb8(0x18)
	struct FHWOptionalString TargetLoc; // 0xd0(0x18)
	struct FHWOptionalInt TargetTeam; // 0xe8(0x08)
	struct FHWOptionalString MatchID; // 0xf0(0x18)
	struct FHWOptionalString FlowName; // 0x108(0x18)
	struct FHWOptionalInt Round; // 0x120(0x08)
	struct FHWOptionalString Map; // 0x128(0x18)
	struct FString Ts; // 0x140(0x10)
	struct FHWOptionalString SourcePlayerId; // 0x150(0x18)
	struct FHWOptionalInt SessionNumber; // 0x168(0x08)
	struct FHWOptionalString BuildId; // 0x170(0x18)
	struct FHWOptionalString Platform; // 0x188(0x18)
	struct FHWOptionalString Country; // 0x1a0(0x18)
	struct FHWOptionalInt PlayerLevel; // 0x1b8(0x08)
};

// ScriptStruct Hardwired.HWAnalyticsItemListsEvent
// Size: 0x168 (Inherited: 0x00)
struct FHWAnalyticsItemListsEvent {
	struct FHWOptionalString ItemId; // 0x00(0x18)
	struct FHWOptionalString ItemType; // 0x18(0x18)
	struct FHWOptionalString ItemSubType; // 0x30(0x18)
	struct FHWOptionalString Source; // 0x48(0x18)
	struct FHWOptionalString SourceDetails; // 0x60(0x18)
	struct FHWOptionalString ExtraSourceDetails; // 0x78(0x18)
	struct FHWOptionalInt SourceAmount; // 0x90(0x08)
	struct FHWOptionalString Rarity; // 0x98(0x18)
	struct FHWOptionalString LayoutPlan; // 0xb0(0x18)
	struct FHWOptionalInt SlotNumber; // 0xc8(0x08)
	struct FHWOptionalString CampaignId; // 0xd0(0x18)
	struct FString Ts; // 0xe8(0x10)
	struct FHWOptionalString SourcePlayerId; // 0xf8(0x18)
	struct FHWOptionalInt SessionNumber; // 0x110(0x08)
	struct FHWOptionalString BuildId; // 0x118(0x18)
	struct FHWOptionalString Platform; // 0x130(0x18)
	struct FHWOptionalString Country; // 0x148(0x18)
	struct FHWOptionalInt PlayerLevel; // 0x160(0x08)
};

// ScriptStruct Hardwired.HWAnalyticsInGamePurchases
// Size: 0xa0 (Inherited: 0x00)
struct FHWAnalyticsInGamePurchases {
	struct FHWOptionalString ShopItemId; // 0x00(0x18)
	float Dollar; // 0x18(0x04)
	float LocalizedCurrency; // 0x1c(0x04)
	struct FString Ts; // 0x20(0x10)
	struct FHWOptionalString SourcePlayerId; // 0x30(0x18)
	struct FHWOptionalInt SessionNumber; // 0x48(0x08)
	struct FHWOptionalString BuildId; // 0x50(0x18)
	struct FHWOptionalString Platform; // 0x68(0x18)
	struct FHWOptionalString Country; // 0x80(0x18)
	struct FHWOptionalInt PlayerLevel; // 0x98(0x08)
};

// ScriptStruct Hardwired.HWAnalyticsHeartbeat
// Size: 0x140 (Inherited: 0x00)
struct FHWAnalyticsHeartbeat {
	struct FHWOptionalString Weapon; // 0x00(0x18)
	struct FHWOptionalInt AmmoInMag; // 0x18(0x08)
	struct FHWOptionalBool IsPrimary; // 0x20(0x02)
	char pad_22[0x2]; // 0x22(0x02)
	struct FHWOptionalInt BloodLevel; // 0x24(0x08)
	struct FHWOptionalBool Bleeding; // 0x2c(0x02)
	struct FHWOptionalBool InDrone; // 0x2e(0x02)
	struct FHWOptionalInt Item1; // 0x30(0x08)
	struct FHWOptionalInt Item2; // 0x38(0x08)
	struct FHWOptionalInt Item3; // 0x40(0x08)
	struct FHWOptionalInt Ping; // 0x48(0x08)
	struct FHWOptionalString SourceLoc; // 0x50(0x18)
	struct FHWOptionalInt SourceTeam; // 0x68(0x08)
	struct FHWOptionalString MatchID; // 0x70(0x18)
	struct FHWOptionalString FlowName; // 0x88(0x18)
	struct FHWOptionalInt Round; // 0xa0(0x08)
	struct FHWOptionalString Map; // 0xa8(0x18)
	struct FString Ts; // 0xc0(0x10)
	struct FHWOptionalString SourcePlayerId; // 0xd0(0x18)
	struct FHWOptionalInt SessionNumber; // 0xe8(0x08)
	struct FHWOptionalString BuildId; // 0xf0(0x18)
	struct FHWOptionalString Platform; // 0x108(0x18)
	struct FHWOptionalString Country; // 0x120(0x18)
	struct FHWOptionalInt PlayerLevel; // 0x138(0x08)
};

// ScriptStruct Hardwired.HWAnalyticsHealing
// Size: 0x188 (Inherited: 0x00)
struct FHWAnalyticsHealing {
	struct FHWOptionalBool StopBleeding; // 0x00(0x02)
	char pad_2[0x2]; // 0x02(0x02)
	struct FHWOptionalInt ItemAnalyticsCount; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FHWOptionalString ItemName; // 0x10(0x18)
	struct FHWOptionalInt BloodBefore; // 0x28(0x08)
	struct FHWOptionalInt BloodAfter; // 0x30(0x08)
	struct FHWOptionalInt TotalHealAmount; // 0x38(0x08)
	struct FHWOptionalInt DownedBloodBefore; // 0x40(0x08)
	struct FHWOptionalInt DownedBloodAfter; // 0x48(0x08)
	struct FHWOptionalInt TotalDownedHealAmount; // 0x50(0x08)
	struct FHWOptionalBool WasRevive; // 0x58(0x02)
	char pad_5A[0x6]; // 0x5a(0x06)
	struct FHWOptionalString TargetPlayerId; // 0x60(0x18)
	struct FHWOptionalString TargetLoc; // 0x78(0x18)
	struct FHWOptionalInt TargetTeam; // 0x90(0x08)
	struct FHWOptionalString SourceLoc; // 0x98(0x18)
	struct FHWOptionalInt SourceTeam; // 0xb0(0x08)
	struct FHWOptionalString MatchID; // 0xb8(0x18)
	struct FHWOptionalString FlowName; // 0xd0(0x18)
	struct FHWOptionalInt Round; // 0xe8(0x08)
	struct FHWOptionalString Map; // 0xf0(0x18)
	struct FString Ts; // 0x108(0x10)
	struct FHWOptionalString SourcePlayerId; // 0x118(0x18)
	struct FHWOptionalInt SessionNumber; // 0x130(0x08)
	struct FHWOptionalString BuildId; // 0x138(0x18)
	struct FHWOptionalString Platform; // 0x150(0x18)
	struct FHWOptionalString Country; // 0x168(0x18)
	struct FHWOptionalInt PlayerLevel; // 0x180(0x08)
};

// ScriptStruct Hardwired.HWAnalyticsFailedTransactions
// Size: 0xb8 (Inherited: 0x00)
struct FHWAnalyticsFailedTransactions {
	struct FHWOptionalString ShopItemId; // 0x00(0x18)
	float Dollar; // 0x18(0x04)
	float LocalizedCurrency; // 0x1c(0x04)
	struct FHWOptionalString PointOfFail; // 0x20(0x18)
	struct FString Ts; // 0x38(0x10)
	struct FHWOptionalString SourcePlayerId; // 0x48(0x18)
	struct FHWOptionalInt SessionNumber; // 0x60(0x08)
	struct FHWOptionalString BuildId; // 0x68(0x18)
	struct FHWOptionalString Platform; // 0x80(0x18)
	struct FHWOptionalString Country; // 0x98(0x18)
	struct FHWOptionalInt PlayerLevel; // 0xb0(0x08)
};

// ScriptStruct Hardwired.HWAnalyticsEnterScreen
// Size: 0x98 (Inherited: 0x00)
struct FHWAnalyticsEnterScreen {
	struct FHWOptionalString ScreenName; // 0x00(0x18)
	struct FString Ts; // 0x18(0x10)
	struct FHWOptionalString SourcePlayerId; // 0x28(0x18)
	struct FHWOptionalInt SessionNumber; // 0x40(0x08)
	struct FHWOptionalString BuildId; // 0x48(0x18)
	struct FHWOptionalString Platform; // 0x60(0x18)
	struct FHWOptionalString Country; // 0x78(0x18)
	struct FHWOptionalInt PlayerLevel; // 0x90(0x08)
};

// ScriptStruct Hardwired.HWAnalyticsDrone
// Size: 0x170 (Inherited: 0x00)
struct FHWAnalyticsDrone {
	struct FName DroneType; // 0x00(0x08)
	struct FHWOptionalString Ability; // 0x08(0x18)
	struct FHWOptionalString Action; // 0x20(0x18)
	struct FHWOptionalString ActionType; // 0x38(0x18)
	struct FHWOptionalString TargetPlayerId; // 0x50(0x18)
	struct FHWOptionalString TargetItemName; // 0x68(0x18)
	struct FHWOptionalString SourceLoc; // 0x80(0x18)
	struct FHWOptionalInt SourceTeam; // 0x98(0x08)
	struct FHWOptionalString MatchID; // 0xa0(0x18)
	struct FHWOptionalString FlowName; // 0xb8(0x18)
	struct FHWOptionalInt Round; // 0xd0(0x08)
	struct FHWOptionalString Map; // 0xd8(0x18)
	struct FString Ts; // 0xf0(0x10)
	struct FHWOptionalString SourcePlayerId; // 0x100(0x18)
	struct FHWOptionalInt SessionNumber; // 0x118(0x08)
	struct FHWOptionalString BuildId; // 0x120(0x18)
	struct FHWOptionalString Platform; // 0x138(0x18)
	struct FHWOptionalString Country; // 0x150(0x18)
	struct FHWOptionalInt PlayerLevel; // 0x168(0x08)
};

// ScriptStruct Hardwired.HWAnalyticsDownsKills
// Size: 0x180 (Inherited: 0x00)
struct FHWAnalyticsDownsKills {
	struct FHWOptionalString DamageDealer; // 0x00(0x18)
	struct FHWOptionalBool IsPrimary; // 0x18(0x02)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct FHWOptionalString DownOrKill; // 0x20(0x18)
	struct FHWOptionalBool WasRevived; // 0x38(0x02)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct FHWOptionalString TargetPlatform; // 0x40(0x18)
	struct FHWOptionalString TargetPlayerId; // 0x58(0x18)
	struct FHWOptionalString TargetLoc; // 0x70(0x18)
	struct FHWOptionalInt TargetTeam; // 0x88(0x08)
	struct FHWOptionalString SourceLoc; // 0x90(0x18)
	struct FHWOptionalInt SourceTeam; // 0xa8(0x08)
	struct FHWOptionalString MatchID; // 0xb0(0x18)
	struct FHWOptionalString FlowName; // 0xc8(0x18)
	struct FHWOptionalInt Round; // 0xe0(0x08)
	struct FHWOptionalString Map; // 0xe8(0x18)
	struct FString Ts; // 0x100(0x10)
	struct FHWOptionalString SourcePlayerId; // 0x110(0x18)
	struct FHWOptionalInt SessionNumber; // 0x128(0x08)
	struct FHWOptionalString BuildId; // 0x130(0x18)
	struct FHWOptionalString Platform; // 0x148(0x18)
	struct FHWOptionalString Country; // 0x160(0x18)
	struct FHWOptionalInt PlayerLevel; // 0x178(0x08)
};

// ScriptStruct Hardwired.HWAnalyticsDownload
// Size: 0x90 (Inherited: 0x00)
struct FHWAnalyticsDownload {
	struct FString Email; // 0x00(0x10)
	struct FString Code; // 0x10(0x10)
	struct FString Source; // 0x20(0x10)
	struct FString Ts; // 0x30(0x10)
	struct FString SourcePlayerId; // 0x40(0x10)
	int32_t SessionNumber; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FString BuildId; // 0x58(0x10)
	struct FString Platform; // 0x68(0x10)
	struct FString Country; // 0x78(0x10)
	int32_t PlayerLevel; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct Hardwired.HWAnalyticsCombat
// Size: 0x270 (Inherited: 0x00)
struct FHWAnalyticsCombat {
	struct FHWOptionalString ImpactLoc; // 0x00(0x18)
	struct FHWOptionalString DamageDealer; // 0x18(0x18)
	struct FHWOptionalBool IsPrimary; // 0x30(0x02)
	char pad_32[0x2]; // 0x32(0x02)
	struct FHWOptionalInt AmmoMag; // 0x34(0x08)
	struct FHWOptionalInt CombatId; // 0x3c(0x08)
	struct FHWOptionalInt ItemAnalyticsCount; // 0x44(0x08)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FHWOptionalString RangeInfo; // 0x50(0x18)
	struct FHWOptionalBool IsAiming; // 0x68(0x02)
	char pad_6A[0x6]; // 0x6a(0x06)
	struct FHWOptionalString TargetType; // 0x70(0x18)
	struct FHWOptionalString DamageType; // 0x88(0x18)
	struct FHWOptionalBool ElectricalDamageCheck; // 0xa0(0x02)
	char pad_A2[0x6]; // 0xa2(0x06)
	struct FHWOptionalString Bodypart; // 0xa8(0x18)
	struct FHWOptionalInt ArmorDamage; // 0xc0(0x08)
	struct FHWOptionalInt ArmorHpBefore; // 0xc8(0x08)
	struct FHWOptionalInt ArmorHpAfter; // 0xd0(0x08)
	struct FHWOptionalInt HpBefore; // 0xd8(0x08)
	struct FHWOptionalInt HpAfter; // 0xe0(0x08)
	struct FHWOptionalInt BloodLevelBefore; // 0xe8(0x08)
	struct FHWOptionalInt BloodLevelAfter; // 0xf0(0x08)
	struct FHWOptionalInt EhpBefore; // 0xf8(0x08)
	struct FHWOptionalInt EhpAfter; // 0x100(0x08)
	struct FHWOptionalBool ArmorDestroyed; // 0x108(0x02)
	struct FHWOptionalBool StartBleeding; // 0x10a(0x02)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct FHWOptionalString Vitality; // 0x110(0x18)
	struct FHWOptionalBool IsLeaning; // 0x128(0x02)
	char pad_12A[0x6]; // 0x12a(0x06)
	struct FHWOptionalString Modifier; // 0x130(0x18)
	struct FHWOptionalString TargetPlayerId; // 0x148(0x18)
	struct FHWOptionalString TargetLoc; // 0x160(0x18)
	struct FHWOptionalInt TargetTeam; // 0x178(0x08)
	struct FHWOptionalString SourceLoc; // 0x180(0x18)
	struct FHWOptionalInt SourceTeam; // 0x198(0x08)
	struct FHWOptionalString MatchID; // 0x1a0(0x18)
	struct FHWOptionalString FlowName; // 0x1b8(0x18)
	struct FHWOptionalInt Round; // 0x1d0(0x08)
	struct FHWOptionalString Map; // 0x1d8(0x18)
	struct FString Ts; // 0x1f0(0x10)
	struct FHWOptionalString SourcePlayerId; // 0x200(0x18)
	struct FHWOptionalInt SessionNumber; // 0x218(0x08)
	struct FHWOptionalString BuildId; // 0x220(0x18)
	struct FHWOptionalString Platform; // 0x238(0x18)
	struct FHWOptionalString Country; // 0x250(0x18)
	struct FHWOptionalInt PlayerLevel; // 0x268(0x08)
};

// ScriptStruct Hardwired.HWAnalyticsClientHeartbeat
// Size: 0x118 (Inherited: 0x00)
struct FHWAnalyticsClientHeartbeat {
	struct FHWOptionalString Map; // 0x00(0x18)
	struct FHWOptionalString Location; // 0x18(0x18)
	struct FHWOptionalString ViewDirection; // 0x30(0x18)
	struct FHWOptionalFloat Fps; // 0x48(0x08)
	struct FHWOptionalInt Ping; // 0x50(0x08)
	struct FHWOptionalInt MemoryTotalMegabytes; // 0x58(0x08)
	struct FHWOptionalInt MemoryAvailableMegabytes; // 0x60(0x08)
	struct FHWOptionalString Gpu; // 0x68(0x18)
	struct FHWOptionalString Cpu; // 0x80(0x18)
	struct FString Ts; // 0x98(0x10)
	struct FHWOptionalString SourcePlayerId; // 0xa8(0x18)
	struct FHWOptionalInt SessionNumber; // 0xc0(0x08)
	struct FHWOptionalString BuildId; // 0xc8(0x18)
	struct FHWOptionalString Platform; // 0xe0(0x18)
	struct FHWOptionalString Country; // 0xf8(0x18)
	struct FHWOptionalInt PlayerLevel; // 0x110(0x08)
};

// ScriptStruct Hardwired.HWAnalyticsClaimBonusCode
// Size: 0xb0 (Inherited: 0x00)
struct FHWAnalyticsClaimBonusCode {
	struct FHWOptionalString BonusCode; // 0x00(0x18)
	struct FHWOptionalString RewardBoxId; // 0x18(0x18)
	struct FString Ts; // 0x30(0x10)
	struct FHWOptionalString SourcePlayerId; // 0x40(0x18)
	struct FHWOptionalInt SessionNumber; // 0x58(0x08)
	struct FHWOptionalString BuildId; // 0x60(0x18)
	struct FHWOptionalString Platform; // 0x78(0x18)
	struct FHWOptionalString Country; // 0x90(0x18)
	struct FHWOptionalInt PlayerLevel; // 0xa8(0x08)
};

// ScriptStruct Hardwired.HWAnalyticsBackendError
// Size: 0xd0 (Inherited: 0x00)
struct FHWAnalyticsBackendError {
	struct FHWOptionalString ErrorMessage; // 0x00(0x18)
	struct FHWOptionalString ClientState; // 0x18(0x18)
	struct FHWOptionalBool IsClient; // 0x30(0x02)
	char pad_32[0x6]; // 0x32(0x06)
	struct FHWOptionalString URL; // 0x38(0x18)
	struct FString Ts; // 0x50(0x10)
	struct FHWOptionalString SourcePlayerId; // 0x60(0x18)
	struct FHWOptionalInt SessionNumber; // 0x78(0x08)
	struct FHWOptionalString BuildId; // 0x80(0x18)
	struct FHWOptionalString Platform; // 0x98(0x18)
	struct FHWOptionalString Country; // 0xb0(0x18)
	struct FHWOptionalInt PlayerLevel; // 0xc8(0x08)
};

// ScriptStruct Hardwired.HWAnalyticsActorInteraction
// Size: 0x138 (Inherited: 0x00)
struct FHWAnalyticsActorInteraction {
	struct FHWOptionalInt Team; // 0x00(0x08)
	struct FHWOptionalString Action; // 0x08(0x18)
	struct FHWOptionalString Actor; // 0x20(0x18)
	struct FHWOptionalString PlayerLoc; // 0x38(0x18)
	struct FHWOptionalString ActorLoc; // 0x50(0x18)
	struct FHWOptionalString MatchID; // 0x68(0x18)
	struct FHWOptionalString FlowName; // 0x80(0x18)
	struct FHWOptionalInt Round; // 0x98(0x08)
	struct FHWOptionalString Map; // 0xa0(0x18)
	struct FString Ts; // 0xb8(0x10)
	struct FHWOptionalString SourcePlayerId; // 0xc8(0x18)
	struct FHWOptionalInt SessionNumber; // 0xe0(0x08)
	struct FHWOptionalString BuildId; // 0xe8(0x18)
	struct FHWOptionalString Platform; // 0x100(0x18)
	struct FHWOptionalString Country; // 0x118(0x18)
	struct FHWOptionalInt PlayerLevel; // 0x130(0x08)
};

// ScriptStruct Hardwired.HWAccountToken
// Size: 0x38 (Inherited: 0x00)
struct FHWAccountToken {
	struct FString Email; // 0x00(0x10)
	struct FString Token; // 0x10(0x10)
	struct FString CreatedTime; // 0x20(0x10)
	bool Valid; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Hardwired.HWAccountInvitation
// Size: 0x28 (Inherited: 0x00)
struct FHWAccountInvitation {
	struct FString Email; // 0x00(0x10)
	bool IsAccountCreated; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString AccountCreatedTime; // 0x18(0x10)
};

// ScriptStruct Hardwired.HWAccount
// Size: 0x90 (Inherited: 0x00)
struct FHWAccount {
	struct FString PlayerId; // 0x00(0x10)
	struct FString Email; // 0x10(0x10)
	struct FString Password; // 0x20(0x10)
	struct FString Salt; // 0x30(0x10)
	struct FString CreatedTime; // 0x40(0x10)
	struct FString LastLoginTime; // 0x50(0x10)
	struct FString BanStart; // 0x60(0x10)
	struct FString BanEnd; // 0x70(0x10)
	struct FString BanReason; // 0x80(0x10)
};

// ScriptStruct Hardwired.HWHeldItemAnimation
// Size: 0x58 (Inherited: 0x00)
struct FHWHeldItemAnimation {
	struct UAnimMontage* FPMontage; // 0x00(0x08)
	struct UAnimMontage* TPMontage; // 0x08(0x08)
	struct UAnimSequence* ItemAnimation; // 0x10(0x08)
	bool Queue; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float PlayRate; // 0x1c(0x04)
	struct FDelegate AnimationBeginDelegate; // 0x20(0x10)
	struct FDelegate AnimationEndDelegate; // 0x30(0x10)
	struct FDelegate AnimationNotifyDelegate; // 0x40(0x10)
	bool RequiresMulticastCall; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct Hardwired.HWHitImpactArray
// Size: 0x20 (Inherited: 0x00)
struct FHWHitImpactArray {
	struct TArray<struct FHWHitImpact> Items; // 0x00(0x10)
	struct FVector Start; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Hardwired.HWHitImpact
// Size: 0x28 (Inherited: 0x00)
struct FHWHitImpact {
	struct FVector Position; // 0x00(0x0c)
	struct FVector Normal; // 0x0c(0x0c)
	struct UPhysicalMaterial* Material; // 0x18(0x08)
	struct USceneComponent* Component; // 0x20(0x08)
};

// ScriptStruct Hardwired.HWHitRegDrawParams
// Size: 0x24 (Inherited: 0x00)
struct FHWHitRegDrawParams {
	struct FColor GeometryColor; // 0x00(0x04)
	struct FColor TraceLineColor; // 0x04(0x04)
	struct FColor TraceStartColor; // 0x08(0x04)
	struct FColor TraceImpactColor; // 0x0c(0x04)
	float LineWidth; // 0x10(0x04)
	char pad_14[0x10]; // 0x14(0x10)
};

// ScriptStruct Hardwired.HWHitRegSession
// Size: 0x28 (Inherited: 0x00)
struct FHWHitRegSession {
	struct TArray<struct FHWHitRegShot> Shots; // 0x00(0x10)
	struct TArray<struct FString> Players; // 0x10(0x10)
	bool Server; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Hardwired.HWHitRegShot
// Size: 0x28 (Inherited: 0x00)
struct FHWHitRegShot {
	struct TArray<struct FHWHitRegSingleTrace> Traces; // 0x00(0x10)
	struct TArray<struct FHWHitRegBodyState> Bodies; // 0x10(0x10)
	int32_t Player; // 0x20(0x04)
	int32_t LocalId; // 0x24(0x04)
};

// ScriptStruct Hardwired.HWHitRegBodyState
// Size: 0x60 (Inherited: 0x00)
struct FHWHitRegBodyState {
	struct FTransform Transform; // 0x00(0x30)
	struct TArray<struct FHWHitRegBox> Boxes; // 0x30(0x10)
	struct TArray<struct FHWHitRegCapsule> Capsules; // 0x40(0x10)
	struct TArray<struct FHWHitRegSphere> Spheres; // 0x50(0x10)
};

// ScriptStruct Hardwired.HWHitRegShapeBase
// Size: 0x0c (Inherited: 0x00)
struct FHWHitRegShapeBase {
	struct FVector Center; // 0x00(0x0c)
};

// ScriptStruct Hardwired.HWHitRegSphere
// Size: 0x10 (Inherited: 0x0c)
struct FHWHitRegSphere : FHWHitRegShapeBase {
	float Radius; // 0x0c(0x04)
};

// ScriptStruct Hardwired.HWHitRegCapsule
// Size: 0x20 (Inherited: 0x10)
struct FHWHitRegCapsule : FHWHitRegSphere {
	float Length; // 0x10(0x04)
	struct FRotator Rotation; // 0x14(0x0c)
};

// ScriptStruct Hardwired.HWHitRegBox
// Size: 0x24 (Inherited: 0x0c)
struct FHWHitRegBox : FHWHitRegShapeBase {
	struct FVector Extent; // 0x0c(0x0c)
	struct FRotator Rotation; // 0x18(0x0c)
};

// ScriptStruct Hardwired.HWHitRegSingleTrace
// Size: 0x24 (Inherited: 0x00)
struct FHWHitRegSingleTrace {
	struct FVector Start; // 0x00(0x0c)
	struct FVector End; // 0x0c(0x0c)
	struct FVector Impact; // 0x18(0x0c)
};

// ScriptStruct Hardwired.HWReconstructedHitInfo
// Size: 0x48 (Inherited: 0x00)
struct FHWReconstructedHitInfo {
	struct FHWHitInfo HitInfo; // 0x00(0x28)
	struct TWeakObjectPtr<struct AActor> HitActor; // 0x28(0x08)
	struct FVector WorldLocation; // 0x30(0x0c)
	struct FVector TraceStart; // 0x3c(0x0c)
};

// ScriptStruct Hardwired.HWHitInfo
// Size: 0x28 (Inherited: 0x00)
struct FHWHitInfo {
	struct TWeakObjectPtr<struct UPrimitiveComponent> Component; // 0x00(0x08)
	struct UPhysicalMaterial* Material; // 0x08(0x08)
	struct FVector_NetQuantize Location; // 0x10(0x0c)
	struct FVector_NetQuantize Normal; // 0x1c(0x0c)
};

// ScriptStruct Hardwired.HWRemoteProjectileTraceContainer
// Size: 0x30 (Inherited: 0x00)
struct FHWRemoteProjectileTraceContainer {
	struct FVector TraceStart; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FHWRemoteProjectileTrace> Traces; // 0x10(0x10)
	struct FVector Dir; // 0x20(0x0c)
	float Cone; // 0x2c(0x04)
};

// ScriptStruct Hardwired.HWRemoteProjectileTrace
// Size: 0x20 (Inherited: 0x00)
struct FHWRemoteProjectileTrace {
	struct TArray<struct FHWHitInfo> Hits; // 0x00(0x10)
	struct FVector_NetQuantizeNormal Direction; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Hardwired.HWHitRegRoundRecord
// Size: 0x20 (Inherited: 0x00)
struct FHWHitRegRoundRecord {
	struct FString Map; // 0x00(0x10)
	struct TArray<struct FHWHitRegWeaponRecord> Weapons; // 0x10(0x10)
};

// ScriptStruct Hardwired.HWHitRegWeaponRecord
// Size: 0x30 (Inherited: 0x00)
struct FHWHitRegWeaponRecord {
	struct FString ID; // 0x00(0x10)
	struct FString Player; // 0x10(0x10)
	struct TArray<struct FHWHitRegShotRecord> Shots; // 0x20(0x10)
};

// ScriptStruct Hardwired.HWHitRegShotRecord
// Size: 0xb0 (Inherited: 0x00)
struct FHWHitRegShotRecord {
	struct FVector Start; // 0x00(0x0c)
	struct FVector ValidStart; // 0x0c(0x0c)
	int32_t Ammo; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FHWHitRegTraceRecord> Traces; // 0x20(0x10)
	struct FVector Dir; // 0x30(0x0c)
	float Cone; // 0x3c(0x04)
	float Time; // 0x40(0x04)
	float WorldTime; // 0x44(0x04)
	char Fail; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TArray<struct FHWHitRegCharStateArray> Characters; // 0x50(0x10)
	char pad_60[0x50]; // 0x60(0x50)
};

// ScriptStruct Hardwired.HWHitRegCharStateArray
// Size: 0x18 (Inherited: 0x00)
struct FHWHitRegCharStateArray {
	struct TArray<struct FHWHitRegCharStateWithTimeStamp> Data; // 0x00(0x10)
	int32_t Used; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Hardwired.HWHitRegCharStateWithTimeStamp
// Size: 0x20 (Inherited: 0x1c)
struct FHWHitRegCharStateWithTimeStamp : FHWCharacterStateData {
	float Timestamp; // 0x1c(0x04)
};

// ScriptStruct Hardwired.HWHitRegTraceRecord
// Size: 0x48 (Inherited: 0x00)
struct FHWHitRegTraceRecord {
	struct FVector End; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString Object; // 0x10(0x10)
	struct FVector ValidEnd; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString ValidObject; // 0x30(0x10)
	enum class EHWBodypart Part; // 0x40(0x01)
	char Fail; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
};

// ScriptStruct Hardwired.HWKeyCharacterState
// Size: 0x28 (Inherited: 0x00)
struct FHWKeyCharacterState {
	struct AHWHumanCharacter* Char; // 0x00(0x08)
	struct FHWCharacterStateData Data; // 0x08(0x1c)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Hardwired.HWHitRegValidationConfig
// Size: 0x1c (Inherited: 0x00)
struct FHWHitRegValidationConfig {
	int32_t Mode; // 0x00(0x04)
	int32_t CheckAmmo; // 0x04(0x04)
	int32_t CheckTraceStartDistance; // 0x08(0x04)
	float TraceStartMaxDistance; // 0x0c(0x04)
	int32_t CheckImpactPointDistance; // 0x10(0x04)
	float ImpactPointMaxDistance; // 0x14(0x04)
	int32_t CheckImpactPointTrace; // 0x18(0x04)
};

// ScriptStruct Hardwired.HWClimbCheckData
// Size: 0x0c (Inherited: 0x00)
struct FHWClimbCheckData {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct Hardwired.HWVaultCheckParams
// Size: 0x1cc (Inherited: 0x00)
struct FHWVaultCheckParams {
	char pad_0[0x1cc]; // 0x00(0x1cc)
};

// ScriptStruct Hardwired.HWItemEventParams
// Size: 0x98 (Inherited: 0x00)
struct FHWItemEventParams {
	struct AActor* ItemObject; // 0x00(0x08)
	struct FHWItemData Data; // 0x08(0x78)
	struct FString OwnerSessionId; // 0x80(0x10)
	int32_t ItemId; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// ScriptStruct Hardwired.HWJamItemEventParams
// Size: 0xa8 (Inherited: 0x98)
struct FHWJamItemEventParams : FHWItemEventParams {
	struct FString JammerSessionId; // 0x98(0x10)
};

// ScriptStruct Hardwired.HWImpactItemEventParams
// Size: 0xa0 (Inherited: 0x98)
struct FHWImpactItemEventParams : FHWItemEventParams {
	struct AHWCharacter* Victim; // 0x98(0x08)
};

// ScriptStruct Hardwired.HWDestroyItemEventParams
// Size: 0xa0 (Inherited: 0x98)
struct FHWDestroyItemEventParams : FHWItemEventParams {
	struct AHWCharacter* Shooter; // 0x98(0x08)
};

// ScriptStruct Hardwired.HWPickupEventParams
// Size: 0x98 (Inherited: 0x98)
struct FHWPickupEventParams : FHWItemEventParams {
};

// ScriptStruct Hardwired.HWCharacterItemEventParams
// Size: 0xa0 (Inherited: 0x98)
struct FHWCharacterItemEventParams : FHWItemEventParams {
	struct AHWCharacter* Character; // 0x98(0x08)
};

// ScriptStruct Hardwired.HWInteractItemEventParams
// Size: 0xa0 (Inherited: 0xa0)
struct FHWInteractItemEventParams : FHWCharacterItemEventParams {
};

// ScriptStruct Hardwired.HWTriggerItemEventParams
// Size: 0xa0 (Inherited: 0xa0)
struct FHWTriggerItemEventParams : FHWCharacterItemEventParams {
};

// ScriptStruct Hardwired.HWLevelFlowActorList
// Size: 0x10 (Inherited: 0x00)
struct FHWLevelFlowActorList {
	struct TArray<struct AActor*> Actors; // 0x00(0x10)
};

// ScriptStruct Hardwired.HWLabelStyleRow
// Size: 0x280 (Inherited: 0x08)
struct FHWLabelStyleRow : FTableRowBase {
	struct FTextBlockStyle TextStyle; // 0x08(0x270)
	bool UpperCase; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
};

// ScriptStruct Hardwired.HWMontageData
// Size: 0x1c0 (Inherited: 0x00)
struct FHWMontageData {
	struct UAnimMontage* Montage1P; // 0x00(0x08)
	struct UAnimMontage* Montage3P; // 0x08(0x08)
	struct UAnimMontage* MontageCamera; // 0x10(0x08)
	struct UAnimMontage* PriorityMontage; // 0x18(0x08)
	struct UAnimInstance* PriorityAnimInstance; // 0x20(0x08)
	bool UseMontage1PAsFinish; // 0x28(0x01)
	bool bOnlyEndOnInterrupt; // 0x29(0x01)
	bool bDisableInput; // 0x2a(0x01)
	bool bDisableCapsuleCollision; // 0x2b(0x01)
	bool bIsFlying; // 0x2c(0x01)
	bool bEndInCrouch; // 0x2d(0x01)
	bool bGetMovementModeFromTrace; // 0x2e(0x01)
	enum class EMovementMode MovementModeAfterMontage; // 0x2f(0x01)
	bool bIgnoreClientCorrections; // 0x30(0x01)
	bool bHasRootMotion; // 0x31(0x01)
	bool ApplyInstantAccelerationAfterMontage; // 0x32(0x01)
	enum class EHWCapsuleRotationType CapsuleRotationType; // 0x33(0x01)
	struct FRotator LockedRotation; // 0x34(0x0c)
	bool bHideWeapon; // 0x40(0x01)
	bool bHandsToCapsule; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
	struct FHWInterruptInfo Interrupt; // 0x48(0x18)
	struct FHWActionSet DisabledActions; // 0x60(0x10)
	struct FHWRelocationData RelocationAtStart; // 0x70(0xa8)
	struct FHWRelocationData RelocationAtEnd; // 0x118(0xa8)
};

// ScriptStruct Hardwired.HWRelocationData
// Size: 0xa8 (Inherited: 0x00)
struct FHWRelocationData {
	struct FVector StartLocation; // 0x00(0x0c)
	struct FRotator StartRotation; // 0x0c(0x0c)
	struct FRotator StartControlRotation; // 0x18(0x0c)
	struct FVector CurrentLocation; // 0x24(0x0c)
	struct FRotator CurrentRotation; // 0x30(0x0c)
	struct FRotator CurrentControlRotation; // 0x3c(0x0c)
	struct FVector EndLocation; // 0x48(0x0c)
	struct FRotator EndRotation; // 0x54(0x0c)
	struct FRotator EndControlRotation; // 0x60(0x0c)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct UCurveVector* LocationLerpCurve; // 0x70(0x08)
	struct UCurveFloat* RotationLerpCurve; // 0x78(0x08)
	struct UCurveFloat* ControlRotationLerpCurve; // 0x80(0x08)
	struct UCurveVector* LocationOffsetCurve; // 0x88(0x08)
	struct UCurveVector* ControlRotationOffsetCurve; // 0x90(0x08)
	bool LocationAsOffset; // 0x98(0x01)
	bool ControlRotationAsOffset; // 0x99(0x01)
	bool ShouldRelocateLocation; // 0x9a(0x01)
	bool ShouldRelocateRotation; // 0x9b(0x01)
	bool ShouldRelocateControlRotation; // 0x9c(0x01)
	bool RelocateBeforeAnimation; // 0x9d(0x01)
	char pad_9E[0x2]; // 0x9e(0x02)
	float TimeToRelocate; // 0xa0(0x04)
	float TimeSpent; // 0xa4(0x04)
};

// ScriptStruct Hardwired.HWInterruptInfo
// Size: 0x18 (Inherited: 0x00)
struct FHWInterruptInfo {
	bool bInterruptable; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct UAnimMontage*> InterruptingMontages; // 0x08(0x10)
};

// ScriptStruct Hardwired.HWReconnectInfo
// Size: 0x10 (Inherited: 0x00)
struct FHWReconnectInfo {
	bool ShouldReconnectOnClient; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t CurrentRound; // 0x04(0x04)
	enum class EHWRoundState RoundState; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t RoundStateSyncPoint; // 0x0c(0x04)
};

// ScriptStruct Hardwired.HWPreloadAsset
// Size: 0x48 (Inherited: 0x00)
struct FHWPreloadAsset {
	char pad_0[0x48]; // 0x00(0x48)
};

// ScriptStruct Hardwired.HWValueDistribution
// Size: 0x18 (Inherited: 0x00)
struct FHWValueDistribution {
	float Start; // 0x00(0x04)
	float End; // 0x04(0x04)
	struct TArray<int32_t> Values; // 0x08(0x10)
};

// ScriptStruct Hardwired.HWShopItemPurchaseTestInfo
// Size: 0x40 (Inherited: 0x00)
struct FHWShopItemPurchaseTestInfo {
	struct FString CampaignId; // 0x00(0x10)
	struct FString SubsectionId; // 0x10(0x10)
	struct FString ItemId; // 0x20(0x10)
	struct FString Result; // 0x30(0x10)
};

// ScriptStruct Hardwired.HWTestingValues
// Size: 0x0c (Inherited: 0x00)
struct FHWTestingValues {
	int32_t NumOfClients; // 0x00(0x04)
	int32_t NumOfPlayersNeeded; // 0x04(0x04)
	bool bQuickStart; // 0x08(0x01)
	bool bPlayNetDedicated; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct Hardwired.HWRewardGroup
// Size: 0x18 (Inherited: 0x00)
struct FHWRewardGroup {
	enum class EHWRewardSource Source; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FHWReward> Rewards; // 0x08(0x10)
};

// ScriptStruct Hardwired.HWWeaponModificationParameters
// Size: 0x20 (Inherited: 0x00)
struct FHWWeaponModificationParameters {
	struct TArray<enum class EHWCraftingParameter> Upgrades; // 0x00(0x10)
	enum class EHWWeaponPartType PartType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FName PartId; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Hardwired.HWMissionRewardItem
// Size: 0x0c (Inherited: 0x00)
struct FHWMissionRewardItem {
	enum class EHWRewardType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Amount; // 0x04(0x04)
	enum class EHWVendor Vendor; // 0x08(0x01)
	bool RandomRarity; // 0x09(0x01)
	enum class EHWRarity Rarity; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
};

// ScriptStruct Hardwired.HWFacialHairTableRow
// Size: 0x38 (Inherited: 0x08)
struct FHWFacialHairTableRow : FTableRowBase {
	struct FName CharacterId; // 0x08(0x08)
	struct TSoftObjectPtr<struct USkeletalMesh> FacialHairMesh; // 0x10(0x28)
};

// ScriptStruct Hardwired.HWHairTableRow
// Size: 0x40 (Inherited: 0x08)
struct FHWHairTableRow : FTableRowBase {
	struct FName CharacterId; // 0x08(0x08)
	int32_t HelmetType; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TSoftObjectPtr<struct USkeletalMesh> HairMesh; // 0x18(0x28)
};

// ScriptStruct Hardwired.HWArmorPartIds
// Size: 0x30 (Inherited: 0x00)
struct FHWArmorPartIds {
	struct FName ArmorSetId; // 0x00(0x08)
	struct FName BackpackId; // 0x08(0x08)
	struct FName BackpackCharmId; // 0x10(0x08)
	struct FName CharacterId; // 0x18(0x08)
	struct FName ChestBadgeId; // 0x20(0x08)
	struct FName BackpackBadgeId; // 0x28(0x08)
};

// ScriptStruct Hardwired.HWBadgeTextures
// Size: 0x20 (Inherited: 0x08)
struct FHWBadgeTextures : FTableRowBase {
	struct UTexture2D* BaseColor; // 0x08(0x08)
	struct UTexture2D* Normal; // 0x10(0x08)
	struct UTexture2D* ORMA; // 0x18(0x08)
};

// ScriptStruct Hardwired.HWArmorSetSkinParams
// Size: 0x110 (Inherited: 0x08)
struct FHWArmorSetSkinParams : FTableRowBase {
	struct FHWArmorPartSkinParams Head; // 0x08(0x34)
	struct FHWArmorPartSkinParams Chest; // 0x3c(0x34)
	struct FHWArmorPartSkinParams Body; // 0x70(0x34)
	struct FHWArmorPartSkinParams Legs; // 0xa4(0x34)
	struct FHWArmorPartSkinParams Base; // 0xd8(0x34)
	char pad_10C[0x4]; // 0x10c(0x04)
};

// ScriptStruct Hardwired.HWVoiceChatStatus
// Size: 0x0c (Inherited: 0x00)
struct FHWVoiceChatStatus {
	enum class EHWVoiceChatStatus General; // 0x00(0x01)
	enum class EHWVoiceChatMode VoiceMode; // 0x01(0x01)
	bool IsPushingToTalk; // 0x02(0x01)
	enum class EHWChatChannelType Channel; // 0x03(0x01)
	bool ChannelConnected; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32_t ErrorStatus; // 0x08(0x04)
};

// ScriptStruct Hardwired.HWSingleShotDiag
// Size: 0x30 (Inherited: 0x00)
struct FHWSingleShotDiag {
	struct FVector Start; // 0x00(0x0c)
	struct FVector Dir; // 0x0c(0x0c)
	struct TArray<struct FVector> Pellets; // 0x18(0x10)
	float Cone; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Hardwired.HWFireTrace
// Size: 0x1c (Inherited: 0x00)
struct FHWFireTrace {
	struct FVector Loc; // 0x00(0x0c)
	struct FRotator Rot; // 0x0c(0x0c)
	int32_t ShotId; // 0x18(0x04)
};

// ScriptStruct Hardwired.HWWeaponSkinParamsRow
// Size: 0x30 (Inherited: 0x08)
struct FHWWeaponSkinParamsRow : FTableRowBase {
	struct FHWWeaponSkinParams Skin; // 0x08(0x28)
};

// ScriptStruct Hardwired.HWWeaponAttributes
// Size: 0xd4 (Inherited: 0x00)
struct FHWWeaponAttributes {
	enum class EHWWeaponFireMode FireMode; // 0x00(0x01)
	bool IsAutomatic; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float BaseFireRate; // 0x04(0x04)
	bool CanShootOneHanded; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t ProjectileMaxRange; // 0x0c(0x04)
	int32_t ProjectileOptimalRange; // 0x10(0x04)
	int32_t MagCapacity; // 0x14(0x04)
	int32_t TotalMagsByDefault; // 0x18(0x04)
	int32_t BulletsPerBurst; // 0x1c(0x04)
	float TimeBetweenBursts; // 0x20(0x04)
	float TimeBetweenShots; // 0x24(0x04)
	char PelletsPerShot; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float PelletSpread; // 0x2c(0x04)
	float EquipTime; // 0x30(0x04)
	float SwayRecoverySpeed; // 0x34(0x04)
	float AimRecoverySpeed; // 0x38(0x04)
	float HipRecoverySpeed; // 0x3c(0x04)
	float MuzzleFlashSize; // 0x40(0x04)
	float ReloadTime; // 0x44(0x04)
	float FullReloadTime; // 0x48(0x04)
	float FullReloadMultiplier; // 0x4c(0x04)
	bool UseFullReload; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float AimSpeed; // 0x54(0x04)
	float WeaponWeight; // 0x58(0x04)
	float RecoilMultiplierWalking; // 0x5c(0x04)
	float RecoilMultiplierHipFiring; // 0x60(0x04)
	float RecoilMultiplierCrouching; // 0x64(0x04)
	float RecoilMultiplierContinuousFiring; // 0x68(0x04)
	float SpreadBaseMultiplier; // 0x6c(0x04)
	float SpreadMultiplierWalking; // 0x70(0x04)
	float SpreadMultiplierCrouching; // 0x74(0x04)
	float FireSoundRange; // 0x78(0x04)
	bool IsOptical; // 0x7c(0x01)
	bool IsSilenced; // 0x7d(0x01)
	char pad_7E[0x2]; // 0x7e(0x02)
	float FovAimed; // 0x80(0x04)
	float FovHands; // 0x84(0x04)
	float FOVLens; // 0x88(0x04)
	float FovWorldAimed; // 0x8c(0x04)
	float HipfireSpread; // 0x90(0x04)
	float SpreadAutoFire; // 0x94(0x04)
	float SpreadAutoFireTime; // 0x98(0x04)
	float AimStability; // 0x9c(0x04)
	float HipStability; // 0xa0(0x04)
	float ArmorDamageHead; // 0xa4(0x04)
	float ArmorDamageTorso; // 0xa8(0x04)
	float ArmorDamageLegs; // 0xac(0x04)
	float BodyDamageTorso; // 0xb0(0x04)
	float BodyDamageLegs; // 0xb4(0x04)
	float MinimumDamage; // 0xb8(0x04)
	float DamageToHumans; // 0xbc(0x04)
	float DamageToObjects; // 0xc0(0x04)
	bool PartialReload; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	int32_t AmmoPerPartialReload; // 0xc8(0x04)
	bool IsFatalOnHeadShot; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	int32_t VfxTag; // 0xd0(0x04)
};

// ScriptStruct Hardwired.RecoilStageData
// Size: 0x18 (Inherited: 0x00)
struct FRecoilStageData {
	int32_t StartingFromShotN; // 0x00(0x04)
	enum class ERecoilShapeType Shape; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float Width; // 0x08(0x04)
	float Height; // 0x0c(0x04)
	float OffsetX; // 0x10(0x04)
	float OffsetY; // 0x14(0x04)
};

