-------- Event timeline: Dm_SageRoom_0027_Env --------
actors: 4
clips: 14
oneshots: 0
cuts: 1
duration: 5653.0
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


===== Timeline =====

[      0.0] E EventWorldManagerController[1] - Event_SetEnvPaletteForTimeline (#5, concurrent=0)
               duration: 5653.0
               ChangeSpeed: 5
               EnvPaletteName: Dm_SageRoom_0027
               EnvTimeTableName: ''
               IsWaitEnd: true
[      0.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#6, concurrent=0)
               duration: 1500.0
               DemoPaletteName: Dm_SageRoom_0027_C01
               IsWaitEnd: true
[   1500.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#6, concurrent=0)
[   1500.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
               duration: 1110.0
               DemoPaletteName: Dm_SageRoom_0027_C02
               IsWaitEnd: true
[   2610.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
[   2610.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
               duration: 140.0
               DemoPaletteName: Dm_SageRoom_0027_C03
               IsWaitEnd: true
[   2750.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
[   2750.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#9, concurrent=0)
               duration: 194.0
               DemoPaletteName: Dm_SageRoom_0027_C04
               IsWaitEnd: true
[   2944.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#9, concurrent=0)
[   2944.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
               duration: 179.0
               DemoPaletteName: Dm_SageRoom_0027_C05
               IsWaitEnd: true
[   3054.0] E PostProcessingActor[1] - EventEditLocationalLight (#1, concurrent=1)
               duration: 100.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 0
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: Dm_SageRoom_0027_C07_Light_01
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   3123.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
[   3123.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
               duration: 29.0
               DemoPaletteName: Dm_SageRoom_0027_C06
               IsWaitEnd: true
[   3152.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
[   3152.0] E PostProcessingActor[1] - EventCreateLocationalLightToEventCenter (#0, concurrent=0)
               duration: 169.0
               Direction:
               - 0.6850000023841858
               - -0.7170000076293945
               - -0.12999999523162842
               InnerAngle: 15.0
               IsIgnoreRot: false
               LightHash: Dm_SageRoom_0027_C07_Light_01
               LightType: 1
               OuterAngle: 45.0
               PositionOffset:
               - -8.286999702453613
               - 9.210000038146973
               - 2.0
[   3152.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#12, concurrent=0)
               duration: 169.0
               DemoPaletteName: Dm_SageRoom_0027_C07
               IsWaitEnd: true
[   3154.0] L PostProcessingActor[1] - EventEditLocationalLight (#1, concurrent=1)
[   3154.0] E PostProcessingActor[1] - EventEditLocationalLight (#2, concurrent=1)
               duration: 169.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 0
               Intensity: 2000.0
               IsFrameTransition: false
               LightHash: Dm_SageRoom_0027_C07_Light_01
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   3187.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#4, concurrent=0)
               duration: 70.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Byeen
[   3257.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#4, concurrent=0)
[   3321.0] L PostProcessingActor[1] - EventCreateLocationalLightToEventCenter (#0, concurrent=0)
[   3321.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#12, concurrent=0)
[   3321.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#13, concurrent=0)
               duration: 2332.0
               DemoPaletteName: Dm_SageRoom_0027_C08
               IsWaitEnd: true
[   3323.0] L PostProcessingActor[1] - EventEditLocationalLight (#2, concurrent=1)
[   3323.0] E PostProcessingActor[1] - EventEditLocationalLight (#3, concurrent=1)
               duration: 100.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 0
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: Dm_SageRoom_0027_C07_Light_01
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   3423.0] L PostProcessingActor[1] - EventEditLocationalLight (#3, concurrent=1)
[   5653.0] L EventWorldManagerController[1] - Event_SetEnvPaletteForTimeline (#5, concurrent=0)
[   5653.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#13, concurrent=0)
