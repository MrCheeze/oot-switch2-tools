-------- Event timeline: Dm_SpiritTemple_BossIn_Effect --------
actors: 7
clips: 14
oneshots: 0
cuts: 1
duration: 4405.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: EventEffectEmitter[0]
concurrent clips: 1
actions: ['EventEffectAddELinkHiddenSetting', 'EventNodeEffectEmit']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[Koume]
concurrent clips: 1
actions: ['EventNodeEffectEmit']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[KotakeKoumeBattleClient]
concurrent clips: 1
actions: ['EventNodeEffectEmit', 'EventNodeEffectEmitOneShot']
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

Actor: EventEffectEmitter[Kotake]
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
actions: ['EventNodeEffectEmit', 'EventNodeEffectEmitOneShot']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[C]
concurrent clips: 1
actions: ['EventNodeEffectEmit']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      3.0] E EventEffectEmitter[0] - EventEffectAddELinkHiddenSetting (#0, concurrent=0)
               duration: 100.0
               ActorName: Enemy_DungeonBoss_Koume
               KeyName: Element_PointLight
[    103.0] L EventEffectEmitter[0] - EventEffectAddELinkHiddenSetting (#0, concurrent=0)
[   1220.0] E EventEffectEmitter[C] - EventNodeEffectEmit (#13, concurrent=0)
               duration: 2380.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_SpiritTemple_BossIn_MagicCircle
               InstanceName: C
               IsWaitEnd: true
[   1320.0] E EventEffectEmitter[Koume] - EventNodeEffectEmit (#3, concurrent=0)
               duration: 770.0
               ActorName: Dm_Npc_Koume
               ELinkKeyName: Dm_SpiritTemple_BossIn_Miasma
               InstanceName: Koume
               IsWaitEnd: true
[   1830.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#1, concurrent=0)
               duration: 420.0
               ActorName: Dm_Npc_Koume
               ELinkKeyName: Dm_SpiritTemple_BossIn_HandGlow
               InstanceName: Koume
               IsWaitEnd: true
[   2090.0] L EventEffectEmitter[Koume] - EventNodeEffectEmit (#3, concurrent=0)
[   2090.0] E EventEffectEmitter[Koume] - EventNodeEffectEmit (#4, concurrent=0)
               duration: 160.0
               ActorName: Dm_Npc_Koume
               ELinkKeyName: Dm_SpiritTemple_BossIn_Broom
               InstanceName: Koume
               IsWaitEnd: true
[   2250.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#1, concurrent=0)
[   2250.0] L EventEffectEmitter[Koume] - EventNodeEffectEmit (#4, concurrent=0)
[   2250.0] E EventEffectEmitter[KotakeKoumeBattleClient] - EventNodeEffectEmitOneShot (#5, concurrent=0)
               duration: 100.0
               ActorName: Enemy_DungeonBoss_Koume
               ELinkKeyName: Dm_SpiritTemple_BossIn_C02
               InstanceName: KotakeKoumeBattleClient
[   2250.0] E EventEffectEmitter - EventNodeEffectEmit (#7, concurrent=0)
               duration: 100.0
               ActorName: Enemy_DungeonBoss_Koume
               ELinkKeyName: Dm_SpiritTemple_BossIn_Koume_PointLight
               InstanceName: KotakeKoumeBattleClient
               IsWaitEnd: true
[   2350.0] L EventEffectEmitter[KotakeKoumeBattleClient] - EventNodeEffectEmitOneShot (#5, concurrent=0)
[   2350.0] L EventEffectEmitter - EventNodeEffectEmit (#7, concurrent=0)
[   2520.0] E EventEffectEmitter[Kotake] - EventNodeEffectEmit (#9, concurrent=0)
               duration: 598.0
               ActorName: Dm_Npc_Kotake
               ELinkKeyName: Dm_SpiritTemple_BossIn_Miasma
               InstanceName: Kotake
               IsWaitEnd: true
[   2750.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#2, concurrent=0)
               duration: 534.0
               ActorName: Dm_Npc_Kotake
               ELinkKeyName: Dm_SpiritTemple_BossIn_HandGlow
               InstanceName: Kotake
               IsWaitEnd: true
[   3118.0] L EventEffectEmitter[Kotake] - EventNodeEffectEmit (#9, concurrent=0)
[   3118.0] E EventEffectEmitter[Kotake] - EventNodeEffectEmit (#10, concurrent=0)
               duration: 166.0
               ActorName: Dm_Npc_Kotake
               ELinkKeyName: Dm_SpiritTemple_BossIn_Broom
               InstanceName: Kotake
               IsWaitEnd: true
[   3283.0] E EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#11, concurrent=0)
               duration: 203.0
               ActorName: Enemy_DungeonBoss_Kotake
               ELinkKeyName: Dm_SpiritTemple_BossIn_C03
               InstanceName: KotakeKoumeBattleClient
[   3284.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#2, concurrent=0)
[   3284.0] L EventEffectEmitter[Kotake] - EventNodeEffectEmit (#10, concurrent=0)
[   3486.0] L EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#11, concurrent=0)
[   3500.0] E EventEffectEmitter[KotakeKoumeBattleClient] - EventNodeEffectEmit (#6, concurrent=0)
               duration: 627.0
               ActorName: Enemy_DungeonBoss_Koume
               ELinkKeyName: Dm_SpiritTemple_BossIn_C04
               InstanceName: KotakeKoumeBattleClient
               IsWaitEnd: true
[   3500.0] E EventEffectEmitter - EventNodeEffectEmit (#8, concurrent=0)
               duration: 905.0
               ActorName: Enemy_DungeonBoss_Koume
               ELinkKeyName: Dm_SpiritTemple_BossIn_Koume_PointLight
               InstanceName: KotakeKoumeBattleClient
               IsWaitEnd: true
[   3500.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#12, concurrent=0)
               duration: 627.0
               ActorName: Enemy_DungeonBoss_Kotake
               ELinkKeyName: Dm_SpiritTemple_BossIn_C04
               InstanceName: KotakeKoumeBattleClient
               IsWaitEnd: true
[   3600.0] L EventEffectEmitter[C] - EventNodeEffectEmit (#13, concurrent=0)
[   4127.0] L EventEffectEmitter[KotakeKoumeBattleClient] - EventNodeEffectEmit (#6, concurrent=0)
[   4127.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#12, concurrent=0)
[   4405.0] L EventEffectEmitter - EventNodeEffectEmit (#8, concurrent=0)
