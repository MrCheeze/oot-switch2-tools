-------- Event timeline: Dm_ForestTemple_BossOut_Evn --------
actors: 3
clips: 36
oneshots: 0
cuts: 1
duration: 5528.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: PostProcessingActor[1]
concurrent clips: 2
actions: ['EventCreateLocationalLightToEventCenter', 'EventEditLocationalLight', 'EventGoOffstageForUser']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventWorldManagerController
concurrent clips: 1
actions: ['Event_SetDemoPaletteForTimeline', 'Event_SetDemoPaletteTransitionForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventWorldManagerController[0]
concurrent clips: 1
actions: ['Event_SetEnvPaletteForTimeline', 'Event_SetEnvPaletteTransitionForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#5, concurrent=0)
               duration: 279.0
               DemoPaletteName: Dm_ForestTemple_BossOut_C01
               IsWaitEnd: true
[      0.0] E EventWorldManagerController[0] - Event_SetEnvPaletteForTimeline (#31, concurrent=0)
               duration: 1106.0
               ChangeSpeed: 5
               EnvPaletteName: ForestTemple_Boss_SecondHalf
               EnvTimeTableName: ''
               IsWaitEnd: true
[    279.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#5, concurrent=0)
[    279.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#6, concurrent=0)
               duration: 125.0
               DemoPaletteName: Dm_ForestTemple_BossOut_C02
               IsWaitEnd: true
[    404.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#6, concurrent=0)
[    404.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
               duration: 226.0
               DemoPaletteName: Dm_ForestTemple_BossOut_C03
               IsWaitEnd: true
[    630.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
[    630.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
               duration: 139.0
               DemoPaletteName: Dm_ForestTemple_BossOut_C04
               IsWaitEnd: true
[    769.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
[    769.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#9, concurrent=0)
               duration: 330.0
               DemoPaletteName: Dm_ForestTemple_BossOut_C05
               IsWaitEnd: true
[   1099.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#9, concurrent=0)
[   1099.0] E PostProcessingActor[1] - EventCreateLocationalLightToEventCenter (#0, concurrent=0)
               duration: 2875.0
               Direction:
               - 0.0
               - -1.0
               - 0.0
               InnerAngle: 15.0
               IsIgnoreRot: false
               LightHash: test
               LightType: 0
               OuterAngle: 45.0
               PositionOffset:
               - 0.0
               - 0.0
               - 0.0
[   1099.0] E PostProcessingActor[1] - EventEditLocationalLight (#2, concurrent=1)
               duration: 330.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: test
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1099.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
               duration: 8.0
               DemoPaletteName: Dm_ForestTemple_BossOut_C06
               IsWaitEnd: true
[   1106.0] L EventWorldManagerController[0] - Event_SetEnvPaletteForTimeline (#31, concurrent=0)
[   1106.0] E EventWorldManagerController[0] - Event_SetEnvPaletteTransitionForTimeline (#32, concurrent=0)
               duration: 174.0
               CurrEnvPaletteName: ForestTemple_Boss_AfterBattleDemo
               IsWaitEnd: true
               PrevEnvPaletteName: ForestTemple_Boss_SecondHalf
               RateEnd: 1.0
               RateFrame: 174.0
               RateStart: 0.0
[   1107.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
[   1107.0] E EventWorldManagerController - Event_SetDemoPaletteTransitionForTimeline (#11, concurrent=0)
               duration: 93.0
               CurrDemoPaletteName: Dm_ForestTemple_BossOut_C06_50
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_ForestTemple_BossOut_C06
               RateEnd: 1.0
               RateFrame: 93.0
               RateStart: 0.0
[   1200.0] L EventWorldManagerController - Event_SetDemoPaletteTransitionForTimeline (#11, concurrent=0)
[   1200.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#12, concurrent=0)
               duration: 229.0
               DemoPaletteName: Dm_ForestTemple_BossOut_C06_50
               IsWaitEnd: true
[   1280.0] L EventWorldManagerController[0] - Event_SetEnvPaletteTransitionForTimeline (#32, concurrent=0)
[   1280.0] E EventWorldManagerController[0] - Event_SetEnvPaletteForTimeline (#33, concurrent=0)
               duration: 2491.0
               ChangeSpeed: 5
               EnvPaletteName: ForestTemple_Boss_AfterBattleDemo
               EnvTimeTableName: ''
               IsWaitEnd: true
[   1429.0] L PostProcessingActor[1] - EventEditLocationalLight (#2, concurrent=1)
[   1429.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#12, concurrent=0)
[   1429.0] E PostProcessingActor[1] - EventEditLocationalLight (#3, concurrent=1)
               duration: 2342.0
               Color:
               - 3.345465898513794
               - 0.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 1969.446044921875
               IsFrameTransition: false
               LightHash: test
               LocationalLightCreateType: 0
               SourceRadius: 31.58099937438965
[   1429.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#13, concurrent=0)
               duration: 484.0
               DemoPaletteName: Dm_ForestTemple_BossOut_C07
               IsWaitEnd: true
[   1913.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#13, concurrent=0)
[   1913.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#14, concurrent=0)
               duration: 232.0
               DemoPaletteName: Dm_ForestTemple_BossOut_C08
               IsWaitEnd: true
[   2145.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#14, concurrent=0)
[   2145.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#15, concurrent=0)
               duration: 113.0
               DemoPaletteName: Dm_ForestTemple_BossOut_C09
               IsWaitEnd: true
[   2258.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#15, concurrent=0)
[   2258.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#16, concurrent=0)
               duration: 115.0
               DemoPaletteName: Dm_ForestTemple_BossOut_C10
               IsWaitEnd: true
[   2373.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#16, concurrent=0)
[   2373.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#17, concurrent=0)
               duration: 111.0
               DemoPaletteName: Dm_ForestTemple_BossOut_C11
               IsWaitEnd: true
[   2484.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#17, concurrent=0)
[   2484.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#18, concurrent=0)
               duration: 170.0
               DemoPaletteName: Dm_ForestTemple_BossOut_C12
               IsWaitEnd: true
[   2654.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#18, concurrent=0)
[   2654.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#19, concurrent=0)
               duration: 250.0
               DemoPaletteName: Dm_ForestTemple_BossOut_C13
               IsWaitEnd: true
[   2904.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#19, concurrent=0)
[   2904.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#20, concurrent=0)
               duration: 96.0
               DemoPaletteName: Dm_ForestTemple_BossOut_C14
               IsWaitEnd: true
[   3000.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#20, concurrent=0)
[   3000.0] E EventWorldManagerController - Event_SetDemoPaletteTransitionForTimeline (#21, concurrent=0)
               duration: 140.0
               CurrDemoPaletteName: Dm_ForestTemple_BossOut_C14_50
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_ForestTemple_BossOut_C14
               RateEnd: 1.0
               RateFrame: 140.0
               RateStart: 0.0
[   3140.0] L EventWorldManagerController - Event_SetDemoPaletteTransitionForTimeline (#21, concurrent=0)
[   3140.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#22, concurrent=0)
               duration: 64.0
               DemoPaletteName: Dm_ForestTemple_BossOut_C14_50
               IsWaitEnd: true
[   3204.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#22, concurrent=0)
[   3204.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#23, concurrent=0)
               duration: 120.0
               DemoPaletteName: Dm_ForestTemple_BossOut_C15
               IsWaitEnd: true
[   3324.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#23, concurrent=0)
[   3324.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#24, concurrent=0)
               duration: 128.0
               DemoPaletteName: Dm_ForestTemple_BossOut_C16
               IsWaitEnd: true
[   3452.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#24, concurrent=0)
[   3452.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#25, concurrent=0)
               duration: 67.0
               DemoPaletteName: Dm_ForestTemple_BossOut_C17
               IsWaitEnd: true
[   3519.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#25, concurrent=0)
[   3519.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#26, concurrent=0)
               duration: 63.0
               DemoPaletteName: Dm_ForestTemple_BossOut_C18
               IsWaitEnd: true
[   3582.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#26, concurrent=0)
[   3582.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#27, concurrent=0)
               duration: 392.0
               DemoPaletteName: Dm_ForestTemple_BossOut_C19
               IsWaitEnd: true
[   3771.0] L PostProcessingActor[1] - EventEditLocationalLight (#3, concurrent=1)
[   3771.0] L EventWorldManagerController[0] - Event_SetEnvPaletteForTimeline (#33, concurrent=0)
[   3771.0] E PostProcessingActor[1] - EventEditLocationalLight (#4, concurrent=1)
               duration: 203.0
               Color:
               - 3.345465898513794
               - 0.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 60
               Intensity: 0.0
               IsFrameTransition: true
               LightHash: test
               LocationalLightCreateType: 0
               SourceRadius: 31.58099937438965
[   3771.0] E EventWorldManagerController[0] - Event_SetEnvPaletteTransitionForTimeline (#34, concurrent=0)
               duration: 129.0
               CurrEnvPaletteName: ForestTemple
               IsWaitEnd: true
               PrevEnvPaletteName: ForestTemple_Boss_AfterBattleDemo
               RateEnd: 1.0
               RateFrame: 130.0
               RateStart: 0.0
[   3900.0] L EventWorldManagerController[0] - Event_SetEnvPaletteTransitionForTimeline (#34, concurrent=0)
[   3900.0] E EventWorldManagerController[0] - Event_SetEnvPaletteForTimeline (#35, concurrent=0)
               duration: 1628.0
               ChangeSpeed: 5
               EnvPaletteName: ForestTemple
               EnvTimeTableName: ''
               IsWaitEnd: true
[   3974.0] L PostProcessingActor[1] - EventCreateLocationalLightToEventCenter (#0, concurrent=0)
[   3974.0] L PostProcessingActor[1] - EventEditLocationalLight (#4, concurrent=1)
[   3974.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#27, concurrent=0)
[   3974.0] E PostProcessingActor[1] - EventGoOffstageForUser (#1, concurrent=0)
               duration: 1554.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   3974.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#28, concurrent=0)
               duration: 594.0
               DemoPaletteName: Dm_ForestTemple_BossOut_C20
               IsWaitEnd: true
[   4568.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#28, concurrent=0)
[   4568.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#29, concurrent=0)
               duration: 360.0
               DemoPaletteName: Dm_ForestTemple_BossOut_C21
               IsWaitEnd: true
[   4928.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#29, concurrent=0)
[   4928.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#30, concurrent=0)
               duration: 600.0
               DemoPaletteName: Dm_ForestTemple_BossOut_C22
               IsWaitEnd: true
[   5528.0] L PostProcessingActor[1] - EventGoOffstageForUser (#1, concurrent=0)
[   5528.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#30, concurrent=0)
[   5528.0] L EventWorldManagerController[0] - Event_SetEnvPaletteForTimeline (#35, concurrent=0)
