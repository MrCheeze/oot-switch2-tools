-------- Event timeline: Dm_SageRoom_0010_Env --------
actors: 5
clips: 17
oneshots: 0
cuts: 1
duration: 3200.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: GameSystemActor[10]
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

Actor: PostProcessingActor[70]
concurrent clips: 2
actions: ['EventCreateLocationalLightToEventCenter', 'EventEditLocationalLight']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[71]
concurrent clips: 2
actions: ['EventCreateLocationalLightToEventCenter', 'EventEditLocationalLight']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventWorldManagerController[1] - Event_SetEnvPaletteForTimeline (#1, concurrent=0)
               duration: 3200.0
               ChangeSpeed: 5
               EnvPaletteName: SageRoom
               EnvTimeTableName: ''
               IsWaitEnd: true
[      0.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#2, concurrent=0)
               duration: 450.0
               DemoPaletteName: Dm_SageRoom_0010_C01
               IsWaitEnd: true
[    190.0] E GameSystemActor[10] - EventControllerRumbleTimeline (#0, concurrent=0)
               duration: 160.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Small_GataGata
[    350.0] L GameSystemActor[10] - EventControllerRumbleTimeline (#0, concurrent=0)
[    450.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#2, concurrent=0)
[    450.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#3, concurrent=0)
               duration: 570.0
               DemoPaletteName: Dm_SageRoom_0010_C01_30
               IsWaitEnd: true
[    450.0] E PostProcessingActor[70] - EventEditLocationalLight (#10, concurrent=1)
               duration: 570.0
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
               LightHash: impa_light
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    450.0] E PostProcessingActor[71] - EventEditLocationalLight (#14, concurrent=1)
               duration: 570.0
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
               LightHash: player_light
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1020.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#3, concurrent=0)
[   1020.0] L PostProcessingActor[70] - EventEditLocationalLight (#10, concurrent=1)
[   1020.0] L PostProcessingActor[71] - EventEditLocationalLight (#14, concurrent=1)
[   1020.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#4, concurrent=0)
               duration: 390.0
               DemoPaletteName: Dm_SageRoom_0010_C01_50
               IsWaitEnd: true
[   1020.0] E PostProcessingActor[70] - EventCreateLocationalLightToEventCenter (#9, concurrent=0)
               duration: 820.0
               Direction:
               - -0.6531130075454712
               - -0.7120000123977661
               - -0.2578740119934082
               InnerAngle: 15.0
               IsIgnoreRot: false
               LightHash: impa_light
               LightType: 1
               OuterAngle: 45.0
               PositionOffset:
               - -2.7780001163482666
               - 3.7039999961853027
               - -1.8519999980926514
[   1020.0] E PostProcessingActor[70] - EventEditLocationalLight (#11, concurrent=1)
               duration: 820.0
               Color:
               - 0.7392479777336121
               - 0.9622730016708374
               - 1.8741569519042969
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 62.0
               IsFrameTransition: false
               LightHash: impa_light
               LocationalLightCreateType: 0
               SourceRadius: 2.315000057220459
[   1020.0] E PostProcessingActor[71] - EventCreateLocationalLightToEventCenter (#13, concurrent=0)
               duration: 820.0
               Direction:
               - -0.5688899755477905
               - -0.7169070243835449
               - -0.40299999713897705
               InnerAngle: 15.0
               IsIgnoreRot: false
               LightHash: player_light
               LightType: 1
               OuterAngle: 45.0
               PositionOffset:
               - 1.8519999980926514
               - 3.7039999961853027
               - 1.8519999980926514
[   1020.0] E PostProcessingActor[71] - EventEditLocationalLight (#15, concurrent=1)
               duration: 820.0
               Color:
               - 0.7392479777336121
               - 0.9622730016708374
               - 1.8741569519042969
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 62.0
               IsFrameTransition: false
               LightHash: player_light
               LocationalLightCreateType: 0
               SourceRadius: 2.315000057220459
[   1410.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#4, concurrent=0)
[   1410.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#5, concurrent=0)
               duration: 430.0
               DemoPaletteName: Dm_SageRoom_0010_C02
               IsWaitEnd: true
[   1840.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#5, concurrent=0)
[   1840.0] L PostProcessingActor[70] - EventCreateLocationalLightToEventCenter (#9, concurrent=0)
[   1840.0] L PostProcessingActor[70] - EventEditLocationalLight (#11, concurrent=1)
[   1840.0] L PostProcessingActor[71] - EventCreateLocationalLightToEventCenter (#13, concurrent=0)
[   1840.0] L PostProcessingActor[71] - EventEditLocationalLight (#15, concurrent=1)
[   1840.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#6, concurrent=0)
               duration: 560.0
               DemoPaletteName: Dm_SageRoom_0010_C03
               IsWaitEnd: true
[   1840.0] E PostProcessingActor[70] - EventEditLocationalLight (#12, concurrent=1)
               duration: 430.0
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
               LightHash: impa_light
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1840.0] E PostProcessingActor[71] - EventEditLocationalLight (#16, concurrent=1)
               duration: 430.0
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
               LightHash: player_light
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2270.0] L PostProcessingActor[70] - EventEditLocationalLight (#12, concurrent=1)
[   2270.0] L PostProcessingActor[71] - EventEditLocationalLight (#16, concurrent=1)
[   2400.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#6, concurrent=0)
[   2400.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
               duration: 330.0
               DemoPaletteName: Dm_SageRoom_0010_C04
               IsWaitEnd: true
[   2730.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
[   2730.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
               duration: 456.0
               DemoPaletteName: Dm_SageRoom_0010_C05
               IsWaitEnd: true
[   3186.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
[   3200.0] L EventWorldManagerController[1] - Event_SetEnvPaletteForTimeline (#1, concurrent=0)
