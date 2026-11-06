-------- Event timeline: Dm_Kokiri_0150_Env --------
actors: 9
clips: 29
oneshots: 0
cuts: 1
duration: 6108.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: PostProcessingActor[4]
concurrent clips: 1
actions: ['EventCreateLocationalLightToEventCenter']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[5]
concurrent clips: 1
actions: ['EventCreateLocationalLightToEventCenter']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[3]
concurrent clips: 1
actions: ['EventCreateLocationalLightToEventCenter']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[7]
concurrent clips: 1
actions: ['EventCreateLocationalLightToEventCenter']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[2]
concurrent clips: 1
actions: ['EventEditLocationalLight']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[6]
concurrent clips: 1
actions: ['EventEditLocationalLight']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventWorldManagerController[1]
concurrent clips: 1
actions: ['Event_SetEnvPaletteForTimeline']
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

Actor: PostProcessingActor[1]
concurrent clips: 1
actions: ['EventSetRenderingCenterPosFromCameraPos']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventWorldManagerController[1] - Event_SetEnvPaletteForTimeline (#13, concurrent=0)
               duration: 6108.0
               ChangeSpeed: 4
               EnvPaletteName: Dm_Kokiri_0150_master
               EnvTimeTableName: ''
               IsWaitEnd: false
[      0.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#14, concurrent=0)
               duration: 226.0
               DemoPaletteName: Dm_Kokiri_0150_C01
               IsWaitEnd: true
[    226.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#14, concurrent=0)
[    226.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#15, concurrent=0)
               duration: 345.0
               DemoPaletteName: Dm_Kokiri_0150_C02
               IsWaitEnd: true
[    571.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#15, concurrent=0)
[    571.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#16, concurrent=0)
               duration: 255.0
               DemoPaletteName: Dm_Kokiri_0150_C03
               IsWaitEnd: true
[    826.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#16, concurrent=0)
[    826.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#17, concurrent=0)
               duration: 450.0
               DemoPaletteName: Dm_Kokiri_0150_C04
               IsWaitEnd: true
[   1276.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#17, concurrent=0)
[   1276.0] E PostProcessingActor[4] - EventCreateLocationalLightToEventCenter (#0, concurrent=0)
               duration: 1110.0
               Direction:
               - 0.15700000524520874
               - -0.9539999961853027
               - 0.25699999928474426
               InnerAngle: 10.54699993133545
               IsIgnoreRot: false
               LightHash: spotA
               LightType: 1
               OuterAngle: 17.5
               PositionOffset:
               - 4.130000114440918
               - 2.75
               - 0.3400000035762787
[   1276.0] E PostProcessingActor[5] - EventCreateLocationalLightToEventCenter (#1, concurrent=0)
               duration: 1110.0
               Direction:
               - 0.0
               - -1.0
               - 0.0
               InnerAngle: 15.0
               IsIgnoreRot: false
               LightHash: spotB
               LightType: 1
               OuterAngle: 41.599998474121094
               PositionOffset:
               - 2.430000066757202
               - 2.75
               - 0.8399999737739563
[   1276.0] E PostProcessingActor[2] - EventEditLocationalLight (#4, concurrent=0)
               duration: 1110.0
               Color:
               - 1.0099999904632568
               - 1.0
               - 0.9399999976158142
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 3000.0
               IsFrameTransition: false
               LightHash: spotA
               LocationalLightCreateType: 0
               SourceRadius: 0.5
[   1276.0] E PostProcessingActor[6] - EventEditLocationalLight (#11, concurrent=0)
               duration: 1110.0
               Color:
               - 1.0099999904632568
               - 1.0
               - 0.9399999976158142
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 7000.0
               IsFrameTransition: false
               LightHash: spotB
               LocationalLightCreateType: 0
               SourceRadius: 0.5
[   1276.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#18, concurrent=0)
               duration: 1110.0
               DemoPaletteName: Dm_Kokiri_0150_C05
               IsWaitEnd: true
[   2386.0] L PostProcessingActor[4] - EventCreateLocationalLightToEventCenter (#0, concurrent=0)
[   2386.0] L PostProcessingActor[5] - EventCreateLocationalLightToEventCenter (#1, concurrent=0)
[   2386.0] L PostProcessingActor[2] - EventEditLocationalLight (#4, concurrent=0)
[   2386.0] L PostProcessingActor[6] - EventEditLocationalLight (#11, concurrent=0)
[   2386.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#18, concurrent=0)
[   2386.0] E PostProcessingActor[2] - EventEditLocationalLight (#5, concurrent=0)
               duration: 239.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: false
               EditIntensity: true
               EditSourceRadius: false
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: spotA
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2386.0] E PostProcessingActor[6] - EventEditLocationalLight (#12, concurrent=0)
               duration: 239.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: false
               EditIntensity: true
               EditSourceRadius: false
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: spotB
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2386.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#19, concurrent=0)
               duration: 630.0
               DemoPaletteName: Dm_Kokiri_0150_C06
               IsWaitEnd: true
[   2625.0] L PostProcessingActor[2] - EventEditLocationalLight (#5, concurrent=0)
[   2625.0] L PostProcessingActor[6] - EventEditLocationalLight (#12, concurrent=0)
[   3016.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#19, concurrent=0)
[   3016.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#20, concurrent=0)
               duration: 550.0
               DemoPaletteName: Dm_Kokiri_0150_C07
               IsWaitEnd: true
[   3566.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#20, concurrent=0)
[   3566.0] E PostProcessingActor[3] - EventCreateLocationalLightToEventCenter (#2, concurrent=0)
               duration: 120.0
               Direction:
               - -0.11100000143051147
               - -0.9940000176429749
               - -0.013000000268220901
               InnerAngle: 15.0
               IsIgnoreRot: false
               LightHash: addLightC08
               LightType: 1
               OuterAngle: 23.33329963684082
               PositionOffset:
               - -1.8519999980926514
               - 10.75
               - 1.8519999980926514
[   3566.0] E PostProcessingActor[2] - EventEditLocationalLight (#6, concurrent=0)
               duration: 120.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: addLightC08
               LocationalLightCreateType: 0
               SourceRadius: 0.5
[   3566.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#21, concurrent=0)
               duration: 120.0
               DemoPaletteName: Dm_Kokiri_0150_C08
               IsWaitEnd: true
[   3686.0] L PostProcessingActor[3] - EventCreateLocationalLightToEventCenter (#2, concurrent=0)
[   3686.0] L PostProcessingActor[2] - EventEditLocationalLight (#6, concurrent=0)
[   3686.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#21, concurrent=0)
[   3686.0] E PostProcessingActor[2] - EventEditLocationalLight (#7, concurrent=0)
               duration: 224.0
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
               LightHash: addLightC08
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   3686.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#22, concurrent=0)
               duration: 300.0
               DemoPaletteName: Dm_Kokiri_0150_C09
               IsWaitEnd: true
[   3910.0] L PostProcessingActor[2] - EventEditLocationalLight (#7, concurrent=0)
[   3986.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#22, concurrent=0)
[   3986.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#23, concurrent=0)
               duration: 360.0
               DemoPaletteName: Dm_Kokiri_0150_C10
               IsWaitEnd: true
[   4346.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#23, concurrent=0)
[   4346.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#24, concurrent=0)
               duration: 76.0
               DemoPaletteName: Dm_Kokiri_0150_C11
               IsWaitEnd: true
[   4422.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#24, concurrent=0)
[   4422.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#25, concurrent=0)
               duration: 174.0
               DemoPaletteName: Dm_Kokiri_0150_C12
               IsWaitEnd: true
[   4527.0] E PostProcessingActor[2] - EventEditLocationalLight (#8, concurrent=0)
               duration: 240.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: false
               EditIntensity: true
               EditSourceRadius: false
               FrameTransitionCount: 0
               Intensity: 0.0
               IsFrameTransition: true
               LightHash: addKeyLight
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   4596.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#25, concurrent=0)
[   4596.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#26, concurrent=0)
               duration: 171.0
               DemoPaletteName: Dm_Kokiri_0150_C13
               IsWaitEnd: true
[   4767.0] L PostProcessingActor[2] - EventEditLocationalLight (#8, concurrent=0)
[   4767.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#26, concurrent=0)
[   4767.0] E PostProcessingActor[7] - EventCreateLocationalLightToEventCenter (#3, concurrent=0)
               duration: 370.0
               Direction:
               - 0.0682549998164177
               - -0.7525399923324585
               - 0.6549999713897705
               InnerAngle: 4.0
               IsIgnoreRot: true
               LightHash: addKeyLight
               LightType: 1
               OuterAngle: 9.0
               PositionOffset:
               - -4.242000102996826
               - 345.885009765625
               - -302.20098876953125
[   4767.0] E PostProcessingActor[2] - EventEditLocationalLight (#9, concurrent=0)
               duration: 367.0
               Color:
               - 1.1038830280303955
               - 0.996209979057312
               - 0.7481679916381836
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 0
               Intensity: 380000000.0
               IsFrameTransition: true
               LightHash: addKeyLight
               LocationalLightCreateType: 0
               SourceRadius: 4.203999996185303
[   4767.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#27, concurrent=0)
               duration: 370.0
               DemoPaletteName: Dm_Kokiri_0150_C14
               IsWaitEnd: true
[   5134.0] L PostProcessingActor[2] - EventEditLocationalLight (#9, concurrent=0)
[   5137.0] L PostProcessingActor[7] - EventCreateLocationalLightToEventCenter (#3, concurrent=0)
[   5137.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#27, concurrent=0)
[   5137.0] E PostProcessingActor[2] - EventEditLocationalLight (#10, concurrent=0)
               duration: 240.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: false
               EditIntensity: true
               EditSourceRadius: false
               FrameTransitionCount: 0
               Intensity: 0.0
               IsFrameTransition: true
               LightHash: addKeyLight
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   5137.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#28, concurrent=0)
               duration: 971.0
               DemoPaletteName: Dm_Kokiri_0150_C15
               IsWaitEnd: true
[   5377.0] L PostProcessingActor[2] - EventEditLocationalLight (#10, concurrent=0)
[   6108.0] L EventWorldManagerController[1] - Event_SetEnvPaletteForTimeline (#13, concurrent=0)
[   6108.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#28, concurrent=0)
