-------- Event timeline: Dm_SpiritTemple_BossOut_Effect --------
actors: 10
clips: 13
oneshots: 0
cuts: 1
duration: 5595.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: EventEffectEmitter[0]
concurrent clips: 1
actions: ['EventNodeEffectEmitOneShot']
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

Actor: EventEffectEmitter[3]
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
actions: ['EventNodeEffectEmitOneShot']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[11]
concurrent clips: 1
actions: ['EventNodeEffectEmit']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[6]
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

Actor: EventEffectEmitter[4]
concurrent clips: 1
actions: ['EventNodeEffectEmit']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[5]
concurrent clips: 1
actions: ['EventNodeEffectEmitOneShot']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[9]
concurrent clips: 1
actions: ['EventNodeEffectEmitOneShot', 'EventNodeEffectEmit']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[    376.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#0, concurrent=0)
               duration: 100.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_SpiritTemple_BossOut_ElementBurst
               InstanceName: C
[    376.0] E EventEffectEmitter - EventNodeEffectEmit (#1, concurrent=0)
               duration: 433.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_SpiritTemple_BossOut_KotakeTrail
               InstanceName: A
               IsWaitEnd: true
[    376.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#3, concurrent=0)
               duration: 433.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_SpiritTemple_BossOut_Koume_Trail
               InstanceName: B
               IsWaitEnd: true
[    476.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#0, concurrent=0)
[    809.0] L EventEffectEmitter - EventNodeEffectEmit (#1, concurrent=0)
[    809.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#3, concurrent=0)
[    809.0] E EventEffectEmitter - EventNodeEffectEmit (#2, concurrent=0)
               duration: 244.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_SpiritTemple_BossOut_Kotake_Appear
               InstanceName: A
               IsWaitEnd: true
[    809.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#4, concurrent=0)
               duration: 245.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_SpiritTemple_BossOut_Koume_Appear
               InstanceName: B
               IsWaitEnd: true
[    863.0] E EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#5, concurrent=0)
               duration: 3722.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_SpiritTemple_BossOut_LightShaft_00
               InstanceName: D
[   1053.0] L EventEffectEmitter - EventNodeEffectEmit (#2, concurrent=0)
[   1054.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#4, concurrent=0)
[   1441.0] E EventEffectEmitter[4] - EventNodeEffectEmit (#9, concurrent=0)
               duration: 4155.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_SpiritTemple_BossOut_AngelHalo
               InstanceName: B
               IsWaitEnd: true
[   1840.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#8, concurrent=0)
               duration: 3755.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_SpiritTemple_BossOut_AngelHalo
               InstanceName: A
               IsWaitEnd: true
[   2035.0] E EventEffectEmitter[6] - EventNodeEffectEmit (#7, concurrent=0)
               duration: 2550.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_SpiritTemple_BossOut_LightShaft_01
               InstanceName: D
               IsWaitEnd: true
[   3525.0] E EventEffectEmitter[5] - EventNodeEffectEmitOneShot (#10, concurrent=0)
               duration: 36.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_SpiritTemple_BossOut_AngelHaloContact
               InstanceName: A
[   3561.0] L EventEffectEmitter[5] - EventNodeEffectEmitOneShot (#10, concurrent=0)
[   4585.0] L EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#5, concurrent=0)
[   4585.0] L EventEffectEmitter[6] - EventNodeEffectEmit (#7, concurrent=0)
[   4585.0] E EventEffectEmitter[11] - EventNodeEffectEmit (#6, concurrent=0)
               duration: 665.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_SpiritTemple_BossOut_LightShaft_02
               InstanceName: D
               IsWaitEnd: true
[   5209.0] E EventEffectEmitter[9] - EventNodeEffectEmitOneShot (#11, concurrent=0)
               duration: 96.0
               ActorName: Dm_Locator
               ELinkKeyName: HeartCountainer_Appear
               InstanceName: '0'
[   5250.0] L EventEffectEmitter[11] - EventNodeEffectEmit (#6, concurrent=0)
[   5305.0] L EventEffectEmitter[9] - EventNodeEffectEmitOneShot (#11, concurrent=0)
[   5306.0] E EventEffectEmitter[9] - EventNodeEffectEmit (#12, concurrent=0)
               duration: 889.0
               ActorName: Dm_Locator
               ELinkKeyName: HeartCountainer_Wait
               InstanceName: '0'
               IsWaitEnd: true
[   5595.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#8, concurrent=0)
[   5596.0] L EventEffectEmitter[4] - EventNodeEffectEmit (#9, concurrent=0)
[   6195.0] L EventEffectEmitter[9] - EventNodeEffectEmit (#12, concurrent=0)
