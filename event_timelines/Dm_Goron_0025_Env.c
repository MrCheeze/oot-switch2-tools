-------- Event timeline: Dm_Goron_0025_Env --------
actors: 9
clips: 104
oneshots: 0
cuts: 1
duration: 2230.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

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
actions: ['EventEditLocationalLight', 'EventCreateLocationalLightToEventCenter']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[3]
concurrent clips: 2
actions: ['EventEditLocationalLight', 'EventCreateLocationalLightToEventCenter']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[2]
concurrent clips: 2
actions: ['EventEditLocationalLight', 'EventCreateLocationalLightToEventCenter']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[1]
concurrent clips: 2
actions: ['EventEditLocationalLight', 'EventCreateLocationalLightToEventCenter']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[4]
concurrent clips: 2
actions: ['EventEditLocationalLight', 'EventCreateLocationalLightToEventCenter']
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

Actor: GameSystemActor[1]
concurrent clips: 1
actions: ['EventControllerRumbleTimeline']
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


===== Timeline =====

[      0.0] E PostProcessingActor[2] - EventCreateLocationalLightToEventCenter (#12, concurrent=0)
               duration: 219.0
               Direction:
               - 0.017837999388575554
               - -0.18400000035762787
               - -0.9827640056610107
               InnerAngle: 0.5475209951400757
               IsIgnoreRot: false
               LightHash: Dm_Goron_0025_03
               LightType: 1
               OuterAngle: 40.83399963378906
               PositionOffset:
               - -0.21899999678134918
               - 1.5369999408721924
               - 4.380000114440918
[      0.0] E PostProcessingActor[2] - EventEditLocationalLight (#13, concurrent=1)
               duration: 219.0
               Color:
               - 1.9199999570846558
               - 0.699999988079071
               - 0.14000000059604645
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 185.18499755859375
               IsFrameTransition: false
               LightHash: Dm_Goron_0025_03
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[      0.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#23, concurrent=0)
               duration: 132.0
               DemoPaletteName: Dm_Goron_0025_C01
               IsWaitEnd: true
[    132.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#23, concurrent=0)
[    132.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#24, concurrent=0)
               duration: 23.0
               DemoPaletteName: Dm_Goron_0025_C02
               IsWaitEnd: true
[    155.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#24, concurrent=0)
[    155.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#25, concurrent=0)
               duration: 25.0
               DemoPaletteName: Dm_Goron_0025_C03
               IsWaitEnd: true
[    180.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#25, concurrent=0)
[    180.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#26, concurrent=0)
               duration: 13.0
               DemoPaletteName: Dm_Goron_0025_C04
               IsWaitEnd: true
[    193.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#26, concurrent=0)
[    193.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#27, concurrent=0)
               duration: 26.0
               DemoPaletteName: Dm_Goron_0025_C05
               IsWaitEnd: true
[    209.0] E PostProcessingActor[4] - EventEditLocationalLight (#20, concurrent=1)
               duration: 10.0
               Color:
               - 1.9199999570846558
               - 0.699999988079071
               - 0.14000000059604645
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: Dm_Goron_0025_01
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    219.0] L PostProcessingActor[2] - EventCreateLocationalLightToEventCenter (#12, concurrent=0)
[    219.0] L PostProcessingActor[2] - EventEditLocationalLight (#13, concurrent=1)
[    219.0] L PostProcessingActor[4] - EventEditLocationalLight (#20, concurrent=1)
[    219.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#27, concurrent=0)
[    219.0] E PostProcessingActor[2] - EventEditLocationalLight (#14, concurrent=1)
               duration: 10.0
               Color:
               - 1.9199999570846558
               - 0.699999988079071
               - 0.14000000059604645
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: Dm_Goron_0025_03
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    219.0] E PostProcessingActor[4] - EventCreateLocationalLightToEventCenter (#19, concurrent=0)
               duration: 240.0
               Direction:
               - 0.27799999713897705
               - -0.08645199984312057
               - -0.9566829800605774
               InnerAngle: 0.5475209951400757
               IsIgnoreRot: false
               LightHash: Dm_Goron_0025_01
               LightType: 1
               OuterAngle: 40.83399963378906
               PositionOffset:
               - -1.8600000143051147
               - 1.7899999618530273
               - 4.380000114440918
[    219.0] E PostProcessingActor[4] - EventEditLocationalLight (#21, concurrent=1)
               duration: 241.0
               Color:
               - 1.9199999570846558
               - 0.699999988079071
               - 0.14000000059604645
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 377.77398681640625
               IsFrameTransition: false
               LightHash: Dm_Goron_0025_01
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    219.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#28, concurrent=0)
               duration: 241.0
               DemoPaletteName: Dm_Goron_0025_C06
               IsWaitEnd: true
[    229.0] L PostProcessingActor[2] - EventEditLocationalLight (#14, concurrent=1)
[    244.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#45, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    252.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#45, concurrent=0)
[    265.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#46, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    273.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#46, concurrent=0)
[    290.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#47, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    298.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#47, concurrent=0)
[    318.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#48, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    326.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#48, concurrent=0)
[    347.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#49, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    355.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#49, concurrent=0)
[    376.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#50, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    384.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#50, concurrent=0)
[    405.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#51, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    413.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#51, concurrent=0)
[    435.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#52, concurrent=0)
               duration: 15.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Doon
[    450.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#52, concurrent=0)
[    458.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#53, concurrent=0)
               duration: 10.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    459.0] L PostProcessingActor[4] - EventCreateLocationalLightToEventCenter (#19, concurrent=0)
[    460.0] L PostProcessingActor[4] - EventEditLocationalLight (#21, concurrent=1)
[    460.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#28, concurrent=0)
[    460.0] E PostProcessingActor[4] - EventEditLocationalLight (#22, concurrent=1)
               duration: 10.0
               Color:
               - 1.9199999570846558
               - 0.699999988079071
               - 0.14000000059604645
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: Dm_Goron_0025_01
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    460.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#29, concurrent=0)
               duration: 180.0
               DemoPaletteName: Dm_Goron_0025_C07
               IsWaitEnd: true
[    468.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#53, concurrent=0)
[    470.0] L PostProcessingActor[4] - EventEditLocationalLight (#22, concurrent=1)
[    492.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#54, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    500.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#54, concurrent=0)
[    520.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#55, concurrent=0)
               duration: 30.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Doon
[    550.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#55, concurrent=0)
[    559.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#56, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    567.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#56, concurrent=0)
[    597.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#57, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    605.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#57, concurrent=0)
[    625.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#58, concurrent=0)
               duration: 30.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Doon
[    630.0] E PostProcessingActor[3] - EventEditLocationalLight (#9, concurrent=1)
               duration: 10.0
               Color:
               - 1.9199999570846558
               - 0.699999988079071
               - 0.14000000059604645
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: Dm_Goron_0025_04
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    640.0] L PostProcessingActor[3] - EventEditLocationalLight (#9, concurrent=1)
[    640.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#29, concurrent=0)
[    640.0] E PostProcessingActor[3] - EventCreateLocationalLightToEventCenter (#8, concurrent=0)
               duration: 244.0
               Direction:
               - 0.8672900199890137
               - 0.010738000273704529
               - 0.4976870119571686
               InnerAngle: 9.715001106262207
               IsIgnoreRot: false
               LightHash: Dm_Goron_0025_04
               LightType: 1
               OuterAngle: 55.83400344848633
               PositionOffset:
               - -4.090000152587891
               - 0.5049999952316284
               - 3.2009999752044678
[    640.0] E PostProcessingActor[3] - EventEditLocationalLight (#10, concurrent=1)
               duration: 244.0
               Color:
               - 1.9199999570846558
               - 0.699999988079071
               - 0.14000000059604645
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 555.5560302734375
               IsFrameTransition: false
               LightHash: Dm_Goron_0025_04
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    640.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#30, concurrent=0)
               duration: 244.0
               DemoPaletteName: Dm_Goron_0025_C08
               IsWaitEnd: true
[    654.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#41, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Small_Don
[    655.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#58, concurrent=0)
[    660.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#59, concurrent=0)
               duration: 126.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_GoroGoro
[    662.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#41, concurrent=0)
[    708.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#42, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Small_Don
[    716.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#42, concurrent=0)
[    756.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#43, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Small_Don
[    764.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#43, concurrent=0)
[    786.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#59, concurrent=0)
[    802.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#60, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    810.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#60, concurrent=0)
[    810.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#44, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    818.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#44, concurrent=0)
[    834.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#61, concurrent=0)
               duration: 20.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_DoDon
[    854.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#61, concurrent=0)
[    874.0] E PostProcessingActor[1] - EventEditLocationalLight (#16, concurrent=1)
               duration: 10.0
               Color:
               - 1.9199999570846558
               - 0.699999988079071
               - 0.14000000059604645
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: Dm_Goron_0025_02
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    875.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#62, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    883.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#62, concurrent=0)
[    884.0] L PostProcessingActor[3] - EventCreateLocationalLightToEventCenter (#8, concurrent=0)
[    884.0] L PostProcessingActor[3] - EventEditLocationalLight (#10, concurrent=1)
[    884.0] L PostProcessingActor[1] - EventEditLocationalLight (#16, concurrent=1)
[    884.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#30, concurrent=0)
[    884.0] E PostProcessingActor[3] - EventEditLocationalLight (#11, concurrent=1)
               duration: 10.0
               Color:
               - 1.9199999570846558
               - 0.699999988079071
               - 0.14000000059604645
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: Dm_Goron_0025_04
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    884.0] E PostProcessingActor[1] - EventCreateLocationalLightToEventCenter (#15, concurrent=0)
               duration: 574.0
               Direction:
               - 0.5020189881324768
               - 0.23405200242996216
               - -0.832584023475647
               InnerAngle: 8.04800033569336
               IsIgnoreRot: false
               LightHash: Dm_Goron_0025_02
               LightType: 1
               OuterAngle: 30.833999633789062
               PositionOffset:
               - -2.7019999027252197
               - 0.31700000166893005
               - 5.2210001945495605
[    884.0] E PostProcessingActor[1] - EventEditLocationalLight (#17, concurrent=1)
               duration: 574.0
               Color:
               - 1.5199999809265137
               - 0.8299999833106995
               - 0.5099999904632568
               EditColor: true
               EditIntensity: true
               EditSourceRadius: false
               FrameTransitionCount: 30
               Intensity: 462.9630126953125
               IsFrameTransition: false
               LightHash: Dm_Goron_0025_02
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    884.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#31, concurrent=0)
               duration: 171.0
               DemoPaletteName: Dm_Goron_0025_C09
               IsWaitEnd: true
[    894.0] L PostProcessingActor[3] - EventEditLocationalLight (#11, concurrent=1)
[    910.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#63, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    918.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#63, concurrent=0)
[    937.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#64, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Doon
[    945.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#64, concurrent=0)
[    978.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#65, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    986.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#65, concurrent=0)
[   1012.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#66, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   1020.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#66, concurrent=0)
[   1041.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#67, concurrent=0)
               duration: 20.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Doon
[   1055.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#31, concurrent=0)
[   1055.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#32, concurrent=0)
               duration: 197.0
               DemoPaletteName: Dm_Goron_0025_C10
               IsWaitEnd: true
[   1061.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#67, concurrent=0)
[   1074.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#68, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   1082.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#68, concurrent=0)
[   1093.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#69, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   1101.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#69, concurrent=0)
[   1118.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#70, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   1126.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#70, concurrent=0)
[   1147.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#71, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   1155.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#71, concurrent=0)
[   1178.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#72, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   1186.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#72, concurrent=0)
[   1212.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#73, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   1220.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#73, concurrent=0)
[   1240.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#74, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   1248.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#74, concurrent=0)
[   1252.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#32, concurrent=0)
[   1252.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#33, concurrent=0)
               duration: 206.0
               DemoPaletteName: Dm_Goron_0025_C11
               IsWaitEnd: true
[   1265.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#75, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   1273.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#75, concurrent=0)
[   1293.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#76, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   1301.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#76, concurrent=0)
[   1321.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#77, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   1329.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#77, concurrent=0)
[   1357.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#78, concurrent=0)
               duration: 20.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Doon
[   1377.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#78, concurrent=0)
[   1389.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#79, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   1397.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#79, concurrent=0)
[   1407.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#80, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   1415.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#80, concurrent=0)
[   1441.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#81, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   1449.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#81, concurrent=0)
[   1458.0] L PostProcessingActor[1] - EventCreateLocationalLightToEventCenter (#15, concurrent=0)
[   1458.0] L PostProcessingActor[1] - EventEditLocationalLight (#17, concurrent=1)
[   1458.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#33, concurrent=0)
[   1458.0] E PostProcessingActor[1] - EventEditLocationalLight (#18, concurrent=1)
               duration: 10.0
               Color:
               - 1.9199999570846558
               - 0.699999988079071
               - 0.14000000059604645
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: Dm_Goron_0025_02
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1458.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#34, concurrent=0)
               duration: 58.0
               DemoPaletteName: Dm_Goron_0025_C12
               IsWaitEnd: true
[   1468.0] L PostProcessingActor[1] - EventEditLocationalLight (#18, concurrent=1)
[   1471.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#82, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   1479.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#82, concurrent=0)
[   1499.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#83, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   1507.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#83, concurrent=0)
[   1516.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#34, concurrent=0)
[   1516.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#35, concurrent=0)
               duration: 61.0
               DemoPaletteName: Dm_Goron_0025_C13
               IsWaitEnd: true
[   1528.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#84, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   1536.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#84, concurrent=0)
[   1563.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#85, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   1571.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#85, concurrent=0)
[   1577.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#35, concurrent=0)
[   1577.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#36, concurrent=0)
               duration: 110.0
               DemoPaletteName: Dm_Goron_0025_C14
               IsWaitEnd: true
[   1591.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#86, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   1599.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#86, concurrent=0)
[   1611.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#87, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   1619.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#87, concurrent=0)
[   1644.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#88, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   1652.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#88, concurrent=0)
[   1677.0] E PostProcessingActor[6] - EventEditLocationalLight (#1, concurrent=1)
               duration: 10.0
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
               LightHash: Dm_Goron_0025_06
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1677.0] E PostProcessingActor[5] - EventEditLocationalLight (#5, concurrent=1)
               duration: 10.0
               Color:
               - 1.9199999570846558
               - 0.699999988079071
               - 0.14000000059604645
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: Dm_Goron_0025_05
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1681.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#89, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   1687.0] L PostProcessingActor[6] - EventEditLocationalLight (#1, concurrent=1)
[   1687.0] L PostProcessingActor[5] - EventEditLocationalLight (#5, concurrent=1)
[   1687.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#36, concurrent=0)
[   1687.0] E PostProcessingActor[6] - EventCreateLocationalLightToEventCenter (#0, concurrent=0)
               duration: 185.0
               Direction:
               - 0.49799999594688416
               - 0.02148899994790554
               - 0.866910994052887
               InnerAngle: 0.28647899627685547
               IsIgnoreRot: false
               LightHash: Dm_Goron_0025_06
               LightType: 1
               OuterAngle: 41.66699981689453
               PositionOffset:
               - -4.173999786376953
               - 1.3049999475479126
               - 0.7609999775886536
[   1687.0] E PostProcessingActor[6] - EventEditLocationalLight (#2, concurrent=1)
               duration: 185.0
               Color:
               - 1.9199999570846558
               - 0.699999988079071
               - 0.14000000059604645
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 833.3330078125
               IsFrameTransition: false
               LightHash: Dm_Goron_0025_06
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1687.0] E PostProcessingActor[5] - EventCreateLocationalLightToEventCenter (#4, concurrent=0)
               duration: 185.0
               Direction:
               - 0.18792399764060974
               - -0.035999998450279236
               - -0.9815239906311035
               InnerAngle: 0.5475209951400757
               IsIgnoreRot: false
               LightHash: Dm_Goron_0025_05
               LightType: 1
               OuterAngle: 40.83399963378906
               PositionOffset:
               - -0.9340000152587891
               - 1.3700000047683716
               - 4.380000114440918
[   1687.0] E PostProcessingActor[5] - EventEditLocationalLight (#6, concurrent=1)
               duration: 185.0
               Color:
               - 1.5199999809265137
               - 0.8299999833106995
               - 0.5099999904632568
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 192.58900451660156
               IsFrameTransition: false
               LightHash: Dm_Goron_0025_05
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1687.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#37, concurrent=0)
               duration: 185.0
               DemoPaletteName: Dm_Goron_0025_C15
               IsWaitEnd: true
[   1689.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#89, concurrent=0)
[   1711.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#90, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   1719.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#90, concurrent=0)
[   1736.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#91, concurrent=0)
               duration: 20.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Doon
[   1756.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#91, concurrent=0)
[   1772.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#92, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   1780.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#92, concurrent=0)
[   1794.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#93, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   1802.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#93, concurrent=0)
[   1821.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#94, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   1829.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#94, concurrent=0)
[   1848.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#95, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   1856.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#95, concurrent=0)
[   1872.0] L PostProcessingActor[6] - EventCreateLocationalLightToEventCenter (#0, concurrent=0)
[   1872.0] L PostProcessingActor[6] - EventEditLocationalLight (#2, concurrent=1)
[   1872.0] L PostProcessingActor[5] - EventCreateLocationalLightToEventCenter (#4, concurrent=0)
[   1872.0] L PostProcessingActor[5] - EventEditLocationalLight (#6, concurrent=1)
[   1872.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#37, concurrent=0)
[   1872.0] E PostProcessingActor[6] - EventEditLocationalLight (#3, concurrent=1)
               duration: 10.0
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
               LightHash: Dm_Goron_0025_06
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1872.0] E PostProcessingActor[5] - EventEditLocationalLight (#7, concurrent=1)
               duration: 10.0
               Color:
               - 1.9199999570846558
               - 0.699999988079071
               - 0.14000000059604645
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: Dm_Goron_0025_05
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1872.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#38, concurrent=0)
               duration: 49.0
               DemoPaletteName: Dm_Goron_0025_C16
               IsWaitEnd: true
[   1879.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#96, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   1882.0] L PostProcessingActor[6] - EventEditLocationalLight (#3, concurrent=1)
[   1882.0] L PostProcessingActor[5] - EventEditLocationalLight (#7, concurrent=1)
[   1887.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#96, concurrent=0)
[   1899.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#97, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   1907.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#97, concurrent=0)
[   1921.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#38, concurrent=0)
[   1921.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#39, concurrent=0)
               duration: 54.0
               DemoPaletteName: Dm_Goron_0025_C17
               IsWaitEnd: true
[   1932.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#98, concurrent=0)
               duration: 10.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   1942.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#98, concurrent=0)
[   1955.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#99, concurrent=0)
               duration: 10.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   1965.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#99, concurrent=0)
[   1975.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#39, concurrent=0)
[   1975.0] E EventWorldManagerController - Event_SetDemoPaletteForTimeline (#40, concurrent=0)
               duration: 255.0
               DemoPaletteName: Dm_Goron_0025_C18
               IsWaitEnd: true
[   1978.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#100, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   1986.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#100, concurrent=0)
[   2001.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#101, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   2009.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#101, concurrent=0)
[   2029.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#102, concurrent=0)
               duration: 8.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   2037.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#102, concurrent=0)
[   2058.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#103, concurrent=0)
               duration: 25.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_Doon
[   2083.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#103, concurrent=0)
[   2230.0] L EventWorldManagerController - Event_SetDemoPaletteForTimeline (#40, concurrent=0)
