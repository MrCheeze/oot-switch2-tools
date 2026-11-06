-------- Event timeline: Dm_StaffCredit_0010 --------
actors: 5
clips: 18
oneshots: 0
cuts: 3
duration: 2940.0
subtimelines: ['Dm_StaffCredit_0010_Env', 'Dm_StaffCredit_0010_Effect']
params: (none)

===== Cuts =====

Cut: cut01
start time: 0.0
x4: 0
params: (none)

Cut: cut02
start time: 560.0
x4: 0
params: (none)

Cut: cut03
start time: 1980.0
x4: 0
params: (none)


===== Actors =====

Actor: Tapestry_ChallengeMenu_ED
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- -44.0
- -28.0
- 16.0
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Tapestry_ChallengeMenu_ED_02[0]
concurrent clips: 1
actions: ['EventDoNothing', 'EventGoOffstageForUser']
params: EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
Position:
- 0.0
- 0.0
- 0.009999999776482582
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Dm_Locator[0]
concurrent clips: 1
actions: ['EventDoNothing']
params: EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: UISystemActor[0]
concurrent clips: 1
actions: ['EventEventFadeOutForTimeline', 'EventEventFadeInForTimeline', 'EventCloseStaffRollEnd']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventCamera[0]
concurrent clips: 2
actions: ['EventMoveCameraAnimationInstructions', 'EventSetNearCurrentCameraAnimation']
params: EventMemberCreateMethod: 0
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_StaffCredit_0010/Dm_StaffCredit_0010/workspace.pp__ModelProject.gyml


===== Timeline =====

[      0.0] E Tapestry_ChallengeMenu_ED_02[0] - EventDoNothing (#2, concurrent=0)
               duration: 560.0
               IsWaitEnd: true
[      0.0] E Dm_Locator[0] - EventDoNothing (#4, concurrent=0)
               duration: 2940.0
               IsWaitEnd: true
[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#5, concurrent=0)
               duration: 3.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#12, concurrent=0)
               duration: 500.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C01-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[      0.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#15, concurrent=1)
               duration: 500.0
               Near: 0.20000000298023224
[      3.0] L UISystemActor[0] - EventEventFadeInForTimeline (#5, concurrent=0)
[      3.0] E UISystemActor[0] - EventCloseStaffRollEnd (#6, concurrent=0)
               duration: 100.0
               IsWaitEnd: true
[    103.0] L UISystemActor[0] - EventCloseStaffRollEnd (#6, concurrent=0)
[    410.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#7, concurrent=0)
               duration: 90.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[    500.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#7, concurrent=0)
[    500.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#12, concurrent=0)
[    500.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#15, concurrent=1)
[    560.0] L Tapestry_ChallengeMenu_ED_02[0] - EventDoNothing (#2, concurrent=0)
[    560.0] E Tapestry_ChallengeMenu_ED - EventPlayASForTimeline (#0, concurrent=0)
               duration: 1420.0
               ASName: Def
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    560.0] E Tapestry_ChallengeMenu_ED_02[0] - EventGoOffstageForUser (#3, concurrent=0)
               duration: 2380.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[    560.0] E UISystemActor[0] - EventEventFadeInForTimeline (#8, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[    560.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#13, concurrent=0)
               duration: 1420.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C02-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[    560.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#16, concurrent=1)
               duration: 1420.0
               Near: 0.20000000298023224
[    620.0] L UISystemActor[0] - EventEventFadeInForTimeline (#8, concurrent=0)
[   1890.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#9, concurrent=0)
               duration: 90.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   1980.0] L Tapestry_ChallengeMenu_ED - EventPlayASForTimeline (#0, concurrent=0)
[   1980.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#9, concurrent=0)
[   1980.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#13, concurrent=0)
[   1980.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#16, concurrent=1)
[   1980.0] E Tapestry_ChallengeMenu_ED - EventPlayASForTimeline (#1, concurrent=0)
               duration: 960.0
               ASName: Low
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1980.0] E UISystemActor[0] - EventEventFadeInForTimeline (#10, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[   1980.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#14, concurrent=0)
               duration: 960.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C05-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   1980.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#17, concurrent=1)
               duration: 960.0
               Near: 0.20000000298023224
[   2040.0] L UISystemActor[0] - EventEventFadeInForTimeline (#10, concurrent=0)
[   2690.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#11, concurrent=0)
               duration: 250.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: true
               IsWaitEnd: true
[   2940.0] L Tapestry_ChallengeMenu_ED - EventPlayASForTimeline (#1, concurrent=0)
[   2940.0] L Tapestry_ChallengeMenu_ED_02[0] - EventGoOffstageForUser (#3, concurrent=0)
[   2940.0] L Dm_Locator[0] - EventDoNothing (#4, concurrent=0)
[   2940.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#11, concurrent=0)
[   2940.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#14, concurrent=0)
[   2940.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#17, concurrent=1)
