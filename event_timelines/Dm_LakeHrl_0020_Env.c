-------- Event timeline: Dm_LakeHrl_0020_Env --------
actors: 10
clips: 65
oneshots: 0
cuts: 1
duration: 6231.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: TerrainSystemActor[0]
concurrent clips: 1
actions: ['EventTerrainCalcCenter']
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

Actor: PostProcessingActor[0]
concurrent clips: 3
actions: ['EventEditLocationalLight', 'EventCreateLocationalLightToEventCenter']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[3]
concurrent clips: 1
actions: ['EventOverwriteSceneShadingParams']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventWorldManagerController[1]
concurrent clips: 1
actions: ['Event_SetDisableLensFlareForTimeLine']
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
actions: ['Event_SetDemoPaletteForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventWorldManagerController[0]
concurrent clips: 1
actions: ['Event_SetTimeTransitionForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventWorldManagerController[1] - Event_SetDisableLensFlareForTimeLine (#26, concurrent=0)
               duration: 1452.0
               IsWaitEnd: true
[      0.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#40, concurrent=0)
               duration: 410.0
               DemoPaletteName: Dm_LakeHrl_0020_C01
               IsWaitEnd: true
[      0.0] E EventWorldManagerController[0] - Event_SetTimeTransitionForTimeline (#60, concurrent=0)
               duration: 410.0
               DurationDay: 0
               FromHour: 4
               FromMin: 40
               IsFromNow: false
               IsTimeReverse: false
               IsToNow: false
               IsWaitEnd: true
               ToHour: 5
               ToMin: 40
               TransitionFrame: 410.0
[    410.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#40, concurrent=0)
[    410.0] L EventWorldManagerController[0] - Event_SetTimeTransitionForTimeline (#60, concurrent=0)
[    410.0] E TerrainSystemActor[0] - EventTerrainCalcCenter (#0, concurrent=0)
               duration: 162.0
               IsWaitEnd: true
               Position:
               - -149.0
               - 125.0
               - 458.0
               SceneName: HyruleField_02
[    410.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#41, concurrent=0)
               duration: 162.0
               DemoPaletteName: Dm_LakeHrl_0020_C02
               IsWaitEnd: true
[    410.0] E EventWorldManagerController[0] - Event_SetTimeTransitionForTimeline (#61, concurrent=0)
               duration: 552.0
               DurationDay: 0
               FromHour: 5
               FromMin: 50
               IsFromNow: false
               IsTimeReverse: false
               IsToNow: false
               IsWaitEnd: true
               ToHour: 5
               ToMin: 50
               TransitionFrame: 500.0
[    572.0] L TerrainSystemActor[0] - EventTerrainCalcCenter (#0, concurrent=0)
[    572.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#41, concurrent=0)
[    572.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#42, concurrent=0)
               duration: 390.0
               DemoPaletteName: Dm_LakeHrl_0020_C03
               IsWaitEnd: true
[    662.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#33, concurrent=0)
               duration: 16.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Small_GataGata
[    678.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#33, concurrent=0)
[    678.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#34, concurrent=0)
               duration: 24.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_GataGata
[    702.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#34, concurrent=0)
[    702.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#35, concurrent=0)
               duration: 131.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Small_GataGata
[    708.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#27, concurrent=0)
               duration: 15.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Don
[    723.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#27, concurrent=0)
[    739.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#28, concurrent=0)
               duration: 13.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Don
[    752.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#28, concurrent=0)
[    759.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#29, concurrent=0)
               duration: 13.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Don
[    772.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#29, concurrent=0)
[    788.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#30, concurrent=0)
               duration: 15.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Don
[    803.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#30, concurrent=0)
[    833.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#35, concurrent=0)
[    914.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#31, concurrent=0)
               duration: 50.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Dohoon
[    962.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#42, concurrent=0)
[    962.0] L EventWorldManagerController[0] - Event_SetTimeTransitionForTimeline (#61, concurrent=0)
[    962.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#43, concurrent=0)
               duration: 64.0
               DemoPaletteName: Dm_LakeHrl_0020_C04
               IsWaitEnd: true
[    962.0] E EventWorldManagerController[0] - Event_SetTimeTransitionForTimeline (#62, concurrent=0)
               duration: 3629.0
               DurationDay: 0
               FromHour: 5
               FromMin: 50
               IsFromNow: false
               IsTimeReverse: false
               IsToNow: false
               IsWaitEnd: true
               ToHour: 5
               ToMin: 50
               TransitionFrame: 0.0
[    964.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#31, concurrent=0)
[   1026.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#43, concurrent=0)
[   1026.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#36, concurrent=0)
               duration: 141.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_GataGata
[   1026.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#44, concurrent=0)
               duration: 426.0
               DemoPaletteName: Dm_LakeHrl_0020_C05
               IsWaitEnd: true
[   1151.0] E PostProcessingActor[0] - EventEditLocationalLight (#12, concurrent=1)
               duration: 301.0
               Color:
               - 1.5299999713897705
               - 0.7799999713897705
               - 0.75
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 0
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: seekAddLtA
               LocationalLightCreateType: 0
               SourceRadius: 0.5
[   1167.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#36, concurrent=0)
[   1167.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#37, concurrent=0)
               duration: 32.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_GataGata
[   1199.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#37, concurrent=0)
[   1199.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#38, concurrent=0)
               duration: 33.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Small_GataGata
[   1232.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#38, concurrent=0)
[   1325.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#32, concurrent=0)
               duration: 50.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Dooon
[   1375.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#32, concurrent=0)
[   1452.0] L PostProcessingActor[0] - EventEditLocationalLight (#12, concurrent=1)
[   1452.0] L EventWorldManagerController[1] - Event_SetDisableLensFlareForTimeLine (#26, concurrent=0)
[   1452.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#44, concurrent=0)
[   1452.0] E PostProcessingActor[0] - EventCreateLocationalLightToEventCenter (#9, concurrent=0)
               duration: 397.0
               Direction:
               - -0.9570000171661377
               - -0.210999995470047
               - -0.009999999776482582
               InnerAngle: 5.513999938964844
               IsIgnoreRot: false
               LightHash: seekAddLtA
               LightType: 1
               OuterAngle: 22.465999603271484
               PositionOffset:
               - 11.621000289916992
               - 2.6679999828338623
               - -1.434999942779541
[   1452.0] E PostProcessingActor[0] - EventEditLocationalLight (#13, concurrent=1)
               duration: 397.0
               Color:
               - 1.5299999713897705
               - 0.7799999713897705
               - 0.75
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 0
               Intensity: 12000.0
               IsFrameTransition: false
               LightHash: seekAddLtA
               LocationalLightCreateType: 0
               SourceRadius: 0.5
[   1452.0] E PostProcessingActor[0] - EventEditLocationalLight (#21, concurrent=2)
               duration: 397.0
               Color:
               - 1.5299999713897705
               - 0.7799999713897705
               - 0.75
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 0
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: seekAddLtB
               LocationalLightCreateType: 0
               SourceRadius: 0.5
[   1452.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#45, concurrent=0)
               duration: 397.0
               DemoPaletteName: Dm_LakeHrl_0020_C06
               IsWaitEnd: true
[   1849.0] L PostProcessingActor[0] - EventCreateLocationalLightToEventCenter (#9, concurrent=0)
[   1849.0] L PostProcessingActor[0] - EventEditLocationalLight (#13, concurrent=1)
[   1849.0] L PostProcessingActor[0] - EventEditLocationalLight (#21, concurrent=2)
[   1849.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#45, concurrent=0)
[   1849.0] E PostProcessingActor[0] - EventCreateLocationalLightToEventCenter (#10, concurrent=0)
               duration: 301.0
               Direction:
               - -0.8640000224113464
               - -0.49900001287460327
               - -0.06400000303983688
               InnerAngle: 5.513999938964844
               IsIgnoreRot: false
               LightHash: seekAddLtB
               LightType: 1
               OuterAngle: 22.465999603271484
               PositionOffset:
               - 11.621000289916992
               - 3.5940001010894775
               - -0.8090000152587891
[   1849.0] E PostProcessingActor[0] - EventEditLocationalLight (#14, concurrent=1)
               duration: 301.0
               Color:
               - 1.5299999713897705
               - 0.7799999713897705
               - 0.75
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 0
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: seekAddLtA
               LocationalLightCreateType: 0
               SourceRadius: 0.5
[   1849.0] E PostProcessingActor[0] - EventEditLocationalLight (#22, concurrent=2)
               duration: 301.0
               Color:
               - 1.5299999713897705
               - 0.7799999713897705
               - 0.75
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 0
               Intensity: 17000.0
               IsFrameTransition: false
               LightHash: seekAddLtB
               LocationalLightCreateType: 0
               SourceRadius: 0.5
[   1849.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#46, concurrent=0)
               duration: 301.0
               DemoPaletteName: Dm_LakeHrl_0020_C07
               IsWaitEnd: true
[   2150.0] L PostProcessingActor[0] - EventCreateLocationalLightToEventCenter (#10, concurrent=0)
[   2150.0] L PostProcessingActor[0] - EventEditLocationalLight (#14, concurrent=1)
[   2150.0] L PostProcessingActor[0] - EventEditLocationalLight (#22, concurrent=2)
[   2150.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#46, concurrent=0)
[   2150.0] E PostProcessingActor[0] - EventEditLocationalLight (#23, concurrent=2)
               duration: 301.0
               Color:
               - 1.5299999713897705
               - 0.7799999713897705
               - 0.75
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 0
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: seekAddLtB
               LocationalLightCreateType: 0
               SourceRadius: 0.5
[   2150.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#47, concurrent=0)
               duration: 270.0
               DemoPaletteName: Dm_LakeHrl_0020_C08
               IsWaitEnd: true
[   2420.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#47, concurrent=0)
[   2420.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#48, concurrent=0)
               duration: 240.0
               DemoPaletteName: Dm_LakeHrl_0020_C10
               IsWaitEnd: true
[   2421.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#39, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Piton
[   2433.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#39, concurrent=0)
[   2451.0] L PostProcessingActor[0] - EventEditLocationalLight (#23, concurrent=2)
[   2660.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#48, concurrent=0)
[   2660.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#49, concurrent=0)
               duration: 300.0
               DemoPaletteName: Dm_LakeHrl_0020_C11
               IsWaitEnd: true
[   2960.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#49, concurrent=0)
[   2960.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#50, concurrent=0)
               duration: 390.0
               DemoPaletteName: Dm_LakeHrl_0020_C12
               IsWaitEnd: true
[   3350.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#50, concurrent=0)
[   3350.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#51, concurrent=0)
               duration: 601.0
               DemoPaletteName: Dm_LakeHrl_0020_C13
               IsWaitEnd: true
[   3951.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#51, concurrent=0)
[   3951.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#52, concurrent=0)
               duration: 290.0
               DemoPaletteName: Dm_LakeHrl_0020_C14
               IsWaitEnd: true
[   4241.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#52, concurrent=0)
[   4241.0] E PostProcessingActor[3] - EventOverwriteSceneShadingParams (#24, concurrent=0)
               duration: 350.0
               BakeLightLuminanceRatio: 0.566277027130127
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 0.0
[   4241.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#53, concurrent=0)
               duration: 350.0
               DemoPaletteName: Dm_LakeHrl_0020_C15
               IsWaitEnd: true
[   4591.0] L PostProcessingActor[3] - EventOverwriteSceneShadingParams (#24, concurrent=0)
[   4591.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#53, concurrent=0)
[   4591.0] L EventWorldManagerController[0] - Event_SetTimeTransitionForTimeline (#62, concurrent=0)
[   4591.0] E PostProcessingActor[3] - EventOverwriteSceneShadingParams (#25, concurrent=0)
               duration: 331.0
               BakeLightLuminanceRatio: 0.37070000171661377
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 0.6095349788665771
[   4591.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#54, concurrent=0)
               duration: 331.0
               DemoPaletteName: Dm_LakeHrl_0020_C17
               IsWaitEnd: true
[   4591.0] E EventWorldManagerController[0] - Event_SetTimeTransitionForTimeline (#63, concurrent=0)
               duration: 1259.0
               DurationDay: 0
               FromHour: 5
               FromMin: 45
               IsFromNow: false
               IsTimeReverse: false
               IsToNow: false
               IsWaitEnd: true
               ToHour: 5
               ToMin: 45
               TransitionFrame: 500.0
[   4922.0] L PostProcessingActor[3] - EventOverwriteSceneShadingParams (#25, concurrent=0)
[   4922.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#54, concurrent=0)
[   4922.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#55, concurrent=0)
               duration: 306.0
               DemoPaletteName: Dm_LakeHrl_0020_C18
               IsWaitEnd: true
[   5228.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#55, concurrent=0)
[   5228.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#56, concurrent=0)
               duration: 221.0
               DemoPaletteName: Dm_LakeHrl_0020_C18-05
               IsWaitEnd: true
[   5449.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#56, concurrent=0)
[   5449.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#57, concurrent=0)
               duration: 160.0
               DemoPaletteName: Dm_LakeHrl_0020_C19
               IsWaitEnd: true
[   5609.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#57, concurrent=0)
[   5609.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#58, concurrent=0)
               duration: 241.0
               DemoPaletteName: Dm_LakeHrl_0020_C20
               IsWaitEnd: true
[   5850.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#58, concurrent=0)
[   5850.0] L EventWorldManagerController[0] - Event_SetTimeTransitionForTimeline (#63, concurrent=0)
[   5850.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#59, concurrent=0)
               duration: 381.0
               DemoPaletteName: Dm_LakeHrl_0020_C21
               IsWaitEnd: true
[   5850.0] E EventWorldManagerController[0] - Event_SetTimeTransitionForTimeline (#64, concurrent=0)
               duration: 381.0
               DurationDay: 0
               FromHour: 5
               FromMin: 30
               IsFromNow: false
               IsTimeReverse: false
               IsToNow: false
               IsWaitEnd: true
               ToHour: 5
               ToMin: 30
               TransitionFrame: 0.0
[   6231.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#59, concurrent=0)
[   6231.0] L EventWorldManagerController[0] - Event_SetTimeTransitionForTimeline (#64, concurrent=0)
[   6231.0] E PostProcessingActor[0] - EventEditLocationalLight (#15, concurrent=1)
               duration: 270.0
               Color:
               - 1.5299999713897705
               - 0.7799999713897705
               - 0.75
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 0
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: seekAddLtB
               LocationalLightCreateType: 0
               SourceRadius: 0.5
[   6501.0] L PostProcessingActor[0] - EventEditLocationalLight (#15, concurrent=1)
[   6501.0] E PostProcessingActor[0] - EventEditLocationalLight (#16, concurrent=1)
               duration: 245.0
               Color:
               - 1.5299999713897705
               - 0.7799999713897705
               - 0.75
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 0
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: seekAddLtA
               LocationalLightCreateType: 0
               SourceRadius: 0.5
[   6741.0] E PostProcessingActor[1] - EventEditLocationalLight (#6, concurrent=1)
               duration: 300.0
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
               LightHash: seekFillLt
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   6746.0] L PostProcessingActor[0] - EventEditLocationalLight (#16, concurrent=1)
[   6746.0] E PostProcessingActor[0] - EventEditLocationalLight (#17, concurrent=1)
               duration: 293.0
               Color:
               - 1.5299999713897705
               - 0.7799999713897705
               - 0.75
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 0
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: seekAddLt
               LocationalLightCreateType: 0
               SourceRadius: 0.5
[   7039.0] L PostProcessingActor[0] - EventEditLocationalLight (#17, concurrent=1)
[   7039.0] E PostProcessingActor[0] - EventEditLocationalLight (#18, concurrent=1)
               duration: 2.0
               Color:
               - 1.5299999713897705
               - 0.7799999713897705
               - 0.75
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 0
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: seekAddLt
               LocationalLightCreateType: 0
               SourceRadius: 0.5
[   7041.0] L PostProcessingActor[1] - EventEditLocationalLight (#6, concurrent=1)
[   7041.0] L PostProcessingActor[0] - EventEditLocationalLight (#18, concurrent=1)
[   7041.0] E PostProcessingActor[1] - EventCreateLocationalLightToEventCenter (#5, concurrent=0)
               duration: 991.0
               Direction:
               - 0.4909999966621399
               - -0.19599999487400055
               - 0.8489999771118164
               InnerAngle: 8.333000183105469
               IsIgnoreRot: false
               LightHash: seekFillLt
               LightType: 1
               OuterAngle: 13.333999633789062
               PositionOffset:
               - 7.310999870300293
               - 2.1679999828338623
               - -2.7320001125335693
[   7041.0] E PostProcessingActor[1] - EventEditLocationalLight (#7, concurrent=1)
               duration: 991.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 598.0
               IsFrameTransition: false
               LightHash: seekFillLt
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   7041.0] E PostProcessingActor[0] - EventCreateLocationalLightToEventCenter (#11, concurrent=0)
               duration: 991.0
               Direction:
               - 0.7929999828338623
               - -0.2630000114440918
               - -0.5490000247955322
               InnerAngle: 9.699999809265137
               IsIgnoreRot: false
               LightHash: seekAddLt
               LightType: 1
               OuterAngle: 33.29999923706055
               PositionOffset:
               - 6.310999870300293
               - 2.6679999828338623
               - 1.9179999828338623
[   7041.0] E PostProcessingActor[0] - EventEditLocationalLight (#19, concurrent=1)
               duration: 1281.0
               Color:
               - 1.5299999713897705
               - 0.7799999713897705
               - 0.75
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 0
               Intensity: 2718.0
               IsFrameTransition: false
               LightHash: seekAddLt
               LocationalLightCreateType: 0
               SourceRadius: 0.5
[   8032.0] L PostProcessingActor[1] - EventCreateLocationalLightToEventCenter (#5, concurrent=0)
[   8032.0] L PostProcessingActor[1] - EventEditLocationalLight (#7, concurrent=1)
[   8032.0] L PostProcessingActor[0] - EventCreateLocationalLightToEventCenter (#11, concurrent=0)
[   8032.0] E PostProcessingActor[1] - EventEditLocationalLight (#8, concurrent=1)
               duration: 290.0
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
               LightHash: seekFillLt
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   8322.0] L PostProcessingActor[1] - EventEditLocationalLight (#8, concurrent=1)
[   8322.0] L PostProcessingActor[0] - EventEditLocationalLight (#19, concurrent=1)
[   8322.0] E PostProcessingActor[0] - EventEditLocationalLight (#20, concurrent=1)
               duration: 350.0
               Color:
               - 1.5299999713897705
               - 0.7799999713897705
               - 0.75
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 0
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: seekAddLt
               LocationalLightCreateType: 0
               SourceRadius: 0.5
[   8672.0] L PostProcessingActor[0] - EventEditLocationalLight (#20, concurrent=1)
[   8672.0] E PostProcessingActor[2] - EventEditLocationalLight (#2, concurrent=1)
               duration: 331.0
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
               LightHash: c18_add
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   9003.0] L PostProcessingActor[2] - EventEditLocationalLight (#2, concurrent=1)
[   9003.0] E PostProcessingActor[2] - EventCreateLocationalLightToEventCenter (#1, concurrent=0)
               duration: 306.0
               Direction:
               - -0.8790000081062317
               - -0.3330000042915344
               - -0.3409999907016754
               InnerAngle: 9.0
               IsIgnoreRot: false
               LightHash: c18_add
               LightType: 1
               OuterAngle: 14.467000007629395
               PositionOffset:
               - 15.645000457763672
               - 4.019999980926514
               - 2.8239998817443848
[   9003.0] E PostProcessingActor[2] - EventEditLocationalLight (#3, concurrent=1)
               duration: 306.0
               Color:
               - 0.7799999713897705
               - 1.0399999618530273
               - 1.3899999856948853
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 11000.0
               IsFrameTransition: false
               LightHash: c18_add
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   9309.0] L PostProcessingActor[2] - EventCreateLocationalLightToEventCenter (#1, concurrent=0)
[   9309.0] L PostProcessingActor[2] - EventEditLocationalLight (#3, concurrent=1)
[   9309.0] E PostProcessingActor[2] - EventEditLocationalLight (#4, concurrent=1)
               duration: 221.0
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
               LightHash: c18_add
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   9530.0] L PostProcessingActor[2] - EventEditLocationalLight (#4, concurrent=1)
