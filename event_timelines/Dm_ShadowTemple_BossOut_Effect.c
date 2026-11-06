-------- Event timeline: Dm_ShadowTemple_BossOut_Effect --------
actors: 5
clips: 50
oneshots: 0
cuts: 1
duration: 2736.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: EventEffectEmitter[0]
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
actions: ['EventNodeEffectEmitOneShot', 'EventNodeEffectEmit']
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
actions: ['EventNodeEffectEmitOneShot', 'EventNodeEffectEmit']
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


===== Timeline =====

[      0.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#0, concurrent=0)
               duration: 12.0
               ActorName: Enemy_DungeonBoss_BongoBongo_RightHand
               ELinkKeyName: Dm_ShadowTemple_BossOut_HandAura_00
               InstanceName: right_hand
[      0.0] E EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#18, concurrent=0)
               duration: 12.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossOut_HandAura_00
               InstanceName: left_hand
[      0.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#43, concurrent=0)
               duration: 12.0
               ActorName: Enemy_DungeonBoss_BongoBongo
               ELinkKeyName: Dm_ShadowTemple_BossOut_AuraDisappear
               InstanceName: ''
[     12.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#0, concurrent=0)
[     12.0] L EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#18, concurrent=0)
[     12.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#43, concurrent=0)
[    212.0] E EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#19, concurrent=0)
               duration: 12.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossOut_LandSmoke
               InstanceName: left_hand
[    224.0] L EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#19, concurrent=0)
[    225.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#1, concurrent=0)
               duration: 12.0
               ActorName: Enemy_DungeonBoss_BongoBongo_RightHand
               ELinkKeyName: Dm_ShadowTemple_BossOut_LandSmoke
               InstanceName: right_hand
[    236.0] E EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#20, concurrent=0)
               duration: 12.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossOut_LandSmoke
               InstanceName: left_hand
[    237.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#1, concurrent=0)
[    248.0] L EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#20, concurrent=0)
[    249.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#2, concurrent=0)
               duration: 12.0
               ActorName: Enemy_DungeonBoss_BongoBongo_RightHand
               ELinkKeyName: Dm_ShadowTemple_BossOut_LandSmoke
               InstanceName: right_hand
[    260.0] E EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#21, concurrent=0)
               duration: 12.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossOut_LandSmoke
               InstanceName: left_hand
[    261.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#2, concurrent=0)
[    272.0] L EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#21, concurrent=0)
[    273.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#3, concurrent=0)
               duration: 12.0
               ActorName: Enemy_DungeonBoss_BongoBongo_RightHand
               ELinkKeyName: Dm_ShadowTemple_BossOut_LandSmoke
               InstanceName: right_hand
[    277.0] E EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#22, concurrent=0)
               duration: 3.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossIn_field_00
               InstanceName: left_hand
[    280.0] L EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#22, concurrent=0)
[    284.0] E EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#23, concurrent=0)
               duration: 12.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossOut_FieldSmoke_00
               InstanceName: left_hand
[    285.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#3, concurrent=0)
[    295.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#4, concurrent=0)
               duration: 12.0
               ActorName: Enemy_DungeonBoss_BongoBongo_RightHand
               ELinkKeyName: Dm_ShadowTemple_BossOut_LandSmoke
               InstanceName: right_hand
[    296.0] L EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#23, concurrent=0)
[    307.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#4, concurrent=0)
[    308.0] E EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#24, concurrent=0)
               duration: 12.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossOut_LandSmoke
               InstanceName: left_hand
[    320.0] L EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#24, concurrent=0)
[    320.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#5, concurrent=0)
               duration: 12.0
               ActorName: Enemy_DungeonBoss_BongoBongo_RightHand
               ELinkKeyName: Dm_ShadowTemple_BossOut_LandSmoke
               InstanceName: right_hand
[    332.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#5, concurrent=0)
[    332.0] E EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#25, concurrent=0)
               duration: 12.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossOut_LandSmoke
               InstanceName: left_hand
[    344.0] L EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#25, concurrent=0)
[    345.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#6, concurrent=0)
               duration: 12.0
               ActorName: Enemy_DungeonBoss_BongoBongo_RightHand
               ELinkKeyName: Dm_ShadowTemple_BossOut_LandSmoke
               InstanceName: right_hand
[    356.0] E EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#26, concurrent=0)
               duration: 12.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossOut_LandSmoke
               InstanceName: left_hand
[    357.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#6, concurrent=0)
[    368.0] L EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#26, concurrent=0)
[    369.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#7, concurrent=0)
               duration: 12.0
               ActorName: Enemy_DungeonBoss_BongoBongo_RightHand
               ELinkKeyName: Dm_ShadowTemple_BossOut_LandSmoke
               InstanceName: right_hand
[    380.0] E EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#27, concurrent=0)
               duration: 12.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossOut_LandSmoke
               InstanceName: left_hand
[    381.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#7, concurrent=0)
[    392.0] L EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#27, concurrent=0)
[    393.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#8, concurrent=0)
               duration: 12.0
               ActorName: Enemy_DungeonBoss_BongoBongo_RightHand
               ELinkKeyName: Dm_ShadowTemple_BossOut_LandSmoke
               InstanceName: right_hand
[    404.0] E EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#28, concurrent=0)
               duration: 12.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossOut_LandSmoke
               InstanceName: left_hand
[    405.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#8, concurrent=0)
[    415.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#9, concurrent=0)
               duration: 12.0
               ActorName: Enemy_DungeonBoss_BongoBongo_RightHand
               ELinkKeyName: Dm_ShadowTemple_BossOut_LandSmoke
               InstanceName: right_hand
[    416.0] L EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#28, concurrent=0)
[    427.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#9, concurrent=0)
[    428.0] E EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#29, concurrent=0)
               duration: 12.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossOut_LandSmoke
               InstanceName: left_hand
[    440.0] L EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#29, concurrent=0)
[    441.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#10, concurrent=0)
               duration: 12.0
               ActorName: Enemy_DungeonBoss_BongoBongo_RightHand
               ELinkKeyName: Dm_ShadowTemple_BossOut_LandSmoke
               InstanceName: right_hand
[    453.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#10, concurrent=0)
[    454.0] E EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#30, concurrent=0)
               duration: 12.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossOut_LandSmoke
               InstanceName: left_hand
[    465.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#11, concurrent=0)
               duration: 12.0
               ActorName: Enemy_DungeonBoss_BongoBongo_RightHand
               ELinkKeyName: Dm_ShadowTemple_BossOut_LandSmoke
               InstanceName: right_hand
[    466.0] L EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#30, concurrent=0)
[    477.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#11, concurrent=0)
[    486.0] E EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#31, concurrent=0)
               duration: 12.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossOut_LandSmoke
               InstanceName: left_hand
[    498.0] L EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#31, concurrent=0)
[    507.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#12, concurrent=0)
               duration: 12.0
               ActorName: Enemy_DungeonBoss_BongoBongo_RightHand
               ELinkKeyName: Dm_ShadowTemple_BossOut_LandSmoke
               InstanceName: right_hand
[    519.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#12, concurrent=0)
[    545.0] E EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#32, concurrent=0)
               duration: 12.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossOut_LandSmoke
               InstanceName: left_hand
[    557.0] L EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#32, concurrent=0)
[    609.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#13, concurrent=0)
               duration: 12.0
               ActorName: Enemy_DungeonBoss_BongoBongo_RightHand
               ELinkKeyName: Dm_ShadowTemple_BossOut_LandSmoke
               InstanceName: right_hand
[    621.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#13, concurrent=0)
[    658.0] E EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#33, concurrent=0)
               duration: 12.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossOut_LandSmoke_Hand
               InstanceName: left_hand
[    670.0] L EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#33, concurrent=0)
[    944.0] E EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#34, concurrent=0)
               duration: 12.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossOut_LandSmoke_Thick
               InstanceName: left_hand
[    956.0] L EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#34, concurrent=0)
[   1051.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#14, concurrent=0)
               duration: 12.0
               ActorName: Enemy_DungeonBoss_BongoBongo_RightHand
               ELinkKeyName: Dm_ShadowTemple_BossOut_LandSmoke_Thick
               InstanceName: right_hand
[   1063.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#14, concurrent=0)
[   1166.0] E EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#38, concurrent=0)
               duration: 12.0
               ActorName: Enemy_DungeonBoss_BongoBongo
               ELinkKeyName: Dm_ShadowTemple_BossOut_LandSmoke
               InstanceName: ''
[   1178.0] L EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#38, concurrent=0)
[   1185.0] E EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#39, concurrent=0)
               duration: 12.0
               ActorName: Enemy_DungeonBoss_BongoBongo
               ELinkKeyName: Dm_ShadowTemple_BossOut_LandSmoke
               InstanceName: ''
[   1197.0] L EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#39, concurrent=0)
[   1241.0] E EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#40, concurrent=0)
               duration: 12.0
               ActorName: Enemy_DungeonBoss_BongoBongo
               ELinkKeyName: Dm_ShadowTemple_BossOut_LandSmoke
               InstanceName: ''
[   1241.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#44, concurrent=0)
               duration: 12.0
               ActorName: Enemy_DungeonBoss_BongoBongo
               ELinkKeyName: Dm_ShadowTemple_BossOut_LandSmoke_Body_00
               InstanceName: ''
[   1253.0] L EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#40, concurrent=0)
[   1253.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#44, concurrent=0)
[   1263.0] E EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#41, concurrent=0)
               duration: 12.0
               ActorName: Enemy_DungeonBoss_BongoBongo
               ELinkKeyName: Dm_ShadowTemple_BossOut_LandSmoke_Feeble
               InstanceName: ''
[   1263.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#45, concurrent=0)
               duration: 12.0
               ActorName: Enemy_DungeonBoss_BongoBongo
               ELinkKeyName: Dm_ShadowTemple_BossOut_LandSmoke_Body_00
               InstanceName: ''
[   1275.0] L EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#41, concurrent=0)
[   1275.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#45, concurrent=0)
[   1549.0] E EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#42, concurrent=0)
               duration: 100.0
               ActorName: Enemy_DungeonBoss_BongoBongo
               ELinkKeyName: Dm_ShadowTemple_BossOut_Mist_00
               InstanceName: ''
[   1577.0] E EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#35, concurrent=0)
               duration: 31.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossOut_Mist_00
               InstanceName: left_hand
[   1608.0] L EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#35, concurrent=0)
[   1617.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#15, concurrent=0)
               duration: 32.0
               ActorName: Enemy_DungeonBoss_BongoBongo_RightHand
               ELinkKeyName: Dm_ShadowTemple_BossOut_Mist_00
               InstanceName: right_hand
[   1649.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#15, concurrent=0)
[   1649.0] L EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#42, concurrent=0)
[   1693.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#16, concurrent=0)
               duration: 244.0
               ActorName: Enemy_DungeonBoss_BongoBongo_RightHand
               ELinkKeyName: Dm_ShadowTemple_BossOut_MeltHand_00
               InstanceName: right_hand
               IsWaitEnd: true
[   1693.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#36, concurrent=0)
               duration: 244.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossOut_MeltHand_00
               InstanceName: left_hand
               IsWaitEnd: true
[   1712.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#46, concurrent=0)
               duration: 225.0
               ActorName: Enemy_DungeonBoss_BongoBongo
               ELinkKeyName: Dm_ShadowTemple_BossOut_MeltWater_00
               InstanceName: ''
               IsWaitEnd: true
[   1937.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#16, concurrent=0)
[   1937.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#36, concurrent=0)
[   1937.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#46, concurrent=0)
[   1937.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#17, concurrent=0)
               duration: 268.0
               ActorName: Enemy_DungeonBoss_BongoBongo_RightHand
               ELinkKeyName: Dm_ShadowTemple_BossOut_MeltHand_01
               InstanceName: right_hand
[   1937.0] E EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#37, concurrent=0)
               duration: 268.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossOut_MeltHand_01
               InstanceName: left_hand
[   1937.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#47, concurrent=0)
               duration: 268.0
               ActorName: Enemy_DungeonBoss_BongoBongo
               ELinkKeyName: Dm_ShadowTemple_BossOut_MeltWater_01
               InstanceName: ''
[   2205.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#17, concurrent=0)
[   2205.0] L EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#37, concurrent=0)
[   2205.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#47, concurrent=0)
[   2272.0] E EventEffectEmitter - EventNodeEffectEmitOneShot (#48, concurrent=0)
               duration: 96.0
               ActorName: Dm_Locator
               ELinkKeyName: HeartCountainer_Appear
               InstanceName: '0'
[   2368.0] L EventEffectEmitter - EventNodeEffectEmitOneShot (#48, concurrent=0)
[   2368.0] E EventEffectEmitter - EventNodeEffectEmitOneShot (#49, concurrent=0)
               duration: 100.0
               ActorName: Dm_Locator
               ELinkKeyName: HeartCountainer_Wait
               InstanceName: '0'
[   2468.0] L EventEffectEmitter - EventNodeEffectEmitOneShot (#49, concurrent=0)
