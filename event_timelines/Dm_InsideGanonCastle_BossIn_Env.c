-------- Event timeline: Dm_InsideGanonCastle_BossIn_Env --------
actors: 4
clips: 62
oneshots: 0
cuts: 1
duration: 9068.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: PostProcessingActor[Light]
concurrent clips: 2
actions: ['EventCreateLocationalLightToEventCenter', 'EventEditLocationalLight']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[Light2]
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

[      0.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#17, concurrent=0)
               duration: 150.0
               DemoPaletteName: Dm_InsideGanonCastle_BossIn_C01
               IsWaitEnd: true
[    150.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#17, concurrent=0)
[    150.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#18, concurrent=0)
               duration: 90.0
               CurrDemoPaletteName: Dm_InsideGanonCastle_BossIn_C01A
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_InsideGanonCastle_BossIn_C01
               RateEnd: 1.0
               RateFrame: 60.0
               RateStart: 0.0
[    240.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#18, concurrent=0)
[    240.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#19, concurrent=0)
               duration: 479.0
               DemoPaletteName: Dm_InsideGanonCastle_BossIn_C01A
               IsWaitEnd: true
[    719.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#19, concurrent=0)
[    719.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#20, concurrent=0)
               duration: 60.0
               DemoPaletteName: Dm_InsideGanonCastle_BossIn_C02
               IsWaitEnd: true
[    779.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#20, concurrent=0)
[    779.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#21, concurrent=0)
               duration: 119.0
               DemoPaletteName: Dm_InsideGanonCastle_BossIn_C02A
               IsWaitEnd: true
[    898.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#21, concurrent=0)
[    898.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#22, concurrent=0)
               duration: 179.0
               DemoPaletteName: Dm_InsideGanonCastle_BossIn_C03
               IsWaitEnd: true
[   1077.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#22, concurrent=0)
[   1077.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#23, concurrent=0)
               duration: 244.0
               DemoPaletteName: Dm_InsideGanonCastle_BossIn_C04
               IsWaitEnd: true
[   1321.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#23, concurrent=0)
[   1321.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#24, concurrent=0)
               duration: 354.0
               DemoPaletteName: Dm_InsideGanonCastle_BossIn_C05
               IsWaitEnd: true
[   1675.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#24, concurrent=0)
[   1675.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#25, concurrent=0)
               duration: 134.0
               DemoPaletteName: Dm_InsideGanonCastle_BossIn_C06
               IsWaitEnd: true
[   1705.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#10, concurrent=0)
               duration: 90.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Piton
[   1795.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#10, concurrent=0)
[   1809.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#25, concurrent=0)
[   1809.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#26, concurrent=0)
               duration: 255.0
               DemoPaletteName: Dm_InsideGanonCastle_BossIn_C07
               IsWaitEnd: true
[   2064.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#26, concurrent=0)
[   2064.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#27, concurrent=0)
               duration: 251.0
               DemoPaletteName: Dm_InsideGanonCastle_BossIn_C08
               IsWaitEnd: true
[   2293.0] E PostProcessingActor[Light] - EventCreateLocationalLightToEventCenter (#0, concurrent=0)
               duration: 100.0
               Direction:
               - 0.699999988079071
               - -0.6000000238418579
               - -0.30000001192092896
               InnerAngle: 1.0
               IsIgnoreRot: false
               LightHash: Piano
               LightType: 1
               OuterAngle: 55.0
               PositionOffset:
               - -1.4500000476837158
               - 9.0
               - -14.5
[   2293.0] E PostProcessingActor[Light] - EventEditLocationalLight (#1, concurrent=1)
               duration: 100.0
               Color:
               - 1.0
               - 0.550000011920929
               - 0.30000001192092896
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 0
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: Piano
               LocationalLightCreateType: 0
               SourceRadius: 1.0
[   2315.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#27, concurrent=0)
[   2315.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#28, concurrent=0)
               duration: 20.0
               CurrDemoPaletteName: Dm_InsideGanonCastle_BossIn_C08A
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_InsideGanonCastle_BossIn_C08
               RateEnd: 1.0
               RateFrame: 20.0
               RateStart: 0.0
[   2335.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#28, concurrent=0)
[   2335.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#29, concurrent=0)
               duration: 58.0
               DemoPaletteName: Dm_InsideGanonCastle_BossIn_C08A
               IsWaitEnd: true
[   2393.0] L PostProcessingActor[Light] - EventCreateLocationalLightToEventCenter (#0, concurrent=0)
[   2393.0] L PostProcessingActor[Light] - EventEditLocationalLight (#1, concurrent=1)
[   2393.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#29, concurrent=0)
[   2393.0] E PostProcessingActor[Light] - EventEditLocationalLight (#2, concurrent=1)
               duration: 563.0
               Color:
               - 1.0
               - 0.550000011920929
               - 0.30000001192092896
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 0
               Intensity: 10.0
               IsFrameTransition: false
               LightHash: Piano
               LocationalLightCreateType: 0
               SourceRadius: 1.0
[   2393.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#30, concurrent=0)
               duration: 234.0
               DemoPaletteName: Dm_InsideGanonCastle_BossIn_C09
               IsWaitEnd: true
[   2627.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#30, concurrent=0)
[   2627.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#31, concurrent=0)
               duration: 83.0
               DemoPaletteName: Dm_InsideGanonCastle_BossIn_C10
               IsWaitEnd: true
[   2710.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#31, concurrent=0)
[   2710.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#32, concurrent=0)
               duration: 45.0
               CurrDemoPaletteName: Dm_InsideGanonCastle_BossIn_C10A
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_InsideGanonCastle_BossIn_C10
               RateEnd: 1.0
               RateFrame: 45.0
               RateStart: 0.0
[   2733.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#11, concurrent=0)
               duration: 90.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Piton
[   2755.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#32, concurrent=0)
[   2755.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#33, concurrent=0)
               duration: 201.0
               DemoPaletteName: Dm_InsideGanonCastle_BossIn_C10A
               IsWaitEnd: true
[   2823.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#11, concurrent=0)
[   2956.0] L PostProcessingActor[Light] - EventEditLocationalLight (#2, concurrent=1)
[   2956.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#33, concurrent=0)
[   2956.0] E PostProcessingActor[Light] - EventEditLocationalLight (#3, concurrent=1)
               duration: 358.0
               Color:
               - 1.0
               - 0.550000011920929
               - 0.30000001192092896
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 0
               Intensity: 15.0
               IsFrameTransition: false
               LightHash: Piano
               LocationalLightCreateType: 0
               SourceRadius: 1.0
[   2956.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#34, concurrent=0)
               duration: 135.0
               DemoPaletteName: Dm_InsideGanonCastle_BossIn_C11
               IsWaitEnd: true
[   3091.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#34, concurrent=0)
[   3091.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#35, concurrent=0)
               duration: 59.0
               DemoPaletteName: Dm_InsideGanonCastle_BossIn_C12
               IsWaitEnd: true
[   3150.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#35, concurrent=0)
[   3150.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#36, concurrent=0)
               duration: 59.0
               DemoPaletteName: Dm_InsideGanonCastle_BossIn_C13
               IsWaitEnd: true
[   3209.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#36, concurrent=0)
[   3209.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#37, concurrent=0)
               duration: 105.0
               DemoPaletteName: Dm_InsideGanonCastle_BossIn_C13a
               IsWaitEnd: true
[   3314.0] L PostProcessingActor[Light] - EventEditLocationalLight (#3, concurrent=1)
[   3314.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#37, concurrent=0)
[   3314.0] E PostProcessingActor[Light] - EventEditLocationalLight (#4, concurrent=1)
               duration: 469.0
               Color:
               - 1.0
               - 0.44999998807907104
               - 0.15000000596046448
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 0
               Intensity: 60.0
               IsFrameTransition: false
               LightHash: Piano
               LocationalLightCreateType: 0
               SourceRadius: 1.0
[   3314.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#38, concurrent=0)
               duration: 469.0
               DemoPaletteName: Dm_InsideGanonCastle_BossIn_C14
               IsWaitEnd: true
[   3328.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#12, concurrent=0)
               duration: 90.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Biyoon
[   3418.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#12, concurrent=0)
[   3783.0] L PostProcessingActor[Light] - EventEditLocationalLight (#4, concurrent=1)
[   3783.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#38, concurrent=0)
[   3783.0] E PostProcessingActor[Light] - EventEditLocationalLight (#5, concurrent=1)
               duration: 5285.0
               Color:
               - 1.0
               - 0.550000011920929
               - 0.30000001192092896
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 0
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: Piano
               LocationalLightCreateType: 0
               SourceRadius: 1.0
[   3783.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#39, concurrent=0)
               duration: 239.0
               DemoPaletteName: Dm_InsideGanonCastle_BossIn_C15
               IsWaitEnd: true
[   4022.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#39, concurrent=0)
[   4022.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#40, concurrent=0)
               duration: 179.0
               DemoPaletteName: Dm_InsideGanonCastle_BossIn_C16
               IsWaitEnd: true
[   4201.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#40, concurrent=0)
[   4201.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#41, concurrent=0)
               duration: 320.0
               DemoPaletteName: Dm_InsideGanonCastle_BossIn_C17
               IsWaitEnd: true
[   4521.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#41, concurrent=0)
[   4521.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#42, concurrent=0)
               duration: 194.0
               DemoPaletteName: Dm_InsideGanonCastle_BossIn_C17a
               IsWaitEnd: true
[   4715.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#42, concurrent=0)
[   4715.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#43, concurrent=0)
               duration: 329.0
               DemoPaletteName: Dm_InsideGanonCastle_BossIn_C18
               IsWaitEnd: true
[   5044.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#43, concurrent=0)
[   5044.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#44, concurrent=0)
               duration: 350.0
               DemoPaletteName: Dm_InsideGanonCastle_BossIn_C19
               IsWaitEnd: true
[   5294.0] E PostProcessingActor[Light2] - EventCreateLocationalLightToEventCenter (#6, concurrent=0)
               duration: 100.0
               Direction:
               - 0.0
               - -1.0
               - 0.0
               InnerAngle: 15.0
               IsIgnoreRot: false
               LightHash: Point_C21
               LightType: 0
               OuterAngle: 45.0
               PositionOffset:
               - -0.07999999821186066
               - 9.0
               - -15.550000190734863
[   5294.0] E PostProcessingActor[Light2] - EventEditLocationalLight (#7, concurrent=1)
               duration: 655.0
               Color:
               - 1.4500000476837158
               - 0.8500000238418579
               - 0.6000000238418579
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 0
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: Point_C21
               LocationalLightCreateType: 0
               SourceRadius: 0.5
[   5394.0] L PostProcessingActor[Light2] - EventCreateLocationalLightToEventCenter (#6, concurrent=0)
[   5394.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#44, concurrent=0)
[   5394.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#45, concurrent=0)
               duration: 555.0
               DemoPaletteName: Dm_InsideGanonCastle_BossIn_C020
               IsWaitEnd: true
[   5949.0] L PostProcessingActor[Light2] - EventEditLocationalLight (#7, concurrent=1)
[   5949.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#45, concurrent=0)
[   5949.0] E PostProcessingActor[Light2] - EventEditLocationalLight (#8, concurrent=1)
               duration: 664.0
               Color:
               - 1.4500000476837158
               - 0.8500000238418579
               - 0.6000000238418579
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 0
               Intensity: 0.6000000238418579
               IsFrameTransition: false
               LightHash: Point_C21
               LocationalLightCreateType: 0
               SourceRadius: 1.0
[   5949.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#46, concurrent=0)
               duration: 442.0
               DemoPaletteName: Dm_InsideGanonCastle_BossIn_C021
               IsWaitEnd: true
[   6385.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#13, concurrent=0)
               duration: 90.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Piton
[   6391.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#46, concurrent=0)
[   6391.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#47, concurrent=0)
               duration: 14.0
               CurrDemoPaletteName: Dm_InsideGanonCastle_BossIn_C021A
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_InsideGanonCastle_BossIn_C020
               RateEnd: 1.0
               RateFrame: 60.0
               RateStart: 0.0
[   6405.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#47, concurrent=0)
[   6405.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#48, concurrent=0)
               duration: 208.0
               DemoPaletteName: Dm_InsideGanonCastle_BossIn_C021A
               IsWaitEnd: true
[   6475.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#13, concurrent=0)
[   6586.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#14, concurrent=0)
               duration: 60.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Bofuhn
[   6613.0] L PostProcessingActor[Light2] - EventEditLocationalLight (#8, concurrent=1)
[   6613.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#48, concurrent=0)
[   6613.0] E PostProcessingActor[Light2] - EventEditLocationalLight (#9, concurrent=1)
               duration: 2455.0
               Color:
               - 1.4500000476837158
               - 0.8500000238418579
               - 0.6000000238418579
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 0
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: Point_C21
               LocationalLightCreateType: 0
               SourceRadius: 0.5
[   6613.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#49, concurrent=0)
               duration: 122.0
               DemoPaletteName: Dm_InsideGanonCastle_BossIn_C022
               IsWaitEnd: true
[   6646.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#14, concurrent=0)
[   6735.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#49, concurrent=0)
[   6735.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#50, concurrent=0)
               duration: 627.0
               DemoPaletteName: Dm_InsideGanonCastle_BossIn_C023
               IsWaitEnd: true
[   7362.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#50, concurrent=0)
[   7362.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#51, concurrent=0)
               duration: 45.0
               DemoPaletteName: Dm_InsideGanonCastle_BossIn_C024A
               IsWaitEnd: true
[   7407.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#51, concurrent=0)
[   7407.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#52, concurrent=0)
               duration: 20.0
               CurrDemoPaletteName: Dm_InsideGanonCastle_BossIn_C024
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_InsideGanonCastle_BossIn_C024A
               RateEnd: 1.0
               RateFrame: 20.0
               RateStart: 0.0
[   7427.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#52, concurrent=0)
[   7427.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#53, concurrent=0)
               duration: 65.0
               DemoPaletteName: Dm_InsideGanonCastle_BossIn_C024
               IsWaitEnd: true
[   7492.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#53, concurrent=0)
[   7492.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#54, concurrent=0)
               duration: 198.0
               DemoPaletteName: Dm_InsideGanonCastle_BossIn_C025
               IsWaitEnd: true
[   7668.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#15, concurrent=0)
               duration: 100.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Dooon
[   7690.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#54, concurrent=0)
[   7690.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#55, concurrent=0)
               duration: 20.0
               CurrDemoPaletteName: Dm_InsideGanonCastle_BossIn_C26
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_InsideGanonCastle_BossIn_C025
               RateEnd: 1.0
               RateFrame: 20.0
               RateStart: 0.0
[   7710.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#55, concurrent=0)
[   7710.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#56, concurrent=0)
               duration: 89.0
               DemoPaletteName: Dm_InsideGanonCastle_BossIn_C26
               IsWaitEnd: true
[   7768.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#15, concurrent=0)
[   7799.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#56, concurrent=0)
[   7799.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#57, concurrent=0)
               duration: 190.0
               DemoPaletteName: Dm_InsideGanonCastle_BossIn_C27
               IsWaitEnd: true
[   7989.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#57, concurrent=0)
[   7989.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#58, concurrent=0)
               duration: 70.0
               DemoPaletteName: Dm_InsideGanonCastle_BossIn_C28
               IsWaitEnd: true
[   8059.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#58, concurrent=0)
[   8059.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#59, concurrent=0)
               duration: 20.0
               CurrDemoPaletteName: Dm_InsideGanonCastle_BossIn_C28A
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_InsideGanonCastle_BossIn_C28
               RateEnd: 1.0
               RateFrame: 60.0
               RateStart: 0.0
[   8079.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#59, concurrent=0)
[   8079.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#60, concurrent=0)
               duration: 199.0
               DemoPaletteName: Dm_InsideGanonCastle_BossIn_C28A
               IsWaitEnd: true
[   8278.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#60, concurrent=0)
[   8278.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#61, concurrent=0)
               duration: 504.0
               DemoPaletteName: Dm_InsideGanonCastle_BossIn_C29
               IsWaitEnd: true
[   8782.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#61, concurrent=0)
[   8782.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#16, concurrent=0)
               duration: 60.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Doon
[   8842.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#16, concurrent=0)
[   9068.0] L PostProcessingActor[Light] - EventEditLocationalLight (#5, concurrent=1)
[   9068.0] L PostProcessingActor[Light2] - EventEditLocationalLight (#9, concurrent=1)
