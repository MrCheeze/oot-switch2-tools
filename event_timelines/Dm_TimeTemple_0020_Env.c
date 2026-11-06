-------- Event timeline: Dm_TimeTemple_0020_Env --------
actors: 12
clips: 49
oneshots: 0
cuts: 1
duration: 1800.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: PostProcessingActor[9]
concurrent clips: 2
actions: ['EventCreateLocationalLightToEventCenter', 'EventEditLocationalLight']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[8]
concurrent clips: 2
actions: ['EventCreateLocationalLightToEventCenter', 'EventEditLocationalLight']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[7]
concurrent clips: 2
actions: ['EventCreateLocationalLightToEventCenter', 'EventEditLocationalLight']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[10]
concurrent clips: 2
actions: ['EventCreateLocationalLightToEventCenter', 'EventEditLocationalLight']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[6]
concurrent clips: 2
actions: ['EventCreateLocationalLightToEventCenter', 'EventEditLocationalLight']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[5]
concurrent clips: 2
actions: ['EventCreateLocationalLightToEventCenter', 'EventEditLocationalLight']
params: EventMemberCreateMethod: 0
IsBindNearestActor: true
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[4]
concurrent clips: 2
actions: ['EventCreateLocationalLightToEventCenter', 'EventEditLocationalLight']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[3]
concurrent clips: 2
actions: ['EventCreateLocationalLightToEventCenter', 'EventEditLocationalLight']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[2]
concurrent clips: 2
actions: ['EventCreateLocationalLightToEventCenter', 'EventEditLocationalLight']
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

Actor: EventWorldManagerController
concurrent clips: 1
actions: ['Event_SetDemoPaletteForTimeline', 'Event_SetDemoPaletteTransitionForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[11]
concurrent clips: 1
actions: ['EventOverwriteSceneShadingParams']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#41, concurrent=0)
               duration: 260.0
               DemoPaletteName: Dm_TimeTemple_0020_C01
               IsWaitEnd: true
[    241.0] E PostProcessingActor[2] - EventEditLocationalLight (#30, concurrent=1)
               duration: 100.0
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
               LightHash: Dm_TimeTemple_0020_02
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    241.0] E PostProcessingActor[1] - EventEditLocationalLight (#37, concurrent=1)
               duration: 100.0
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
               LightHash: Dm_TimeTemple_0020_01
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    260.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#41, concurrent=0)
[    260.0] E EventWorldManagerController - Event_SetDemoPaletteTransitionForTimeline (#42, concurrent=0)
               duration: 81.0
               CurrDemoPaletteName: Dm_TimeTemple_0020_C01_10
               IsWaitEnd: true
               PrevDemoPaletteName: Dm_TimeTemple_0020_C01
               RateEnd: 1.0
               RateFrame: 80.0
               RateStart: 0.0
[    341.0] L PostProcessingActor[2] - EventEditLocationalLight (#30, concurrent=1)
[    341.0] L PostProcessingActor[1] - EventEditLocationalLight (#37, concurrent=1)
[    341.0] L EventWorldManagerController - Event_SetDemoPaletteTransitionForTimeline (#42, concurrent=0)
[    341.0] E PostProcessingActor[2] - EventCreateLocationalLightToEventCenter (#29, concurrent=0)
               duration: 1459.0
               Direction:
               - 0.7480819821357727
               - 0.14800000190734863
               - -0.6468920111656189
               InnerAngle: 15.0
               IsIgnoreRot: false
               LightHash: Dm_TimeTemple_0020_02
               LightType: 1
               OuterAngle: 45.0
               PositionOffset:
               - -1.1790000200271606
               - 0.6729999780654907
               - 1.1790000200271606
[    341.0] E PostProcessingActor[2] - EventEditLocationalLight (#31, concurrent=1)
               duration: 292.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 740.7410278320312
               IsFrameTransition: false
               LightHash: Dm_TimeTemple_0020_02
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    341.0] E PostProcessingActor[1] - EventCreateLocationalLightToEventCenter (#36, concurrent=0)
               duration: 647.0
               Direction:
               - 0.8458849787712097
               - 0.311612993478775
               - 0.4328700006008148
               InnerAngle: 0.20000000298023224
               IsIgnoreRot: false
               LightHash: Dm_TimeTemple_0020_01
               LightType: 1
               OuterAngle: 45.0
               PositionOffset:
               - -0.8420000076293945
               - 0.041999999433755875
               - -0.6309999823570251
[    341.0] E PostProcessingActor[1] - EventEditLocationalLight (#38, concurrent=1)
               duration: 292.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 4932.4091796875
               IsFrameTransition: false
               LightHash: Dm_TimeTemple_0020_01
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    341.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#43, concurrent=0)
               duration: 292.0
               DemoPaletteName: Dm_TimeTemple_0020_C02
               IsWaitEnd: true
[    341.0] E PostProcessingActor[11] - EventOverwriteSceneShadingParams (#48, concurrent=0)
               duration: 100.0
               BakeLightLuminanceRatio: 0.7671999931335449
               InnerRatio: 1.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[    441.0] L PostProcessingActor[11] - EventOverwriteSceneShadingParams (#48, concurrent=0)
[    533.0] E PostProcessingActor[3] - EventEditLocationalLight (#26, concurrent=1)
               duration: 100.0
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
               LightHash: Dm_TimeTemple_0020_03
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    633.0] L PostProcessingActor[3] - EventEditLocationalLight (#26, concurrent=1)
[    633.0] L PostProcessingActor[2] - EventEditLocationalLight (#31, concurrent=1)
[    633.0] L PostProcessingActor[1] - EventEditLocationalLight (#38, concurrent=1)
[    633.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#43, concurrent=0)
[    633.0] E PostProcessingActor[3] - EventEditLocationalLight (#27, concurrent=1)
               duration: 355.0
               Color:
               - 0.800000011920929
               - 1.0800000429153442
               - 1.100000023841858
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 210.18600463867188
               IsFrameTransition: false
               LightHash: Dm_TimeTemple_0020_03
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    633.0] E PostProcessingActor[1] - EventEditLocationalLight (#39, concurrent=1)
               duration: 355.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 277.0
               IsFrameTransition: false
               LightHash: Dm_TimeTemple_0020_01
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    633.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#44, concurrent=0)
               duration: 355.0
               DemoPaletteName: Dm_TimeTemple_0020_C03
               IsWaitEnd: true
[    634.0] E PostProcessingActor[3] - EventCreateLocationalLightToEventCenter (#25, concurrent=0)
               duration: 354.0
               Direction:
               - 0.777999997138977
               - 0.32708799839019775
               - 0.536404013633728
               InnerAngle: 0.28647899627685547
               IsIgnoreRot: false
               LightHash: Dm_TimeTemple_0020_03
               LightType: 1
               OuterAngle: 37.5
               PositionOffset:
               - -0.42100000381469727
               - -0.0010000000474974513
               - -0.6309999823570251
[    634.0] E PostProcessingActor[2] - EventEditLocationalLight (#32, concurrent=1)
               duration: 354.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 10000.0
               IsFrameTransition: false
               LightHash: Dm_TimeTemple_0020_02
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    888.0] E PostProcessingActor[6] - EventEditLocationalLight (#14, concurrent=1)
               duration: 100.0
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
               LightHash: Dm_TimeTemple_0020_06
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    888.0] E PostProcessingActor[5] - EventEditLocationalLight (#18, concurrent=1)
               duration: 100.0
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
               LightHash: Dm_TimeTemple_0020_05
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    988.0] L PostProcessingActor[6] - EventEditLocationalLight (#14, concurrent=1)
[    988.0] L PostProcessingActor[5] - EventEditLocationalLight (#18, concurrent=1)
[    988.0] L PostProcessingActor[3] - EventCreateLocationalLightToEventCenter (#25, concurrent=0)
[    988.0] L PostProcessingActor[3] - EventEditLocationalLight (#27, concurrent=1)
[    988.0] L PostProcessingActor[2] - EventEditLocationalLight (#32, concurrent=1)
[    988.0] L PostProcessingActor[1] - EventCreateLocationalLightToEventCenter (#36, concurrent=0)
[    988.0] L PostProcessingActor[1] - EventEditLocationalLight (#39, concurrent=1)
[    988.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#44, concurrent=0)
[    988.0] E PostProcessingActor[6] - EventCreateLocationalLightToEventCenter (#13, concurrent=0)
               duration: 299.0
               Direction:
               - -0.34200000762939453
               - 0.3504590094089508
               - -0.8719030022621155
               InnerAngle: 15.0
               IsIgnoreRot: false
               LightHash: Dm_TimeTemple_0020_06
               LightType: 0
               OuterAngle: 50.0
               PositionOffset:
               - 0.6729999780654907
               - 0.08299999684095383
               - 1.7669999599456787
[    988.0] E PostProcessingActor[6] - EventEditLocationalLight (#15, concurrent=1)
               duration: 300.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 3148.14794921875
               IsFrameTransition: false
               LightHash: Dm_TimeTemple_0020_06
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    988.0] E PostProcessingActor[5] - EventCreateLocationalLightToEventCenter (#17, concurrent=0)
               duration: 812.0
               Direction:
               - 0.7452340126037598
               - -0.4161050021648407
               - -0.5210400223731995
               InnerAngle: 0.28647899627685547
               IsIgnoreRot: false
               LightHash: Dm_TimeTemple_0020_05
               LightType: 0
               OuterAngle: 90.0
               PositionOffset:
               - -1.0110000371932983
               - 0.25200000405311584
               - 1.1790000200271606
[    988.0] E PostProcessingActor[5] - EventEditLocationalLight (#19, concurrent=1)
               duration: 299.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 150.0
               IsFrameTransition: false
               LightHash: Dm_TimeTemple_0020_05
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    988.0] E PostProcessingActor[3] - EventEditLocationalLight (#28, concurrent=1)
               duration: 100.0
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
               LightHash: Dm_TimeTemple_0020_03
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    988.0] E PostProcessingActor[2] - EventEditLocationalLight (#33, concurrent=1)
               duration: 100.0
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
               LightHash: Dm_TimeTemple_0020_02
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    988.0] E PostProcessingActor[1] - EventEditLocationalLight (#40, concurrent=1)
               duration: 100.0
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
               LightHash: Dm_TimeTemple_0020_01
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    988.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#45, concurrent=0)
               duration: 300.0
               DemoPaletteName: Dm_TimeTemple_0020_C04
               IsWaitEnd: true
[   1088.0] L PostProcessingActor[3] - EventEditLocationalLight (#28, concurrent=1)
[   1088.0] L PostProcessingActor[2] - EventEditLocationalLight (#33, concurrent=1)
[   1088.0] L PostProcessingActor[1] - EventEditLocationalLight (#40, concurrent=1)
[   1188.0] E PostProcessingActor[10] - EventEditLocationalLight (#10, concurrent=1)
               duration: 100.0
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
               LightHash: Dm_TimeTemple_0020_10
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1287.0] L PostProcessingActor[6] - EventCreateLocationalLightToEventCenter (#13, concurrent=0)
[   1287.0] L PostProcessingActor[5] - EventEditLocationalLight (#19, concurrent=1)
[   1287.0] E PostProcessingActor[5] - EventEditLocationalLight (#20, concurrent=1)
               duration: 181.0
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
               LightHash: Dm_TimeTemple_0020_05
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1288.0] L PostProcessingActor[10] - EventEditLocationalLight (#10, concurrent=1)
[   1288.0] L PostProcessingActor[6] - EventEditLocationalLight (#15, concurrent=1)
[   1288.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#45, concurrent=0)
[   1288.0] E PostProcessingActor[10] - EventCreateLocationalLightToEventCenter (#9, concurrent=0)
               duration: 512.0
               Direction:
               - 0.9869490265846252
               - 0.16099999845027924
               - -0.0032939999364316463
               InnerAngle: 0.28647899627685547
               IsIgnoreRot: false
               LightHash: Dm_TimeTemple_0020_10
               LightType: 1
               OuterAngle: 24.167001724243164
               PositionOffset:
               - -2.188999891281128
               - -0.5889999866485596
               - 0.0
[   1288.0] E PostProcessingActor[10] - EventEditLocationalLight (#11, concurrent=1)
               duration: 180.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 555.5560302734375
               IsFrameTransition: false
               LightHash: Dm_TimeTemple_0020_10
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1288.0] E PostProcessingActor[6] - EventEditLocationalLight (#16, concurrent=1)
               duration: 180.0
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
               LightHash: Dm_TimeTemple_0020_06
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1288.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#46, concurrent=0)
               duration: 180.0
               DemoPaletteName: Dm_TimeTemple_0020_C05
               IsWaitEnd: true
[   1367.0] E PostProcessingActor[8] - EventEditLocationalLight (#4, concurrent=1)
               duration: 101.0
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
               LightHash: Dm_TimeTemple_0020_08
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1367.0] E PostProcessingActor[7] - EventEditLocationalLight (#7, concurrent=1)
               duration: 101.0
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
               LightHash: Dm_TimeTemple_0020_07
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1368.0] E PostProcessingActor[9] - EventEditLocationalLight (#1, concurrent=1)
               duration: 100.0
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
               LightHash: Dm_TimeTemple_0020_09
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1368.0] E PostProcessingActor[4] - EventEditLocationalLight (#23, concurrent=1)
               duration: 100.0
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
               LightHash: Dm_TimeTemple_0020_04
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1368.0] E PostProcessingActor[2] - EventEditLocationalLight (#34, concurrent=1)
               duration: 100.0
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
               LightHash: Dm_TimeTemple_0020_02
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1468.0] L PostProcessingActor[9] - EventEditLocationalLight (#1, concurrent=1)
[   1468.0] L PostProcessingActor[8] - EventEditLocationalLight (#4, concurrent=1)
[   1468.0] L PostProcessingActor[7] - EventEditLocationalLight (#7, concurrent=1)
[   1468.0] L PostProcessingActor[10] - EventEditLocationalLight (#11, concurrent=1)
[   1468.0] L PostProcessingActor[6] - EventEditLocationalLight (#16, concurrent=1)
[   1468.0] L PostProcessingActor[5] - EventEditLocationalLight (#20, concurrent=1)
[   1468.0] L PostProcessingActor[4] - EventEditLocationalLight (#23, concurrent=1)
[   1468.0] L PostProcessingActor[2] - EventEditLocationalLight (#34, concurrent=1)
[   1468.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#46, concurrent=0)
[   1468.0] E PostProcessingActor[9] - EventCreateLocationalLightToEventCenter (#0, concurrent=0)
               duration: 332.0
               Direction:
               - -0.7439849972724915
               - 0.5418530106544495
               - -0.39100000262260437
               InnerAngle: 0.28647899627685547
               IsIgnoreRot: false
               LightHash: Dm_TimeTemple_0020_09
               LightType: 1
               OuterAngle: 45.0
               PositionOffset:
               - 1.0099999904632568
               - 0.041999999433755875
               - 0.29499998688697815
[   1468.0] E PostProcessingActor[9] - EventEditLocationalLight (#2, concurrent=1)
               duration: 332.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 1851.85205078125
               IsFrameTransition: false
               LightHash: Dm_TimeTemple_0020_09
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1468.0] E PostProcessingActor[8] - EventCreateLocationalLightToEventCenter (#3, concurrent=0)
               duration: 332.0
               Direction:
               - 0.0
               - -1.0
               - 0.0
               InnerAngle: 15.0
               IsIgnoreRot: false
               LightHash: Dm_TimeTemple_0020_08
               LightType: 0
               OuterAngle: 45.0
               PositionOffset:
               - 0.8420000076293945
               - 1.3880000114440918
               - 0.2529999911785126
[   1468.0] E PostProcessingActor[8] - EventEditLocationalLight (#5, concurrent=1)
               duration: 332.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 648.1480102539062
               IsFrameTransition: false
               LightHash: Dm_TimeTemple_0020_08
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1468.0] E PostProcessingActor[7] - EventCreateLocationalLightToEventCenter (#6, concurrent=0)
               duration: 332.0
               Direction:
               - 0.0
               - -1.0
               - 0.0
               InnerAngle: 0.28647899627685547
               IsIgnoreRot: false
               LightHash: Dm_TimeTemple_0020_07
               LightType: 0
               OuterAngle: 37.5
               PositionOffset:
               - 0.7580000162124634
               - 0.335999995470047
               - -0.6309999823570251
[   1468.0] E PostProcessingActor[7] - EventEditLocationalLight (#8, concurrent=1)
               duration: 332.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 370.3699951171875
               IsFrameTransition: false
               LightHash: Dm_TimeTemple_0020_07
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1468.0] E PostProcessingActor[10] - EventEditLocationalLight (#12, concurrent=1)
               duration: 332.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 462.0
               IsFrameTransition: false
               LightHash: Dm_TimeTemple_0020_10
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1468.0] E PostProcessingActor[5] - EventEditLocationalLight (#21, concurrent=1)
               duration: 332.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 150.0
               IsFrameTransition: false
               LightHash: Dm_TimeTemple_0020_05
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1468.0] E PostProcessingActor[4] - EventCreateLocationalLightToEventCenter (#22, concurrent=0)
               duration: 332.0
               Direction:
               - 0.992339015007019
               - -0.12321799993515015
               - 0.008999999612569809
               InnerAngle: 0.28647899627685547
               IsIgnoreRot: false
               LightHash: Dm_TimeTemple_0020_04
               LightType: 1
               OuterAngle: 55.000003814697266
               PositionOffset:
               - -3.325000047683716
               - 1.809000015258789
               - 0.5059999823570251
[   1468.0] E PostProcessingActor[4] - EventEditLocationalLight (#24, concurrent=1)
               duration: 332.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 765.7429809570312
               IsFrameTransition: false
               LightHash: Dm_TimeTemple_0020_04
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1468.0] E PostProcessingActor[2] - EventEditLocationalLight (#35, concurrent=1)
               duration: 332.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 2407.406982421875
               IsFrameTransition: false
               LightHash: Dm_TimeTemple_0020_02
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1468.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#47, concurrent=0)
               duration: 332.0
               DemoPaletteName: Dm_TimeTemple_0020_C06
               IsWaitEnd: true
[   1800.0] L PostProcessingActor[9] - EventCreateLocationalLightToEventCenter (#0, concurrent=0)
[   1800.0] L PostProcessingActor[9] - EventEditLocationalLight (#2, concurrent=1)
[   1800.0] L PostProcessingActor[8] - EventCreateLocationalLightToEventCenter (#3, concurrent=0)
[   1800.0] L PostProcessingActor[8] - EventEditLocationalLight (#5, concurrent=1)
[   1800.0] L PostProcessingActor[7] - EventCreateLocationalLightToEventCenter (#6, concurrent=0)
[   1800.0] L PostProcessingActor[7] - EventEditLocationalLight (#8, concurrent=1)
[   1800.0] L PostProcessingActor[10] - EventCreateLocationalLightToEventCenter (#9, concurrent=0)
[   1800.0] L PostProcessingActor[10] - EventEditLocationalLight (#12, concurrent=1)
[   1800.0] L PostProcessingActor[5] - EventCreateLocationalLightToEventCenter (#17, concurrent=0)
[   1800.0] L PostProcessingActor[5] - EventEditLocationalLight (#21, concurrent=1)
[   1800.0] L PostProcessingActor[4] - EventCreateLocationalLightToEventCenter (#22, concurrent=0)
[   1800.0] L PostProcessingActor[4] - EventEditLocationalLight (#24, concurrent=1)
[   1800.0] L PostProcessingActor[2] - EventCreateLocationalLightToEventCenter (#29, concurrent=0)
[   1800.0] L PostProcessingActor[2] - EventEditLocationalLight (#35, concurrent=1)
[   1800.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#47, concurrent=0)
