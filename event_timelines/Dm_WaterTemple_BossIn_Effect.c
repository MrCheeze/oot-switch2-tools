-------- Event timeline: Dm_WaterTemple_BossIn_Effect --------
actors: 7
clips: 16
oneshots: 0
cuts: 1
duration: 1783.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: EventEffectEmitter[1]
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

Actor: EventEffectEmitter[2]
concurrent clips: 1
actions: ['EventNodeEffectEmitOneShot', 'EventNodeEffectEmit']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[4]
concurrent clips: 1
actions: ['EventNodeEffectEmitOneShot']
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

Actor: EventEffectEmitter[3]
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


===== Timeline =====

[      0.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#0, concurrent=0)
               duration: 300.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_WaterTemple_BossIn_SwimWait_C1
               InstanceName: '0'
               IsWaitEnd: true
[    300.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#0, concurrent=0)
[    440.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#1, concurrent=0)
               duration: 160.0
               ActorName: Enemy_DungeonBoss_Morpha
               ELinkKeyName: Dm_WaterTemple_BossIn_Swim
               InstanceName: BossDefeat
               IsWaitEnd: true
[    600.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#1, concurrent=0)
[    644.0] E EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#2, concurrent=0)
               duration: 54.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_WaterTemple_BossIn_Splash_Hide_C3
               InstanceName: '0'
[    698.0] L EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#2, concurrent=0)
[    784.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#3, concurrent=0)
               duration: 146.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_WaterTemple_BossIn_StainFloor_C4
               InstanceName: '0'
               IsWaitEnd: true
[    874.0] E EventEffectEmitter[4] - EventNodeEffectEmitOneShot (#4, concurrent=0)
               duration: 8.0
               ActorName: Enemy_DungeonBoss_Morpha_Tentacle
               ELinkKeyName: Dm_WaterTemple_BossIn_WaterDrop_00
               InstanceName: BossIn
[    882.0] L EventEffectEmitter[4] - EventNodeEffectEmitOneShot (#4, concurrent=0)
[    910.0] E EventEffectEmitter - EventNodeEffectEmit (#13, concurrent=0)
               duration: 214.0
               ActorName: Enemy_DungeonBoss_Morpha
               ELinkKeyName: Light_ライド時
               InstanceName: BossDefeat
               IsWaitEnd: true
[    930.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#3, concurrent=0)
[    930.0] E EventEffectEmitter[4] - EventNodeEffectEmitOneShot (#5, concurrent=0)
               duration: 8.0
               ActorName: Enemy_DungeonBoss_Morpha_Tentacle
               ELinkKeyName: Dm_WaterTemple_BossIn_WaterDrop_01
               InstanceName: BossIn
[    938.0] L EventEffectEmitter[4] - EventNodeEffectEmitOneShot (#5, concurrent=0)
[   1034.0] E EventEffectEmitter[5] - EventNodeEffectEmitOneShot (#6, concurrent=0)
               duration: 10.0
               ActorName: Enemy_DungeonBoss_Morpha_Tentacle
               ELinkKeyName: Dm_WaterTemple_BossIn_SwingSplah_00
               InstanceName: BossIn
[   1044.0] L EventEffectEmitter[5] - EventNodeEffectEmitOneShot (#6, concurrent=0)
[   1124.0] L EventEffectEmitter - EventNodeEffectEmit (#13, concurrent=0)
[   1124.0] E EventEffectEmitter[5] - EventNodeEffectEmitOneShot (#7, concurrent=0)
               duration: 10.0
               ActorName: Enemy_DungeonBoss_Morpha_Tentacle
               ELinkKeyName: Dm_WaterTemple_BossIn_WriggleSplash_00
               InstanceName: BossIn
[   1124.0] E EventEffectEmitter - EventNodeEffectEmit (#14, concurrent=0)
               duration: 364.0
               ActorName: Enemy_DungeonBoss_Morpha
               ELinkKeyName: Light_ライド時
               InstanceName: BossDefeat
               IsWaitEnd: true
[   1134.0] L EventEffectEmitter[5] - EventNodeEffectEmitOneShot (#7, concurrent=0)
[   1488.0] L EventEffectEmitter - EventNodeEffectEmit (#14, concurrent=0)
[   1488.0] E EventEffectEmitter - EventNodeEffectEmit (#15, concurrent=0)
               duration: 295.0
               ActorName: Enemy_DungeonBoss_Morpha
               ELinkKeyName: Light_地上
               InstanceName: BossDefeat
               IsWaitEnd: true
[   1498.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#8, concurrent=0)
               duration: 28.0
               ActorName: Enemy_DungeonBoss_Morpha_Tentacle
               ELinkKeyName: Dm_WaterTemple_BossIn_ReturnSplash_00
               InstanceName: BossIn
[   1526.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#8, concurrent=0)
[   1572.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#9, concurrent=0)
               duration: 30.0
               ActorName: Enemy_DungeonBoss_Morpha
               ELinkKeyName: Dm_WaterTemple_BossIn_EntryWater_C6
               InstanceName: BossDefeat
[   1602.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#9, concurrent=0)
[   1630.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#10, concurrent=0)
               duration: 30.0
               ActorName: Enemy_DungeonBoss_Morpha
               ELinkKeyName: Dm_WaterTemple_BossIn_EntryWater_C6
               InstanceName: BossDefeat
[   1660.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#10, concurrent=0)
[   1660.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#11, concurrent=0)
               duration: 20.0
               ActorName: Enemy_DungeonBoss_Morpha
               ELinkKeyName: Dm_WaterTemple_BossIn_EntryWater_C6
               InstanceName: BossDefeat
[   1680.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#11, concurrent=0)
[   1708.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#12, concurrent=0)
               duration: 30.0
               ActorName: Enemy_DungeonBoss_Morpha
               ELinkKeyName: Dm_WaterTemple_BossIn_EntryWater_C6
               InstanceName: BossDefeat
[   1738.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#12, concurrent=0)
[   1783.0] L EventEffectEmitter - EventNodeEffectEmit (#15, concurrent=0)
