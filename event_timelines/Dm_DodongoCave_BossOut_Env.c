-------- Event timeline: Dm_DodongoCave_BossOut_Env --------
actors: 7
clips: 22
oneshots: 0
cuts: 1
duration: 3080.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: GameSystemActor[2]
concurrent clips: 1
actions: ['EventControllerRumbleTimeline']
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

Actor: PostProcessingActor[2]
concurrent clips: 1
actions: ['EventEditLocationalLightAmplifier']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[1]
concurrent clips: 1
actions: []
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: TerrainSystemActor
concurrent clips: 1
actions: ['EventTerrainCalcCenter']
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

[      0.0] E TerrainSystemActor - EventTerrainCalcCenter (#11, concurrent=0)
               duration: 300.0
               IsWaitEnd: true
               Position:
               - 0.0
               - 0.0
               - 0.0
               SceneName: ''
[      0.0] E EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#12, concurrent=0)
               duration: 300.0
               DemoPaletteName: Dm_DodongoCave_BossOut_C01
               IsWaitEnd: true
[      0.0] E EventWorldManagerController[3] - Event_SetEnvPaletteForTimeline (#21, concurrent=0)
               duration: 3080.0
               ChangeSpeed: 5
               EnvPaletteName: Dm_DodongoCave_BossOut
               EnvTimeTableName: ''
               IsWaitEnd: true
[    300.0] L TerrainSystemActor - EventTerrainCalcCenter (#11, concurrent=0)
[    300.0] L EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#12, concurrent=0)
[    300.0] E EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#13, concurrent=0)
               duration: 330.0
               DemoPaletteName: Dm_DodongoCave_BossOut_C02
               IsWaitEnd: true
[    306.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#4, concurrent=0)
               duration: 406.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_GoGoGo
[    392.0] E GameSystemActor[2] - EventControllerRumbleTimeline (#0, concurrent=0)
               duration: 20.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_Doon
[    412.0] L GameSystemActor[2] - EventControllerRumbleTimeline (#0, concurrent=0)
[    556.0] E GameSystemActor[2] - EventControllerRumbleTimeline (#1, concurrent=0)
               duration: 20.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_Doon
[    576.0] L GameSystemActor[2] - EventControllerRumbleTimeline (#1, concurrent=0)
[    630.0] L EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#13, concurrent=0)
[    630.0] E EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#14, concurrent=0)
               duration: 190.0
               DemoPaletteName: Dm_DodongoCave_BossOut_C03
               IsWaitEnd: true
[    712.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#4, concurrent=0)
[    715.0] E GameSystemActor[2] - EventControllerRumbleTimeline (#2, concurrent=0)
               duration: 70.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_Dohoon
[    785.0] L GameSystemActor[2] - EventControllerRumbleTimeline (#2, concurrent=0)
[    820.0] L EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#14, concurrent=0)
[    820.0] E EventWorldManagerController[1] - Event_SetDemoPaletteTransitionForTimeline (#15, concurrent=0)
               duration: 90.0
               CurrDemoPaletteName: Dm_DodongoCave_BossOut_C04_10
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_DodongoCave_BossOut_C04
               RateEnd: 1.0
               RateFrame: 90.0
               RateStart: 0.0
[    910.0] L EventWorldManagerController[1] - Event_SetDemoPaletteTransitionForTimeline (#15, concurrent=0)
[    910.0] E EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#16, concurrent=0)
               duration: 170.0
               DemoPaletteName: Dm_DodongoCave_BossOut_C04_10
               IsWaitEnd: true
[    932.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#5, concurrent=0)
               duration: 78.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_Biyoon
[   1010.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#5, concurrent=0)
[   1080.0] L EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#16, concurrent=0)
[   1080.0] E EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#17, concurrent=0)
               duration: 710.0
               DemoPaletteName: Dm_DodongoCave_BossOut_C05
               IsWaitEnd: true
[   1120.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#6, concurrent=0)
               duration: 15.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_Doon
[   1135.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#6, concurrent=0)
[   1135.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#7, concurrent=0)
               duration: 137.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_GoGoGo
[   1194.0] E GameSystemActor[2] - EventControllerRumbleTimeline (#3, concurrent=0)
               duration: 15.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_Doon
[   1209.0] L GameSystemActor[2] - EventControllerRumbleTimeline (#3, concurrent=0)
[   1272.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#7, concurrent=0)
[   1360.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#8, concurrent=0)
               duration: 34.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_GoGoGo
[   1394.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#8, concurrent=0)
[   1397.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#9, concurrent=0)
               duration: 70.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Dohoon
[   1400.0] E PostProcessingActor[2] - EventEditLocationalLightAmplifier (#10, concurrent=0)
               duration: 1680.0
               Coef: 0.15000000596046448
               FrameTransitionCount: 500
               IsFrameTransition: true
               LightHash: Amplifier_BossRoom_00
[   1467.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#9, concurrent=0)
[   1790.0] L EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#17, concurrent=0)
[   1790.0] E EventWorldManagerController[1] - Event_SetDemoPaletteTransitionForTimeline (#18, concurrent=0)
               duration: 180.0
               CurrDemoPaletteName: Dm_DodongoCave_BossOut_C05_10
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_DodongoCave_BossOut_C05
               RateEnd: 1.0
               RateFrame: 180.0
               RateStart: 0.0
[   1970.0] L EventWorldManagerController[1] - Event_SetDemoPaletteTransitionForTimeline (#18, concurrent=0)
[   1970.0] E EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#19, concurrent=0)
               duration: 340.0
               DemoPaletteName: Dm_DodongoCave_BossOut_C05_10
               IsWaitEnd: true
[   2310.0] L EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#19, concurrent=0)
[   2310.0] E EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#20, concurrent=0)
               duration: 770.0
               DemoPaletteName: Dm_DodongoCave_BossOut_C06
               IsWaitEnd: true
[   3080.0] L PostProcessingActor[2] - EventEditLocationalLightAmplifier (#10, concurrent=0)
[   3080.0] L EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#20, concurrent=0)
[   3080.0] L EventWorldManagerController[3] - Event_SetEnvPaletteForTimeline (#21, concurrent=0)
