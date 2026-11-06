-------- Event timeline: Dm_TimeTemple_0086_Effect --------
actors: 3
clips: 4
oneshots: 0
cuts: 1
duration: 4280.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: EventEffectEmitter[0]
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

Actor: EventEffectEmitter[2]
concurrent clips: 1
actions: ['EventNodeEffectEmit']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[     94.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#0, concurrent=0)
               duration: 436.0
               ActorName: Npc_Kaepora
               ELinkKeyName: Dm_TimeTemple_0087_Feather_00
               InstanceName: '0'
               IsWaitEnd: true
[    530.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#0, concurrent=0)
[   3632.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#1, concurrent=0)
               duration: 648.0
               ActorName: Npc_Kaepora
               ELinkKeyName: Dm_TimeTemple_0087_Feather_01
               InstanceName: '0'
               IsWaitEnd: true
[   3868.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#2, concurrent=0)
               duration: 36.0
               ActorName: Npc_Kaepora
               ELinkKeyName: Dm_TimeTemple_0087_Land_L_00
               InstanceName: '0'
               IsWaitEnd: true
[   3868.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#3, concurrent=0)
               duration: 36.0
               ActorName: Npc_Kaepora
               ELinkKeyName: Dm_TimeTemple_0087_Land_R_00
               InstanceName: '0'
               IsWaitEnd: true
[   3904.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#2, concurrent=0)
[   3904.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#3, concurrent=0)
[   4280.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#1, concurrent=0)
