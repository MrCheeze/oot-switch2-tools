-------- Event timeline: Dm_SpiritTemple_0030_Env --------
actors: 4
clips: 21
oneshots: 0
cuts: 1
duration: 2779.0
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
actions: ['Event_SetDemoPaletteForTimeline', 'Event_SetDemoPaletteTransitionForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[11]
concurrent clips: 2
actions: ['EventCreateLocationalLightToEventCenter', 'EventEditLocationalLight']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[10]
concurrent clips: 2
actions: ['EventCreateLocationalLightToEventCenter', 'EventEditLocationalLight']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#4, concurrent=0)
               duration: 680.0
               DemoPaletteName: Dm_SpiritTemple_0030_C01
               IsWaitEnd: true
[    680.0] L EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#4, concurrent=0)
[    680.0] E EventWorldManagerController[10] - Event_SetDemoPaletteTransitionForTimeline (#5, concurrent=0)
               duration: 280.0
               CurrDemoPaletteName: Dm_SpiritTemple_0030_C01_b
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_SpiritTemple_0030_C01
               RateEnd: 1.0
               RateFrame: 260.0
               RateStart: 0.0
[    688.0] E GameSystemActor[10] - EventControllerRumbleTimeline (#0, concurrent=0)
               duration: 15.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Small_GataGata
[    703.0] L GameSystemActor[10] - EventControllerRumbleTimeline (#0, concurrent=0)
[    703.0] E GameSystemActor[10] - EventControllerRumbleTimeline (#1, concurrent=0)
               duration: 238.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_GoGoGo
[    941.0] L GameSystemActor[10] - EventControllerRumbleTimeline (#1, concurrent=0)
[    941.0] E GameSystemActor[10] - EventControllerRumbleTimeline (#2, concurrent=0)
               duration: 17.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Small_GataGata
[    958.0] L GameSystemActor[10] - EventControllerRumbleTimeline (#2, concurrent=0)
[    960.0] L EventWorldManagerController[10] - Event_SetDemoPaletteTransitionForTimeline (#5, concurrent=0)
[    960.0] E EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#6, concurrent=0)
               duration: 180.0
               DemoPaletteName: Dm_SpiritTemple_0030_C02
               IsWaitEnd: true
[   1140.0] L EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#6, concurrent=0)
[   1140.0] E EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
               duration: 490.0
               DemoPaletteName: Dm_SpiritTemple_0030_C03
               IsWaitEnd: true
[   1140.0] E PostProcessingActor[11] - EventEditLocationalLight (#14, concurrent=1)
               duration: 490.0
               Color:
               - 3.3499999046325684
               - 0.0
               - 0.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: Point_Light_Red
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1140.0] E PostProcessingActor[10] - EventEditLocationalLight (#18, concurrent=1)
               duration: 490.0
               Color:
               - 0.0
               - 1.190000057220459
               - 2.640000104904175
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: Point_Light_Blue
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1400.0] E GameSystemActor[10] - EventControllerRumbleTimeline (#3, concurrent=0)
               duration: 70.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Dooon
[   1470.0] L GameSystemActor[10] - EventControllerRumbleTimeline (#3, concurrent=0)
[   1630.0] L EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
[   1630.0] L PostProcessingActor[11] - EventEditLocationalLight (#14, concurrent=1)
[   1630.0] L PostProcessingActor[10] - EventEditLocationalLight (#18, concurrent=1)
[   1630.0] E EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
               duration: 1.0
               DemoPaletteName: Dm_SpiritTemple_0030_C04
               IsWaitEnd: true
[   1630.0] E PostProcessingActor[11] - EventCreateLocationalLightToEventCenter (#13, concurrent=0)
               duration: 90.0
               Direction:
               - 0.0
               - -1.0
               - 0.0
               InnerAngle: 15.0
               IsIgnoreRot: false
               LightHash: Point_Light_Red
               LightType: 0
               OuterAngle: 45.0
               PositionOffset:
               - 10.0
               - 2.5
               - -0.9300000071525574
[   1630.0] E PostProcessingActor[11] - EventEditLocationalLight (#15, concurrent=1)
               duration: 90.0
               Color:
               - 2.4747960567474365
               - 0.41993001103401184
               - 0.1215829998254776
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 25
               Intensity: 1800.0
               IsFrameTransition: false
               LightHash: Point_Light_Red
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1630.0] E PostProcessingActor[10] - EventCreateLocationalLightToEventCenter (#17, concurrent=0)
               duration: 90.0
               Direction:
               - 0.0
               - -1.0
               - 0.0
               InnerAngle: 15.0
               IsIgnoreRot: false
               LightHash: Point_Light_Blue
               LightType: 0
               OuterAngle: 45.0
               PositionOffset:
               - -0.9259999990463257
               - 3.6519999504089355
               - 5.556000232696533
[   1630.0] E PostProcessingActor[10] - EventEditLocationalLight (#19, concurrent=1)
               duration: 90.0
               Color:
               - 0.14204800128936768
               - 0.642225980758667
               - 5.073493957519531
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 25
               Intensity: 1800.0
               IsFrameTransition: false
               LightHash: Point_Light_Blue
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1631.0] L EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
[   1631.0] E EventWorldManagerController[10] - Event_SetDemoPaletteTransitionForTimeline (#9, concurrent=0)
               duration: 89.0
               CurrDemoPaletteName: Dm_SpiritTemple_0030_C04_b
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_SpiritTemple_0030_C04
               RateEnd: 1.0
               RateFrame: 33.0
               RateStart: 0.0
[   1720.0] L EventWorldManagerController[10] - Event_SetDemoPaletteTransitionForTimeline (#9, concurrent=0)
[   1720.0] L PostProcessingActor[11] - EventCreateLocationalLightToEventCenter (#13, concurrent=0)
[   1720.0] L PostProcessingActor[11] - EventEditLocationalLight (#15, concurrent=1)
[   1720.0] L PostProcessingActor[10] - EventCreateLocationalLightToEventCenter (#17, concurrent=0)
[   1720.0] L PostProcessingActor[10] - EventEditLocationalLight (#19, concurrent=1)
[   1720.0] E EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
               duration: 290.0
               DemoPaletteName: Dm_SpiritTemple_0030_C05
               IsWaitEnd: true
[   1720.0] E PostProcessingActor[11] - EventEditLocationalLight (#16, concurrent=1)
               duration: 290.0
               Color:
               - 3.3499999046325684
               - 0.0
               - 0.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 60
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: Point_Light_Red
               LocationalLightCreateType: 0
               SourceRadius: 0.0
[   1720.0] E PostProcessingActor[10] - EventEditLocationalLight (#20, concurrent=1)
               duration: 290.0
               Color:
               - 0.0
               - 1.190000057220459
               - 2.640000104904175
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 60
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: Point_Light_Blue
               LocationalLightCreateType: 0
               SourceRadius: 0.0
[   2010.0] L EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
[   2010.0] L PostProcessingActor[11] - EventEditLocationalLight (#16, concurrent=1)
[   2010.0] L PostProcessingActor[10] - EventEditLocationalLight (#20, concurrent=1)
[   2010.0] E EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
               duration: 520.0
               DemoPaletteName: Dm_SpiritTemple_0030_C06
               IsWaitEnd: true
[   2530.0] L EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
[   2530.0] E EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#12, concurrent=0)
               duration: 249.0
               DemoPaletteName: DemoPaletteDummy
               IsWaitEnd: true
[   2779.0] L EventWorldManagerController[10] - Event_SetDemoPaletteForTimeline (#12, concurrent=0)
