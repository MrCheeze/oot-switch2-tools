-------- Event timeline: Dm_DodongoCave_BossOut_Effect --------
actors: 6
clips: 18
oneshots: 0
cuts: 1
duration: 3080.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: EventEffectEmitter[4]
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
actions: ['EventNodeEffectEmitOneShot', 'EventEffectAddELinkHiddenSetting']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter
concurrent clips: 1
actions: ['EventNodeEffectEmitOneShot']
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
actions: ['EventNodeEffectEmit', 'EventNodeEffectEmitOneShot']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[3]
concurrent clips: 1
actions: ['EventNodeEffectEmitOneShot', 'EventNodeEffectEmit']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventEffectEmitter[1] - EventEffectAddELinkHiddenSetting (#3, concurrent=0)
               duration: 100.0
               ActorName: Obj_DodongoCave_LavaDirty_A_02
               KeyName: Steam_Loop
[      0.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#15, concurrent=0)
               duration: 1872.0
               ActorName: Obj_DodongoCave_LavaDirty_A_02
               ELinkKeyName: Dm_DodongoCave_BossOut_Spark_C01
               InstanceName: '0'
               IsWaitEnd: true
[    100.0] L EventEffectEmitter[1] - EventEffectAddELinkHiddenSetting (#3, concurrent=0)
[    300.0] E EventEffectEmitter[4] - EventNodeEffectEmit (#0, concurrent=0)
               duration: 330.0
               ActorName: Enemy_DungeonBoss_Dodongo
               ELinkKeyName: Dm_DodongoCave_BossOut_Rolling_C02
               InstanceName: ''
               IsWaitEnd: true
[    564.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#11, concurrent=0)
               duration: 43.0
               ActorName: Enemy_DungeonBoss_Dodongo
               ELinkKeyName: Dm_DodongoCave_BossOut_HitWall_C02
               InstanceName: ''
[    607.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#11, concurrent=0)
[    630.0] L EventEffectEmitter[4] - EventNodeEffectEmit (#0, concurrent=0)
[    630.0] E EventEffectEmitter[4] - EventNodeEffectEmit (#1, concurrent=0)
               duration: 84.0
               ActorName: Enemy_DungeonBoss_Dodongo
               ELinkKeyName: Dm_DodongoCave_BossOut_Rolling_C03
               InstanceName: ''
               IsWaitEnd: true
[    714.0] L EventEffectEmitter[4] - EventNodeEffectEmit (#1, concurrent=0)
[    714.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#12, concurrent=0)
               duration: 63.0
               ActorName: Enemy_DungeonBoss_Dodongo
               ELinkKeyName: Dm_DodongoCave_BossOut_HitWall_C03
               InstanceName: ''
[    777.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#12, concurrent=0)
[    822.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#13, concurrent=0)
               duration: 260.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_DodongoCave_BossOut_BreakFloor_C04
               InstanceName: '0'
               IsWaitEnd: true
[    908.0] E EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#4, concurrent=0)
               duration: 7.0
               ActorName: Enemy_DungeonBoss_Dodongo
               ELinkKeyName: Dm_DodongoCave_BossOut_Lava_C04
               InstanceName: ''
[    910.0] E EventEffectEmitter - EventNodeEffectEmitOneShot (#7, concurrent=0)
               duration: 5.0
               ActorName: Enemy_DungeonBoss_Dodongo
               ELinkKeyName: Dm_DodongoCave_BossOut_LavaLeftArm_C04
               InstanceName: ''
[    915.0] L EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#4, concurrent=0)
[    915.0] L EventEffectEmitter - EventNodeEffectEmitOneShot (#7, concurrent=0)
[    965.0] E EventEffectEmitter - EventNodeEffectEmitOneShot (#8, concurrent=0)
               duration: 5.0
               ActorName: Enemy_DungeonBoss_Dodongo
               ELinkKeyName: Dm_DodongoCave_BossOut_LavaRightArm_C04
               InstanceName: ''
[    970.0] L EventEffectEmitter - EventNodeEffectEmitOneShot (#8, concurrent=0)
[    980.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#10, concurrent=0)
               duration: 1329.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_DodongoCave_BossOut_Smoke_C05
               InstanceName: '0'
               IsWaitEnd: true
[   1082.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#13, concurrent=0)
[   1100.0] E EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#5, concurrent=0)
               duration: 219.0
               ActorName: Enemy_DungeonBoss_Dodongo
               ELinkKeyName: Dm_DodongoCave_BossOut_Lava_First
               InstanceName: ''
[   1206.0] E EventEffectEmitter - EventNodeEffectEmitOneShot (#9, concurrent=0)
               duration: 95.0
               ActorName: Enemy_DungeonBoss_Dodongo
               ELinkKeyName: Dm_DodongoCave_BossOut_Lava_Dive
               InstanceName: ''
[   1301.0] L EventEffectEmitter - EventNodeEffectEmitOneShot (#9, concurrent=0)
[   1319.0] L EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#5, concurrent=0)
[   1338.0] E EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#6, concurrent=0)
               duration: 246.0
               ActorName: Enemy_DungeonBoss_Dodongo
               ELinkKeyName: Dm_DodongoCave_BossOut_Lava_Second
               InstanceName: ''
[   1484.0] E EventEffectEmitter[4] - EventNodeEffectEmit (#2, concurrent=0)
               duration: 631.0
               ActorName: Enemy_DungeonBoss_Dodongo
               ELinkKeyName: Dm_DodongoCave_BossOut_Petrification
               InstanceName: ''
               IsWaitEnd: true
[   1584.0] L EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#6, concurrent=0)
[   1872.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#15, concurrent=0)
[   1872.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#14, concurrent=0)
               duration: 1208.0
               ActorName: Enemy_DungeonBoss_Dodongo
               ELinkKeyName: Dm_DodongoCave_BossOut_Smoke_Corpse
               InstanceName: ''
               IsWaitEnd: true
[   2115.0] L EventEffectEmitter[4] - EventNodeEffectEmit (#2, concurrent=0)
[   2309.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#10, concurrent=0)
[   2334.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#16, concurrent=0)
               duration: 96.0
               ActorName: Dm_Locator
               ELinkKeyName: HeartCountainer_Appear
               InstanceName: '0'
[   2430.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#16, concurrent=0)
[   2430.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#17, concurrent=0)
               duration: 889.0
               ActorName: Dm_Locator
               ELinkKeyName: HeartCountainer_Wait
               InstanceName: '0'
               IsWaitEnd: true
[   3080.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#14, concurrent=0)
[   3319.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#17, concurrent=0)
