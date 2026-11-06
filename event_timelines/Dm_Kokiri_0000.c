-------- Event timeline: Dm_Kokiri_0000 --------
actors: 5
clips: 24
oneshots: 0
cuts: 7
duration: 9255.0
subtimelines: ['Dm_Kokiri_0000_Effect']
params: (none)

===== Cuts =====

Cut: cut01
start time: 0.0
x4: 0
params: (none)

Cut: cut02
start time: 1104.0
x4: 0
params: (none)

Cut: cut03
start time: 2683.0
x4: 0
params: (none)

Cut: cut04
start time: 2956.0
x4: 0
params: (none)

Cut: cut05
start time: 3586.0
x4: 0
params: (none)

Cut: cut06
start time: 4126.0
x4: 0
params: (none)

Cut: cut07
start time: 4346.0
x4: 0
params: (none)


===== Actors =====

Actor: GameSystemActor[0]
concurrent clips: 1
actions: ['EventControllerRumbleTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: UISystemActor[0]
concurrent clips: 1
actions: ['EventOpenOpeningTitle', 'EventEventFadeOutForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: VoicePlayActor[0]
concurrent clips: 1
actions: ['EventStartVoice']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: VoicePlayActor
concurrent clips: 1
actions: ['EventStartVoice']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: VoicePlayActor[1]
concurrent clips: 1
actions: ['EventStartVoice']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[    150.0] E VoicePlayActor[0] - EventStartVoice (#13, concurrent=0)
               duration: 459.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0000:Dm_Kokiri_0000_Text_000_b
               OffsetFrame: 30
               Speaker: Npc_Narrator
[    609.0] L VoicePlayActor[0] - EventStartVoice (#13, concurrent=0)
[    654.0] E VoicePlayActor[0] - EventStartVoice (#14, concurrent=0)
               duration: 328.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0000:Dm_Kokiri_0000_Text_001_b
               OffsetFrame: 30
               Speaker: Npc_Narrator
[    982.0] L VoicePlayActor[0] - EventStartVoice (#14, concurrent=0)
[   1174.0] E VoicePlayActor[0] - EventStartVoice (#15, concurrent=0)
               duration: 492.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0000:Dm_Kokiri_0000_Text_002_b
               OffsetFrame: 50
               Speaker: Npc_Narrator
[   1666.0] L VoicePlayActor[0] - EventStartVoice (#15, concurrent=0)
[   1900.0] E VoicePlayActor[0] - EventStartVoice (#16, concurrent=0)
               duration: 253.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0000:Dm_Kokiri_0000_Text_003_b
               OffsetFrame: 30
               Speaker: Npc_Narrator
[   2153.0] L VoicePlayActor[0] - EventStartVoice (#16, concurrent=0)
[   2169.0] E VoicePlayActor[0] - EventStartVoice (#17, concurrent=0)
               duration: 412.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0000:Dm_Kokiri_0000_Text_004_b
               OffsetFrame: 30
               Speaker: Npc_Narrator
[   2581.0] L VoicePlayActor[0] - EventStartVoice (#17, concurrent=0)
[   2686.0] E VoicePlayActor[0] - EventStartVoice (#18, concurrent=0)
               duration: 241.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0000:Dm_Kokiri_0000_Text_005_b
               OffsetFrame: 30
               Speaker: Npc_Narrator
[   2927.0] L VoicePlayActor[0] - EventStartVoice (#18, concurrent=0)
[   3046.0] E VoicePlayActor[0] - EventStartVoice (#19, concurrent=0)
               duration: 294.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0000:Dm_Kokiri_0000_Text_006_b
               OffsetFrame: 30
               Speaker: Npc_Narrator
[   3340.0] L VoicePlayActor[0] - EventStartVoice (#19, concurrent=0)
[   3724.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#0, concurrent=0)
               duration: 228.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Kokiri_0000_C04
[   3768.0] E VoicePlayActor[0] - EventStartVoice (#20, concurrent=0)
               duration: 193.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0000:Dm_Kokiri_0000_Text_007_b
               OffsetFrame: 30
               Speaker: Player_Event
[   3952.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#0, concurrent=0)
[   3961.0] L VoicePlayActor[0] - EventStartVoice (#20, concurrent=0)
[   4039.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#1, concurrent=0)
               duration: 226.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Kokiri_0000_C05
[   4265.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#1, concurrent=0)
[   4369.0] E VoicePlayActor - EventStartVoice (#21, concurrent=0)
               duration: 481.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0010:Dm_Kokiri_0010_Text_000_b
               OffsetFrame: 30
               Speaker: Dm_Player_Child_Op
[   4487.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#2, concurrent=0)
               duration: 140.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Kokiri_0000_C06
[   4627.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#2, concurrent=0)
[   4850.0] L VoicePlayActor - EventStartVoice (#21, concurrent=0)
[   5262.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#3, concurrent=0)
               duration: 40.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_GoroGoro
[   5302.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#3, concurrent=0)
[   5400.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#4, concurrent=0)
               duration: 14.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   5414.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#4, concurrent=0)
[   5442.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#5, concurrent=0)
               duration: 251.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_GoGoGo
[   5693.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#5, concurrent=0)
[   5694.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#6, concurrent=0)
               duration: 35.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_Doon
[   5729.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#6, concurrent=0)
[   5766.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#7, concurrent=0)
               duration: 25.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Doon
[   5791.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#7, concurrent=0)
[   6081.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#8, concurrent=0)
               duration: 16.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Doon
[   6097.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#8, concurrent=0)
[   6496.0] E VoicePlayActor[1] - EventStartVoice (#23, concurrent=0)
               duration: 60.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0010:Dm_Kokiri_0010_Text_001_b
               OffsetFrame: 30
               Speaker: Player_Event
[   6556.0] L VoicePlayActor[1] - EventStartVoice (#23, concurrent=0)
[   6617.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#9, concurrent=0)
               duration: 20.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_DoDon
[   6637.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#9, concurrent=0)
[   7089.0] E VoicePlayActor - EventStartVoice (#22, concurrent=0)
               duration: 74.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0010:Dm_Kokiri_0010_Text_003_b
               OffsetFrame: 30
               Speaker: Dm_Player_Child_Op
[   7163.0] L VoicePlayActor - EventStartVoice (#22, concurrent=0)
[   8090.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#10, concurrent=0)
               duration: 14.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   8104.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#10, concurrent=0)
[   8235.0] E UISystemActor[0] - EventOpenOpeningTitle (#11, concurrent=0)
               duration: 870.0
               AlphaFadeInFrame: 90.0
               AlphaFadeOutFrame: 130.0
               IsWaitEnd: true
               ScaleEndFrame: 200.0
               ScaleStartFrame: 1.0
[   9105.0] L UISystemActor[0] - EventOpenOpeningTitle (#11, concurrent=0)
[   9115.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#12, concurrent=0)
               duration: 10.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   9125.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#12, concurrent=0)
