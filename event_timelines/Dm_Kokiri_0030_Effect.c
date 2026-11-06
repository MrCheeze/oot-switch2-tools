-------- Event timeline: Dm_Kokiri_0030_Effect --------
actors: 3
clips: 10
oneshots: 0
cuts: 1
duration: 12545.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: EventEffectEmitter
concurrent clips: 1
actions: ['EventEffectAddELinkHiddenSetting', 'EventEffectDeleteELinkHiddenSetting']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[0]
concurrent clips: 1
actions: ['EventNodeEffectEmit', 'EventNodeEffectEmitOneShot']
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

[      0.0] E EventEffectEmitter - EventEffectAddELinkHiddenSetting (#0, concurrent=0)
               duration: 5437.0
               ActorName: EftLoc_DekuTree_Fog_HideFace_00
               KeyName: Always
[   2909.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#3, concurrent=0)
               duration: 1564.0
               ActorName: Dm_Npc_Navi
               ELinkKeyName: Dm_Kokiri_0030_FarGlow
               InstanceName: '0'
               IsWaitEnd: false
[   4473.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#3, concurrent=0)
[   4651.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#4, concurrent=0)
               duration: 431.0
               ActorName: Dm_Npc_Navi
               ELinkKeyName: Dm_Kokiri_0030_FarGlow
               InstanceName: '0'
               IsWaitEnd: false
[   5082.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#4, concurrent=0)
[   5437.0] L EventEffectEmitter - EventEffectAddELinkHiddenSetting (#0, concurrent=0)
[   5687.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#5, concurrent=0)
               duration: 170.0
               ActorName: Dm_Npc_Navi
               ELinkKeyName: Dm_Kokiri_0030_LowAltitudeFlight
               InstanceName: '0'
[   5857.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#5, concurrent=0)
[   6136.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#6, concurrent=0)
               duration: 502.0
               ActorName: Dm_Npc_Navi
               ELinkKeyName: Dm_Kokiri_0030_FarGlow
               InstanceName: '0'
               IsWaitEnd: false
[   6136.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#9, concurrent=0)
               duration: 501.0
               ActorName: Dm_Npc_Fairy
               ELinkKeyName: Dm_Kokiri_0030_FarGlow
               InstanceName: '2'
               IsWaitEnd: true
[   6637.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#9, concurrent=0)
[   6638.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#6, concurrent=0)
[   7227.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#7, concurrent=0)
               duration: 540.0
               ActorName: Dm_Npc_Navi
               ELinkKeyName: Dm_Kokiri_0030_ColideFence
               InstanceName: '0'
[   7767.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#7, concurrent=0)
[   9706.0] E EventEffectEmitter - EventEffectAddELinkHiddenSetting (#1, concurrent=0)
               duration: 912.0
               ActorName: Dm_Npc_Navi
               KeyName: Wait
[   9706.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#8, concurrent=0)
               duration: 912.0
               ActorName: Dm_Npc_Navi
               ELinkKeyName: Dm_Kokiri_0030_WeakSoftParticleGlow
               InstanceName: '0'
               IsWaitEnd: true
[  10618.0] L EventEffectEmitter - EventEffectAddELinkHiddenSetting (#1, concurrent=0)
[  10618.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#8, concurrent=0)
[  10618.0] E EventEffectEmitter - EventEffectDeleteELinkHiddenSetting (#2, concurrent=0)
               duration: 423.0
               ActorName: Dm_Npc_Navi
               KeyName: Wait
[  11041.0] L EventEffectEmitter - EventEffectDeleteELinkHiddenSetting (#2, concurrent=0)
