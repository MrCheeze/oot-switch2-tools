-------- Event timeline: Dm_TimeTemple_0010_Env --------
actors: 3
clips: 9
oneshots: 0
cuts: 1
duration: 2590.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: PostProcessingActor[5]
concurrent clips: 1
actions: ['EventOverwriteSceneShadingParams']
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
actions: ['Event_SetDemoPaletteForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#5, concurrent=0)
               duration: 400.0
               DemoPaletteName: Dm_TimeTemple_0010_C01
               IsWaitEnd: true
[    400.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#5, concurrent=0)
[    400.0] E PostProcessingActor[5] - EventOverwriteSceneShadingParams (#0, concurrent=0)
               duration: 100.0
               BakeLightLuminanceRatio: 0.0
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[    400.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#6, concurrent=0)
               duration: 580.0
               DemoPaletteName: Dm_TimeTemple_0010_C02
               IsWaitEnd: true
[    500.0] L PostProcessingActor[5] - EventOverwriteSceneShadingParams (#0, concurrent=0)
[    980.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#6, concurrent=0)
[    980.0] E PostProcessingActor[5] - EventOverwriteSceneShadingParams (#1, concurrent=0)
               duration: 100.0
               BakeLightLuminanceRatio: 0.0
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[    980.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
               duration: 490.0
               DemoPaletteName: Dm_TimeTemple_0010_C03
               IsWaitEnd: true
[   1080.0] L PostProcessingActor[5] - EventOverwriteSceneShadingParams (#1, concurrent=0)
[   1470.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
[   1470.0] E PostProcessingActor[5] - EventOverwriteSceneShadingParams (#2, concurrent=0)
               duration: 100.0
               BakeLightLuminanceRatio: 0.0
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[   1470.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
               duration: 1120.0
               DemoPaletteName: Dm_TimeTemple_0010_C04
               IsWaitEnd: true
[   1570.0] L PostProcessingActor[5] - EventOverwriteSceneShadingParams (#2, concurrent=0)
[   1878.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#3, concurrent=0)
               duration: 7.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_Don
[   1885.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#3, concurrent=0)
[   1885.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#4, concurrent=0)
               duration: 587.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_GoGoGo
[   2472.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#4, concurrent=0)
[   2590.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
