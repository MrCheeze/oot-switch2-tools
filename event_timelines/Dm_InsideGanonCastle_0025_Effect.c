-------- Event timeline: Dm_InsideGanonCastle_0025_Effect --------
actors: 6
clips: 16
oneshots: 0
cuts: 1
duration: 1598.0
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
               duration: 872.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_InsideGanonCastle_0025_All
               InstanceName: '0'
               IsWaitEnd: true
[      1.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#4, concurrent=0)
               duration: 758.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_InsideGanonCastle_0025_C03
               InstanceName: '0'
               IsWaitEnd: true
[      1.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#6, concurrent=0)
               duration: 239.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_InsideGanonCastle_0025_C03_Saria
               InstanceName: '0'
               IsWaitEnd: true
[      1.0] E EventEffectEmitter[2] - EventEffectAddELinkHiddenSetting (#9, concurrent=0)
               duration: 239.0
               ActorName: Obj_InsideGanonCastle_SageSymbol_A_01
               KeyName: 解除前の邪気
[      1.0] E EventEffectEmitter[5] - EventEffectAddELinkHiddenSetting (#14, concurrent=0)
               duration: 1160.0
               ActorName: Obj_GanonCastle_Barrier_A_01
               KeyName: 塔の結界
[    240.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#6, concurrent=0)
[    240.0] L EventEffectEmitter[2] - EventEffectAddELinkHiddenSetting (#9, concurrent=0)
[    240.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#7, concurrent=0)
               duration: 270.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_InsideGanonCastle_0025_C04
               InstanceName: '0'
               IsWaitEnd: true
[    510.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#7, concurrent=0)
[    555.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#8, concurrent=0)
               duration: 317.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_InsideGanonCastle_0025_C05
               InstanceName: '0'
               IsWaitEnd: true
[    750.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#12, concurrent=0)
               duration: 169.0
               ActorName: Player_Event
               ELinkKeyName: Dm_InsideGanonCastle_Warp_In
               InstanceName: '0'
               IsWaitEnd: true
[    759.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#4, concurrent=0)
[    872.0] L EventEffectEmitter[4] - EventNodeEffectEmit (#0, concurrent=0)
[    872.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#8, concurrent=0)
[    919.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#12, concurrent=0)
[    932.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#10, concurrent=0)
               duration: 143.0
               ActorName: CameraXLinkControl
               ELinkKeyName: Dm_InsideGanonCastle_C08
               InstanceName: ''
               IsWaitEnd: true
[   1015.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#5, concurrent=0)
               duration: 146.0
               ActorName: Obj_InsideGanonCastle_SageSymbol_A_02
               ELinkKeyName: シンボル邪気デモ用
               InstanceName: MainRoom
               IsWaitEnd: true
[   1061.0] E EventEffectEmitter[4] - EventNodeEffectEmit (#1, concurrent=0)
               duration: 100.0
               ActorName: Obj_InsideGanonCastle_SageSymbol_A_02
               ELinkKeyName: Dm_InsideGanonCastle_SymbolPurification_Forest
               InstanceName: MainRoom
               IsWaitEnd: true
[   1075.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#10, concurrent=0)
[   1161.0] L EventEffectEmitter[4] - EventNodeEffectEmit (#1, concurrent=0)
[   1161.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#5, concurrent=0)
[   1161.0] L EventEffectEmitter[5] - EventEffectAddELinkHiddenSetting (#14, concurrent=0)
[   1161.0] E EventEffectEmitter[4] - EventNodeEffectEmit (#2, concurrent=0)
               duration: 100.0
               ActorName: Obj_InsideGanonCastle_SageSymbol_A_02
               ELinkKeyName: Dm_InsideGanonCastle_0025_C10
               InstanceName: MainRoom
               IsWaitEnd: true
[   1161.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#11, concurrent=0)
               duration: 37.0
               ActorName: CameraXLinkControl
               ELinkKeyName: Dm_InsideGanonCastle_C10
               InstanceName: ''
               IsWaitEnd: true
[   1161.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#13, concurrent=0)
               duration: 100.0
               ActorName: Player_Event
               ELinkKeyName: Dm_InsideGanonCastle_Warp_Out
               InstanceName: '0'
               IsWaitEnd: true
[   1161.0] E EventEffectEmitter[5] - EventEffectDeleteELinkHiddenSetting (#15, concurrent=0)
               duration: 1160.0
               ActorName: Obj_GanonCastle_Barrier_A_01
               KeyName: 塔の結界
[   1198.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#11, concurrent=0)
[   1261.0] L EventEffectEmitter[4] - EventNodeEffectEmit (#2, concurrent=0)
[   1261.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#13, concurrent=0)
[   1261.0] E EventEffectEmitter[4] - EventNodeEffectEmit (#3, concurrent=0)
               duration: 65.0
               ActorName: Obj_InsideGanonCastle_SageSymbol_A_02
               ELinkKeyName: Dm_InsideGanonCastle_0025_C10_End
               InstanceName: MainRoom
               IsWaitEnd: true
[   1326.0] L EventEffectEmitter[4] - EventNodeEffectEmit (#3, concurrent=0)
[   2321.0] L EventEffectEmitter[5] - EventEffectDeleteELinkHiddenSetting (#15, concurrent=0)
