-------- Event timeline: Dm_DesertColossus_0030_Effect --------
actors: 6
clips: 33
oneshots: 0
cuts: 2
duration: 5840.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)

Cut: cut01
start time: 2480.0
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

Actor: EventEffectEmitter
concurrent clips: 1
actions: ['EventNodeEffectEmit', 'EventNodeEffectEmitOneShot']
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


===== Timeline =====

[   1560.0] E EventEffectEmitter[4] - EventNodeEffectEmit (#0, concurrent=0)
               duration: 270.0
               ActorName: Npc_Gerudo_Nabooru_Child
               ELinkKeyName: Dm_DesertColossus_0030_C04_MagicCircle_00
               InstanceName: '0'
               IsWaitEnd: true
[   1560.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#7, concurrent=0)
               duration: 710.0
               ActorName: Dm_Npc_Kotake
               ELinkKeyName: Dm_DesertColossus_0030_HandGlow
               InstanceName: '0'
               IsWaitEnd: true
[   1560.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#11, concurrent=0)
               duration: 710.0
               ActorName: Dm_Npc_Koume
               ELinkKeyName: Dm_DesertColossus_0030_HandGlow
               InstanceName: '0'
               IsWaitEnd: true
[   1730.0] E EventEffectEmitter - EventNodeEffectEmitOneShot (#24, concurrent=0)
               duration: 210.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_DesertColossus_0030_GroundGate_Miasma_ST_00
               InstanceName: '0'
[   1830.0] L EventEffectEmitter[4] - EventNodeEffectEmit (#0, concurrent=0)
[   1830.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#15, concurrent=0)
               duration: 180.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_DesertColossus_0030_GroundGate_Start_00
               InstanceName: '0'
               IsWaitEnd: true
[   1830.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#32, concurrent=0)
               duration: 2776.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_DesertColossus_0030_GroundGate_Miasma_Light_00
               InstanceName: '0'
               IsWaitEnd: true
[   1839.0] E EventEffectEmitter[4] - EventNodeEffectEmit (#1, concurrent=0)
               duration: 189.0
               ActorName: Npc_Gerudo_Nabooru_Child
               ELinkKeyName: Dm_DesertColossus_0030_C05_BodyMiasma_00
               InstanceName: '0'
               IsWaitEnd: true
[   1940.0] L EventEffectEmitter - EventNodeEffectEmitOneShot (#24, concurrent=0)
[   1940.0] E EventEffectEmitter - EventNodeEffectEmit (#25, concurrent=0)
               duration: 330.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_DesertColossus_0030_GroundGate_Miasma_00
               InstanceName: '0'
               IsWaitEnd: true
[   2010.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#15, concurrent=0)
[   2010.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#16, concurrent=0)
               duration: 470.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_DesertColossus_0030_GroundGate_Start_01
               InstanceName: '0'
               IsWaitEnd: true
[   2028.0] L EventEffectEmitter[4] - EventNodeEffectEmit (#1, concurrent=0)
[   2028.0] E EventEffectEmitter[4] - EventNodeEffectEmit (#2, concurrent=0)
               duration: 242.0
               ActorName: Npc_Gerudo_Nabooru_Child
               ELinkKeyName: Dm_DesertColossus_0030_C06_BodyMiasma_00
               InstanceName: '0'
               IsWaitEnd: true
[   2270.0] L EventEffectEmitter[4] - EventNodeEffectEmit (#2, concurrent=0)
[   2270.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#7, concurrent=0)
[   2270.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#11, concurrent=0)
[   2270.0] L EventEffectEmitter - EventNodeEffectEmit (#25, concurrent=0)
[   2379.0] E EventEffectEmitter - EventNodeEffectEmit (#26, concurrent=0)
               duration: 981.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_DesertColossus_0030_GroundGate_Miasma_00
               InstanceName: '0'
               IsWaitEnd: true
[   2480.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#16, concurrent=0)
[   2480.0] E EventEffectEmitter[4] - EventNodeEffectEmit (#3, concurrent=0)
               duration: 240.0
               ActorName: Npc_Gerudo_Nabooru_Child
               ELinkKeyName: Dm_DesertColossus_0030_C08_BodyMiasma_00
               InstanceName: '0'
               IsWaitEnd: true
[   2480.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#8, concurrent=0)
               duration: 880.0
               ActorName: Dm_Npc_Kotake
               ELinkKeyName: Dm_DesertColossus_0030_HandGlow
               InstanceName: '0'
               IsWaitEnd: true
[   2480.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#17, concurrent=0)
               duration: 240.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_DesertColossus_0030_GroundGate_00
               InstanceName: '0'
               IsWaitEnd: true
[   2492.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#12, concurrent=0)
               duration: 568.0
               ActorName: Dm_Npc_Koume
               ELinkKeyName: Dm_DesertColossus_0030_HandGlow
               InstanceName: '0'
               IsWaitEnd: true
[   2720.0] L EventEffectEmitter[4] - EventNodeEffectEmit (#3, concurrent=0)
[   2720.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#17, concurrent=0)
[   2720.0] E EventEffectEmitter[4] - EventNodeEffectEmit (#4, concurrent=0)
               duration: 640.0
               ActorName: Npc_Gerudo_Nabooru_Child
               ELinkKeyName: Dm_DesertColossus_0030_C09_BodyMiasma_00
               InstanceName: '0'
               IsWaitEnd: true
[   2720.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#18, concurrent=0)
               duration: 640.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_DesertColossus_0030_GroundGate_C09_00
               InstanceName: '0'
               IsWaitEnd: true
[   3060.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#12, concurrent=0)
[   3271.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#13, concurrent=0)
               duration: 479.0
               ActorName: Dm_Npc_Koume
               ELinkKeyName: Dm_DesertColossus_0030_HandGlow
               InstanceName: '0'
               IsWaitEnd: true
[   3360.0] L EventEffectEmitter[4] - EventNodeEffectEmit (#4, concurrent=0)
[   3360.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#8, concurrent=0)
[   3360.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#18, concurrent=0)
[   3360.0] L EventEffectEmitter - EventNodeEffectEmit (#26, concurrent=0)
[   3407.0] E EventEffectEmitter - EventNodeEffectEmitOneShot (#27, concurrent=0)
               duration: 284.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_DesertColossus_0030_GroundGate_Miasma_01
               InstanceName: '0'
[   3520.0] E EventEffectEmitter[4] - EventNodeEffectEmit (#5, concurrent=0)
               duration: 310.0
               ActorName: Npc_Gerudo_Nabooru_Child
               ELinkKeyName: Dm_DesertColossus_0030_C12_BodyMiasma_00
               InstanceName: '0'
               IsWaitEnd: true
[   3520.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#9, concurrent=0)
               duration: 230.0
               ActorName: Dm_Npc_Kotake
               ELinkKeyName: Dm_DesertColossus_0030_HandGlow
               InstanceName: '0'
               IsWaitEnd: true
[   3520.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#19, concurrent=0)
               duration: 230.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_DesertColossus_0030_GroundGate_01
               InstanceName: '0'
               IsWaitEnd: true
[   3691.0] L EventEffectEmitter - EventNodeEffectEmitOneShot (#27, concurrent=0)
[   3691.0] E EventEffectEmitter - EventNodeEffectEmit (#28, concurrent=0)
               duration: 59.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_DesertColossus_0030_GroundGate_Miasma_03
               InstanceName: '0'
               IsWaitEnd: true
[   3750.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#9, concurrent=0)
[   3750.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#13, concurrent=0)
[   3750.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#19, concurrent=0)
[   3750.0] L EventEffectEmitter - EventNodeEffectEmit (#28, concurrent=0)
[   3750.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#20, concurrent=0)
               duration: 80.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_DesertColossus_0030_GroundGate_01
               InstanceName: '0'
               IsWaitEnd: true
[   3830.0] L EventEffectEmitter[4] - EventNodeEffectEmit (#5, concurrent=0)
[   3830.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#20, concurrent=0)
[   3868.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#21, concurrent=0)
               duration: 212.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_DesertColossus_0030_GroundGate_C15_00
               InstanceName: '0'
               IsWaitEnd: true
[   3868.0] E EventEffectEmitter - EventNodeEffectEmitOneShot (#29, concurrent=0)
               duration: 72.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_DesertColossus_0030_GroundGate_Miasma_04
               InstanceName: '0'
[   3940.0] L EventEffectEmitter - EventNodeEffectEmitOneShot (#29, concurrent=0)
[   3940.0] E EventEffectEmitter[4] - EventNodeEffectEmit (#6, concurrent=0)
               duration: 650.0
               ActorName: Npc_Gerudo_Nabooru_Child
               ELinkKeyName: Dm_DesertColossus_0030_C15_BodyMiasma_00
               InstanceName: '0'
               IsWaitEnd: true
[   3940.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#10, concurrent=0)
               duration: 296.0
               ActorName: Dm_Npc_Kotake
               ELinkKeyName: Dm_DesertColossus_0030_HandGlow
               InstanceName: '0'
               IsWaitEnd: true
[   3940.0] E EventEffectEmitter[1] - EventNodeEffectEmit (#14, concurrent=0)
               duration: 296.0
               ActorName: Dm_Npc_Koume
               ELinkKeyName: Dm_DesertColossus_0030_HandGlow
               InstanceName: '0'
               IsWaitEnd: true
[   4032.0] E EventEffectEmitter - EventNodeEffectEmit (#30, concurrent=0)
               duration: 462.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_DesertColossus_0030_GroundGate_Miasma_03
               InstanceName: '0'
               IsWaitEnd: true
[   4080.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#21, concurrent=0)
[   4080.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#22, concurrent=0)
               duration: 510.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_DesertColossus_0030_GroundGate_Near
               InstanceName: '0'
               IsWaitEnd: true
[   4236.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#10, concurrent=0)
[   4236.0] L EventEffectEmitter[1] - EventNodeEffectEmit (#14, concurrent=0)
[   4494.0] L EventEffectEmitter - EventNodeEffectEmit (#30, concurrent=0)
[   4494.0] E EventEffectEmitter - EventNodeEffectEmit (#31, concurrent=0)
               duration: 112.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_DesertColossus_0030_GroundGate_Miasma_05
               InstanceName: '0'
               IsWaitEnd: true
[   4590.0] L EventEffectEmitter[4] - EventNodeEffectEmit (#6, concurrent=0)
[   4590.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#22, concurrent=0)
[   4590.0] E EventEffectEmitter[2] - EventNodeEffectEmit (#23, concurrent=0)
               duration: 182.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_DesertColossus_0030_GroundGate_Last
               InstanceName: '0'
               IsWaitEnd: true
[   4606.0] L EventEffectEmitter - EventNodeEffectEmit (#31, concurrent=0)
[   4606.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#32, concurrent=0)
[   4772.0] L EventEffectEmitter[2] - EventNodeEffectEmit (#23, concurrent=0)
