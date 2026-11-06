-------- Event timeline: Dm_FinalBattle_0005_Effect --------
actors: 3
clips: 7
oneshots: 0
cuts: 1
duration: 2945.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: EventEffectEmitter[2]
concurrent clips: 1
actions: ['EventNodeEffectEmit', 'EventNodeEffectEmitOneShot']
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
actions: ['EventNodeEffectEmitOneShot']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#0, concurrent=0)
               duration: 300.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_FinalBattle_0005_AroundSmoke_00
               InstanceName: '0'
[    300.0] L EventEffectEmitter[2] - EventNodeEffectEmitOneShot (#0, concurrent=0)
[    300.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#1, concurrent=0)
               duration: 880.0
               ActorName: Dm_Land_CrumblingGanonCastle_A_07
               ELinkKeyName: AroundSmoke_01
               InstanceName: '0'
               IsWaitEnd: true
[    724.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#2, concurrent=0)
               duration: 155.0
               ActorName: Dm_Land_CrumblingGanonCastle_A_07
               ELinkKeyName: Move
               InstanceName: '0'
               IsWaitEnd: true
[    724.0] E EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#5, concurrent=0)
               duration: 53.0
               ActorName: Dm_Land_CrumblingGanonCastle_A_07
               ELinkKeyName: RootSmoke
               InstanceName: '0'
[    777.0] L EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#5, concurrent=0)
[    879.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#2, concurrent=0)
[    934.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#3, concurrent=0)
               duration: 161.0
               ActorName: Dm_Land_CrumblingGanonCastle_A_07
               ELinkKeyName: Move
               InstanceName: '0'
               IsWaitEnd: true
[   1041.0] E EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#6, concurrent=0)
               duration: 70.0
               ActorName: Dm_Land_CrumblingGanonCastle_A_07
               ELinkKeyName: RootSmoke
               InstanceName: '0'
[   1095.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#3, concurrent=0)
[   1111.0] L EventEffectEmitter[1] - EventNodeEffectEmitOneShot (#6, concurrent=0)
[   1111.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#4, concurrent=0)
               duration: 316.0
               ActorName: Dm_Land_CrumblingGanonCastle_A_07
               ELinkKeyName: Land
               InstanceName: '0'
               IsWaitEnd: true
[   1180.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#1, concurrent=0)
[   1427.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#4, concurrent=0)
