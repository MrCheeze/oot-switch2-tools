-------- Event timeline: Dm_FireTemple_BossOut_Effect --------
actors: 5
clips: 14
oneshots: 0
cuts: 9
duration: 3235.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)

Cut: cut02
start time: 385.0
x4: 0
params: (none)

Cut: cut03
start time: 1020.0
x4: 0
params: (none)

Cut: cut04
start time: 1380.0
x4: 0
params: (none)

Cut: cut05
start time: 1480.0
x4: 0
params: (none)

Cut: cut06
start time: 1677.0
x4: 0
params: (none)

Cut: cut07
start time: 2050.0
x4: 0
params: (none)

Cut: cut08
start time: 2250.0
x4: 0
params: (none)

Cut: cut09
start time: 2635.0
x4: 0
params: (none)


===== Actors =====

Actor: EventEffectEmitter[2]
concurrent clips: 1
actions: ['EventEffectAddELinkHiddenSetting']
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

Actor: EventEffectEmitter
concurrent clips: 1
actions: ['EventNodeEffectEmitOneShot', 'EventNodeEffectEmit']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#3, concurrent=0)
               duration: 385.0
               ActorName: Dm_Enemy_DungeonBoss_Volvagia
               ELinkKeyName: Dm_FireTemple_BossOut_Smoke_C01
               InstanceName: ''
               IsWaitEnd: true
[      0.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#10, concurrent=0)
               duration: 385.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_FireTemple_BossOut_Lava_C01
               InstanceName: '0'
               IsWaitEnd: true
[    385.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#3, concurrent=0)
[    385.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#10, concurrent=0)
[    385.0] E EventEffectEmitter[2] - EventEffectAddELinkHiddenSetting (#0, concurrent=0)
               duration: 100.0
               ActorName: Enemy_DungeonBoss_Volvagia
               KeyName: Burn_Hair_Tail
[    385.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#1, concurrent=0)
               duration: 635.0
               ActorName: Dm_Enemy_DungeonBoss_Volvagia
               ELinkKeyName: Dm_FireTemple_BossOut_Burn_HairTail_C02
               InstanceName: ''
               IsWaitEnd: true
[    385.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#4, concurrent=0)
               duration: 635.0
               ActorName: Dm_Enemy_DungeonBoss_Volvagia
               ELinkKeyName: Dm_FireTemple_BossOut_Splash_Damage_C02
               InstanceName: ''
               IsWaitEnd: true
[    485.0] L EventEffectEmitter[2] - EventEffectAddELinkHiddenSetting (#0, concurrent=0)
[   1020.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#1, concurrent=0)
[   1020.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#4, concurrent=0)
[   1020.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#2, concurrent=0)
               duration: 635.0
               ActorName: Dm_Enemy_DungeonBoss_Volvagia
               ELinkKeyName: Dm_FireTemple_BossOut_Burn_HairTail_C03
               InstanceName: ''
               IsWaitEnd: true
[   1020.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#5, concurrent=0)
               duration: 360.0
               ActorName: Dm_Enemy_DungeonBoss_Volvagia
               ELinkKeyName: Dm_FireTemple_BossOut_Splash_Damage_C03
               InstanceName: ''
               IsWaitEnd: true
[   1380.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#5, concurrent=0)
[   1480.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#6, concurrent=0)
               duration: 197.0
               ActorName: Dm_Enemy_DungeonBoss_Volvagia
               ELinkKeyName: Dm_FireTemple_BossOut_Fall_BoneGroundSmoke_C05
               InstanceName: ''
               IsWaitEnd: true
[   1655.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#2, concurrent=0)
[   1677.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#6, concurrent=0)
[   1677.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#7, concurrent=0)
               duration: 373.0
               ActorName: Dm_Enemy_DungeonBoss_Volvagia
               ELinkKeyName: Dm_FireTemple_BossOut_Disappear_Head_C06
               InstanceName: ''
               IsWaitEnd: true
[   1677.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#11, concurrent=0)
               duration: 373.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_FireTemple_BossOut_Smoke_C06
               InstanceName: '0'
               IsWaitEnd: true
[   2050.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#7, concurrent=0)
[   2050.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#11, concurrent=0)
[   2050.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#8, concurrent=0)
               duration: 200.0
               ActorName: Dm_Enemy_DungeonBoss_Volvagia
               ELinkKeyName: Dm_FireTemple_BossOut_Disappear_Head_C07
               InstanceName: ''
               IsWaitEnd: true
[   2242.0] E EventEffectEmitter - EventNodeEffectEmitOneShot (#12, concurrent=0)
               duration: 96.0
               ActorName: Dm_Locator
               ELinkKeyName: HeartCountainer_Appear
               InstanceName: '1'
[   2250.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#8, concurrent=0)
[   2250.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#9, concurrent=0)
               duration: 385.0
               ActorName: Dm_Enemy_DungeonBoss_Volvagia
               ELinkKeyName: Dm_FireTemple_BossOut_Disappear_Head_C08
               InstanceName: ''
               IsWaitEnd: true
[   2338.0] L EventEffectEmitter - EventNodeEffectEmitOneShot (#12, concurrent=0)
[   2338.0] E EventEffectEmitter - EventNodeEffectEmit (#13, concurrent=0)
               duration: 889.0
               ActorName: Dm_Locator
               ELinkKeyName: HeartCountainer_Wait
               InstanceName: '1'
               IsWaitEnd: true
[   2635.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#9, concurrent=0)
[   3227.0] L EventEffectEmitter - EventNodeEffectEmit (#13, concurrent=0)
