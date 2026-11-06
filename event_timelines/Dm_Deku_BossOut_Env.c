-------- Event timeline: Dm_Deku_BossOut_Env --------
actors: 4
clips: 16
oneshots: 0
cuts: 1
duration: 2529.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: PostProcessingActor[0]
concurrent clips: 1
actions: ['EventCreateLocationalLightToEventCenter', 'EventEditLocationalLight']
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

Actor: GameSystemActor[1]
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
actions: ['Event_SetDemoPaletteForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E PostProcessingActor[0] - EventCreateLocationalLightToEventCenter (#0, concurrent=0)
               duration: 150.0
               Direction:
               - 0.0
               - -1.0
               - 0.0
               InnerAngle: 15.0
               IsIgnoreRot: false
               LightHash: eyelight01
               LightType: 0
               OuterAngle: 45.0
               PositionOffset:
               - 5.199999809265137
               - 0.30000001192092896
               - 0.800000011920929
[      0.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
               duration: 150.0
               DemoPaletteName: Dm_Deku_BossOut_C01
               IsWaitEnd: true
[      4.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#7, concurrent=0)
               duration: 102.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    106.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#7, concurrent=0)
[    150.0] L PostProcessingActor[0] - EventCreateLocationalLightToEventCenter (#0, concurrent=0)
[    150.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
[    150.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
               duration: 304.0
               DemoPaletteName: Dm_Deku_BossOut_C02
               IsWaitEnd: true
[    290.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#8, concurrent=0)
               duration: 110.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_BuBuBu
[    400.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#8, concurrent=0)
[    454.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
[    454.0] E PostProcessingActor[0] - EventEditLocationalLight (#1, concurrent=0)
               duration: 154.0
               Color:
               - 1.0
               - 0.0
               - 2.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: eyelight01
               LocationalLightCreateType: 0
               SourceRadius: 1.0
[    454.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#12, concurrent=0)
               duration: 313.0
               DemoPaletteName: Dm_Deku_BossOut_C03
               IsWaitEnd: true
[    504.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#9, concurrent=0)
               duration: 90.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_Dooon
[    594.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#9, concurrent=0)
[    608.0] L PostProcessingActor[0] - EventEditLocationalLight (#1, concurrent=0)
[    608.0] E PostProcessingActor[0] - EventEditLocationalLight (#2, concurrent=0)
               duration: 159.0
               Color:
               - 1.0
               - 0.0
               - 2.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 150
               Intensity: 0.0
               IsFrameTransition: true
               LightHash: eyelight01
               LocationalLightCreateType: 0
               SourceRadius: 1.0
[    767.0] L PostProcessingActor[0] - EventEditLocationalLight (#2, concurrent=0)
[    767.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#12, concurrent=0)
[    767.0] E PostProcessingActor[0] - EventEditLocationalLight (#3, concurrent=0)
               duration: 425.0
               Color:
               - 1.0
               - 0.0
               - 2.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: false
               FrameTransitionCount: 30
               Intensity: 3.0
               IsFrameTransition: false
               LightHash: eyelight01
               LocationalLightCreateType: 0
               SourceRadius: 0.20000000298023224
[    767.0] E EventWorldManagerController[1] - Event_SetWindForTimeline (#6, concurrent=0)
               duration: 777.0
               Azimuth: 18.0
               Elevation: 0.0
               IsImmTrans: false
               IsWaitEnd: false
               Speed: 1.0
[    767.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#13, concurrent=0)
               duration: 777.0
               DemoPaletteName: Dm_Deku_BossOut_C04
               IsWaitEnd: true
[   1192.0] L PostProcessingActor[0] - EventEditLocationalLight (#3, concurrent=0)
[   1192.0] E PostProcessingActor[0] - EventEditLocationalLight (#4, concurrent=0)
               duration: 352.0
               Color:
               - 2.0
               - 0.0
               - 0.800000011920929
               EditColor: true
               EditIntensity: true
               EditSourceRadius: false
               FrameTransitionCount: 150
               Intensity: 0.0
               IsFrameTransition: true
               LightHash: eyelight01
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1544.0] L PostProcessingActor[0] - EventEditLocationalLight (#4, concurrent=0)
[   1544.0] L EventWorldManagerController[1] - Event_SetWindForTimeline (#6, concurrent=0)
[   1544.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#13, concurrent=0)
[   1544.0] E PostProcessingActor[0] - EventEditLocationalLight (#5, concurrent=0)
               duration: 385.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: false
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: eyelight01
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1544.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#14, concurrent=0)
               duration: 385.0
               DemoPaletteName: Dm_Deku_BossOut_C05
               IsWaitEnd: true
[   1929.0] L PostProcessingActor[0] - EventEditLocationalLight (#5, concurrent=0)
[   1929.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#14, concurrent=0)
[   1929.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#15, concurrent=0)
               duration: 600.0
               DemoPaletteName: Dm_Deku_BossOut_C06
               IsWaitEnd: true
[   2529.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#15, concurrent=0)
