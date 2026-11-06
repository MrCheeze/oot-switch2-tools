-------- Event timeline: Dm_ForestTemple_BossOut_Effect --------
actors: 8
clips: 27
oneshots: 0
cuts: 1
duration: 5428.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: EventEffectEmitter[1]
concurrent clips: 1
actions: ['EventNodeEffectEmitOneShot', 'EventNodeEffectEmit']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[0]
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
actions: ['EventNodeEffectEmitOneShot', 'EventNodeEffectEmit']
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

Actor: EventEffectEmitter[4]
concurrent clips: 1
actions: ['EventNodeEffectEmit', 'EventNodeEffectEmitOneShot']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[5]
concurrent clips: 1
actions: ['EventNodeEffectEmit', 'EventNodeEffectEmitOneShot']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[10]
concurrent clips: 1
actions: ['EventNodeEffectEmitOneShot', 'EventNodeEffectEmit']
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


===== Timeline =====

[      0.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#0, concurrent=0)
               duration: 279.0
               ActorName: Enemy_DungeonBoss_PhantomGanon
               ELinkKeyName: Dm_ForestTemple_BossOut_C01
               InstanceName: '0'
               IsWaitEnd: true
[    279.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#0, concurrent=0)
[    279.0] E EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#1, concurrent=0)
               duration: 141.0
               ActorName: Enemy_DungeonBoss_PhantomGanon
               ELinkKeyName: Dm_ForestTemple_BossOut_C02
               InstanceName: '0'
[    420.0] L EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#1, concurrent=0)
[   1099.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#2, concurrent=0)
               duration: 326.0
               ActorName: Enemy_DungeonBoss_PhantomGanon
               ELinkKeyName: Dm_ForestTemple_BossOut_C06
               InstanceName: '0'
               IsWaitEnd: true
[   1380.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#7, concurrent=0)
               duration: 536.0
               ActorName: Enemy_DungeonBoss_PhantomGanon
               ELinkKeyName: Dm_ForestTemple_BossOut_C07
               InstanceName: '0'
               IsWaitEnd: true
[   1425.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#2, concurrent=0)
[   1916.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#7, concurrent=0)
[   2063.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#8, concurrent=0)
               duration: 242.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_ForestTemple_BossOut_00
               InstanceName: '0'
               IsWaitEnd: true
[   2199.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#3, concurrent=0)
               duration: 174.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_ForestTemple_BossOut_01
               InstanceName: '0'
               IsWaitEnd: true
[   2278.0] E EventEffectEmitter - EventNodeEffectEmit (#26, concurrent=0)
               duration: 807.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_ForestTemple_BossOut_2dVolume
               InstanceName: ''
               IsWaitEnd: true
[   2305.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#8, concurrent=0)
[   2305.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#9, concurrent=0)
               duration: 179.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_ForestTemple_BossOut_02
               InstanceName: '0'
               IsWaitEnd: true
[   2373.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#3, concurrent=0)
[   2484.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#9, concurrent=0)
[   2672.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#4, concurrent=0)
               duration: 248.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_ForestTemple_BossOut_03
               InstanceName: '0'
               IsWaitEnd: true
[   2757.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#16, concurrent=0)
               duration: 147.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_ForestTemple_BossOut_01
               InstanceName: '0'
               IsWaitEnd: true
[   2904.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#16, concurrent=0)
[   2920.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#4, concurrent=0)
[   2920.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#10, concurrent=0)
               duration: 210.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_ForestTemple_BossOut_04
               InstanceName: '0'
               IsWaitEnd: true
[   3015.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#14, concurrent=0)
               duration: 455.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_ForestTemple_BossOut_05
               InstanceName: '0'
               IsWaitEnd: true
[   3085.0] L EventEffectEmitter - EventNodeEffectEmit (#26, concurrent=0)
[   3130.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#10, concurrent=0)
[   3142.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#17, concurrent=0)
               duration: 328.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_ForestTemple_BossOut_03
               InstanceName: '0'
               IsWaitEnd: true
[   3240.0] E EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#5, concurrent=0)
               duration: 185.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_ForestTemple_BossOut_00
               InstanceName: '0'
[   3240.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#11, concurrent=0)
               duration: 185.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_ForestTemple_BossOut_02
               InstanceName: '0'
[   3425.0] L EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#5, concurrent=0)
[   3425.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#11, concurrent=0)
[   3426.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#12, concurrent=0)
               duration: 93.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_ForestTemple_BossOut_00
               InstanceName: '0'
[   3456.0] E EventEffectEmitter[4] - EventNodeEffectEmitOneShot (#19, concurrent=0)
               duration: 63.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_ForestTemple_BossOut_ErodingPainting_00
               InstanceName: ''
[   3470.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#14, concurrent=0)
[   3470.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#17, concurrent=0)
[   3483.0] E EventEffectEmitter[5] - EventNodeEffectEmitOneShot (#21, concurrent=0)
               duration: 99.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_ForestTemple_BossOut_01
               InstanceName: '0'
[   3519.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#12, concurrent=0)
[   3519.0] L EventEffectEmitter[4] - EventNodeEffectEmitOneShot (#19, concurrent=0)
[   3519.0] E EventEffectEmitter[10] - EventNodeEffectEmitOneShot (#23, concurrent=0)
               duration: 100.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_ForestTemple_BossOut_ErodingPainting_01
               InstanceName: ''
[   3582.0] L EventEffectEmitter[5] - EventNodeEffectEmitOneShot (#21, concurrent=0)
[   3582.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#18, concurrent=0)
               duration: 199.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_ForestTemple_BossOut_09
               InstanceName: '0'
               IsWaitEnd: true
[   3582.0] E EventEffectEmitter[4] - EventNodeEffectEmit (#20, concurrent=0)
               duration: 199.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_ForestTemple_BossOut_10
               InstanceName: '0'
               IsWaitEnd: true
[   3582.0] E EventEffectEmitter[5] - EventNodeEffectEmit (#22, concurrent=0)
               duration: 199.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_ForestTemple_BossOut_11
               InstanceName: '0'
               IsWaitEnd: true
[   3610.0] E EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#6, concurrent=0)
               duration: 116.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_ForestTemple_BossOut_ErodingPainting_03
               InstanceName: ''
[   3610.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#13, concurrent=0)
               duration: 116.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_ForestTemple_BossOut_ErodingPainting_05
               InstanceName: ''
[   3610.0] E EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#15, concurrent=0)
               duration: 116.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_ForestTemple_BossOut_ErodingPainting_04
               InstanceName: '0'
[   3619.0] L EventEffectEmitter[10] - EventNodeEffectEmitOneShot (#23, concurrent=0)
[   3726.0] L EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#6, concurrent=0)
[   3726.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#13, concurrent=0)
[   3726.0] L EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#15, concurrent=0)
[   3781.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#18, concurrent=0)
[   3781.0] L EventEffectEmitter[4] - EventNodeEffectEmit (#20, concurrent=0)
[   3781.0] L EventEffectEmitter[5] - EventNodeEffectEmit (#22, concurrent=0)
[   4562.0] E EventEffectEmitter[10] - EventNodeEffectEmitOneShot (#24, concurrent=0)
               duration: 96.0
               ActorName: Dm_Locator
               ELinkKeyName: HeartCountainer_Appear
               InstanceName: '1'
[   4658.0] L EventEffectEmitter[10] - EventNodeEffectEmitOneShot (#24, concurrent=0)
[   4658.0] E EventEffectEmitter[10] - EventNodeEffectEmit (#25, concurrent=0)
               duration: 889.0
               ActorName: Dm_Locator
               ELinkKeyName: HeartCountainer_Wait
               InstanceName: '1'
               IsWaitEnd: true
[   5547.0] L EventEffectEmitter[10] - EventNodeEffectEmit (#25, concurrent=0)
