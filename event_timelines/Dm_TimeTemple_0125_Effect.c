-------- Event timeline: Dm_TimeTemple_0125_Effect --------
actors: 4
clips: 5
oneshots: 0
cuts: 1
duration: 5185.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: EventEffectEmitter[3]
concurrent clips: 1
actions: ['EventNodeEffectEmit']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[0]
concurrent clips: 1
actions: ['EventNodeEffectEmit']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[2]
concurrent clips: 1
actions: ['EventNodeEffectEmit']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[1]
concurrent clips: 1
actions: ['EventNodeEffectEmit']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[   4300.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#1, concurrent=0)
               duration: 445.0
               ActorName: Npc_Hylia_Zelda_Adult
               ELinkKeyName: Dm_TimeTemple_0125_C08
               InstanceName: '0'
               IsWaitEnd: true
[   4410.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#2, concurrent=0)
               duration: 150.0
               ActorName: Npc_Hylia_Zelda_Adult
               ELinkKeyName: Dm_TimeTemple_0125_C09
               InstanceName: '0'
               IsWaitEnd: true
[   4560.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#2, concurrent=0)
[   4560.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#3, concurrent=0)
               duration: 185.0
               ActorName: Npc_Hylia_Zelda_Adult
               ELinkKeyName: Dm_TimeTemple_0125_C10
               InstanceName: '0'
               IsWaitEnd: true
[   4637.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#0, concurrent=0)
               duration: 108.0
               ActorName: CameraXLinkControl
               ELinkKeyName: Dm_TimeTemple_0125_C10
               InstanceName: ''
               IsWaitEnd: true
[   4745.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#0, concurrent=0)
[   4745.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#1, concurrent=0)
[   4745.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#3, concurrent=0)
[   4745.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#4, concurrent=0)
               duration: 439.0
               ActorName: Player_Event
               ELinkKeyName: Dm_TimeTemple_0125_C11
               InstanceName: '0'
               IsWaitEnd: true
[   5184.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#4, concurrent=0)
