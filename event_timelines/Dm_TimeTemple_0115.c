-------- Event timeline: Dm_TimeTemple_0115 --------
actors: 2
clips: 5
oneshots: 0
cuts: 1
duration: 1469.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: UISystemActor[1]
concurrent clips: 1
actions: ['EventEventFadeInForTimeline', 'EventEventFadeOutForTimeline']
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


===== Timeline =====

[      0.0] E UISystemActor[1] - EventEventFadeInForTimeline (#0, concurrent=0)
               duration: 1.0
               Color: 1
               IsNoPlayAnime: false
               IsWaitEnd: true
[      1.0] L UISystemActor[1] - EventEventFadeInForTimeline (#0, concurrent=0)
[     30.0] E VoicePlayActor - EventStartVoice (#2, concurrent=0)
               duration: 452.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0120:Dm_TimeTemple_0120_Text_000_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[    482.0] L VoicePlayActor - EventStartVoice (#2, concurrent=0)
[    504.0] E VoicePlayActor - EventStartVoice (#3, concurrent=0)
               duration: 322.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0120:Dm_TimeTemple_0120_Text_001_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[    826.0] L VoicePlayActor - EventStartVoice (#3, concurrent=0)
[   1036.0] E VoicePlayActor - EventStartVoice (#4, concurrent=0)
               duration: 208.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0120:Dm_TimeTemple_0120_Text_002_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   1244.0] L VoicePlayActor - EventStartVoice (#4, concurrent=0)
[   1467.0] E UISystemActor[1] - EventEventFadeOutForTimeline (#1, concurrent=0)
               duration: 2.0
               Color: 1
               IsNoPlayAnime: true
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   1469.0] L UISystemActor[1] - EventEventFadeOutForTimeline (#1, concurrent=0)
