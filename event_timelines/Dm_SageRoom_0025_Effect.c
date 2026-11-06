-------- Event timeline: Dm_SageRoom_0025_Effect --------
actors: 12
clips: 17
oneshots: 0
cuts: 1
duration: 1994.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: EventEffectEmitter[5]
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
actions: ['EventNodeEffectEmit']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[9]
concurrent clips: 1
actions: ['EventEffectAddELinkHiddenSetting', 'EventEffectDeleteELinkHiddenSetting']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[10]
concurrent clips: 1
actions: ['EventEffectAddELinkHiddenSetting', 'EventEffectDeleteELinkHiddenSetting']
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

Actor: EventEffectEmitter[8]
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

Actor: EventEffectEmitter[1]
concurrent clips: 1
actions: ['EventNodeEffectEmit']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventEffectEmitter - EventNodeEffectEmit (#6, concurrent=0)
               duration: 240.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_SageRoom_0020_WhiteHole_02
               InstanceName: '1'
               IsWaitEnd: true
[    240.0] L EventEffectEmitter - EventNodeEffectEmit (#6, concurrent=0)
[    240.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#7, concurrent=0)
               duration: 820.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_SageRoom_0020_WhiteHole_03
               InstanceName: '1'
               IsWaitEnd: true
[    414.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#11, concurrent=0)
               duration: 981.0
               ActorName: Enemy_DungeonBoss_Ganon
               ELinkKeyName: Dm_SageRoom_0025_Ganon_Out_01
               InstanceName: '0'
               IsWaitEnd: true
[    414.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#12, concurrent=0)
               duration: 332.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_SageRoom_0020_Pillar_01
               InstanceName: '1'
               IsWaitEnd: true
[    632.0] E EventEffectEmitter[9] - EventEffectAddELinkHiddenSetting (#2, concurrent=0)
               duration: 114.0
               ActorName: Camera
               KeyName: FieldEnvEffect
[    632.0] E EventEffectEmitter[10] - EventEffectAddELinkHiddenSetting (#4, concurrent=0)
               duration: 114.0
               ActorName: Enemy_DungeonBoss_Ganon
               KeyName: Dust
[    632.0] E EventEffectEmitter[7] - EventNodeEffectEmit (#13, concurrent=0)
               duration: 114.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_SageRoom_0020_Pillar_01_C03
               InstanceName: '1'
               IsWaitEnd: true
[    746.0] L EventEffectEmitter[9] - EventEffectAddELinkHiddenSetting (#2, concurrent=0)
[    746.0] L EventEffectEmitter[10] - EventEffectAddELinkHiddenSetting (#4, concurrent=0)
[    746.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#12, concurrent=0)
[    746.0] L EventEffectEmitter[7] - EventNodeEffectEmit (#13, concurrent=0)
[    746.0] E EventEffectEmitter[7] - EventNodeEffectEmit (#14, concurrent=0)
               duration: 314.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_SageRoom_0020_Pillar_01_C04
               InstanceName: '1'
               IsWaitEnd: true
[   1060.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#7, concurrent=0)
[   1060.0] L EventEffectEmitter[7] - EventNodeEffectEmit (#14, concurrent=0)
[   1060.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#8, concurrent=0)
               duration: 236.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_SageRoom_0020_WhiteHole_03_C05
               InstanceName: '1'
               IsWaitEnd: true
[   1296.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#8, concurrent=0)
[   1296.0] E EventEffectEmitter[9] - EventEffectDeleteELinkHiddenSetting (#3, concurrent=0)
               duration: 99.0
               ActorName: Camera
               KeyName: FieldEnvEffect
[   1296.0] E EventEffectEmitter[10] - EventEffectDeleteELinkHiddenSetting (#5, concurrent=0)
               duration: 99.0
               ActorName: Enemy_DungeonBoss_Ganon
               KeyName: Dust
[   1296.0] E EventEffectEmitter[8] - EventNodeEffectEmit (#9, concurrent=0)
               duration: 99.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_SageRoom_0020_WhiteHole_03_C06
               InstanceName: '1'
               IsWaitEnd: true
[   1296.0] E EventEffectEmitter[7] - EventNodeEffectEmit (#15, concurrent=0)
               duration: 99.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_SageRoom_0020_Pillar_01_C06
               InstanceName: '1'
               IsWaitEnd: true
[   1395.0] L EventEffectEmitter[9] - EventEffectDeleteELinkHiddenSetting (#3, concurrent=0)
[   1395.0] L EventEffectEmitter[10] - EventEffectDeleteELinkHiddenSetting (#5, concurrent=0)
[   1395.0] L EventEffectEmitter[8] - EventNodeEffectEmit (#9, concurrent=0)
[   1395.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#11, concurrent=0)
[   1395.0] L EventEffectEmitter[7] - EventNodeEffectEmit (#15, concurrent=0)
[   1395.0] E EventEffectEmitter[5] - EventEffectAddELinkHiddenSetting (#0, concurrent=0)
               duration: 599.0
               ActorName: EftLoc_FinalBattleField_Env_2nd_00
               KeyName: Always
[   1395.0] E EventEffectEmitter[6] - EventNodeEffectEmit (#1, concurrent=0)
               duration: 598.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_SageRoom_0020_FinalBattle_Env_00
               InstanceName: '1'
               IsWaitEnd: true
[   1395.0] E EventEffectEmitter[4] - EventNodeEffectEmit (#10, concurrent=0)
               duration: 599.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_SageRoom_0020_WhiteHole_04
               InstanceName: '1'
               IsWaitEnd: true
[   1395.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#16, concurrent=0)
               duration: 599.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_SageRoom_0020_Pillar_02
               InstanceName: '1'
               IsWaitEnd: true
[   1993.0] L EventEffectEmitter[6] - EventNodeEffectEmit (#1, concurrent=0)
[   1994.0] L EventEffectEmitter[5] - EventEffectAddELinkHiddenSetting (#0, concurrent=0)
[   1994.0] L EventEffectEmitter[4] - EventNodeEffectEmit (#10, concurrent=0)
[   1994.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#16, concurrent=0)
