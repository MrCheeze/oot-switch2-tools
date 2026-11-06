-------- EventFlow: Dm_GerudoValley_0000 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventAS': '使用しない', 'ExceptionalBindType': 3, 'IsWorld': True, 'UseEventModelAnime': 'Work/Model/Event/Dm_GerudoValley_0000/Dm_GerudoValley_0000/workspace.pp__ModelProject.gyml'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerOpenLocationUI']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventPlayerWait', 'EventPlayerMoveToAnchor', 'EventTriggerPlayerEventStartWithDrawn', 'EventTriggerPlayerEventStartWithCarry', 'EventTriggerPlayerEventStartWithoutStopRidingTarget', 'EventTriggerPlayerEventStartWithRolling']
queries: ['EventQueryPlayerIsChild', 'EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor[2]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[L]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1, 'Position': [52.88999938964844, 97.72000122070312, 13.0600004196167], 'IsWorld': True}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DM:PlayerSE下げ(初回突入デモ)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerPlayerEventStartWithCarry()
    Player_Event.EventTriggerPlayerEventStartWithoutStopRidingTarget()
    Player_Event.EventTriggerPlayerEventStartWithRolling()

    fork {
        Npc_Navi.EventTriggerParticipateEvent()
    } {
        Dm_Locator[L].EventTriggerParticipateEvent()
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text1': 'C01', 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    }

    if !Player_Event.EventQueryPlayerIsChild() {
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
            UISystemActor.EventTriggerOpenLocationUI({'LocationName': 'Work/Location/GerudoValley.game__location__Location.gyml'})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 500})
        } {
            if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'EventCamera', 'ActorNameB': 'Dm_Locator', 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'CheckDistance': 7.0, 'InstanceNameB': 'L'}) {
                EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 0, 'SceneName': 'C01', 'InterpolateFrame': 120.0, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'CalcUpInInterpolate': False, 'IsWaitEnd': True})
            } else {
                EventCamera.EventMoveToTargetPosCamera({'IsPosVectorReferenceActorPosOnce': True, 'PosVector': [41.400001525878906, 101.95999908447266, -2.9100000858306885], 'AtVector': [35.27000045776367, 101.94000244140625, -2.9100000858306885], 'TargetFovy': 50.0, 'MoveTime': 300, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'StartAccelerateRate': 0.30000001192092896, 'IsEnableRevertFast': False})
            }
        } {
            Player_Event.EventPlayerMoveToAnchor({'MoveSpeed': 1.0, 'DecSpeedDistance': 3.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'ApplySlowMove': True, 'IsSheathed': True, 'IsKeepSpeed': True, 'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'Dm_GerudoValley_0000', 'IsMoveAnchorFrontDir': False, 'FinishASCommand': 'EvtWait', 'IsWaitEnd': False, 'IsInertiaMove': False, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0})
            EventSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 300})
            Player_Event.EventPlayerWarpToTargetPosAndRot({'YAngle': -100.0, 'Position': [47.849998474121094, 99.69000244140625, 3.299999952316284], 'IsWaitEnd': True, 'ASCommand': 'EvtWait', 'UseDemoWait': True, 'ClothWarpMode': 0, 'EnableInAir': False})
        } {
            PostProcessingActor.EventSetDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'EndBluarLevel': 0.0, 'IsPrimaryApply': False, 'EndDistance': 6.5, 'EndFNumber': 8.350000381469727, 'RequiredFrame': 270})
        }

        Event61:
        SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DM:PlayerSE下げ(初回突入デモ)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
    } else
    if !Player_Event.EventQueryCheckPlayerState({'State': 1}) {
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
            UISystemActor.EventTriggerOpenLocationUI({'LocationName': 'Work/Location/GerudoValley.game__location__Location.gyml'})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 500})
        } {
            if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'EventCamera', 'ActorNameB': 'Dm_Locator', 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'CheckDistance': 7.0, 'InstanceNameB': 'L'}) {
                EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 0, 'SceneName': 'C01', 'InterpolateFrame': 120.0, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'CalcUpInInterpolate': False, 'IsWaitEnd': True})
            } else {
                EventCamera.EventMoveToTargetPosCamera({'IsPosVectorReferenceActorPosOnce': True, 'PosVector': [41.400001525878906, 101.95999908447266, -2.9100000858306885], 'AtVector': [35.27000045776367, 101.94000244140625, -2.9100000858306885], 'TargetFovy': 50.0, 'MoveTime': 300, 'StartAccelerateRate': 0.30000001192092896, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            }
        } {
            Player_Event.EventPlayerMoveToAnchor({'MoveSpeed': 1.0, 'DecSpeedDistance': 3.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'ApplySlowMove': True, 'IsSheathed': True, 'IsKeepSpeed': True, 'AnchorActorName': 'DestinationAnchor', 'IsMoveAnchorFrontDir': False, 'FinishASCommand': 'EvtWait', 'AnchorInstanceName': 'Dm_GerudoValley_0000_Adult', 'IsWaitEnd': False, 'IsInertiaMove': False, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0})
            EventSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 300})
            Player_Event.EventPlayerWarpToTargetPosAndRot({'YAngle': -100.0, 'Position': [47.849998474121094, 99.69000244140625, 3.299999952316284], 'UseDemoWait': True, 'IsWaitEnd': True, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0, 'EnableInAir': False})
        } {
            PostProcessingActor.EventSetDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'EndDistance': 6.5, 'EndBluarLevel': 0.0, 'EndFNumber': 8.350000381469727, 'IsPrimaryApply': False, 'RequiredFrame': 270})
        }

        goto Event61
    } else {

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
            UISystemActor.EventTriggerOpenLocationUI({'LocationName': 'Work/Location/GerudoValley.game__location__Location.gyml'})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 500})
        } {
            if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'EventCamera', 'ActorNameB': 'Dm_Locator', 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameB': 'L', 'CheckDistance': 7.5}) {
                EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 0, 'SceneName': 'C01', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'CalcUpInInterpolate': False, 'IsWaitEnd': True, 'InterpolateFrame': 120.0})
            } else {
                EventCamera.EventMoveToTargetPosCamera({'IsPosVectorReferenceActorPosOnce': True, 'PosVector': [41.400001525878906, 101.95999908447266, -2.9100000858306885], 'AtVector': [35.27000045776367, 101.94000244140625, -2.9100000858306885], 'TargetFovy': 50.0, 'MoveTime': 300, 'StartAccelerateRate': 0.30000001192092896, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': True, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsEnableRevertFast': False})
            }
        } {
            Player_Event.EventPlayerMoveToAnchor({'IsKeepSpeed': True, 'AnchorActorName': 'DestinationAnchor', 'IsMoveAnchorFrontDir': False, 'FinishASCommand': 'EvtWait', 'IsWaitEnd': False, 'IsSheathed': True, 'AnchorInstanceName': 'Dm_GerudoValley_0000_Epona', 'RidableDesiredGear': 0, 'MoveSpeed': 0.0, 'RidableHasToDecelerateNearGoal': True, 'ApplySlowMove': False, 'DecSpeedDistance': 1.5, 'IsInertiaMove': False, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0})
            EventSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 300})
            Player_Event.EventPlayerWait({'IsWaitEnd': True})
            Player_Event.EventPlayerWarpToTargetPosAndRot({'YAngle': -100.0, 'Position': [47.849998474121094, 99.69000244140625, 3.299999952316284], 'UseDemoWait': True, 'IsWaitEnd': True, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0, 'EnableInAir': False})
        } {
            PostProcessingActor.EventSetDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'EndBluarLevel': 0.0, 'IsPrimaryApply': False, 'EndDistance': 0.0, 'EndFNumber': 0.0, 'RequiredFrame': 0})
        }


        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [52.130001068115234, 102.25, 4.059999942779541], 'AtVector': [47.77000045776367, 101.43000030517578, 3.2899999618530273], 'TargetFovy': 55.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {
            PostProcessingActor.EventSetDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'EndDistance': 6.5, 'EndFNumber': 8.0, 'EndBluarLevel': 0.75})
        }

        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': True, 'KeepManualModeFrame': 600.0, 'AfterKeepEndInterpolateCountScale': 3.0, 'IsKeepWithRelativePos': False})
        SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DM:PlayerSE下げ(初回突入デモ)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
    }
}
