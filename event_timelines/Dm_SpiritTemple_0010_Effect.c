-------- Event timeline: Dm_SpiritTemple_0010_Effect --------
actors: 3
clips: 3
oneshots: 0
cuts: 1
duration: 3720.0
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
actions: ['EventNodeEffectEmitOneShot']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[   2520.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#0, concurrent=0)
               duration: 185.0
               ActorName: Dm_Npc_Kotake
               ELinkKeyName: Dm_SpiritTemple_0010_MagicCircle
               InstanceName: '0'
               IsWaitEnd: true
[   2520.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#1, concurrent=0)
               duration: 185.0
               ActorName: Dm_Npc_Koume
               ELinkKeyName: Dm_SpiritTemple_0010_MagicCircle
               InstanceName: '0'
               IsWaitEnd: true
[   2705.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#0, concurrent=0)
[   2705.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#1, concurrent=0)
[   3372.0] E EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#2, concurrent=0)
               duration: 18.0
               ActorName: Enemy_MiddleBoss_IronKnuckle_Nabooru
               ELinkKeyName: Dm_SpiritTemple_0010_Appear
               InstanceName: ''
[   3390.0] L EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#2, concurrent=0)
