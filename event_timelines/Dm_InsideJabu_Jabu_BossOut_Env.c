-------- Event timeline: Dm_InsideJabu_Jabu_BossOut_Env --------
actors: 2
clips: 17
oneshots: 0
cuts: 1
duration: 3333.0
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

Actor: EventWorldManagerController[0]
concurrent clips: 1
actions: ['Event_SetDemoPaletteForTimeline', 'Event_SetDemoPaletteTransitionForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#4, concurrent=0)
               duration: 390.0
               DemoPaletteName: Dm_InsideJabu_Jabu_BossOut_C01
               IsWaitEnd: true
[    390.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#4, concurrent=0)
[    390.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#5, concurrent=0)
               duration: 190.0
               DemoPaletteName: Dm_InsideJabu_Jabu_BossOut_C02
               IsWaitEnd: true
[    549.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#0, concurrent=0)
               duration: 20.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Don
[    569.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#0, concurrent=0)
[    580.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#5, concurrent=0)
[    580.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#6, concurrent=0)
               duration: 58.0
               DemoPaletteName: Dm_InsideJabu_Jabu_BossOut_C03
               IsWaitEnd: true
[    638.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#6, concurrent=0)
[    638.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#7, concurrent=0)
               duration: 62.0
               CurrDemoPaletteName: Dm_InsideJabu_Jabu_BossOut_C03_b
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_InsideJabu_Jabu_BossOut_C03
               RateEnd: 1.0
               RateFrame: 30.0
               RateStart: 0.0
[    645.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#1, concurrent=0)
               duration: 20.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Don
[    665.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#1, concurrent=0)
[    700.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#7, concurrent=0)
[    700.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
               duration: 200.0
               DemoPaletteName: Dm_InsideJabu_Jabu_BossOut_C04
               IsWaitEnd: true
[    758.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#2, concurrent=0)
               duration: 20.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Don
[    778.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#2, concurrent=0)
[    900.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
[    900.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#9, concurrent=0)
               duration: 520.0
               DemoPaletteName: Dm_InsideJabu_Jabu_BossOut_C05
               IsWaitEnd: true
[   1202.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#3, concurrent=0)
               duration: 70.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Dooon
[   1272.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#3, concurrent=0)
[   1420.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#9, concurrent=0)
[   1420.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
               duration: 107.0
               DemoPaletteName: Dm_InsideJabu_Jabu_BossOut_C05_50
               IsWaitEnd: true
[   1527.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
[   1527.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
               duration: 176.0
               DemoPaletteName: Dm_InsideJabu_Jabu_BossOut_C06
               IsWaitEnd: true
[   1703.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
[   1703.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#12, concurrent=0)
               duration: 250.0
               DemoPaletteName: Dm_InsideJabu_Jabu_BossOut_C06_50
               IsWaitEnd: true
[   1953.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#12, concurrent=0)
[   1953.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#13, concurrent=0)
               duration: 200.0
               DemoPaletteName: Dm_InsideJabu_Jabu_BossOut_C07
               IsWaitEnd: true
[   2153.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#13, concurrent=0)
[   2153.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#14, concurrent=0)
               duration: 230.0
               DemoPaletteName: Dm_InsideJabu_Jabu_BossOut_C08
               IsWaitEnd: true
[   2383.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#14, concurrent=0)
[   2383.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#15, concurrent=0)
               duration: 280.0
               DemoPaletteName: Dm_InsideJabu_Jabu_BossOut_C09
               IsWaitEnd: true
[   2663.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#15, concurrent=0)
[   2663.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#16, concurrent=0)
               duration: 670.0
               DemoPaletteName: Dm_InsideJabu_Jabu_BossOut_C10
               IsWaitEnd: true
[   3333.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#16, concurrent=0)
