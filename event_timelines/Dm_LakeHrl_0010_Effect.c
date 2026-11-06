-------- Event timeline: Dm_LakeHrl_0010_Effect --------
actors: 4
clips: 4
oneshots: 0
cuts: 1
duration: 1400.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

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

Actor: EventEffectEmitter[2]
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


===== Timeline =====

[      0.0] E EventEffectEmitter - EventNodeEffectEmit (#0, concurrent=0)
               duration: 1400.0
               ActorName: Npc_Kaepora_LakeHylia
               ELinkKeyName: Dm_LakeHrl_0010_Feather_00
               InstanceName: '0'
               IsWaitEnd: true
[    346.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#1, concurrent=0)
               duration: 114.0
               ActorName: Npc_Kaepora_LakeHylia
               ELinkKeyName: Dm_LakeHrl_0010_Trail_00
               InstanceName: '0'
               IsWaitEnd: true
[    346.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#2, concurrent=0)
               duration: 114.0
               ActorName: Npc_Kaepora_LakeHylia
               ELinkKeyName: Dm_LakeHrl_0010_Trail_01
               InstanceName: '0'
               IsWaitEnd: true
[    416.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#3, concurrent=0)
               duration: 200.0
               ActorName: Player_Event
               ELinkKeyName: Dm_LakeHrl_0010_WaterSplash_00
               InstanceName: '0'
               IsWaitEnd: true
[    460.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#1, concurrent=0)
[    460.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#2, concurrent=0)
[    616.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#3, concurrent=0)
[   1400.0] L EventEffectEmitter - EventNodeEffectEmit (#0, concurrent=0)
