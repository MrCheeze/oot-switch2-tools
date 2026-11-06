-------- Event timeline: Dm_Kokiri_0090_Effect --------
actors: 4
clips: 10
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

Actor: EventEffectEmitter
concurrent clips: 1
actions: ['EventNodeEffectEmit', 'EventNodeEffectEmitOneShot']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventEffectEmitter[1] - EventEffectAddELinkHiddenSetting (#0, concurrent=0)
               duration: 100.0
               ActorName: Camera
               KeyName: FieldEnvEffect
[      0.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#1, concurrent=0)
               duration: 985.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_Kokiri_0090_Fire_C01
               InstanceName: '0'
               IsWaitEnd: true
[    100.0] L EventEffectEmitter[1] - EventEffectAddELinkHiddenSetting (#0, concurrent=0)
[    841.0] E EventEffectEmitter - EventNodeEffectEmitOneShot (#5, concurrent=0)
               duration: 144.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_Kokiri_0090_Lightning_C01
               InstanceName: '0'
[    985.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#1, concurrent=0)
[    985.0] L EventEffectEmitter - EventNodeEffectEmitOneShot (#5, concurrent=0)
[    985.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#2, concurrent=0)
               duration: 240.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_Kokiri_0090_Fire_C02
               InstanceName: '0'
               IsWaitEnd: true
[   1006.0] E EventEffectEmitter - EventNodeEffectEmitOneShot (#6, concurrent=0)
               duration: 144.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_Kokiri_0090_Lightning_C02
               InstanceName: '0'
[   1150.0] L EventEffectEmitter - EventNodeEffectEmitOneShot (#6, concurrent=0)
[   1225.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#2, concurrent=0)
[   1225.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#3, concurrent=0)
               duration: 1398.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_Kokiri_0090_Fire_C03
               InstanceName: '0'
               IsWaitEnd: true
[   1225.0] E EventEffectEmitter - EventNodeEffectEmit (#7, concurrent=0)
               duration: 154.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_Kokiri_0090_Lightning_C03_00
               InstanceName: '0'
               IsWaitEnd: true
[   1379.0] L EventEffectEmitter - EventNodeEffectEmit (#7, concurrent=0)
[   1590.0] E EventEffectEmitter - EventNodeEffectEmit (#8, concurrent=0)
               duration: 154.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_Kokiri_0090_Lightning_C03_01
               InstanceName: '0'
               IsWaitEnd: true
[   1744.0] L EventEffectEmitter - EventNodeEffectEmit (#8, concurrent=0)
[   1774.0] E EventEffectEmitter - EventNodeEffectEmit (#9, concurrent=0)
               duration: 154.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_Kokiri_0090_Lightning_C03_02
               InstanceName: '0'
               IsWaitEnd: true
[   1928.0] L EventEffectEmitter - EventNodeEffectEmit (#9, concurrent=0)
[   1928.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#4, concurrent=0)
               duration: 695.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_Kokiri_0090_Fire_C03_Transition
               InstanceName: '0'
               IsWaitEnd: true
[   2623.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#3, concurrent=0)
[   2623.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#4, concurrent=0)
