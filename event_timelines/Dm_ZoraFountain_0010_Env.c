-------- Event timeline: Dm_ZoraFountain_0010_Env --------
actors: 5
clips: 26
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

Actor: EventWorldManagerController[1]
concurrent clips: 1
actions: ['Event_SetWindForTimeline', 'Event_SetWindTransitionForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: GameSystemActor[2]
concurrent clips: 1
actions: ['EventControllerRumbleTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

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

[      0.0] E EventWorldManagerController[1] - Event_SetWindForTimeline (#0, concurrent=0)
               duration: 1130.0
               Azimuth: 45.0
               Elevation: 0.0
               IsImmTrans: false
               IsWaitEnd: true
               Speed: 1.5
[      0.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
               duration: 180.0
               DemoPaletteName: Dm_ZoraFountain_0010_C01
               IsWaitEnd: true
[    180.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
[    180.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#9, concurrent=0)
               duration: 240.0
               DemoPaletteName: Dm_ZoraFountain_0010_C01_50
               IsWaitEnd: true
[    420.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#9, concurrent=0)
[    420.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
               duration: 350.0
               DemoPaletteName: Dm_ZoraFountain_0010_C02
               IsWaitEnd: true
[    770.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
[    770.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
               duration: 120.0
               DemoPaletteName: Dm_ZoraFountain_0010_C03
               IsWaitEnd: true
[    890.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
[    890.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#12, concurrent=0)
               duration: 240.0
               DemoPaletteName: Dm_ZoraFountain_0010_C04
               IsWaitEnd: true
[   1130.0] L EventWorldManagerController[1] - Event_SetWindForTimeline (#0, concurrent=0)
[   1130.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#12, concurrent=0)
[   1130.0] E EventWorldManagerController[1] - Event_SetWindTransitionForTimeline (#1, concurrent=0)
               duration: 300.0
               Azimuth: 135.0
               Elevation: 0.0
               IsWaitEnd: true
               SpeedEnd: 5.0
               SpeedStart: 1.5
               TransitionFrame: 60.0
[   1130.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#13, concurrent=0)
               duration: 180.0
               DemoPaletteName: Dm_ZoraFountain_0010_C05
               IsWaitEnd: true
[   1310.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#13, concurrent=0)
[   1310.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#14, concurrent=0)
               duration: 120.0
               DemoPaletteName: Dm_ZoraFountain_0010_C06
               IsWaitEnd: true
[   1430.0] L EventWorldManagerController[1] - Event_SetWindTransitionForTimeline (#1, concurrent=0)
[   1430.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#14, concurrent=0)
[   1430.0] E EventWorldManagerController[1] - Event_SetWindForTimeline (#2, concurrent=0)
               duration: 715.0
               Azimuth: 135.0
               Elevation: 0.0
               IsImmTrans: false
               IsWaitEnd: true
               Speed: 15.0
[   1430.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#15, concurrent=0)
               duration: 120.0
               DemoPaletteName: Dm_ZoraFountain_0010_C07
               IsWaitEnd: true
[   1550.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#15, concurrent=0)
[   1550.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#16, concurrent=0)
               duration: 60.0
               DemoPaletteName: Dm_ZoraFountain_0010_C08
               IsWaitEnd: true
[   1610.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#16, concurrent=0)
[   1610.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#5, concurrent=0)
               duration: 10.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_GataGata
[   1610.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#17, concurrent=0)
               duration: 90.0
               DemoPaletteName: Dm_ZoraFountain_0010_C09
               IsWaitEnd: true
[   1620.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#5, concurrent=0)
[   1620.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#6, concurrent=0)
               duration: 245.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Huge_GataGata
[   1692.0] E GameSystemActor[2] - EventControllerRumbleTimeline (#3, concurrent=0)
               duration: 173.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_BuBuBu
[   1700.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#17, concurrent=0)
[   1700.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#18, concurrent=0)
               duration: 90.0
               DemoPaletteName: Dm_ZoraFountain_0010_C10
               IsWaitEnd: true
[   1790.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#18, concurrent=0)
[   1790.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#19, concurrent=0)
               duration: 75.0
               DemoPaletteName: Dm_ZoraFountain_0010_C11
               IsWaitEnd: true
[   1865.0] L GameSystemActor[2] - EventControllerRumbleTimeline (#3, concurrent=0)
[   1865.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#6, concurrent=0)
[   1865.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#19, concurrent=0)
[   1865.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#20, concurrent=0)
               duration: 40.0
               DemoPaletteName: Dm_ZoraFountain_0010_C12
               IsWaitEnd: true
[   1905.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#20, concurrent=0)
[   1905.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#21, concurrent=0)
               duration: 180.0
               DemoPaletteName: Dm_ZoraFountain_0010_C13
               IsWaitEnd: true
[   2085.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#21, concurrent=0)
[   2085.0] E GameSystemActor[2] - EventControllerRumbleTimeline (#4, concurrent=0)
               duration: 60.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_BuBuBu
[   2085.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#7, concurrent=0)
               duration: 60.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Huge_GataGata
[   2085.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#22, concurrent=0)
               duration: 60.0
               DemoPaletteName: Dm_ZoraFountain_0010_C14
               IsWaitEnd: true
[   2145.0] L EventWorldManagerController[1] - Event_SetWindForTimeline (#2, concurrent=0)
[   2145.0] L GameSystemActor[2] - EventControllerRumbleTimeline (#4, concurrent=0)
[   2145.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#7, concurrent=0)
[   2145.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#22, concurrent=0)
[   2145.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#23, concurrent=0)
               duration: 21.0
               DemoPaletteName: Dm_ZoraFountain_0010_C15
               IsWaitEnd: true
[   2166.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#23, concurrent=0)
[   2166.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#24, concurrent=0)
               duration: 26.0
               CurrDemoPaletteName: Dm_ZoraFountain_0010_C15_b
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_ZoraFountain_0010_C15
               RateEnd: 1.0
               RateFrame: 26.0
               RateStart: 0.0
[   2192.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#24, concurrent=0)
[   2192.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#25, concurrent=0)
               duration: 73.0
               DemoPaletteName: Dm_ZoraFountain_0010_C15_b
               IsWaitEnd: true
[   2265.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#25, concurrent=0)
