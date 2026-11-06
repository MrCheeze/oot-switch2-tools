-------- Event timeline: Dm_TimeTemple_0125_Env --------
actors: 4
clips: 28
oneshots: 0
cuts: 1
duration: 5185.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: PostProcessingActor[1]
concurrent clips: 1
actions: ['EventOverwriteSceneShadingParams']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[0]
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
actions: ['Event_SetWindForTimeline']
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


===== Timeline =====

[      0.0] E EventWorldManagerController[0] - Event_SetWindForTimeline (#16, concurrent=0)
               duration: 5185.0
               Azimuth: 0.0
               Elevation: 0.0
               IsImmTrans: true
               IsWaitEnd: true
               Speed: 0.0
[      0.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#17, concurrent=0)
               duration: 720.0
               DemoPaletteName: Dm_TimeTemple_0125_C01
               IsWaitEnd: true
[    720.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#17, concurrent=0)
[    720.0] E PostProcessingActor[1] - EventOverwriteSceneShadingParams (#0, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.2199999988079071
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[    720.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#18, concurrent=0)
               duration: 1560.0
               DemoPaletteName: Dm_TimeTemple_0125_C02
               IsWaitEnd: true
[    740.0] L PostProcessingActor[1] - EventOverwriteSceneShadingParams (#0, concurrent=0)
[   2280.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#18, concurrent=0)
[   2280.0] E PostProcessingActor[1] - EventOverwriteSceneShadingParams (#1, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.37700000405311584
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   2280.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#19, concurrent=0)
               duration: 655.0
               DemoPaletteName: Dm_TimeTemple_0125_C03
               IsWaitEnd: true
[   2300.0] L PostProcessingActor[1] - EventOverwriteSceneShadingParams (#1, concurrent=0)
[   2775.0] E PostProcessingActor[0] - EventCreateLocationalLightToEventCenter (#10, concurrent=0)
               duration: 1010.0
               Direction:
               - -0.9660000205039978
               - -0.2370000034570694
               - 0.10700000077486038
               InnerAngle: 12.649999618530273
               IsIgnoreRot: false
               LightHash: key
               LightType: 1
               OuterAngle: 54.0
               PositionOffset:
               - 4.190000057220459
               - 2.572000026702881
               - -0.9100000262260437
[   2775.0] E PostProcessingActor[0] - EventEditLocationalLight (#11, concurrent=1)
               duration: 160.0
               Color:
               - 0.9399999976158142
               - 1.0099999904632568
               - 1.1299999952316284
               EditColor: false
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 12.0
[   2935.0] L PostProcessingActor[0] - EventEditLocationalLight (#11, concurrent=1)
[   2935.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#19, concurrent=0)
[   2935.0] E PostProcessingActor[1] - EventOverwriteSceneShadingParams (#2, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.27000001072883606
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   2935.0] E PostProcessingActor[0] - EventEditLocationalLight (#12, concurrent=1)
               duration: 330.0
               Color:
               - 0.9399999976158142
               - 1.0099999904632568
               - 1.1299999952316284
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 7600.0
               IsFrameTransition: false
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 12.0
[   2935.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#20, concurrent=0)
               duration: 330.0
               DemoPaletteName: Dm_TimeTemple_0125_C04
               IsWaitEnd: true
[   2955.0] L PostProcessingActor[1] - EventOverwriteSceneShadingParams (#2, concurrent=0)
[   3265.0] L PostProcessingActor[0] - EventEditLocationalLight (#12, concurrent=1)
[   3265.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#20, concurrent=0)
[   3265.0] E PostProcessingActor[1] - EventOverwriteSceneShadingParams (#3, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.49900001287460327
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 0.9769999980926514
[   3265.0] E PostProcessingActor[0] - EventEditLocationalLight (#13, concurrent=1)
               duration: 160.0
               Color:
               - 0.9399999976158142
               - 1.0099999904632568
               - 1.1299999952316284
               EditColor: false
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 12.0
[   3265.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#21, concurrent=0)
               duration: 160.0
               DemoPaletteName: Dm_TimeTemple_0125_C05
               IsWaitEnd: true
[   3285.0] L PostProcessingActor[1] - EventOverwriteSceneShadingParams (#3, concurrent=0)
[   3425.0] L PostProcessingActor[0] - EventEditLocationalLight (#13, concurrent=1)
[   3425.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#21, concurrent=0)
[   3425.0] E PostProcessingActor[1] - EventOverwriteSceneShadingParams (#4, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.3100000023841858
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   3425.0] E PostProcessingActor[0] - EventEditLocationalLight (#14, concurrent=1)
               duration: 200.0
               Color:
               - 0.9399999976158142
               - 1.0099999904632568
               - 1.1299999952316284
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 7600.0
               IsFrameTransition: false
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 12.0
[   3425.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#22, concurrent=0)
               duration: 200.0
               DemoPaletteName: Dm_TimeTemple_0125_C06
               IsWaitEnd: true
[   3445.0] L PostProcessingActor[1] - EventOverwriteSceneShadingParams (#4, concurrent=0)
[   3625.0] L PostProcessingActor[0] - EventEditLocationalLight (#14, concurrent=1)
[   3625.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#22, concurrent=0)
[   3625.0] E PostProcessingActor[1] - EventOverwriteSceneShadingParams (#5, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.36899998784065247
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 0.9900000095367432
[   3625.0] E PostProcessingActor[0] - EventEditLocationalLight (#15, concurrent=1)
               duration: 160.0
               Color:
               - 0.9399999976158142
               - 1.0099999904632568
               - 1.1299999952316284
               EditColor: false
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 12.0
[   3625.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#23, concurrent=0)
               duration: 415.0
               DemoPaletteName: Dm_TimeTemple_0125_C07
               IsWaitEnd: true
[   3645.0] L PostProcessingActor[1] - EventOverwriteSceneShadingParams (#5, concurrent=0)
[   3785.0] L PostProcessingActor[0] - EventCreateLocationalLightToEventCenter (#10, concurrent=0)
[   3785.0] L PostProcessingActor[0] - EventEditLocationalLight (#15, concurrent=1)
[   4040.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#23, concurrent=0)
[   4040.0] E PostProcessingActor[1] - EventOverwriteSceneShadingParams (#6, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.27000001072883606
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   4040.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#24, concurrent=0)
               duration: 370.0
               DemoPaletteName: Dm_TimeTemple_0125_C08
               IsWaitEnd: true
[   4060.0] L PostProcessingActor[1] - EventOverwriteSceneShadingParams (#6, concurrent=0)
[   4410.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#24, concurrent=0)
[   4410.0] E PostProcessingActor[1] - EventOverwriteSceneShadingParams (#7, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.36000001430511475
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   4410.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#25, concurrent=0)
               duration: 150.0
               DemoPaletteName: Dm_TimeTemple_0125_C09
               IsWaitEnd: true
[   4430.0] L PostProcessingActor[1] - EventOverwriteSceneShadingParams (#7, concurrent=0)
[   4560.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#25, concurrent=0)
[   4560.0] E PostProcessingActor[1] - EventOverwriteSceneShadingParams (#8, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.4699999988079071
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   4560.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#26, concurrent=0)
               duration: 185.0
               DemoPaletteName: Dm_TimeTemple_0125_C10
               IsWaitEnd: true
[   4580.0] L PostProcessingActor[1] - EventOverwriteSceneShadingParams (#8, concurrent=0)
[   4745.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#26, concurrent=0)
[   4745.0] E PostProcessingActor[1] - EventOverwriteSceneShadingParams (#9, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.25
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   4745.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#27, concurrent=0)
               duration: 440.0
               DemoPaletteName: Dm_TimeTemple_0125_C11
               IsWaitEnd: true
[   4765.0] L PostProcessingActor[1] - EventOverwriteSceneShadingParams (#9, concurrent=0)
[   5185.0] L EventWorldManagerController[0] - Event_SetWindForTimeline (#16, concurrent=0)
[   5185.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#27, concurrent=0)
