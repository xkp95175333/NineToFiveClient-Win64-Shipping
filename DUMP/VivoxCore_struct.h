// Enum VivoxCore.DeviceType
enum class DeviceType : uint8 {
	NullDevice,
	SpecificDevice,
	DefaultSystemDevice,
	DefaultCommunicationDevice,
	DeviceType_MAX,
};

// Enum VivoxCore.EAudioFadeModel
enum class EAudioFadeModel : uint8 {
	InverseByDistance,
	LinearByDistance,
	ExponentialByDistance,
	EAudioFadeModel_MAX,
};

// Enum VivoxCore.ChannelType
enum class ChannelType : uint8 {
	NonPositional,
	Positional,
	Echo,
	ChannelType_MAX,
};

// Enum VivoxCore.ConnectionState
enum class ConnectionState : uint8 {
	Disconnected,
	Connecting,
	Connected,
	Disconnecting,
	ConnectionState_MAX,
};

// Enum VivoxCore.ParticipantSpeakingUpdateRate
enum class ParticipantSpeakingUpdateRate : uint8 {
	StateChange,
	Never,
	Update1Hz,
	Update5Hz,
	Update10Hz,
	ParticipantSpeakingUpdateRate_MAX,
};

// Enum VivoxCore.TransmissionMode
enum class TransmissionMode : uint8 {
	None,
	Single,
	All,
	TransmissionMode_MAX,
};

// Enum VivoxCore.SubscriptionReply
enum class SubscriptionReply : uint8 {
	Allow,
	Block,
	SubscriptionReply_MAX,
};

// Enum VivoxCore.SubscriptionMode
enum class SubscriptionMode : uint8 {
	Accept,
	Block,
	Defer,
	SubscriptionMode_MAX,
};

// Enum VivoxCore.LoginState
enum class LoginState : uint8 {
	LoggedOut,
	LoggingIn,
	LoggedIn,
	LoggingOut,
	LoginState_MAX,
};

// Enum VivoxCore.TTSMessageState
enum class TTSMessageState : uint8 {
	Playing,
	Enqueued,
	TTSMessageState_MAX,
};

// Enum VivoxCore.TTSDestination
enum class TTSDestination : uint8 {
	Default,
	RemoteTransmission,
	LocalPlayback,
	RemoteTransmissionWithLocalPlayback,
	QueuedRemoteTransmission,
	QueuedLocalPlayback,
	QueuedRemoteTransmissionWithLocalPlayback,
	ScreenReader,
	TTSDestination_MAX,
};

// Enum VivoxCore.PresenceStatus
enum class PresenceStatus : uint8 {
	Unavailable,
	Available,
	Chat,
	DoNotDisturb,
	Away,
	ExtendedAway,
	PresenceStatus_MAX,
};

