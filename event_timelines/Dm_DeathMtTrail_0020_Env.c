-------- Event timeline: Dm_DeathMtTrail_0020_Env --------
actors: 3
clips: 32
oneshots: 0
cuts: 1
duration: 8665.0
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
actions: ['Event_SetEnvPaletteForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#12, concurrent=0)
               duration: 195.0
               DemoPaletteName: Dm_DeathMtTrail_0020_C01
               IsWaitEnd: true
[      0.0] E EventWorldManagerController[1] - Event_SetEnvPaletteForTimeline (#31, concurrent=0)
               duration: 10054.0
               ChangeSpeed: 5
               EnvPaletteName: Dm_DeathMtTrail_0020
               EnvTimeTableName: ''
               IsWaitEnd: true
[    195.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#12, concurrent=0)
[    195.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#13, concurrent=0)
               duration: 475.0
               DemoPaletteName: Dm_DeathMtTrail_0020_C02
               IsWaitEnd: true
[    231.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#0, concurrent=0)
               duration: 5.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Piton
[    236.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#0, concurrent=0)
[    244.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#1, concurrent=0)
               duration: 6.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Piton
[    250.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#1, concurrent=0)
[    650.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#2, concurrent=0)
               duration: 30.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_Doon
[    670.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#13, concurrent=0)
[    670.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#14, concurrent=0)
               duration: 310.0
               DemoPaletteName: Dm_DeathMtTrail_0020_C03
               IsWaitEnd: true
[    680.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#2, concurrent=0)
[    980.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#14, concurrent=0)
[    980.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#15, concurrent=0)
               duration: 190.0
               DemoPaletteName: Dm_DeathMtTrail_0020_C04
               IsWaitEnd: true
[   1170.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#15, concurrent=0)
[   1170.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#16, concurrent=0)
               duration: 205.0
               DemoPaletteName: Dm_DeathMtTrail_0020_C05
               IsWaitEnd: true
[   1375.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#16, concurrent=0)
[   1375.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#17, concurrent=0)
               duration: 685.0
               DemoPaletteName: Dm_DeathMtTrail_0020_C06
               IsWaitEnd: true
[   1820.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#3, concurrent=0)
               duration: 20.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Don
[   1840.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#3, concurrent=0)
[   1889.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#4, concurrent=0)
               duration: 20.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Don
[   1909.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#4, concurrent=0)
[   1921.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#5, concurrent=0)
               duration: 20.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Don
[   1941.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#5, concurrent=0)
[   2060.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#17, concurrent=0)
[   2060.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#18, concurrent=0)
               duration: 195.0
               DemoPaletteName: Dm_DeathMtTrail_0020_C07
               IsWaitEnd: true
[   2084.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#6, concurrent=0)
               duration: 40.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_DoDon
[   2124.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#6, concurrent=0)
[   2255.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#18, concurrent=0)
[   2255.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#19, concurrent=0)
               duration: 695.0
               DemoPaletteName: Dm_DeathMtTrail_0020_C08
               IsWaitEnd: true
[   2617.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#7, concurrent=0)
               duration: 10.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   2627.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#7, concurrent=0)
[   2641.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#8, concurrent=0)
               duration: 10.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   2651.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#8, concurrent=0)
[   2671.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#9, concurrent=0)
               duration: 10.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   2681.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#9, concurrent=0)
[   2699.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#10, concurrent=0)
               duration: 10.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   2709.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#10, concurrent=0)
[   2727.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#11, concurrent=0)
               duration: 10.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   2737.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#11, concurrent=0)
[   2950.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#19, concurrent=0)
[   2950.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#20, concurrent=0)
               duration: 1320.0
               DemoPaletteName: Dm_DeathMtTrail_0020_C09
               IsWaitEnd: true
[   4270.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#20, concurrent=0)
[   4270.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#21, concurrent=0)
               duration: 610.0
               DemoPaletteName: Dm_DeathMtTrail_0020_C10
               IsWaitEnd: true
[   4880.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#21, concurrent=0)
[   4880.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#22, concurrent=0)
               duration: 240.0
               DemoPaletteName: Dm_DeathMtTrail_0020_C11
               IsWaitEnd: true
[   5120.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#22, concurrent=0)
[   5120.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#23, concurrent=0)
               duration: 310.0
               DemoPaletteName: Dm_DeathMtTrail_0020_C12
               IsWaitEnd: true
[   5430.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#23, concurrent=0)
[   5430.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#24, concurrent=0)
               duration: 785.0
               DemoPaletteName: Dm_DeathMtTrail_0020_C13
               IsWaitEnd: true
[   6215.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#24, concurrent=0)
[   6215.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#25, concurrent=0)
               duration: 395.0
               DemoPaletteName: Dm_DeathMtTrail_0020_C14
               IsWaitEnd: true
[   6610.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#25, concurrent=0)
[   6610.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#26, concurrent=0)
               duration: 670.0
               DemoPaletteName: Dm_DeathMtTrail_0020_C15
               IsWaitEnd: true
[   7280.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#26, concurrent=0)
[   7280.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#27, concurrent=0)
               duration: 590.0
               DemoPaletteName: Dm_DeathMtTrail_0020_C16
               IsWaitEnd: true
[   7870.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#27, concurrent=0)
[   7870.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#28, concurrent=0)
               duration: 200.0
               DemoPaletteName: Dm_DeathMtTrail_0020_C17
               IsWaitEnd: true
[   8070.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#28, concurrent=0)
[   8070.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#29, concurrent=0)
               duration: 180.0
               DemoPaletteName: Dm_DeathMtTrail_0020_C18
               IsWaitEnd: true
[   8250.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#29, concurrent=0)
[   8250.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#30, concurrent=0)
               duration: 415.0
               DemoPaletteName: Dm_DeathMtTrail_0020_C19
               IsWaitEnd: true
[   8665.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#30, concurrent=0)
[  10054.0] L EventWorldManagerController[1] - Event_SetEnvPaletteForTimeline (#31, concurrent=0)
