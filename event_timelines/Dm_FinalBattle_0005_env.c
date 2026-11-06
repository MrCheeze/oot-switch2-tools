-------- Event timeline: Dm_FinalBattle_0005_env --------
actors: 3
clips: 14
oneshots: 0
cuts: 1
duration: 2945.0
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

Actor: EventWorldManagerController[0]
concurrent clips: 1
actions: ['Event_SetWindForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#6, concurrent=0)
               duration: 300.0
               DemoPaletteName: Dm_FinalBattle_0005_C01
               IsWaitEnd: true
[      0.0] E EventWorldManagerController[0] - Event_SetWindForTimeline (#12, concurrent=0)
               duration: 1082.0
               Azimuth: 0.0
               Elevation: 0.0
               IsImmTrans: true
               IsWaitEnd: true
               Speed: 7.75
[    300.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#6, concurrent=0)
[    300.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
               duration: 275.0
               DemoPaletteName: Dm_FinalBattle_0005_C02
               IsWaitEnd: false
[    575.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
[    575.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
               duration: 507.0
               DemoPaletteName: Dm_FinalBattle_0005_C03
               IsWaitEnd: false
[    708.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#0, concurrent=0)
               duration: 18.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Piton
[    726.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#0, concurrent=0)
[    905.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#1, concurrent=0)
               duration: 15.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: PlayerFrozen
[    920.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#1, concurrent=0)
[   1042.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#2, concurrent=0)
               duration: 10.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: PlayerFrozen
[   1052.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#2, concurrent=0)
[   1052.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#3, concurrent=0)
               duration: 17.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Doon
[   1069.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#3, concurrent=0)
[   1082.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
[   1082.0] L EventWorldManagerController[0] - Event_SetWindForTimeline (#12, concurrent=0)
[   1082.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#9, concurrent=0)
               duration: 283.0
               DemoPaletteName: Dm_FinalBattle_0005_C05
               IsWaitEnd: false
[   1082.0] E EventWorldManagerController[0] - Event_SetWindForTimeline (#13, concurrent=0)
               duration: 882.0
               Azimuth: 0.0
               Elevation: 0.0
               IsImmTrans: true
               IsWaitEnd: true
               Speed: 7.75
[   1115.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#4, concurrent=0)
               duration: 69.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_Dohoon
[   1184.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#4, concurrent=0)
[   1365.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#9, concurrent=0)
[   1365.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
               duration: 599.0
               DemoPaletteName: Dm_FinalBattle_0005_C06
               IsWaitEnd: false
[   1964.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
[   1964.0] L EventWorldManagerController[0] - Event_SetWindForTimeline (#13, concurrent=0)
[   1964.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
               duration: 738.0
               DemoPaletteName: Dm_FinalBattle_0005_C07_
               IsWaitEnd: false
[   2667.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#5, concurrent=0)
               duration: 35.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Doon
[   2702.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#5, concurrent=0)
[   2702.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
