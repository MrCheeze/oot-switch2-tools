-------- Event timeline: Dm_HrlField_0005_Env --------
actors: 5
clips: 17
oneshots: 0
cuts: 1
duration: 3593.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: EventWorldManagerController[2]
concurrent clips: 1
actions: ['EventTrigger_SetTime']
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
concurrent clips: 2
actions: ['EventCreateLocationalLightToEventCenter', 'EventEditLocationalLight']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: GameSystemActor
concurrent clips: 1
actions: ['EventControllerRumbleTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventWorldManagerController[2] - EventTrigger_SetTime (#0, concurrent=0)
               duration: 3593.0
               TimeHour: 7
               TimeMin: 30
[      0.0] E EventWorldManagerController[1] - Event_SetEnvPaletteForTimeline (#1, concurrent=0)
               duration: 3593.0
               ChangeSpeed: 5
               EnvPaletteName: ''
               EnvTimeTableName: ''
               IsWaitEnd: true
[      0.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#2, concurrent=0)
               duration: 350.0
               DemoPaletteName: Dm_HrlField_0005_C01
               IsWaitEnd: true
[      0.0] E PostProcessingActor[1] - EventCreateLocationalLightToEventCenter (#10, concurrent=0)
               duration: 482.0
               Direction:
               - -0.8370000123977661
               - -0.546999990940094
               - 0.014999999664723873
               InnerAngle: 5.546999931335449
               IsIgnoreRot: false
               LightHash: kick
               LightType: 1
               OuterAngle: 10.833000183105469
               PositionOffset:
               - 6.0
               - 8.0
               - 2.5
[      0.0] E PostProcessingActor[1] - EventEditLocationalLight (#11, concurrent=1)
               duration: 482.0
               Color:
               - 1.25
               - 0.9599999785423279
               - 0.5299999713897705
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 200000.0
               IsFrameTransition: false
               LightHash: kick
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    350.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#2, concurrent=0)
[    350.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#3, concurrent=0)
               duration: 132.0
               DemoPaletteName: Dm_HrlField_0005_C02
               IsWaitEnd: true
[    482.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#3, concurrent=0)
[    482.0] L PostProcessingActor[1] - EventCreateLocationalLightToEventCenter (#10, concurrent=0)
[    482.0] L PostProcessingActor[1] - EventEditLocationalLight (#11, concurrent=1)
[    482.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#4, concurrent=0)
               duration: 180.0
               DemoPaletteName: Dm_HrlField_0005_C03
               IsWaitEnd: true
[    482.0] E PostProcessingActor[1] - EventEditLocationalLight (#12, concurrent=1)
               duration: 180.0
               Color:
               - 1.25
               - 0.9599999785423279
               - 0.5299999713897705
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: kick
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    662.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#4, concurrent=0)
[    662.0] L PostProcessingActor[1] - EventEditLocationalLight (#12, concurrent=1)
[    662.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#5, concurrent=0)
               duration: 343.0
               DemoPaletteName: Dm_HrlField_0005_C04
               IsWaitEnd: true
[    682.0] E GameSystemActor - EventControllerRumbleTimeline (#13, concurrent=0)
               duration: 45.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Dooon
[    727.0] L GameSystemActor - EventControllerRumbleTimeline (#13, concurrent=0)
[    746.0] E GameSystemActor - EventControllerRumbleTimeline (#14, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    758.0] L GameSystemActor - EventControllerRumbleTimeline (#14, concurrent=0)
[    787.0] E GameSystemActor - EventControllerRumbleTimeline (#15, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    799.0] L GameSystemActor - EventControllerRumbleTimeline (#15, concurrent=0)
[   1005.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#5, concurrent=0)
[   1005.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#6, concurrent=0)
               duration: 587.0
               DemoPaletteName: Dm_HrlField_0005_C05
               IsWaitEnd: true
[   1119.0] E GameSystemActor - EventControllerRumbleTimeline (#16, concurrent=0)
               duration: 9.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Short
[   1128.0] L GameSystemActor - EventControllerRumbleTimeline (#16, concurrent=0)
[   1592.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#6, concurrent=0)
[   1592.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
               duration: 825.0
               DemoPaletteName: Dm_HrlField_0005_C06
               IsWaitEnd: true
[   2417.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
[   2417.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
               duration: 611.0
               DemoPaletteName: Dm_HrlField_0005_C07
               IsWaitEnd: true
[   3028.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
[   3028.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#9, concurrent=0)
               duration: 565.0
               DemoPaletteName: Dm_HrlField_0005_C08
               IsWaitEnd: true
[   3593.0] L EventWorldManagerController[2] - EventTrigger_SetTime (#0, concurrent=0)
[   3593.0] L EventWorldManagerController[1] - Event_SetEnvPaletteForTimeline (#1, concurrent=0)
[   3593.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#9, concurrent=0)
