-------- EventFlow: Dm_SacredForest_0000 --------

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetPosAndRot', 'EventPlayerMoveToAnchor']
queries: ['EventQueryIsDirToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Moblin_Club[Default]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_SacredForest_0000/Dm_SacredForest_0000_Enemy_Moblin_Club/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_SacredForest_0000_Enemy_Moblin_Club.root.as'}

Actor: EventSystemActor[1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[Is_Camera_Pos]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 1, 'Position': [-6.939134120941162, 106.9468994140625, -24.02260971069336], 'IsWorld': True, 'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    Dm_Locator[Is_Camera_Pos].EventTriggerParticipateEvent()

    fork {
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'EventCamera', 'ActorNameB': 'Dm_Locator', 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'CheckDistance': 4.5, 'InstanceNameB': 'Is_Camera_Pos'}) {
            Event14:

            fork {
                PostProcessingActor.EventSetDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'EndDistance': 6.760000228881836, 'EndBluarLevel': 0.75, 'EndFNumber': 7.989999771118164})
            } {
                EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'TargetActorName': 'Enemy_Moblin_Club', 'TargetActorInstanceName': 'Default', 'RootType': 3, 'SceneName': 'C01', 'CameraName': '', 'IsIgnoreRootRot': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'CalcUpInInterpolate': False, 'IsReferenceRootOnce': False, 'InterpolateFrame': 22.0})
            } {
                DevelopEventSystemActor.EventDemoProductSupportComment({'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'Text1': 'C01', 'BgAlignW': 0, 'BgAlignH': 0, 'Text4': '', 'Text5': '', 'DispTime': 3, 'Text3': '', 'Text2': '', 'IsWaitEnd': False})
            }

            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 155})

            fork {

                call Common_Camera_Pln.CameraDoF_Default()

            } {
                EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'TargetActorName': 'Enemy_Moblin_Club', 'TargetActorInstanceName': 'Default', 'RootType': 3, 'CameraName': '', 'IsIgnoreRootRot': False, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'CalcUpInInterpolate': False, 'IsReferenceRootOnce': False, 'SceneName': 'C01-2', 'OverwriteStartFrame': 0.0, 'InterpolateFrame': 0.0})
            } {
                DevelopEventSystemActor.EventDemoProductSupportComment({'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'Text4': '', 'Text5': '', 'DispTime': 3, 'Text3': '', 'Text2': '', 'Text1': 'C02', 'IsWaitEnd': False})
            }

        } else
        if !Player_Event.EventQueryIsDirToTarget({'ActorName': 'Enemy_Moblin_Club', 'InstanceName': 'Default', 'WorldPos': [0.0, 0.0, 0.0], 'Target': 3, 'AngleThreshold': 45.0}) {
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVector': [0.0, 2.140000104904175, -4.480000019073486], 'AtVector': [0.0, 1.75, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'PosVector': [-6.840000152587891, 107.02999877929688, -23.959999084472656], 'TargetFovy': 50.0, 'Actor1ActorName': 'Enemy_Moblin_Club', 'Actor1InstanceName': 'Default', 'AtVectorSetType': 3, 'AtVector': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        }
        goto Event14
    } {
        Enemy_Moblin_Club[Default].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C01-1'})
    } {
        Player_Event.EventPlayerMoveToAnchor({'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'MoveSpeed': 1.0, 'DecSpeedDistance': 1.0, 'ApplySlowMove': False, 'IsKeepSpeed': True, 'AnchorActorName': 'DestinationAnchor', 'IsWaitEnd': False, 'IsMoveAnchorFrontDir': False, 'FinishASCommand': 'EvtWait', 'AnchorInstanceName': 'Demo_Dm_SacredForest_Moving_Position', 'IsInertiaMove': True, 'IsSheathed': False, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0})
        EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 90})
        Player_Event.EventPlayerWarpToTargetPosAndRot({'Position': [-6.900000095367432, 104.9000015258789, -30.0], 'UseDemoWait': True, 'YAngle': 180.0, 'ASCommand': 'EvtWait', 'IsWaitEnd': True, 'ClothWarpMode': 0, 'EnableInAir': False})
        EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 5})

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'EvtCaution', 'ClothWarpMode': 0})
        } {
            Npc_Navi.EventPlayAS({'ASName': 'EvtCaution', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        }

    }

    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
}
