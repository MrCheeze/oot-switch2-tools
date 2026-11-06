-------- EventFlow: Dm_InsideGanonCastle_0007 --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerControllerRumble']
queries: ['EventQueryExistEventStarter']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLook']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0007/Dm_InsideGanonCastle_0007_Player_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideGanonCastle_0007_0007_Player_Adult.root.as', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'UseEventAS': '', 'UseEventModelAnime': ''}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviRequestBallonMessage', 'EventNaviMoveAroundToPlayer', 'EventWarpToTargetPosAndRot']
queries: ['EventQueryNaviHomePositionOffsetType']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_LiftRock_C_05
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[2]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[3]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    if !GameSystemActor.EventQueryExistEventStarter() {

        call C01-C02()

    } else {
        GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    }
}

void C01-C02() {
    switch Npc_Navi.EventQueryNaviHomePositionOffsetType() {
      case [0, 2]:

        fork {
            Npc_Navi.EventWarpToTargetPosAndRot({'ClothWarpMode': -1, 'IsWaitEnd': True, 'Position': [43.31999969482422, 105.55000305175781, -105.3499984741211], 'YAngle': -120.0})
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': False, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'MoveSpeed': 0.5, 'offset': [-0.6000000238418579, 0.20000000298023224, -0.5]})
            GameSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 380})
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': False, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'offset': [-0.30000001192092896, 0.0, -1.0]})
            GameSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 180})
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'PassThrough': -1.0, 'offset': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'IsHomePosition': True, 'IsNearOffset': False, 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'IsOffCenterCamera': False, 'MoveSpeed': 2.0, 'DecSpeedDistance': 0.30000001192092896, 'ArrivedASCommand': 'Wait'})
        } {

            call Player_LiftRock_0007()

        }


        fork {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsReferenceRootOnce': True, 'TargetActorName': '', 'SceneName': 'C02-1', 'RootType': 1})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False, 'TargetFovy': 50.93000030517578, 'MoveTotargetPosType': 0, 'PosVector': [45.83982849121094, 105.77649688720703, -102.04830169677734], 'AtVector': [43.41025924682617, 105.3198013305664, -104.19640350341797]})
            EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'AfterKeepEndInterpolateCountScale': 3.0, 'IsKeepWithRelativePos': True})
        } {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ASCommand': 'C02', 'UseAnmDriven': True, 'IsAllSlot': True, 'ClothWarpMode': 3, 'ForceFadeFrame': 8.0})
            Player_Event.EventPlayerTurnAndLook({'SlowTurn': True, 'IsWaitEnd': True, 'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'WorldPos': [40.5, 103.9000015258789, -106.58999633789062], 'UseNormalTurn': False, 'IsDoNavi': False})
        } {
            DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C02', 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': ''})
        }

        Npc_Navi.EventNaviRequestBallonMessage({'Index': 151})
      case [1, 3]:

        fork {
            Npc_Navi.EventWarpToTargetPosAndRot({'ClothWarpMode': -1, 'IsWaitEnd': True, 'Position': [42.4900016784668, 105.56999969482422, -104.62999725341797], 'YAngle': -120.0})
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': False, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'offset': [0.699999988079071, 0.20000000298023224, -0.30000001192092896], 'MoveSpeed': 0.5})
            GameSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 380})
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': False, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'offset': [0.699999988079071, 0.0, -1.0], 'MoveSpeed': 0.0})
            GameSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 180})
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'PassThrough': -1.0, 'IsWaitEnd': True, 'IsOffCenterCamera': False, 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'ArrivedASCommand': 'Wait', 'MoveSpeed': 2.0, 'DecSpeedDistance': 0.30000001192092896, 'IsHomePosition': False, 'IsNearOffset': False, 'offset': [0.44999998807907104, 0.550000011920929, -0.699999988079071]})
        } {

            call Player_LiftRock_0007()

        }


        fork {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsReferenceRootOnce': True, 'TargetActorName': '', 'SceneName': 'C02-1', 'RootType': 1})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False, 'TargetFovy': 50.93000030517578, 'MoveTotargetPosType': 0, 'PosVector': [45.83982849121094, 105.77649688720703, -102.04830169677734], 'AtVector': [43.41025924682617, 105.3198013305664, -104.19640350341797]})
            EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'AfterKeepEndInterpolateCountScale': 3.0, 'IsKeepWithRelativePos': True})
        } {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ASCommand': 'C02', 'UseAnmDriven': True, 'IsAllSlot': True, 'ClothWarpMode': 3, 'ForceFadeFrame': 8.0})
            Player_Event.EventPlayerTurnAndLook({'SlowTurn': True, 'IsWaitEnd': True, 'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'WorldPos': [40.5, 103.9000015258789, -106.58999633789062], 'UseNormalTurn': False, 'IsDoNavi': False})
        } {
            GameSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 85})
            Npc_Navi.EventNaviMoveAroundToPlayer({'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'PassThrough': -1.0, 'offset': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'IsHomePosition': True, 'IsNearOffset': False, 'OffsetType': -1, 'IsOffCenterCamera': False, 'ArrivedASCommand': 'Wait', 'IsLookAtObject': True, 'MoveSpeed': 1.7999999523162842, 'LookAtWorldPos': [30.0, 108.0, -113.2300033569336], 'IsTurnLooking': False, 'OverwriteRotNearDist': -1.0, 'IsUseAfterPlayerTurn': True, 'DecSpeedDistance': 0.20000000298023224})
        } {
            DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C02', 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': ''})
        }

        Npc_Navi.EventNaviRequestBallonMessage({'Index': 151})
    }
}

void Player_LiftRock_0007() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'CalcUpInInterpolate': False, 'RootType': 1, 'SceneName': 'C01-1', 'InterpolateFrame': 0.0, 'IsReferenceRootOnce': True, 'IsWaitEnd': True})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'Position': [42.869998931884766, 103.9000015258789, -105.2699966430664], 'YAngle': -120.0, 'IsWaitEnd': True, 'ClothWarpMode': 3, 'ASCommand': 'C01', 'UseDemoWait': True, 'EnableInAir': False})

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ASCommand': 'C01', 'ForceFadeFrame': 0.0, 'IsAllSlot': True, 'ClothWarpMode': 3, 'UseAnmDriven': True})
        } {
            Obj_LiftRock_C_05.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'IsAnimeDriven': True, 'ASName': 'ToLift_0007'})
        }

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C01', 'Text4': '', 'Text5': '', 'Text3': '', 'Text2': ''})
    } {
        GameSystemActor[3].EventWait({'IsWaitEnd': True, 'Frames': 110})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_Piton', 'Length': 0.0})
        GameSystemActor[3].EventWait({'IsWaitEnd': True, 'Frames': 75})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Piton'})
        GameSystemActor[3].EventWait({'IsWaitEnd': True, 'Frames': 20})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_GoroGoro', 'Length': 3.799999952316284})
        GameSystemActor[3].EventWait({'IsWaitEnd': True, 'Frames': 460})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Dohoon', 'Length': 0.0})
    }

}
