-------- Event timeline: Dm_TimeTemple_0110_Effect --------
actors: 4
clips: 8
oneshots: 0
cuts: 1
duration: 6570.0
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
actions: ['EventNodeEffectEmitOneShot', 'EventNodeEffectEmit']
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

Actor: EventEffectEmitter[3]
concurrent clips: 1
actions: ['EventNodeEffectEmit']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[   2583.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#4, concurrent=0)
               duration: 117.0
               ActorName: Npc_Hylia_Sheik_Adult
               ELinkKeyName: Dm_TimeTemple_0110_C10
               InstanceName: ''
               IsWaitEnd: true
[   2700.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#4, concurrent=0)
[   2826.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#0, concurrent=0)
               duration: 175.0
               ActorName: CameraXLinkControl
               ELinkKeyName: Dm_TimeTemple_0110_C12
               InstanceName: ''
               IsWaitEnd: true
[   3001.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#0, concurrent=0)
[   3001.0] E EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#1, concurrent=0)
               duration: 96.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_TimeTemple_0110_C13
               InstanceName: '0'
[   3097.0] L EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#1, concurrent=0)
[   3097.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#5, concurrent=0)
               duration: 357.0
               ActorName: Npc_Hylia_Sheik_Adult
               ELinkKeyName: Dm_TimeTemple_0110_C14
               InstanceName: '0'
               IsWaitEnd: true
[   3454.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#5, concurrent=0)
[   3454.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#6, concurrent=0)
               duration: 169.0
               ActorName: Npc_Hylia_Sheik_Adult
               ELinkKeyName: Dm_TimeTemple_0110_C15
               InstanceName: '0'
               IsWaitEnd: true
[   3623.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#6, concurrent=0)
[   3623.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#2, concurrent=0)
               duration: 177.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_TimeTemple_0110_C16
               InstanceName: '0'
               IsWaitEnd: true
[   3800.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#2, concurrent=0)
[   3800.0] E EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#3, concurrent=0)
               duration: 574.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_TimeTemple_0110_C17
               InstanceName: '0'
[   3800.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#7, concurrent=0)
               duration: 814.0
               ActorName: Npc_Hylia_Zelda_Adult
               ELinkKeyName: Dm_TimeTemple_0110_C17
               InstanceName: '0'
               IsWaitEnd: true
[   4374.0] L EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#3, concurrent=0)
[   4614.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#7, concurrent=0)
