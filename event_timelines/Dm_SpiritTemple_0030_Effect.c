-------- Event timeline: Dm_SpiritTemple_0030_Effect --------
actors: 8
clips: 18
oneshots: 0
cuts: 1
duration: 2779.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: EventEffectEmitter[0]
concurrent clips: 1
actions: ['EventEffectAddELinkHiddenSetting', 'EventEffectDeleteELinkHiddenSetting']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[5]
concurrent clips: 1
actions: ['EventEffectAddELinkHiddenSetting', 'EventEffectDeleteELinkHiddenSetting']
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

Actor: EventEffectEmitter[3]
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

Actor: EventEffectEmitter[6]
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

[      0.0] E EventEffectEmitter[0] - EventEffectAddELinkHiddenSetting (#0, concurrent=0)
               duration: 10.0
               ActorName: Enemy_DungeonBoss_Koume
               KeyName: Element
[      0.0] E EventEffectEmitter[5] - EventEffectAddELinkHiddenSetting (#8, concurrent=0)
               duration: 10.0
               ActorName: Enemy_DungeonBoss_Kotake
               KeyName: Element
[     10.0] L EventEffectEmitter[0] - EventEffectAddELinkHiddenSetting (#0, concurrent=0)
[     10.0] L EventEffectEmitter[5] - EventEffectAddELinkHiddenSetting (#8, concurrent=0)
[     40.0] E EventEffectEmitter[0] - EventEffectDeleteELinkHiddenSetting (#1, concurrent=0)
               duration: 10.0
               ActorName: Enemy_DungeonBoss_Koume
               KeyName: Element
[     40.0] E EventEffectEmitter[5] - EventEffectDeleteELinkHiddenSetting (#9, concurrent=0)
               duration: 10.0
               ActorName: Enemy_DungeonBoss_Kotake
               KeyName: Element
[     50.0] L EventEffectEmitter[0] - EventEffectDeleteELinkHiddenSetting (#1, concurrent=0)
[     50.0] L EventEffectEmitter[5] - EventEffectDeleteELinkHiddenSetting (#9, concurrent=0)
[     50.0] E EventEffectEmitter[0] - EventEffectAddELinkHiddenSetting (#2, concurrent=0)
               duration: 53.0
               ActorName: Enemy_DungeonBoss_Koume
               KeyName: Element_PointLight
[     50.0] E EventEffectEmitter[4] - EventNodeEffectEmit (#17, concurrent=0)
               duration: 910.0
               ActorName: Enemy_DungeonBoss_Koume
               ELinkKeyName: Dm_SpiritTemple_0030_Koume_PointLight
               InstanceName: KotakeKoumeBattleClient
               IsWaitEnd: true
[    103.0] L EventEffectEmitter[0] - EventEffectAddELinkHiddenSetting (#2, concurrent=0)
[    498.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#13, concurrent=0)
               duration: 206.0
               ActorName: Enemy_DungeonBoss_Kotake
               ELinkKeyName: Dm_SpiritTemple_0030_C01
               InstanceName: KotakeKoumeBattleClient
               IsWaitEnd: true
[    498.0] E EventEffectEmitter - EventNodeEffectEmit (#14, concurrent=0)
               duration: 206.0
               ActorName: Enemy_DungeonBoss_Koume
               ELinkKeyName: Dm_SpiritTemple_0030_C01
               InstanceName: KotakeKoumeBattleClient
               IsWaitEnd: true
[    675.0] E EventEffectEmitter[0] - EventEffectAddELinkHiddenSetting (#3, concurrent=0)
               duration: 1.0
               ActorName: Enemy_DungeonBoss_Koume
               KeyName: Element
[    675.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#10, concurrent=0)
               duration: 285.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_SpiritTemple_0030_C01
               InstanceName: ''
               IsWaitEnd: true
[    676.0] L EventEffectEmitter[0] - EventEffectAddELinkHiddenSetting (#3, concurrent=0)
[    676.0] E EventEffectEmitter[0] - EventEffectAddELinkHiddenSetting (#4, concurrent=0)
               duration: 1.0
               ActorName: Enemy_DungeonBoss_Kotake
               KeyName: Element
[    677.0] L EventEffectEmitter[0] - EventEffectAddELinkHiddenSetting (#4, concurrent=0)
[    677.0] E EventEffectEmitter[0] - EventEffectAddELinkHiddenSetting (#5, concurrent=0)
               duration: 1.0
               ActorName: Enemy_DungeonBoss_Kotake
               KeyName: Element_HeadAura
[    678.0] L EventEffectEmitter[0] - EventEffectAddELinkHiddenSetting (#5, concurrent=0)
[    704.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#13, concurrent=0)
[    704.0] L EventEffectEmitter - EventNodeEffectEmit (#14, concurrent=0)
[    960.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#10, concurrent=0)
[    960.0] L EventEffectEmitter[4] - EventNodeEffectEmit (#17, concurrent=0)
[    960.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#11, concurrent=0)
               duration: 436.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_SpiritTemple_0030_C02
               InstanceName: ''
               IsWaitEnd: true
[   1140.0] E EventEffectEmitter[0] - EventEffectAddELinkHiddenSetting (#6, concurrent=0)
               duration: 1.0
               ActorName: Enemy_DungeonBoss_Twinrova
               KeyName: Element_Fire
[   1141.0] L EventEffectEmitter[0] - EventEffectAddELinkHiddenSetting (#6, concurrent=0)
[   1396.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#11, concurrent=0)
[   1396.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#12, concurrent=0)
               duration: 202.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_SpiritTemple_0030_C03
               InstanceName: '0'
               IsWaitEnd: true
[   1398.0] E EventEffectEmitter[6] - EventNodeEffectEmit (#15, concurrent=0)
               duration: 232.0
               ActorName: Enemy_DungeonBoss_Twinrova
               ELinkKeyName: Dm_SpiritTemple_0030_Wand_Element_Fire
               InstanceName: ''
               IsWaitEnd: true
[   1598.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#12, concurrent=0)
[   1630.0] L EventEffectEmitter[6] - EventNodeEffectEmit (#15, concurrent=0)
[   1630.0] E EventEffectEmitter[6] - EventNodeEffectEmit (#16, concurrent=0)
               duration: 900.0
               ActorName: Enemy_DungeonBoss_Twinrova
               ELinkKeyName: Dm_SpiritTemple_0030_Wand_Element_Fire
               InstanceName: ''
               IsWaitEnd: true
[   2530.0] L EventEffectEmitter[6] - EventNodeEffectEmit (#16, concurrent=0)
[   2530.0] E EventEffectEmitter[0] - EventEffectDeleteELinkHiddenSetting (#7, concurrent=0)
               duration: 100.0
               ActorName: Enemy_DungeonBoss_Twinrova
               KeyName: Element_Fire
[   2630.0] L EventEffectEmitter[0] - EventEffectDeleteELinkHiddenSetting (#7, concurrent=0)
