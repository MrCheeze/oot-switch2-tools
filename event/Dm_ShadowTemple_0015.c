-------- EventFlow: Dm_ShadowTemple_0015 --------

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventBasedOnLookAtCamera', 'EventTriggerRequestCameraShake', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: ['EventQueryCameraCheckRayCastForMoveToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventPlayerTurnAndLook', 'EventPlayerPlayASForFlowchart', 'EventGoOffstageForUser', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventTriggerPlayerEventStartWithDrawn', 'EventPlayerUnequip', 'EventPlayerPutAway', 'EventTriggerPlayerEventStartWithClimb', 'EventPlayerOnStopMode', 'EventPlayerOffStopMode']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviMoveAroundToPlayer', 'EventNaviRequestBallonMessage', 'EventTriggerSetModelAlpha', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: ['EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_ShadowTemple_FallDownPillar_A_01[FallDownPillar_Before]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Controller_Rumble_Wait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera[1]
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameSystemActor[3]
entrypoint: None()
actions: ['EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[0]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[Pillar_offset]
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: GameSystemActor[Pillar_Switch_Wait]
entrypoint: None()
actions: ['EventTraverseAroundAndWaitCreateActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventNodeEffectEmit']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    Player_Event.EventTriggerPlayerEventStartWithClimb()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Dm_Locator[Pillar_offset].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Obj_ShadowTemple_FallDownPillar_A_01', 'InstanceName': 'FallDownPillar_Before', 'OffsetBase': 1, 'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1, 'PositionOffset': [0.0, -1.0417879819869995, -1.8496689796447754]})

    call C01_C02()

    Npc_Navi.EventNaviRequestBallonMessage({'Index': 40})
}

void C01_C02() {

    fork {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 150, 'Text2': '', 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C01'})
    } {

        call C01_Player_Cam_if()

    }


    fork {
        EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 350})

        fork {

            call C02_Player_if()

        } {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ShadowTemple_RoomB3FB4FJ_TowerBreak_Group01'})
        }

    } {
        EventCamera[1].EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C01-1'})
    } {
        Obj_ShadowTemple_FallDownPillar_A_01[FallDownPillar_Before].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'ToOpen', 'IsWaitEnd': True, 'IsAnimeDriven': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ShadowTemple_RoomB3FB4FJ_TowerBreak_Group02'})
        GameSystemActor[Pillar_Switch_Wait].EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': False})
    } {
        EventSystemActor[Controller_Rumble_Wait].EventWait({'IsWaitEnd': True, 'Frames': 55})
        EventEffectEmitter.EventNodeEffectEmit({'IsWaitEnd': False, 'InstanceName': 'FallDownPillar_Before', 'ActorName': 'Obj_ShadowTemple_FallDownPillar_A_01', 'ELinkKeyName': 'Dm_ShadowTemple_0015_RootSmoke'})
        EventCamera.EventTriggerRequestCameraShake({'ApplyType': 1, 'Pattern': 2, 'IsRumbleController': True, 'LoopEndCount': 1, 'Power': 2.0})
        EventSystemActor[Controller_Rumble_Wait].EventWait({'IsWaitEnd': True, 'Frames': 50})

        fork {
            GameSystemActor[3].EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_BuBuBu', 'Length': 5.0})
        } {
            EventSystemActor[Controller_Rumble_Wait].EventWait({'IsWaitEnd': True, 'Frames': 310})
            EventCamera.EventTriggerRequestCameraShake({'ApplyType': 1, 'Pattern': 2, 'IsRumbleController': True, 'LoopEndCount': 1, 'Power': 6.0})
        }

        EventSystemActor[Controller_Rumble_Wait].EventWait({'IsWaitEnd': True, 'Frames': 70})
        EventEffectEmitter.EventNodeEffectEmit({'IsWaitEnd': False, 'ELinkKeyName': 'Dm_ShadowTemple_0015_LandImpact', 'InstanceName': 'Pillar_offset', 'ActorName': 'Dm_Locator'})
        GameSystemActor[3].EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Dooon', 'Length': 0.0})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 150, 'Text2': '', 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C02'})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    if !Player_Event.EventQueryCheckPlayerState({'State': 3}) {

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        } {
            Npc_Navi.EventTriggerSetModelAlpha({'Alpha': 1.0})
        }

        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVector': [0.0, 1.850000023841858, -3.9800000190734863], 'AtVector': [0.0, 1.5, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'KeepManualModeFrame': 120.0, 'AfterKeepEndInterpolateCountScale': 3.0, 'ChangeToManualModeAfterEvent': False, 'IsKeepWithRelativePos': False})
    } else {
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
    }
}

void C01_Player_Cam_if() {
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'Obj_ShadowTemple_FallDownPillar_A_01', 'VectorSetType': 3, 'ActorInstanceName': 'FallDownPillar_Before', 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [0.0, 2.0, -1.8496689796447754]}) {
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'InstanceNameA': '', 'IsAnchorActorA': False, 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'ActorNameA': 'Player_Event', 'ActorNameB': 'Dm_Locator', 'InstanceNameB': 'Pillar_offset', 'CheckDistance': 3.8499999046325684}) {
            Event31:
            if !Player_Event.EventQueryCheckPlayerState({'State': 3}) {
                Player_Event.EventPlayerTurnAndLook({'KeepTalkWait': False, 'TurnFaceControlType': 1, 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IsWaitEnd': True, 'IgnoreTargetPosMove': True, 'Target': 0, 'WorldPos': [-127.58000183105469, 46.0, -43.15999984741211], 'ActorName': '', 'SlowTurn': True, 'UseNormalTurn': False, 'IsDoNavi': True})
            }
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        } else
        if !Player_Event.EventQueryCheckPlayerState({'State': 3}) {

            fork {
                Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
                Player_Event.EventPlayerOnStopMode({'StopAnm': False, 'ResetLookIK': True})
                Player_Event.EventPlayerTurnAndLook({'KeepTalkWait': False, 'TurnFaceControlType': 1, 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IsWaitEnd': True, 'IgnoreTargetPosMove': True, 'Target': 0, 'WorldPos': [-127.58000183105469, 46.0, -43.15999984741211], 'ActorName': '', 'SlowTurn': True, 'UseNormalTurn': False, 'IsDoNavi': True})
                Player_Event.EventPlayerOffStopMode()
            } {
                if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'InstanceNameA': '', 'IsAnchorActorA': False, 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'ActorNameA': 'Player_Event', 'ActorNameB': 'Dm_Locator', 'InstanceNameB': 'Pillar_offset', 'CheckDistance': 28.0}) {
                    EventCamera.EventMoveToTargetPosCamera({'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'Actor2ActorName': 'Obj_ShadowTemple_FallDownPillar_A_01', 'AtVectorSetType': 4, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 1, 'IsWaitEnd': True, 'Actor1ActorName': 'Player_Event', 'CameraCollisionLookAtActorOffset': [0.0, 3.0, 0.0], 'MoveTime': 30, 'LookAtDis': -4.0, 'PosVectorSetType': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor2InstanceName': 'FallDownPillar_Before', 'PosVector': [0.0, 2.0, -4.0], 'AtVector': [0.0, 1.5, -1.5], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                } else {
                    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Pillar_offset', 'PosVector': [-26.540000915527344, 2.4100000858306885, -12.319999694824219], 'AtVector': [-22.950000762939453, 2.390000104904175, -10.5600004196167], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
                }
            }

        } else
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'InstanceNameA': '', 'IsAnchorActorA': False, 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'ActorNameA': 'Player_Event', 'ActorNameB': 'Dm_Locator', 'InstanceNameB': 'Pillar_offset', 'CheckDistance': 28.0}) {
            EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'LookAtVectorY': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'Obj_ShadowTemple_FallDownPillar_A_01', 'IsLinearMove': False, 'CameraCollisionMode': 1, 'LookAtVectorXZ': 0, 'ToleranceXZAngle': 12.0, 'ToleranceYUpwardAngle': 30.0, 'ToleranceYDownwardAngle': -5.0, 'TargetActorInstanceName': 'FallDownPillar_Before', 'TargetOffset': [0.0, 1.5, -1.5], 'ToleranceDistance': 2.0, 'MoveTime': 0, 'IdealDistance': 11.5})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Pillar_offset', 'PosVector': [-26.540000915527344, 2.4100000858306885, -12.319999694824219], 'AtVector': [-22.950000762939453, 2.390000104904175, -10.5600004196167], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
        }
    } else
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'InstanceNameA': '', 'IsAnchorActorA': False, 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'ActorNameA': 'Player_Event', 'ActorNameB': 'Dm_Locator', 'InstanceNameB': 'Pillar_offset', 'CheckDistance': 3.8499999046325684}) {
        goto Event31
    } else {

        fork {
            if !Player_Event.EventQueryCheckPlayerState({'State': 3}) {
                Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
                Player_Event.EventPlayerOnStopMode({'StopAnm': False, 'ResetLookIK': True})
                Player_Event.EventPlayerTurnAndLook({'KeepTalkWait': False, 'TurnFaceControlType': 1, 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IsWaitEnd': True, 'IgnoreTargetPosMove': True, 'Target': 0, 'WorldPos': [-127.58000183105469, 46.0, -43.15999984741211], 'ActorName': '', 'SlowTurn': True, 'UseNormalTurn': False, 'IsDoNavi': True})
                Player_Event.EventPlayerOffStopMode()
            }
        } {
            if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'InstanceNameA': '', 'IsAnchorActorA': False, 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'ActorNameA': 'Player_Event', 'ActorNameB': 'Dm_Locator', 'InstanceNameB': 'Pillar_offset', 'CheckDistance': 28.0}) {
                EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'LookAtVectorY': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'Obj_ShadowTemple_FallDownPillar_A_01', 'IsLinearMove': False, 'CameraCollisionMode': 1, 'LookAtVectorXZ': 0, 'ToleranceXZAngle': 12.0, 'ToleranceYUpwardAngle': 30.0, 'ToleranceYDownwardAngle': -5.0, 'ToleranceDistance': 4.0, 'IdealDistance': 7.5, 'MoveTime': 30, 'TargetActorInstanceName': 'FallDownPillar_Before', 'TargetOffset': [0.0, 1.5, -1.5]})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            } else {
                EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Pillar_offset', 'PosVector': [-26.540000915527344, 2.4100000858306885, -12.319999694824219], 'AtVector': [-22.950000762939453, 2.390000104904175, -10.5600004196167], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
            }
        }

    }
}

void C02_Player_if() {
    if !Player_Event.EventQueryCheckPlayerState({'State': 3}) {
        if Player_Event.EventQueryCheckPlayerState({'State': 12}) {
            Player_Event.EventPlayerPutAway({'IsWaitEnd': True})
        }
        if Player_Event.EventQueryCheckPlayerState({'State': 10}) {
            Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
        }
        Event15:
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'InstanceNameA': '', 'IsAnchorActorA': False, 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'ActorNameB': 'Obj_ShadowTemple_FallDownPillar_A_01', 'ActorNameA': 'Player_Event', 'InstanceNameB': 'FallDownPillar_Before', 'CheckDistance': 11.5}) {
            Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'YAngle': 15.0, 'Position': [-130.77999877929688, 42.0099983215332, -45.27000045776367], 'ClothWarpMode': 0, 'EnableInAir': False})

            fork {
                Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
            } {
                Npc_Navi.EventNaviMoveAroundToPlayer({'IsHomePosition': True, 'IsNearOffset': True, 'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'offset': [0.0, 0.0, 0.0], 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
                Npc_Navi.EventPlayAS({'ASName': 'EvtWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            }

            Event16:

            fork {
                Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
            } {
                Npc_Navi.EventTriggerSetModelAlpha({'Alpha': 0.0})
            }

        } else
        if !Player_Event.EventQueryCheckPlayerState({'State': 3}) {
            Player_Event.EventPlayerOnStopMode({'StopAnm': False, 'ResetLookIK': True})
            Player_Event.EventPlayerTurnAndLook({'KeepTalkWait': False, 'TurnFaceControlType': 1, 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IsWaitEnd': True, 'IgnoreTargetPosMove': True, 'Target': 0, 'ActorName': '', 'SlowTurn': True, 'UseNormalTurn': False, 'WorldPos': [-127.4000015258789, 43.0, -30.0], 'IsDoNavi': True})
            Player_Event.EventPlayerOffStopMode()

            fork {
                Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
            } {
                Npc_Navi.EventNaviMoveAroundToPlayer({'IsHomePosition': True, 'IsNearOffset': True, 'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'offset': [0.0, 0.0, 0.0], 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
                Npc_Navi.EventPlayAS({'ASName': 'EvtWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            }

            goto Event16
        } else {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 0})
        }
    } else
    goto Event15
}
