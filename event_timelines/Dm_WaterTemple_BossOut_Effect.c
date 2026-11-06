-------- Event timeline: Dm_WaterTemple_BossOut_Effect --------
actors: 9
clips: 22
oneshots: 0
cuts: 1
duration: 2591.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: EventEffectEmitter[0]
concurrent clips: 1
actions: ['EventEffectAddELinkHiddenSetting']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[6]
concurrent clips: 1
actions: ['EventEffectAddELinkHiddenSetting']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[5]
concurrent clips: 1
actions: ['EventNodeEffectEmitOneShot', 'EventNodeEffectEmit']
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

Actor: EventEffectEmitter[3]
concurrent clips: 1
actions: ['EventNodeEffectEmit']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[7]
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
actions: ['EventNodeEffectEmitOneShot']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[4]
concurrent clips: 1
actions: ['EventNodeEffectEmitOneShot', 'EventNodeEffectEmit']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventEffectEmitter[0] - EventEffectAddELinkHiddenSetting (#0, concurrent=0)
               duration: 100.0
               ActorName: Camera
               KeyName: InTheWaterOnetime
[      0.0] E EventEffectEmitter[6] - EventEffectAddELinkHiddenSetting (#1, concurrent=0)
               duration: 100.0
               ActorName: Enemy_DungeonBoss_Morpha
               KeyName: Light
[      0.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#4, concurrent=0)
               duration: 304.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_WaterTemple_BossOut_Morpha_Tentacle_C1
               InstanceName: '0'
               IsWaitEnd: true
[      0.0] E EventEffectEmitter[7] - EventNodeEffectEmit (#14, concurrent=0)
               duration: 304.0
               ActorName: Enemy_DungeonBoss_Morpha
               ELinkKeyName: Dm_WaterTemple_BossOut_Light
               InstanceName: BossDefeat
               IsWaitEnd: true
[     32.0] E EventEffectEmitter[5] - EventNodeEffectEmitOneShot (#2, concurrent=0)
               duration: 4.0
               ActorName: Enemy_DungeonBoss_Morpha
               ELinkKeyName: Dm_WaterTemple_BossOut_EntryWater
               InstanceName: BossDefeat
[     36.0] L EventEffectEmitter[5] - EventNodeEffectEmitOneShot (#2, concurrent=0)
[     36.0] E EventEffectEmitter[5] - EventNodeEffectEmit (#3, concurrent=0)
               duration: 204.0
               ActorName: Enemy_DungeonBoss_Morpha
               ELinkKeyName: Dm_WaterTemple_BossOut_Swim
               InstanceName: BossDefeat
               IsWaitEnd: true
[    100.0] L EventEffectEmitter[0] - EventEffectAddELinkHiddenSetting (#0, concurrent=0)
[    100.0] L EventEffectEmitter[6] - EventEffectAddELinkHiddenSetting (#1, concurrent=0)
[    200.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#12, concurrent=0)
               duration: 808.0
               ActorName: Enemy_DungeonBoss_Morpha
               ELinkKeyName: Dm_WaterTemple_BossOut_Move_Cut1-3
               InstanceName: BossDefeat
               IsWaitEnd: true
[    240.0] L EventEffectEmitter[5] - EventNodeEffectEmit (#3, concurrent=0)
[    304.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#4, concurrent=0)
[    304.0] L EventEffectEmitter[7] - EventNodeEffectEmit (#14, concurrent=0)
[    304.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#5, concurrent=0)
               duration: 365.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_WaterTemple_BossOut_Morpha_Tentacle_C2
               InstanceName: '0'
               IsWaitEnd: true
[    304.0] E EventEffectEmitter[7] - EventNodeEffectEmit (#15, concurrent=0)
               duration: 365.0
               ActorName: Enemy_DungeonBoss_Morpha
               ELinkKeyName: Dm_WaterTemple_BossOut_Light
               InstanceName: BossDefeat
               IsWaitEnd: true
[    669.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#5, concurrent=0)
[    669.0] L EventEffectEmitter[7] - EventNodeEffectEmit (#15, concurrent=0)
[    669.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#6, concurrent=0)
               duration: 340.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_WaterTemple_BossOut_Morpha_Tentacle_C3
               InstanceName: '0'
               IsWaitEnd: true
[    669.0] E EventEffectEmitter[7] - EventNodeEffectEmit (#16, concurrent=0)
               duration: 339.0
               ActorName: Enemy_DungeonBoss_Morpha
               ELinkKeyName: Dm_WaterTemple_BossOut_Light
               InstanceName: BossDefeat
               IsWaitEnd: true
[   1008.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#12, concurrent=0)
[   1008.0] L EventEffectEmitter[7] - EventNodeEffectEmit (#16, concurrent=0)
[   1008.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#13, concurrent=0)
               duration: 72.0
               ActorName: Enemy_DungeonBoss_Morpha
               ELinkKeyName: Dm_WaterTemple_BossOut_Move_Cut4-5
               InstanceName: BossDefeat
               IsWaitEnd: true
[   1008.0] E EventEffectEmitter[7] - EventNodeEffectEmit (#17, concurrent=0)
               duration: 116.0
               ActorName: Enemy_DungeonBoss_Morpha
               ELinkKeyName: Dm_WaterTemple_BossOut_Light
               InstanceName: BossDefeat
               IsWaitEnd: true
[   1009.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#6, concurrent=0)
[   1009.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#7, concurrent=0)
               duration: 115.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_WaterTemple_BossOut_Morpha_Tentacle_C4
               InstanceName: '0'
               IsWaitEnd: true
[   1080.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#13, concurrent=0)
[   1124.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#7, concurrent=0)
[   1124.0] L EventEffectEmitter[7] - EventNodeEffectEmit (#17, concurrent=0)
[   1124.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#8, concurrent=0)
               duration: 410.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_WaterTemple_BossOut_Morpha_Tentacle_C5
               InstanceName: '0'
               IsWaitEnd: true
[   1124.0] E EventEffectEmitter[7] - EventNodeEffectEmit (#18, concurrent=0)
               duration: 255.0
               ActorName: Enemy_DungeonBoss_Morpha
               ELinkKeyName: Dm_WaterTemple_BossOut_Light
               InstanceName: BossDefeat
               IsWaitEnd: true
[   1379.0] L EventEffectEmitter[7] - EventNodeEffectEmit (#18, concurrent=0)
[   1379.0] E EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#11, concurrent=0)
               duration: 100.0
               ActorName: Enemy_DungeonBoss_Morpha
               ELinkKeyName: Dm_WaterTemple_BossOut_Dissappear
               InstanceName: BossDefeat
[   1479.0] L EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#11, concurrent=0)
[   1534.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#8, concurrent=0)
[   1534.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#9, concurrent=0)
               duration: 96.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_WaterTemple_BossOut_Morpha_Tentacle_C6
               InstanceName: '0'
               IsWaitEnd: true
[   1630.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#9, concurrent=0)
[   1630.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#10, concurrent=0)
               duration: 360.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_WaterTemple_BossOut_Morpha_Tentacle_C7
               InstanceName: '0'
               IsWaitEnd: true
[   1652.0] E EventEffectEmitter - EventNodeEffectEmitOneShot (#19, concurrent=0)
               duration: 100.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_WaterTemple_BossOut_Morpha_DropSplash
               InstanceName: '0'
[   1714.0] E EventEffectEmitter[4] - EventNodeEffectEmitOneShot (#20, concurrent=0)
               duration: 96.0
               ActorName: Dm_Locator
               ELinkKeyName: HeartCountainer_Appear
               InstanceName: '0'
[   1752.0] L EventEffectEmitter - EventNodeEffectEmitOneShot (#19, concurrent=0)
[   1810.0] L EventEffectEmitter[4] - EventNodeEffectEmitOneShot (#20, concurrent=0)
[   1810.0] E EventEffectEmitter[4] - EventNodeEffectEmit (#21, concurrent=0)
               duration: 889.0
               ActorName: Dm_Locator
               ELinkKeyName: HeartCountainer_Wait
               InstanceName: '0'
               IsWaitEnd: true
[   1990.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#10, concurrent=0)
[   2699.0] L EventEffectEmitter[4] - EventNodeEffectEmit (#21, concurrent=0)
