-------- Event timeline: Dm_TimeTemple_0040_Env --------
actors: 14
clips: 80
oneshots: 0
cuts: 1
duration: 7890.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: EventWorldManagerController[1]
concurrent clips: 1
actions: ['Event_SetEnvPaletteForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: GameSystemActor[2]
concurrent clips: 1
actions: ['EventControllerRumbleTimeline']
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

Actor: EventWorldManagerController[2]
concurrent clips: 1
actions: ['Event_SetWindForTimeline', 'Event_SetWindTransitionForTimeline']
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

Actor: PostProcessingActor[8]
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

Actor: PostProcessingActor[7]
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

Actor: PostProcessingActor[2]
concurrent clips: 2
actions: ['EventCreateLocationalLightToEventCenter', 'EventEditLocationalLight']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[3]
concurrent clips: 2
actions: ['EventCreateLocationalLightToEventCenter', 'EventEditLocationalLight']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[4]
concurrent clips: 2
actions: ['EventCreateLocationalLightToEventCenter', 'EventEditLocationalLight']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[5]
concurrent clips: 2
actions: ['EventCreateLocationalLightToEventCenter', 'EventEditLocationalLight']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[6]
concurrent clips: 2
actions: ['EventCreateLocationalLightToEventCenter', 'EventEditLocationalLight']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventWorldManagerController[1] - Event_SetEnvPaletteForTimeline (#0, concurrent=0)
               duration: 7890.0
               ChangeSpeed: 5
               EnvPaletteName: Dm_TimeTemple_0040_ENV_C01
               EnvTimeTableName: ''
               IsWaitEnd: true
[      0.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#13, concurrent=0)
               duration: 420.0
               DemoPaletteName: Dm_TimeTemple_0040_C01
               IsWaitEnd: true
[    420.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#13, concurrent=0)
[    420.0] E EventWorldManagerController[2] - Event_SetWindForTimeline (#8, concurrent=0)
               duration: 137.0
               Azimuth: 0.0
               Elevation: 0.0
               IsImmTrans: true
               IsWaitEnd: true
               Speed: 0.0
[    420.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#14, concurrent=0)
               duration: 376.0
               DemoPaletteName: Dm_TimeTemple_0040_C02
               IsWaitEnd: true
[    440.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#3, concurrent=0)
               duration: 60.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_GataGata
[    500.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#3, concurrent=0)
[    500.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#4, concurrent=0)
               duration: 303.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_GoGoGo
[    502.0] E GameSystemActor[2] - EventControllerRumbleTimeline (#1, concurrent=0)
               duration: 55.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Byeen
[    557.0] L GameSystemActor[2] - EventControllerRumbleTimeline (#1, concurrent=0)
[    557.0] L EventWorldManagerController[2] - Event_SetWindForTimeline (#8, concurrent=0)
[    557.0] E EventWorldManagerController[2] - Event_SetWindTransitionForTimeline (#9, concurrent=0)
               duration: 109.0
               Azimuth: 90.0
               Elevation: 0.0
               IsWaitEnd: true
               SpeedEnd: 10.0
               SpeedStart: 0.0
               TransitionFrame: 30.0
[    666.0] L EventWorldManagerController[2] - Event_SetWindTransitionForTimeline (#9, concurrent=0)
[    666.0] E EventWorldManagerController[2] - Event_SetWindForTimeline (#10, concurrent=0)
               duration: 664.0
               Azimuth: 0.0
               Elevation: 0.0
               IsImmTrans: true
               IsWaitEnd: true
               Speed: 10.0
[    796.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#14, concurrent=0)
[    796.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#15, concurrent=0)
               duration: 8.0
               CurrDemoPaletteName: ''
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_TimeTemple_0040_C02
               RateEnd: 1.0
               RateFrame: 8.0
               RateStart: 0.0
[    803.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#4, concurrent=0)
[    803.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#5, concurrent=0)
               duration: 60.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_Biyoon
[    804.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#15, concurrent=0)
[    804.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#16, concurrent=0)
               duration: 36.0
               DemoPaletteName: Dm_TimeTemple_0040_C02_b
               IsWaitEnd: true
[    840.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#16, concurrent=0)
[    840.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#17, concurrent=0)
               duration: 35.0
               DemoPaletteName: Dm_TimeTemple_0040_C03
               IsWaitEnd: true
[    840.0] E PostProcessingActor[8] - EventEditLocationalLight (#41, concurrent=1)
               duration: 480.0
               Color:
               - 1.6399999856948853
               - 0.8299999833106995
               - 0.1899999976158142
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: Shrine_Light_C04
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    840.0] E PostProcessingActor[1] - EventEditLocationalLight (#45, concurrent=1)
               duration: 720.0
               Color:
               - 1.6399999856948853
               - 0.8299999833106995
               - 0.1899999976158142
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: Shrine_Light_C05
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    863.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#5, concurrent=0)
[    875.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#17, concurrent=0)
[    875.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#18, concurrent=0)
               duration: 15.0
               CurrDemoPaletteName: Dm_TimeTemple_0040_C03_b
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_TimeTemple_0040_C03
               RateEnd: 1.0
               RateFrame: 15.0
               RateStart: 0.0
[    890.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#18, concurrent=0)
[    890.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#19, concurrent=0)
               duration: 430.0
               DemoPaletteName: Dm_TimeTemple_0040_C03_b
               IsWaitEnd: true
[   1320.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#19, concurrent=0)
[   1320.0] L PostProcessingActor[8] - EventEditLocationalLight (#41, concurrent=1)
[   1320.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#20, concurrent=0)
               duration: 240.0
               DemoPaletteName: Dm_TimeTemple_0040_C04
               IsWaitEnd: true
[   1320.0] E PostProcessingActor[8] - EventCreateLocationalLightToEventCenter (#40, concurrent=0)
               duration: 240.0
               Direction:
               - -1.0
               - 0.0
               - 0.0
               InnerAngle: 15.0
               IsIgnoreRot: false
               LightHash: Shrine_Light_C04
               LightType: 1
               OuterAngle: 30.0
               PositionOffset:
               - 70.0
               - 0.0
               - 0.0
[   1320.0] E PostProcessingActor[8] - EventEditLocationalLight (#42, concurrent=1)
               duration: 240.0
               Color:
               - 1.6399999856948853
               - 0.8299999833106995
               - 0.1899999976158142
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 18000.0
               IsFrameTransition: false
               LightHash: Shrine_Light_C04
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1330.0] L EventWorldManagerController[2] - Event_SetWindForTimeline (#10, concurrent=0)
[   1330.0] E EventWorldManagerController[2] - Event_SetWindTransitionForTimeline (#11, concurrent=0)
               duration: 240.0
               Azimuth: 90.0
               Elevation: 0.0
               IsWaitEnd: true
               SpeedEnd: 0.0
               SpeedStart: 10.0
               TransitionFrame: 230.0
[   1560.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#20, concurrent=0)
[   1560.0] L PostProcessingActor[8] - EventCreateLocationalLightToEventCenter (#40, concurrent=0)
[   1560.0] L PostProcessingActor[8] - EventEditLocationalLight (#42, concurrent=1)
[   1560.0] L PostProcessingActor[1] - EventEditLocationalLight (#45, concurrent=1)
[   1560.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#21, concurrent=0)
               duration: 1140.0
               DemoPaletteName: Dm_TimeTemple_0040_C05
               IsWaitEnd: true
[   1560.0] E PostProcessingActor[8] - EventEditLocationalLight (#43, concurrent=1)
               duration: 1140.0
               Color:
               - 1.6399999856948853
               - 0.8299999833106995
               - 0.1899999976158142
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: Shrine_Light_C04
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1560.0] E PostProcessingActor[1] - EventCreateLocationalLightToEventCenter (#44, concurrent=0)
               duration: 1140.0
               Direction:
               - -1.0
               - 0.0
               - 0.0
               InnerAngle: 15.0
               IsIgnoreRot: false
               LightHash: Shrine_Light_C05
               LightType: 1
               OuterAngle: 30.0
               PositionOffset:
               - 50.0
               - 0.0
               - 0.0
[   1560.0] E PostProcessingActor[1] - EventEditLocationalLight (#46, concurrent=1)
               duration: 1140.0
               Color:
               - 1.6399999856948853
               - 0.8299999833106995
               - 0.1899999976158142
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 9000.0
               IsFrameTransition: false
               LightHash: Shrine_Light_C05
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1560.0] E PostProcessingActor[7] - EventEditLocationalLight (#49, concurrent=1)
               duration: 1140.0
               Color:
               - 0.0
               - 0.5
               - 0.800000011920929
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: Face_Light
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1562.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#6, concurrent=0)
               duration: 42.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_GataGata
[   1570.0] L EventWorldManagerController[2] - Event_SetWindTransitionForTimeline (#11, concurrent=0)
[   1570.0] E EventWorldManagerController[2] - Event_SetWindForTimeline (#12, concurrent=0)
               duration: 1130.0
               Azimuth: 0.0
               Elevation: 0.0
               IsImmTrans: true
               IsWaitEnd: true
               Speed: 0.0
[   1604.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#6, concurrent=0)
[   1604.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#7, concurrent=0)
               duration: 70.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_GoGoGo
[   1674.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#7, concurrent=0)
[   1676.0] E GameSystemActor[2] - EventControllerRumbleTimeline (#2, concurrent=0)
               duration: 70.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Biyoon
[   1746.0] L GameSystemActor[2] - EventControllerRumbleTimeline (#2, concurrent=0)
[   2700.0] L EventWorldManagerController[2] - Event_SetWindForTimeline (#12, concurrent=0)
[   2700.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#21, concurrent=0)
[   2700.0] L PostProcessingActor[8] - EventEditLocationalLight (#43, concurrent=1)
[   2700.0] L PostProcessingActor[1] - EventCreateLocationalLightToEventCenter (#44, concurrent=0)
[   2700.0] L PostProcessingActor[1] - EventEditLocationalLight (#46, concurrent=1)
[   2700.0] L PostProcessingActor[7] - EventEditLocationalLight (#49, concurrent=1)
[   2700.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#22, concurrent=0)
               duration: 120.0
               DemoPaletteName: Dm_TimeTemple_0040_C06
               IsWaitEnd: true
[   2700.0] E PostProcessingActor[1] - EventEditLocationalLight (#47, concurrent=1)
               duration: 240.0
               Color:
               - 1.6399999856948853
               - 0.8299999833106995
               - 0.1899999976158142
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: Shrine_Light_C05
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2700.0] E PostProcessingActor[7] - EventCreateLocationalLightToEventCenter (#48, concurrent=0)
               duration: 240.0
               Direction:
               - -1.0
               - 0.0
               - 0.0
               InnerAngle: 15.0
               IsIgnoreRot: false
               LightHash: Face_Light
               LightType: 1
               OuterAngle: 30.0
               PositionOffset:
               - 30.0
               - 0.0
               - 0.0
[   2700.0] E PostProcessingActor[7] - EventEditLocationalLight (#50, concurrent=1)
               duration: 240.0
               Color:
               - 0.0
               - 0.5
               - 0.800000011920929
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 180
               Intensity: 6000.0
               IsFrameTransition: true
               LightHash: Face_Light
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2700.0] E PostProcessingActor[10] - EventEditLocationalLight (#53, concurrent=1)
               duration: 240.0
               Color:
               - 1.6399999856948853
               - 0.8299999833106995
               - 0.1899999976158142
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: Shrine_Light_middle
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2820.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#22, concurrent=0)
[   2820.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#23, concurrent=0)
               duration: 60.0
               CurrDemoPaletteName: Dm_TimeTemple_0040_C06_b
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_TimeTemple_0040_C06
               RateEnd: 1.0
               RateFrame: 60.0
               RateStart: 0.0
[   2880.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#23, concurrent=0)
[   2880.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#24, concurrent=0)
               duration: 60.0
               DemoPaletteName: Dm_TimeTemple_0040_C06_b
               IsWaitEnd: true
[   2940.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#24, concurrent=0)
[   2940.0] L PostProcessingActor[1] - EventEditLocationalLight (#47, concurrent=1)
[   2940.0] L PostProcessingActor[7] - EventCreateLocationalLightToEventCenter (#48, concurrent=0)
[   2940.0] L PostProcessingActor[7] - EventEditLocationalLight (#50, concurrent=1)
[   2940.0] L PostProcessingActor[10] - EventEditLocationalLight (#53, concurrent=1)
[   2940.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#25, concurrent=0)
               duration: 300.0
               DemoPaletteName: Dm_TimeTemple_0040_C07
               IsWaitEnd: true
[   2940.0] E PostProcessingActor[7] - EventEditLocationalLight (#51, concurrent=1)
               duration: 300.0
               Color:
               - 0.0
               - 0.5
               - 0.800000011920929
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: Face_Light
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2940.0] E PostProcessingActor[10] - EventCreateLocationalLightToEventCenter (#52, concurrent=0)
               duration: 1970.0
               Direction:
               - -1.0
               - 0.0
               - 0.0
               InnerAngle: 15.0
               IsIgnoreRot: false
               LightHash: Shrine_Light_middle
               LightType: 1
               OuterAngle: 30.0
               PositionOffset:
               - 35.0
               - 0.0
               - 0.0
[   2940.0] E PostProcessingActor[10] - EventEditLocationalLight (#54, concurrent=1)
               duration: 300.0
               Color:
               - 1.6399999856948853
               - 0.8299999833106995
               - 0.1899999976158142
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 15000.0
               IsFrameTransition: false
               LightHash: Shrine_Light_middle
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   3240.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#25, concurrent=0)
[   3240.0] L PostProcessingActor[7] - EventEditLocationalLight (#51, concurrent=1)
[   3240.0] L PostProcessingActor[10] - EventEditLocationalLight (#54, concurrent=1)
[   3240.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#26, concurrent=0)
               duration: 270.0
               DemoPaletteName: Dm_TimeTemple_0040_C08
               IsWaitEnd: true
[   3240.0] E PostProcessingActor[10] - EventEditLocationalLight (#55, concurrent=1)
               duration: 270.0
               Color:
               - 1.6399999856948853
               - 0.8299999833106995
               - 0.1899999976158142
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 15000.0
               IsFrameTransition: false
               LightHash: Shrine_Light_middle
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   3510.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#26, concurrent=0)
[   3510.0] L PostProcessingActor[10] - EventEditLocationalLight (#55, concurrent=1)
[   3510.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#27, concurrent=0)
               duration: 1400.0
               DemoPaletteName: Dm_TimeTemple_0040_C09
               IsWaitEnd: true
[   3510.0] E PostProcessingActor[10] - EventEditLocationalLight (#56, concurrent=1)
               duration: 1400.0
               Color:
               - 1.6399999856948853
               - 0.8299999833106995
               - 0.1899999976158142
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 15000.0
               IsFrameTransition: false
               LightHash: Shrine_Light_middle
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   3510.0] E PostProcessingActor[2] - EventEditLocationalLight (#59, concurrent=1)
               duration: 835.0
               Color:
               - 1.6399999856948853
               - 0.8299999833106995
               - 0.1899999976158142
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: TriMark_Light
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   3510.0] E PostProcessingActor[3] - EventEditLocationalLight (#63, concurrent=1)
               duration: 1400.0
               Color:
               - 1.6399999856948853
               - 0.8299999833106995
               - 0.1899999976158142
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: Shrine_Light_near
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   4345.0] L PostProcessingActor[2] - EventEditLocationalLight (#59, concurrent=1)
[   4345.0] E PostProcessingActor[2] - EventCreateLocationalLightToEventCenter (#58, concurrent=0)
               duration: 565.0
               Direction:
               - -0.10180400311946869
               - 0.07080399990081787
               - -0.9922810196876526
               InnerAngle: 13.0
               IsIgnoreRot: false
               LightHash: TriMark_Light
               LightType: 1
               OuterAngle: 23.0
               PositionOffset:
               - 0.0
               - 0.0
               - 5.185999870300293
[   4345.0] E PostProcessingActor[2] - EventEditLocationalLight (#60, concurrent=1)
               duration: 565.0
               Color:
               - 0.3941749930381775
               - 1.1425199508666992
               - 1.8515470027923584
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 240
               Intensity: 3000.0
               IsFrameTransition: true
               LightHash: TriMark_Light
               LocationalLightCreateType: 0
               SourceRadius: 2.5
[   4910.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#27, concurrent=0)
[   4910.0] L PostProcessingActor[10] - EventCreateLocationalLightToEventCenter (#52, concurrent=0)
[   4910.0] L PostProcessingActor[10] - EventEditLocationalLight (#56, concurrent=1)
[   4910.0] L PostProcessingActor[2] - EventCreateLocationalLightToEventCenter (#58, concurrent=0)
[   4910.0] L PostProcessingActor[2] - EventEditLocationalLight (#60, concurrent=1)
[   4910.0] L PostProcessingActor[3] - EventEditLocationalLight (#63, concurrent=1)
[   4910.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#28, concurrent=0)
               duration: 437.0
               DemoPaletteName: Dm_TimeTemple_0040_C10
               IsWaitEnd: true
[   4910.0] E PostProcessingActor[10] - EventEditLocationalLight (#57, concurrent=1)
               duration: 680.0
               Color:
               - 1.6399999856948853
               - 0.8299999833106995
               - 0.1899999976158142
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: Shrine_Light_middle
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   4910.0] E PostProcessingActor[2] - EventEditLocationalLight (#61, concurrent=1)
               duration: 680.0
               Color:
               - 1.6399999856948853
               - 0.8299999833106995
               - 0.1899999976158142
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 1
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: TriMark_Light
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   4910.0] E PostProcessingActor[3] - EventCreateLocationalLightToEventCenter (#62, concurrent=0)
               duration: 680.0
               Direction:
               - -1.0
               - 0.0
               - 0.0
               InnerAngle: 15.0
               IsIgnoreRot: false
               LightHash: Shrine_Light_near
               LightType: 1
               OuterAngle: 35.0
               PositionOffset:
               - 30.0
               - 0.0
               - 0.0
[   4910.0] E PostProcessingActor[3] - EventEditLocationalLight (#64, concurrent=1)
               duration: 680.0
               Color:
               - 1.1424700021743774
               - 1.1225529909133911
               - 0.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 12000.0
               IsFrameTransition: false
               LightHash: Shrine_Light_near
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   4910.0] E PostProcessingActor[4] - EventEditLocationalLight (#67, concurrent=1)
               duration: 680.0
               Color:
               - 1.6399999856948853
               - 0.8299999833106995
               - 0.1899999976158142
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: Shrine_Light_walk
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   5347.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#28, concurrent=0)
[   5347.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#29, concurrent=0)
               duration: 180.0
               CurrDemoPaletteName: Dm_TimeTemple_0040_C10_b
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_TimeTemple_0040_C10
               RateEnd: 1.0
               RateFrame: 180.0
               RateStart: 0.0
[   5527.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#29, concurrent=0)
[   5527.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#30, concurrent=0)
               duration: 63.0
               DemoPaletteName: Dm_TimeTemple_0040_C10_b
               IsWaitEnd: true
[   5590.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#30, concurrent=0)
[   5590.0] L PostProcessingActor[10] - EventEditLocationalLight (#57, concurrent=1)
[   5590.0] L PostProcessingActor[2] - EventEditLocationalLight (#61, concurrent=1)
[   5590.0] L PostProcessingActor[3] - EventCreateLocationalLightToEventCenter (#62, concurrent=0)
[   5590.0] L PostProcessingActor[3] - EventEditLocationalLight (#64, concurrent=1)
[   5590.0] L PostProcessingActor[4] - EventEditLocationalLight (#67, concurrent=1)
[   5590.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#31, concurrent=0)
               duration: 339.0
               DemoPaletteName: Dm_TimeTemple_0040_C11
               IsWaitEnd: true
[   5590.0] E PostProcessingActor[3] - EventEditLocationalLight (#65, concurrent=1)
               duration: 660.0
               Color:
               - 1.6399999856948853
               - 0.8299999833106995
               - 0.1899999976158142
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: Shrine_Light_near
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   5590.0] E PostProcessingActor[4] - EventCreateLocationalLightToEventCenter (#66, concurrent=0)
               duration: 660.0
               Direction:
               - -1.0
               - 0.0
               - 0.0
               InnerAngle: 15.0
               IsIgnoreRot: false
               LightHash: Shrine_Light_walk
               LightType: 1
               OuterAngle: 22.0
               PositionOffset:
               - 70.0
               - 0.0
               - 0.0
[   5590.0] E PostProcessingActor[4] - EventEditLocationalLight (#68, concurrent=1)
               duration: 660.0
               Color:
               - 1.0
               - 1.0
               - 0.5
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 18000.0
               IsFrameTransition: false
               LightHash: Shrine_Light_walk
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   5929.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#31, concurrent=0)
[   5929.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#32, concurrent=0)
               duration: 147.0
               CurrDemoPaletteName: Dm_TimeTemple_0040_C11_b
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_TimeTemple_0040_C11
               RateEnd: 1.0
               RateFrame: 100.0
               RateStart: 0.0
[   6076.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#32, concurrent=0)
[   6076.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#33, concurrent=0)
               duration: 174.0
               DemoPaletteName: Dm_TimeTemple_0040_C11_b
               IsWaitEnd: true
[   6250.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#33, concurrent=0)
[   6250.0] L PostProcessingActor[3] - EventEditLocationalLight (#65, concurrent=1)
[   6250.0] L PostProcessingActor[4] - EventCreateLocationalLightToEventCenter (#66, concurrent=0)
[   6250.0] L PostProcessingActor[4] - EventEditLocationalLight (#68, concurrent=1)
[   6250.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#34, concurrent=0)
               duration: 240.0
               DemoPaletteName: Dm_TimeTemple_0040_C12
               IsWaitEnd: true
[   6250.0] E PostProcessingActor[4] - EventEditLocationalLight (#69, concurrent=1)
               duration: 240.0
               Color:
               - 1.6399999856948853
               - 0.8299999833106995
               - 0.1899999976158142
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: Shrine_Light_walk
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   6250.0] E PostProcessingActor[5] - EventEditLocationalLight (#71, concurrent=1)
               duration: 240.0
               Color:
               - 1.6399999856948853
               - 0.8299999833106995
               - 0.1899999976158142
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: Shrine_Light_bottom
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   6490.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#34, concurrent=0)
[   6490.0] L PostProcessingActor[4] - EventEditLocationalLight (#69, concurrent=1)
[   6490.0] L PostProcessingActor[5] - EventEditLocationalLight (#71, concurrent=1)
[   6490.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#35, concurrent=0)
               duration: 300.0
               DemoPaletteName: Dm_TimeTemple_0040_C13
               IsWaitEnd: true
[   6490.0] E PostProcessingActor[5] - EventCreateLocationalLightToEventCenter (#70, concurrent=0)
               duration: 300.0
               Direction:
               - -0.995199978351593
               - 0.0
               - 0.09700000286102295
               InnerAngle: 0.5
               IsIgnoreRot: false
               LightHash: Shrine_Light_bottom
               LightType: 1
               OuterAngle: 15.5
               PositionOffset:
               - 70.0
               - 0.0
               - 0.0
[   6490.0] E PostProcessingActor[5] - EventEditLocationalLight (#72, concurrent=1)
               duration: 300.0
               Color:
               - 1.290869951248169
               - 1.0177500247955322
               - 0.14955200254917145
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 9166.6669921875
               IsFrameTransition: false
               LightHash: Shrine_Light_bottom
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   6490.0] E PostProcessingActor[6] - EventEditLocationalLight (#75, concurrent=1)
               duration: 300.0
               Color:
               - 1.6399999856948853
               - 0.8299999833106995
               - 0.1899999976158142
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: Shrine_Light_far
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   6790.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#35, concurrent=0)
[   6790.0] L PostProcessingActor[5] - EventCreateLocationalLightToEventCenter (#70, concurrent=0)
[   6790.0] L PostProcessingActor[5] - EventEditLocationalLight (#72, concurrent=1)
[   6790.0] L PostProcessingActor[6] - EventEditLocationalLight (#75, concurrent=1)
[   6790.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#36, concurrent=0)
               duration: 400.0
               DemoPaletteName: Dm_TimeTemple_0040_C14
               IsWaitEnd: true
[   6790.0] E PostProcessingActor[5] - EventEditLocationalLight (#73, concurrent=1)
               duration: 400.0
               Color:
               - 1.6399999856948853
               - 0.8299999833106995
               - 0.1899999976158142
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: Shrine_Light_bottom
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   6790.0] E PostProcessingActor[6] - EventCreateLocationalLightToEventCenter (#74, concurrent=0)
               duration: 1100.0
               Direction:
               - -1.0
               - 0.0
               - 0.0
               InnerAngle: 15.0
               IsIgnoreRot: false
               LightHash: Shrine_Light_far
               LightType: 1
               OuterAngle: 45.0
               PositionOffset:
               - 70.37100219726562
               - 0.5
               - 0.0
[   6790.0] E PostProcessingActor[6] - EventEditLocationalLight (#76, concurrent=1)
               duration: 90.0
               Color:
               - 1.6399999856948853
               - 0.8299999833106995
               - 0.1899999976158142
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 90
               Intensity: 2000.0
               IsFrameTransition: true
               LightHash: Shrine_Light_far
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   6880.0] L PostProcessingActor[6] - EventEditLocationalLight (#76, concurrent=1)
[   6880.0] E PostProcessingActor[6] - EventEditLocationalLight (#77, concurrent=1)
               duration: 310.0
               Color:
               - 1.6399999856948853
               - 0.8299999833106995
               - 0.1899999976158142
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 534
               Intensity: 6000.0
               IsFrameTransition: true
               LightHash: Shrine_Light_far
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   7190.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#36, concurrent=0)
[   7190.0] L PostProcessingActor[5] - EventEditLocationalLight (#73, concurrent=1)
[   7190.0] L PostProcessingActor[6] - EventEditLocationalLight (#77, concurrent=1)
[   7190.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#37, concurrent=0)
               duration: 146.0
               DemoPaletteName: Dm_TimeTemple_0040_C15
               IsWaitEnd: true
[   7190.0] E PostProcessingActor[6] - EventEditLocationalLight (#78, concurrent=1)
               duration: 220.0
               Color:
               - 1.6399999856948853
               - 0.8299999833106995
               - 0.1899999976158142
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 220
               Intensity: 8000.0
               IsFrameTransition: true
               LightHash: Shrine_Light_far
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   7336.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#37, concurrent=0)
[   7336.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#38, concurrent=0)
               duration: 324.0
               CurrDemoPaletteName: Dm_TimeTemple_0040_C15_b
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_TimeTemple_0040_C15
               RateEnd: 1.0
               RateFrame: 300.0
               RateStart: 0.0
[   7410.0] L PostProcessingActor[6] - EventEditLocationalLight (#78, concurrent=1)
[   7410.0] E PostProcessingActor[6] - EventEditLocationalLight (#79, concurrent=1)
               duration: 480.0
               Color:
               - 1.6399999856948853
               - 0.8299999833106995
               - 0.1899999976158142
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 280
               Intensity: 15000.0
               IsFrameTransition: true
               LightHash: Shrine_Light_far
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   7660.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#38, concurrent=0)
[   7660.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#39, concurrent=0)
               duration: 230.0
               DemoPaletteName: Dm_TimeTemple_0040_C15_b
               IsWaitEnd: true
[   7890.0] L EventWorldManagerController[1] - Event_SetEnvPaletteForTimeline (#0, concurrent=0)
[   7890.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#39, concurrent=0)
[   7890.0] L PostProcessingActor[6] - EventCreateLocationalLightToEventCenter (#74, concurrent=0)
[   7890.0] L PostProcessingActor[6] - EventEditLocationalLight (#79, concurrent=1)
