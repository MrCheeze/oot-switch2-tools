-------- Event timeline: Dm_SpiritTemple_BossOut_Env --------
actors: 5
clips: 49
oneshots: 0
cuts: 1
duration: 5595.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: PostProcessingActor[10]
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

Actor: EventWorldManagerController[0]
concurrent clips: 1
actions: ['Event_SetDemoPaletteForTimeline', 'Event_SetDemoPaletteTransitionForTimeline']
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


===== Timeline =====

[      0.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#17, concurrent=0)
               duration: 99.0
               DemoPaletteName: Dm_SpiritTemple_BossOut_C01
               IsWaitEnd: true
[     47.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#10, concurrent=0)
               duration: 45.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Doon
[     92.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#10, concurrent=0)
[     99.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#17, concurrent=0)
[     99.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#18, concurrent=0)
               duration: 279.0
               CurrDemoPaletteName: Dm_SpiritTemple_BossOut_C01_b
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_SpiritTemple_BossOut_C01
               RateEnd: 1.0
               RateFrame: 279.0
               RateStart: 0.0
[    126.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#6, concurrent=0)
               duration: 44.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_GataGata
[    130.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#11, concurrent=0)
               duration: 30.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Doon
[    160.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#11, concurrent=0)
[    170.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#6, concurrent=0)
[    186.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#7, concurrent=0)
               duration: 30.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_GataGata
[    188.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#12, concurrent=0)
               duration: 30.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Don
[    216.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#7, concurrent=0)
[    218.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#12, concurrent=0)
[    224.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#8, concurrent=0)
               duration: 34.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_GataGata
[    226.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#13, concurrent=0)
               duration: 30.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Don
[    256.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#13, concurrent=0)
[    258.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#8, concurrent=0)
[    264.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#14, concurrent=0)
               duration: 30.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Don
[    294.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#14, concurrent=0)
[    304.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#15, concurrent=0)
               duration: 15.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Biyoon
[    319.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#15, concurrent=0)
[    378.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#18, concurrent=0)
[    378.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#9, concurrent=0)
               duration: 65.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Dooon
[    378.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#16, concurrent=0)
               duration: 65.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Dohoon
[    378.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#19, concurrent=0)
               duration: 14.0
               DemoPaletteName: Dm_SpiritTemple_BossOut_C01_b
               IsWaitEnd: true
[    392.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#19, concurrent=0)
[    392.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#20, concurrent=0)
               duration: 188.0
               DemoPaletteName: Dm_SpiritTemple_BossOut_C01
               IsWaitEnd: true
[    443.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#9, concurrent=0)
[    443.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#16, concurrent=0)
[    580.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#20, concurrent=0)
[    580.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#21, concurrent=0)
               duration: 6.0
               DemoPaletteName: Dm_SpiritTemple_BossOut_C02
               IsWaitEnd: true
[    586.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#21, concurrent=0)
[    586.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#22, concurrent=0)
               duration: 306.0
               CurrDemoPaletteName: Dm_SpiritTemple_BossOut_C02_c
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_SpiritTemple_BossOut_C02
               RateEnd: 1.0
               RateFrame: 60.0
               RateStart: 0.0
[    892.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#22, concurrent=0)
[    892.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#23, concurrent=0)
               duration: 142.0
               CurrDemoPaletteName: Dm_SpiritTemple_BossOut_C02_b
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_SpiritTemple_BossOut_C02_c
               RateEnd: 1.0
               RateFrame: 60.0
               RateStart: 0.0
[   1034.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#23, concurrent=0)
[   1034.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#24, concurrent=0)
               duration: 6.0
               DemoPaletteName: Dm_SpiritTemple_BossOut_C02_b
               IsWaitEnd: true
[   1040.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#24, concurrent=0)
[   1040.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#25, concurrent=0)
               duration: 400.0
               DemoPaletteName: Dm_SpiritTemple_BossOut_C03
               IsWaitEnd: true
[   1440.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#25, concurrent=0)
[   1440.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#26, concurrent=0)
               duration: 400.0
               DemoPaletteName: Dm_SpiritTemple_BossOut_C04
               IsWaitEnd: true
[   1840.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#26, concurrent=0)
[   1840.0] E PostProcessingActor[10] - EventEditLocationalLight (#1, concurrent=1)
               duration: 340.0
               Color:
               - 0.5400000214576721
               - 1.399999976158142
               - 0.14000000059604645
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: UpSpot_Light_C06-C18_50
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1840.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#27, concurrent=0)
               duration: 340.0
               DemoPaletteName: Dm_SpiritTemple_BossOut_C05
               IsWaitEnd: true
[   2180.0] L PostProcessingActor[10] - EventEditLocationalLight (#1, concurrent=1)
[   2180.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#27, concurrent=0)
[   2180.0] E PostProcessingActor[10] - EventCreateLocationalLightToEventCenter (#0, concurrent=0)
               duration: 2405.0
               Direction:
               - 0.10868500173091888
               - -0.9911670088768005
               - 0.10868500173091888
               InnerAngle: 10.0
               IsIgnoreRot: false
               LightHash: UpSpot_Light_C06-C18_50
               LightType: 1
               OuterAngle: 16.0
               PositionOffset:
               - -0.9089999794960022
               - 20.0
               - -0.9089999794960022
[   2180.0] E PostProcessingActor[10] - EventEditLocationalLight (#2, concurrent=1)
               duration: 465.0
               Color:
               - 0.5400000214576721
               - 1.399999976158142
               - 0.14000000059604645
               EditColor: true
               EditIntensity: true
               EditSourceRadius: false
               FrameTransitionCount: 30
               Intensity: 40000.0
               IsFrameTransition: false
               LightHash: UpSpot_Light_C06-C18_50
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2180.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#28, concurrent=0)
               duration: 85.0
               DemoPaletteName: Dm_SpiritTemple_BossOut_C06
               IsWaitEnd: true
[   2265.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#28, concurrent=0)
[   2265.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#29, concurrent=0)
               duration: 230.0
               DemoPaletteName: Dm_SpiritTemple_BossOut_C07
               IsWaitEnd: true
[   2495.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#29, concurrent=0)
[   2495.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#30, concurrent=0)
               duration: 150.0
               DemoPaletteName: Dm_SpiritTemple_BossOut_C08
               IsWaitEnd: true
[   2495.0] E PostProcessingActor[11] - EventEditLocationalLight (#46, concurrent=1)
               duration: 150.0
               Color:
               - 0.5400000214576721
               - 1.399999976158142
               - 0.14000000059604645
               EditColor: true
               EditIntensity: true
               EditSourceRadius: false
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: UpSpot_Light_C09
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2645.0] L PostProcessingActor[10] - EventEditLocationalLight (#2, concurrent=1)
[   2645.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#30, concurrent=0)
[   2645.0] L PostProcessingActor[11] - EventEditLocationalLight (#46, concurrent=1)
[   2645.0] E PostProcessingActor[10] - EventEditLocationalLight (#3, concurrent=1)
               duration: 260.0
               Color:
               - 0.5400000214576721
               - 1.399999976158142
               - 0.14000000059604645
               EditColor: true
               EditIntensity: true
               EditSourceRadius: false
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: UpSpot_Light_C06-C18_50
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2645.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#31, concurrent=0)
               duration: 260.0
               DemoPaletteName: Dm_SpiritTemple_BossOut_C09
               IsWaitEnd: true
[   2645.0] E PostProcessingActor[11] - EventCreateLocationalLightToEventCenter (#45, concurrent=0)
               duration: 260.0
               Direction:
               - 0.0
               - -1.0
               - 0.0
               InnerAngle: 10.0
               IsIgnoreRot: false
               LightHash: UpSpot_Light_C09
               LightType: 1
               OuterAngle: 20.0
               PositionOffset:
               - 0.0
               - 20.0
               - 0.0
[   2645.0] E PostProcessingActor[11] - EventEditLocationalLight (#47, concurrent=1)
               duration: 260.0
               Color:
               - 0.5400000214576721
               - 1.399999976158142
               - 0.14000000059604645
               EditColor: true
               EditIntensity: true
               EditSourceRadius: false
               FrameTransitionCount: 30
               Intensity: 20000.0
               IsFrameTransition: false
               LightHash: UpSpot_Light_C09
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2905.0] L PostProcessingActor[10] - EventEditLocationalLight (#3, concurrent=1)
[   2905.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#31, concurrent=0)
[   2905.0] L PostProcessingActor[11] - EventCreateLocationalLightToEventCenter (#45, concurrent=0)
[   2905.0] L PostProcessingActor[11] - EventEditLocationalLight (#47, concurrent=1)
[   2905.0] E PostProcessingActor[10] - EventEditLocationalLight (#4, concurrent=1)
               duration: 1680.0
               Color:
               - 0.5400000214576721
               - 1.399999976158142
               - 0.14000000059604645
               EditColor: true
               EditIntensity: true
               EditSourceRadius: false
               FrameTransitionCount: 30
               Intensity: 40000.0
               IsFrameTransition: false
               LightHash: UpSpot_Light_C06-C18_50
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2905.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#32, concurrent=0)
               duration: 340.0
               DemoPaletteName: Dm_SpiritTemple_BossOut_C10
               IsWaitEnd: true
[   2905.0] E PostProcessingActor[11] - EventEditLocationalLight (#48, concurrent=1)
               duration: 340.0
               Color:
               - 0.5400000214576721
               - 1.399999976158142
               - 0.14000000059604645
               EditColor: true
               EditIntensity: true
               EditSourceRadius: false
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: UpSpot_Light_C09
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   3245.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#32, concurrent=0)
[   3245.0] L PostProcessingActor[11] - EventEditLocationalLight (#48, concurrent=1)
[   3245.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#33, concurrent=0)
               duration: 125.0
               DemoPaletteName: Dm_SpiritTemple_BossOut_C13
               IsWaitEnd: true
[   3370.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#33, concurrent=0)
[   3370.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#34, concurrent=0)
               duration: 180.0
               DemoPaletteName: Dm_SpiritTemple_BossOut_C14
               IsWaitEnd: true
[   3550.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#34, concurrent=0)
[   3550.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#35, concurrent=0)
               duration: 170.0
               DemoPaletteName: Dm_SpiritTemple_BossOut_C15
               IsWaitEnd: true
[   3720.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#35, concurrent=0)
[   3720.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#36, concurrent=0)
               duration: 30.0
               DemoPaletteName: Dm_SpiritTemple_BossOut_C16
               IsWaitEnd: true
[   3750.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#36, concurrent=0)
[   3750.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#37, concurrent=0)
               duration: 40.0
               DemoPaletteName: Dm_SpiritTemple_BossOut_C17
               IsWaitEnd: true
[   3790.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#37, concurrent=0)
[   3790.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#38, concurrent=0)
               duration: 45.0
               DemoPaletteName: Dm_SpiritTemple_BossOut_C18
               IsWaitEnd: true
[   3835.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#38, concurrent=0)
[   3835.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#39, concurrent=0)
               duration: 70.0
               DemoPaletteName: Dm_SpiritTemple_BossOut_C18_50
               IsWaitEnd: true
[   3905.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#39, concurrent=0)
[   3905.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#40, concurrent=0)
               duration: 280.0
               DemoPaletteName: Dm_SpiritTemple_BossOut_C21
               IsWaitEnd: true
[   4185.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#40, concurrent=0)
[   4185.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#41, concurrent=0)
               duration: 400.0
               DemoPaletteName: Dm_SpiritTemple_BossOut_C22
               IsWaitEnd: true
[   4585.0] L PostProcessingActor[10] - EventCreateLocationalLightToEventCenter (#0, concurrent=0)
[   4585.0] L PostProcessingActor[10] - EventEditLocationalLight (#4, concurrent=1)
[   4585.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#41, concurrent=0)
[   4585.0] E PostProcessingActor[10] - EventEditLocationalLight (#5, concurrent=1)
               duration: 280.0
               Color:
               - 0.5400000214576721
               - 1.399999976158142
               - 0.14000000059604645
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: UpSpot_Light_C06-C18_50
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   4585.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#42, concurrent=0)
               duration: 217.0
               DemoPaletteName: Dm_SpiritTemple_BossOut_C23
               IsWaitEnd: true
[   4802.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#42, concurrent=0)
[   4802.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#43, concurrent=0)
               duration: 503.0
               CurrDemoPaletteName: Dm_SpiritTemple_BossOut_C23_b
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_SpiritTemple_BossOut_C23
               RateEnd: 1.0
               RateFrame: 503.0
               RateStart: 0.0
[   4865.0] L PostProcessingActor[10] - EventEditLocationalLight (#5, concurrent=1)
[   5305.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#43, concurrent=0)
[   5305.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#44, concurrent=0)
               duration: 290.0
               DemoPaletteName: Dm_SpiritTemple_BossOut_C23_b
               IsWaitEnd: true
[   5595.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#44, concurrent=0)
