-------- Event timeline: Dm_FireTemple_0000_Effect --------
actors: 3
clips: 5
oneshots: 0
cuts: 1
duration: 2330.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: EventEffectEmitter[1]
concurrent clips: 1
actions: ['EventEffectAddELinkHiddenSetting']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[0]
concurrent clips: 1
actions: ['EventNodeEffectEmit', 'EventNodeEffectFade']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter
concurrent clips: 1
actions: ['EventNodeEffectEmit', 'EventNodeEffectFade']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventEffectEmitter[1] - EventEffectAddELinkHiddenSetting (#0, concurrent=0)
               duration: 2450.0
               ActorName: EftLoc_FireTemple_Door_A_01
               KeyName: Always
[      0.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#1, concurrent=0)
               duration: 398.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_FireTemple_Steam_01_C01
               InstanceName: '0'
               IsWaitEnd: true
[    291.0] E EventEffectEmitter - EventNodeEffectEmit (#3, concurrent=0)
               duration: 107.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_FireTemple_Steam_01_C02
               InstanceName: '0'
               IsWaitEnd: true
[    398.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#1, concurrent=0)
[    398.0] L EventEffectEmitter - EventNodeEffectEmit (#3, concurrent=0)
[    398.0] E EventEffectEmitter[0] - EventNodeEffectFade (#2, concurrent=0)
               duration: 452.0
               IsWaitEnd: false
[    398.0] E EventEffectEmitter - EventNodeEffectFade (#4, concurrent=0)
               duration: 452.0
               IsWaitEnd: false
[    850.0] L EventEffectEmitter[0] - EventNodeEffectFade (#2, concurrent=0)
[    850.0] L EventEffectEmitter - EventNodeEffectFade (#4, concurrent=0)
[   2450.0] L EventEffectEmitter[1] - EventEffectAddELinkHiddenSetting (#0, concurrent=0)
