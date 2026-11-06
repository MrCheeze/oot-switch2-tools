-------- Event timeline: Dm_InsideJabu_Jabu_BossOut_Effect --------
actors: 9
clips: 11
oneshots: 0
cuts: 1
duration: 3333.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: EventEffectEmitter[7]
concurrent clips: 1
actions: ['EventNodeEffectEmitOneShot']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[6]
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

Actor: EventEffectEmitter
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

Actor: EventEffectEmitter[1]
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
actions: ['EventNodeEffectEmitOneShot']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[4]
concurrent clips: 1
actions: ['EventNodeEffectEmitOneShot']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[5]
concurrent clips: 1
actions: ['EventNodeEffectEmitOneShot', 'EventNodeEffectEmit']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E EventEffectEmitter[6] - EventNodeEffectEmitOneShot (#1, concurrent=0)
               duration: 300.0
               ActorName: Enemy_DungeonBoss_Barinade
               ELinkKeyName: Dm_InsideJabu_Jabu_BossOut_Elec_00
               InstanceName: ''
[    300.0] L EventEffectEmitter[6] - EventNodeEffectEmitOneShot (#1, concurrent=0)
[    463.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#6, concurrent=0)
               duration: 737.0
               ActorName: Enemy_DungeonBoss_Barinade
               ELinkKeyName: Dm_InsideJabu_Jabu_BossOut_Body_00
               InstanceName: ''
               IsWaitEnd: true
[    470.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#3, concurrent=0)
               duration: 589.0
               ActorName: Enemy_DungeonBoss_Barinade
               ELinkKeyName: Dm_InsideJabu_Jabu_BossOut_ArmR_00
               InstanceName: ''
               IsWaitEnd: true
[    580.0] E EventEffectEmitter - EventNodeEffectEmit (#4, concurrent=0)
               duration: 479.0
               ActorName: Enemy_DungeonBoss_Barinade
               ELinkKeyName: Dm_InsideJabu_Jabu_BossOut_ArmL_00
               InstanceName: ''
               IsWaitEnd: true
[    700.0] E EventEffectEmitter[6] - EventNodeEffectEmit (#2, concurrent=0)
               duration: 500.0
               ActorName: Enemy_DungeonBoss_Barinade
               ELinkKeyName: Dm_InsideJabu_Jabu_BossOut_ExpRay_00
               InstanceName: ''
               IsWaitEnd: true
[    700.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#5, concurrent=0)
               duration: 359.0
               ActorName: Enemy_DungeonBoss_Barinade
               ELinkKeyName: Dm_InsideJabu_Jabu_BossOut_ArmC_00
               InstanceName: ''
               IsWaitEnd: true
[    840.0] E EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#7, concurrent=0)
               duration: 100.0
               ActorName: Enemy_DungeonBoss_Barinade
               ELinkKeyName: Dm_InsideJabu_Jabu_BossOut_Arm_Exp_00
               InstanceName: ''
[    940.0] L EventEffectEmitter[3] - EventNodeEffectEmitOneShot (#7, concurrent=0)
[   1059.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#3, concurrent=0)
[   1059.0] L EventEffectEmitter - EventNodeEffectEmit (#4, concurrent=0)
[   1059.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#5, concurrent=0)
[   1200.0] L EventEffectEmitter[6] - EventNodeEffectEmit (#2, concurrent=0)
[   1200.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#6, concurrent=0)
[   1200.0] E EventEffectEmitter[4] - EventNodeEffectEmitOneShot (#8, concurrent=0)
               duration: 100.0
               ActorName: Enemy_DungeonBoss_Barinade
               ELinkKeyName: Dm_InsideJabu_Jabu_BossOut_Body_Exp_00
               InstanceName: ''
[   1300.0] L EventEffectEmitter[4] - EventNodeEffectEmitOneShot (#8, concurrent=0)
[   1547.0] E EventEffectEmitter[7] - EventNodeEffectEmitOneShot (#0, concurrent=0)
               duration: 100.0
               ActorName: Npc_Zora_Ruto_Child_001
               ELinkKeyName: Dm_InsideJabu_Jabu_BossOut_Splash_00_C7
               InstanceName: ''
[   1647.0] L EventEffectEmitter[7] - EventNodeEffectEmitOneShot (#0, concurrent=0)
[   2732.0] E EventEffectEmitter[5] - EventNodeEffectEmitOneShot (#9, concurrent=0)
               duration: 96.0
               ActorName: Dm_Locator
               ELinkKeyName: HeartCountainer_Appear
               InstanceName: '0'
[   2828.0] L EventEffectEmitter[5] - EventNodeEffectEmitOneShot (#9, concurrent=0)
[   2828.0] E EventEffectEmitter[5] - EventNodeEffectEmit (#10, concurrent=0)
               duration: 889.0
               ActorName: Dm_Locator
               ELinkKeyName: HeartCountainer_Wait
               InstanceName: '0'
               IsWaitEnd: true
[   3717.0] L EventEffectEmitter[5] - EventNodeEffectEmit (#10, concurrent=0)
