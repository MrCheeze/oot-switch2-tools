-------- Event timeline: Dm_FireTemple_BossIn_Env --------
actors: 4
clips: 22
oneshots: 0
cuts: 1
duration: 2831.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

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

[      0.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
               duration: 201.0
               DemoPaletteName: Dm_FireTemple_BossIn_C01
               IsWaitEnd: true
[    201.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
[    201.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#12, concurrent=0)
               duration: 185.0
               DemoPaletteName: Dm_FireTemple_BossIn_C02
               IsWaitEnd: true
[    386.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#12, concurrent=0)
[    386.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#13, concurrent=0)
               duration: 160.0
               DemoPaletteName: Dm_FireTemple_BossIn_C03
               IsWaitEnd: true
[    546.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#13, concurrent=0)
[    546.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#14, concurrent=0)
               duration: 160.0
               DemoPaletteName: Dm_FireTemple_BossIn_C04
               IsWaitEnd: true
[    706.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#14, concurrent=0)
[    706.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#15, concurrent=0)
               duration: 210.0
               DemoPaletteName: Dm_FireTemple_BossIn_C05
               IsWaitEnd: true
[    842.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#7, concurrent=0)
               duration: 73.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_Dooon
[    915.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#7, concurrent=0)
[    916.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#15, concurrent=0)
[    916.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#16, concurrent=0)
               duration: 140.0
               DemoPaletteName: Dm_FireTemple_BossIn_C06
               IsWaitEnd: true
[   1036.0] E PostProcessingActor[1] - EventEditLocationalLight (#1, concurrent=1)
               duration: 20.0
               Color:
               - 2.678924083709717
               - 0.3396419882774353
               - 0.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 20
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: Dm_FireTemple_BossIn_C07
               LocationalLightCreateType: 0
               SourceRadius: 7.0
[   1056.0] L PostProcessingActor[1] - EventEditLocationalLight (#1, concurrent=1)
[   1056.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#16, concurrent=0)
[   1056.0] E PostProcessingActor[1] - EventCreateLocationalLightToEventCenter (#0, concurrent=0)
               duration: 225.0
               Direction:
               - 0.0
               - -1.0
               - 0.0
               InnerAngle: 15.0
               IsIgnoreRot: false
               LightHash: Dm_FireTemple_BossIn_C07
               LightType: 0
               OuterAngle: 45.0
               PositionOffset:
               - -2.1040000915527344
               - 7.5
               - 1.9359999895095825
[   1056.0] E PostProcessingActor[1] - EventEditLocationalLight (#2, concurrent=1)
               duration: 225.0
               Color:
               - 0.964709997177124
               - 0.3176499903202057
               - 0.10196000337600708
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 650.0
               IsFrameTransition: false
               LightHash: Dm_FireTemple_BossIn_C07
               LocationalLightCreateType: 0
               SourceRadius: 13.5
[   1056.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#17, concurrent=0)
               duration: 225.0
               DemoPaletteName: Dm_FireTemple_BossIn_C07
               IsWaitEnd: true
[   1281.0] L PostProcessingActor[1] - EventCreateLocationalLightToEventCenter (#0, concurrent=0)
[   1281.0] L PostProcessingActor[1] - EventEditLocationalLight (#2, concurrent=1)
[   1281.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#17, concurrent=0)
[   1281.0] E PostProcessingActor[1] - EventEditLocationalLight (#3, concurrent=1)
               duration: 20.0
               Color:
               - 2.678924083709717
               - 0.3396419882774353
               - 0.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 20
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: Dm_FireTemple_BossIn_C07
               LocationalLightCreateType: 0
               SourceRadius: 7.0
[   1281.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#18, concurrent=0)
               duration: 704.0
               DemoPaletteName: Dm_FireTemple_BossIn_C08
               IsWaitEnd: true
[   1301.0] L PostProcessingActor[1] - EventEditLocationalLight (#3, concurrent=1)
[   1514.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#4, concurrent=0)
               duration: 24.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_Dohoon
[   1532.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#8, concurrent=0)
               duration: 30.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_GoroGoro
[   1538.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#4, concurrent=0)
[   1562.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#8, concurrent=0)
[   1562.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#9, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_GoroGoro
[   1574.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#9, concurrent=0)
[   1574.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#10, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Small_GataGata
[   1586.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#10, concurrent=0)
[   1985.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#18, concurrent=0)
[   1985.0] E EventWorldManagerController - Event_SetDemoPaletteTransitionForTimeline (#19, concurrent=0)
               duration: 30.0
               CurrDemoPaletteName: Dm_FireTemple_BossIn_C08_50
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_FireTemple_BossIn_C08
               RateEnd: 1.0
               RateFrame: 30.0
               RateStart: 0.0
[   2015.0] L EventWorldManagerController - Event_SetDemoPaletteTransitionForTimeline (#19, concurrent=0)
[   2015.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#20, concurrent=0)
               duration: 156.0
               DemoPaletteName: Dm_FireTemple_BossIn_C08_50
               IsWaitEnd: true
[   2171.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#20, concurrent=0)
[   2171.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#21, concurrent=0)
               duration: 350.0
               DemoPaletteName: Dm_FireTemple_BossIn_C09
               IsWaitEnd: true
[   2521.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#21, concurrent=0)
[   2537.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#5, concurrent=0)
               duration: 24.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_Dohoon
[   2561.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#5, concurrent=0)
[   2561.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#6, concurrent=0)
               duration: 70.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_GoroGoro
[   2631.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#6, concurrent=0)
