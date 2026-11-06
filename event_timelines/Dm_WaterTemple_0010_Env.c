-------- Event timeline: Dm_WaterTemple_0010_Env --------
actors: 3
clips: 13
oneshots: 0
cuts: 1
duration: 2392.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: PostProcessingActor[2]
concurrent clips: 2
actions: ['EventEditLocationalLight', 'EventCreateLocationalLightToEventCenter']
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

Actor: EventWorldManagerController[0]
concurrent clips: 1
actions: ['Event_SetDemoPaletteForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
               duration: 497.0
               DemoPaletteName: Dm_WaterTemple_0010_C01
               IsWaitEnd: true
[    497.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
[    497.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
               duration: 300.0
               DemoPaletteName: Dm_WaterTemple_0010_C02
               IsWaitEnd: true
[    797.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
[    797.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#9, concurrent=0)
               duration: 190.0
               DemoPaletteName: Dm_WaterTemple_0010_C03
               IsWaitEnd: true
[    925.0] E PostProcessingActor[1] - EventEditLocationalLight (#4, concurrent=1)
               duration: 62.0
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
               LightHash: C04_SpotLight
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    987.0] L PostProcessingActor[1] - EventEditLocationalLight (#4, concurrent=1)
[    987.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#9, concurrent=0)
[    987.0] E PostProcessingActor[1] - EventCreateLocationalLightToEventCenter (#3, concurrent=0)
               duration: 502.0
               Direction:
               - 0.8680890202522278
               - 0.43299999833106995
               - 0.24276000261306763
               InnerAngle: 17.16952133178711
               IsIgnoreRot: false
               LightHash: C04_SpotLight
               LightType: 1
               OuterAngle: 50.111000061035156
               PositionOffset:
               - -4.881999969482422
               - 1.1100000143051147
               - 1.7029999494552612
[    987.0] E PostProcessingActor[1] - EventEditLocationalLight (#5, concurrent=1)
               duration: 502.0
               Color:
               - 0.7209740281105042
               - 1.1001579761505127
               - 1.188086986541748
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 80.0
               IsFrameTransition: false
               LightHash: C04_SpotLight
               LocationalLightCreateType: 0
               SourceRadius: 5.75600004196167
[    987.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
               duration: 502.0
               DemoPaletteName: Dm_WaterTemple_0010_C04
               IsWaitEnd: true
[   1489.0] L PostProcessingActor[1] - EventCreateLocationalLightToEventCenter (#3, concurrent=0)
[   1489.0] L PostProcessingActor[1] - EventEditLocationalLight (#5, concurrent=1)
[   1489.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
[   1489.0] E PostProcessingActor[1] - EventEditLocationalLight (#6, concurrent=1)
               duration: 62.0
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
               LightHash: C04_SpotLight
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1489.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
               duration: 320.0
               DemoPaletteName: Dm_WaterTemple_0010_C05
               IsWaitEnd: true
[   1551.0] L PostProcessingActor[1] - EventEditLocationalLight (#6, concurrent=1)
[   1709.0] E PostProcessingActor[2] - EventEditLocationalLight (#1, concurrent=1)
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
               LightHash: C06_SpotLight
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1809.0] L PostProcessingActor[2] - EventEditLocationalLight (#1, concurrent=1)
[   1809.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
[   1809.0] E PostProcessingActor[2] - EventCreateLocationalLightToEventCenter (#0, concurrent=0)
               duration: 583.0
               Direction:
               - 0.8970639705657959
               - 0.23216399550437927
               - 0.37599998712539673
               InnerAngle: 7.849999904632568
               IsIgnoreRot: true
               LightHash: C06_SpotLight
               LightType: 1
               OuterAngle: 67.61000061035156
               PositionOffset:
               - -4.61899995803833
               - 1.3730000257492065
               - 0.8980000019073486
[   1809.0] E PostProcessingActor[2] - EventEditLocationalLight (#2, concurrent=1)
               duration: 583.0
               Color:
               - 0.9056580066680908
               - 1.0113660097122192
               - 1.188086986541748
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 105.0
               IsFrameTransition: false
               LightHash: C06_SpotLight
               LocationalLightCreateType: 0
               SourceRadius: 4.803999900817871
[   1809.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#12, concurrent=0)
               duration: 583.0
               DemoPaletteName: Dm_WaterTemple_0010_C06
               IsWaitEnd: true
[   2392.0] L PostProcessingActor[2] - EventCreateLocationalLightToEventCenter (#0, concurrent=0)
[   2392.0] L PostProcessingActor[2] - EventEditLocationalLight (#2, concurrent=1)
[   2392.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#12, concurrent=0)
