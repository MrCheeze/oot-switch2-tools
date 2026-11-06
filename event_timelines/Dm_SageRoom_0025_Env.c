-------- Event timeline: Dm_SageRoom_0025_Env --------
actors: 4
clips: 15
oneshots: 0
cuts: 1
duration: 1994.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: EventWorldManagerController[1]
concurrent clips: 1
actions: ['Event_SetEnvPaletteForTimeline']
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
actions: ['Event_SetDemoPaletteForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventWorldManagerController[1] - Event_SetEnvPaletteForTimeline (#0, concurrent=0)
               duration: 240.0
               ChangeSpeed: 5
               EnvPaletteName: Dm_SageRoom_0025
               EnvTimeTableName: ''
               IsWaitEnd: true
[      0.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
               duration: 240.0
               DemoPaletteName: Dm_SageRoom_0025_C01
               IsWaitEnd: true
[    240.0] L EventWorldManagerController[1] - Event_SetEnvPaletteForTimeline (#0, concurrent=0)
[    240.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
[    240.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
               duration: 174.0
               DemoPaletteName: Dm_SageRoom_0025_C02
               IsWaitEnd: true
[    395.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#2, concurrent=0)
               duration: 50.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_DoDon
[    414.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
[    414.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#9, concurrent=0)
               duration: 218.0
               DemoPaletteName: Dm_SageRoom_0025_C02_50
               IsWaitEnd: true
[    417.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#1, concurrent=0)
               duration: 100.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Byeen
[    445.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#2, concurrent=0)
[    517.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#1, concurrent=0)
[    632.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#9, concurrent=0)
[    632.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
               duration: 114.0
               DemoPaletteName: Dm_SageRoom_0025_C03
               IsWaitEnd: true
[    746.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
[    746.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
               duration: 314.0
               DemoPaletteName: Dm_SageRoom_0025_C04
               IsWaitEnd: true
[    919.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#3, concurrent=0)
               duration: 20.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Don
[    939.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#3, concurrent=0)
[    959.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#4, concurrent=0)
               duration: 20.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Don
[    979.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#4, concurrent=0)
[    998.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#5, concurrent=0)
               duration: 15.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Don
[   1013.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#5, concurrent=0)
[   1015.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#6, concurrent=0)
               duration: 20.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Don
[   1035.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#6, concurrent=0)
[   1060.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
[   1060.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#12, concurrent=0)
               duration: 236.0
               DemoPaletteName: Dm_SageRoom_0025_C05
               IsWaitEnd: true
[   1296.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#12, concurrent=0)
[   1296.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#13, concurrent=0)
               duration: 99.0
               DemoPaletteName: Dm_SageRoom_0025_C06
               IsWaitEnd: true
[   1395.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#13, concurrent=0)
[   1395.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#14, concurrent=0)
               duration: 599.0
               DemoPaletteName: Dm_SageRoom_0025_C07
               IsWaitEnd: true
[   1994.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#14, concurrent=0)
