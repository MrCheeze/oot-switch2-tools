-------- Event timeline: Dm_InsideGanonCastle_0110_Env --------
actors: 4
clips: 48
oneshots: 0
cuts: 1
duration: 4909.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: EventWorldManagerController[Wind]
concurrent clips: 1
actions: ['Event_SetWindForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[Light]
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


===== Timeline =====

[      0.0] E EventWorldManagerController[Wind] - Event_SetWindForTimeline (#0, concurrent=0)
               duration: 360.0
               Azimuth: 270.0
               Elevation: 0.0
               IsImmTrans: true
               IsWaitEnd: true
               Speed: 2.0
[      0.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#21, concurrent=0)
               duration: 360.0
               DemoPaletteName: Dm_InsideGanonCastle_0110_C01
               IsWaitEnd: true
[    360.0] L EventWorldManagerController[Wind] - Event_SetWindForTimeline (#0, concurrent=0)
[    360.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#21, concurrent=0)
[    360.0] E EventWorldManagerController[Wind] - Event_SetWindForTimeline (#1, concurrent=0)
               duration: 520.0
               Azimuth: 225.0
               Elevation: 0.0
               IsImmTrans: true
               IsWaitEnd: true
               Speed: 3.0
[    360.0] E PostProcessingActor[Light] - EventCreateLocationalLightToEventCenter (#7, concurrent=0)
               duration: 100.0
               Direction:
               - 0.0
               - -1.0
               - 0.0
               InnerAngle: 15.0
               IsIgnoreRot: false
               LightHash: C02_Link
               LightType: 0
               OuterAngle: 45.0
               PositionOffset:
               - 0.550000011920929
               - 2.9000000953674316
               - 1.149999976158142
[    360.0] E PostProcessingActor[Light] - EventEditLocationalLight (#8, concurrent=1)
               duration: 520.0
               Color:
               - 1.2000000476837158
               - 1.0
               - 0.5
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 0
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: C02_Link
               LocationalLightCreateType: 0
               SourceRadius: 1.5
[    360.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#22, concurrent=0)
               duration: 520.0
               DemoPaletteName: Dm_InsideGanonCastle_0110_C02
               IsWaitEnd: true
[    460.0] L PostProcessingActor[Light] - EventCreateLocationalLightToEventCenter (#7, concurrent=0)
[    880.0] L EventWorldManagerController[Wind] - Event_SetWindForTimeline (#1, concurrent=0)
[    880.0] L PostProcessingActor[Light] - EventEditLocationalLight (#8, concurrent=1)
[    880.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#22, concurrent=0)
[    880.0] E EventWorldManagerController[Wind] - Event_SetWindForTimeline (#2, concurrent=0)
               duration: 2344.0
               Azimuth: 180.0
               Elevation: 0.0
               IsImmTrans: true
               IsWaitEnd: true
               Speed: 4.0
[    880.0] E PostProcessingActor[Light] - EventEditLocationalLight (#9, concurrent=1)
               duration: 189.0
               Color:
               - 1.2000000476837158
               - 1.0
               - 0.5
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 60
               Intensity: 2000.0
               IsFrameTransition: true
               LightHash: C02_Link
               LocationalLightCreateType: 0
               SourceRadius: 1.5
[    880.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#23, concurrent=0)
               duration: 60.0
               CurrDemoPaletteName: Dm_InsideGanonCastle_0110_C02A
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_InsideGanonCastle_0110_C02
               RateEnd: 1.0
               RateFrame: 60.0
               RateStart: 0.0
[    908.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#11, concurrent=0)
               duration: 100.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Don
[    940.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#23, concurrent=0)
[    940.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#24, concurrent=0)
               duration: 129.0
               DemoPaletteName: Dm_InsideGanonCastle_0110_C02A
               IsWaitEnd: true
[   1008.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#11, concurrent=0)
[   1069.0] L PostProcessingActor[Light] - EventEditLocationalLight (#9, concurrent=1)
[   1069.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#24, concurrent=0)
[   1069.0] E PostProcessingActor[Light] - EventEditLocationalLight (#10, concurrent=1)
               duration: 3840.0
               Color:
               - 1.2000000476837158
               - 1.0
               - 0.5
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 0
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: C02_Link
               LocationalLightCreateType: 0
               SourceRadius: 1.5
[   1069.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#25, concurrent=0)
               duration: 299.0
               DemoPaletteName: Dm_InsideGanonCastle_0110_C03
               IsWaitEnd: true
[   1368.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#25, concurrent=0)
[   1368.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#26, concurrent=0)
               duration: 229.0
               DemoPaletteName: Dm_InsideGanonCastle_0110_C04
               IsWaitEnd: true
[   1597.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#26, concurrent=0)
[   1597.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#27, concurrent=0)
               duration: 40.0
               DemoPaletteName: Dm_InsideGanonCastle_0110_C05
               IsWaitEnd: true
[   1637.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#27, concurrent=0)
[   1637.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#28, concurrent=0)
               duration: 50.0
               CurrDemoPaletteName: Dm_InsideGanonCastle_0110_C05A
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_InsideGanonCastle_0110_C05
               RateEnd: 1.0
               RateFrame: 50.0
               RateStart: 0.0
[   1687.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#28, concurrent=0)
[   1687.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#29, concurrent=0)
               duration: 170.0
               DemoPaletteName: Dm_InsideGanonCastle_0110_C05A
               IsWaitEnd: true
[   1857.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#29, concurrent=0)
[   1857.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#30, concurrent=0)
               duration: 293.0
               DemoPaletteName: Dm_InsideGanonCastle_0110_C06
               IsWaitEnd: true
[   2150.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#30, concurrent=0)
[   2150.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#31, concurrent=0)
               duration: 150.0
               CurrDemoPaletteName: Dm_InsideGanonCastle_0110_C06A
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_InsideGanonCastle_0110_C06
               RateEnd: 1.0
               RateFrame: 150.0
               RateStart: 0.0
[   2300.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#31, concurrent=0)
[   2300.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#32, concurrent=0)
               duration: 342.0
               DemoPaletteName: Dm_InsideGanonCastle_0110_C06A
               IsWaitEnd: true
[   2642.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#32, concurrent=0)
[   2642.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#33, concurrent=0)
               duration: 60.0
               CurrDemoPaletteName: Dm_InsideGanonCastle_0110_C07
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_InsideGanonCastle_0110_C07A
               RateEnd: 1.0
               RateFrame: 60.0
               RateStart: 0.0
[   2702.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#33, concurrent=0)
[   2702.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#34, concurrent=0)
               duration: 198.0
               DemoPaletteName: Dm_InsideGanonCastle_0110_C07
               IsWaitEnd: true
[   2900.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#34, concurrent=0)
[   2900.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#35, concurrent=0)
               duration: 324.0
               DemoPaletteName: Dm_InsideGanonCastle_0110_C08
               IsWaitEnd: true
[   3224.0] L EventWorldManagerController[Wind] - Event_SetWindForTimeline (#2, concurrent=0)
[   3224.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#35, concurrent=0)
[   3224.0] E EventWorldManagerController[Wind] - Event_SetWindForTimeline (#3, concurrent=0)
               duration: 214.0
               Azimuth: 45.0
               Elevation: 0.0
               IsImmTrans: true
               IsWaitEnd: true
               Speed: 4.0
[   3224.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#36, concurrent=0)
               duration: 214.0
               DemoPaletteName: Dm_InsideGanonCastle_0110_C08a
               IsWaitEnd: true
[   3438.0] L EventWorldManagerController[Wind] - Event_SetWindForTimeline (#3, concurrent=0)
[   3438.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#36, concurrent=0)
[   3438.0] E EventWorldManagerController[Wind] - Event_SetWindForTimeline (#4, concurrent=0)
               duration: 205.0
               Azimuth: 180.0
               Elevation: 0.0
               IsImmTrans: true
               IsWaitEnd: true
               Speed: 4.0
[   3438.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#37, concurrent=0)
               duration: 205.0
               DemoPaletteName: Dm_InsideGanonCastle_0110_C09
               IsWaitEnd: true
[   3643.0] L EventWorldManagerController[Wind] - Event_SetWindForTimeline (#4, concurrent=0)
[   3643.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#37, concurrent=0)
[   3643.0] E EventWorldManagerController[Wind] - Event_SetWindForTimeline (#5, concurrent=0)
               duration: 591.0
               Azimuth: 135.0
               Elevation: 0.0
               IsImmTrans: true
               IsWaitEnd: true
               Speed: 6.0
[   3643.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#38, concurrent=0)
               duration: 198.0
               DemoPaletteName: Dm_InsideGanonCastle_0110_C10
               IsWaitEnd: true
[   3841.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#38, concurrent=0)
[   3841.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#39, concurrent=0)
               duration: 120.0
               DemoPaletteName: Dm_InsideGanonCastle_0110_C11
               IsWaitEnd: true
[   3866.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#12, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Doka
[   3878.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#12, concurrent=0)
[   3878.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#13, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Doka
[   3890.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#13, concurrent=0)
[   3903.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#14, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Doka
[   3915.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#14, concurrent=0)
[   3961.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#39, concurrent=0)
[   3961.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#40, concurrent=0)
               duration: 47.0
               DemoPaletteName: Dm_InsideGanonCastle_0110_C12
               IsWaitEnd: true
[   4008.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#40, concurrent=0)
[   4008.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#41, concurrent=0)
               duration: 30.0
               CurrDemoPaletteName: Dm_InsideGanonCastle_0110_C12A
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_InsideGanonCastle_0110_C12
               RateEnd: 1.0
               RateFrame: 30.0
               RateStart: 0.0
[   4038.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#41, concurrent=0)
[   4038.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#42, concurrent=0)
               duration: 98.0
               DemoPaletteName: Dm_InsideGanonCastle_0110_C12A
               IsWaitEnd: true
[   4136.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#42, concurrent=0)
[   4136.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#43, concurrent=0)
               duration: 98.0
               DemoPaletteName: Dm_InsideGanonCastle_0110_C13
               IsWaitEnd: true
[   4156.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#15, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Doka
[   4168.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#15, concurrent=0)
[   4183.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#16, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Doka
[   4195.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#16, concurrent=0)
[   4234.0] L EventWorldManagerController[Wind] - Event_SetWindForTimeline (#5, concurrent=0)
[   4234.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#43, concurrent=0)
[   4234.0] E EventWorldManagerController[Wind] - Event_SetWindForTimeline (#6, concurrent=0)
               duration: 675.0
               Azimuth: 90.0
               Elevation: 0.0
               IsImmTrans: true
               IsWaitEnd: true
               Speed: 6.0
[   4234.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#44, concurrent=0)
               duration: 245.0
               DemoPaletteName: Dm_InsideGanonCastle_0110_C14
               IsWaitEnd: true
[   4284.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#17, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_DoDon
[   4296.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#17, concurrent=0)
[   4386.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#18, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Doon
[   4398.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#18, concurrent=0)
[   4479.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#44, concurrent=0)
[   4479.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#45, concurrent=0)
               duration: 321.0
               DemoPaletteName: Dm_InsideGanonCastle_0110_C16
               IsWaitEnd: true
[   4800.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#45, concurrent=0)
[   4800.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#46, concurrent=0)
               duration: 20.0
               CurrDemoPaletteName: Dm_InsideGanonCastle_0110_C16A
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_InsideGanonCastle_0110_C16
               RateEnd: 1.0
               RateFrame: 20.0
               RateStart: 0.0
[   4812.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#19, concurrent=0)
               duration: 26.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Doon
[   4820.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#46, concurrent=0)
[   4820.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#47, concurrent=0)
               duration: 89.0
               DemoPaletteName: Dm_InsideGanonCastle_0110_C16A
               IsWaitEnd: true
[   4838.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#19, concurrent=0)
[   4838.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#20, concurrent=0)
               duration: 45.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Don
[   4883.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#20, concurrent=0)
[   4909.0] L EventWorldManagerController[Wind] - Event_SetWindForTimeline (#6, concurrent=0)
[   4909.0] L PostProcessingActor[Light] - EventEditLocationalLight (#10, concurrent=1)
[   4909.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#47, concurrent=0)
