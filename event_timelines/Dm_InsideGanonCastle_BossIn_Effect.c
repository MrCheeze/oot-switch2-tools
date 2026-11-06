-------- Event timeline: Dm_InsideGanonCastle_BossIn_Effect --------
actors: 7
clips: 29
oneshots: 0
cuts: 1
duration: 9068.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: EventEffectEmitter[3]
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
actions: ['EventNodeEffectEmit', 'EventNodeEffectEmitOneShot']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: ''

Actor: EventEffectEmitter
concurrent clips: 1
actions: ['EventNodeEffectEmit']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: ''

Actor: EventEffectEmitter[1]
concurrent clips: 1
actions: ['EventNodeEffectEmit']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: ''

Actor: EventEffectEmitter[2]
concurrent clips: 1
actions: ['EventNodeEffectEmit']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Dm_Locator[1]
concurrent clips: 1
actions: ['EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
params: EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- 0.07999999821186066
- 171.0500030517578
- -24.6299991607666
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Dm_Locator[4]
concurrent clips: 1
actions: ['EventTriggerEmitXLink']
params: EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- 0.07999999821186066
- 171.0500030517578
- -24.6299991607666
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      4.0] E Dm_Locator[1] - EventTriggerEmitXLink (#25, concurrent=0)
               duration: 5945.0
               ELinkKey: Dm_InsideGanonCastle_BossIn_2dVolume
               SLinkKey: ''
[     28.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#18, concurrent=0)
               duration: 691.0
               ActorName: Npc_Hylia_Zelda_Adult
               ELinkKeyName: Dm_InsideGanonCastle_BossIn_Crystal
               InstanceName: '0'
               IsWaitEnd: false
[    719.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#18, concurrent=0)
[    719.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#19, concurrent=0)
               duration: 179.0
               ActorName: Npc_Hylia_Zelda_Adult
               ELinkKeyName: Dm_InsideGanonCastle_BossIn_Crystal
               InstanceName: '0'
               IsWaitEnd: false
[    898.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#19, concurrent=0)
[   1321.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#20, concurrent=0)
               duration: 354.0
               ActorName: Npc_Hylia_Zelda_Adult
               ELinkKeyName: Dm_InsideGanonCastle_BossIn_Crystal
               InstanceName: '0'
               IsWaitEnd: false
[   1675.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#20, concurrent=0)
[   1675.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#6, concurrent=0)
               duration: 134.0
               ActorName: Player_Adult
               ELinkKeyName: Dm_InsideGanonCastle_BossIn_C06
               InstanceName: ''
[   1809.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#6, concurrent=0)
[   1809.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#0, concurrent=0)
               duration: 255.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_InsideGanonCastle_BossIn_Triforce_Player
               InstanceName: ''
               IsWaitEnd: true
[   1809.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#7, concurrent=0)
               duration: 255.0
               ActorName: Player_Adult
               ELinkKeyName: Dm_InsideGanonCastle_BossIn_C07
               InstanceName: ''
[   2064.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#0, concurrent=0)
[   2064.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#7, concurrent=0)
[   2064.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#1, concurrent=0)
               duration: 329.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_InsideGanonCastle_BossIn_C08_TriforceAfterGlow
               InstanceName: ''
               IsWaitEnd: true
[   2064.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#8, concurrent=0)
               duration: 329.0
               ActorName: Player_Adult
               ELinkKeyName: Dm_InsideGanonCastle_BossIn_C08
               InstanceName: ''
[   2393.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#1, concurrent=0)
[   2393.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#8, concurrent=0)
[   2627.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#2, concurrent=0)
               duration: 329.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_InsideGanonCastle_BossIn_Triforce_Zelda
               InstanceName: ''
               IsWaitEnd: true
[   2627.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#16, concurrent=0)
               duration: 329.0
               ActorName: Npc_Hylia_Zelda_Adult
               ELinkKeyName: Dm_InsideGanonCastle_BossIn_C10
               InstanceName: ''
               IsWaitEnd: true
[   2627.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#21, concurrent=0)
               duration: 329.0
               ActorName: Npc_Hylia_Zelda_Adult
               ELinkKeyName: Dm_InsideGanonCastle_BossIn_Crystal_NoDist
               InstanceName: '0'
               IsWaitEnd: false
[   2956.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#2, concurrent=0)
[   2956.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#16, concurrent=0)
[   2956.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#21, concurrent=0)
[   4715.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#22, concurrent=0)
               duration: 329.0
               ActorName: Npc_Hylia_Zelda_Adult
               ELinkKeyName: Dm_InsideGanonCastle_BossIn_Crystal
               InstanceName: '0'
               IsWaitEnd: false
[   5044.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#22, concurrent=0)
[   5949.0] L Dm_Locator[1] - EventTriggerEmitXLink (#25, concurrent=0)
[   5949.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#3, concurrent=0)
               duration: 664.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_InsideGanonCastle_BossIn_Triforce_Ganondorf_C21
               InstanceName: ''
               IsWaitEnd: true
[   5949.0] E EventEffectEmitter - EventNodeEffectEmit (#10, concurrent=0)
               duration: 664.0
               ActorName: Enemy_DungeonBoss_Ganondorf
               ELinkKeyName: Dm_InsideGanonCastle_BossIn_C21
               InstanceName: ''
               IsWaitEnd: true
[   5949.0] E Dm_Locator[1] - EventTriggerEmitXLink (#26, concurrent=0)
               duration: 1413.0
               ELinkKey: Dm_InsideGanonCastle_BossIn_2dVolume_Purple
               SLinkKey: ''
[   5949.0] E Dm_Locator[4] - EventTriggerEmitXLink (#28, concurrent=0)
               duration: 1413.0
               ELinkKey: Dm_InsideGanonCastle_BossIn_2dVolume_Force
               SLinkKey: ''
[   6613.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#3, concurrent=0)
[   6613.0] L EventEffectEmitter - EventNodeEffectEmit (#10, concurrent=0)
[   6613.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#4, concurrent=0)
               duration: 122.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_InsideGanonCastle_BossIn_Triforce_Ganondorf_C22
               InstanceName: ''
               IsWaitEnd: true
[   6613.0] E EventEffectEmitter - EventNodeEffectEmit (#11, concurrent=0)
               duration: 120.0
               ActorName: Enemy_DungeonBoss_Ganondorf
               ELinkKeyName: Dm_InsideGanonCastle_BossIn_C22
               InstanceName: ''
               IsWaitEnd: true
[   6733.0] L EventEffectEmitter - EventNodeEffectEmit (#11, concurrent=0)
[   6735.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#4, concurrent=0)
[   6735.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#9, concurrent=0)
               duration: 629.0
               ActorName: Player_Adult
               ELinkKeyName: Dm_InsideGanonCastle_BossIn_C23
               InstanceName: ''
               IsWaitEnd: true
[   7362.0] L Dm_Locator[1] - EventTriggerEmitXLink (#26, concurrent=0)
[   7362.0] L Dm_Locator[4] - EventTriggerEmitXLink (#28, concurrent=0)
[   7362.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#5, concurrent=0)
               duration: 130.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_InsideGanonCastle_BossIn_Triforce_Ganondorf_C24
               InstanceName: ''
               IsWaitEnd: true
[   7362.0] E EventEffectEmitter - EventNodeEffectEmit (#12, concurrent=0)
               duration: 130.0
               ActorName: Enemy_DungeonBoss_Ganondorf
               ELinkKeyName: Dm_InsideGanonCastle_BossIn_C24
               InstanceName: ''
               IsWaitEnd: true
[   7362.0] E Dm_Locator[1] - EventTriggerXLinkFadeByKey (#27, concurrent=0)
               duration: 1894.0
               ELinkKey: Dm_InsideGanonCastle_BossIn_2dVolume_Purple
               IsKill: true
               SLinkKey: ''
[   7364.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#9, concurrent=0)
[   7492.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#5, concurrent=0)
[   7492.0] L EventEffectEmitter - EventNodeEffectEmit (#12, concurrent=0)
[   7650.0] E EventEffectEmitter - EventNodeEffectEmit (#13, concurrent=0)
               duration: 141.0
               ActorName: Enemy_DungeonBoss_Ganondorf
               ELinkKeyName: Dm_InsideGanonCastle_BossIn_C27
               InstanceName: ''
               IsWaitEnd: true
[   7658.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#23, concurrent=0)
               duration: 331.0
               ActorName: Npc_Hylia_Zelda_Adult
               ELinkKeyName: Dm_InsideGanonCastle_BossIn_C027
               InstanceName: '0'
               IsWaitEnd: false
[   7791.0] L EventEffectEmitter - EventNodeEffectEmit (#13, concurrent=0)
[   7989.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#23, concurrent=0)
[   7989.0] E EventEffectEmitter - EventNodeEffectEmit (#14, concurrent=0)
               duration: 289.0
               ActorName: Enemy_DungeonBoss_Ganondorf
               ELinkKeyName: Dm_InsideGanonCastle_BossIn_C28
               InstanceName: ''
               IsWaitEnd: true
[   7989.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#17, concurrent=0)
               duration: 289.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_InsideGanonCastle_BossIn_CrystalVanish_End
               InstanceName: '0'
               IsWaitEnd: true
[   7989.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#24, concurrent=0)
               duration: 289.0
               ActorName: Npc_Hylia_Zelda_Adult
               ELinkKeyName: Dm_InsideGanonCastle_BossIn_C030
               InstanceName: '0'
               IsWaitEnd: false
[   8278.0] L EventEffectEmitter - EventNodeEffectEmit (#14, concurrent=0)
[   8278.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#17, concurrent=0)
[   8278.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#24, concurrent=0)
[   8300.0] E EventEffectEmitter - EventNodeEffectEmit (#15, concurrent=0)
               duration: 768.0
               ActorName: Enemy_DungeonBoss_Ganondorf
               ELinkKeyName: Dm_InsideGanonCastle_BossIn_C29
               InstanceName: ''
               IsWaitEnd: true
[   9068.0] L EventEffectEmitter - EventNodeEffectEmit (#15, concurrent=0)
[   9256.0] L Dm_Locator[1] - EventTriggerXLinkFadeByKey (#27, concurrent=0)
