-------- Event timeline: Dm_TimeTemple_0086_Env --------
actors: 4
clips: 14
oneshots: 0
cuts: 1
duration: 4349.0
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

Actor: EventWorldManagerController[0]
concurrent clips: 1
actions: ['Event_SetDemoPaletteForTimeline']
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

Actor: EventWorldManagerController[2]
concurrent clips: 1
actions: ['Event_SetCloudShadowOffForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E PostProcessingActor[10] - EventCreateLocationalLightToEventCenter (#0, concurrent=0)
               duration: 4349.0
               Direction:
               - 0.6439999938011169
               - -0.5189999938011169
               - -0.5619999766349792
               InnerAngle: 15.0
               IsIgnoreRot: false
               LightHash: add
               LightType: 1
               OuterAngle: 25.0
               PositionOffset:
               - -1.8519999980926514
               - 17.46299934387207
               - 5.556000232696533
[      0.0] E PostProcessingActor[10] - EventEditLocationalLight (#1, concurrent=1)
               duration: 4349.0
               Color:
               - 0.6200000047683716
               - 1.0199999809265137
               - 1.8799999952316284
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 2000.0
               IsFrameTransition: false
               LightHash: add
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[      0.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#2, concurrent=0)
               duration: 530.0
               DemoPaletteName: Dm_TimeTemple_0086_C01
               IsWaitEnd: true
[      0.0] E EventWorldManagerController[1] - Event_SetWindForTimeline (#12, concurrent=0)
               duration: 4349.0
               Azimuth: -200.0
               Elevation: 0.0
               IsImmTrans: false
               IsWaitEnd: true
               Speed: 2.5
[     14.0] E EventWorldManagerController[2] - Event_SetCloudShadowOffForTimeline (#13, concurrent=0)
               duration: 4335.0
               IsWaitEnd: true
[    530.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#2, concurrent=0)
[    530.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#3, concurrent=0)
               duration: 486.0
               DemoPaletteName: Dm_TimeTemple_0086_C02
               IsWaitEnd: true
[   1016.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#3, concurrent=0)
[   1016.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#4, concurrent=0)
               duration: 534.0
               DemoPaletteName: Dm_TimeTemple_0086_C03
               IsWaitEnd: true
[   1550.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#4, concurrent=0)
[   1550.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#5, concurrent=0)
               duration: 474.0
               DemoPaletteName: Dm_TimeTemple_0086_C04
               IsWaitEnd: true
[   2024.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#5, concurrent=0)
[   2024.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#6, concurrent=0)
               duration: 222.0
               DemoPaletteName: Dm_TimeTemple_0086_C05
               IsWaitEnd: true
[   2246.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#6, concurrent=0)
[   2246.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
               duration: 484.0
               DemoPaletteName: Dm_TimeTemple_0086_C05_50
               IsWaitEnd: true
[   2730.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
[   2730.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
               duration: 334.0
               DemoPaletteName: Dm_TimeTemple_0086_C06
               IsWaitEnd: true
[   3064.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
[   3064.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#9, concurrent=0)
               duration: 312.0
               DemoPaletteName: Dm_TimeTemple_0086_C07
               IsWaitEnd: true
[   3376.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#9, concurrent=0)
[   3376.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
               duration: 528.0
               DemoPaletteName: Dm_TimeTemple_0086_C07_50
               IsWaitEnd: true
[   3904.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
[   3904.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
               duration: 445.0
               DemoPaletteName: Dm_TimeTemple_0086_C08
               IsWaitEnd: true
[   4349.0] L PostProcessingActor[10] - EventCreateLocationalLightToEventCenter (#0, concurrent=0)
[   4349.0] L PostProcessingActor[10] - EventEditLocationalLight (#1, concurrent=1)
[   4349.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
[   4349.0] L EventWorldManagerController[1] - Event_SetWindForTimeline (#12, concurrent=0)
[   4349.0] L EventWorldManagerController[2] - Event_SetCloudShadowOffForTimeline (#13, concurrent=0)
