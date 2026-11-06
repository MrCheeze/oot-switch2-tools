-------- Event timeline: Dm_TimeTemple_0110_Env --------
actors: 6
clips: 60
oneshots: 0
cuts: 1
duration: 6734.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: PostProcessingActor[3]
concurrent clips: 1
actions: ['EventOverwriteSceneShadingParams']
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

Actor: EventWorldManagerController[1]
concurrent clips: 1
actions: ['Event_SetWindForTimeline', 'Event_SetWindTransitionForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#33, concurrent=0)
               duration: 291.0
               DemoPaletteName: Dm_TimeTemple_0110_C01
               IsWaitEnd: true
[    191.0] E PostProcessingActor[2] - EventEditLocationalLight (#21, concurrent=1)
               duration: 100.0
               Color:
               - 0.9014149904251099
               - 1.0402079820632935
               - 1.05137300491333
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: Dm_TimeTemple_0110_03
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    291.0] L PostProcessingActor[2] - EventEditLocationalLight (#21, concurrent=1)
[    291.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#33, concurrent=0)
[    291.0] E PostProcessingActor[3] - EventOverwriteSceneShadingParams (#0, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.06629999727010727
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[    291.0] E PostProcessingActor[2] - EventCreateLocationalLightToEventCenter (#20, concurrent=0)
               duration: 261.0
               Direction:
               - 0.9705309867858887
               - 0.21199999749660492
               - 0.11456400156021118
               InnerAngle: 17.0
               IsIgnoreRot: false
               LightHash: Dm_TimeTemple_0110_03
               LightType: 1
               OuterAngle: 90.0
               PositionOffset:
               - 32.2400016784668
               - 11.491000175476074
               - -0.20999999344348907
[    291.0] E PostProcessingActor[2] - EventEditLocationalLight (#22, concurrent=1)
               duration: 261.0
               Color:
               - 0.9014149904251099
               - 1.0402079820632935
               - 1.05137300491333
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 5800.0
               IsFrameTransition: false
               LightHash: Dm_TimeTemple_0110_03
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    291.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#34, concurrent=0)
               duration: 261.0
               DemoPaletteName: Dm_TimeTemple_0110_C02
               IsWaitEnd: true
[    311.0] L PostProcessingActor[3] - EventOverwriteSceneShadingParams (#0, concurrent=0)
[    552.0] L PostProcessingActor[2] - EventCreateLocationalLightToEventCenter (#20, concurrent=0)
[    552.0] L PostProcessingActor[2] - EventEditLocationalLight (#22, concurrent=1)
[    552.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#34, concurrent=0)
[    552.0] E PostProcessingActor[3] - EventOverwriteSceneShadingParams (#1, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.11999999731779099
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[    552.0] E PostProcessingActor[2] - EventEditLocationalLight (#23, concurrent=1)
               duration: 100.0
               Color:
               - 0.9014149904251099
               - 1.0402079820632935
               - 1.05137300491333
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: Dm_TimeTemple_0110_03
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    552.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#35, concurrent=0)
               duration: 187.0
               DemoPaletteName: Dm_TimeTemple_0110_C03
               IsWaitEnd: true
[    572.0] L PostProcessingActor[3] - EventOverwriteSceneShadingParams (#1, concurrent=0)
[    652.0] L PostProcessingActor[2] - EventEditLocationalLight (#23, concurrent=1)
[    739.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#35, concurrent=0)
[    739.0] E PostProcessingActor[3] - EventOverwriteSceneShadingParams (#2, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.12200000137090683
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[    739.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#36, concurrent=0)
               duration: 165.0
               DemoPaletteName: Dm_TimeTemple_0110_C04
               IsWaitEnd: true
[    759.0] L PostProcessingActor[3] - EventOverwriteSceneShadingParams (#2, concurrent=0)
[    904.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#36, concurrent=0)
[    904.0] E PostProcessingActor[3] - EventOverwriteSceneShadingParams (#3, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.3100000023841858
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[    904.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#37, concurrent=0)
               duration: 488.0
               DemoPaletteName: Dm_TimeTemple_0110_C05
               IsWaitEnd: true
[    924.0] L PostProcessingActor[3] - EventOverwriteSceneShadingParams (#3, concurrent=0)
[   1392.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#37, concurrent=0)
[   1392.0] E PostProcessingActor[3] - EventOverwriteSceneShadingParams (#4, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.4699999988079071
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 0.9800000190734863
[   1392.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#38, concurrent=0)
               duration: 590.0
               DemoPaletteName: Dm_TimeTemple_0110_C06
               IsWaitEnd: true
[   1412.0] L PostProcessingActor[3] - EventOverwriteSceneShadingParams (#4, concurrent=0)
[   1982.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#38, concurrent=0)
[   1982.0] E PostProcessingActor[3] - EventOverwriteSceneShadingParams (#5, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.1387999951839447
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   1982.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#39, concurrent=0)
               duration: 230.0
               DemoPaletteName: Dm_TimeTemple_0110_C07
               IsWaitEnd: true
[   2002.0] L PostProcessingActor[3] - EventOverwriteSceneShadingParams (#5, concurrent=0)
[   2212.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#39, concurrent=0)
[   2212.0] E PostProcessingActor[3] - EventOverwriteSceneShadingParams (#6, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.10000000149011612
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   2212.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#40, concurrent=0)
               duration: 241.0
               DemoPaletteName: Dm_TimeTemple_0110_C08
               IsWaitEnd: true
[   2232.0] L PostProcessingActor[3] - EventOverwriteSceneShadingParams (#6, concurrent=0)
[   2453.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#40, concurrent=0)
[   2453.0] E PostProcessingActor[3] - EventOverwriteSceneShadingParams (#7, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.15000000596046448
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   2453.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#41, concurrent=0)
               duration: 130.0
               DemoPaletteName: Dm_TimeTemple_0110_C09
               IsWaitEnd: true
[   2473.0] L PostProcessingActor[3] - EventOverwriteSceneShadingParams (#7, concurrent=0)
[   2583.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#41, concurrent=0)
[   2583.0] E PostProcessingActor[3] - EventOverwriteSceneShadingParams (#8, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.17000000178813934
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   2583.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#42, concurrent=0)
               duration: 117.0
               DemoPaletteName: Dm_TimeTemple_0110_C10
               IsWaitEnd: true
[   2603.0] L PostProcessingActor[3] - EventOverwriteSceneShadingParams (#8, concurrent=0)
[   2700.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#42, concurrent=0)
[   2700.0] E PostProcessingActor[3] - EventOverwriteSceneShadingParams (#9, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.2669999897480011
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   2700.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#43, concurrent=0)
               duration: 88.0
               DemoPaletteName: Dm_TimeTemple_0110_C11
               IsWaitEnd: true
[   2720.0] L PostProcessingActor[3] - EventOverwriteSceneShadingParams (#9, concurrent=0)
[   2788.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#43, concurrent=0)
[   2788.0] E PostProcessingActor[3] - EventOverwriteSceneShadingParams (#10, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.23000000417232513
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   2788.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#44, concurrent=0)
               duration: 213.0
               DemoPaletteName: Dm_TimeTemple_0110_C12
               IsWaitEnd: true
[   2808.0] L PostProcessingActor[3] - EventOverwriteSceneShadingParams (#10, concurrent=0)
[   2830.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#28, concurrent=0)
               duration: 18.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Doon
[   2848.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#28, concurrent=0)
[   2930.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#29, concurrent=0)
               duration: 17.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Biyoon
[   2947.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#29, concurrent=0)
[   2947.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#30, concurrent=0)
               duration: 48.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_GataGata
[   2995.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#30, concurrent=0)
[   3001.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#44, concurrent=0)
[   3001.0] E PostProcessingActor[3] - EventOverwriteSceneShadingParams (#11, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.3700000047683716
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 0.9950000047683716
[   3001.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#45, concurrent=0)
               duration: 96.0
               DemoPaletteName: Dm_TimeTemple_0110_C13
               IsWaitEnd: true
[   3021.0] L PostProcessingActor[3] - EventOverwriteSceneShadingParams (#11, concurrent=0)
[   3097.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#45, concurrent=0)
[   3097.0] E PostProcessingActor[3] - EventOverwriteSceneShadingParams (#12, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.11599999666213989
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   3097.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#46, concurrent=0)
               duration: 357.0
               DemoPaletteName: Dm_TimeTemple_0110_C14
               IsWaitEnd: true
[   3117.0] L PostProcessingActor[3] - EventOverwriteSceneShadingParams (#12, concurrent=0)
[   3454.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#46, concurrent=0)
[   3454.0] E PostProcessingActor[3] - EventOverwriteSceneShadingParams (#13, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.17299999296665192
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   3454.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#47, concurrent=0)
               duration: 169.0
               DemoPaletteName: Dm_TimeTemple_0110_C15
               IsWaitEnd: true
[   3467.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#31, concurrent=0)
               duration: 15.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_Biyoon
[   3474.0] L PostProcessingActor[3] - EventOverwriteSceneShadingParams (#13, concurrent=0)
[   3482.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#31, concurrent=0)
[   3482.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#32, concurrent=0)
               duration: 141.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_GataGata
[   3623.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#32, concurrent=0)
[   3623.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#47, concurrent=0)
[   3623.0] E PostProcessingActor[3] - EventOverwriteSceneShadingParams (#14, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.4560000002384186
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 0.9789999723434448
[   3623.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#48, concurrent=0)
               duration: 177.0
               DemoPaletteName: Dm_TimeTemple_0110_C16
               IsWaitEnd: true
[   3643.0] L PostProcessingActor[3] - EventOverwriteSceneShadingParams (#14, concurrent=0)
[   3800.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#48, concurrent=0)
[   3800.0] E PostProcessingActor[3] - EventOverwriteSceneShadingParams (#15, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.26499998569488525
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   3800.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#49, concurrent=0)
               duration: 99.0
               DemoPaletteName: Dm_TimeTemple_0110_C17
               IsWaitEnd: true
[   3800.0] E EventWorldManagerController[1] - Event_SetWindForTimeline (#55, concurrent=0)
               duration: 260.0
               Azimuth: 0.0
               Elevation: 0.0
               IsImmTrans: false
               IsWaitEnd: true
               Speed: 3.0
[   3820.0] L PostProcessingActor[3] - EventOverwriteSceneShadingParams (#15, concurrent=0)
[   3899.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#49, concurrent=0)
[   3899.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#50, concurrent=0)
               duration: 300.0
               CurrDemoPaletteName: Dm_TimeTemple_0110_C18
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_TimeTemple_0110_C17
               RateEnd: 1.0
               RateFrame: 300.0
               RateStart: 0.0
[   4060.0] L EventWorldManagerController[1] - Event_SetWindForTimeline (#55, concurrent=0)
[   4060.0] E EventWorldManagerController[1] - Event_SetWindTransitionForTimeline (#56, concurrent=0)
               duration: 125.0
               Azimuth: 0.0
               Elevation: 0.0
               IsWaitEnd: true
               SpeedEnd: 0.0
               SpeedStart: 3.0
               TransitionFrame: 125.0
[   4185.0] L EventWorldManagerController[1] - Event_SetWindTransitionForTimeline (#56, concurrent=0)
[   4185.0] E EventWorldManagerController[1] - Event_SetWindForTimeline (#57, concurrent=0)
               duration: 563.0
               Azimuth: 0.0
               Elevation: 0.0
               IsImmTrans: false
               IsWaitEnd: true
               Speed: 0.0
[   4199.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#50, concurrent=0)
[   4199.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#51, concurrent=0)
               duration: 549.0
               DemoPaletteName: Dm_TimeTemple_0110_C18
               IsWaitEnd: true
[   4374.0] E PostProcessingActor[3] - EventOverwriteSceneShadingParams (#16, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.2409999966621399
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   4394.0] L PostProcessingActor[3] - EventOverwriteSceneShadingParams (#16, concurrent=0)
[   4648.0] E PostProcessingActor[1] - EventEditLocationalLight (#25, concurrent=1)
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
               LightHash: Dm_TimeTemple_0110_01
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   4748.0] L PostProcessingActor[1] - EventEditLocationalLight (#25, concurrent=1)
[   4748.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#51, concurrent=0)
[   4748.0] L EventWorldManagerController[1] - Event_SetWindForTimeline (#57, concurrent=0)
[   4748.0] E PostProcessingActor[3] - EventOverwriteSceneShadingParams (#17, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.3499999940395355
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   4748.0] E PostProcessingActor[1] - EventCreateLocationalLightToEventCenter (#24, concurrent=0)
               duration: 482.0
               Direction:
               - -0.8897010087966919
               - 0.01899999938905239
               - -0.4561469852924347
               InnerAngle: 15.0
               IsIgnoreRot: false
               LightHash: Dm_TimeTemple_0110_01
               LightType: 1
               OuterAngle: 45.0
               PositionOffset:
               - -0.16899999976158142
               - 1.1790000200271606
               - 1.7669999599456787
[   4748.0] E PostProcessingActor[1] - EventEditLocationalLight (#26, concurrent=1)
               duration: 482.0
               Color:
               - 0.8452659845352173
               - 0.9959380030632019
               - 1.424833059310913
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 6203.7041015625
               IsFrameTransition: false
               LightHash: Dm_TimeTemple_0110_01
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   4748.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#52, concurrent=0)
               duration: 482.0
               DemoPaletteName: Dm_TimeTemple_0110_C19
               IsWaitEnd: true
[   4748.0] E EventWorldManagerController[1] - Event_SetWindTransitionForTimeline (#58, concurrent=0)
               duration: 100.0
               Azimuth: 0.0
               Elevation: 0.0
               IsWaitEnd: true
               SpeedEnd: 3.0
               SpeedStart: 0.0
               TransitionFrame: 100.0
[   4768.0] L PostProcessingActor[3] - EventOverwriteSceneShadingParams (#17, concurrent=0)
[   4848.0] L EventWorldManagerController[1] - Event_SetWindTransitionForTimeline (#58, concurrent=0)
[   4848.0] E EventWorldManagerController[1] - Event_SetWindForTimeline (#59, concurrent=0)
               duration: 382.0
               Azimuth: 0.0
               Elevation: 0.0
               IsImmTrans: false
               IsWaitEnd: true
               Speed: 3.0
[   5230.0] L PostProcessingActor[1] - EventCreateLocationalLightToEventCenter (#24, concurrent=0)
[   5230.0] L PostProcessingActor[1] - EventEditLocationalLight (#26, concurrent=1)
[   5230.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#52, concurrent=0)
[   5230.0] L EventWorldManagerController[1] - Event_SetWindForTimeline (#59, concurrent=0)
[   5230.0] E PostProcessingActor[3] - EventOverwriteSceneShadingParams (#18, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.2800000011920929
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   5230.0] E PostProcessingActor[1] - EventEditLocationalLight (#27, concurrent=1)
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
               LightHash: Dm_TimeTemple_0110_01
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   5230.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#53, concurrent=0)
               duration: 670.0
               DemoPaletteName: Dm_TimeTemple_0110_C20
               IsWaitEnd: true
[   5250.0] L PostProcessingActor[3] - EventOverwriteSceneShadingParams (#18, concurrent=0)
[   5330.0] L PostProcessingActor[1] - EventEditLocationalLight (#27, concurrent=1)
[   5900.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#53, concurrent=0)
[   5900.0] E PostProcessingActor[3] - EventOverwriteSceneShadingParams (#19, concurrent=0)
               duration: 20.0
               BakeLightLuminanceRatio: 0.2680000066757202
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   5900.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#54, concurrent=0)
               duration: 834.0
               DemoPaletteName: Dm_TimeTemple_0110_C21
               IsWaitEnd: true
[   5920.0] L PostProcessingActor[3] - EventOverwriteSceneShadingParams (#19, concurrent=0)
[   6734.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#54, concurrent=0)
