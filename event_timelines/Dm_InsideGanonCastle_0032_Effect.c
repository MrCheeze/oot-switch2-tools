-------- Event timeline: Dm_InsideGanonCastle_0032_Effect --------
actors: 6
clips: 14
oneshots: 0
cuts: 1
duration: 1758.0
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

Actor: EventEffectEmitter[0]
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

Actor: EventEffectEmitter[5]
concurrent clips: 1
actions: ['EventEffectAddELinkHiddenSetting', 'EventEffectDeleteELinkHiddenSetting']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventEffectEmitter[4] - EventNodeEffectEmit (#0, concurrent=0)
               duration: 1032.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_InsideGanonCastle_0032_All
               InstanceName: '0'
               IsWaitEnd: true
[      1.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#4, concurrent=0)
               duration: 921.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_InsideGanonCastle_0032_C03
               InstanceName: '0'
               IsWaitEnd: true
[      1.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#6, concurrent=0)
               duration: 239.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_InsideGanonCastle_0032_C03_Ruto
               InstanceName: '0'
               IsWaitEnd: true
[      1.0] E EventEffectEmitter[5] - EventEffectAddELinkHiddenSetting (#12, concurrent=0)
               duration: 1320.0
               ActorName: Obj_GanonCastle_Barrier_A_01
               KeyName: 塔の結界
[    240.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#6, concurrent=0)
[    240.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#7, concurrent=0)
               duration: 430.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_InsideGanonCastle_0032_C04
               InstanceName: '0'
               IsWaitEnd: true
[    670.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#7, concurrent=0)
[    715.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#8, concurrent=0)
               duration: 252.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_InsideGanonCastle_0032_C05
               InstanceName: '0'
               IsWaitEnd: true
[    910.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#10, concurrent=0)
               duration: 169.0
               ActorName: Player_Event
               ELinkKeyName: Dm_InsideGanonCastle_Warp_In
               InstanceName: '0'
               IsWaitEnd: true
[    922.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#4, concurrent=0)
[    967.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#8, concurrent=0)
[   1032.0] L EventEffectEmitter[4] - EventNodeEffectEmit (#0, concurrent=0)
[   1079.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#10, concurrent=0)
[   1092.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#9, concurrent=0)
               duration: 140.0
               ActorName: CameraXLinkControl
               ELinkKeyName: Dm_InsideGanonCastle_C08
               InstanceName: ''
               IsWaitEnd: false
[   1175.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#5, concurrent=0)
               duration: 146.0
               ActorName: Obj_InsideGanonCastle_SageSymbol_A_04
               ELinkKeyName: シンボル邪気デモ用
               InstanceName: MainRoom
               IsWaitEnd: true
[   1221.0] E EventEffectEmitter[4] - EventNodeEffectEmit (#1, concurrent=0)
               duration: 100.0
               ActorName: Obj_InsideGanonCastle_SageSymbol_A_04
               ELinkKeyName: Dm_InsideGanonCastle_SymbolPurification_Water
               InstanceName: MainRoom
               IsWaitEnd: true
[   1232.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#9, concurrent=0)
[   1321.0] L EventEffectEmitter[4] - EventNodeEffectEmit (#1, concurrent=0)
[   1321.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#5, concurrent=0)
[   1321.0] L EventEffectEmitter[5] - EventEffectAddELinkHiddenSetting (#12, concurrent=0)
[   1321.0] E EventEffectEmitter[4] - EventNodeEffectEmit (#2, concurrent=0)
               duration: 100.0
               ActorName: Obj_InsideGanonCastle_SageSymbol_A_04
               ELinkKeyName: Dm_InsideGanonCastle_0032_C10
               InstanceName: MainRoom
               IsWaitEnd: true
[   1321.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#11, concurrent=0)
               duration: 100.0
               ActorName: Player_Event
               ELinkKeyName: Dm_InsideGanonCastle_Warp_Out
               InstanceName: '0'
               IsWaitEnd: true
[   1321.0] E EventEffectEmitter[5] - EventEffectDeleteELinkHiddenSetting (#13, concurrent=0)
               duration: 1320.0
               ActorName: Obj_GanonCastle_Barrier_A_01
               KeyName: 塔の結界
[   1421.0] L EventEffectEmitter[4] - EventNodeEffectEmit (#2, concurrent=0)
[   1421.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#11, concurrent=0)
[   1421.0] E EventEffectEmitter[4] - EventNodeEffectEmit (#3, concurrent=0)
               duration: 65.0
               ActorName: Obj_InsideGanonCastle_SageSymbol_A_04
               ELinkKeyName: Dm_InsideGanonCastle_0032_C10_End
               InstanceName: MainRoom
               IsWaitEnd: true
[   1486.0] L EventEffectEmitter[4] - EventNodeEffectEmit (#3, concurrent=0)
[   2641.0] L EventEffectEmitter[5] - EventEffectDeleteELinkHiddenSetting (#13, concurrent=0)
