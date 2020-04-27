#pragma once

#include "ACCDEnums.generated.h"

// ===ENUMS===


UENUM()
enum class EConnectionLogLevel : uint8
{
	LOG = 0,
	WARNING = 1,
	ERROR = 2
};


UENUM()
enum class EOutboundMessageTypes : uint8
{
	REGISTER_COMMAND_APPLICATION = 1,
	UNREGISTER_COMMAND_APPLICATION = 9,

	REQUEST_ENTRY_LIST = 10,
	REQUEST_TRACK_DATA = 11,

	CHANGE_HUD_PAGE = 49,
	CHANGE_FOCUS = 50,
	INSTANT_REPLAY_REQUEST = 51,

	PLAY_MANUAL_REPLAY_HIGHLIGHT = 52, // TODO, but planned
	SAVE_MANUAL_REPLAY_HIGHLIGHT = 60  // TODO, but planned: saving manual replays gives distributed clients the possibility to see the play the same replay
};


UENUM()
enum class EInboundMessageTypes : uint8
{
	REGISTRATION_RESULT = 1,
	REALTIME_UPDATE = 2,
	REALTIME_CAR_UPDATE = 3,
	ENTRY_LIST = 4,
	TRACK_DATA = 5,
	ENTRY_LIST_CAR = 6,
	BROADCASTING_EVENT = 7
};


UENUM()
enum class EBNProtocolVersion : uint8
{
	BROADCAST_PROTOCOL_VERSION = 4
};


UENUM(BlueprintType)
enum class EDriverCategory : uint8
{
	Platinum = 3,
	Gold = 2,
	Silver = 1,
	Bronze = 0,
	Error = 255
};


UENUM(BlueprintType)
enum class ELapType : uint8
{
	ERROR = 0,
	Outlap = 1,
	Regular = 2,
	Inlap = 3
};


UENUM(BlueprintType)
enum class ECarLocationEnum : uint8
{
	NONE = 0,
	Track = 1,
	Pitlane = 2,
	PitEntry = 3,
	PitExit = 4
};


UENUM(BlueprintType)
enum class ESessionPhase :uint8
{
	NONE = 0,
	Starting = 1,
	PreFormation = 2,
	FormationLap = 3,
	PreSession = 4,
	Session = 5,
	SessionOver = 6,
	PostSession = 7,
	ResultUI = 8
};


UENUM(BlueprintType)
enum class ERaceSessionType : uint8
{
	Practice = 0,
	Qualifying = 4,
	Superpole = 9,
	Race = 10,
	Hotlap = 11,
	Hotstint = 12,
	HotlapSuperpole = 13,
	Replay = 14
};


UENUM(BlueprintType)
enum class EBroadcastingCarEventType : uint8
{
	None = 0,
	GreenFlag = 1,
	SessionOver = 2,
	PenaltyCommMsg = 3,
	Accident = 4,
	LapCompleted = 5,
	BestSessionLap = 6,
	BestPersonalLap = 7
};


UENUM(BlueprintType)
enum class ENationality : uint8
{
	Any = 0,
	Italy = 1,
	Germany = 2,
	France = 3,
	Spain = 4,
	GreatBritain = 5,
	Hungary = 6,
	Belgium = 7,
	Switzerland = 8,
	Austria = 9,
	Russia = 10,
	Thailand = 11,
	Netherlands = 12,
	Poland = 13,
	Argentina = 14,
	Monaco = 15,
	Ireland = 16,
	Brazil = 17,
	SouthAfrica = 18,
	PuertoRico = 19,
	Slovakia = 20,
	Oman = 21,
	Greece = 22,
	SaudiArabia = 23,
	Norway = 24,
	Turkey = 25,
	SouthKorea = 26,
	Lebanon = 27,
	Armenia = 28,
	Mexico = 29,
	Sweden = 30,
	Finland = 31,
	Denmark = 32,
	Croatia = 33,
	Canada = 34,
	China = 35,
	Portugal = 36,
	Singapore = 37,
	Indonesia = 38,
	USA = 39,
	NewZealand = 40,
	Australia = 41,
	SanMarino = 42,
	UAE = 43,
	Luxembourg = 44,
	Kuwait = 45,
	HongKong = 46,
	Colombia = 47,
	Japan = 48,
	Andorra = 49,
	Azerbaijan = 50,
	Bulgaria = 51,
	Cuba = 52,
	CzechRepublic = 53,
	Estonia = 54,
	Georgia = 55,
	India = 56,
	Israel = 57,
	Jamaica = 58,
	Latvia = 59,
	Lithuania = 60,
	Macau = 61,
	Malaysia = 62,
	Nepal = 63,
	NewCaledonia = 64,
	Nigeria = 65,
	NorthernIreland = 66,
	PapuaNewGuinea = 67,
	Philippines = 68,
	Qatar = 69,
	Romania = 70,
	Scotland = 71,
	Serbia = 72,
	Slovenia = 73,
	Taiwan = 74,
	Ukraine = 75,
	Venezuela = 76,
	Wales = 77
};