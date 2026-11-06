-------- Event timeline: Dm_DodongoCave_BossIn_Env --------
actors: 2
clips: 19
oneshots: 0
cuts: 1
duration: 2280.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: GameSystemActor[0]
concurrent clips: 1
actions: ['EventControllerRumbleTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventWorldManagerController[0]
concurrent clips: 1
actions: ['Event_SetDemoPaletteForTimeline', 'Event_SetDemoPaletteTransitionForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
               duration: 90.0
               DemoPaletteName: Dm_DodongoCave_BossIn_C01
               IsWaitEnd: true
[     90.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
[     90.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
               duration: 90.0
               DemoPaletteName: Dm_DodongoCave_BossIn_C02
               IsWaitEnd: true
[    103.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#0, concurrent=0)
               duration: 14.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_DoDon
[    117.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#0, concurrent=0)
[    180.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
[    180.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#12, concurrent=0)
               duration: 450.0
               DemoPaletteName: Dm_DodongoCave_BossIn_C03
               IsWaitEnd: true
[    630.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#12, concurrent=0)
[    630.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#13, concurrent=0)
               duration: 325.0
               DemoPaletteName: Dm_DodongoCave_BossIn_C04
               IsWaitEnd: true
[    742.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#1, concurrent=0)
               duration: 18.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_DoDon
[    760.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#1, concurrent=0)
[    898.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#2, concurrent=0)
               duration: 18.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_DoDon
[    916.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#2, concurrent=0)
[    955.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#13, concurrent=0)
[    955.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#14, concurrent=0)
               duration: 180.0
               DemoPaletteName: Dm_DodongoCave_BossIn_C05
               IsWaitEnd: true
[    993.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#3, concurrent=0)
               duration: 18.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_DoDon
[   1011.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#3, concurrent=0)
[   1135.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#14, concurrent=0)
[   1135.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#15, concurrent=0)
               duration: 88.0
               CurrDemoPaletteName: Dm_DodongoCave_BossIn_C06_b
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_DodongoCave_BossIn_C06
               RateEnd: 1.0
               RateFrame: 45.0
               RateStart: 0.0
[   1155.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#4, concurrent=0)
               duration: 18.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_DoDon
[   1173.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#4, concurrent=0)
[   1223.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#15, concurrent=0)
[   1223.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#16, concurrent=0)
               duration: 132.0
               DemoPaletteName: Dm_DodongoCave_BossIn_C06_b
               IsWaitEnd: true
[   1260.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#5, concurrent=0)
               duration: 18.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_DoDon
[   1278.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#5, concurrent=0)
[   1355.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#16, concurrent=0)
[   1355.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#17, concurrent=0)
               duration: 100.0
               DemoPaletteName: Dm_DodongoCave_BossIn_C07
               IsWaitEnd: true
[   1363.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#6, concurrent=0)
               duration: 22.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_DoDon
[   1385.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#6, concurrent=0)
[   1455.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#17, concurrent=0)
[   1455.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#18, concurrent=0)
               duration: 825.0
               DemoPaletteName: Dm_DodongoCave_BossIn_C08
               IsWaitEnd: true
[   1465.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#7, concurrent=0)
               duration: 22.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_DoDon
[   1487.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#7, concurrent=0)
[   1570.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#8, concurrent=0)
               duration: 22.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_DoDon
[   1592.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#8, concurrent=0)
[   1706.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#9, concurrent=0)
               duration: 334.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_BuBuBu
[   2040.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#9, concurrent=0)
[   2280.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#18, concurrent=0)
