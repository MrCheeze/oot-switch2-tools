-------- Event timeline: Dm_FireTemple_BossIn_Effect --------
actors: 5
clips: 13
oneshots: 0
cuts: 1
duration: 2831.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: EventEffectEmitter[3]
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

Actor: EventEffectEmitter[0]
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
actions: ['EventEffectAddELinkHiddenSetting', 'EventEffectDeleteELinkHiddenSetting']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[5]
concurrent clips: 1
actions: ['EventNodeEffectEmit']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[    386.0] E EventEffectEmitter - EventNodeEffectEmit (#5, concurrent=0)
               duration: 160.0
               ActorName: Obj_FireTemple_SinkFloor_A_02
               ELinkKeyName: Dm_FireTemple_BossIn_Lava
               InstanceName: '0'
               IsWaitEnd: true
[    546.0] L EventEffectEmitter - EventNodeEffectEmit (#5, concurrent=0)
[    841.0] E EventEffectEmitter - EventNodeEffectEmit (#6, concurrent=0)
               duration: 75.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_FireTemple_BossIn_Appear_Lava
               InstanceName: '0'
               IsWaitEnd: false
[    916.0] L EventEffectEmitter - EventNodeEffectEmit (#6, concurrent=0)
[   1130.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#0, concurrent=0)
               duration: 66.0
               ActorName: CameraXLinkControl
               ELinkKeyName: Dm_FireTemple_BossIn_HeatHaze_00
               InstanceName: ''
               IsWaitEnd: true
[   1196.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#0, concurrent=0)
[   1507.0] E EventEffectEmitter - EventNodeEffectEmit (#7, concurrent=0)
               duration: 420.0
               ActorName: Enemy_DungeonBoss_Volvagia
               ELinkKeyName: Dm_FireTemple_BossIn_Flamethrower
               InstanceName: ''
               IsWaitEnd: false
[   1507.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#9, concurrent=0)
               duration: 250.0
               ActorName: Enemy_DungeonBoss_Volvagia
               ELinkKeyName: Dm_FireTemple_BossIn_FallRock
               InstanceName: ''
               IsWaitEnd: true
[   1507.0] E EventEffectEmitter[4] - EventEffectAddELinkHiddenSetting (#10, concurrent=0)
               duration: 25.0
               ActorName: Enemy_DungeonBoss_Volvagia
               KeyName: Burn_Hair_Tail
[   1510.0] E EventEffectEmitter[5] - EventNodeEffectEmit (#12, concurrent=0)
               duration: 390.0
               ActorName: Enemy_DungeonBoss_Volvagia
               ELinkKeyName: Dm_FireTemple_BossIn_Burn_HairTail
               InstanceName: ''
               IsWaitEnd: true
[   1514.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#1, concurrent=0)
               duration: 18.0
               ActorName: CameraXLinkControl
               ELinkKeyName: Dm_FireTemple_BossIn_HeatHaze_00
               InstanceName: ''
               IsWaitEnd: true
[   1532.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#1, concurrent=0)
[   1532.0] L EventEffectEmitter[4] - EventEffectAddELinkHiddenSetting (#10, concurrent=0)
[   1757.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#9, concurrent=0)
[   1792.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#2, concurrent=0)
               duration: 25.0
               ActorName: CameraXLinkControl
               ELinkKeyName: Dm_FireTemple_BossIn_HeatHaze_00
               InstanceName: ''
               IsWaitEnd: true
[   1817.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#2, concurrent=0)
[   1900.0] L EventEffectEmitter[5] - EventNodeEffectEmit (#12, concurrent=0)
[   1900.0] E EventEffectEmitter[4] - EventEffectDeleteELinkHiddenSetting (#11, concurrent=0)
               duration: 49.0
               ActorName: Enemy_DungeonBoss_Volvagia
               KeyName: Burn_Hair_Tail
[   1927.0] L EventEffectEmitter - EventNodeEffectEmit (#7, concurrent=0)
[   1949.0] L EventEffectEmitter[4] - EventEffectDeleteELinkHiddenSetting (#11, concurrent=0)
[   2114.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#3, concurrent=0)
               duration: 57.0
               ActorName: CameraXLinkControl
               ELinkKeyName: Dm_FireTemple_BossIn_HeatHaze_00
               InstanceName: ''
               IsWaitEnd: true
[   2171.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#3, concurrent=0)
[   2476.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#4, concurrent=0)
               duration: 34.0
               ActorName: CameraXLinkControl
               ELinkKeyName: Dm_FireTemple_BossIn_HeatHaze_00
               InstanceName: ''
               IsWaitEnd: true
[   2510.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#4, concurrent=0)
[   2535.0] E EventEffectEmitter - EventNodeEffectEmit (#8, concurrent=0)
               duration: 245.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_FireTemple_BossIn_Dissapear_Lava
               InstanceName: '0'
               IsWaitEnd: true
[   2780.0] L EventEffectEmitter - EventNodeEffectEmit (#8, concurrent=0)
