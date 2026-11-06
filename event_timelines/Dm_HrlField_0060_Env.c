-------- Event timeline: Dm_HrlField_0060_Env --------
actors: 15
clips: 132
oneshots: 0
cuts: 1
duration: 8640.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

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

Actor: EventWorldManagerController[3]
concurrent clips: 1
actions: ['EventTrigger_SetTime']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventWorldManagerController[2]
concurrent clips: 1
actions: ['Event_SetWeatherTransitionForTimeline']
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

Actor: EventWorldManagerController[0]
concurrent clips: 1
actions: ['Event_SetDemoPaletteForTimeline', 'Event_SetDemoPaletteTransitionForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: WorldMgrThunderMgr[Dm_Hrl_Mgr]
concurrent clips: 1
actions: ['EventTriggerWmThunderOneShot']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[20]
concurrent clips: 2
actions: ['EventCreateLocationalLightToEventCenter', 'EventEditLocationalLight']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[21]
concurrent clips: 2
actions: ['EventCreateLocationalLightToEventCenter', 'EventEditLocationalLight']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[22]
concurrent clips: 2
actions: ['EventCreateLocationalLightToEventCenter', 'EventEditLocationalLight']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[LightningD]
concurrent clips: 2
actions: ['EventCreateLocationalLightToEventCenter', 'EventEditLocationalLight']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[LightningE]
concurrent clips: 2
actions: ['EventCreateLocationalLightToEventCenter', 'EventEditLocationalLight']
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

Actor: PostProcessingActor[12]
concurrent clips: 2
actions: ['EventCreateLocationalLightToEventCenter', 'EventEditLocationalLight']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[13]
concurrent clips: 2
actions: ['EventCreateLocationalLightToEventCenter', 'EventEditLocationalLight']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventWorldManagerController[3] - EventTrigger_SetTime (#13, concurrent=0)
               duration: 8640.0
               TimeHour: 12
               TimeMin: 0
[      0.0] E EventWorldManagerController[2] - Event_SetWeatherTransitionForTimeline (#14, concurrent=0)
               duration: 226.0
               ChangeSpeed: 5
               IsWaitEnd: true
               Weather: GanonCloudy
[      0.0] E EventWorldManagerController[1] - Event_SetWindForTimeline (#17, concurrent=0)
               duration: 60.0
               Azimuth: 0.0
               Elevation: 0.0
               IsImmTrans: true
               IsWaitEnd: true
               Speed: 0.0
[      0.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#34, concurrent=0)
               duration: 360.0
               DemoPaletteName: Dm_HrlField_0060_C01
               IsWaitEnd: true
[     60.0] L EventWorldManagerController[1] - Event_SetWindForTimeline (#17, concurrent=0)
[     60.0] E EventWorldManagerController[1] - Event_SetWindTransitionForTimeline (#18, concurrent=0)
               duration: 166.0
               Azimuth: 50.0
               Elevation: 0.0
               IsWaitEnd: true
               SpeedEnd: 10.0
               SpeedStart: 0.0
               TransitionFrame: 226.0
[    226.0] L EventWorldManagerController[2] - Event_SetWeatherTransitionForTimeline (#14, concurrent=0)
[    226.0] L EventWorldManagerController[1] - Event_SetWindTransitionForTimeline (#18, concurrent=0)
[    226.0] E EventWorldManagerController[2] - Event_SetWeatherTransitionForTimeline (#15, concurrent=0)
               duration: 7154.0
               ChangeSpeed: 2
               IsWaitEnd: true
               Weather: GanonRainy
[    226.0] E EventWorldManagerController[1] - Event_SetWindForTimeline (#19, concurrent=0)
               duration: 274.0
               Azimuth: 50.0
               Elevation: 0.0
               IsImmTrans: false
               IsWaitEnd: true
               Speed: 10.0
[    360.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#34, concurrent=0)
[    360.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#35, concurrent=0)
               duration: 140.0
               DemoPaletteName: Dm_HrlField_0060_C02
               IsWaitEnd: true
[    375.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#3, concurrent=0)
               duration: 14.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Small_Piton
[    389.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#3, concurrent=0)
[    410.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#4, concurrent=0)
               duration: 5.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Small_Piton
[    415.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#4, concurrent=0)
[    432.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#5, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Small_Piton
[    440.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#5, concurrent=0)
[    500.0] L EventWorldManagerController[1] - Event_SetWindForTimeline (#19, concurrent=0)
[    500.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#35, concurrent=0)
[    500.0] E EventWorldManagerController[1] - Event_SetWindForTimeline (#20, concurrent=0)
               duration: 490.0
               Azimuth: 75.0
               Elevation: 0.0
               IsImmTrans: true
               IsWaitEnd: true
               Speed: 10.0
[    500.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#36, concurrent=0)
               duration: 180.0
               DemoPaletteName: Dm_HrlField_0060_C03
               IsWaitEnd: true
[    680.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#36, concurrent=0)
[    680.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#37, concurrent=0)
               duration: 220.0
               DemoPaletteName: Dm_HrlField_0060_C04
               IsWaitEnd: true
[    712.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#6, concurrent=0)
               duration: 14.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    726.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#6, concurrent=0)
[    772.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#7, concurrent=0)
               duration: 170.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_GoGoGo
[    900.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#37, concurrent=0)
[    900.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#38, concurrent=0)
               duration: 90.0
               DemoPaletteName: Dm_HrlField_0060_C05
               IsWaitEnd: true
[    900.0] E PostProcessingActor[13] - EventEditLocationalLight (#129, concurrent=1)
               duration: 90.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: false
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: C05_50_City_Ligght
               LocationalLightCreateType: 0
               SourceRadius: 0.0010000000474974513
[    942.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#7, concurrent=0)
[    946.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#8, concurrent=0)
               duration: 45.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Doon
[    990.0] L EventWorldManagerController[1] - Event_SetWindForTimeline (#20, concurrent=0)
[    990.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#38, concurrent=0)
[    990.0] L PostProcessingActor[13] - EventEditLocationalLight (#129, concurrent=1)
[    990.0] E EventWorldManagerController[1] - Event_SetWindForTimeline (#21, concurrent=0)
               duration: 180.0
               Azimuth: 130.0
               Elevation: 0.0
               IsImmTrans: true
               IsWaitEnd: true
               Speed: 10.0
[    990.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#39, concurrent=0)
               duration: 180.0
               DemoPaletteName: Dm_HrlField_0060_C05_50
               IsWaitEnd: true
[    990.0] E PostProcessingActor[13] - EventCreateLocationalLightToEventCenter (#128, concurrent=0)
               duration: 180.0
               Direction:
               - 0.0
               - -1.0
               - 0.0
               InnerAngle: 15.0
               IsIgnoreRot: true
               LightHash: C05_50_City_Ligght
               LightType: 0
               OuterAngle: 45.0
               PositionOffset:
               - 3.5
               - 0.765999972820282
               - -28.299999237060547
[    990.0] E PostProcessingActor[13] - EventEditLocationalLight (#130, concurrent=1)
               duration: 180.0
               Color:
               - 1.8200000524520874
               - 0.7599999904632568
               - 0.10000000149011612
               EditColor: true
               EditIntensity: true
               EditSourceRadius: false
               FrameTransitionCount: 30
               Intensity: 4000.0
               IsFrameTransition: false
               LightHash: C05_50_City_Ligght
               LocationalLightCreateType: 0
               SourceRadius: 5.0
[    991.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#8, concurrent=0)
[   1170.0] L EventWorldManagerController[1] - Event_SetWindForTimeline (#21, concurrent=0)
[   1170.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#39, concurrent=0)
[   1170.0] L PostProcessingActor[13] - EventCreateLocationalLightToEventCenter (#128, concurrent=0)
[   1170.0] L PostProcessingActor[13] - EventEditLocationalLight (#130, concurrent=1)
[   1170.0] E EventWorldManagerController[1] - Event_SetWindForTimeline (#22, concurrent=0)
               duration: 180.0
               Azimuth: 130.0
               Elevation: 0.0
               IsImmTrans: true
               IsWaitEnd: true
               Speed: 10.0
[   1170.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#40, concurrent=0)
               duration: 100.0
               DemoPaletteName: Dm_HrlField_0060_C06
               IsWaitEnd: true
[   1170.0] E PostProcessingActor[13] - EventEditLocationalLight (#131, concurrent=1)
               duration: 100.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: false
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: C05_50_City_Ligght
               LocationalLightCreateType: 0
               SourceRadius: 0.0010000000474974513
[   1270.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#40, concurrent=0)
[   1270.0] L PostProcessingActor[13] - EventEditLocationalLight (#131, concurrent=1)
[   1270.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#41, concurrent=0)
               duration: 80.0
               DemoPaletteName: Dm_HrlField_0060_C07
               IsWaitEnd: true
[   1278.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#0, concurrent=0)
               duration: 14.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Piton
[   1292.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#0, concurrent=0)
[   1302.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#9, concurrent=0)
               duration: 30.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Doon
[   1304.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#1, concurrent=0)
               duration: 14.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Piton
[   1318.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#1, concurrent=0)
[   1328.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#2, concurrent=0)
               duration: 14.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Piton
[   1332.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#9, concurrent=0)
[   1342.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#2, concurrent=0)
[   1350.0] L EventWorldManagerController[1] - Event_SetWindForTimeline (#22, concurrent=0)
[   1350.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#41, concurrent=0)
[   1350.0] E EventWorldManagerController[1] - Event_SetWindForTimeline (#23, concurrent=0)
               duration: 270.0
               Azimuth: 180.0
               Elevation: 0.0
               IsImmTrans: true
               IsWaitEnd: true
               Speed: 10.0
[   1350.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#42, concurrent=0)
               duration: 180.0
               DemoPaletteName: Dm_HrlField_0060_C08
               IsWaitEnd: true
[   1530.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#42, concurrent=0)
[   1530.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#43, concurrent=0)
               duration: 90.0
               DemoPaletteName: Dm_HrlField_0060_C09
               IsWaitEnd: true
[   1620.0] L EventWorldManagerController[1] - Event_SetWindForTimeline (#23, concurrent=0)
[   1620.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#43, concurrent=0)
[   1620.0] E EventWorldManagerController[1] - Event_SetWindForTimeline (#24, concurrent=0)
               duration: 230.0
               Azimuth: 150.0
               Elevation: 0.0
               IsImmTrans: true
               IsWaitEnd: true
               Speed: 10.0
[   1620.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#44, concurrent=0)
               duration: 230.0
               DemoPaletteName: Dm_HrlField_0060_C10
               IsWaitEnd: true
[   1719.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#10, concurrent=0)
               duration: 20.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Piton
[   1739.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#10, concurrent=0)
[   1850.0] L EventWorldManagerController[1] - Event_SetWindForTimeline (#24, concurrent=0)
[   1850.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#44, concurrent=0)
[   1850.0] E EventWorldManagerController[1] - Event_SetWindForTimeline (#25, concurrent=0)
               duration: 180.0
               Azimuth: 130.0
               Elevation: 0.0
               IsImmTrans: true
               IsWaitEnd: true
               Speed: 10.0
[   1850.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#45, concurrent=0)
               duration: 180.0
               DemoPaletteName: Dm_HrlField_0060_C11
               IsWaitEnd: true
[   2030.0] L EventWorldManagerController[1] - Event_SetWindForTimeline (#25, concurrent=0)
[   2030.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#45, concurrent=0)
[   2030.0] E EventWorldManagerController[1] - Event_SetWindForTimeline (#26, concurrent=0)
               duration: 300.0
               Azimuth: 130.0
               Elevation: 0.0
               IsImmTrans: true
               IsWaitEnd: true
               Speed: 10.0
[   2030.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#46, concurrent=0)
               duration: 300.0
               DemoPaletteName: Dm_HrlField_0060_C12
               IsWaitEnd: true
[   2330.0] L EventWorldManagerController[1] - Event_SetWindForTimeline (#26, concurrent=0)
[   2330.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#46, concurrent=0)
[   2330.0] E EventWorldManagerController[1] - Event_SetWindForTimeline (#27, concurrent=0)
               duration: 540.0
               Azimuth: 130.0
               Elevation: 0.0
               IsImmTrans: false
               IsWaitEnd: true
               Speed: 10.0
[   2330.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#47, concurrent=0)
               duration: 415.0
               DemoPaletteName: Dm_HrlField_0060_C13
               IsWaitEnd: true
[   2330.0] E PostProcessingActor[20] - EventEditLocationalLight (#95, concurrent=1)
               duration: 415.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: false
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: LightningA
               LocationalLightCreateType: 0
               SourceRadius: 0.0010000000474974513
[   2745.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#47, concurrent=0)
[   2745.0] L PostProcessingActor[20] - EventEditLocationalLight (#95, concurrent=1)
[   2745.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#48, concurrent=0)
               duration: 6.0
               CurrDemoPaletteName: Dm_HrlField_0060_C13_b
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_HrlField_0060_C13
               RateEnd: 1.0
               RateFrame: 6.0
               RateStart: 0.0
[   2745.0] E WorldMgrThunderMgr[Dm_Hrl_Mgr] - EventTriggerWmThunderOneShot (#88, concurrent=0)
               duration: 100.0
               PatternKey: Dm_Hrl
[   2745.0] E PostProcessingActor[20] - EventCreateLocationalLightToEventCenter (#94, concurrent=0)
               duration: 59.0
               Direction:
               - 0.3580000102519989
               - -0.8510000109672546
               - 0.38499999046325684
               InnerAngle: 18.0
               IsIgnoreRot: false
               LightHash: LightningA
               LightType: 1
               OuterAngle: 25.0
               PositionOffset:
               - -4.630000114440918
               - 19.027000427246094
               - -11.5
[   2745.0] E PostProcessingActor[20] - EventEditLocationalLight (#96, concurrent=1)
               duration: 6.0
               Color:
               - 0.800000011920929
               - 0.9700000286102295
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 6
               Intensity: 10000000.0
               IsFrameTransition: true
               LightHash: LightningA
               LocationalLightCreateType: 0
               SourceRadius: 2.7790000438690186
[   2751.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#48, concurrent=0)
[   2751.0] L PostProcessingActor[20] - EventEditLocationalLight (#96, concurrent=1)
[   2751.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#49, concurrent=0)
               duration: 28.0
               DemoPaletteName: Dm_HrlField_0060_C13_b
               IsWaitEnd: true
[   2751.0] E PostProcessingActor[20] - EventEditLocationalLight (#97, concurrent=1)
               duration: 18.0
               Color:
               - 0.75
               - 0.800000011920929
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 6
               Intensity: 10000000.0
               IsFrameTransition: true
               LightHash: LightningA
               LocationalLightCreateType: 0
               SourceRadius: 2.7790000438690186
[   2769.0] L PostProcessingActor[20] - EventEditLocationalLight (#97, concurrent=1)
[   2769.0] E PostProcessingActor[20] - EventEditLocationalLight (#98, concurrent=1)
               duration: 13.0
               Color:
               - 0.75
               - 0.800000011920929
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 6
               Intensity: 1000000.0
               IsFrameTransition: true
               LightHash: LightningA
               LocationalLightCreateType: 0
               SourceRadius: 2.7790000438690186
[   2779.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#49, concurrent=0)
[   2779.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#50, concurrent=0)
               duration: 16.0
               CurrDemoPaletteName: Dm_HrlField_0060_C13
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_HrlField_0060_C13_b
               RateEnd: 1.0
               RateFrame: 16.0
               RateStart: 0.0
[   2782.0] L PostProcessingActor[20] - EventEditLocationalLight (#98, concurrent=1)
[   2782.0] E PostProcessingActor[20] - EventEditLocationalLight (#99, concurrent=1)
               duration: 2.0
               Color:
               - 0.75
               - 0.800000011920929
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 2
               Intensity: 10000000.0
               IsFrameTransition: true
               LightHash: LightningA
               LocationalLightCreateType: 0
               SourceRadius: 2.7790000438690186
[   2784.0] L PostProcessingActor[20] - EventEditLocationalLight (#99, concurrent=1)
[   2784.0] E PostProcessingActor[20] - EventEditLocationalLight (#100, concurrent=1)
               duration: 86.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: false
               FrameTransitionCount: 55
               Intensity: 0.0
               IsFrameTransition: true
               LightHash: LightningA
               LocationalLightCreateType: 0
               SourceRadius: 0.0010000000474974513
[   2795.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#50, concurrent=0)
[   2795.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#51, concurrent=0)
               duration: 75.0
               DemoPaletteName: Dm_HrlField_0060_C13
               IsWaitEnd: true
[   2804.0] L PostProcessingActor[20] - EventCreateLocationalLightToEventCenter (#94, concurrent=0)
[   2845.0] L WorldMgrThunderMgr[Dm_Hrl_Mgr] - EventTriggerWmThunderOneShot (#88, concurrent=0)
[   2870.0] L EventWorldManagerController[1] - Event_SetWindForTimeline (#27, concurrent=0)
[   2870.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#51, concurrent=0)
[   2870.0] L PostProcessingActor[20] - EventEditLocationalLight (#100, concurrent=1)
[   2870.0] E EventWorldManagerController[1] - Event_SetWindForTimeline (#28, concurrent=0)
               duration: 60.0
               Azimuth: 110.0
               Elevation: 0.0
               IsImmTrans: false
               IsWaitEnd: true
               Speed: 10.0
[   2870.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#52, concurrent=0)
               duration: 60.0
               DemoPaletteName: Dm_HrlField_0060_C14
               IsWaitEnd: true
[   2930.0] L EventWorldManagerController[1] - Event_SetWindForTimeline (#28, concurrent=0)
[   2930.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#52, concurrent=0)
[   2930.0] E EventWorldManagerController[1] - Event_SetWindForTimeline (#29, concurrent=0)
               duration: 80.0
               Azimuth: 90.0
               Elevation: 0.0
               IsImmTrans: false
               IsWaitEnd: true
               Speed: 10.0
[   2930.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#53, concurrent=0)
               duration: 80.0
               DemoPaletteName: Dm_HrlField_0060_C15
               IsWaitEnd: true
[   3010.0] L EventWorldManagerController[1] - Event_SetWindForTimeline (#29, concurrent=0)
[   3010.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#53, concurrent=0)
[   3010.0] E EventWorldManagerController[1] - Event_SetWindForTimeline (#30, concurrent=0)
               duration: 660.0
               Azimuth: 70.0
               Elevation: 0.0
               IsImmTrans: false
               IsWaitEnd: true
               Speed: 10.0
[   3010.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#54, concurrent=0)
               duration: 28.0
               DemoPaletteName: Dm_HrlField_0060_C16
               IsWaitEnd: true
[   3010.0] E PostProcessingActor[21] - EventEditLocationalLight (#102, concurrent=1)
               duration: 28.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: false
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: LightningB
               LocationalLightCreateType: 0
               SourceRadius: 0.0010000000474974513
[   3010.0] E PostProcessingActor[22] - EventEditLocationalLight (#106, concurrent=1)
               duration: 42.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: false
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: LightningC
               LocationalLightCreateType: 0
               SourceRadius: 0.0010000000474974513
[   3010.0] E PostProcessingActor[LightningD] - EventEditLocationalLight (#110, concurrent=1)
               duration: 20.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: false
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: LightningD
               LocationalLightCreateType: 0
               SourceRadius: 0.0010000000474974513
[   3010.0] E PostProcessingActor[LightningE] - EventEditLocationalLight (#117, concurrent=1)
               duration: 42.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: false
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: LightningE
               LocationalLightCreateType: 0
               SourceRadius: 0.0010000000474974513
[   3030.0] L PostProcessingActor[LightningD] - EventEditLocationalLight (#110, concurrent=1)
[   3030.0] E PostProcessingActor[LightningD] - EventCreateLocationalLightToEventCenter (#109, concurrent=0)
               duration: 46.0
               Direction:
               - 0.7666079998016357
               - -0.5030459761619568
               - 0.39906901121139526
               InnerAngle: 80.0
               IsIgnoreRot: false
               LightHash: LightningD
               LightType: 1
               OuterAngle: 90.0
               PositionOffset:
               - -1.5149999856948853
               - 5.892000198364258
               - -7.576000213623047
[   3030.0] E PostProcessingActor[LightningD] - EventEditLocationalLight (#111, concurrent=1)
               duration: 2.0
               Color:
               - 0.7953640222549438
               - 0.9703919887542725
               - 1.6860300302505493
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 6
               Intensity: 200000.0
               IsFrameTransition: false
               LightHash: LightningD
               LocationalLightCreateType: 0
               SourceRadius: 3.5920000076293945
[   3032.0] L PostProcessingActor[LightningD] - EventEditLocationalLight (#111, concurrent=1)
[   3032.0] E PostProcessingActor[LightningD] - EventEditLocationalLight (#112, concurrent=1)
               duration: 26.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: false
               FrameTransitionCount: 25
               Intensity: 0.0
               IsFrameTransition: true
               LightHash: LightningD
               LocationalLightCreateType: 0
               SourceRadius: 0.0010000000474974513
[   3035.0] E WorldMgrThunderMgr[Dm_Hrl_Mgr] - EventTriggerWmThunderOneShot (#89, concurrent=0)
               duration: 100.0
               PatternKey: Dm_Hrl
[   3038.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#54, concurrent=0)
[   3038.0] L PostProcessingActor[21] - EventEditLocationalLight (#102, concurrent=1)
[   3038.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#55, concurrent=0)
               duration: 20.0
               DemoPaletteName: Dm_HrlField_0060_C16_b
               IsWaitEnd: true
[   3038.0] E PostProcessingActor[21] - EventCreateLocationalLightToEventCenter (#101, concurrent=0)
               duration: 44.0
               Direction:
               - 0.132315993309021
               - 0.8266100287437439
               - -0.546999990940094
               InnerAngle: 45.0
               IsIgnoreRot: false
               LightHash: LightningB
               LightType: 1
               OuterAngle: 60.0
               PositionOffset:
               - -0.9259999990463257
               - 0.9340000152587891
               - -4.61299991607666
[   3038.0] E PostProcessingActor[21] - EventEditLocationalLight (#103, concurrent=1)
               duration: 18.0
               Color:
               - 0.5
               - 0.9700000286102295
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 6
               Intensity: 12000.0
               IsFrameTransition: true
               LightHash: LightningB
               LocationalLightCreateType: 0
               SourceRadius: 4.748000144958496
[   3052.0] L PostProcessingActor[22] - EventEditLocationalLight (#106, concurrent=1)
[   3052.0] L PostProcessingActor[LightningE] - EventEditLocationalLight (#117, concurrent=1)
[   3052.0] E PostProcessingActor[22] - EventCreateLocationalLightToEventCenter (#105, concurrent=0)
               duration: 46.0
               Direction:
               - -0.5230000019073486
               - 0.8491650223731995
               - 0.0734110027551651
               InnerAngle: 45.0
               IsIgnoreRot: false
               LightHash: LightningC
               LightType: 1
               OuterAngle: 60.0
               PositionOffset:
               - 1.1430000066757202
               - 1.6180000305175781
               - -6.39900016784668
[   3052.0] E PostProcessingActor[22] - EventEditLocationalLight (#107, concurrent=1)
               duration: 33.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 6
               Intensity: 20000.0
               IsFrameTransition: false
               LightHash: LightningC
               LocationalLightCreateType: 0
               SourceRadius: 1.621999979019165
[   3052.0] E PostProcessingActor[LightningE] - EventCreateLocationalLightToEventCenter (#116, concurrent=0)
               duration: 46.0
               Direction:
               - 0.03799999877810478
               - -0.7769500017166138
               - 0.6284139752388
               InnerAngle: 80.0
               IsIgnoreRot: false
               LightHash: LightningE
               LightType: 1
               OuterAngle: 90.0
               PositionOffset:
               - 0.5720000267028809
               - 4.545000076293945
               - -6.78000020980835
[   3052.0] E PostProcessingActor[LightningE] - EventEditLocationalLight (#118, concurrent=1)
               duration: 2.0
               Color:
               - 0.7953640222549438
               - 0.9703919887542725
               - 1.6860300302505493
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 6
               Intensity: 100000.0
               IsFrameTransition: false
               LightHash: LightningE
               LocationalLightCreateType: 0
               SourceRadius: 2.3889999389648438
[   3054.0] L PostProcessingActor[LightningE] - EventEditLocationalLight (#118, concurrent=1)
[   3054.0] E PostProcessingActor[LightningE] - EventEditLocationalLight (#119, concurrent=1)
               duration: 616.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: false
               FrameTransitionCount: 25
               Intensity: 0.0
               IsFrameTransition: true
               LightHash: LightningE
               LocationalLightCreateType: 0
               SourceRadius: 0.0010000000474974513
[   3056.0] L PostProcessingActor[21] - EventEditLocationalLight (#103, concurrent=1)
[   3056.0] E PostProcessingActor[21] - EventEditLocationalLight (#104, concurrent=1)
               duration: 614.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: false
               FrameTransitionCount: 6
               Intensity: 0.0
               IsFrameTransition: true
               LightHash: LightningB
               LocationalLightCreateType: 0
               SourceRadius: 0.0010000000474974513
[   3058.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#55, concurrent=0)
[   3058.0] L PostProcessingActor[LightningD] - EventEditLocationalLight (#112, concurrent=1)
[   3058.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#56, concurrent=0)
               duration: 16.0
               CurrDemoPaletteName: Dm_HrlField_0060_C16_c
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_HrlField_0060_C16_b
               RateEnd: 1.0
               RateFrame: 16.0
               RateStart: 0.0
[   3058.0] E PostProcessingActor[LightningD] - EventEditLocationalLight (#113, concurrent=1)
               duration: 16.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: false
               FrameTransitionCount: 25
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: LightningD
               LocationalLightCreateType: 0
               SourceRadius: 0.0010000000474974513
[   3074.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#56, concurrent=0)
[   3074.0] L PostProcessingActor[LightningD] - EventEditLocationalLight (#113, concurrent=1)
[   3074.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#57, concurrent=0)
               duration: 21.0
               CurrDemoPaletteName: Dm_HrlField_0060_C16
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_HrlField_0060_C16_b
               RateEnd: 1.0
               RateFrame: 21.0
               RateStart: 0.0
[   3074.0] E PostProcessingActor[LightningD] - EventEditLocationalLight (#114, concurrent=1)
               duration: 2.0
               Color:
               - 0.7953640222549438
               - 0.9703919887542725
               - 1.6860300302505493
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 6
               Intensity: 50000.0
               IsFrameTransition: false
               LightHash: LightningD
               LocationalLightCreateType: 0
               SourceRadius: 0.0
[   3076.0] L PostProcessingActor[LightningD] - EventCreateLocationalLightToEventCenter (#109, concurrent=0)
[   3076.0] L PostProcessingActor[LightningD] - EventEditLocationalLight (#114, concurrent=1)
[   3076.0] E PostProcessingActor[LightningD] - EventEditLocationalLight (#115, concurrent=1)
               duration: 594.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: false
               FrameTransitionCount: 25
               Intensity: 0.0
               IsFrameTransition: true
               LightHash: LightningD
               LocationalLightCreateType: 0
               SourceRadius: 0.0010000000474974513
[   3082.0] L PostProcessingActor[21] - EventCreateLocationalLightToEventCenter (#101, concurrent=0)
[   3085.0] L PostProcessingActor[22] - EventEditLocationalLight (#107, concurrent=1)
[   3085.0] E PostProcessingActor[22] - EventEditLocationalLight (#108, concurrent=1)
               duration: 585.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: false
               FrameTransitionCount: 16
               Intensity: 0.0
               IsFrameTransition: true
               LightHash: LightningC
               LocationalLightCreateType: 0
               SourceRadius: 0.0010000000474974513
[   3095.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#57, concurrent=0)
[   3095.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#58, concurrent=0)
               duration: 575.0
               DemoPaletteName: Dm_HrlField_0060_C16
               IsWaitEnd: true
[   3098.0] L PostProcessingActor[22] - EventCreateLocationalLightToEventCenter (#105, concurrent=0)
[   3098.0] L PostProcessingActor[LightningE] - EventCreateLocationalLightToEventCenter (#116, concurrent=0)
[   3135.0] L WorldMgrThunderMgr[Dm_Hrl_Mgr] - EventTriggerWmThunderOneShot (#89, concurrent=0)
[   3670.0] L EventWorldManagerController[1] - Event_SetWindForTimeline (#30, concurrent=0)
[   3670.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#58, concurrent=0)
[   3670.0] L PostProcessingActor[21] - EventEditLocationalLight (#104, concurrent=1)
[   3670.0] L PostProcessingActor[22] - EventEditLocationalLight (#108, concurrent=1)
[   3670.0] L PostProcessingActor[LightningD] - EventEditLocationalLight (#115, concurrent=1)
[   3670.0] L PostProcessingActor[LightningE] - EventEditLocationalLight (#119, concurrent=1)
[   3670.0] E EventWorldManagerController[1] - Event_SetWindForTimeline (#31, concurrent=0)
               duration: 2220.0
               Azimuth: 50.0
               Elevation: 0.0
               IsImmTrans: false
               IsWaitEnd: true
               Speed: 10.0
[   3670.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#59, concurrent=0)
               duration: 294.0
               DemoPaletteName: Dm_HrlField_0060_C17
               IsWaitEnd: true
[   3962.0] E WorldMgrThunderMgr[Dm_Hrl_Mgr] - EventTriggerWmThunderOneShot (#90, concurrent=0)
               duration: 30.0
               PatternKey: Dm_Hrl
[   3964.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#59, concurrent=0)
[   3964.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#60, concurrent=0)
               duration: 60.0
               DemoPaletteName: Dm_HrlField_0060_C17_b
               IsWaitEnd: true
[   3992.0] L WorldMgrThunderMgr[Dm_Hrl_Mgr] - EventTriggerWmThunderOneShot (#90, concurrent=0)
[   4024.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#60, concurrent=0)
[   4024.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#61, concurrent=0)
               duration: 17.0
               DemoPaletteName: Dm_HrlField_0060_C17
               IsWaitEnd: true
[   4039.0] E WorldMgrThunderMgr[Dm_Hrl_Mgr] - EventTriggerWmThunderOneShot (#91, concurrent=0)
               duration: 100.0
               PatternKey: Dm_Hrl
[   4041.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#61, concurrent=0)
[   4041.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#62, concurrent=0)
               duration: 51.0
               DemoPaletteName: Dm_HrlField_0060_C17_c
               IsWaitEnd: true
[   4092.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#62, concurrent=0)
[   4092.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#63, concurrent=0)
               duration: 118.0
               DemoPaletteName: Dm_HrlField_0060_C17
               IsWaitEnd: true
[   4139.0] L WorldMgrThunderMgr[Dm_Hrl_Mgr] - EventTriggerWmThunderOneShot (#91, concurrent=0)
[   4210.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#63, concurrent=0)
[   4210.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#64, concurrent=0)
               duration: 180.0
               DemoPaletteName: Dm_HrlField_0060_C18
               IsWaitEnd: true
[   4390.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#64, concurrent=0)
[   4390.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#65, concurrent=0)
               duration: 240.0
               DemoPaletteName: Dm_HrlField_0060_C19
               IsWaitEnd: true
[   4630.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#65, concurrent=0)
[   4630.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#66, concurrent=0)
               duration: 240.0
               DemoPaletteName: Dm_HrlField_0060_C20
               IsWaitEnd: true
[   4840.0] E PostProcessingActor[12] - EventEditLocationalLight (#125, concurrent=1)
               duration: 30.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: false
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: C21_Ganon_Body
               LocationalLightCreateType: 0
               SourceRadius: 0.0010000000474974513
[   4870.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#66, concurrent=0)
[   4870.0] L PostProcessingActor[12] - EventEditLocationalLight (#125, concurrent=1)
[   4870.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#67, concurrent=0)
               duration: 330.0
               DemoPaletteName: Dm_HrlField_0060_C21
               IsWaitEnd: true
[   4870.0] E PostProcessingActor[11] - EventEditLocationalLight (#121, concurrent=1)
               duration: 510.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: false
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: C21_Ganon_Energy
               LocationalLightCreateType: 0
               SourceRadius: 0.0010000000474974513
[   4870.0] E PostProcessingActor[12] - EventCreateLocationalLightToEventCenter (#124, concurrent=0)
               duration: 570.0
               Direction:
               - 0.0
               - -1.0
               - 0.0
               InnerAngle: 15.0
               IsIgnoreRot: false
               LightHash: C21_Ganon_Body
               LightType: 0
               OuterAngle: 45.0
               PositionOffset:
               - 1.7200000286102295
               - 2.2219998836517334
               - -0.550000011920929
[   4870.0] E PostProcessingActor[12] - EventEditLocationalLight (#126, concurrent=1)
               duration: 570.0
               Color:
               - 0.8799999952316284
               - 0.9599999785423279
               - 1.5199999809265137
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 60
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: C21_Ganon_Body
               LocationalLightCreateType: 0
               SourceRadius: 0.0010000000474974513
[   5200.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#67, concurrent=0)
[   5200.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#68, concurrent=0)
               duration: 65.0
               CurrDemoPaletteName: Dm_HrlField_0060_C21_b
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_HrlField_0060_C21
               RateEnd: 1.0
               RateFrame: 80.0
               RateStart: 0.0
[   5265.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#68, concurrent=0)
[   5265.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#69, concurrent=0)
               duration: 9.0
               DemoPaletteName: Dm_HrlField_0060_C21_b
               IsWaitEnd: true
[   5274.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#69, concurrent=0)
[   5274.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#70, concurrent=0)
               duration: 153.0
               CurrDemoPaletteName: Dm_HrlField_0060_C21_c
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_HrlField_0060_C21_b
               RateEnd: 1.0
               RateFrame: 60.0
               RateStart: 0.0
[   5380.0] L PostProcessingActor[11] - EventEditLocationalLight (#121, concurrent=1)
[   5380.0] E PostProcessingActor[11] - EventCreateLocationalLightToEventCenter (#120, concurrent=0)
               duration: 60.0
               Direction:
               - 0.0
               - -1.0
               - 0.0
               InnerAngle: 15.0
               IsIgnoreRot: false
               LightHash: C21_Ganon_Energy
               LightType: 0
               OuterAngle: 45.0
               PositionOffset:
               - 1.065000057220459
               - 2.6659998893737793
               - -0.8360000252723694
[   5380.0] E PostProcessingActor[11] - EventEditLocationalLight (#122, concurrent=1)
               duration: 60.0
               Color:
               - 2.25
               - 0.4699999988079071
               - 0.4699999988079071
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 55
               Intensity: 0.0
               IsFrameTransition: true
               LightHash: C21_Ganon_Energy
               LocationalLightCreateType: 0
               SourceRadius: 0.0010000000474974513
[   5427.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#70, concurrent=0)
[   5427.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#71, concurrent=0)
               duration: 13.0
               DemoPaletteName: Dm_HrlField_0060_C21_c
               IsWaitEnd: true
[   5440.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#71, concurrent=0)
[   5440.0] L PostProcessingActor[11] - EventCreateLocationalLightToEventCenter (#120, concurrent=0)
[   5440.0] L PostProcessingActor[11] - EventEditLocationalLight (#122, concurrent=1)
[   5440.0] L PostProcessingActor[12] - EventCreateLocationalLightToEventCenter (#124, concurrent=0)
[   5440.0] L PostProcessingActor[12] - EventEditLocationalLight (#126, concurrent=1)
[   5440.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#72, concurrent=0)
               duration: 180.0
               DemoPaletteName: Dm_HrlField_0060_C22
               IsWaitEnd: true
[   5440.0] E PostProcessingActor[11] - EventEditLocationalLight (#123, concurrent=1)
               duration: 30.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: false
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: C21_Ganon_Energy
               LocationalLightCreateType: 0
               SourceRadius: 0.0010000000474974513
[   5440.0] E PostProcessingActor[12] - EventEditLocationalLight (#127, concurrent=1)
               duration: 30.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: false
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: C21_Ganon_Body
               LocationalLightCreateType: 0
               SourceRadius: 0.0010000000474974513
[   5470.0] L PostProcessingActor[11] - EventEditLocationalLight (#123, concurrent=1)
[   5470.0] L PostProcessingActor[12] - EventEditLocationalLight (#127, concurrent=1)
[   5474.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#11, concurrent=0)
               duration: 60.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_Dohoon
[   5534.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#11, concurrent=0)
[   5620.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#72, concurrent=0)
[   5620.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#73, concurrent=0)
               duration: 270.0
               DemoPaletteName: Dm_HrlField_0060_C23
               IsWaitEnd: true
[   5638.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#12, concurrent=0)
               duration: 60.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_DoDon
[   5698.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#12, concurrent=0)
[   5890.0] L EventWorldManagerController[1] - Event_SetWindForTimeline (#31, concurrent=0)
[   5890.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#73, concurrent=0)
[   5890.0] E EventWorldManagerController[1] - Event_SetWindForTimeline (#32, concurrent=0)
               duration: 600.0
               Azimuth: 90.0
               Elevation: 0.0
               IsImmTrans: true
               IsWaitEnd: true
               Speed: 10.0
[   5890.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#74, concurrent=0)
               duration: 600.0
               DemoPaletteName: Dm_HrlField_0060_C24
               IsWaitEnd: true
[   6490.0] L EventWorldManagerController[1] - Event_SetWindForTimeline (#32, concurrent=0)
[   6490.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#74, concurrent=0)
[   6490.0] E EventWorldManagerController[1] - Event_SetWindForTimeline (#33, concurrent=0)
               duration: 2150.0
               Azimuth: 50.0
               Elevation: 0.0
               IsImmTrans: true
               IsWaitEnd: true
               Speed: 10.0
[   6490.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#75, concurrent=0)
               duration: 390.0
               DemoPaletteName: Dm_HrlField_0060_C24_50
               IsWaitEnd: true
[   6880.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#75, concurrent=0)
[   6880.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#76, concurrent=0)
               duration: 364.0
               DemoPaletteName: Dm_HrlField_0060_C25
               IsWaitEnd: true
[   7244.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#76, concurrent=0)
[   7244.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#77, concurrent=0)
               duration: 72.0
               DemoPaletteName: Dm_HrlField_0060_C25_b
               IsWaitEnd: true
[   7244.0] E WorldMgrThunderMgr[Dm_Hrl_Mgr] - EventTriggerWmThunderOneShot (#92, concurrent=0)
               duration: 100.0
               PatternKey: Dm_Hrl_A
[   7316.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#77, concurrent=0)
[   7316.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#78, concurrent=0)
               duration: 30.0
               CurrDemoPaletteName: Dm_HrlField_0060_C25
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_HrlField_0060_C25_b
               RateEnd: 1.0
               RateFrame: 30.0
               RateStart: 0.0
[   7344.0] L WorldMgrThunderMgr[Dm_Hrl_Mgr] - EventTriggerWmThunderOneShot (#92, concurrent=0)
[   7346.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#78, concurrent=0)
[   7346.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#79, concurrent=0)
               duration: 14.0
               DemoPaletteName: Dm_HrlField_0060_C25
               IsWaitEnd: true
[   7360.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#79, concurrent=0)
[   7360.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#80, concurrent=0)
               duration: 46.0
               DemoPaletteName: Dm_HrlField_0060_C26
               IsWaitEnd: true
[   7380.0] L EventWorldManagerController[2] - Event_SetWeatherTransitionForTimeline (#15, concurrent=0)
[   7380.0] E EventWorldManagerController[2] - Event_SetWeatherTransitionForTimeline (#16, concurrent=0)
               duration: 1260.0
               ChangeSpeed: 1
               IsWaitEnd: true
               Weather: GanonCloudy
[   7404.0] E WorldMgrThunderMgr[Dm_Hrl_Mgr] - EventTriggerWmThunderOneShot (#93, concurrent=0)
               duration: 100.0
               PatternKey: Dm_Hrl_A
[   7406.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#80, concurrent=0)
[   7406.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#81, concurrent=0)
               duration: 42.0
               DemoPaletteName: Dm_HrlField_0060_C26_b
               IsWaitEnd: true
[   7448.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#81, concurrent=0)
[   7448.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#82, concurrent=0)
               duration: 22.0
               CurrDemoPaletteName: Dm_HrlField_0060_C26
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_HrlField_0060_C26_b
               RateEnd: 1.0
               RateFrame: 22.0
               RateStart: 0.0
[   7470.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#82, concurrent=0)
[   7470.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#83, concurrent=0)
               duration: 210.0
               DemoPaletteName: Dm_HrlField_0060_C26
               IsWaitEnd: true
[   7504.0] L WorldMgrThunderMgr[Dm_Hrl_Mgr] - EventTriggerWmThunderOneShot (#93, concurrent=0)
[   7680.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#83, concurrent=0)
[   7680.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#84, concurrent=0)
               duration: 60.0
               DemoPaletteName: Dm_HrlField_0060_C27
               IsWaitEnd: true
[   7740.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#84, concurrent=0)
[   7740.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#85, concurrent=0)
               duration: 260.0
               CurrDemoPaletteName: Dm_HrlField_0060_C27_b
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_HrlField_0060_C27
               RateEnd: 1.0
               RateFrame: 260.0
               RateStart: 0.0
[   8000.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#85, concurrent=0)
[   8000.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#86, concurrent=0)
               duration: 60.0
               DemoPaletteName: Dm_HrlField_0060_C27_b
               IsWaitEnd: true
[   8060.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#86, concurrent=0)
[   8060.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#87, concurrent=0)
               duration: 580.0
               DemoPaletteName: Dm_HrlField_0060_C28
               IsWaitEnd: true
[   8640.0] L EventWorldManagerController[3] - EventTrigger_SetTime (#13, concurrent=0)
[   8640.0] L EventWorldManagerController[2] - Event_SetWeatherTransitionForTimeline (#16, concurrent=0)
[   8640.0] L EventWorldManagerController[1] - Event_SetWindForTimeline (#33, concurrent=0)
[   8640.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#87, concurrent=0)
