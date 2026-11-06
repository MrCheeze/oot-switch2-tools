-------- Event timeline: Dm_TimeTemple_0050_Env --------
actors: 4
clips: 15
oneshots: 0
cuts: 1
duration: 3657.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: EventWorldManagerController[0]
concurrent clips: 1
actions: ['Event_SetWindForTimeline', 'Event_SetWindTransitionForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: GameSystemActor[10]
concurrent clips: 1
actions: ['EventControllerRumbleTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventWorldManagerController[11]
concurrent clips: 1
actions: ['Event_SetDemoPaletteForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventWorldManagerController[10]
concurrent clips: 1
actions: ['Event_SetEnvPaletteForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventWorldManagerController[0] - Event_SetWindForTimeline (#0, concurrent=0)
               duration: 180.0
               Azimuth: 90.0
               Elevation: 0.0
               IsImmTrans: true
               IsWaitEnd: true
               Speed: 15.0
[      0.0] E EventWorldManagerController[11] - Event_SetDemoPaletteForTimeline (#4, concurrent=0)
               duration: 238.0
               DemoPaletteName: Dm_TimeTemple_0050_C02
               IsWaitEnd: true
[    180.0] L EventWorldManagerController[0] - Event_SetWindForTimeline (#0, concurrent=0)
[    180.0] E EventWorldManagerController[0] - Event_SetWindTransitionForTimeline (#1, concurrent=0)
               duration: 58.0
               Azimuth: 90.0
               Elevation: 0.0
               IsWaitEnd: true
               SpeedEnd: 0.0
               SpeedStart: 15.0
               TransitionFrame: 58.0
[    181.0] E GameSystemActor[10] - EventControllerRumbleTimeline (#2, concurrent=0)
               duration: 10.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Piton
[    191.0] L GameSystemActor[10] - EventControllerRumbleTimeline (#2, concurrent=0)
[    238.0] L EventWorldManagerController[0] - Event_SetWindTransitionForTimeline (#1, concurrent=0)
[    238.0] L EventWorldManagerController[11] - Event_SetDemoPaletteForTimeline (#4, concurrent=0)
[    238.0] E EventWorldManagerController[11] - Event_SetDemoPaletteForTimeline (#5, concurrent=0)
               duration: 285.0
               DemoPaletteName: Dm_TimeTemple_0050_C03
               IsWaitEnd: true
[    523.0] L EventWorldManagerController[11] - Event_SetDemoPaletteForTimeline (#5, concurrent=0)
[    523.0] E EventWorldManagerController[11] - Event_SetDemoPaletteForTimeline (#6, concurrent=0)
               duration: 572.0
               DemoPaletteName: Dm_TimeTemple_0050_C04
               IsWaitEnd: true
[   1095.0] L EventWorldManagerController[11] - Event_SetDemoPaletteForTimeline (#6, concurrent=0)
[   1095.0] E EventWorldManagerController[11] - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
               duration: 470.0
               DemoPaletteName: Dm_TimeTemple_0050_C05
               IsWaitEnd: true
[   1565.0] L EventWorldManagerController[11] - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
[   1565.0] E EventWorldManagerController[11] - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
               duration: 80.0
               DemoPaletteName: Dm_TimeTemple_0050_C06
               IsWaitEnd: true
[   1645.0] L EventWorldManagerController[11] - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
[   1645.0] E EventWorldManagerController[11] - Event_SetDemoPaletteForTimeline (#9, concurrent=0)
               duration: 84.0
               DemoPaletteName: Dm_TimeTemple_0050_C07
               IsWaitEnd: true
[   1649.0] E GameSystemActor[10] - EventControllerRumbleTimeline (#3, concurrent=0)
               duration: 13.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_Piton
[   1662.0] L GameSystemActor[10] - EventControllerRumbleTimeline (#3, concurrent=0)
[   1729.0] L EventWorldManagerController[11] - Event_SetDemoPaletteForTimeline (#9, concurrent=0)
[   1729.0] E EventWorldManagerController[11] - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
               duration: 228.0
               DemoPaletteName: Dm_TimeTemple_0050_C08
               IsWaitEnd: true
[   1957.0] L EventWorldManagerController[11] - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
[   1957.0] E EventWorldManagerController[11] - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
               duration: 150.0
               DemoPaletteName: Dm_TimeTemple_0050_C09
               IsWaitEnd: true
[   2107.0] L EventWorldManagerController[11] - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
[   2107.0] E EventWorldManagerController[11] - Event_SetDemoPaletteForTimeline (#12, concurrent=0)
               duration: 145.0
               DemoPaletteName: Dm_TimeTemple_0050_C09_50
               IsWaitEnd: true
[   2252.0] L EventWorldManagerController[11] - Event_SetDemoPaletteForTimeline (#12, concurrent=0)
[   2252.0] E EventWorldManagerController[11] - Event_SetDemoPaletteForTimeline (#13, concurrent=0)
               duration: 1045.0
               DemoPaletteName: Dm_TimeTemple_0050_C10
               IsWaitEnd: true
[   3297.0] L EventWorldManagerController[11] - Event_SetDemoPaletteForTimeline (#13, concurrent=0)
[   3297.0] E EventWorldManagerController[11] - Event_SetDemoPaletteForTimeline (#14, concurrent=0)
               duration: 360.0
               DemoPaletteName: Dm_TimeTemple_0050_C11
               IsWaitEnd: true
[   3657.0] L EventWorldManagerController[11] - Event_SetDemoPaletteForTimeline (#14, concurrent=0)
