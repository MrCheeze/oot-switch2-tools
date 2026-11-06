-------- Event timeline: Dm_Kokiri_0050_Env --------
actors: 2
clips: 4
oneshots: 0
cuts: 1
duration: 1178.0
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

Actor: EventWorldManagerController[1]
concurrent clips: 1
actions: ['Event_SetDemoPaletteForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#1, concurrent=0)
               duration: 140.0
               DemoPaletteName: Dm_Kokiri_0050_C01
               IsWaitEnd: true
[    140.0] L EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#1, concurrent=0)
[    140.0] E EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#2, concurrent=0)
               duration: 120.0
               DemoPaletteName: Dm_Kokiri_0050_C02
               IsWaitEnd: true
[    260.0] L EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#2, concurrent=0)
[    260.0] E EventWorldManagerController[0] - Event_SetEnvPaletteForTimeline (#0, concurrent=0)
               duration: 918.0
               ChangeSpeed: 4
               EnvPaletteName: Dm_Kokiri_0050
               EnvTimeTableName: ''
               IsWaitEnd: true
[    260.0] E EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#3, concurrent=0)
               duration: 918.0
               DemoPaletteName: Dm_Kokiri_0050_C03
               IsWaitEnd: true
[   1178.0] L EventWorldManagerController[0] - Event_SetEnvPaletteForTimeline (#0, concurrent=0)
[   1178.0] L EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#3, concurrent=0)
