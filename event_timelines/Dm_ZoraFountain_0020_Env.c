-------- Event timeline: Dm_ZoraFountain_0020_Env --------
actors: 5
clips: 38
oneshots: 0
cuts: 1
duration: 6705.0
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
actions: ['Event_SetDemoPaletteForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventWorldManagerController[1]
concurrent clips: 1
actions: ['EventTrigger_SetTime']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventWorldManagerController[2]
concurrent clips: 1
actions: ['Event_SetWindForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventWorldManagerController[3]
concurrent clips: 1
actions: ['Event_SetEnvPaletteForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#2, concurrent=0)
               duration: 311.0
               DemoPaletteName: Dm_ZoraFountain_0020_C03
               IsWaitEnd: true
[      0.0] E EventWorldManagerController[1] - EventTrigger_SetTime (#18, concurrent=0)
               duration: 6705.0
               TimeHour: 12
               TimeMin: 0
[      0.0] E EventWorldManagerController[2] - Event_SetWindForTimeline (#19, concurrent=0)
               duration: 311.0
               Azimuth: 180.0
               Elevation: 0.0
               IsImmTrans: true
               IsWaitEnd: true
               Speed: 3.5
[      0.0] E EventWorldManagerController[3] - Event_SetEnvPaletteForTimeline (#22, concurrent=0)
               duration: 311.0
               ChangeSpeed: 5
               EnvPaletteName: Dm_ZoraFountain_0020
               EnvTimeTableName: ''
               IsWaitEnd: true
[    311.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#2, concurrent=0)
[    311.0] L EventWorldManagerController[2] - Event_SetWindForTimeline (#19, concurrent=0)
[    311.0] L EventWorldManagerController[3] - Event_SetEnvPaletteForTimeline (#22, concurrent=0)
[    311.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#3, concurrent=0)
               duration: 161.0
               DemoPaletteName: Dm_ZoraFountain_0020_C04
               IsWaitEnd: true
[    311.0] E EventWorldManagerController[2] - Event_SetWindForTimeline (#20, concurrent=0)
               duration: 1502.0
               Azimuth: 0.0
               Elevation: 90.0
               IsImmTrans: true
               IsWaitEnd: true
               Speed: 5.5
[    311.0] E EventWorldManagerController[3] - Event_SetEnvPaletteForTimeline (#23, concurrent=0)
               duration: 161.0
               ChangeSpeed: 5
               EnvPaletteName: Dm_ZoraFountain_0020_Water
               EnvTimeTableName: ''
               IsWaitEnd: true
[    352.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#0, concurrent=0)
               duration: 95.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Biyoon
[    447.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#0, concurrent=0)
[    472.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#3, concurrent=0)
[    472.0] L EventWorldManagerController[3] - Event_SetEnvPaletteForTimeline (#23, concurrent=0)
[    472.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#4, concurrent=0)
               duration: 1090.0
               DemoPaletteName: Dm_ZoraFountain_0020_C05_50
               IsWaitEnd: true
[    472.0] E EventWorldManagerController[3] - Event_SetEnvPaletteForTimeline (#24, concurrent=0)
               duration: 1090.0
               ChangeSpeed: 5
               EnvPaletteName: Dm_ZoraFountain_0020_Water
               EnvTimeTableName: ''
               IsWaitEnd: true
[   1562.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#4, concurrent=0)
[   1562.0] L EventWorldManagerController[3] - Event_SetEnvPaletteForTimeline (#24, concurrent=0)
[   1562.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#5, concurrent=0)
               duration: 251.0
               DemoPaletteName: Dm_ZoraFountain_0020_C06
               IsWaitEnd: true
[   1562.0] E EventWorldManagerController[3] - Event_SetEnvPaletteForTimeline (#25, concurrent=0)
               duration: 251.0
               ChangeSpeed: 5
               EnvPaletteName: Dm_ZoraFountain_0020_Water
               EnvTimeTableName: ''
               IsWaitEnd: true
[   1813.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#5, concurrent=0)
[   1813.0] L EventWorldManagerController[2] - Event_SetWindForTimeline (#20, concurrent=0)
[   1813.0] L EventWorldManagerController[3] - Event_SetEnvPaletteForTimeline (#25, concurrent=0)
[   1813.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#6, concurrent=0)
               duration: 440.0
               DemoPaletteName: Dm_ZoraFountain_0020_C07
               IsWaitEnd: true
[   1813.0] E EventWorldManagerController[2] - Event_SetWindForTimeline (#21, concurrent=0)
               duration: 4892.0
               Azimuth: 180.0
               Elevation: 0.0
               IsImmTrans: true
               IsWaitEnd: true
               Speed: 3.5
[   1813.0] E EventWorldManagerController[3] - Event_SetEnvPaletteForTimeline (#26, concurrent=0)
               duration: 440.0
               ChangeSpeed: 5
               EnvPaletteName: Dm_ZoraFountain_0020
               EnvTimeTableName: ''
               IsWaitEnd: true
[   1990.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#1, concurrent=0)
               duration: 13.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Don
[   2003.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#1, concurrent=0)
[   2253.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#6, concurrent=0)
[   2253.0] L EventWorldManagerController[3] - Event_SetEnvPaletteForTimeline (#26, concurrent=0)
[   2253.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
               duration: 215.0
               DemoPaletteName: Dm_ZoraFountain_0020_C08
               IsWaitEnd: true
[   2253.0] E EventWorldManagerController[3] - Event_SetEnvPaletteForTimeline (#27, concurrent=0)
               duration: 215.0
               ChangeSpeed: 5
               EnvPaletteName: Dm_ZoraFountain_0020
               EnvTimeTableName: ''
               IsWaitEnd: true
[   2468.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
[   2468.0] L EventWorldManagerController[3] - Event_SetEnvPaletteForTimeline (#27, concurrent=0)
[   2468.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
               duration: 230.0
               DemoPaletteName: Dm_ZoraFountain_0020_C09
               IsWaitEnd: true
[   2468.0] E EventWorldManagerController[3] - Event_SetEnvPaletteForTimeline (#28, concurrent=0)
               duration: 230.0
               ChangeSpeed: 5
               EnvPaletteName: Dm_ZoraFountain_0020
               EnvTimeTableName: ''
               IsWaitEnd: true
[   2698.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
[   2698.0] L EventWorldManagerController[3] - Event_SetEnvPaletteForTimeline (#28, concurrent=0)
[   2698.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#9, concurrent=0)
               duration: 170.0
               DemoPaletteName: Dm_ZoraFountain_0020_C10
               IsWaitEnd: true
[   2698.0] E EventWorldManagerController[3] - Event_SetEnvPaletteForTimeline (#29, concurrent=0)
               duration: 170.0
               ChangeSpeed: 5
               EnvPaletteName: Dm_ZoraFountain_0020
               EnvTimeTableName: ''
               IsWaitEnd: true
[   2868.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#9, concurrent=0)
[   2868.0] L EventWorldManagerController[3] - Event_SetEnvPaletteForTimeline (#29, concurrent=0)
[   2868.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
               duration: 825.0
               DemoPaletteName: Dm_ZoraFountain_0020_C11
               IsWaitEnd: true
[   2868.0] E EventWorldManagerController[3] - Event_SetEnvPaletteForTimeline (#30, concurrent=0)
               duration: 825.0
               ChangeSpeed: 5
               EnvPaletteName: Dm_ZoraFountain_0020
               EnvTimeTableName: ''
               IsWaitEnd: true
[   3693.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
[   3693.0] L EventWorldManagerController[3] - Event_SetEnvPaletteForTimeline (#30, concurrent=0)
[   3693.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
               duration: 375.0
               DemoPaletteName: Dm_ZoraFountain_0020_C12
               IsWaitEnd: true
[   3693.0] E EventWorldManagerController[3] - Event_SetEnvPaletteForTimeline (#31, concurrent=0)
               duration: 375.0
               ChangeSpeed: 5
               EnvPaletteName: Dm_ZoraFountain_0020
               EnvTimeTableName: ''
               IsWaitEnd: true
[   4068.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
[   4068.0] L EventWorldManagerController[3] - Event_SetEnvPaletteForTimeline (#31, concurrent=0)
[   4068.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#12, concurrent=0)
               duration: 343.0
               DemoPaletteName: Dm_ZoraFountain_0020_C13
               IsWaitEnd: true
[   4068.0] E EventWorldManagerController[3] - Event_SetEnvPaletteForTimeline (#32, concurrent=0)
               duration: 343.0
               ChangeSpeed: 5
               EnvPaletteName: Dm_ZoraFountain_0020
               EnvTimeTableName: ''
               IsWaitEnd: true
[   4411.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#12, concurrent=0)
[   4411.0] L EventWorldManagerController[3] - Event_SetEnvPaletteForTimeline (#32, concurrent=0)
[   4411.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#13, concurrent=0)
               duration: 633.0
               DemoPaletteName: Dm_ZoraFountain_0020_C14
               IsWaitEnd: true
[   4411.0] E EventWorldManagerController[3] - Event_SetEnvPaletteForTimeline (#33, concurrent=0)
               duration: 633.0
               ChangeSpeed: 5
               EnvPaletteName: Dm_ZoraFountain_0020
               EnvTimeTableName: ''
               IsWaitEnd: true
[   5044.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#13, concurrent=0)
[   5044.0] L EventWorldManagerController[3] - Event_SetEnvPaletteForTimeline (#33, concurrent=0)
[   5044.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#14, concurrent=0)
               duration: 560.0
               DemoPaletteName: Dm_ZoraFountain_0020_C15
               IsWaitEnd: true
[   5044.0] E EventWorldManagerController[3] - Event_SetEnvPaletteForTimeline (#34, concurrent=0)
               duration: 560.0
               ChangeSpeed: 5
               EnvPaletteName: Dm_ZoraFountain_0020
               EnvTimeTableName: ''
               IsWaitEnd: true
[   5604.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#14, concurrent=0)
[   5604.0] L EventWorldManagerController[3] - Event_SetEnvPaletteForTimeline (#34, concurrent=0)
[   5604.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#15, concurrent=0)
               duration: 371.0
               DemoPaletteName: Dm_ZoraFountain_0020_C16
               IsWaitEnd: true
[   5604.0] E EventWorldManagerController[3] - Event_SetEnvPaletteForTimeline (#35, concurrent=0)
               duration: 371.0
               ChangeSpeed: 5
               EnvPaletteName: Dm_ZoraFountain_0020
               EnvTimeTableName: ''
               IsWaitEnd: true
[   5975.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#15, concurrent=0)
[   5975.0] L EventWorldManagerController[3] - Event_SetEnvPaletteForTimeline (#35, concurrent=0)
[   5975.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#16, concurrent=0)
               duration: 110.0
               DemoPaletteName: Dm_ZoraFountain_0020_C17
               IsWaitEnd: true
[   5975.0] E EventWorldManagerController[3] - Event_SetEnvPaletteForTimeline (#36, concurrent=0)
               duration: 110.0
               ChangeSpeed: 5
               EnvPaletteName: Dm_ZoraFountain_0020
               EnvTimeTableName: ''
               IsWaitEnd: true
[   6085.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#16, concurrent=0)
[   6085.0] L EventWorldManagerController[3] - Event_SetEnvPaletteForTimeline (#36, concurrent=0)
[   6085.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#17, concurrent=0)
               duration: 620.0
               DemoPaletteName: Dm_ZoraFountain_0020_C18
               IsWaitEnd: true
[   6085.0] E EventWorldManagerController[3] - Event_SetEnvPaletteForTimeline (#37, concurrent=0)
               duration: 620.0
               ChangeSpeed: 5
               EnvPaletteName: Dm_ZoraFountain_0020
               EnvTimeTableName: ''
               IsWaitEnd: true
[   6705.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#17, concurrent=0)
[   6705.0] L EventWorldManagerController[1] - EventTrigger_SetTime (#18, concurrent=0)
[   6705.0] L EventWorldManagerController[2] - Event_SetWindForTimeline (#21, concurrent=0)
[   6705.0] L EventWorldManagerController[3] - Event_SetEnvPaletteForTimeline (#37, concurrent=0)
