-------- Event timeline: Dm_HrlField_0070_Env --------
actors: 2
clips: 9
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
               duration: 155.0
               DemoPaletteName: Dm_HrlField_0070_C01
               IsWaitEnd: true
[     30.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#0, concurrent=0)
               duration: 24.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_DoDon
[     54.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#0, concurrent=0)
[    155.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#3, concurrent=0)
[    155.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#4, concurrent=0)
               duration: 215.0
               DemoPaletteName: Dm_HrlField_0070_C02
               IsWaitEnd: true
[    370.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#4, concurrent=0)
[    370.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#5, concurrent=0)
               duration: 139.0
               DemoPaletteName: Dm_HrlField_0070_C03
               IsWaitEnd: true
[    509.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#5, concurrent=0)
[    509.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#6, concurrent=0)
               duration: 105.0
               DemoPaletteName: Dm_HrlField_0070_C04
               IsWaitEnd: true
[    550.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#1, concurrent=0)
               duration: 50.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Dohoon
[    600.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#1, concurrent=0)
[    614.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#6, concurrent=0)
[    614.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
               duration: 121.0
               DemoPaletteName: Dm_HrlField_0070_C05
               IsWaitEnd: true
[    708.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#2, concurrent=0)
               duration: 24.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Piton
[    732.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#2, concurrent=0)
[    735.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
[    735.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
               duration: 200.0
               DemoPaletteName: Dm_HrlField_0070_C06
               IsWaitEnd: true
[    935.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
