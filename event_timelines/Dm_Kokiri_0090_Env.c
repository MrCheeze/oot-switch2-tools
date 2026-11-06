-------- Event timeline: Dm_Kokiri_0090_Env --------
actors: 2
clips: 4
oneshots: 0
cuts: 1
duration: 2623.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: EventWorldManagerController[0]
concurrent clips: 1
actions: ['Event_SetEnvPaletteForTimeline']
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

[      0.0] E EventWorldManagerController[0] - Event_SetEnvPaletteForTimeline (#0, concurrent=0)
               duration: 2623.0
               ChangeSpeed: 4
               EnvPaletteName: Dm_Kokiri_0090
               EnvTimeTableName: ''
               IsWaitEnd: true
[      0.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#1, concurrent=0)
               duration: 985.0
               DemoPaletteName: Dm_Kokiri_0090_C01
               IsWaitEnd: true
[    985.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#1, concurrent=0)
[    985.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#2, concurrent=0)
               duration: 240.0
               DemoPaletteName: Dm_Kokiri_0090_C02
               IsWaitEnd: true
[   1225.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#2, concurrent=0)
[   1225.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#3, concurrent=0)
               duration: 1398.0
               DemoPaletteName: Dm_Kokiri_0090_C03
               IsWaitEnd: true
[   2623.0] L EventWorldManagerController[0] - Event_SetEnvPaletteForTimeline (#0, concurrent=0)
[   2623.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#3, concurrent=0)
