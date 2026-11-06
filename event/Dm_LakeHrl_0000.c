-------- EventFlow: Dm_LakeHrl_0000 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerOpenLocationUI']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventPlayerMoveToAnchor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DM:PlayerSE下げ(初回突入デモ)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        UISystemActor.EventTriggerOpenLocationUI({'LocationName': 'Work/Location/LakeHylia.game__location__Location.gyml'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 500})
    } {
        Player_Event.EventPlayerMoveToAnchor({'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'AnchorActorName': 'DestinationAnchor', 'IsKeepSpeed': True, 'FinishASCommand': 'EvtWait', 'IsWaitEnd': False, 'IsMoveAnchorFrontDir': False, 'IsInertiaMove': True, 'ApplySlowMove': True, 'IsSheathed': True, 'AnchorInstanceName': 'Dm_Lake_Posi', 'MoveSpeed': 1.0, 'DecSpeedDistance': 400.0, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 250})
        Player_Event.EventPlayerWarpToTargetPosAndRot({'UseDemoWait': True, 'ASCommand': 'EvtWait', 'Position': [-100.26000213623047, 135.27000427246094, 411.6199951171875], 'IsWaitEnd': True, 'YAngle': -40.0, 'ClothWarpMode': 0, 'EnableInAir': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'PosVector': [-98.56999969482422, 145.0399932861328, 407.5799865722656], 'AtVector': [-100.54000091552734, 144.66000366210938, 409.8500061035156], 'TargetFovy': 51.0, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'DelayLater': 0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTimeLater': 0, 'EndRecelerateRate': 0.0, 'IsAtVectorReferenceActorPosOnce': True, 'MoveTime': 300, 'StartAccelerateRate': 0.10000000149011612, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
    PostProcessingActor.EventNorifyCutChangeForGraphics()
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DM:PlayerSE下げ(初回突入デモ)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
}
