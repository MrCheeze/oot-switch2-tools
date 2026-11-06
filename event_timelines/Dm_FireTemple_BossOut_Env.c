-------- Event timeline: Dm_FireTemple_BossOut_Env --------
actors: 3
clips: 22
oneshots: 0
cuts: 1
duration: 3235.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: GameSystemActor[1]
concurrent clips: 1
actions: ['EventControllerRumbleTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: GameSystemActor[0]
concurrent clips: 1
actions: ['EventControllerRumbleTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventWorldManagerController
concurrent clips: 1
actions: ['Event_SetDemoPaletteForTimeline', 'Event_SetDemoPaletteTransitionForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
               duration: 150.0
               DemoPaletteName: Dm_FireTemple_BossOut_C01
               IsWaitEnd: true
[    150.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
[    150.0] E EventWorldManagerController - Event_SetDemoPaletteTransitionForTimeline (#12, concurrent=0)
               duration: 15.0
               CurrDemoPaletteName: Dm_FireTemple_BossOut_C01_50
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_FireTemple_BossOut_C01
               RateEnd: 1.0
               RateFrame: 15.0
               RateStart: 0.0
[    165.0] L EventWorldManagerController - Event_SetDemoPaletteTransitionForTimeline (#12, concurrent=0)
[    165.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#13, concurrent=0)
               duration: 220.0
               DemoPaletteName: Dm_FireTemple_BossOut_C01_50
               IsWaitEnd: true
[    385.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#13, concurrent=0)
[    385.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#14, concurrent=0)
               duration: 635.0
               DemoPaletteName: Dm_FireTemple_BossOut_C02
               IsWaitEnd: true
[   1020.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#14, concurrent=0)
[   1020.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#15, concurrent=0)
               duration: 360.0
               DemoPaletteName: Dm_FireTemple_BossOut_C03
               IsWaitEnd: true
[   1380.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#15, concurrent=0)
[   1380.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#16, concurrent=0)
               duration: 100.0
               DemoPaletteName: Dm_FireTemple_BossOut_C04
               IsWaitEnd: true
[   1480.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#16, concurrent=0)
[   1480.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#17, concurrent=0)
               duration: 197.0
               DemoPaletteName: Dm_FireTemple_BossOut_C05
               IsWaitEnd: true
[   1525.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#4, concurrent=0)
               duration: 6.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Piton
[   1530.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#0, concurrent=0)
               duration: 6.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Piton
[   1531.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#4, concurrent=0)
[   1534.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#5, concurrent=0)
               duration: 6.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Piton
[   1536.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#0, concurrent=0)
[   1538.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#1, concurrent=0)
               duration: 6.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Piton
[   1540.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#5, concurrent=0)
[   1544.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#1, concurrent=0)
[   1544.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#6, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Piton
[   1552.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#2, concurrent=0)
               duration: 6.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Piton
[   1556.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#6, concurrent=0)
[   1556.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#7, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Piton
[   1558.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#2, concurrent=0)
[   1568.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#7, concurrent=0)
[   1568.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#3, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Piton
[   1574.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#8, concurrent=0)
               duration: 6.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Piton
[   1580.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#3, concurrent=0)
[   1580.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#8, concurrent=0)
[   1582.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#9, concurrent=0)
               duration: 4.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Piton
[   1586.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#9, concurrent=0)
[   1603.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#10, concurrent=0)
               duration: 20.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_Doon
[   1623.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#10, concurrent=0)
[   1677.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#17, concurrent=0)
[   1677.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#18, concurrent=0)
               duration: 373.0
               DemoPaletteName: Dm_FireTemple_BossOut_C06
               IsWaitEnd: true
[   2050.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#18, concurrent=0)
[   2050.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#19, concurrent=0)
               duration: 200.0
               DemoPaletteName: Dm_FireTemple_BossOut_C07
               IsWaitEnd: true
[   2250.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#19, concurrent=0)
[   2250.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#20, concurrent=0)
               duration: 385.0
               DemoPaletteName: Dm_FireTemple_BossOut_C08
               IsWaitEnd: true
[   2635.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#20, concurrent=0)
[   2635.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#21, concurrent=0)
               duration: 600.0
               DemoPaletteName: Dm_FireTemple_BossOut_C09
               IsWaitEnd: true
[   3235.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#21, concurrent=0)
