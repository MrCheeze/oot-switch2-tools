-------- Event timeline: Dm_InsideGanonCastle_0055_Env --------
actors: 3
clips: 13
oneshots: 0
cuts: 1
duration: 1815.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: GameSystemActor
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

Actor: EventWorldManagerController[1]
concurrent clips: 1
actions: ['Event_SetEnvPaletteForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#1, concurrent=0)
               duration: 240.0
               DemoPaletteName: Dm_InsideGanonCastle_0055_C03
               IsWaitEnd: true
[    240.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#1, concurrent=0)
[    240.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#2, concurrent=0)
               duration: 427.0
               DemoPaletteName: Dm_InsideGanonCastle_0055_C04
               IsWaitEnd: true
[    667.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#2, concurrent=0)
[    667.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#3, concurrent=0)
               duration: 120.0
               DemoPaletteName: Dm_InsideGanonCastle_0055_C05
               IsWaitEnd: true
[    787.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#3, concurrent=0)
[    787.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#4, concurrent=0)
               duration: 242.0
               DemoPaletteName: Dm_InsideGanonCastle_0055_C06
               IsWaitEnd: true
[   1029.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#4, concurrent=0)
[   1029.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#5, concurrent=0)
               duration: 26.0
               DemoPaletteName: Dm_InsideGanonCastle_0055_C07
               IsWaitEnd: true
[   1055.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#5, concurrent=0)
[   1055.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#6, concurrent=0)
               duration: 20.0
               CurrDemoPaletteName: Dm_InsideGanonCastle_0055_C07_50
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_InsideGanonCastle_0055_C07
               RateEnd: 1.0
               RateFrame: 15.0
               RateStart: 0.0
[   1075.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#6, concurrent=0)
[   1075.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
               duration: 1.0
               DemoPaletteName: Dm_InsideGanonCastle_0055_C07_50
               IsWaitEnd: true
[   1076.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
[   1076.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
               duration: 96.0
               DemoPaletteName: Dm_InsideGanonCastle_0055_C08
               IsWaitEnd: true
[   1172.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
[   1172.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#9, concurrent=0)
               duration: 146.0
               DemoPaletteName: Dm_InsideGanonCastle_0055_C09
               IsWaitEnd: true
[   1172.0] E EventWorldManagerController[1] - Event_SetEnvPaletteForTimeline (#12, concurrent=0)
               duration: 643.0
               ChangeSpeed: 5
               EnvPaletteName: InsideGanonCastle
               EnvTimeTableName: ''
               IsWaitEnd: true
[   1237.0] E GameSystemActor - EventControllerRumbleTimeline (#0, concurrent=0)
               duration: 30.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Dohoon
[   1267.0] L GameSystemActor - EventControllerRumbleTimeline (#0, concurrent=0)
[   1318.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#9, concurrent=0)
[   1318.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
               duration: 165.0
               DemoPaletteName: Dm_InsideGanonCastle_0055_C10
               IsWaitEnd: true
[   1483.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
[   1483.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
               duration: 332.0
               DemoPaletteName: Dm_InsideGanonCastle_0055_C11
               IsWaitEnd: true
[   1815.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
[   1815.0] L EventWorldManagerController[1] - Event_SetEnvPaletteForTimeline (#12, concurrent=0)
