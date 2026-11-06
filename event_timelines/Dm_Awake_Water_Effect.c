-------- Event timeline: Dm_Awake_Water_Effect --------
actors: 7
clips: 7
oneshots: 0
cuts: 1
duration: 7448.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: EventEffectEmitter[5]
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

Actor: EventEffectEmitter[1]
concurrent clips: 1
actions: ['EventNodeEffectEmit']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[6]
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

Actor: EventEffectEmitter[3]
concurrent clips: 1
actions: ['EventNodeEffectEmit']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[4]
concurrent clips: 1
actions: ['EventNodeEffectEmit']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#1, concurrent=0)
               duration: 210.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_Awake_Water_Crystal_00_C01
               InstanceName: '0'
               IsWaitEnd: true
[      0.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#4, concurrent=0)
               duration: 221.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_Awake_Water_WarpOut_00_C01
               InstanceName: '0'
               IsWaitEnd: true
[    210.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#1, concurrent=0)
[    210.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#2, concurrent=0)
               duration: 310.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_Awake_Water_Crystal_01_C02
               InstanceName: '0'
               IsWaitEnd: true
[    210.0] E EventEffectEmitter[6] - EventNodeEffectEmit (#3, concurrent=0)
               duration: 310.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_Awake_Water_CrystalLight_00_C02
               InstanceName: '0'
               IsWaitEnd: true
[    221.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#4, concurrent=0)
[    520.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#2, concurrent=0)
[    520.0] L EventEffectEmitter[6] - EventNodeEffectEmit (#3, concurrent=0)
[    560.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#5, concurrent=0)
               duration: 220.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_Awake_Water_SageAppear_00_C03
               InstanceName: '0'
               IsWaitEnd: true
[    780.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#5, concurrent=0)
[   7100.0] E EventEffectEmitter[5] - EventEffectAddELinkHiddenSetting (#0, concurrent=0)
               duration: 348.0
               ActorName: Npc_Zora_Ruto_Adult_001
               KeyName: Dm_WaterTemple_0015_Swim_00
[   7258.0] E EventEffectEmitter[4] - EventNodeEffectEmit (#6, concurrent=0)
               duration: 190.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_Awake_Water_Flare_00
               InstanceName: '0'
               IsWaitEnd: true
[   7448.0] L EventEffectEmitter[5] - EventEffectAddELinkHiddenSetting (#0, concurrent=0)
[   7448.0] L EventEffectEmitter[4] - EventNodeEffectEmit (#6, concurrent=0)
