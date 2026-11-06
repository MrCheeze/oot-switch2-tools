-------- Event timeline: Dm_InsideGanonCastle_BossOut_Env --------
actors: 7
clips: 56
oneshots: 0
cuts: 1
duration: 3483.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: PostProcessingActor[SpotLight_BG2]
concurrent clips: 2
actions: ['EventCreateLocationalLightToEventCenter', 'EventEditLocationalLight']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[SpotLight_Up]
concurrent clips: 2
actions: ['EventCreateLocationalLightToEventCenter', 'EventEditLocationalLight']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[Light_Ganon]
concurrent clips: 2
actions: ['EventEditLocationalLight', 'EventCreateLocationalLightToEventCenter']
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

Actor: EventWorldManagerController[1]
concurrent clips: 1
actions: ['Event_SetWindForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[Lighting]
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
actions: ['Event_SetDemoPaletteForTimeline', 'Event_SetDemoPaletteTransitionForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#15, concurrent=0)
               duration: 90.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_DoDon
[      0.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#33, concurrent=0)
               duration: 181.0
               DemoPaletteName: Dm_InsideGanonCastle_BossOut_C01
               IsWaitEnd: true
[     90.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#15, concurrent=0)
[    181.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#33, concurrent=0)
[    181.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#34, concurrent=0)
               duration: 29.0
               CurrDemoPaletteName: Dm_InsideGanonCastle_BossOut_C01A
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_InsideGanonCastle_BossOut_C01
               RateEnd: 1.0
               RateFrame: 30.0
               RateStart: 0.0
[    210.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#34, concurrent=0)
[    210.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#16, concurrent=0)
               duration: 30.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Piton
[    210.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#35, concurrent=0)
               duration: 250.0
               DemoPaletteName: Dm_InsideGanonCastle_BossOut_C01A
               IsWaitEnd: true
[    240.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#16, concurrent=0)
[    240.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#17, concurrent=0)
               duration: 30.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Small
[    270.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#17, concurrent=0)
[    298.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#18, concurrent=0)
               duration: 30.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Piton
[    328.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#18, concurrent=0)
[    460.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#35, concurrent=0)
[    460.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#36, concurrent=0)
               duration: 150.0
               DemoPaletteName: Dm_InsideGanonCastle_BossOut_C02
               IsWaitEnd: true
[    610.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#36, concurrent=0)
[    610.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#37, concurrent=0)
               duration: 389.0
               DemoPaletteName: Dm_InsideGanonCastle_BossOut_C03
               IsWaitEnd: true
[    999.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#37, concurrent=0)
[    999.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#38, concurrent=0)
               duration: 289.0
               DemoPaletteName: Dm_InsideGanonCastle_BossOut_C04
               IsWaitEnd: true
[   1288.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#38, concurrent=0)
[   1288.0] E EventWorldManagerController[1] - Event_SetWindForTimeline (#26, concurrent=0)
               duration: 1685.0
               Azimuth: 225.0
               Elevation: 0.0
               IsImmTrans: true
               IsWaitEnd: true
               Speed: 15.0
[   1288.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#39, concurrent=0)
               duration: 115.0
               DemoPaletteName: Dm_InsideGanonCastle_BossOut_C05A
               IsWaitEnd: true
[   1403.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#39, concurrent=0)
[   1403.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#40, concurrent=0)
               duration: 40.0
               CurrDemoPaletteName: Dm_InsideGanonCastle_BossOut_C05
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_InsideGanonCastle_BossOut_C05A
               RateEnd: 1.0
               RateFrame: 40.0
               RateStart: 0.0
[   1443.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#40, concurrent=0)
[   1443.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#41, concurrent=0)
               duration: 149.0
               DemoPaletteName: Dm_InsideGanonCastle_BossOut_C05
               IsWaitEnd: true
[   1592.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#41, concurrent=0)
[   1592.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#42, concurrent=0)
               duration: 45.0
               DemoPaletteName: Dm_InsideGanonCastle_BossOut_C06
               IsWaitEnd: true
[   1637.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#42, concurrent=0)
[   1637.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#43, concurrent=0)
               duration: 75.0
               CurrDemoPaletteName: Dm_InsideGanonCastle_BossOut_C07
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_InsideGanonCastle_BossOut_C06
               RateEnd: 1.0
               RateFrame: 60.0
               RateStart: 0.0
[   1712.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#43, concurrent=0)
[   1712.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#44, concurrent=0)
               duration: 38.0
               CurrDemoPaletteName: Dm_InsideGanonCastle_BossOut_C07a
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_InsideGanonCastle_BossOut_C07
               RateEnd: 1.0
               RateFrame: 60.0
               RateStart: 0.0
[   1750.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#44, concurrent=0)
[   1750.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#45, concurrent=0)
               duration: 131.0
               DemoPaletteName: Dm_InsideGanonCastle_BossOut_C07a
               IsWaitEnd: true
[   1765.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#19, concurrent=0)
               duration: 90.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Dohoon
[   1855.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#19, concurrent=0)
[   1881.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#45, concurrent=0)
[   1881.0] E PostProcessingActor[Light_Ganon] - EventCreateLocationalLightToEventCenter (#10, concurrent=0)
               duration: 100.0
               Direction:
               - 0.0
               - -1.0
               - 0.0
               InnerAngle: 15.0
               IsIgnoreRot: false
               LightHash: PointLight_Ganon
               LightType: 0
               OuterAngle: 45.0
               PositionOffset:
               - 0.0
               - 0.0
               - 0.0
[   1881.0] E PostProcessingActor[Light_Ganon] - EventEditLocationalLight (#11, concurrent=1)
               duration: 133.0
               Color:
               - 0.8999999761581421
               - 0.20000000298023224
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 0
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: PointLight_Ganon
               LocationalLightCreateType: 0
               SourceRadius: 0.5
[   1881.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#46, concurrent=0)
               duration: 133.0
               DemoPaletteName: Dm_InsideGanonCastle_BossOut_C08
               IsWaitEnd: true
[   1981.0] L PostProcessingActor[Light_Ganon] - EventCreateLocationalLightToEventCenter (#10, concurrent=0)
[   2014.0] L PostProcessingActor[Light_Ganon] - EventEditLocationalLight (#11, concurrent=1)
[   2014.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#46, concurrent=0)
[   2014.0] E PostProcessingActor[Light_Ganon] - EventEditLocationalLight (#12, concurrent=1)
               duration: 175.0
               Color:
               - 0.8999999761581421
               - 0.20000000298023224
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 0
               Intensity: 210.0
               IsFrameTransition: false
               LightHash: PointLight_Ganon
               LocationalLightCreateType: 0
               SourceRadius: 0.5
[   2014.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#47, concurrent=0)
               duration: 175.0
               DemoPaletteName: Dm_InsideGanonCastle_BossOut_C09
               IsWaitEnd: true
[   2089.0] E PostProcessingActor[SpotLight_BG2] - EventCreateLocationalLightToEventCenter (#0, concurrent=0)
               duration: 100.0
               Direction:
               - -1.0
               - -0.25
               - 0.0
               InnerAngle: 5.0
               IsIgnoreRot: false
               LightHash: SpotLight_BG2
               LightType: 1
               OuterAngle: 15.0
               PositionOffset:
               - 16.299999237060547
               - 4.349999904632568
               - 0.07000000029802322
[   2089.0] E PostProcessingActor[SpotLight_BG2] - EventEditLocationalLight (#1, concurrent=1)
               duration: 100.0
               Color:
               - 1.0
               - 1.0
               - 0.3499999940395355
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 0
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: SpotLight_BG2
               LocationalLightCreateType: 0
               SourceRadius: 0.5
[   2089.0] E PostProcessingActor[SpotLight_Up] - EventCreateLocationalLightToEventCenter (#5, concurrent=0)
               duration: 100.0
               Direction:
               - -1.0
               - -0.10000000149011612
               - 0.10000000149011612
               InnerAngle: 5.0
               IsIgnoreRot: false
               LightHash: SpotLight_Up
               LightType: 1
               OuterAngle: 15.0
               PositionOffset:
               - 16.299999237060547
               - 11.5
               - 0.07000000029802322
[   2089.0] E PostProcessingActor[SpotLight_Up] - EventEditLocationalLight (#6, concurrent=1)
               duration: 100.0
               Color:
               - 1.0
               - 1.0
               - 0.3499999940395355
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 0
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: SpotLight_Up
               LocationalLightCreateType: 0
               SourceRadius: 0.5
[   2189.0] L PostProcessingActor[SpotLight_BG2] - EventCreateLocationalLightToEventCenter (#0, concurrent=0)
[   2189.0] L PostProcessingActor[SpotLight_BG2] - EventEditLocationalLight (#1, concurrent=1)
[   2189.0] L PostProcessingActor[SpotLight_Up] - EventCreateLocationalLightToEventCenter (#5, concurrent=0)
[   2189.0] L PostProcessingActor[SpotLight_Up] - EventEditLocationalLight (#6, concurrent=1)
[   2189.0] L PostProcessingActor[Light_Ganon] - EventEditLocationalLight (#12, concurrent=1)
[   2189.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#47, concurrent=0)
[   2189.0] E PostProcessingActor[SpotLight_BG2] - EventEditLocationalLight (#2, concurrent=1)
               duration: 355.0
               Color:
               - 1.0
               - 1.0
               - 0.3499999940395355
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 0
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: SpotLight_BG2
               LocationalLightCreateType: 0
               SourceRadius: 0.5
[   2189.0] E PostProcessingActor[SpotLight_Up] - EventEditLocationalLight (#7, concurrent=1)
               duration: 355.0
               Color:
               - 1.0
               - 1.0
               - 0.3499999940395355
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 60
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: SpotLight_Up
               LocationalLightCreateType: 0
               SourceRadius: 0.5
[   2189.0] E PostProcessingActor[Light_Ganon] - EventEditLocationalLight (#13, concurrent=1)
               duration: 355.0
               Color:
               - 0.8999999761581421
               - 0.20000000298023224
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 0
               Intensity: 15.0
               IsFrameTransition: false
               LightHash: PointLight_Ganon
               LocationalLightCreateType: 0
               SourceRadius: 0.5
[   2189.0] E PostProcessingActor[Lighting] - EventCreateLocationalLightToEventCenter (#28, concurrent=0)
               duration: 355.0
               Direction:
               - 0.0
               - -1.0
               - 0.0
               InnerAngle: 15.0
               IsIgnoreRot: false
               LightHash: C10
               LightType: 0
               OuterAngle: 45.0
               PositionOffset:
               - 11.111000061035156
               - 9.0
               - 12.0
[   2189.0] E PostProcessingActor[Lighting] - EventEditLocationalLight (#29, concurrent=1)
               duration: 355.0
               Color:
               - 1.5
               - 0.8999999761581421
               - 0.30000001192092896
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 90
               Intensity: 0.0
               IsFrameTransition: true
               LightHash: C10
               LocationalLightCreateType: 0
               SourceRadius: 8.0
[   2189.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#48, concurrent=0)
               duration: 20.0
               DemoPaletteName: Dm_InsideGanonCastle_BossOut_C10
               IsWaitEnd: true
[   2209.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#48, concurrent=0)
[   2209.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#49, concurrent=0)
               duration: 41.0
               CurrDemoPaletteName: Dm_InsideGanonCastle_BossOut_C10a
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_InsideGanonCastle_BossOut_C10
               RateEnd: 1.0
               RateFrame: 60.0
               RateStart: 0.0
[   2250.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#49, concurrent=0)
[   2250.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#50, concurrent=0)
               duration: 294.0
               DemoPaletteName: Dm_InsideGanonCastle_BossOut_C10a
               IsWaitEnd: true
[   2257.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#20, concurrent=0)
               duration: 90.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_DoDon
[   2347.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#20, concurrent=0)
[   2486.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#21, concurrent=0)
               duration: 77.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Biyoon
[   2544.0] L PostProcessingActor[SpotLight_BG2] - EventEditLocationalLight (#2, concurrent=1)
[   2544.0] L PostProcessingActor[SpotLight_Up] - EventEditLocationalLight (#7, concurrent=1)
[   2544.0] L PostProcessingActor[Light_Ganon] - EventEditLocationalLight (#13, concurrent=1)
[   2544.0] L PostProcessingActor[Lighting] - EventCreateLocationalLightToEventCenter (#28, concurrent=0)
[   2544.0] L PostProcessingActor[Lighting] - EventEditLocationalLight (#29, concurrent=1)
[   2544.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#50, concurrent=0)
[   2544.0] E PostProcessingActor[SpotLight_BG2] - EventEditLocationalLight (#3, concurrent=1)
               duration: 429.0
               Color:
               - 1.0
               - 1.0
               - 0.3499999940395355
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 0
               Intensity: 8000.0
               IsFrameTransition: false
               LightHash: SpotLight_BG2
               LocationalLightCreateType: 0
               SourceRadius: 0.5
[   2544.0] E PostProcessingActor[SpotLight_Up] - EventEditLocationalLight (#8, concurrent=1)
               duration: 180.0
               Color:
               - 1.0
               - 1.0
               - 0.3499999940395355
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 0
               Intensity: 15000.0
               IsFrameTransition: false
               LightHash: SpotLight_Up
               LocationalLightCreateType: 0
               SourceRadius: 0.5
[   2544.0] E PostProcessingActor[Light_Ganon] - EventEditLocationalLight (#14, concurrent=1)
               duration: 939.0
               Color:
               - 0.8999999761581421
               - 0.20000000298023224
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 0
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: PointLight_Ganon
               LocationalLightCreateType: 0
               SourceRadius: 0.5
[   2544.0] E PostProcessingActor[Lighting] - EventEditLocationalLight (#30, concurrent=1)
               duration: 180.0
               Color:
               - 1.5
               - 0.8999999761581421
               - 0.30000001192092896
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 90
               Intensity: 0.0
               IsFrameTransition: true
               LightHash: C10
               LocationalLightCreateType: 0
               SourceRadius: 8.0
[   2544.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#51, concurrent=0)
               duration: 180.0
               DemoPaletteName: Dm_InsideGanonCastle_BossOut_C11
               IsWaitEnd: true
[   2563.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#21, concurrent=0)
[   2563.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#22, concurrent=0)
               duration: 90.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Dohoon
[   2653.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#22, concurrent=0)
[   2724.0] L PostProcessingActor[SpotLight_Up] - EventEditLocationalLight (#8, concurrent=1)
[   2724.0] L PostProcessingActor[Lighting] - EventEditLocationalLight (#30, concurrent=1)
[   2724.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#51, concurrent=0)
[   2724.0] E PostProcessingActor[SpotLight_Up] - EventEditLocationalLight (#9, concurrent=1)
               duration: 759.0
               Color:
               - 1.0
               - 1.0
               - 0.3499999940395355
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 60
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: SpotLight_Up
               LocationalLightCreateType: 0
               SourceRadius: 0.5
[   2724.0] E PostProcessingActor[Lighting] - EventEditLocationalLight (#31, concurrent=1)
               duration: 249.0
               Color:
               - 1.5
               - 0.8999999761581421
               - 0.30000001192092896
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 90
               Intensity: 800.0
               IsFrameTransition: true
               LightHash: C10
               LocationalLightCreateType: 0
               SourceRadius: 8.0
[   2724.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#52, concurrent=0)
               duration: 249.0
               DemoPaletteName: Dm_InsideGanonCastle_BossOut_C12
               IsWaitEnd: true
[   2853.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#23, concurrent=0)
               duration: 90.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Dooon
[   2943.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#23, concurrent=0)
[   2973.0] L PostProcessingActor[SpotLight_BG2] - EventEditLocationalLight (#3, concurrent=1)
[   2973.0] L EventWorldManagerController[1] - Event_SetWindForTimeline (#26, concurrent=0)
[   2973.0] L PostProcessingActor[Lighting] - EventEditLocationalLight (#31, concurrent=1)
[   2973.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#52, concurrent=0)
[   2973.0] E PostProcessingActor[SpotLight_BG2] - EventEditLocationalLight (#4, concurrent=1)
               duration: 510.0
               Color:
               - 1.0
               - 1.0
               - 0.3499999940395355
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 0
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: SpotLight_BG2
               LocationalLightCreateType: 0
               SourceRadius: 0.5
[   2973.0] E EventWorldManagerController[1] - Event_SetWindForTimeline (#27, concurrent=0)
               duration: 510.0
               Azimuth: 90.0
               Elevation: 0.0
               IsImmTrans: true
               IsWaitEnd: true
               Speed: 15.0
[   2973.0] E PostProcessingActor[Lighting] - EventEditLocationalLight (#32, concurrent=1)
               duration: 510.0
               Color:
               - 1.5
               - 0.8999999761581421
               - 0.30000001192092896
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 90
               Intensity: 0.0
               IsFrameTransition: true
               LightHash: C10
               LocationalLightCreateType: 0
               SourceRadius: 8.0
[   2973.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#53, concurrent=0)
               duration: 90.0
               DemoPaletteName: Dm_InsideGanonCastle_BossOut_C13
               IsWaitEnd: true
[   3017.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#24, concurrent=0)
               duration: 208.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_GoroGoro
[   3063.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#53, concurrent=0)
[   3063.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#54, concurrent=0)
               duration: 387.0
               CurrDemoPaletteName: Dm_InsideGanonCastle_BossOut_C13a
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_InsideGanonCastle_BossOut_C13
               RateEnd: 1.0
               RateFrame: 387.0
               RateStart: 0.0
[   3225.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#24, concurrent=0)
[   3225.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#25, concurrent=0)
               duration: 180.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_GoroGoro
[   3405.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#25, concurrent=0)
[   3450.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#54, concurrent=0)
[   3450.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#55, concurrent=0)
               duration: 33.0
               DemoPaletteName: Dm_InsideGanonCastle_BossOut_C13a
               IsWaitEnd: true
[   3483.0] L PostProcessingActor[SpotLight_BG2] - EventEditLocationalLight (#4, concurrent=1)
[   3483.0] L PostProcessingActor[SpotLight_Up] - EventEditLocationalLight (#9, concurrent=1)
[   3483.0] L PostProcessingActor[Light_Ganon] - EventEditLocationalLight (#14, concurrent=1)
[   3483.0] L EventWorldManagerController[1] - Event_SetWindForTimeline (#27, concurrent=0)
[   3483.0] L PostProcessingActor[Lighting] - EventEditLocationalLight (#32, concurrent=1)
[   3483.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#55, concurrent=0)
