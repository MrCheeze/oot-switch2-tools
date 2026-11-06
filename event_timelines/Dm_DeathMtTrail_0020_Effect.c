-------- Event timeline: Dm_DeathMtTrail_0020_Effect --------
actors: 7
clips: 17
oneshots: 0
cuts: 1
duration: 8665.0
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

Actor: EventEffectEmitter[0]
concurrent clips: 1
actions: ['EventNodeEffectEmit']
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

Actor: EventEffectEmitter[1]
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

Actor: EventEffectEmitter[4]
concurrent clips: 1
actions: ['EventNodeEffectEmit']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventEffectEmitter[5] - EventEffectAddELinkHiddenSetting (#0, concurrent=0)
               duration: 100.0
               ActorName: Player
               KeyName: FootEffect
[      0.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#1, concurrent=0)
               duration: 670.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_DeathMtTrail_0020_WarpOut_01
               InstanceName: Eff_001
               IsWaitEnd: true
[    100.0] L EventEffectEmitter[5] - EventEffectAddELinkHiddenSetting (#0, concurrent=0)
[    648.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#4, concurrent=0)
               duration: 377.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_DeathMtTrail_0020_Darunia_Land_01
               InstanceName: Eff_002
               IsWaitEnd: true
[    670.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#1, concurrent=0)
[    680.0] E EventEffectEmitter[6] - EventNodeEffectEmit (#2, concurrent=0)
               duration: 297.0
               ActorName: Player_Event
               ELinkKeyName: Dm_DeathMtTrail_0020_DownSmoke_00
               InstanceName: '0'
               IsWaitEnd: true
[    977.0] L EventEffectEmitter[6] - EventNodeEffectEmit (#2, concurrent=0)
[   1025.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#4, concurrent=0)
[   2077.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#3, concurrent=0)
               duration: 178.0
               ActorName: Player_Event
               ELinkKeyName: Dm_DeathMtTrail_0020_DownSmoke_01
               InstanceName: '0'
               IsWaitEnd: true
[   2255.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#3, concurrent=0)
[   2578.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#5, concurrent=0)
               duration: 25.0
               ActorName: Npc_Goron_Darunia_Child
               ELinkKeyName: Dm_DeathMtTrail_0020_FootSmoke_00_L
               InstanceName: '0'
               IsWaitEnd: true
[   2603.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#5, concurrent=0)
[   2618.0] E EventEffectEmitter[4] - EventNodeEffectEmit (#11, concurrent=0)
               duration: 25.0
               ActorName: Npc_Goron_Darunia_Child
               ELinkKeyName: Dm_DeathMtTrail_0020_FootSmoke_00_R
               InstanceName: '0'
               IsWaitEnd: true
[   2642.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#6, concurrent=0)
               duration: 25.0
               ActorName: Npc_Goron_Darunia_Child
               ELinkKeyName: Dm_DeathMtTrail_0020_FootSmoke_00_L
               InstanceName: '0'
               IsWaitEnd: true
[   2643.0] L EventEffectEmitter[4] - EventNodeEffectEmit (#11, concurrent=0)
[   2667.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#6, concurrent=0)
[   2670.0] E EventEffectEmitter[4] - EventNodeEffectEmit (#12, concurrent=0)
               duration: 25.0
               ActorName: Npc_Goron_Darunia_Child
               ELinkKeyName: Dm_DeathMtTrail_0020_FootSmoke_00_R
               InstanceName: '0'
               IsWaitEnd: true
[   2695.0] L EventEffectEmitter[4] - EventNodeEffectEmit (#12, concurrent=0)
[   2699.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#7, concurrent=0)
               duration: 25.0
               ActorName: Npc_Goron_Darunia_Child
               ELinkKeyName: Dm_DeathMtTrail_0020_FootSmoke_00_L
               InstanceName: '0'
               IsWaitEnd: true
[   2724.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#7, concurrent=0)
[   2728.0] E EventEffectEmitter[4] - EventNodeEffectEmit (#13, concurrent=0)
               duration: 25.0
               ActorName: Npc_Goron_Darunia_Child
               ELinkKeyName: Dm_DeathMtTrail_0020_FootSmoke_00_R
               InstanceName: '0'
               IsWaitEnd: true
[   2753.0] L EventEffectEmitter[4] - EventNodeEffectEmit (#13, concurrent=0)
[   2756.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#8, concurrent=0)
               duration: 25.0
               ActorName: Npc_Goron_Darunia_Child
               ELinkKeyName: Dm_DeathMtTrail_0020_FootSmoke_00_L
               InstanceName: '0'
               IsWaitEnd: true
[   2781.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#8, concurrent=0)
[   2784.0] E EventEffectEmitter[4] - EventNodeEffectEmit (#14, concurrent=0)
               duration: 25.0
               ActorName: Npc_Goron_Darunia_Child
               ELinkKeyName: Dm_DeathMtTrail_0020_FootSmoke_00_R
               InstanceName: '0'
               IsWaitEnd: true
[   2808.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#9, concurrent=0)
               duration: 25.0
               ActorName: Npc_Goron_Darunia_Child
               ELinkKeyName: Dm_DeathMtTrail_0020_FootSmoke_00_L
               InstanceName: '0'
               IsWaitEnd: true
[   2809.0] L EventEffectEmitter[4] - EventNodeEffectEmit (#14, concurrent=0)
[   2833.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#9, concurrent=0)
[   2836.0] E EventEffectEmitter[4] - EventNodeEffectEmit (#15, concurrent=0)
               duration: 25.0
               ActorName: Npc_Goron_Darunia_Child
               ELinkKeyName: Dm_DeathMtTrail_0020_FootSmoke_00_R
               InstanceName: '0'
               IsWaitEnd: true
[   2861.0] L EventEffectEmitter[4] - EventNodeEffectEmit (#15, concurrent=0)
[   2864.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#10, concurrent=0)
               duration: 25.0
               ActorName: Npc_Goron_Darunia_Child
               ELinkKeyName: Dm_DeathMtTrail_0020_FootSmoke_00_L
               InstanceName: '0'
               IsWaitEnd: true
[   2885.0] E EventEffectEmitter[4] - EventNodeEffectEmit (#16, concurrent=0)
               duration: 25.0
               ActorName: Npc_Goron_Darunia_Child
               ELinkKeyName: Dm_DeathMtTrail_0020_FootSmoke_00_R
               InstanceName: '0'
               IsWaitEnd: true
[   2889.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#10, concurrent=0)
[   2910.0] L EventEffectEmitter[4] - EventNodeEffectEmit (#16, concurrent=0)
