-------- EventFlow: Dm_LonLon_0010 --------

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerOpenLocationUI']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetActor', 'EventPlayerMoveToAnchor']
queries: ['EventQueryPlayerIsChild']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Dm_Locator[0]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviRequestBallonMessage', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor[ESA1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[ESA2]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[UI]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DM:PlayerSE下げ(初回突入デモ)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    if !Player_Event.EventQueryPlayerIsChild() {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EndRecelerateRate': 0.0, 'PosVector': [-66.97000122070312, 160.02000427246094, 203.58999633789062], 'AtVector': [-68.18000030517578, 159.83999633789062, 206.57000732421875], 'TargetFovy': 45.959999084472656, 'MoveTime': 380, 'StartAccelerateRate': 0.25, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {
            Player_Event.EventPlayerMoveToAnchor({'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsInertiaMove': True, 'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'DmLonLon0010Destination', 'IsKeepSpeed': True, 'IsMoveAnchorFrontDir': False, 'FinishASCommand': 'EvtWait', 'IsWaitEnd': False, 'ApplySlowMove': True, 'IsSheathed': True, 'MoveSpeed': 1.0, 'DecSpeedDistance': 30.0, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0})
            EventSystemActor[ESA1].EventWait({'IsWaitEnd': True, 'Frames': 300})
            Player_Event.EventPlayerWarpToTargetActor({'UseDemoWait': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': '0', 'OffsetBase': 1, 'IsWaitEnd': True, 'YAngle': -10.0, 'ASCommand': 'EvtWait', 'PositionOffset': [0.0, 0.0, 0.0]})
        } {
            EventSystemActor[ESA2].EventWait({'IsWaitEnd': True, 'Frames': 210})
            UISystemActor.EventTriggerOpenLocationUI({'LocationName': 'Work/Location/LonLonRanch.game__location__Location.gyml'})
            EventSystemActor[UI].EventWait({'IsWaitEnd': True, 'Frames': 500})
        } {
            Dm_Locator[0].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-62.91999816894531, 150.47000122070312, 188.1199951171875], 'ClothWarpMode': -1})
            PostProcessingActor.EventSetDoFForFlowchart({'IsAutoFocalDist': False, 'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 300, 'EndDistance': 80.0, 'EndFNumber': 6.599999904632568, 'EndBluarLevel': 0.75})
        } {
            Npc_Navi.EventTriggerParticipateEvent()
        }

        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
        Npc_Navi.EventNaviRequestBallonMessage({'Index': 377})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'LonLonRanch_IsVisited_Child', 'Index': -1, 'Value': True})
        SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DM:PlayerSE下げ(初回突入デモ)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
    } else {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EndRecelerateRate': 0.0, 'PosVector': [-66.97000122070312, 160.02000427246094, 203.58999633789062], 'AtVector': [-68.18000030517578, 159.83999633789062, 206.57000732421875], 'TargetFovy': 45.959999084472656, 'MoveTime': 380, 'StartAccelerateRate': 0.30000001192092896, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {
            EventSystemActor[ESA2].EventWait({'IsWaitEnd': True, 'Frames': 210})
            UISystemActor.EventTriggerOpenLocationUI({'LocationName': 'Work/Location/LonLonRanch.game__location__Location.gyml'})
            EventSystemActor[UI].EventWait({'IsWaitEnd': True, 'Frames': 500})
        } {
            Player_Event.EventPlayerMoveToAnchor({'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'DmLonLon0010Destination', 'IsKeepSpeed': True, 'FinishASCommand': 'EvtWait', 'IsWaitEnd': False, 'IsMoveAnchorFrontDir': False, 'IsInertiaMove': True, 'ApplySlowMove': True, 'MoveSpeed': 0.10000000149011612, 'IsSheathed': True, 'DecSpeedDistance': 25.0, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0})
            EventSystemActor[ESA1].EventWait({'IsWaitEnd': True, 'Frames': 300})
            Player_Event.EventPlayerWarpToTargetActor({'UseDemoWait': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': '0', 'OffsetBase': 1, 'IsWaitEnd': True, 'ASCommand': 'EvtWait', 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': -10.0})
        } {
            Dm_Locator[0].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-62.91999816894531, 150.47000122070312, 188.1199951171875], 'ClothWarpMode': -1})
            PostProcessingActor.EventSetDoFForFlowchart({'IsAutoFocalDist': False, 'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 300, 'EndDistance': 80.0, 'EndFNumber': 6.599999904632568, 'EndBluarLevel': 0.75})
        } {
            Npc_Navi.EventTriggerParticipateEvent()
        }

        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
        Npc_Navi.EventNaviRequestBallonMessage({'Index': 377})
        SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DM:PlayerSE下げ(初回突入デモ)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
    }
}
