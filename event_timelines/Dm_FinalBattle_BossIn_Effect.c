-------- Event timeline: Dm_FinalBattle_BossIn_Effect --------
actors: 5
clips: 19
oneshots: 0
cuts: 1
duration: 4574.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: EventEffectEmitter[4]
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

Actor: EventEffectEmitter[2]
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
actions: ['EventNodeEffectEmit', 'EventEffectDeleteELinkHiddenSetting']
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
UseEventAS: ''
UseEventModelAnime: 使用しない


===== Timeline =====

[    352.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#3, concurrent=0)
               duration: 4006.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_FinalBattle_BossIn_AroundFire_00
               InstanceName: Effect
               IsWaitEnd: true
[    708.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#2, concurrent=0)
               duration: 244.0
               ActorName: Obj_GanonCastle_Rubble_A_01
               ELinkKeyName: Dm_FinalBattle_BossIn
               InstanceName: ''
               IsWaitEnd: true
[    885.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#5, concurrent=0)
               duration: 67.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_FinalBattle_BossIn_C6
               InstanceName: Effect
               IsWaitEnd: true
[    952.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#2, concurrent=0)
[    952.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#5, concurrent=0)
[    952.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#6, concurrent=0)
               duration: 126.0
               ActorName: Enemy_DungeonBoss_Ganondorf
               ELinkKeyName: Dm_FinalBattle_BossIn_C7
               InstanceName: ''
               IsWaitEnd: true
[   1078.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#6, concurrent=0)
[   1078.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#7, concurrent=0)
               duration: 630.0
               ActorName: Enemy_DungeonBoss_Ganondorf
               ELinkKeyName: Dm_FinalBattle_BossIn_C8
               InstanceName: ''
               IsWaitEnd: true
[   1708.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#7, concurrent=0)
[   1708.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#8, concurrent=0)
               duration: 90.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_FinalBattle_BossIn_C9
               InstanceName: Effect
               IsWaitEnd: true
[   1798.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#8, concurrent=0)
[   1798.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#9, concurrent=0)
               duration: 192.0
               ActorName: Enemy_DungeonBoss_Ganon
               ELinkKeyName: Dm_FinalBattle_BossIn_C10
               InstanceName: ''
               IsWaitEnd: true
[   1990.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#9, concurrent=0)
[   1990.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#10, concurrent=0)
               duration: 374.0
               ActorName: Enemy_DungeonBoss_Ganon
               ELinkKeyName: Dm_FinalBattle_BossIn_C11
               InstanceName: ''
               IsWaitEnd: true
[   2364.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#10, concurrent=0)
[   2364.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#11, concurrent=0)
               duration: 246.0
               ActorName: Enemy_DungeonBoss_Ganon
               ELinkKeyName: Dm_FinalBattle_BossIn_C13
               InstanceName: ''
               IsWaitEnd: true
[   2610.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#11, concurrent=0)
[   2610.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#12, concurrent=0)
               duration: 246.0
               ActorName: Enemy_DungeonBoss_Ganon
               ELinkKeyName: Dm_FinalBattle_BossIn_C14
               InstanceName: ''
               IsWaitEnd: true
[   2856.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#12, concurrent=0)
[   2856.0] E EventEffectEmitter[4] - EventEffectAddELinkHiddenSetting (#0, concurrent=0)
               duration: 1718.0
               ActorName: Enemy_DungeonBoss_Ganon
               KeyName: Dust
[   2856.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#13, concurrent=0)
               duration: 492.0
               ActorName: Enemy_DungeonBoss_Ganon
               ELinkKeyName: Dm_FinalBattle_BossIn_C15
               InstanceName: ''
               IsWaitEnd: true
[   3348.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#13, concurrent=0)
[   3348.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#14, concurrent=0)
               duration: 25.0
               ActorName: Enemy_DungeonBoss_Ganon
               ELinkKeyName: Dm_FinalBattle_BossIn_C16_R
               InstanceName: ''
               IsWaitEnd: true
[   3373.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#14, concurrent=0)
[   3425.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#15, concurrent=0)
               duration: 10.0
               ActorName: Enemy_DungeonBoss_Ganon
               ELinkKeyName: Dm_FinalBattle_BossIn_C16_L
               InstanceName: ''
               IsWaitEnd: true
[   3435.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#15, concurrent=0)
[   3530.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#16, concurrent=0)
               duration: 75.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_FinalBattle_BossIn_Cut18
               InstanceName: Effect
               IsWaitEnd: true
[   3605.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#16, concurrent=0)
[   3683.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#1, concurrent=0)
               duration: 112.0
               ActorName: Weapon_Sword_Master
               ELinkKeyName: Dm_FinalBattle_BossIn_MasterSword_Debris_Rock_00
               InstanceName: '0'
               IsWaitEnd: true
[   3713.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#17, concurrent=0)
               duration: 81.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_FinalBattle_BossIn_AroundFire_01
               InstanceName: Effect
               IsWaitEnd: true
[   3794.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#17, concurrent=0)
[   3795.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#1, concurrent=0)
[   4350.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#18, concurrent=0)
               duration: 135.0
               ActorName: Enemy_DungeonBoss_Ganon
               ELinkKeyName: Dm_FinalBattle_BossIn_C22_咆哮
               InstanceName: ''
               IsWaitEnd: true
[   4358.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#3, concurrent=0)
[   4358.0] E EventEffectEmitter[1] - EventEffectDeleteELinkHiddenSetting (#4, concurrent=0)
               duration: 100.0
               ActorName: Obj_GanonCastle_FireWall_A_03
               KeyName: Chemical_Fire
[   4458.0] L EventEffectEmitter[1] - EventEffectDeleteELinkHiddenSetting (#4, concurrent=0)
[   4485.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#18, concurrent=0)
[   4574.0] L EventEffectEmitter[4] - EventEffectAddELinkHiddenSetting (#0, concurrent=0)
