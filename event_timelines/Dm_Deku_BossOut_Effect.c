-------- Event timeline: Dm_Deku_BossOut_Effect --------
actors: 7
clips: 8
oneshots: 0
cuts: 1
duration: 2529.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: EventEffectEmitter[4]
concurrent clips: 1
actions: ['EventNodeEffectEmit']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[3]
concurrent clips: 1
actions: ['EventEffectAddELinkHiddenSetting']
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

Actor: EventEffectEmitter
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

Actor: EventEffectEmitter[5]
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
actions: ['EventNodeEffectEmitOneShot', 'EventNodeEffectEmit']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventEffectEmitter[3] - EventEffectAddELinkHiddenSetting (#1, concurrent=0)
               duration: 2529.0
               ActorName: EftLoc_DekunoKiSama_GohmaRoom_00
               KeyName: Always
[    503.0] E EventEffectEmitter[4] - EventNodeEffectEmit (#0, concurrent=0)
               duration: 664.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_Deku_BossOut_ImpactSmoke
               InstanceName: '0'
               IsWaitEnd: true
[    601.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#2, concurrent=0)
               duration: 943.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_Deku_BossOut_00
               InstanceName: '0'
               IsWaitEnd: true
[    767.0] E EventEffectEmitter - EventNodeEffectEmit (#3, concurrent=0)
               duration: 777.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_Deku_BossOut_01
               InstanceName: '0'
               IsWaitEnd: true
[    767.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#4, concurrent=0)
               duration: 777.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_Deku_BossOut_02
               InstanceName: '0'
               IsWaitEnd: true
[    767.0] E EventEffectEmitter[5] - EventNodeEffectEmit (#5, concurrent=0)
               duration: 777.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_Deku_BossOut_03
               InstanceName: '0'
               IsWaitEnd: true
[   1167.0] L EventEffectEmitter[4] - EventNodeEffectEmit (#0, concurrent=0)
[   1544.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#2, concurrent=0)
[   1544.0] L EventEffectEmitter - EventNodeEffectEmit (#3, concurrent=0)
[   1544.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#4, concurrent=0)
[   1544.0] L EventEffectEmitter[5] - EventNodeEffectEmit (#5, concurrent=0)
[   1544.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#6, concurrent=0)
               duration: 96.0
               ActorName: Dm_Locator
               ELinkKeyName: HeartCountainer_Appear
               InstanceName: '1'
[   1640.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#6, concurrent=0)
[   1640.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#7, concurrent=0)
               duration: 889.0
               ActorName: Dm_Locator
               ELinkKeyName: HeartCountainer_Wait
               InstanceName: '1'
               IsWaitEnd: true
[   2529.0] L EventEffectEmitter[3] - EventEffectAddELinkHiddenSetting (#1, concurrent=0)
[   2529.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#7, concurrent=0)
