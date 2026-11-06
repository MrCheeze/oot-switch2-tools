-------- Event timeline: Dm_TimeTemple_0087_Env --------
actors: 2
clips: 3
oneshots: 0
cuts: 1
duration: 615.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: GameSystemActor[0]
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

[      0.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#1, concurrent=0)
               duration: 300.0
               DemoPaletteName: Dm_TimeTemple_0087_C01
               IsWaitEnd: true
[     39.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#0, concurrent=0)
               duration: 13.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Piton
[     52.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#0, concurrent=0)
[    300.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#1, concurrent=0)
[    300.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#2, concurrent=0)
               duration: 315.0
               DemoPaletteName: Dm_TimeTemple_0087_C02
               IsWaitEnd: true
[    615.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#2, concurrent=0)
