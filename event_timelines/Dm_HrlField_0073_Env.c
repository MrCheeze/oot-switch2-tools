-------- Event timeline: Dm_HrlField_0073_Env --------
actors: 2
clips: 7
oneshots: 0
cuts: 1
duration: 935.0
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
actions: ['Event_SetDemoPaletteForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#3, concurrent=0)
               duration: 301.0
               DemoPaletteName: Dm_HrlField_0073_C01
               IsWaitEnd: true
[     38.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#0, concurrent=0)
               duration: 24.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_DoDon
[     62.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#0, concurrent=0)
[    301.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#3, concurrent=0)
[    301.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#4, concurrent=0)
               duration: 171.0
               DemoPaletteName: Dm_HrlField_0073_C02
               IsWaitEnd: true
[    472.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#4, concurrent=0)
[    472.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#5, concurrent=0)
               duration: 131.0
               DemoPaletteName: Dm_HrlField_0073_C03
               IsWaitEnd: true
[    535.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#1, concurrent=0)
               duration: 50.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Dohoon
[    585.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#1, concurrent=0)
[    603.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#5, concurrent=0)
[    603.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#6, concurrent=0)
               duration: 331.0
               DemoPaletteName: Dm_HrlField_0073_C04
               IsWaitEnd: true
[    723.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#2, concurrent=0)
               duration: 24.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Piton
[    747.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#2, concurrent=0)
[    934.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#6, concurrent=0)
