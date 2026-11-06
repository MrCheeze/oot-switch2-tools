-------- Event timeline: Dm_HrlCastle_0060_Env --------
actors: 2
clips: 7
oneshots: 0
cuts: 1
duration: 3014.0
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

Actor: EventWorldManagerController[30]
concurrent clips: 1
actions: ['Event_SetDemoPaletteForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[     -0.0] E EventWorldManagerController[30] - Event_SetDemoPaletteForTimeline (#3, concurrent=0)
               duration: 960.0
               DemoPaletteName: Dm_HrlCastle_0060_C0010
               IsWaitEnd: true
[    960.0] L EventWorldManagerController[30] - Event_SetDemoPaletteForTimeline (#3, concurrent=0)
[    960.0] E EventWorldManagerController[30] - Event_SetDemoPaletteForTimeline (#4, concurrent=0)
               duration: 390.0
               DemoPaletteName: Dm_HrlCastle_0060_C0020
               IsWaitEnd: true
[   1350.0] L EventWorldManagerController[30] - Event_SetDemoPaletteForTimeline (#4, concurrent=0)
[   1350.0] E PostProcessingActor[10] - EventEditLocationalLight (#1, concurrent=1)
               duration: 354.0
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
               LightHash: C04_impa
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1350.0] E EventWorldManagerController[30] - Event_SetDemoPaletteForTimeline (#5, concurrent=0)
               duration: 354.0
               DemoPaletteName: Dm_HrlCastle_0060_C0030
               IsWaitEnd: true
[   1704.0] L PostProcessingActor[10] - EventEditLocationalLight (#1, concurrent=1)
[   1704.0] L EventWorldManagerController[30] - Event_SetDemoPaletteForTimeline (#5, concurrent=0)
[   1704.0] E PostProcessingActor[10] - EventCreateLocationalLightToEventCenter (#0, concurrent=0)
               duration: 1310.0
               Direction:
               - 0.0
               - -1.0
               - 0.0
               InnerAngle: 45.0
               IsIgnoreRot: false
               LightHash: C04_impa
               LightType: 0
               OuterAngle: 15.0
               PositionOffset:
               - 0.10199999809265137
               - 1.8339999914169312
               - -0.7979999780654907
[   1704.0] E PostProcessingActor[10] - EventEditLocationalLight (#2, concurrent=1)
               duration: 1310.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 20000.0
               IsFrameTransition: false
               LightHash: C04_impa
               LocationalLightCreateType: 0
               SourceRadius: 0.0
[   1704.0] E EventWorldManagerController[30] - Event_SetDemoPaletteForTimeline (#6, concurrent=0)
               duration: 1310.0
               DemoPaletteName: Dm_HrlCastle_0060_C0040
               IsWaitEnd: true
[   3014.0] L PostProcessingActor[10] - EventCreateLocationalLightToEventCenter (#0, concurrent=0)
[   3014.0] L PostProcessingActor[10] - EventEditLocationalLight (#2, concurrent=1)
[   3014.0] L EventWorldManagerController[30] - Event_SetDemoPaletteForTimeline (#6, concurrent=0)
