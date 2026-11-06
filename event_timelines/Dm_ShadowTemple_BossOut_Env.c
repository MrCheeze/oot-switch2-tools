-------- Event timeline: Dm_ShadowTemple_BossOut_Env --------
actors: 2
clips: 15
oneshots: 0
cuts: 1
duration: 2736.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: GameSystemActor[10]
concurrent clips: 1
actions: ['EventControllerRumbleTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventWorldManagerController[10]
concurrent clips: 1
actions: ['Event_SetDemoPaletteForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#9, concurrent=0)
               duration: 208.0
               DemoPaletteName: Dm_ShadowTemple_BossOut_C01
               IsWaitEnd: true
[    208.0] L EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#9, concurrent=0)
[    208.0] E EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
               duration: 420.0
               DemoPaletteName: Dm_ShadowTemple_BossOut_C02
               IsWaitEnd: true
[    212.0] E GameSystemActor[10] - EventControllerRumbleTimeline (#0, concurrent=0)
               duration: 271.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_GataGata
[    483.0] L GameSystemActor[10] - EventControllerRumbleTimeline (#0, concurrent=0)
[    485.0] E GameSystemActor[10] - EventControllerRumbleTimeline (#1, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Small_Don
[    493.0] L GameSystemActor[10] - EventControllerRumbleTimeline (#1, concurrent=0)
[    508.0] E GameSystemActor[10] - EventControllerRumbleTimeline (#2, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Small_Don
[    516.0] L GameSystemActor[10] - EventControllerRumbleTimeline (#2, concurrent=0)
[    543.0] E GameSystemActor[10] - EventControllerRumbleTimeline (#3, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Small_Don
[    551.0] L GameSystemActor[10] - EventControllerRumbleTimeline (#3, concurrent=0)
[    608.0] E GameSystemActor[10] - EventControllerRumbleTimeline (#4, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Small_Don
[    616.0] L GameSystemActor[10] - EventControllerRumbleTimeline (#4, concurrent=0)
[    628.0] L EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
[    628.0] E EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
               duration: 595.0
               DemoPaletteName: Dm_ShadowTemple_BossOut_C03
               IsWaitEnd: true
[    658.0] E GameSystemActor[10] - EventControllerRumbleTimeline (#5, concurrent=0)
               duration: 30.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Dohoon
[    688.0] L GameSystemActor[10] - EventControllerRumbleTimeline (#5, concurrent=0)
[    952.0] E GameSystemActor[10] - EventControllerRumbleTimeline (#6, concurrent=0)
               duration: 35.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Dohoon
[    987.0] L GameSystemActor[10] - EventControllerRumbleTimeline (#6, concurrent=0)
[   1160.0] E GameSystemActor[10] - EventControllerRumbleTimeline (#7, concurrent=0)
               duration: 20.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_DoDon
[   1180.0] L GameSystemActor[10] - EventControllerRumbleTimeline (#7, concurrent=0)
[   1195.0] E GameSystemActor[10] - EventControllerRumbleTimeline (#8, concurrent=0)
               duration: 38.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_Dohoon
[   1223.0] L EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
[   1223.0] E EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#12, concurrent=0)
               duration: 290.0
               DemoPaletteName: Dm_ShadowTemple_BossOut_C03_50
               IsWaitEnd: true
[   1233.0] L GameSystemActor[10] - EventControllerRumbleTimeline (#8, concurrent=0)
[   1513.0] L EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#12, concurrent=0)
[   1513.0] E EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#13, concurrent=0)
               duration: 424.0
               DemoPaletteName: Dm_ShadowTemple_BossOut_C04
               IsWaitEnd: true
[   1937.0] L EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#13, concurrent=0)
[   1937.0] E EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#14, concurrent=0)
               duration: 799.0
               DemoPaletteName: Dm_ShadowTemple_BossOut_C05
               IsWaitEnd: true
[   2736.0] L EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#14, concurrent=0)
