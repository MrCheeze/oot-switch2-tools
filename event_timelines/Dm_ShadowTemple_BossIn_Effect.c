-------- Event timeline: Dm_ShadowTemple_BossIn_Effect --------
actors: 7
clips: 58
oneshots: 0
cuts: 1
duration: 2155.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: EventEffectEmitter[5]
concurrent clips: 3
actions: ['EventEffectAddELinkHiddenSetting', 'EventEffectDeleteELinkHiddenSetting']
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

Actor: EventEffectEmitter[3]
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
actions: ['EventNodeEffectEmit', 'EventNodeEffectFade']
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

Actor: EventEffectEmitter[0]
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
actions: ['EventNodeEffectEmitOneShot']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventEffectEmitter[5] - EventEffectAddELinkHiddenSetting (#0, concurrent=0)
               duration: 10.0
               ActorName: Player_Adult
               KeyName: FootEffect
[      0.0] E EventEffectEmitter[5] - EventEffectAddELinkHiddenSetting (#1, concurrent=1)
               duration: 10.0
               ActorName: Enemy_DungeonBoss_BongoBongo_RightHand
               KeyName: Invincible_ON
[      0.0] E EventEffectEmitter[5] - EventEffectAddELinkHiddenSetting (#3, concurrent=2)
               duration: 10.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               KeyName: Invincible_ON
[     10.0] L EventEffectEmitter[5] - EventEffectAddELinkHiddenSetting (#0, concurrent=0)
[     10.0] L EventEffectEmitter[5] - EventEffectAddELinkHiddenSetting (#1, concurrent=1)
[     10.0] L EventEffectEmitter[5] - EventEffectAddELinkHiddenSetting (#3, concurrent=2)
[     99.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#50, concurrent=0)
               duration: 10.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_ShadowTemple_BossIn_LandSmoke_C01-C02
               InstanceName: '0'
[    109.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#50, concurrent=0)
[    540.0] E EventEffectEmitter[4] - EventNodeEffectEmitOneShot (#5, concurrent=0)
               duration: 20.0
               ActorName: Enemy_DungeonBoss_BongoBongo_RightHand
               ELinkKeyName: Dm_ShadowTemple_BossIn_LandSmoke_00
               InstanceName: right_hand
[    560.0] L EventEffectEmitter[4] - EventNodeEffectEmitOneShot (#5, concurrent=0)
[    717.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#16, concurrent=0)
               duration: 20.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossIn_LandSmoke_01
               InstanceName: left_hand
[    737.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#16, concurrent=0)
[    780.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#17, concurrent=0)
               duration: 20.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossIn_LandSmoke_01
               InstanceName: left_hand
[    800.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#17, concurrent=0)
[    835.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#18, concurrent=0)
               duration: 10.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossIn_LandSmoke_01
               InstanceName: left_hand
[    845.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#18, concurrent=0)
[    926.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#51, concurrent=0)
               duration: 10.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_ShadowTemple_BossIn_Grain_01
               InstanceName: '0'
[    936.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#51, concurrent=0)
[    955.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#52, concurrent=0)
               duration: 10.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_ShadowTemple_BossIn_Grain_00
               InstanceName: '0'
[    965.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#52, concurrent=0)
[    998.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#53, concurrent=0)
               duration: 10.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_ShadowTemple_BossIn_Grain_00
               InstanceName: '0'
[   1008.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#53, concurrent=0)
[   1050.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#54, concurrent=0)
               duration: 10.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_ShadowTemple_BossIn_Grain_00
               InstanceName: '0'
[   1060.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#54, concurrent=0)
[   1100.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#55, concurrent=0)
               duration: 10.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_ShadowTemple_BossIn_Grain_01
               InstanceName: '0'
[   1110.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#55, concurrent=0)
[   1144.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#19, concurrent=0)
               duration: 20.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossIn_LandSmoke_04
               InstanceName: left_hand
[   1164.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#19, concurrent=0)
[   1189.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#20, concurrent=0)
               duration: 20.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossIn_LandSmoke_04
               InstanceName: left_hand
[   1209.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#20, concurrent=0)
[   1235.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#21, concurrent=0)
               duration: 20.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossIn_LandSmoke_04
               InstanceName: left_hand
[   1255.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#21, concurrent=0)
[   1281.0] E EventEffectEmitter[4] - EventNodeEffectEmitOneShot (#6, concurrent=0)
               duration: 20.0
               ActorName: Enemy_DungeonBoss_BongoBongo_RightHand
               ELinkKeyName: Dm_ShadowTemple_BossIn_LandSmoke_03
               InstanceName: right_hand
[   1301.0] L EventEffectEmitter[4] - EventNodeEffectEmitOneShot (#6, concurrent=0)
[   1317.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#22, concurrent=0)
               duration: 20.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossIn_LandSmoke_05
               InstanceName: left_hand
[   1337.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#22, concurrent=0)
[   1356.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#23, concurrent=0)
               duration: 20.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossIn_LandSmoke_05
               InstanceName: left_hand
[   1376.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#23, concurrent=0)
[   1394.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#24, concurrent=0)
               duration: 20.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossIn_LandSmoke_05
               InstanceName: left_hand
[   1414.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#24, concurrent=0)
[   1437.0] E EventEffectEmitter[4] - EventNodeEffectEmitOneShot (#7, concurrent=0)
               duration: 20.0
               ActorName: Enemy_DungeonBoss_BongoBongo_RightHand
               ELinkKeyName: Dm_ShadowTemple_BossIn_LandSmoke_06
               InstanceName: right_hand
[   1457.0] L EventEffectEmitter[4] - EventNodeEffectEmitOneShot (#7, concurrent=0)
[   1471.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#25, concurrent=0)
               duration: 20.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossIn_LandSmoke_07
               InstanceName: left_hand
[   1491.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#25, concurrent=0)
[   1509.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#26, concurrent=0)
               duration: 20.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossIn_LandSmoke_07
               InstanceName: left_hand
[   1529.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#26, concurrent=0)
[   1535.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#27, concurrent=0)
               duration: 20.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossIn_LandSmoke_07
               InstanceName: left_hand
[   1555.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#27, concurrent=0)
[   1568.0] E EventEffectEmitter[4] - EventNodeEffectEmitOneShot (#8, concurrent=0)
               duration: 20.0
               ActorName: Enemy_DungeonBoss_BongoBongo_RightHand
               ELinkKeyName: Dm_ShadowTemple_BossIn_LandSmoke_08
               InstanceName: right_hand
[   1588.0] L EventEffectEmitter[4] - EventNodeEffectEmitOneShot (#8, concurrent=0)
[   1595.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#28, concurrent=0)
               duration: 20.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossIn_LandSmoke_07
               InstanceName: left_hand
[   1615.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#28, concurrent=0)
[   1622.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#29, concurrent=0)
               duration: 20.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossIn_LandSmoke_07
               InstanceName: left_hand
[   1642.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#29, concurrent=0)
[   1652.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#30, concurrent=0)
               duration: 6.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossIn_LandSmoke_07
               InstanceName: left_hand
[   1657.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#47, concurrent=0)
               duration: 313.0
               ActorName: Enemy_DungeonBoss_BongoBongo
               ELinkKeyName: Dm_ShadowTemple_BossIn_Open_Eye_00
               InstanceName: ''
               IsWaitEnd: true
[   1658.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#30, concurrent=0)
[   1681.0] E EventEffectEmitter[4] - EventNodeEffectEmitOneShot (#9, concurrent=0)
               duration: 9.0
               ActorName: Enemy_DungeonBoss_BongoBongo_RightHand
               ELinkKeyName: Dm_ShadowTemple_BossIn_LandSmoke_08
               InstanceName: right_hand
[   1690.0] L EventEffectEmitter[4] - EventNodeEffectEmitOneShot (#9, concurrent=0)
[   1692.0] E EventEffectEmitter[5] - EventEffectDeleteELinkHiddenSetting (#2, concurrent=1)
               duration: 11.0
               ActorName: Enemy_DungeonBoss_BongoBongo_RightHand
               KeyName: Invincible_ON
[   1692.0] E EventEffectEmitter[5] - EventEffectDeleteELinkHiddenSetting (#4, concurrent=2)
               duration: 11.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               KeyName: Invincible_ON
[   1692.0] E EventEffectEmitter[4] - EventNodeEffectEmitOneShot (#10, concurrent=0)
               duration: 5.0
               ActorName: Enemy_DungeonBoss_BongoBongo_RightHand
               ELinkKeyName: Dm_ShadowTemple_BossIn_HandAura_00
               InstanceName: right_hand
[   1692.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#31, concurrent=0)
               duration: 5.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossIn_HandAura_00
               InstanceName: left_hand
[   1692.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#49, concurrent=0)
               duration: 277.0
               ActorName: Enemy_DungeonBoss_BongoBongo
               ELinkKeyName: Dm_ShadowTemple_BossIn_BodyAura_00
               InstanceName: ''
               IsWaitEnd: true
[   1697.0] L EventEffectEmitter[4] - EventNodeEffectEmitOneShot (#10, concurrent=0)
[   1697.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#31, concurrent=0)
[   1703.0] L EventEffectEmitter[5] - EventEffectDeleteELinkHiddenSetting (#2, concurrent=1)
[   1703.0] L EventEffectEmitter[5] - EventEffectDeleteELinkHiddenSetting (#4, concurrent=2)
[   1706.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#32, concurrent=0)
               duration: 10.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossIn_LandSmoke_07
               InstanceName: left_hand
[   1716.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#32, concurrent=0)
[   1734.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#33, concurrent=0)
               duration: 10.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossIn_LandSmoke_07
               InstanceName: left_hand
[   1744.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#33, concurrent=0)
[   1760.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#34, concurrent=0)
               duration: 10.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossIn_LandSmoke_07
               InstanceName: left_hand
[   1770.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#34, concurrent=0)
[   1786.0] E EventEffectEmitter[4] - EventNodeEffectEmitOneShot (#11, concurrent=0)
               duration: 10.0
               ActorName: Enemy_DungeonBoss_BongoBongo_RightHand
               ELinkKeyName: Dm_ShadowTemple_BossIn_LandSmoke_08
               InstanceName: right_hand
[   1796.0] L EventEffectEmitter[4] - EventNodeEffectEmitOneShot (#11, concurrent=0)
[   1811.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#35, concurrent=0)
               duration: 10.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossIn_LandSmoke_07
               InstanceName: left_hand
[   1821.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#35, concurrent=0)
[   1839.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#36, concurrent=0)
               duration: 10.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossIn_LandSmoke_07
               InstanceName: left_hand
[   1849.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#36, concurrent=0)
[   1863.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#37, concurrent=0)
               duration: 10.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossIn_LandSmoke_07
               InstanceName: left_hand
[   1873.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#37, concurrent=0)
[   1890.0] E EventEffectEmitter[4] - EventNodeEffectEmitOneShot (#12, concurrent=0)
               duration: 10.0
               ActorName: Enemy_DungeonBoss_BongoBongo_RightHand
               ELinkKeyName: Dm_ShadowTemple_BossIn_LandSmoke_08
               InstanceName: right_hand
[   1900.0] L EventEffectEmitter[4] - EventNodeEffectEmitOneShot (#12, concurrent=0)
[   1916.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#38, concurrent=0)
               duration: 10.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossIn_LandSmoke_07
               InstanceName: left_hand
[   1926.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#38, concurrent=0)
[   1942.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#39, concurrent=0)
               duration: 10.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossIn_LandSmoke_07
               InstanceName: left_hand
[   1952.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#39, concurrent=0)
[   1964.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#40, concurrent=0)
               duration: 10.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossIn_LandSmoke_07
               InstanceName: left_hand
[   1969.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#49, concurrent=0)
[   1970.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#47, concurrent=0)
[   1970.0] E EventEffectEmitter[2] - EventNodeEffectFade (#48, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
[   1974.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#40, concurrent=0)
[   1982.0] L EventEffectEmitter[2] - EventNodeEffectFade (#48, concurrent=0)
[   1989.0] E EventEffectEmitter[4] - EventNodeEffectEmitOneShot (#13, concurrent=0)
               duration: 10.0
               ActorName: Enemy_DungeonBoss_BongoBongo_RightHand
               ELinkKeyName: Dm_ShadowTemple_BossIn_LandSmoke_08
               InstanceName: right_hand
[   1999.0] L EventEffectEmitter[4] - EventNodeEffectEmitOneShot (#13, concurrent=0)
[   2012.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#41, concurrent=0)
               duration: 10.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossIn_LandSmoke_07
               InstanceName: left_hand
[   2022.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#41, concurrent=0)
[   2035.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#42, concurrent=0)
               duration: 10.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossIn_LandSmoke_07
               InstanceName: left_hand
[   2045.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#42, concurrent=0)
[   2058.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#43, concurrent=0)
               duration: 10.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossIn_LandSmoke_07
               InstanceName: left_hand
[   2059.0] E EventEffectEmitter - EventNodeEffectEmitOneShot (#56, concurrent=0)
               duration: 10.0
               ActorName: Player_Event
               ELinkKeyName: Dm_ShadowTemple_BossIn_LandSmoke_00
               InstanceName: '0'
[   2068.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#43, concurrent=0)
[   2069.0] L EventEffectEmitter - EventNodeEffectEmitOneShot (#56, concurrent=0)
[   2081.0] E EventEffectEmitter[4] - EventNodeEffectEmitOneShot (#14, concurrent=0)
               duration: 10.0
               ActorName: Enemy_DungeonBoss_BongoBongo_RightHand
               ELinkKeyName: Dm_ShadowTemple_BossIn_LandSmoke_08
               InstanceName: right_hand
[   2091.0] L EventEffectEmitter[4] - EventNodeEffectEmitOneShot (#14, concurrent=0)
[   2100.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#44, concurrent=0)
               duration: 10.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossIn_LandSmoke_07
               InstanceName: left_hand
[   2110.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#44, concurrent=0)
[   2121.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#45, concurrent=0)
               duration: 10.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossIn_LandSmoke_07
               InstanceName: left_hand
[   2131.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#45, concurrent=0)
[   2141.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#46, concurrent=0)
               duration: 10.0
               ActorName: Enemy_DungeonBoss_BongoBongo_LeftHand
               ELinkKeyName: Dm_ShadowTemple_BossIn_LandSmoke_07
               InstanceName: left_hand
[   2141.0] E EventEffectEmitter - EventNodeEffectEmitOneShot (#57, concurrent=0)
               duration: 10.0
               ActorName: Player_Event
               ELinkKeyName: Dm_ShadowTemple_BossIn_LandSmoke_00
               InstanceName: '0'
[   2151.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#46, concurrent=0)
[   2151.0] L EventEffectEmitter - EventNodeEffectEmitOneShot (#57, concurrent=0)
[   2155.0] E EventEffectEmitter[4] - EventNodeEffectEmitOneShot (#15, concurrent=0)
               duration: 6.0
               ActorName: Enemy_DungeonBoss_BongoBongo_RightHand
               ELinkKeyName: Dm_ShadowTemple_BossIn_LandSmoke_08
               InstanceName: right_hand
[   2161.0] L EventEffectEmitter[4] - EventNodeEffectEmitOneShot (#15, concurrent=0)
