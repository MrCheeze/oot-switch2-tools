-------- Event timeline: Dm_TimeTemple_0050_Effect --------
actors: 2
clips: 3
oneshots: 0
cuts: 1
duration: 3657.0
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

Actor: EventEffectEmitter
concurrent clips: 1
actions: ['EventEffectAddELinkHiddenSetting', 'EventEffectDeleteELinkHiddenSetting']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventEffectEmitter - EventEffectAddELinkHiddenSetting (#1, concurrent=0)
               duration: 50.0
               ActorName: EftLoc_HrlCity_TimeTemple_LightShaft_00
               KeyName: Always
[      1.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#0, concurrent=0)
               duration: 237.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_TimeTemple_0050_WarpOut_01
               InstanceName: '0'
               IsWaitEnd: true
[     50.0] L EventEffectEmitter - EventEffectAddELinkHiddenSetting (#1, concurrent=0)
[    238.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#0, concurrent=0)
[    238.0] E EventEffectEmitter - EventEffectDeleteELinkHiddenSetting (#2, concurrent=0)
               duration: 50.0
               ActorName: EftLoc_HrlCity_TimeTemple_LightShaft_00
               KeyName: Always
[    288.0] L EventEffectEmitter - EventEffectDeleteELinkHiddenSetting (#2, concurrent=0)
