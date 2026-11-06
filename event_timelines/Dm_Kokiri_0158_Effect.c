-------- Event timeline: Dm_Kokiri_0158_Effect --------
actors: 3
clips: 4
oneshots: 0
cuts: 1
duration: 5921.0
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

[      0.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#0, concurrent=0)
               duration: 230.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_Kokiri_0158_Forest_WarpOut_00
               InstanceName: '0'
               IsWaitEnd: true
[    230.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#0, concurrent=0)
[   1443.0] E EventEffectEmitter - EventEffectAddELinkHiddenSetting (#2, concurrent=0)
               duration: 100.0
               ActorName: EftLoc_DekunoKiSama_LeafDrop_00
               KeyName: Always
[   1543.0] L EventEffectEmitter - EventEffectAddELinkHiddenSetting (#2, concurrent=0)
[   1674.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#1, concurrent=0)
               duration: 300.0
               ActorName: Npc_DekuTreeChild
               ELinkKeyName: Dm_Kokiri_0158_impact_00
               InstanceName: '0'
               IsWaitEnd: true
[   1674.0] E EventEffectEmitter - EventEffectDeleteELinkHiddenSetting (#3, concurrent=0)
               duration: 100.0
               ActorName: EftLoc_DekunoKiSama_LeafDrop_00
               KeyName: Always
[   1774.0] L EventEffectEmitter - EventEffectDeleteELinkHiddenSetting (#3, concurrent=0)
[   1974.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#1, concurrent=0)
