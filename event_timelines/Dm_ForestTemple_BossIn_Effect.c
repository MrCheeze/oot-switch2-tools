-------- Event timeline: Dm_ForestTemple_BossIn_Effect --------
actors: 3
clips: 6
oneshots: 0
cuts: 1
duration: 2500.0
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


===== Timeline =====

[    389.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#5, concurrent=0)
               duration: 147.0
               ActorName: Obj_ForestTemple_SwitchShutter_A_01
               ELinkKeyName: Dm_ForestTemple_BossIn_Shutter
               InstanceName: '0'
               IsWaitEnd: true
[    536.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#5, concurrent=0)
[   1615.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#1, concurrent=0)
               duration: 222.0
               ActorName: Dm_Npc_Gerudo_Ganondorf
               ELinkKeyName: Dm_ForestTemple_BossIn_Trans
               InstanceName: ''
[   1837.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#1, concurrent=0)
[   1844.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#2, concurrent=0)
               duration: 93.0
               ActorName: Enemy_DungeonBoss_PhantomGanon
               ELinkKeyName: Dm_ForestTemple_BossIn_Light
               InstanceName: ''
[   1937.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#2, concurrent=0)
[   1937.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#3, concurrent=0)
               duration: 194.0
               ActorName: Enemy_DungeonBoss_PhantomGanon
               ELinkKeyName: Dm_ForestTemple_BossIn_Pluzma
               InstanceName: ''
[   2131.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#3, concurrent=0)
[   2354.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#4, concurrent=0)
               duration: 142.0
               ActorName: Enemy_DungeonBoss_PhantomGanon
               ELinkKeyName: Dm_ForestTemple_BossIn_Slash
               InstanceName: ''
[   2380.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#0, concurrent=0)
               duration: 100.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_ForestTemple_BossIn_00
               InstanceName: '0'
               IsWaitEnd: true
[   2480.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#0, concurrent=0)
[   2496.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#4, concurrent=0)
