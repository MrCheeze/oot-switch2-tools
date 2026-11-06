-------- Event timeline: Dm_InsideGanonCastle_0085_Env --------
actors: 3
clips: 13
oneshots: 0
cuts: 1
duration: 1851.0
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

Actor: EventWorldManagerController[0]
concurrent clips: 1
actions: ['Event_SetEnvPaletteForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#1, concurrent=0)
               duration: 240.0
               DemoPaletteName: Dm_InsideGanonCastle_0085_C03
               IsWaitEnd: true
[    240.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#1, concurrent=0)
[    240.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#2, concurrent=0)
               duration: 463.0
               DemoPaletteName: Dm_InsideGanonCastle_0085_C04
               IsWaitEnd: true
[    703.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#2, concurrent=0)
[    703.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#3, concurrent=0)
               duration: 120.0
               DemoPaletteName: Dm_InsideGanonCastle_0085_C05
               IsWaitEnd: true
[    823.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#3, concurrent=0)
[    823.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#4, concurrent=0)
               duration: 242.0
               DemoPaletteName: Dm_InsideGanonCastle_0085_C06
               IsWaitEnd: true
[   1065.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#4, concurrent=0)
[   1065.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#5, concurrent=0)
               duration: 26.0
               DemoPaletteName: Dm_InsideGanonCastle_0085_C07
               IsWaitEnd: true
[   1091.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#5, concurrent=0)
[   1091.0] E EventWorldManagerController - Event_SetDemoPaletteTransitionForTimeline (#6, concurrent=0)
               duration: 20.0
               CurrDemoPaletteName: Dm_InsideGanonCastle_0085_C07_50
               IsWaitEnd: false
               PrevDemoPaletteName: Dm_InsideGanonCastle_0085_C07
               RateEnd: 1.0
               RateFrame: 15.0
               RateStart: 0.0
[   1111.0] L EventWorldManagerController - Event_SetDemoPaletteTransitionForTimeline (#6, concurrent=0)
[   1111.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
               duration: 1.0
               DemoPaletteName: Dm_InsideGanonCastle_0085_C07_50
               IsWaitEnd: true
[   1112.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
[   1112.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
               duration: 96.0
               DemoPaletteName: Dm_InsideGanonCastle_0085_C08
               IsWaitEnd: true
[   1208.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
[   1208.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#9, concurrent=0)
               duration: 146.0
               DemoPaletteName: Dm_InsideGanonCastle_0085_C09
               IsWaitEnd: true
[   1208.0] E EventWorldManagerController[0] - Event_SetEnvPaletteForTimeline (#12, concurrent=0)
               duration: 642.0
               ChangeSpeed: 5
               EnvPaletteName: InsideGanonCastle
               EnvTimeTableName: ''
               IsWaitEnd: true
[   1273.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#0, concurrent=0)
               duration: 30.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Dohoon
[   1303.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#0, concurrent=0)
[   1354.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#9, concurrent=0)
[   1354.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
               duration: 165.0
               DemoPaletteName: Dm_InsideGanonCastle_0085_C10
               IsWaitEnd: true
[   1519.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
[   1519.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
               duration: 331.0
               DemoPaletteName: Dm_InsideGanonCastle_0085_C11
               IsWaitEnd: true
[   1850.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
[   1850.0] L EventWorldManagerController[0] - Event_SetEnvPaletteForTimeline (#12, concurrent=0)
