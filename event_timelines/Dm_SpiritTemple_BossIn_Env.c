-------- Event timeline: Dm_SpiritTemple_BossIn_Env --------
actors: 4
clips: 19
oneshots: 0
cuts: 1
duration: 4405.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

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

[      0.0] E PostProcessingActor[10] - EventEditLocationalLight (#5, concurrent=1)
               duration: 1320.0
               Color:
               - 1.3300000429153442
               - 0.8700000047683716
               - 0.7900000214576721
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: C02_koume_Light
               LocationalLightCreateType: 0
               SourceRadius: 0.0
[      0.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
               duration: 837.0
               DemoPaletteName: Dm_SpiritTemple_BossIn_C01
               IsWaitEnd: true
[    837.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
[    837.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#11, concurrent=0)
               duration: 483.0
               CurrDemoPaletteName: Dm_SpiritTemple_BossIn_C01_b
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_SpiritTemple_BossIn_C01
               RateEnd: 1.0
               RateFrame: 483.0
               RateStart: 0.0
[   1320.0] L PostProcessingActor[10] - EventEditLocationalLight (#5, concurrent=1)
[   1320.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#11, concurrent=0)
[   1320.0] E PostProcessingActor[11] - EventEditLocationalLight (#1, concurrent=1)
               duration: 1200.0
               Color:
               - 0.1599999964237213
               - 1.1100000143051147
               - 2.630000114440918
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: C03_kotake_Light
               LocationalLightCreateType: 0
               SourceRadius: 0.0
[   1320.0] E PostProcessingActor[10] - EventCreateLocationalLightToEventCenter (#4, concurrent=0)
               duration: 1200.0
               Direction:
               - 0.0
               - -1.0
               - 0.0
               InnerAngle: 15.0
               IsIgnoreRot: false
               LightHash: C02_koume_Light
               LightType: 0
               OuterAngle: 45.0
               PositionOffset:
               - 9.720000267028809
               - -1.2259999513626099
               - 12.961000442504883
[   1320.0] E PostProcessingActor[10] - EventEditLocationalLight (#6, concurrent=1)
               duration: 1200.0
               Color:
               - 3.3499999046325684
               - 0.0
               - 0.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 92.58999633789062
               IsFrameTransition: false
               LightHash: C02_koume_Light
               LocationalLightCreateType: 0
               SourceRadius: 0.9269999861717224
[   1320.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#12, concurrent=0)
               duration: 514.0
               DemoPaletteName: Dm_SpiritTemple_BossIn_C02
               IsWaitEnd: true
[   1834.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#12, concurrent=0)
[   1834.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#13, concurrent=0)
               duration: 22.0
               CurrDemoPaletteName: Dm_SpiritTemple_BossIn_C02_b
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_SpiritTemple_BossIn_C02
               RateEnd: 1.0
               RateFrame: 22.0
               RateStart: 0.0
[   1856.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#13, concurrent=0)
[   1856.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#14, concurrent=0)
               duration: 664.0
               DemoPaletteName: Dm_SpiritTemple_BossIn_C02_b
               IsWaitEnd: true
[   2251.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#8, concurrent=0)
               duration: 65.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_Dohoon
[   2316.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#8, concurrent=0)
[   2520.0] L PostProcessingActor[11] - EventEditLocationalLight (#1, concurrent=1)
[   2520.0] L PostProcessingActor[10] - EventCreateLocationalLightToEventCenter (#4, concurrent=0)
[   2520.0] L PostProcessingActor[10] - EventEditLocationalLight (#6, concurrent=1)
[   2520.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#14, concurrent=0)
[   2520.0] E PostProcessingActor[11] - EventCreateLocationalLightToEventCenter (#0, concurrent=0)
               duration: 980.0
               Direction:
               - 0.0
               - -1.0
               - 0.0
               InnerAngle: 15.0
               IsIgnoreRot: false
               LightHash: C03_kotake_Light
               LightType: 0
               OuterAngle: 45.0
               PositionOffset:
               - -11.656000137329102
               - -1.6050000190734863
               - -15.486000061035156
[   2520.0] E PostProcessingActor[11] - EventEditLocationalLight (#2, concurrent=1)
               duration: 980.0
               Color:
               - 0.0
               - 1.100000023841858
               - 3.0999999046325684
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 92.5
               IsFrameTransition: false
               LightHash: C03_kotake_Light
               LocationalLightCreateType: 0
               SourceRadius: 3.700000047683716
[   2520.0] E PostProcessingActor[10] - EventEditLocationalLight (#7, concurrent=1)
               duration: 1885.0
               Color:
               - 1.6699999570846558
               - 0.699999988079071
               - 0.699999988079071
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: C02_koume_Light
               LocationalLightCreateType: 0
               SourceRadius: 0.0
[   2520.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#15, concurrent=0)
               duration: 980.0
               DemoPaletteName: Dm_SpiritTemple_BossIn_C03
               IsWaitEnd: true
[   3288.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#9, concurrent=0)
               duration: 65.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_Dohoon
[   3353.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#9, concurrent=0)
[   3500.0] L PostProcessingActor[11] - EventCreateLocationalLightToEventCenter (#0, concurrent=0)
[   3500.0] L PostProcessingActor[11] - EventEditLocationalLight (#2, concurrent=1)
[   3500.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#15, concurrent=0)
[   3500.0] E PostProcessingActor[11] - EventEditLocationalLight (#3, concurrent=1)
               duration: 905.0
               Color:
               - 0.1599999964237213
               - 1.1100000143051147
               - 2.630000114440918
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: C03_kotake_Light
               LocationalLightCreateType: 0
               SourceRadius: 0.0
[   3500.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#16, concurrent=0)
               duration: 240.0
               DemoPaletteName: Dm_SpiritTemple_BossIn_C04
               IsWaitEnd: true
[   3740.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#16, concurrent=0)
[   3740.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#17, concurrent=0)
               duration: 65.0
               DemoPaletteName: Dm_SpiritTemple_BossIn_C05
               IsWaitEnd: true
[   3805.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#17, concurrent=0)
[   3805.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#18, concurrent=0)
               duration: 600.0
               DemoPaletteName: DemoPaletteDummy
               IsWaitEnd: true
[   4405.0] L PostProcessingActor[11] - EventEditLocationalLight (#3, concurrent=1)
[   4405.0] L PostProcessingActor[10] - EventEditLocationalLight (#7, concurrent=1)
[   4405.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#18, concurrent=0)
