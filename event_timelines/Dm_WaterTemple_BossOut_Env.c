-------- Event timeline: Dm_WaterTemple_BossOut_Env --------
actors: 2
clips: 4
oneshots: 0
cuts: 1
duration: 2591.0
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

[   1385.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#0, concurrent=0)
               duration: 70.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Biyoon
[   1455.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#0, concurrent=0)
[   1630.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#2, concurrent=0)
               duration: 360.0
               DemoPaletteName: Dm_WaterTemple_BossOut_C07
               IsWaitEnd: true
[   1657.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#1, concurrent=0)
               duration: 70.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_Biyoon
[   1727.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#1, concurrent=0)
[   1990.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#2, concurrent=0)
[   1990.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#3, concurrent=0)
               duration: 601.0
               DemoPaletteName: Dm_WaterTemple_BossOut_C08
               IsWaitEnd: true
[   2591.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#3, concurrent=0)
