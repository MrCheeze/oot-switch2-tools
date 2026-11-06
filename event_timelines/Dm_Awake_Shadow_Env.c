-------- Event timeline: Dm_Awake_Shadow_Env --------
actors: 3
clips: 29
oneshots: 0
cuts: 1
duration: 9509.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: GameSystemActor
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

Actor: PostProcessingActor[0]
concurrent clips: 2
actions: ['EventCreateLocationalLightToEventCenter', 'EventEditLocationalLight']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#2, concurrent=0)
               duration: 210.0
               DemoPaletteName: Dm_Awake_Shadow_C01
               IsWaitEnd: true
[    210.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#2, concurrent=0)
[    210.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#3, concurrent=0)
               duration: 310.0
               DemoPaletteName: Dm_Awake_Shadow_C02
               IsWaitEnd: true
[    382.0] E GameSystemActor - EventControllerRumbleTimeline (#0, concurrent=0)
               duration: 7.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Piton
[    389.0] L GameSystemActor - EventControllerRumbleTimeline (#0, concurrent=0)
[    520.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#3, concurrent=0)
[    520.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#4, concurrent=0)
               duration: 260.0
               DemoPaletteName: Dm_Awake_Shadow_C04
               IsWaitEnd: true
[    583.0] E GameSystemActor - EventControllerRumbleTimeline (#1, concurrent=0)
               duration: 103.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Small_GataGata
[    686.0] L GameSystemActor - EventControllerRumbleTimeline (#1, concurrent=0)
[    780.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#4, concurrent=0)
[    780.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#5, concurrent=0)
               duration: 600.0
               DemoPaletteName: Dm_Awake_Shadow_C05
               IsWaitEnd: true
[   1380.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#5, concurrent=0)
[   1380.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#6, concurrent=0)
               duration: 370.0
               DemoPaletteName: Dm_Awake_Shadow_C06
               IsWaitEnd: true
[   1750.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#6, concurrent=0)
[   1750.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
               duration: 210.0
               DemoPaletteName: Dm_Awake_Shadow_C07
               IsWaitEnd: true
[   1960.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
[   1960.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
               duration: 374.0
               DemoPaletteName: Dm_Awake_Shadow_C08
               IsWaitEnd: true
[   2334.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
[   2334.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#9, concurrent=0)
               duration: 680.0
               DemoPaletteName: Dm_Awake_Shadow_C09
               IsWaitEnd: true
[   3014.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#9, concurrent=0)
[   3014.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
               duration: 420.0
               DemoPaletteName: Dm_Awake_Shadow_C10
               IsWaitEnd: true
[   3434.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
[   3434.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
               duration: 420.0
               DemoPaletteName: Dm_Awake_Shadow_C11
               IsWaitEnd: true
[   3854.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
[   3854.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#12, concurrent=0)
               duration: 500.0
               DemoPaletteName: Dm_Awake_Shadow_C12
               IsWaitEnd: true
[   4354.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#12, concurrent=0)
[   4354.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#13, concurrent=0)
               duration: 570.0
               DemoPaletteName: Dm_Awake_Shadow_C12_30
               IsWaitEnd: true
[   4924.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#13, concurrent=0)
[   4924.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#14, concurrent=0)
               duration: 420.0
               DemoPaletteName: Dm_Awake_Shadow_C12_50
               IsWaitEnd: true
[   5344.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#14, concurrent=0)
[   5344.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#15, concurrent=0)
               duration: 500.0
               DemoPaletteName: Dm_Awake_Shadow_C13
               IsWaitEnd: true
[   5344.0] E PostProcessingActor[0] - EventEditLocationalLight (#26, concurrent=1)
               duration: 500.0
               Color:
               - 1.350000023841858
               - 0.8999999761581421
               - 0.6200000047683716
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: C14_light
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   5844.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#15, concurrent=0)
[   5844.0] L PostProcessingActor[0] - EventEditLocationalLight (#26, concurrent=1)
[   5844.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#16, concurrent=0)
               duration: 330.0
               DemoPaletteName: Dm_Awake_Shadow_C14
               IsWaitEnd: true
[   5844.0] E PostProcessingActor[0] - EventCreateLocationalLightToEventCenter (#25, concurrent=0)
               duration: 330.0
               Direction:
               - 0.0
               - -1.0
               - 0.0
               InnerAngle: 15.0
               IsIgnoreRot: false
               LightHash: C14_light
               LightType: 0
               OuterAngle: 45.0
               PositionOffset:
               - -3.240999937057495
               - 2.315000057220459
               - -2.062999963760376
[   5844.0] E PostProcessingActor[0] - EventEditLocationalLight (#27, concurrent=1)
               duration: 330.0
               Color:
               - 1.350000023841858
               - 0.8999999761581421
               - 0.6200000047683716
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 20.0
               IsFrameTransition: false
               LightHash: C14_light
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   6174.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#16, concurrent=0)
[   6174.0] L PostProcessingActor[0] - EventCreateLocationalLightToEventCenter (#25, concurrent=0)
[   6174.0] L PostProcessingActor[0] - EventEditLocationalLight (#27, concurrent=1)
[   6174.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#17, concurrent=0)
               duration: 340.0
               DemoPaletteName: Dm_Awake_Shadow_C15
               IsWaitEnd: true
[   6174.0] E PostProcessingActor[0] - EventEditLocationalLight (#28, concurrent=1)
               duration: 340.0
               Color:
               - 1.350000023841858
               - 0.8999999761581421
               - 0.6200000047683716
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: C14_light
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   6514.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#17, concurrent=0)
[   6514.0] L PostProcessingActor[0] - EventEditLocationalLight (#28, concurrent=1)
[   6514.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#18, concurrent=0)
               duration: 200.0
               DemoPaletteName: Dm_Awake_Shadow_C16
               IsWaitEnd: true
[   6714.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#18, concurrent=0)
[   6714.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#19, concurrent=0)
               duration: 400.0
               DemoPaletteName: Dm_Awake_Shadow_C17
               IsWaitEnd: true
[   7114.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#19, concurrent=0)
[   7114.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#20, concurrent=0)
               duration: 274.0
               DemoPaletteName: Dm_Awake_Shadow_C18
               IsWaitEnd: true
[   7388.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#20, concurrent=0)
[   7388.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#21, concurrent=0)
               duration: 580.0
               DemoPaletteName: Dm_Awake_Shadow_C19
               IsWaitEnd: true
[   7968.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#21, concurrent=0)
[   7968.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#22, concurrent=0)
               duration: 303.0
               DemoPaletteName: Dm_Awake_Shadow_C20
               IsWaitEnd: true
[   8271.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#22, concurrent=0)
[   8271.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#23, concurrent=0)
               duration: 538.0
               DemoPaletteName: Dm_Awake_Shadow_C21
               IsWaitEnd: true
[   8809.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#23, concurrent=0)
[   8809.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#24, concurrent=0)
               duration: 700.0
               DemoPaletteName: Dm_Awake_Shadow_C22
               IsWaitEnd: true
[   9509.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#24, concurrent=0)
