-------- Event timeline: Dm_DodongoCave_BossIn_Effect --------
actors: 3
clips: 16
oneshots: 0
cuts: 1
duration: 2280.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: EventEffectEmitter[1]
concurrent clips: 1
actions: ['EventEffectAddELinkHiddenSetting', 'EventEffectDeleteELinkHiddenSetting']
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
actions: ['EventNodeEffectEmit']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventEffectEmitter[1] - EventEffectAddELinkHiddenSetting (#0, concurrent=0)
               duration: 100.0
               ActorName: Obj_DodongoCave_LavaDirty_A_02
               KeyName: Steam_Loop
[    100.0] L EventEffectEmitter[1] - EventEffectAddELinkHiddenSetting (#0, concurrent=0)
[    101.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#2, concurrent=0)
               duration: 79.0
               ActorName: Player_Event
               ELinkKeyName: Dm_DodongoCave_BossIn_LandRoling
               InstanceName: '0'
               IsWaitEnd: true
[    180.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#2, concurrent=0)
[    180.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#3, concurrent=0)
               duration: 20.0
               ActorName: Player_Event
               ELinkKeyName: Dm_DodongoCave_BossIn_Roling
               InstanceName: '0'
               IsWaitEnd: true
[    182.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#14, concurrent=0)
               duration: 448.0
               ActorName: Obj_DodongoCave_LavaDirty_A_02
               ELinkKeyName: Dm_DodongoCave_BossIn_Lava_C03
               InstanceName: '2'
               IsWaitEnd: true
[    200.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#3, concurrent=0)
[    630.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#14, concurrent=0)
[    747.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#4, concurrent=0)
               duration: 28.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_DodongoCave_BossIn_POVWalk_C04
               InstanceName: '0'
[    775.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#4, concurrent=0)
[    890.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#5, concurrent=0)
               duration: 28.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_DodongoCave_BossIn_POVWalk_C04
               InstanceName: '1'
[    918.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#5, concurrent=0)
[   1154.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#6, concurrent=0)
               duration: 15.0
               ActorName: Enemy_DungeonBoss_Dodongo
               ELinkKeyName: Dm_DodongoCave_BossIn_WalkSmokeLeft_C04
               InstanceName: ''
[   1169.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#6, concurrent=0)
[   1170.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#7, concurrent=0)
               duration: 37.0
               ActorName: Enemy_DungeonBoss_Dodongo
               ELinkKeyName: Dm_DodongoCave_BossIn_BreatheOut_C06
               InstanceName: ''
[   1207.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#7, concurrent=0)
[   1207.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#15, concurrent=0)
               duration: 601.0
               ActorName: Obj_DodongoCave_LavaDirty_A_02
               ELinkKeyName: Dm_DodongoCave_BossIn_Steam_C08
               InstanceName: '2'
               IsWaitEnd: true
[   1257.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#8, concurrent=0)
               duration: 15.0
               ActorName: Enemy_DungeonBoss_Dodongo
               ELinkKeyName: Dm_DodongoCave_BossIn_WalkSmokeRight_C04
               InstanceName: ''
[   1272.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#8, concurrent=0)
[   1363.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#9, concurrent=0)
               duration: 15.0
               ActorName: Enemy_DungeonBoss_Dodongo
               ELinkKeyName: Dm_DodongoCave_BossIn_WalkSmokeLeft_C04
               InstanceName: ''
[   1378.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#9, concurrent=0)
[   1465.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#10, concurrent=0)
               duration: 15.0
               ActorName: Enemy_DungeonBoss_Dodongo
               ELinkKeyName: Dm_DodongoCave_BossIn_WalkSmokeRight_C04
               InstanceName: ''
[   1480.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#10, concurrent=0)
[   1568.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#11, concurrent=0)
               duration: 15.0
               ActorName: Enemy_DungeonBoss_Dodongo
               ELinkKeyName: Dm_DodongoCave_BossIn_WalkSmokeLeft_C04
               InstanceName: ''
[   1583.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#11, concurrent=0)
[   1698.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#12, concurrent=0)
               duration: 15.0
               ActorName: Enemy_DungeonBoss_Dodongo
               ELinkKeyName: Dm_DodongoCave_BossIn_WalkSmokeRight_C04
               InstanceName: ''
[   1713.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#12, concurrent=0)
[   1713.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#13, concurrent=0)
               duration: 336.0
               ActorName: Enemy_DungeonBoss_Dodongo
               ELinkKeyName: Dm_DodongoCave_BossIn_RadialBlur_C09
               InstanceName: ''
               IsWaitEnd: true
[   1808.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#15, concurrent=0)
[   1949.0] E EventEffectEmitter[1] - EventEffectDeleteELinkHiddenSetting (#1, concurrent=0)
               duration: 100.0
               ActorName: Obj_DodongoCave_LavaDirty_A_02
               KeyName: Steam_Loop
[   2049.0] L EventEffectEmitter[1] - EventEffectDeleteELinkHiddenSetting (#1, concurrent=0)
[   2049.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#13, concurrent=0)
