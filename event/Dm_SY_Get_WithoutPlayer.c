-------- EventFlow: Dm_SY_Get_WithoutPlayer --------

Actor: PouchContentGuestPerformer
entrypoint: None()
actions: ['EventTriggerAddOwnToPouch', 'EventTriggerSetOwnNameToMessage', 'EventTriggerGetFirstExpansionMaxNumActor', 'EventGoOffstageForUser', 'EventPlayAS']
queries: ['EventQueryCheckTagOnPouchActor']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 2}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerRequestOpenPickUpWindow']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsAutoSavePouchContent']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerRequestAutoSave']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundStartFanfare']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Dm_SY_Get_WithoutPlayer() {
    SoundSystemActor.EventTriggerSoundStartFanfare({'GameDataName': '', 'IsEnableIntro': False, 'ActorName': 'ActorName'})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    PouchContentGuestPerformer.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Disappear_Common'})
    PouchContentGuestPerformer.EventTriggerSetOwnNameToMessage()

    call GetPouchContent.OpenGetWindow()

    switch PouchContentGuestPerformer.EventQueryCheckTagOnPouchActor() {
      case 0:

        call Get_StoneOfWater.StoneOfWater_GetRutoletter()

        Event3:
        PouchContentGuestPerformer.EventTriggerGetFirstExpansionMaxNumActor()
        PouchContentGuestPerformer.EventTriggerAddOwnToPouch()
        UISystemActor.EventTriggerRequestOpenPickUpWindow({'ActorName': 'ActorName'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        PouchContentGuestPerformer.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})

        call ActionGuide.ActionGuide({'ActorName': 'ActorName'})

        if !PouchSystemActor.EventQueryIsAutoSavePouchContent({'ActorName': 'ActorName'}) {
            GameSystemActor.EventTriggerRequestAutoSave()
        }
      case 1:

        call SubEvent_GetFireArrow.GetFireArrow()

        goto Event3
      case [2, 3]:
        goto Event3
      case 4:

        call Dm_SY_Get.CheckHeart({'ActorName': 'ActorName'})

        goto Event3
    }
}
