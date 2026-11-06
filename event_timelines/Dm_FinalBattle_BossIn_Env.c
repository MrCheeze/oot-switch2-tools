-------- Event timeline: Dm_FinalBattle_BossIn_Env --------
actors: 3
clips: 39
oneshots: 0
cuts: 1
duration: 4574.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

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
actions: ['Event_SetDemoPaletteForTimeline', 'Event_SetDemoPaletteTransitionForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventWorldManagerController[2]
concurrent clips: 1
actions: ['Event_SetWindForTimeline', 'EventGoOffstageForUser', 'Event_SetWindTransitionForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventWorldManagerController[1] - Event_SetEnvPaletteForTimeline (#0, concurrent=0)
               duration: 1078.0
               ChangeSpeed: 5
               EnvPaletteName: FinalBattleField_BeforeBattle
               EnvTimeTableName: ''
               IsWaitEnd: true
[      0.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#4, concurrent=0)
               duration: 240.0
               DemoPaletteName: Dm_FinalBattle_BossIn_C01
               IsWaitEnd: true
[    240.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#4, concurrent=0)
[    240.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#5, concurrent=0)
               duration: 112.0
               DemoPaletteName: Dm_FinalBattle_BossIn_C02
               IsWaitEnd: true
[    352.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#5, concurrent=0)
[    352.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#6, concurrent=0)
               duration: 118.0
               DemoPaletteName: Dm_FinalBattle_BossIn_C03
               IsWaitEnd: true
[    470.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#6, concurrent=0)
[    470.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
               duration: 186.0
               DemoPaletteName: Dm_FinalBattle_BossIn_C04
               IsWaitEnd: true
[    656.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#7, concurrent=0)
[    656.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
               duration: 52.0
               DemoPaletteName: Dm_FinalBattle_BossIn_C05
               IsWaitEnd: true
[    708.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#8, concurrent=0)
[    708.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#9, concurrent=0)
               duration: 244.0
               DemoPaletteName: Dm_FinalBattle_BossIn_C06
               IsWaitEnd: true
[    952.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#9, concurrent=0)
[    952.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
               duration: 126.0
               DemoPaletteName: Dm_FinalBattle_BossIn_C07
               IsWaitEnd: true
[    952.0] E EventWorldManagerController[2] - Event_SetWindForTimeline (#35, concurrent=0)
               duration: 548.0
               Azimuth: 225.0
               Elevation: 0.0
               IsImmTrans: true
               IsWaitEnd: true
               Speed: 5.5
[   1078.0] L EventWorldManagerController[1] - Event_SetEnvPaletteForTimeline (#0, concurrent=0)
[   1078.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#10, concurrent=0)
[   1078.0] E EventWorldManagerController[1] - Event_SetEnvPaletteForTimeline (#1, concurrent=0)
               duration: 630.0
               ChangeSpeed: 5
               EnvPaletteName: FinalBattleField_BattleStartDemo_C08
               EnvTimeTableName: ''
               IsWaitEnd: true
[   1078.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
               duration: 287.0
               DemoPaletteName: Dm_FinalBattle_BossIn_C08
               IsWaitEnd: true
[   1365.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#11, concurrent=0)
[   1365.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#12, concurrent=0)
               duration: 195.0
               CurrDemoPaletteName: Dm_FinalBattle_BossIn_C08_2
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_FinalBattle_BossIn_C08
               RateEnd: 1.0
               RateFrame: 195.0
               RateStart: 0.0
[   1500.0] L EventWorldManagerController[2] - Event_SetWindForTimeline (#35, concurrent=0)
[   1500.0] E EventWorldManagerController[2] - Event_SetWindTransitionForTimeline (#36, concurrent=0)
               duration: 60.0
               Azimuth: 90.0
               Elevation: 15.0
               IsWaitEnd: true
               SpeedEnd: 10.0
               SpeedStart: 5.5
               TransitionFrame: 60.0
[   1560.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#12, concurrent=0)
[   1560.0] L EventWorldManagerController[2] - Event_SetWindTransitionForTimeline (#36, concurrent=0)
[   1560.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#13, concurrent=0)
               duration: 148.0
               DemoPaletteName: Dm_FinalBattle_BossIn_C08_2
               IsWaitEnd: true
[   1560.0] E EventWorldManagerController[2] - Event_SetWindForTimeline (#37, concurrent=0)
               duration: 2714.0
               Azimuth: 90.0
               Elevation: 15.0
               IsImmTrans: true
               IsWaitEnd: true
               Speed: 10.0
[   1708.0] L EventWorldManagerController[1] - Event_SetEnvPaletteForTimeline (#1, concurrent=0)
[   1708.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#13, concurrent=0)
[   1708.0] E EventWorldManagerController[1] - Event_SetEnvPaletteForTimeline (#2, concurrent=0)
               duration: 902.0
               ChangeSpeed: 5
               EnvPaletteName: FinalBattleField_BattleStartDemo
               EnvTimeTableName: ''
               IsWaitEnd: true
[   1708.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#14, concurrent=0)
               duration: 90.0
               DemoPaletteName: Dm_FinalBattle_BossIn_C09
               IsWaitEnd: true
[   1798.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#14, concurrent=0)
[   1798.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#15, concurrent=0)
               duration: 60.0
               DemoPaletteName: Dm_FinalBattle_BossIn_C10
               IsWaitEnd: true
[   1858.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#15, concurrent=0)
[   1858.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#16, concurrent=0)
               duration: 60.0
               CurrDemoPaletteName: Dm_FinalBattle_BossIn_C10_2
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_FinalBattle_BossIn_C10
               RateEnd: 1.0
               RateFrame: 60.0
               RateStart: 0.0
[   1918.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#16, concurrent=0)
[   1918.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#17, concurrent=0)
               duration: 72.0
               DemoPaletteName: Dm_FinalBattle_BossIn_C10_2
               IsWaitEnd: true
[   1990.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#17, concurrent=0)
[   1990.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#18, concurrent=0)
               duration: 374.0
               DemoPaletteName: Dm_FinalBattle_BossIn_C11
               IsWaitEnd: true
[   2364.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#18, concurrent=0)
[   2364.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#19, concurrent=0)
               duration: 246.0
               DemoPaletteName: Dm_FinalBattle_BossIn_C13
               IsWaitEnd: true
[   2610.0] L EventWorldManagerController[1] - Event_SetEnvPaletteForTimeline (#2, concurrent=0)
[   2610.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#19, concurrent=0)
[   2610.0] E EventWorldManagerController[1] - Event_SetEnvPaletteForTimeline (#3, concurrent=0)
               duration: 1664.0
               ChangeSpeed: 5
               EnvPaletteName: FinalBattleField
               EnvTimeTableName: ''
               IsWaitEnd: true
[   2610.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#20, concurrent=0)
               duration: 246.0
               DemoPaletteName: Dm_FinalBattle_BossIn_C14
               IsWaitEnd: true
[   2856.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#20, concurrent=0)
[   2856.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#21, concurrent=0)
               duration: 224.0
               DemoPaletteName: Dm_FinalBattle_BossIn_C15
               IsWaitEnd: true
[   3080.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#21, concurrent=0)
[   3080.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#22, concurrent=0)
               duration: 11.0
               CurrDemoPaletteName: Dm_FinalBattle_BossIn_C15_2
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_FinalBattle_BossIn_C15
               RateEnd: 1.0
               RateFrame: 11.0
               RateStart: 0.0
[   3091.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#22, concurrent=0)
[   3091.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#23, concurrent=0)
               duration: 111.0
               DemoPaletteName: Dm_FinalBattle_BossIn_C15_2
               IsWaitEnd: true
[   3202.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#23, concurrent=0)
[   3202.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#24, concurrent=0)
               duration: 11.0
               CurrDemoPaletteName: Dm_FinalBattle_BossIn_C15_3
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_FinalBattle_BossIn_C15_2
               RateEnd: 1.0
               RateFrame: 11.0
               RateStart: 0.0
[   3213.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#24, concurrent=0)
[   3213.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#25, concurrent=0)
               duration: 84.0
               DemoPaletteName: Dm_FinalBattle_BossIn_C15_3
               IsWaitEnd: true
[   3297.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#25, concurrent=0)
[   3297.0] E EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#26, concurrent=0)
               duration: 11.0
               CurrDemoPaletteName: Dm_FinalBattle_BossIn_C15_4
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_FinalBattle_BossIn_C15_3
               RateEnd: 1.0
               RateFrame: 11.0
               RateStart: 0.0
[   3308.0] L EventWorldManagerController[0] - Event_SetDemoPaletteTransitionForTimeline (#26, concurrent=0)
[   3308.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#27, concurrent=0)
               duration: 40.0
               DemoPaletteName: Dm_FinalBattle_BossIn_C15_4
               IsWaitEnd: true
[   3348.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#27, concurrent=0)
[   3348.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#28, concurrent=0)
               duration: 114.0
               DemoPaletteName: Dm_FinalBattle_BossIn_C16
               IsWaitEnd: true
[   3462.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#28, concurrent=0)
[   3462.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#29, concurrent=0)
               duration: 58.0
               DemoPaletteName: Dm_FinalBattle_BossIn_C17
               IsWaitEnd: true
[   3520.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#29, concurrent=0)
[   3520.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#30, concurrent=0)
               duration: 136.0
               DemoPaletteName: Dm_FinalBattle_BossIn_C18
               IsWaitEnd: true
[   3656.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#30, concurrent=0)
[   3656.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#31, concurrent=0)
               duration: 138.0
               DemoPaletteName: Dm_FinalBattle_BossIn_C19
               IsWaitEnd: true
[   3794.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#31, concurrent=0)
[   3794.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#32, concurrent=0)
               duration: 270.0
               DemoPaletteName: Dm_FinalBattle_BossIn_C20
               IsWaitEnd: true
[   4064.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#32, concurrent=0)
[   4064.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#33, concurrent=0)
               duration: 210.0
               DemoPaletteName: Dm_FinalBattle_BossIn_C21
               IsWaitEnd: true
[   4274.0] L EventWorldManagerController[1] - Event_SetEnvPaletteForTimeline (#3, concurrent=0)
[   4274.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#33, concurrent=0)
[   4274.0] L EventWorldManagerController[2] - Event_SetWindForTimeline (#37, concurrent=0)
[   4274.0] E EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#34, concurrent=0)
               duration: 155.0
               DemoPaletteName: Dm_FinalBattle_BossIn_C22
               IsWaitEnd: true
[   4274.0] E EventWorldManagerController[2] - EventGoOffstageForUser (#38, concurrent=0)
               duration: 300.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   4429.0] L EventWorldManagerController[0] - Event_SetDemoPaletteForTimeline (#34, concurrent=0)
[   4574.0] L EventWorldManagerController[2] - EventGoOffstageForUser (#38, concurrent=0)
