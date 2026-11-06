-------- Event timeline: Dm_TimeTemple_0020_Effect --------
actors: 2
clips: 5
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

Actor: EventEffectEmitter[1]
concurrent clips: 1
actions: ['EventNodeEffectEmit']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[0]
concurrent clips: 1
actions: ['EventEffectAddELinkHiddenSetting']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#0, concurrent=0)
               duration: 988.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_TimeTemple_0020_C01
               InstanceName: ''
               IsWaitEnd: true
[      0.0] E EventEffectEmitter[0] - EventEffectAddELinkHiddenSetting (#4, concurrent=0)
               duration: 1800.0
               ActorName: EftLoc_HrlCity_TimeTemple_LightShaft_FirstTime_00
               KeyName: Always
[    988.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#0, concurrent=0)
[    988.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#1, concurrent=0)
               duration: 300.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_TimeTemple_0020_C04
               InstanceName: ''
               IsWaitEnd: true
[   1288.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#1, concurrent=0)
[   1288.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#2, concurrent=0)
               duration: 180.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_TimeTemple_0020_C05
               InstanceName: ''
               IsWaitEnd: true
[   1468.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#2, concurrent=0)
[   1468.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#3, concurrent=0)
               duration: 332.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_TimeTemple_0020_C06
               InstanceName: ''
               IsWaitEnd: true
[   1800.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#3, concurrent=0)
[   1800.0] L EventEffectEmitter[0] - EventEffectAddELinkHiddenSetting (#4, concurrent=0)
