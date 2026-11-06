-------- Event timeline: Dm_StaffCredit_0010_Effect --------
actors: 3
clips: 3
oneshots: 0
cuts: 1
duration: 2940.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: EventEffectEmitter[0]
concurrent clips: 1
actions: ['EventNodeEffectEmit']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[1]
concurrent clips: 1
actions: ['EventNodeEffectEmit']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[2]
concurrent clips: 1
actions: ['EventNodeEffectEmit']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#0, concurrent=0)
               duration: 500.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_StaffCredit_0010_Dust_00
               InstanceName: ''
               IsWaitEnd: true
[    429.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#1, concurrent=0)
               duration: 1551.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_StaffCredit_0010_Dust_01
               InstanceName: ''
               IsWaitEnd: true
[    500.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#0, concurrent=0)
[   1891.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#2, concurrent=0)
               duration: 1049.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_StaffCredit_0010_Dust_02
               InstanceName: ''
               IsWaitEnd: true
[   1980.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#1, concurrent=0)
[   2940.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#2, concurrent=0)
