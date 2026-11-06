-------- Event timeline: Dm_TimeTemple_0135_Env --------
actors: 5
clips: 80
oneshots: 0
cuts: 1
duration: 6919.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: PostProcessingActor[2]
concurrent clips: 1
actions: ['EventOverwriteSceneShadingParams']
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

Actor: EventWorldManagerController
concurrent clips: 1
actions: ['Event_SetDemoPaletteForTimeline', 'Event_SetDemoPaletteTransitionForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#44, concurrent=0)
               duration: 411.0
               DemoPaletteName: Dm_TimeTemple_0135_C01
               IsWaitEnd: true
[    411.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#44, concurrent=0)
[    411.0] E PostProcessingActor[2] - EventOverwriteSceneShadingParams (#0, concurrent=0)
               duration: 100.0
               BakeLightLuminanceRatio: 0.20399999618530273
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[    411.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#45, concurrent=0)
               duration: 228.0
               DemoPaletteName: Dm_TimeTemple_0135_C02
               IsWaitEnd: true
[    511.0] L PostProcessingActor[2] - EventOverwriteSceneShadingParams (#0, concurrent=0)
[    639.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#45, concurrent=0)
[    639.0] E PostProcessingActor[2] - EventOverwriteSceneShadingParams (#1, concurrent=0)
               duration: 100.0
               BakeLightLuminanceRatio: 0.21799999475479126
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[    639.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#46, concurrent=0)
               duration: 367.0
               DemoPaletteName: Dm_TimeTemple_0135_C03
               IsWaitEnd: true
[    739.0] L PostProcessingActor[2] - EventOverwriteSceneShadingParams (#1, concurrent=0)
[   1006.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#46, concurrent=0)
[   1006.0] E PostProcessingActor[2] - EventOverwriteSceneShadingParams (#2, concurrent=0)
               duration: 50.0
               BakeLightLuminanceRatio: 0.37599998712539673
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   1006.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#47, concurrent=0)
               duration: 87.0
               DemoPaletteName: Dm_TimeTemple_0135_C04
               IsWaitEnd: true
[   1056.0] L PostProcessingActor[2] - EventOverwriteSceneShadingParams (#2, concurrent=0)
[   1093.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#47, concurrent=0)
[   1093.0] E PostProcessingActor[2] - EventOverwriteSceneShadingParams (#3, concurrent=0)
               duration: 40.0
               BakeLightLuminanceRatio: 0.41999998688697815
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   1093.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#48, concurrent=0)
               duration: 50.0
               DemoPaletteName: Dm_TimeTemple_0135_C05
               IsWaitEnd: true
[   1133.0] L PostProcessingActor[2] - EventOverwriteSceneShadingParams (#3, concurrent=0)
[   1143.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#48, concurrent=0)
[   1143.0] E PostProcessingActor[2] - EventOverwriteSceneShadingParams (#4, concurrent=0)
               duration: 30.0
               BakeLightLuminanceRatio: 0.17599999904632568
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   1143.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#49, concurrent=0)
               duration: 9.0
               DemoPaletteName: Dm_TimeTemple_0135_C06
               IsWaitEnd: true
[   1152.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#49, concurrent=0)
[   1152.0] E EventWorldManagerController - Event_SetDemoPaletteTransitionForTimeline (#50, concurrent=0)
               duration: 23.0
               CurrDemoPaletteName: Dm_TimeTemple_0135_C06_50
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_TimeTemple_0135_C06
               RateEnd: 1.0
               RateFrame: 23.0
               RateStart: 0.0
[   1173.0] L PostProcessingActor[2] - EventOverwriteSceneShadingParams (#4, concurrent=0)
[   1175.0] L EventWorldManagerController - Event_SetDemoPaletteTransitionForTimeline (#50, concurrent=0)
[   1175.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#51, concurrent=0)
               duration: 14.0
               DemoPaletteName: Dm_TimeTemple_0135_C06_50
               IsWaitEnd: true
[   1189.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#51, concurrent=0)
[   1189.0] E PostProcessingActor[2] - EventOverwriteSceneShadingParams (#5, concurrent=0)
               duration: 30.0
               BakeLightLuminanceRatio: 0.19200000166893005
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   1189.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#52, concurrent=0)
               duration: 272.0
               DemoPaletteName: Dm_TimeTemple_0135_C07
               IsWaitEnd: true
[   1198.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#40, concurrent=0)
               duration: 25.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_Bofuhn
[   1219.0] L PostProcessingActor[2] - EventOverwriteSceneShadingParams (#5, concurrent=0)
[   1223.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#40, concurrent=0)
[   1461.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#52, concurrent=0)
[   1461.0] E PostProcessingActor[2] - EventOverwriteSceneShadingParams (#6, concurrent=0)
               duration: 50.0
               BakeLightLuminanceRatio: 0.34200000762939453
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   1461.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#53, concurrent=0)
               duration: 243.0
               DemoPaletteName: Dm_TimeTemple_0135_C08
               IsWaitEnd: true
[   1511.0] L PostProcessingActor[2] - EventOverwriteSceneShadingParams (#6, concurrent=0)
[   1704.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#53, concurrent=0)
[   1704.0] E PostProcessingActor[2] - EventOverwriteSceneShadingParams (#7, concurrent=0)
               duration: 50.0
               BakeLightLuminanceRatio: 0.3409999907016754
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   1704.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#54, concurrent=0)
               duration: 295.0
               DemoPaletteName: Dm_TimeTemple_0135_C09
               IsWaitEnd: true
[   1754.0] L PostProcessingActor[2] - EventOverwriteSceneShadingParams (#7, concurrent=0)
[   1999.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#54, concurrent=0)
[   1999.0] E PostProcessingActor[2] - EventOverwriteSceneShadingParams (#8, concurrent=0)
               duration: 50.0
               BakeLightLuminanceRatio: 0.33219999074935913
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   1999.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#55, concurrent=0)
               duration: 395.0
               DemoPaletteName: Dm_TimeTemple_0135_C10
               IsWaitEnd: true
[   2049.0] L PostProcessingActor[2] - EventOverwriteSceneShadingParams (#8, concurrent=0)
[   2394.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#55, concurrent=0)
[   2394.0] E PostProcessingActor[2] - EventOverwriteSceneShadingParams (#9, concurrent=0)
               duration: 50.0
               BakeLightLuminanceRatio: 0.36000001430511475
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   2394.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#56, concurrent=0)
               duration: 255.0
               DemoPaletteName: Dm_TimeTemple_0135_C11
               IsWaitEnd: true
[   2444.0] L PostProcessingActor[2] - EventOverwriteSceneShadingParams (#9, concurrent=0)
[   2649.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#56, concurrent=0)
[   2649.0] E PostProcessingActor[2] - EventOverwriteSceneShadingParams (#10, concurrent=0)
               duration: 50.0
               BakeLightLuminanceRatio: 0.29899999499320984
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   2649.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#57, concurrent=0)
               duration: 201.0
               DemoPaletteName: Dm_TimeTemple_0135_C12
               IsWaitEnd: true
[   2699.0] L PostProcessingActor[2] - EventOverwriteSceneShadingParams (#10, concurrent=0)
[   2850.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#57, concurrent=0)
[   2850.0] E PostProcessingActor[2] - EventOverwriteSceneShadingParams (#11, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.29600000381469727
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   2850.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#58, concurrent=0)
               duration: 10.0
               DemoPaletteName: Dm_TimeTemple_0135_C13
               IsWaitEnd: true
[   2860.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#58, concurrent=0)
[   2860.0] E EventWorldManagerController - Event_SetDemoPaletteTransitionForTimeline (#59, concurrent=0)
               duration: 9.0
               CurrDemoPaletteName: Dm_TimeTemple_0135_C13_50
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_TimeTemple_0135_C13
               RateEnd: 1.0
               RateFrame: 1.0
               RateStart: 0.0
[   2869.0] L EventWorldManagerController - Event_SetDemoPaletteTransitionForTimeline (#59, concurrent=0)
[   2869.0] E EventWorldManagerController - Event_SetDemoPaletteTransitionForTimeline (#60, concurrent=0)
               duration: 1.0
               CurrDemoPaletteName: Dm_TimeTemple_0135_C13
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_TimeTemple_0135_C13_50
               RateEnd: 1.0
               RateFrame: 1.0
               RateStart: 0.0
[   2870.0] L PostProcessingActor[2] - EventOverwriteSceneShadingParams (#11, concurrent=0)
[   2870.0] L EventWorldManagerController - Event_SetDemoPaletteTransitionForTimeline (#60, concurrent=0)
[   2870.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#61, concurrent=0)
               duration: 8.0
               DemoPaletteName: Dm_TimeTemple_0135_C13
               IsWaitEnd: true
[   2878.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#61, concurrent=0)
[   2878.0] E PostProcessingActor[2] - EventOverwriteSceneShadingParams (#12, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.31700000166893005
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   2878.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#62, concurrent=0)
               duration: 117.0
               DemoPaletteName: Dm_TimeTemple_0135_C14
               IsWaitEnd: true
[   2898.0] L PostProcessingActor[2] - EventOverwriteSceneShadingParams (#12, concurrent=0)
[   2995.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#62, concurrent=0)
[   2995.0] E PostProcessingActor[2] - EventOverwriteSceneShadingParams (#13, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.34299999475479126
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   2995.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#63, concurrent=0)
               duration: 63.0
               DemoPaletteName: Dm_TimeTemple_0135_C15
               IsWaitEnd: true
[   3015.0] L PostProcessingActor[2] - EventOverwriteSceneShadingParams (#13, concurrent=0)
[   3058.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#63, concurrent=0)
[   3058.0] E PostProcessingActor[2] - EventOverwriteSceneShadingParams (#14, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.3319999873638153
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   3058.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#64, concurrent=0)
               duration: 92.0
               DemoPaletteName: Dm_TimeTemple_0135_C16
               IsWaitEnd: true
[   3078.0] L PostProcessingActor[2] - EventOverwriteSceneShadingParams (#14, concurrent=0)
[   3150.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#64, concurrent=0)
[   3150.0] E PostProcessingActor[2] - EventOverwriteSceneShadingParams (#15, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.2980000078678131
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   3150.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#65, concurrent=0)
               duration: 60.0
               DemoPaletteName: Dm_TimeTemple_0135_C17
               IsWaitEnd: true
[   3170.0] L PostProcessingActor[2] - EventOverwriteSceneShadingParams (#15, concurrent=0)
[   3210.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#65, concurrent=0)
[   3210.0] E PostProcessingActor[2] - EventOverwriteSceneShadingParams (#16, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.30000001192092896
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   3210.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#66, concurrent=0)
               duration: 37.0
               DemoPaletteName: Dm_TimeTemple_0135_C18
               IsWaitEnd: true
[   3230.0] L PostProcessingActor[2] - EventOverwriteSceneShadingParams (#16, concurrent=0)
[   3247.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#66, concurrent=0)
[   3247.0] E PostProcessingActor[2] - EventOverwriteSceneShadingParams (#17, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.19099999964237213
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   3247.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#67, concurrent=0)
               duration: 268.0
               DemoPaletteName: Dm_TimeTemple_0135_C19
               IsWaitEnd: true
[   3267.0] L PostProcessingActor[2] - EventOverwriteSceneShadingParams (#17, concurrent=0)
[   3515.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#67, concurrent=0)
[   3515.0] E PostProcessingActor[2] - EventOverwriteSceneShadingParams (#18, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.32600000500679016
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   3515.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#41, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_GataGata
[   3515.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#68, concurrent=0)
               duration: 305.0
               DemoPaletteName: Dm_TimeTemple_0135_C20
               IsWaitEnd: true
[   3527.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#41, concurrent=0)
[   3527.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#42, concurrent=0)
               duration: 293.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_BuBuBu
[   3535.0] L PostProcessingActor[2] - EventOverwriteSceneShadingParams (#18, concurrent=0)
[   3820.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#42, concurrent=0)
[   3820.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#68, concurrent=0)
[   3820.0] E PostProcessingActor[2] - EventOverwriteSceneShadingParams (#19, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.20800000429153442
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 0.9997000098228455
[   3820.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#69, concurrent=0)
               duration: 235.0
               DemoPaletteName: Dm_TimeTemple_0135_C21
               IsWaitEnd: true
[   3840.0] L PostProcessingActor[2] - EventOverwriteSceneShadingParams (#19, concurrent=0)
[   4055.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#69, concurrent=0)
[   4055.0] E PostProcessingActor[2] - EventOverwriteSceneShadingParams (#20, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.2669999897480011
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   4055.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#70, concurrent=0)
               duration: 212.0
               DemoPaletteName: Dm_TimeTemple_0135_C22
               IsWaitEnd: true
[   4075.0] L PostProcessingActor[2] - EventOverwriteSceneShadingParams (#20, concurrent=0)
[   4267.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#70, concurrent=0)
[   4267.0] E PostProcessingActor[2] - EventOverwriteSceneShadingParams (#21, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.375
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   4267.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#71, concurrent=0)
               duration: 193.0
               DemoPaletteName: Dm_TimeTemple_0135_C23
               IsWaitEnd: true
[   4287.0] L PostProcessingActor[2] - EventOverwriteSceneShadingParams (#21, concurrent=0)
[   4460.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#71, concurrent=0)
[   4460.0] E PostProcessingActor[2] - EventOverwriteSceneShadingParams (#22, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.12999999523162842
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   4460.0] E PostProcessingActor[1] - EventEditLocationalLight (#31, concurrent=1)
               duration: 299.0
               Color:
               - 2.646914005279541
               - 0.2978299856185913
               - 0.2978299856185913
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: tri_Light
               LocationalLightCreateType: 0
               SourceRadius: 1.9520000219345093
[   4460.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#72, concurrent=0)
               duration: 299.0
               DemoPaletteName: Dm_TimeTemple_0135_C24
               IsWaitEnd: true
[   4480.0] L PostProcessingActor[2] - EventOverwriteSceneShadingParams (#22, concurrent=0)
[   4759.0] L PostProcessingActor[1] - EventEditLocationalLight (#31, concurrent=1)
[   4759.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#72, concurrent=0)
[   4759.0] E PostProcessingActor[2] - EventOverwriteSceneShadingParams (#23, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.06499999761581421
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   4759.0] E PostProcessingActor[1] - EventCreateLocationalLightToEventCenter (#30, concurrent=0)
               duration: 268.0
               Direction:
               - 0.0
               - -1.0
               - 0.0
               InnerAngle: 15.0
               IsIgnoreRot: false
               LightHash: tri_Light
               LightType: 0
               OuterAngle: 45.0
               PositionOffset:
               - 33.12300109863281
               - 6.52400016784668
               - 1.347000002861023
[   4759.0] E PostProcessingActor[1] - EventEditLocationalLight (#32, concurrent=1)
               duration: 268.0
               Color:
               - 2.646914005279541
               - 0.2978299856185913
               - 0.2978299856185913
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 10000.0
               IsFrameTransition: false
               LightHash: tri_Light
               LocationalLightCreateType: 0
               SourceRadius: 6.730000019073486
[   4759.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#73, concurrent=0)
               duration: 268.0
               DemoPaletteName: Dm_TimeTemple_0135_C25
               IsWaitEnd: true
[   4779.0] L PostProcessingActor[2] - EventOverwriteSceneShadingParams (#23, concurrent=0)
[   5027.0] L PostProcessingActor[1] - EventCreateLocationalLightToEventCenter (#30, concurrent=0)
[   5027.0] L PostProcessingActor[1] - EventEditLocationalLight (#32, concurrent=1)
[   5027.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#73, concurrent=0)
[   5027.0] E PostProcessingActor[2] - EventOverwriteSceneShadingParams (#24, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.25
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   5027.0] E PostProcessingActor[1] - EventEditLocationalLight (#33, concurrent=1)
               duration: 52.0
               Color:
               - 2.646914005279541
               - 0.2978299856185913
               - 0.2978299856185913
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: tri_Light
               LocationalLightCreateType: 0
               SourceRadius: 1.9520000219345093
[   5027.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#74, concurrent=0)
               duration: 52.0
               DemoPaletteName: Dm_TimeTemple_0135_C26
               IsWaitEnd: true
[   5047.0] L PostProcessingActor[2] - EventOverwriteSceneShadingParams (#24, concurrent=0)
[   5079.0] L PostProcessingActor[1] - EventEditLocationalLight (#33, concurrent=1)
[   5079.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#74, concurrent=0)
[   5079.0] E PostProcessingActor[2] - EventOverwriteSceneShadingParams (#25, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.09399999678134918
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   5079.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#75, concurrent=0)
               duration: 225.0
               DemoPaletteName: Dm_TimeTemple_0135_C27
               IsWaitEnd: true
[   5099.0] L PostProcessingActor[2] - EventOverwriteSceneShadingParams (#25, concurrent=0)
[   5128.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#34, concurrent=0)
               duration: 50.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Doon
[   5178.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#34, concurrent=0)
[   5224.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#35, concurrent=0)
               duration: 50.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Small_Dohoon
[   5274.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#35, concurrent=0)
[   5290.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#36, concurrent=0)
               duration: 50.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Doon
[   5304.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#75, concurrent=0)
[   5304.0] E PostProcessingActor[2] - EventOverwriteSceneShadingParams (#26, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.4519999921321869
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   5304.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#76, concurrent=0)
               duration: 385.0
               DemoPaletteName: Dm_TimeTemple_0135_C28
               IsWaitEnd: true
[   5324.0] L PostProcessingActor[2] - EventOverwriteSceneShadingParams (#26, concurrent=0)
[   5340.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#36, concurrent=0)
[   5375.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#37, concurrent=0)
               duration: 50.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Doon
[   5425.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#37, concurrent=0)
[   5488.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#38, concurrent=0)
               duration: 50.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Dooon
[   5538.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#38, concurrent=0)
[   5644.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#39, concurrent=0)
               duration: 50.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Small_Dohoon
[   5689.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#76, concurrent=0)
[   5689.0] E PostProcessingActor[2] - EventOverwriteSceneShadingParams (#27, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.3580000102519989
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 0.996999979019165
[   5689.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#77, concurrent=0)
               duration: 168.0
               DemoPaletteName: Dm_TimeTemple_0135_C29
               IsWaitEnd: true
[   5694.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#39, concurrent=0)
[   5709.0] L PostProcessingActor[2] - EventOverwriteSceneShadingParams (#27, concurrent=0)
[   5857.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#77, concurrent=0)
[   5857.0] E PostProcessingActor[2] - EventOverwriteSceneShadingParams (#28, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.24300000071525574
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   5857.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#78, concurrent=0)
               duration: 577.0
               DemoPaletteName: Dm_TimeTemple_0135_C30
               IsWaitEnd: true
[   5877.0] L PostProcessingActor[2] - EventOverwriteSceneShadingParams (#28, concurrent=0)
[   6214.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#43, concurrent=0)
               duration: 60.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Biyoon
[   6274.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#43, concurrent=0)
[   6434.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#78, concurrent=0)
[   6434.0] E PostProcessingActor[2] - EventOverwriteSceneShadingParams (#29, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.2980000078678131
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   6434.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#79, concurrent=0)
               duration: 335.0
               DemoPaletteName: Dm_TimeTemple_0135_C31
               IsWaitEnd: true
[   6454.0] L PostProcessingActor[2] - EventOverwriteSceneShadingParams (#29, concurrent=0)
[   6769.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#79, concurrent=0)
