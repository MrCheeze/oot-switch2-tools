-------- Event timeline: Dm_Kakariko_0025 --------
actors: 3
clips: 5
oneshots: 0
cuts: 1
duration: 2355.0
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

Actor: GameSystemActor[1]
concurrent clips: 1
actions: ['EventControllerRumbleTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: UISystemActor[1]
concurrent clips: 1
actions: ['EventEventFadeOutForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[    523.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#1, concurrent=0)
               duration: 41.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_GataGata
[    564.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#1, concurrent=0)
[    564.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#2, concurrent=0)
               duration: 10.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Small_GataGata
[    574.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#2, concurrent=0)
[    635.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#0, concurrent=0)
               duration: 120.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Dohoon
[    755.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#0, concurrent=0)
[    817.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#3, concurrent=0)
               duration: 60.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Doon
[    877.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#3, concurrent=0)
[   2354.0] E UISystemActor[1] - EventEventFadeOutForTimeline (#4, concurrent=0)
               duration: 1.0
               Color: 1
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   2355.0] L UISystemActor[1] - EventEventFadeOutForTimeline (#4, concurrent=0)
