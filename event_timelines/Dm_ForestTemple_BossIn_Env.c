-------- Event timeline: Dm_ForestTemple_BossIn_Env --------
actors: 2
clips: 11
oneshots: 0
cuts: 1
duration: 2505.0
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

[      0.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#2, concurrent=0)
               duration: 341.0
               DemoPaletteName: Dm_ForestTemple_BossIn_C01
               IsWaitEnd: true
[    341.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#2, concurrent=0)
[    341.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#3, concurrent=0)
               duration: 200.0
               DemoPaletteName: Dm_ForestTemple_BossIn_C02
               IsWaitEnd: true
[    397.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#0, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Short
[    409.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#0, concurrent=0)
[    541.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#3, concurrent=0)
[    541.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#4, concurrent=0)
               duration: 314.0
               DemoPaletteName: Dm_ForestTemple_BossIn_C03_50
               IsWaitEnd: true
[    855.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#4, concurrent=0)
[    855.0] E EventWorldManagerController - Event_SetDemoPaletteTransitionForTimeline (#5, concurrent=0)
               duration: 65.0
               CurrDemoPaletteName: Dm_ForestTemple_BossIn_C03
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_ForestTemple_BossIn_C03_50
               RateEnd: 1.0
               RateFrame: 65.0
               RateStart: 0.0
[    920.0] L EventWorldManagerController - Event_SetDemoPaletteTransitionForTimeline (#5, concurrent=0)
[    920.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#6, concurrent=0)
               duration: 137.0
               DemoPaletteName: Dm_ForestTemple_BossIn_C03
               IsWaitEnd: true
[   1057.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#6, concurrent=0)
[   1057.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
               duration: 444.0
               DemoPaletteName: Dm_ForestTemple_BossIn_C04
               IsWaitEnd: true
[   1501.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
[   1501.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
               duration: 51.0
               DemoPaletteName: Dm_ForestTemple_BossIn_C05_50
               IsWaitEnd: true
[   1552.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
[   1552.0] E EventWorldManagerController - Event_SetDemoPaletteTransitionForTimeline (#9, concurrent=0)
               duration: 198.0
               CurrDemoPaletteName: Dm_ForestTemple_BossIn_C05
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_ForestTemple_BossIn_C05_50
               RateEnd: 1.0
               RateFrame: 198.0
               RateStart: 0.0
[   1750.0] L EventWorldManagerController - Event_SetDemoPaletteTransitionForTimeline (#9, concurrent=0)
[   1750.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
               duration: 198.0
               DemoPaletteName: Dm_ForestTemple_BossIn_C05
               IsWaitEnd: true
[   1866.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#1, concurrent=0)
               duration: 75.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Doon
[   1941.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#1, concurrent=0)
[   1948.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
