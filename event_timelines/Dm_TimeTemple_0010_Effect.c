-------- Event timeline: Dm_TimeTemple_0010_Effect --------
actors: 10
clips: 17
oneshots: 0
cuts: 1
duration: 2590.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: EventEffectEmitter[8]
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

Actor: EventEffectEmitter[6]
concurrent clips: 1
actions: ['EventNodeEffectEmit']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[7]
concurrent clips: 1
actions: ['EventNodeEffectEmit']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[4]
concurrent clips: 2
actions: ['EventEffectAddELinkHiddenSetting']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[3]
concurrent clips: 1
actions: ['EventNodeEffectEmit', 'EventEffectAddELinkHiddenSetting']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[2]
concurrent clips: 1
actions: ['EventNodeEffectEmit', 'EventEffectAddELinkHiddenSetting']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[1]
concurrent clips: 1
actions: ['EventNodeEffectEmit', 'EventEffectAddELinkHiddenSetting']
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
actions: ['EventNodeEffectEmit']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventEffectEmitter[4] - EventEffectAddELinkHiddenSetting (#4, concurrent=0)
               duration: 100.0
               ActorName: Player
               KeyName: Ocarina_Correct_End
[      0.0] E EventEffectEmitter[4] - EventEffectAddELinkHiddenSetting (#5, concurrent=1)
               duration: 100.0
               ActorName: Player
               KeyName: Ocarina_Correct
[      0.0] E EventEffectEmitter[3] - EventEffectAddELinkHiddenSetting (#6, concurrent=0)
               duration: 100.0
               ActorName: Obj_TimeTemple_SpiritStone_A_01
               KeyName: Wait
[      0.0] E EventEffectEmitter[2] - EventEffectAddELinkHiddenSetting (#9, concurrent=0)
               duration: 100.0
               ActorName: Obj_TimeTemple_SpiritStone_A_02
               KeyName: Wait
[      0.0] E EventEffectEmitter[1] - EventEffectAddELinkHiddenSetting (#12, concurrent=0)
               duration: 100.0
               ActorName: Obj_TimeTemple_SpiritStone_A_03
               KeyName: Wait
[    100.0] L EventEffectEmitter[4] - EventEffectAddELinkHiddenSetting (#4, concurrent=0)
[    100.0] L EventEffectEmitter[4] - EventEffectAddELinkHiddenSetting (#5, concurrent=1)
[    100.0] L EventEffectEmitter[3] - EventEffectAddELinkHiddenSetting (#6, concurrent=0)
[    100.0] L EventEffectEmitter[2] - EventEffectAddELinkHiddenSetting (#9, concurrent=0)
[    100.0] L EventEffectEmitter[1] - EventEffectAddELinkHiddenSetting (#12, concurrent=0)
[    400.0] E EventEffectEmitter[5] - EventNodeEffectEmit (#1, concurrent=0)
               duration: 82.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_TimeTemple_0010_00
               InstanceName: '0'
               IsWaitEnd: true
[    400.0] E EventEffectEmitter[6] - EventNodeEffectEmit (#2, concurrent=0)
               duration: 82.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_TimeTemple_0010_01
               InstanceName: '1'
               IsWaitEnd: true
[    400.0] E EventEffectEmitter[7] - EventNodeEffectEmit (#3, concurrent=0)
               duration: 82.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_TimeTemple_0010_02
               InstanceName: '2'
               IsWaitEnd: true
[    482.0] L EventEffectEmitter[5] - EventNodeEffectEmit (#1, concurrent=0)
[    482.0] L EventEffectEmitter[6] - EventNodeEffectEmit (#2, concurrent=0)
[    482.0] L EventEffectEmitter[7] - EventNodeEffectEmit (#3, concurrent=0)
[    482.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#7, concurrent=0)
               duration: 498.0
               ActorName: Obj_TimeTemple_SpiritStone_A_01
               ELinkKeyName: Dm_TimeTemple_0010_Turn
               InstanceName: '0'
               IsWaitEnd: true
[    482.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#10, concurrent=0)
               duration: 498.0
               ActorName: Obj_TimeTemple_SpiritStone_A_02
               ELinkKeyName: Dm_TimeTemple_0010_Turn
               InstanceName: '0'
               IsWaitEnd: true
[    482.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#13, concurrent=0)
               duration: 498.0
               ActorName: Obj_TimeTemple_SpiritStone_A_03
               ELinkKeyName: Dm_TimeTemple_0010_Turn
               InstanceName: '0'
               IsWaitEnd: true
[    980.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#7, concurrent=0)
[    980.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#10, concurrent=0)
[    980.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#13, concurrent=0)
[    980.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#8, concurrent=0)
               duration: 1610.0
               ActorName: Obj_TimeTemple_SpiritStone_A_01
               ELinkKeyName: Dm_TimeTemple_0010_Wait
               InstanceName: '0'
               IsWaitEnd: true
[    980.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#11, concurrent=0)
               duration: 1610.0
               ActorName: Obj_TimeTemple_SpiritStone_A_02
               ELinkKeyName: Dm_TimeTemple_0010_Wait
               InstanceName: '0'
               IsWaitEnd: true
[    980.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#14, concurrent=0)
               duration: 1610.0
               ActorName: Obj_TimeTemple_SpiritStone_A_03
               ELinkKeyName: Dm_TimeTemple_0010_Wait
               InstanceName: '0'
               IsWaitEnd: true
[   1470.0] E EventEffectEmitter[8] - EventNodeEffectEmit (#0, concurrent=0)
               duration: 430.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_TimeTemple_0010_03
               InstanceName: '3'
               IsWaitEnd: true
[   1846.0] E EventEffectEmitter - EventNodeEffectEmit (#16, concurrent=0)
               duration: 744.0
               ActorName: Obj_TimeTemple_Door_A_01
               ELinkKeyName: Dm_TimeTemple_0010_MastertSword_Smoke
               InstanceName: ''
               IsWaitEnd: true
[   1900.0] L EventEffectEmitter[8] - EventNodeEffectEmit (#0, concurrent=0)
[   1900.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#15, concurrent=0)
               duration: 690.0
               ActorName: Obj_TimeTemple_Door_A_01
               ELinkKeyName: Dm_TimeTemple_0010_Wait
               InstanceName: ''
               IsWaitEnd: true
[   2590.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#8, concurrent=0)
[   2590.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#11, concurrent=0)
[   2590.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#14, concurrent=0)
[   2590.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#15, concurrent=0)
[   2590.0] L EventEffectEmitter - EventNodeEffectEmit (#16, concurrent=0)
