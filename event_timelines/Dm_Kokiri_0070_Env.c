-------- Event timeline: Dm_Kokiri_0070_Env --------
actors: 6
clips: 15
oneshots: 0
cuts: 1
duration: 3778.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: PostProcessingActor[5]
concurrent clips: 1
actions: ['EventCreateLocationalLightToEventCenter']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[4]
concurrent clips: 1
actions: ['EventEditLocationalLight']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[3]
concurrent clips: 1
actions: ['EventCreateLocationalLightToEventCenter']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[2]
concurrent clips: 1
actions: ['EventEditLocationalLight']
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

Actor: EventWorldManagerController[0]
concurrent clips: 1
actions: ['Event_SetFoliageShadowParamForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#6, concurrent=0)
               duration: 187.0
               DemoPaletteName: Dm_Kokiri_0070_C01
               IsWaitEnd: true
[    187.0] L EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#6, concurrent=0)
[    187.0] E EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
               duration: 262.0
               DemoPaletteName: Dm_Kokiri_0070_C02
               IsWaitEnd: true
[    449.0] L EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
[    449.0] E PostProcessingActor[5] - EventCreateLocationalLightToEventCenter (#0, concurrent=0)
               duration: 1405.0
               Direction:
               - 0.4320000112056732
               - -0.7039999961853027
               - 0.5640000104904175
               InnerAngle: 13.0
               IsIgnoreRot: false
               LightHash: deku_light_fill
               LightType: 1
               OuterAngle: 30.719999313354492
               PositionOffset:
               - 0.0
               - 38.39799880981445
               - -23.729000091552734
[    449.0] E PostProcessingActor[4] - EventEditLocationalLight (#2, concurrent=0)
               duration: 1405.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: false
               EditSourceRadius: false
               FrameTransitionCount: 30
               Intensity: 200000.0
               IsFrameTransition: false
               LightHash: deku_light_fill
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    449.0] E PostProcessingActor[3] - EventCreateLocationalLightToEventCenter (#4, concurrent=0)
               duration: 2195.0
               Direction:
               - -0.45399999618530273
               - -0.3179999887943268
               - -0.8320000171661377
               InnerAngle: 8.880999565124512
               IsIgnoreRot: false
               LightHash: deku_add_light
               LightType: 1
               OuterAngle: 28.333999633789062
               PositionOffset:
               - 31.729999542236328
               - 31.56399917602539
               - 35.09400177001953
[    449.0] E PostProcessingActor[2] - EventEditLocationalLight (#5, concurrent=0)
               duration: 2192.0
               Color:
               - 1.1515719890594482
               - 0.9739120006561279
               - 0.7379059791564941
               EditColor: true
               EditIntensity: false
               EditSourceRadius: false
               FrameTransitionCount: 0
               Intensity: 1000000.0
               IsFrameTransition: true
               LightHash: deku_add_light
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    449.0] E EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
               duration: 359.0
               DemoPaletteName: Dm_Kokiri_0070_C03
               IsWaitEnd: true
[    449.0] E EventWorldManagerController[0] - Event_SetFoliageShadowParamForTimeline (#14, concurrent=0)
               duration: 1405.0
               IsWaitEnd: true
[    808.0] L EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
[    808.0] E EventWorldManagerController[1] - Event_SetDemoPaletteTransitionForTimeline (#9, concurrent=0)
               duration: 115.0
               CurrDemoPaletteName: Dm_Kokiri_0070_C03-2
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_Kokiri_0070_C03
               RateEnd: 1.0
               RateFrame: 100.0
               RateStart: 0.0
[    923.0] L EventWorldManagerController[1] - Event_SetDemoPaletteTransitionForTimeline (#9, concurrent=0)
[    923.0] E EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
               duration: 931.0
               DemoPaletteName: Dm_Kokiri_0070_C03-2
               IsWaitEnd: true
[   1854.0] L PostProcessingActor[5] - EventCreateLocationalLightToEventCenter (#0, concurrent=0)
[   1854.0] L PostProcessingActor[4] - EventEditLocationalLight (#2, concurrent=0)
[   1854.0] L EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
[   1854.0] L EventWorldManagerController[0] - Event_SetFoliageShadowParamForTimeline (#14, concurrent=0)
[   1854.0] E EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
               duration: 790.0
               DemoPaletteName: Dm_Kokiri_0070_C04
               IsWaitEnd: true
[   2641.0] L PostProcessingActor[2] - EventEditLocationalLight (#5, concurrent=0)
[   2644.0] L PostProcessingActor[3] - EventCreateLocationalLightToEventCenter (#4, concurrent=0)
[   2644.0] L EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
[   2644.0] E PostProcessingActor[5] - EventCreateLocationalLightToEventCenter (#1, concurrent=0)
               duration: 398.0
               Direction:
               - 0.4320000112056732
               - -0.7039999961853027
               - 0.5640000104904175
               InnerAngle: 13.0
               IsIgnoreRot: false
               LightHash: deku_light_fill2
               LightType: 1
               OuterAngle: 30.719999313354492
               PositionOffset:
               - 0.0
               - 38.39799880981445
               - -23.729000091552734
[   2644.0] E PostProcessingActor[4] - EventEditLocationalLight (#3, concurrent=0)
               duration: 398.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: false
               EditSourceRadius: false
               FrameTransitionCount: 30
               Intensity: 200000.0
               IsFrameTransition: false
               LightHash: deku_light_fill2
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2644.0] E EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#12, concurrent=0)
               duration: 398.0
               DemoPaletteName: Dm_Kokiri_0070_C05
               IsWaitEnd: true
[   3042.0] L PostProcessingActor[5] - EventCreateLocationalLightToEventCenter (#1, concurrent=0)
[   3042.0] L PostProcessingActor[4] - EventEditLocationalLight (#3, concurrent=0)
[   3042.0] L EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#12, concurrent=0)
[   3042.0] E EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#13, concurrent=0)
               duration: 736.0
               DemoPaletteName: Dm_Kokiri_0070_C06
               IsWaitEnd: true
[   3778.0] L EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#13, concurrent=0)
