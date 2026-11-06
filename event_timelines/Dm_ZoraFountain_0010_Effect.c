-------- Event timeline: Dm_ZoraFountain_0010_Effect --------
actors: 11
clips: 18
oneshots: 0
cuts: 1
duration: 2265.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: EventEffectEmitter[1]
concurrent clips: 1
actions: ['EventNodeEffectEmit', 'EventGoOffstageForUser']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[5]
concurrent clips: 1
actions: ['EventNodeEffectEmit', 'EventNodeEffectFade']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[6]
concurrent clips: 1
actions: ['EventNodeEffectEmit', 'EventNodeEffectFade']
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

Actor: EventEffectEmitter[7]
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

Actor: EventEffectEmitter[9]
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

Actor: EventEffectEmitter
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

Actor: EventEffectEmitter[3]
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
               duration: 180.0
               ActorName: Animal_Fish_Blue
               ELinkKeyName: Dm_ZoraFountain_Water_01_C01
               InstanceName: '0'
               IsWaitEnd: false
[    180.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#0, concurrent=0)
[    180.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#1, concurrent=0)
               duration: 240.0
               ActorName: Animal_Fish_Blue
               ELinkKeyName: Dm_ZoraFountain_Water_01_C02
               InstanceName: '0'
               IsWaitEnd: false
[    420.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#1, concurrent=0)
[    922.0] E EventEffectEmitter[5] - EventNodeEffectEmit (#6, concurrent=0)
               duration: 89.0
               ActorName: Npc_JabuJabu
               ELinkKeyName: Dm_ZoraFountain_NoseWater_00_L_C04
               InstanceName: '0'
               IsWaitEnd: true
[    922.0] E EventEffectEmitter[6] - EventNodeEffectEmit (#8, concurrent=0)
               duration: 89.0
               ActorName: Npc_JabuJabu
               ELinkKeyName: Dm_ZoraFountain_NoseWater_00_R_C04
               InstanceName: '0'
               IsWaitEnd: true
[   1011.0] L EventEffectEmitter[5] - EventNodeEffectEmit (#6, concurrent=0)
[   1011.0] L EventEffectEmitter[6] - EventNodeEffectEmit (#8, concurrent=0)
[   1011.0] E EventEffectEmitter[5] - EventNodeEffectFade (#7, concurrent=0)
               duration: 28.0
               IsWaitEnd: true
[   1011.0] E EventEffectEmitter[6] - EventNodeEffectFade (#9, concurrent=0)
               duration: 28.0
               IsWaitEnd: true
[   1039.0] L EventEffectEmitter[5] - EventNodeEffectFade (#7, concurrent=0)
[   1039.0] L EventEffectEmitter[6] - EventNodeEffectFade (#9, concurrent=0)
[   1072.0] E EventEffectEmitter[4] - EventNodeEffectEmit (#10, concurrent=0)
               duration: 238.0
               ActorName: Npc_JabuJabu
               ELinkKeyName: Dm_ZoraFountain_Drool_01_C05
               InstanceName: '0'
               IsWaitEnd: true
[   1130.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#2, concurrent=0)
               duration: 180.0
               ActorName: Animal_Fish_Blue
               ELinkKeyName: Dm_ZoraFountain_Water_01_C02
               InstanceName: '0'
               IsWaitEnd: false
[   1310.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#2, concurrent=0)
[   1310.0] L EventEffectEmitter[4] - EventNodeEffectEmit (#10, concurrent=0)
[   1310.0] E EventEffectEmitter[9] - EventNodeEffectEmit (#13, concurrent=0)
               duration: 120.0
               ActorName: Npc_JabuJabu
               ELinkKeyName: Dm_ZoraFountain_Leaf_00_C06
               InstanceName: '0'
               IsWaitEnd: false
[   1430.0] L EventEffectEmitter[9] - EventNodeEffectEmit (#13, concurrent=0)
[   1430.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#14, concurrent=0)
               duration: 180.0
               ActorName: Npc_JabuJabu
               ELinkKeyName: Dm_ZoraFountain_Suction_01_C08
               InstanceName: '0'
               IsWaitEnd: true
[   1444.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#3, concurrent=0)
               duration: 106.0
               ActorName: Animal_Fish_Blue
               ELinkKeyName: Dm_ZoraFountain_Water_01_C07
               InstanceName: '0'
               IsWaitEnd: false
[   1550.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#3, concurrent=0)
[   1550.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#4, concurrent=0)
               duration: 60.0
               ActorName: Animal_Fish_Blue
               ELinkKeyName: Dm_ZoraFountain_Water_01_C08
               InstanceName: '0'
               IsWaitEnd: false
[   1550.0] E EventEffectEmitter[7] - EventNodeEffectEmit (#11, concurrent=0)
               duration: 60.0
               ActorName: Npc_JabuJabu
               ELinkKeyName: Dm_ZoraFountain_Drool_01_C08
               InstanceName: '0'
               IsWaitEnd: false
[   1600.0] E EventEffectEmitter - EventNodeEffectEmit (#15, concurrent=0)
               duration: 665.0
               ActorName: Npc_JabuJabu
               ELinkKeyName: Dm_ZoraFountain_Suction_01_C09
               InstanceName: '0'
               IsWaitEnd: true
[   1610.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#4, concurrent=0)
[   1610.0] L EventEffectEmitter[7] - EventNodeEffectEmit (#11, concurrent=0)
[   1610.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#14, concurrent=0)
[   1610.0] E EventEffectEmitter[1] - EventGoOffstageForUser (#5, concurrent=0)
               duration: 38.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: false
[   1610.0] E EventEffectEmitter[8] - EventNodeEffectEmit (#12, concurrent=0)
               duration: 655.0
               ActorName: Npc_JabuJabu
               ELinkKeyName: Dm_ZoraFountain_Drool_01_C09
               InstanceName: '0'
               IsWaitEnd: false
[   1648.0] L EventEffectEmitter[1] - EventGoOffstageForUser (#5, concurrent=0)
[   1918.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#16, concurrent=0)
               duration: 119.0
               ActorName: Player_Event
               ELinkKeyName: Dm_ZoraFountain_FingerSmoke_L_01_C13
               InstanceName: '0'
               IsWaitEnd: false
[   1921.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#17, concurrent=0)
               duration: 116.0
               ActorName: Player_Event
               ELinkKeyName: Dm_ZoraFountain_FingerSmoke_R_01_C13
               InstanceName: '0'
               IsWaitEnd: false
[   2037.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#16, concurrent=0)
[   2037.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#17, concurrent=0)
[   2265.0] L EventEffectEmitter[8] - EventNodeEffectEmit (#12, concurrent=0)
[   2265.0] L EventEffectEmitter - EventNodeEffectEmit (#15, concurrent=0)
