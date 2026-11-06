-------- Event timeline: Dm_DeathMtTrail_0030_Effect --------
actors: 3
clips: 5
oneshots: 0
cuts: 1
duration: 1100.0
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

Actor: EventEffectEmitter
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

[     47.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#0, concurrent=0)
               duration: 1053.0
               ActorName: Npc_Kaepora
               ELinkKeyName: Dm_DeathMtTrail_0030_Feather_00
               InstanceName: ''
               IsWaitEnd: true
[    250.0] E EventEffectEmitter - EventNodeEffectEmit (#1, concurrent=0)
               duration: 148.0
               ActorName: Npc_Kaepora
               ELinkKeyName: Dm_DeathMtTrail_0030_Trail_00
               InstanceName: ''
               IsWaitEnd: true
[    250.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#3, concurrent=0)
               duration: 148.0
               ActorName: Npc_Kaepora
               ELinkKeyName: Dm_DeathMtTrail_0030_Trail_01
               InstanceName: ''
               IsWaitEnd: true
[    398.0] L EventEffectEmitter - EventNodeEffectEmit (#1, concurrent=0)
[    398.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#3, concurrent=0)
[    669.0] E EventEffectEmitter - EventNodeEffectEmit (#2, concurrent=0)
               duration: 106.0
               ActorName: Npc_Kaepora
               ELinkKeyName: Dm_DeathMtTrail_0030_Trail_00
               InstanceName: ''
               IsWaitEnd: true
[    669.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#4, concurrent=0)
               duration: 106.0
               ActorName: Npc_Kaepora
               ELinkKeyName: Dm_DeathMtTrail_0030_Trail_01
               InstanceName: ''
               IsWaitEnd: true
[    775.0] L EventEffectEmitter - EventNodeEffectEmit (#2, concurrent=0)
[    775.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#4, concurrent=0)
[   1100.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#0, concurrent=0)
