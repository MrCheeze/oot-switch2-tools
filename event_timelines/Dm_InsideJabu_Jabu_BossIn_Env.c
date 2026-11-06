-------- Event timeline: Dm_InsideJabu_Jabu_BossIn_Env --------
actors: 6
clips: 45
oneshots: 0
cuts: 1
duration: 2840.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: PostProcessingActor[3]
concurrent clips: 2
actions: ['EventCreateLocationalLightToEventCenter', 'EventEditLocationalLight']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[2]
concurrent clips: 2
actions: ['EventCreateLocationalLightToEventCenter', 'EventEditLocationalLight']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[1]
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
actions: ['Event_SetDemoPaletteForTimeline', 'Event_SetDemoPaletteTransitionForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E PostProcessingActor[1] - EventCreateLocationalLightToEventCenter (#8, concurrent=0)
               duration: 114.0
               Direction:
               - 0.0
               - -0.6499999761581421
               - -0.75
               InnerAngle: 15.0
               IsIgnoreRot: true
               LightHash: Light01
               LightType: 0
               OuterAngle: 45.0
               PositionOffset:
               - 0.0
               - 3.0
               - 30.0
[      0.0] E PostProcessingActor[1] - EventEditLocationalLight (#10, concurrent=1)
               duration: 114.0
               Color:
               - 1.0
               - 0.10000000149011612
               - 0.10000000149011612
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 400.0
               IsFrameTransition: false
               LightHash: Light01
               LocationalLightCreateType: 0
               SourceRadius: 2.0
[      0.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#34, concurrent=0)
               duration: 114.0
               DemoPaletteName: Dm_InsideJabu_Jabu_BossIn_C01
               IsWaitEnd: false
[    114.0] L PostProcessingActor[1] - EventCreateLocationalLightToEventCenter (#8, concurrent=0)
[    114.0] L PostProcessingActor[1] - EventEditLocationalLight (#10, concurrent=1)
[    114.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#34, concurrent=0)
[    114.0] E PostProcessingActor[1] - EventEditLocationalLight (#11, concurrent=1)
               duration: 100.0
               Color:
               - 1.0
               - 0.800000011920929
               - 0.800000011920929
               EditColor: false
               EditIntensity: true
               EditSourceRadius: false
               FrameTransitionCount: 16
               Intensity: 0.0
               IsFrameTransition: true
               LightHash: Light01
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    114.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#35, concurrent=0)
               duration: 15.0
               CurrDemoPaletteName: Dm_InsideJabu_Jabu_BossIn_C01_1
               IsWaitEnd: false
               PrevDemoPaletteName: Dm_InsideJabu_Jabu_BossIn_C01
               RateEnd: 1.0
               RateFrame: 16.0
               RateStart: 0.0
[    129.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#35, concurrent=0)
[    129.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#21, concurrent=0)
               duration: 40.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Byeen
[    129.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#36, concurrent=0)
               duration: 191.0
               DemoPaletteName: Dm_InsideJabu_Jabu_BossIn_C01_1
               IsWaitEnd: false
[    169.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#21, concurrent=0)
[    214.0] L PostProcessingActor[1] - EventEditLocationalLight (#11, concurrent=1)
[    320.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#36, concurrent=0)
[    320.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#37, concurrent=0)
               duration: 530.0
               DemoPaletteName: Dm_InsideJabu_Jabu_BossIn_C02
               IsWaitEnd: true
[    850.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#37, concurrent=0)
[    850.0] E PostProcessingActor[1] - EventEditLocationalLight (#12, concurrent=1)
               duration: 180.0
               Color:
               - 1.0
               - 0.800000011920929
               - 0.800000011920929
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: Light05
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    850.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#38, concurrent=0)
               duration: 320.0
               DemoPaletteName: Dm_InsideJabu_Jabu_BossIn_C03
               IsWaitEnd: true
[   1030.0] L PostProcessingActor[1] - EventEditLocationalLight (#12, concurrent=1)
[   1030.0] E PostProcessingActor[1] - EventCreateLocationalLightToEventCenter (#9, concurrent=0)
               duration: 330.0
               Direction:
               - 0.0
               - -1.0
               - 0.0
               InnerAngle: 15.0
               IsIgnoreRot: true
               LightHash: Light05
               LightType: 0
               OuterAngle: 45.0
               PositionOffset:
               - 1.9270000457763672
               - 3.4630000591278076
               - 15.791999816894531
[   1030.0] E PostProcessingActor[1] - EventEditLocationalLight (#13, concurrent=1)
               duration: 15.0
               Color:
               - 0.8600000143051147
               - 1.059999942779541
               - 1.0299999713897705
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 5
               Intensity: 940.7410278320312
               IsFrameTransition: true
               LightHash: Light05
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1045.0] L PostProcessingActor[1] - EventEditLocationalLight (#13, concurrent=1)
[   1045.0] E PostProcessingActor[1] - EventEditLocationalLight (#14, concurrent=1)
               duration: 315.0
               Color:
               - 0.8600000143051147
               - 1.059999942779541
               - 1.0299999713897705
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 60
               Intensity: 200.0
               IsFrameTransition: true
               LightHash: Light05
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1170.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#38, concurrent=0)
[   1170.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#39, concurrent=0)
               duration: 190.0
               DemoPaletteName: Dm_InsideJabu_Jabu_BossIn_C04
               IsWaitEnd: true
[   1260.0] E PostProcessingActor[2] - EventEditLocationalLight (#5, concurrent=1)
               duration: 100.0
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
               LightHash: Dm_InsideJabu_Jabu_BossIn_01
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1360.0] L PostProcessingActor[2] - EventEditLocationalLight (#5, concurrent=1)
[   1360.0] L PostProcessingActor[1] - EventCreateLocationalLightToEventCenter (#9, concurrent=0)
[   1360.0] L PostProcessingActor[1] - EventEditLocationalLight (#14, concurrent=1)
[   1360.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#39, concurrent=0)
[   1360.0] E PostProcessingActor[3] - EventEditLocationalLight (#1, concurrent=1)
               duration: 440.0
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
               LightHash: Dm_InsideJabu_Jabu_BossIn_02
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1360.0] E PostProcessingActor[2] - EventCreateLocationalLightToEventCenter (#4, concurrent=0)
               duration: 640.0
               Direction:
               - -0.5429999828338623
               - -0.21887600421905518
               - 0.8107060194015503
               InnerAngle: 11.0
               IsIgnoreRot: false
               LightHash: Dm_InsideJabu_Jabu_BossIn_01
               LightType: 1
               OuterAngle: 16.0
               PositionOffset:
               - 2.1050000190734863
               - 3.2829999923706055
               - 12.711000442504883
[   1360.0] E PostProcessingActor[2] - EventEditLocationalLight (#6, concurrent=1)
               duration: 640.0
               Color:
               - 0.8600000143051147
               - 1.059999942779541
               - 1.0299999713897705
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 2033.3299560546875
               IsFrameTransition: false
               LightHash: Dm_InsideJabu_Jabu_BossIn_01
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1360.0] E PostProcessingActor[1] - EventEditLocationalLight (#15, concurrent=1)
               duration: 100.0
               Color:
               - 1.0
               - 0.800000011920929
               - 0.800000011920929
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: Light05
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1360.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#40, concurrent=0)
               duration: 440.0
               DemoPaletteName: Dm_InsideJabu_Jabu_BossIn_C05
               IsWaitEnd: true
[   1460.0] L PostProcessingActor[1] - EventEditLocationalLight (#15, concurrent=1)
[   1800.0] L PostProcessingActor[3] - EventEditLocationalLight (#1, concurrent=1)
[   1800.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#40, concurrent=0)
[   1800.0] E PostProcessingActor[3] - EventCreateLocationalLightToEventCenter (#0, concurrent=0)
               duration: 200.0
               Direction:
               - 0.4320000112056732
               - -0.5736700296401978
               - 0.6959009766578674
               InnerAngle: 15.0
               IsIgnoreRot: false
               LightHash: Dm_InsideJabu_Jabu_BossIn_02
               LightType: 1
               OuterAngle: 45.0
               PositionOffset:
               - -0.5049999952316284
               - 3.5360000133514404
               - 15.152000427246094
[   1800.0] E PostProcessingActor[3] - EventEditLocationalLight (#2, concurrent=1)
               duration: 200.0
               Color:
               - 0.8600000143051147
               - 1.059999942779541
               - 1.0299999713897705
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 464.8169860839844
               IsFrameTransition: false
               LightHash: Dm_InsideJabu_Jabu_BossIn_02
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1800.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#41, concurrent=0)
               duration: 200.0
               DemoPaletteName: Dm_InsideJabu_Jabu_BossIn_C06
               IsWaitEnd: true
[   1910.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#22, concurrent=0)
               duration: 22.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Doka
[   1932.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#22, concurrent=0)
[   1982.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#23, concurrent=0)
               duration: 22.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Doka
[   2000.0] L PostProcessingActor[3] - EventCreateLocationalLightToEventCenter (#0, concurrent=0)
[   2000.0] L PostProcessingActor[3] - EventEditLocationalLight (#2, concurrent=1)
[   2000.0] L PostProcessingActor[2] - EventCreateLocationalLightToEventCenter (#4, concurrent=0)
[   2000.0] L PostProcessingActor[2] - EventEditLocationalLight (#6, concurrent=1)
[   2000.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#41, concurrent=0)
[   2000.0] E PostProcessingActor[3] - EventEditLocationalLight (#3, concurrent=1)
               duration: 100.0
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
               LightHash: Dm_InsideJabu_Jabu_BossIn_02
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2000.0] E PostProcessingActor[2] - EventEditLocationalLight (#7, concurrent=1)
               duration: 100.0
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
               LightHash: Dm_InsideJabu_Jabu_BossIn_01
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2000.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#42, concurrent=0)
               duration: 168.0
               DemoPaletteName: Dm_InsideJabu_Jabu_BossIn_C06_10
               IsWaitEnd: true
[   2004.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#23, concurrent=0)
[   2054.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#24, concurrent=0)
               duration: 22.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Doka
[   2076.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#24, concurrent=0)
[   2088.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#25, concurrent=0)
               duration: 22.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Doka
[   2100.0] L PostProcessingActor[3] - EventEditLocationalLight (#3, concurrent=1)
[   2100.0] L PostProcessingActor[2] - EventEditLocationalLight (#7, concurrent=1)
[   2110.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#25, concurrent=0)
[   2168.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#42, concurrent=0)
[   2168.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#43, concurrent=0)
               duration: 340.0
               CurrDemoPaletteName: default_settings
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_InsideJabu_Jabu_BossIn_C06_10
               RateEnd: 1.0
               RateFrame: 340.0
               RateStart: 0.0
[   2198.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#26, concurrent=0)
               duration: 22.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Doka
[   2220.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#26, concurrent=0)
[   2228.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#27, concurrent=0)
               duration: 22.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Doka
[   2250.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#27, concurrent=0)
[   2255.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#28, concurrent=0)
               duration: 22.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Doka
[   2270.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#16, concurrent=0)
               duration: 22.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Doka
[   2277.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#28, concurrent=0)
[   2280.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#29, concurrent=0)
               duration: 22.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Doka
[   2292.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#16, concurrent=0)
[   2300.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#17, concurrent=0)
               duration: 22.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Doka
[   2302.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#29, concurrent=0)
[   2322.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#17, concurrent=0)
[   2330.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#30, concurrent=0)
               duration: 40.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_Byeen
[   2370.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#30, concurrent=0)
[   2370.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#31, concurrent=0)
               duration: 40.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_Byeen
[   2385.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#18, concurrent=0)
               duration: 22.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Byeen
[   2407.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#18, concurrent=0)
[   2410.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#31, concurrent=0)
[   2420.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#32, concurrent=0)
               duration: 40.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Byeen
[   2460.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#32, concurrent=0)
[   2468.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#19, concurrent=0)
               duration: 40.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Byeen
[   2508.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#19, concurrent=0)
[   2508.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#43, concurrent=0)
[   2508.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#44, concurrent=0)
               duration: 332.0
               DemoPaletteName: default_settings
               IsWaitEnd: true
[   2513.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#33, concurrent=0)
               duration: 40.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_Byeen
[   2517.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#20, concurrent=0)
               duration: 40.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Byeen
[   2553.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#33, concurrent=0)
[   2557.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#20, concurrent=0)
[   2840.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#44, concurrent=0)
