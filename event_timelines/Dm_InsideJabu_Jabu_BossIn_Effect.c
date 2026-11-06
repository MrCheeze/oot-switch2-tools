-------- Event timeline: Dm_InsideJabu_Jabu_BossIn_Effect --------
actors: 5
clips: 52
oneshots: 0
cuts: 1
duration: 2840.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: EventEffectEmitter[3]
concurrent clips: 7
actions: ['EventNodeEffectEmitOneShot']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[1]
concurrent clips: 3
actions: ['EventNodeEffectEmitOneShot']
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

Actor: EventEffectEmitter[2]
concurrent clips: 10
actions: ['EventNodeEffectEmitOneShot']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter
concurrent clips: 3
actions: ['EventEffectAddELinkHiddenSetting', 'EventEffectDeleteELinkHiddenSetting']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#10, concurrent=0)
               duration: 320.0
               ActorName: Obj_InsideJabu_Jabu_SwitchShutter_A_01
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Close
               InstanceName: '0'
               IsWaitEnd: false
[      0.0] E EventEffectEmitter - EventEffectAddELinkHiddenSetting (#48, concurrent=0)
               duration: 100.0
               ActorName: Enemy_DungeonBoss_Barinade_Jellyfish
               KeyName: Barrier_End
[      0.0] E EventEffectEmitter - EventEffectAddELinkHiddenSetting (#49, concurrent=1)
               duration: 320.0
               ActorName: Obj_InsideJabu_Jabu_SwitchShutter_A_01
               KeyName: Wait
[      0.0] E EventEffectEmitter - EventEffectAddELinkHiddenSetting (#51, concurrent=2)
               duration: 2840.0
               ActorName: Enemy_DungeonBoss_Barinade
               KeyName: Wait_Light_00
[    100.0] L EventEffectEmitter - EventEffectAddELinkHiddenSetting (#48, concurrent=0)
[    320.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#10, concurrent=0)
[    320.0] L EventEffectEmitter - EventEffectAddELinkHiddenSetting (#49, concurrent=1)
[    320.0] E EventEffectEmitter - EventEffectDeleteELinkHiddenSetting (#50, concurrent=1)
               duration: 530.0
               ActorName: Obj_InsideJabu_Jabu_SwitchShutter_A_01
               KeyName: Wait
[    850.0] L EventEffectEmitter - EventEffectDeleteELinkHiddenSetting (#50, concurrent=1)
[   1196.0] E EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#36, concurrent=6)
               duration: 674.0
               ActorName: Enemy_DungeonBoss_Barinade_Jellyfish
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Electric_01
               InstanceName: G
[   1420.0] E EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#24, concurrent=2)
               duration: 555.0
               ActorName: Enemy_DungeonBoss_Barinade_Jellyfish
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Electric_01
               InstanceName: C
[   1456.0] E EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#39, concurrent=7)
               duration: 483.0
               ActorName: Enemy_DungeonBoss_Barinade_Jellyfish
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Electric_01
               InstanceName: H
[   1473.0] E EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#18, concurrent=0)
               duration: 712.0
               ActorName: Enemy_DungeonBoss_Barinade_Jellyfish
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Electric_01
               InstanceName: A
[   1504.0] E EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#21, concurrent=1)
               duration: 283.0
               ActorName: Enemy_DungeonBoss_Barinade_Jellyfish
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Electric_01
               InstanceName: B
[   1546.0] E EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#33, concurrent=5)
               duration: 542.0
               ActorName: Enemy_DungeonBoss_Barinade_Jellyfish
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Electric_01
               InstanceName: F
[   1584.0] E EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#27, concurrent=3)
               duration: 527.0
               ActorName: Enemy_DungeonBoss_Barinade_Jellyfish
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Electric_01
               InstanceName: D
[   1627.0] E EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#30, concurrent=4)
               duration: 531.0
               ActorName: Enemy_DungeonBoss_Barinade_Jellyfish
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Electric_01
               InstanceName: E
[   1627.0] E EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#45, concurrent=9)
               duration: 509.0
               ActorName: Enemy_DungeonBoss_Barinade_Jellyfish
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Electric_01
               InstanceName: J
[   1714.0] E EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#42, concurrent=8)
               duration: 463.0
               ActorName: Enemy_DungeonBoss_Barinade_Jellyfish
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Electric_01
               InstanceName: I
[   1787.0] L EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#21, concurrent=1)
[   1787.0] E EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#22, concurrent=1)
               duration: 120.0
               ActorName: Enemy_DungeonBoss_Barinade_Jellyfish
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Electric_02
               InstanceName: B
[   1800.0] E EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#9, concurrent=2)
               duration: 336.0
               ActorName: Enemy_DungeonBoss_Barinade
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Floor_00
               InstanceName: ''
[   1870.0] L EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#36, concurrent=6)
[   1870.0] E EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#37, concurrent=6)
               duration: 120.0
               ActorName: Enemy_DungeonBoss_Barinade_Jellyfish
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Electric_02
               InstanceName: G
[   1907.0] L EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#22, concurrent=1)
[   1907.0] E EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#23, concurrent=1)
               duration: 933.0
               ActorName: Enemy_DungeonBoss_Barinade_Jellyfish
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Electric_00
               InstanceName: B
[   1939.0] L EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#39, concurrent=7)
[   1939.0] E EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#40, concurrent=7)
               duration: 120.0
               ActorName: Enemy_DungeonBoss_Barinade_Jellyfish
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Electric_02
               InstanceName: H
[   1975.0] L EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#24, concurrent=2)
[   1975.0] E EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#25, concurrent=2)
               duration: 120.0
               ActorName: Enemy_DungeonBoss_Barinade_Jellyfish
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Electric_02
               InstanceName: C
[   1990.0] L EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#37, concurrent=6)
[   1990.0] E EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#38, concurrent=6)
               duration: 850.0
               ActorName: Enemy_DungeonBoss_Barinade_Jellyfish
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Electric_00
               InstanceName: G
[   2000.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#0, concurrent=0)
               duration: 88.0
               ActorName: Enemy_DungeonBoss_Barinade
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Flower_03
               InstanceName: ''
[   2059.0] L EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#40, concurrent=7)
[   2059.0] E EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#41, concurrent=7)
               duration: 781.0
               ActorName: Enemy_DungeonBoss_Barinade_Jellyfish
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Electric_00
               InstanceName: H
[   2070.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#1, concurrent=1)
               duration: 88.0
               ActorName: Enemy_DungeonBoss_Barinade
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Flower_06
               InstanceName: ''
[   2088.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#0, concurrent=0)
[   2088.0] L EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#33, concurrent=5)
[   2088.0] E EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#34, concurrent=5)
               duration: 120.0
               ActorName: Enemy_DungeonBoss_Barinade_Jellyfish
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Electric_02
               InstanceName: F
[   2095.0] L EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#25, concurrent=2)
[   2095.0] E EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#26, concurrent=2)
               duration: 745.0
               ActorName: Enemy_DungeonBoss_Barinade_Jellyfish
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Electric_00
               InstanceName: C
[   2111.0] L EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#27, concurrent=3)
[   2111.0] E EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#28, concurrent=3)
               duration: 120.0
               ActorName: Enemy_DungeonBoss_Barinade_Jellyfish
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Electric_02
               InstanceName: D
[   2136.0] L EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#9, concurrent=2)
[   2136.0] L EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#45, concurrent=9)
[   2136.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#2, concurrent=2)
               duration: 88.0
               ActorName: Enemy_DungeonBoss_Barinade
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Flower_04
               InstanceName: ''
[   2136.0] E EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#46, concurrent=9)
               duration: 120.0
               ActorName: Enemy_DungeonBoss_Barinade_Jellyfish
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Electric_02
               InstanceName: J
[   2158.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#1, concurrent=1)
[   2158.0] L EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#30, concurrent=4)
[   2158.0] E EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#31, concurrent=4)
               duration: 120.0
               ActorName: Enemy_DungeonBoss_Barinade_Jellyfish
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Electric_02
               InstanceName: E
[   2177.0] L EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#42, concurrent=8)
[   2177.0] E EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#43, concurrent=8)
               duration: 120.0
               ActorName: Enemy_DungeonBoss_Barinade_Jellyfish
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Electric_02
               InstanceName: I
[   2185.0] L EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#18, concurrent=0)
[   2185.0] E EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#19, concurrent=0)
               duration: 120.0
               ActorName: Enemy_DungeonBoss_Barinade_Jellyfish
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Electric_02
               InstanceName: A
[   2195.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#3, concurrent=3)
               duration: 88.0
               ActorName: Enemy_DungeonBoss_Barinade
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Flower_10
               InstanceName: ''
[   2208.0] L EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#34, concurrent=5)
[   2208.0] E EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#35, concurrent=5)
               duration: 632.0
               ActorName: Enemy_DungeonBoss_Barinade_Jellyfish
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Electric_00
               InstanceName: F
[   2209.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#4, concurrent=4)
               duration: 88.0
               ActorName: Enemy_DungeonBoss_Barinade
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Flower_05
               InstanceName: ''
[   2224.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#2, concurrent=2)
[   2231.0] L EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#28, concurrent=3)
[   2231.0] E EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#29, concurrent=3)
               duration: 609.0
               ActorName: Enemy_DungeonBoss_Barinade_Jellyfish
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Electric_00
               InstanceName: D
[   2240.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#5, concurrent=5)
               duration: 88.0
               ActorName: Enemy_DungeonBoss_Barinade
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Flower_09
               InstanceName: ''
[   2250.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#6, concurrent=6)
               duration: 88.0
               ActorName: Enemy_DungeonBoss_Barinade
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Flower_01
               InstanceName: ''
[   2256.0] L EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#46, concurrent=9)
[   2256.0] E EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#47, concurrent=9)
               duration: 584.0
               ActorName: Enemy_DungeonBoss_Barinade_Jellyfish
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Electric_00
               InstanceName: J
[   2278.0] L EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#31, concurrent=4)
[   2278.0] E EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#32, concurrent=4)
               duration: 562.0
               ActorName: Enemy_DungeonBoss_Barinade_Jellyfish
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Electric_00
               InstanceName: E
[   2283.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#3, concurrent=3)
[   2297.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#4, concurrent=4)
[   2297.0] L EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#43, concurrent=8)
[   2297.0] E EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#44, concurrent=8)
               duration: 543.0
               ActorName: Enemy_DungeonBoss_Barinade_Jellyfish
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Electric_00
               InstanceName: I
[   2305.0] L EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#19, concurrent=0)
[   2305.0] E EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#20, concurrent=0)
               duration: 535.0
               ActorName: Enemy_DungeonBoss_Barinade_Jellyfish
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Electric_00
               InstanceName: A
[   2328.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#5, concurrent=5)
[   2328.0] E EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#7, concurrent=0)
               duration: 512.0
               ActorName: Enemy_DungeonBoss_Barinade
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Electric_01
               InstanceName: ''
[   2328.0] E EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#8, concurrent=1)
               duration: 512.0
               ActorName: Enemy_DungeonBoss_Barinade
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_GrLight_00
               InstanceName: ''
[   2328.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#11, concurrent=0)
               duration: 10.0
               ActorName: Enemy_DungeonBoss_Barinade
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Beam_00
               InstanceName: ''
[   2338.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#6, concurrent=6)
[   2338.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#11, concurrent=0)
[   2353.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#12, concurrent=0)
               duration: 16.0
               ActorName: Enemy_DungeonBoss_Barinade
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Beam_01
               InstanceName: ''
[   2369.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#12, concurrent=0)
[   2384.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#13, concurrent=0)
               duration: 25.0
               ActorName: Enemy_DungeonBoss_Barinade
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Beam_02
               InstanceName: ''
[   2409.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#13, concurrent=0)
[   2417.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#14, concurrent=0)
               duration: 44.0
               ActorName: Enemy_DungeonBoss_Barinade
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Beam_00
               InstanceName: ''
[   2461.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#14, concurrent=0)
[   2466.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#15, concurrent=0)
               duration: 33.0
               ActorName: Enemy_DungeonBoss_Barinade
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Beam_02
               InstanceName: ''
[   2499.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#15, concurrent=0)
[   2511.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#16, concurrent=0)
               duration: 5.0
               ActorName: Enemy_DungeonBoss_Barinade
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Beam_01
               InstanceName: ''
[   2516.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#16, concurrent=0)
[   2516.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#17, concurrent=0)
               duration: 40.0
               ActorName: Enemy_DungeonBoss_Barinade
               ELinkKeyName: Dm_InsideJabu_Jabu_BossIn_Beam_00
               InstanceName: ''
[   2556.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#17, concurrent=0)
[   2840.0] L EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#7, concurrent=0)
[   2840.0] L EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#8, concurrent=1)
[   2840.0] L EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#20, concurrent=0)
[   2840.0] L EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#23, concurrent=1)
[   2840.0] L EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#26, concurrent=2)
[   2840.0] L EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#29, concurrent=3)
[   2840.0] L EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#32, concurrent=4)
[   2840.0] L EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#35, concurrent=5)
[   2840.0] L EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#38, concurrent=6)
[   2840.0] L EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#41, concurrent=7)
[   2840.0] L EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#44, concurrent=8)
[   2840.0] L EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#47, concurrent=9)
[   2840.0] L EventEffectEmitter - EventEffectAddELinkHiddenSetting (#51, concurrent=2)
