-------- Event timeline: Dm_Kokiri_0070_Effect --------
actors: 2
clips: 2
oneshots: 0
cuts: 1
duration: 3778.0
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
               duration: 3778.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_Kokiri_0070_LightShaft
               InstanceName: '0'
               IsWaitEnd: true
[      0.0] E EventEffectEmitter[0] - EventEffectAddELinkHiddenSetting (#1, concurrent=0)
               duration: 116.0
               ActorName: EftLoc_DekuTree_Fog_HideFace_00
               KeyName: Always
[    116.0] L EventEffectEmitter[0] - EventEffectAddELinkHiddenSetting (#1, concurrent=0)
[   3778.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#0, concurrent=0)
