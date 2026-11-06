-------- Event timeline: Dm_LakeHrl_0020_Effect --------
actors: 7
clips: 12
oneshots: 0
cuts: 1
duration: 6231.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: EventEffectEmitter[0]
concurrent clips: 2
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

Actor: EventEffectEmitter[4]
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

Actor: EventEffectEmitter[1]
concurrent clips: 1
actions: ['EventEffectAddELinkHiddenSetting']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[2]
concurrent clips: 1
actions: ['EventEffectAddELinkHiddenSetting']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventEffectEmitter[5]
concurrent clips: 1
actions: ['EventEffectAddELinkHiddenSetting']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[    706.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#0, concurrent=0)
               duration: 195.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_LakeHrl_0020_Fountain_C03_00
               InstanceName: '1'
               IsWaitEnd: true
[    901.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#0, concurrent=0)
[    910.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#1, concurrent=0)
               duration: 52.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_LakeHrl_0020_Fountain_C03_01
               InstanceName: '1'
               IsWaitEnd: true
[    961.0] E EventEffectEmitter[3] - EventNodeEffectEmit (#6, concurrent=0)
               duration: 65.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_LakeHrl_0020_Fountain_C04_00
               InstanceName: '1'
               IsWaitEnd: true
[    962.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#1, concurrent=0)
[    962.0] E EventEffectEmitter[1] - EventEffectAddELinkHiddenSetting (#9, concurrent=0)
               duration: 5269.0
               ActorName: EftLoc_HrlField_ZoraArea_DryIce_00
               KeyName: Always
[    962.0] E EventEffectEmitter[2] - EventEffectAddELinkHiddenSetting (#10, concurrent=0)
               duration: 5269.0
               ActorName: EftLoc_Hyrule_ZoraIce_CameraEnvEffect_00
               KeyName: InArea
[   1024.0] E EventEffectEmitter[4] - EventNodeEffectEmit (#7, concurrent=0)
               duration: 311.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_LakeHrl_0020_Fountain_C05_00
               InstanceName: '1'
               IsWaitEnd: true
[   1026.0] L EventEffectEmitter[3] - EventNodeEffectEmit (#6, concurrent=0)
[   1100.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#2, concurrent=0)
               duration: 252.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_LakeHrl_0020_Fountain_C05_02
               InstanceName: '1'
               IsWaitEnd: true
[   1250.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#4, concurrent=1)
               duration: 39.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_LakeHrl_0020_Fountain_C05_01
               InstanceName: '1'
[   1289.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#4, concurrent=1)
[   1335.0] L EventEffectEmitter[4] - EventNodeEffectEmit (#7, concurrent=0)
[   1352.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#2, concurrent=0)
[   1452.0] E EventEffectEmitter[0] - EventNodeEffectEmit (#3, concurrent=0)
               duration: 397.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_LakeHrl_0020_Fountain_C06_00
               InstanceName: '1'
               IsWaitEnd: true
[   1693.0] E EventEffectEmitter - EventNodeEffectEmit (#8, concurrent=0)
               duration: 457.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_LakeHrl_0020_Fountain_C07_00
               InstanceName: '1'
               IsWaitEnd: true
[   1849.0] L EventEffectEmitter[0] - EventNodeEffectEmit (#3, concurrent=0)
[   2150.0] L EventEffectEmitter - EventNodeEffectEmit (#8, concurrent=0)
[   2150.0] E EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#5, concurrent=1)
               duration: 39.0
               ActorName: Dm_Locator
               ELinkKeyName: Dm_LakeHrl_0020_Fountain_C08_00
               InstanceName: '1'
[   2189.0] L EventEffectEmitter[0] - EventNodeEffectEmitOneShot (#5, concurrent=1)
[   2420.0] E EventEffectEmitter[5] - EventEffectAddELinkHiddenSetting (#11, concurrent=0)
               duration: 3811.0
               ActorName: Camera
               KeyName: FieldEnvEffect
[   6231.0] L EventEffectEmitter[1] - EventEffectAddELinkHiddenSetting (#9, concurrent=0)
[   6231.0] L EventEffectEmitter[2] - EventEffectAddELinkHiddenSetting (#10, concurrent=0)
[   6231.0] L EventEffectEmitter[5] - EventEffectAddELinkHiddenSetting (#11, concurrent=0)
