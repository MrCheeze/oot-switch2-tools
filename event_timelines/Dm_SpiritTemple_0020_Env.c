-------- Event timeline: Dm_SpiritTemple_0020_Env --------
actors: 4
clips: 24
oneshots: 0
cuts: 1
duration: 5410.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: GameSystemActor[1]
concurrent clips: 1
actions: ['EventControllerRumbleTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: TerrainSystemActor[0]
concurrent clips: 1
actions: ['EventTerrainCalcCenter']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[1]
concurrent clips: 1
actions: []
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventWorldManagerController[0]
concurrent clips: 1
actions: ['Event_SetDemoPaletteForTimeline', 'Event_SetDemoPaletteTransitionForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E TerrainSystemActor[0] - EventTerrainCalcCenter (#3, concurrent=0)
               duration: 150.0
               IsWaitEnd: true
               Position:
               - 0.0
               - 0.0
               - 0.0
               SceneName: ''
[      0.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#4, concurrent=0)
               duration: 150.0
               DemoPaletteName: Dm_SpiritTemple_0020_C01
               IsWaitEnd: true
[    150.0] L TerrainSystemActor[0] - EventTerrainCalcCenter (#3, concurrent=0)
[    150.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#4, concurrent=0)
[    150.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#5, concurrent=0)
               duration: 90.0
               DemoPaletteName: Dm_SpiritTemple_0020_C02
               IsWaitEnd: true
[    240.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#5, concurrent=0)
[    240.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#6, concurrent=0)
               duration: 120.0
               DemoPaletteName: Dm_SpiritTemple_0020_C03
               IsWaitEnd: true
[    360.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#6, concurrent=0)
[    360.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
               duration: 330.0
               DemoPaletteName: Dm_SpiritTemple_0020_C04
               IsWaitEnd: true
[    370.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#0, concurrent=0)
               duration: 13.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Piton
[    383.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#0, concurrent=0)
[    690.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
[    690.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
               duration: 240.0
               DemoPaletteName: Dm_SpiritTemple_0020_C05
               IsWaitEnd: true
[    930.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
[    930.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#9, concurrent=0)
               duration: 120.0
               DemoPaletteName: Dm_SpiritTemple_0020_C06
               IsWaitEnd: true
[   1050.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#9, concurrent=0)
[   1050.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
               duration: 540.0
               DemoPaletteName: Dm_SpiritTemple_0020_C07
               IsWaitEnd: true
[   1590.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
[   1590.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
               duration: 460.0
               DemoPaletteName: Dm_SpiritTemple_0020_C08
               IsWaitEnd: true
[   2050.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
[   2050.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#12, concurrent=0)
               duration: 960.0
               DemoPaletteName: Dm_SpiritTemple_0020_C09
               IsWaitEnd: true
[   3010.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#12, concurrent=0)
[   3010.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#13, concurrent=0)
               duration: 240.0
               DemoPaletteName: Dm_SpiritTemple_0020_C10
               IsWaitEnd: true
[   3250.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#13, concurrent=0)
[   3250.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#14, concurrent=0)
               duration: 60.0
               DemoPaletteName: Dm_SpiritTemple_0020_C10_50
               IsWaitEnd: true
[   3310.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#14, concurrent=0)
[   3310.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#15, concurrent=0)
               duration: 120.0
               DemoPaletteName: Dm_SpiritTemple_0020_C11
               IsWaitEnd: true
[   3360.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#1, concurrent=0)
               duration: 60.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Dohoon
[   3420.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#1, concurrent=0)
[   3430.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#15, concurrent=0)
[   3430.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#16, concurrent=0)
               duration: 100.0
               DemoPaletteName: Dm_SpiritTemple_0020_C12
               IsWaitEnd: true
[   3530.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#16, concurrent=0)
[   3530.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#17, concurrent=0)
               duration: 150.0
               DemoPaletteName: Dm_SpiritTemple_0020_C13
               IsWaitEnd: true
[   3680.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#17, concurrent=0)
[   3680.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#18, concurrent=0)
               duration: 200.0
               DemoPaletteName: Dm_SpiritTemple_0020_C14
               IsWaitEnd: true
[   3880.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#18, concurrent=0)
[   3880.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#19, concurrent=0)
               duration: 198.0
               DemoPaletteName: Dm_SpiritTemple_0020_C15
               IsWaitEnd: true
[   3886.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#2, concurrent=0)
               duration: 194.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Small_GataGata
[   4078.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#19, concurrent=0)
[   4078.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#20, concurrent=0)
               duration: 70.0
               CurrDemoPaletteName: Dm_SpiritTemple_0020_C15_50
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_SpiritTemple_0020_C15
               RateEnd: 1.0
               RateFrame: 60.0
               RateStart: 0.0
[   4080.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#2, concurrent=0)
[   4148.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#20, concurrent=0)
[   4148.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#21, concurrent=0)
               duration: 442.0
               DemoPaletteName: Dm_SpiritTemple_0020_C15_50
               IsWaitEnd: true
[   4590.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#21, concurrent=0)
[   4590.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#22, concurrent=0)
               duration: 510.0
               DemoPaletteName: Dm_SpiritTemple_0020_C16
               IsWaitEnd: true
[   5100.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#22, concurrent=0)
[   5100.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#23, concurrent=0)
               duration: 310.0
               CurrDemoPaletteName: Dm_SpiritTemple_0020_C16_50
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_SpiritTemple_0020_C16
               RateEnd: 1.0
               RateFrame: 60.0
               RateStart: 0.0
[   5410.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#23, concurrent=0)
