-------- Event timeline: Dm_Deku_BossIn_Env --------
actors: 3
clips: 16
oneshots: 0
cuts: 1
duration: 1144.0
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

Actor: EventWorldManagerController[1]
concurrent clips: 1
actions: ['Event_SetDemoPaletteForTimeline', 'Event_SetDemoPaletteTransitionForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventWorldManagerController
concurrent clips: 1
actions: ['Event_SetEnvPaletteForTimeline', 'Event_SetEnvPaletteTransitionForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#6, concurrent=0)
               duration: 203.0
               DemoPaletteName: Dm_Deku_BossIn_C01
               IsWaitEnd: true
[      0.0] E EventWorldManagerController - Event_SetEnvPaletteForTimeline (#12, concurrent=0)
               duration: 203.0
               ChangeSpeed: 4
               EnvPaletteName: InsideTheDekuTree
               EnvTimeTableName: ''
               IsWaitEnd: true
[    203.0] L EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#6, concurrent=0)
[    203.0] L EventWorldManagerController - Event_SetEnvPaletteForTimeline (#12, concurrent=0)
[    203.0] E EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
               duration: 139.0
               DemoPaletteName: Dm_Deku_BossIn_C02
               IsWaitEnd: true
[    203.0] E EventWorldManagerController - Event_SetEnvPaletteForTimeline (#13, concurrent=0)
               duration: 139.0
               ChangeSpeed: 5
               EnvPaletteName: InsideTheDekuTree
               EnvTimeTableName: ''
               IsWaitEnd: true
[    342.0] L EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
[    342.0] L EventWorldManagerController - Event_SetEnvPaletteForTimeline (#13, concurrent=0)
[    342.0] E EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
               duration: 336.0
               DemoPaletteName: Dm_Deku_BossIn_C03
               IsWaitEnd: true
[    342.0] E EventWorldManagerController - Event_SetEnvPaletteForTimeline (#14, concurrent=0)
               duration: 336.0
               ChangeSpeed: 5
               EnvPaletteName: InsideTheDekuTree
               EnvTimeTableName: ''
               IsWaitEnd: true
[    370.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#0, concurrent=0)
               duration: 30.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_Doon
[    400.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#0, concurrent=0)
[    549.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#1, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Short
[    557.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#1, concurrent=0)
[    571.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#2, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_Don
[    583.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#2, concurrent=0)
[    678.0] L EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
[    678.0] L EventWorldManagerController - Event_SetEnvPaletteForTimeline (#14, concurrent=0)
[    678.0] E EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#9, concurrent=0)
               duration: 282.0
               DemoPaletteName: Dm_Deku_BossIn_C03-1
               IsWaitEnd: true
[    678.0] E EventWorldManagerController - Event_SetEnvPaletteTransitionForTimeline (#15, concurrent=0)
               duration: 466.0
               CurrEnvPaletteName: InsideTheDekuTree_BeforeBossDemo
               IsWaitEnd: true
               PrevEnvPaletteName: InsideTheDekuTree
               RateEnd: 1.0
               RateFrame: 30.0
               RateStart: 1.0
[    685.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#3, concurrent=0)
               duration: 136.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_BuBuBu
[    821.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#3, concurrent=0)
[    960.0] L EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#9, concurrent=0)
[    960.0] E EventWorldManagerController[1] - Event_SetDemoPaletteTransitionForTimeline (#10, concurrent=0)
               duration: 70.0
               CurrDemoPaletteName: Dm_Deku_BossIn_C03-2
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_Deku_BossIn_C03-1
               RateEnd: 1.0
               RateFrame: 70.0
               RateStart: 0.0
[    993.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#4, concurrent=0)
               duration: 4.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Short
[    997.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#4, concurrent=0)
[    997.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#5, concurrent=0)
               duration: 10.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Short
[   1007.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#5, concurrent=0)
[   1030.0] L EventWorldManagerController[1] - Event_SetDemoPaletteTransitionForTimeline (#10, concurrent=0)
[   1030.0] E EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
               duration: 114.0
               DemoPaletteName: Dm_Deku_BossIn_C03-2
               IsWaitEnd: true
[   1144.0] L EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
[   1144.0] L EventWorldManagerController - Event_SetEnvPaletteTransitionForTimeline (#15, concurrent=0)
