-------- Event timeline: Dm_SpiritTemple_0010_Env --------
actors: 3
clips: 18
oneshots: 0
cuts: 1
duration: 3883.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: GameSystemActor[11]
concurrent clips: 1
actions: ['EventControllerRumbleTimeline']
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

Actor: EventWorldManagerController[10]
concurrent clips: 1
actions: ['Event_SetDemoPaletteForTimeline', 'Event_SetDemoPaletteTransitionForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
               duration: 350.0
               DemoPaletteName: Dm_SpiritTemple_0010_C01
               IsWaitEnd: true
[    350.0] L EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
[    350.0] E EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
               duration: 780.0
               DemoPaletteName: Dm_SpiritTemple_0010_C02
               IsWaitEnd: true
[   1130.0] L EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
[   1130.0] E EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#9, concurrent=0)
               duration: 480.0
               DemoPaletteName: Dm_SpiritTemple_0010_C03
               IsWaitEnd: true
[   1610.0] L EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#9, concurrent=0)
[   1610.0] E EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
               duration: 380.0
               DemoPaletteName: Dm_SpiritTemple_0010_C03_50
               IsWaitEnd: true
[   1990.0] L EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
[   1990.0] E EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
               duration: 240.0
               DemoPaletteName: Dm_SpiritTemple_0010_C04
               IsWaitEnd: true
[   2230.0] L EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
[   2230.0] E EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#12, concurrent=0)
               duration: 600.0
               DemoPaletteName: Dm_SpiritTemple_0010_C05
               IsWaitEnd: true
[   2830.0] L EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#12, concurrent=0)
[   2830.0] E EventWorldManagerController[10] - Event_SetDemoPaletteTransitionForTimeline (#13, concurrent=0)
               duration: 120.0
               CurrDemoPaletteName: Dm_SpiritTemple_0010_C05_b
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_SpiritTemple_0010_C05
               RateEnd: 1.0
               RateFrame: 120.0
               RateStart: 0.0
[   2950.0] L EventWorldManagerController[10] - Event_SetDemoPaletteTransitionForTimeline (#13, concurrent=0)
[   2950.0] E EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#14, concurrent=0)
               duration: 320.0
               DemoPaletteName: Dm_SpiritTemple_0010_C05_b
               IsWaitEnd: true
[   3270.0] L EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#14, concurrent=0)
[   3270.0] E EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#15, concurrent=0)
               duration: 180.0
               DemoPaletteName: Dm_SpiritTemple_0010_C06
               IsWaitEnd: true
[   3392.0] E GameSystemActor[10] - EventControllerRumbleTimeline (#1, concurrent=0)
               duration: 13.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Don
[   3405.0] L GameSystemActor[10] - EventControllerRumbleTimeline (#1, concurrent=0)
[   3450.0] L EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#15, concurrent=0)
[   3450.0] E EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#16, concurrent=0)
               duration: 150.0
               DemoPaletteName: Dm_SpiritTemple_0010_C07
               IsWaitEnd: true
[   3458.0] E GameSystemActor[10] - EventControllerRumbleTimeline (#2, concurrent=0)
               duration: 13.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_Don
[   3471.0] L GameSystemActor[10] - EventControllerRumbleTimeline (#2, concurrent=0)
[   3498.0] E GameSystemActor[11] - EventControllerRumbleTimeline (#0, concurrent=0)
               duration: 32.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_GoGoGo
[   3498.0] E GameSystemActor[10] - EventControllerRumbleTimeline (#3, concurrent=0)
               duration: 32.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_BuBuBu
[   3530.0] L GameSystemActor[11] - EventControllerRumbleTimeline (#0, concurrent=0)
[   3530.0] L GameSystemActor[10] - EventControllerRumbleTimeline (#3, concurrent=0)
[   3530.0] E GameSystemActor[10] - EventControllerRumbleTimeline (#4, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_BuBuBu
[   3542.0] L GameSystemActor[10] - EventControllerRumbleTimeline (#4, concurrent=0)
[   3542.0] E GameSystemActor[10] - EventControllerRumbleTimeline (#5, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Small_GataGata
[   3550.0] L GameSystemActor[10] - EventControllerRumbleTimeline (#5, concurrent=0)
[   3600.0] L EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#16, concurrent=0)
[   3600.0] E EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#17, concurrent=0)
               duration: 283.0
               DemoPaletteName: DemoPaletteDummy
               IsWaitEnd: true
[   3619.0] E GameSystemActor[10] - EventControllerRumbleTimeline (#6, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_Short
[   3631.0] L GameSystemActor[10] - EventControllerRumbleTimeline (#6, concurrent=0)
[   3883.0] L EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#17, concurrent=0)
