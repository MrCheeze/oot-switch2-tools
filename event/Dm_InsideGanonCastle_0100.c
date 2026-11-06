-------- EventFlow: Dm_InsideGanonCastle_0100 --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerControllerRumble']
queries: ['EventQueryExistEventStarter']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0100/Dm_InsideGanonCastle_0100_Player_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideGanonCastle_0100_Player_Adult.root.as', 'EventMemberCreateMethod': 0, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviMoveAroundToPlayer', 'EventNaviRequestBallonMessage', 'EventPlayAS', 'EventWarpToTargetPosAndRot']
queries: ['EventQueryNaviHomePositionOffsetType']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Obj_LiftRock_C_01
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[2]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[3]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Success() {
    if !GameSystemActor.EventQueryExistEventStarter() {

        call C01-C03()

    } else {
        GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    }
}

void C01-C03() {
    switch Npc_Navi.EventQueryNaviHomePositionOffsetType() {
      case [0, 2]:

        fork {
            Npc_Navi.EventWarpToTargetPosAndRot({'ClothWarpMode': -1, 'IsWaitEnd': True, 'Position': [89.08000183105469, 86.2300033569336, 320.5199890136719], 'YAngle': 90.0})
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': False, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'MoveSpeed': 0.5, 'offset': [-0.699999988079071, 0.20000000298023224, -0.5]})
            GameSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 360})
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': False, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'MoveSpeed': 0.0, 'IsNearOffset': False, 'IsOffCenterCamera': True, 'IsHomePosition': False, 'offset': [-0.699999988079071, 0.0, -1.0]})
            GameSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 200})
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'PassThrough': -1.0, 'offset': [0.0, 0.0, 0.0], 'DecSpeedDistance': 0.5, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'IsNearOffset': False, 'IsOffCenterCamera': True, 'IsWaitEnd': False, 'IsHomePosition': True, 'MoveSpeed': 2.0})
        } {

            call Player_LiftRock_0100()

        }


        fork {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': True, 'TargetActorName': '', 'RootType': 1, 'SceneName': 'C02-0'})
        } {
            Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'UseAnmDriven': True, 'IsAllSlot': True, 'ASCommand': 'C02', 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0, 'IsWaitEnd': False})
        } {
            DevelopEventSystemActor.EventDemoProductSupportComment({'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C02', 'Text5': '', 'Text4': '', 'Text2': '', 'Text3': '', 'IsWaitEnd': False})
        } {
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'PassThrough': -1.0, 'offset': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'MoveSpeed': 1.0, 'DecSpeedDistance': 0.5, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'IsNearOffset': False, 'IsHomePosition': True, 'IsOffCenterCamera': False})
            Npc_Navi.EventPlayAS({'ASName': 'EvtWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        }

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 8})
        Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'UseAnmDriven': True, 'ASCommand': 'DemoWaitHalf', 'ClothWarpMode': 0, 'ForceFadeFrame': 20.0})
        EventCamera.EventMoveToTargetPosCamera({'MoveToTargetPosCalcMode': 0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': True, 'MoveTime': 0, 'PosVector': [86.25, 86.38999938964844, 316.760009765625], 'AtVector': [89.54000091552734, 86.06999969482422, 319.010009765625], 'TargetFovy': 50.0, 'IsEnableRevertFast': False})
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': False, 'AfterKeepEndInterpolateCountScale': 1.0, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
        Npc_Navi.EventNaviRequestBallonMessage({'Index': 151})
      case [1, 3]:

        fork {
            Npc_Navi.EventWarpToTargetPosAndRot({'ClothWarpMode': -1, 'IsWaitEnd': True, 'Position': [89.08000183105469, 86.2300033569336, 319.1400146484375], 'YAngle': 90.0})
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': False, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'MoveSpeed': 0.5, 'offset': [0.699999988079071, 0.20000000298023224, -0.5]})
            GameSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 360})
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': False, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'MoveSpeed': 0.0, 'offset': [0.699999988079071, 0.0, -1.0], 'IsOffCenterCamera': False})
            GameSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 180})
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'PassThrough': -1.0, 'offset': [0.0, 0.0, 0.0], 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'IsNearOffset': False, 'IsWaitEnd': False, 'MoveSpeed': 2.0, 'IsHomePosition': True, 'DecSpeedDistance': 0.0, 'IsOffCenterCamera': False})
        } {

            call Player_LiftRock_0100()

        }


        fork {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': True, 'TargetActorName': '', 'RootType': 1, 'SceneName': 'C02-0'})
        } {
            Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'UseAnmDriven': True, 'IsAllSlot': True, 'ASCommand': 'C02', 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0, 'IsWaitEnd': False})
        } {
            DevelopEventSystemActor.EventDemoProductSupportComment({'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C02', 'Text5': '', 'Text4': '', 'Text2': '', 'Text3': '', 'IsWaitEnd': False})
        } {
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'PassThrough': -1.0, 'offset': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'MoveSpeed': 1.0, 'DecSpeedDistance': 0.5, 'IsHomePosition': True, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'IsNearOffset': False, 'IsOffCenterCamera': False})
            Npc_Navi.EventPlayAS({'ASName': 'EvtWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        }

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 8})
        Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'UseAnmDriven': True, 'ASCommand': 'DemoWaitHalf', 'ClothWarpMode': 0, 'ForceFadeFrame': 20.0})
        EventCamera.EventMoveToTargetPosCamera({'MoveToTargetPosCalcMode': 0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': True, 'MoveTime': 0, 'PosVector': [86.25, 86.38999938964844, 316.760009765625], 'AtVector': [89.54000091552734, 86.06999969482422, 319.010009765625], 'TargetFovy': 50.0, 'IsEnableRevertFast': False})
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': False, 'AfterKeepEndInterpolateCountScale': 1.0, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
        Npc_Navi.EventNaviRequestBallonMessage({'Index': 151})
    }
}

void Player_LiftRock_0100() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'CalcUpInInterpolate': False, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': True, 'TargetActorName': '', 'RootType': 1, 'SceneName': 'C01-0', 'InterpolateFrame': 0.0})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'Position': [89.70133972167969, 84.55999755859375, 320.0517883300781], 'UseDemoWait': True, 'YAngle': 100.87999725341797, 'IsWaitEnd': True, 'ASCommand': 'C01', 'ClothWarpMode': 3, 'EnableInAir': False})

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'UseAnmDriven': True, 'IsAllSlot': True, 'ASCommand': 'C01', 'ForceFadeFrame': 0.0, 'ClothWarpMode': 3})
        } {
            Obj_LiftRock_C_01.EventPlayAS({'ASName': 'ToLift_0100', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'IsAnimeDriven': True})
        }

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C01', 'Text4': '', 'Text5': '', 'Text3': '', 'Text2': '', 'IsWaitEnd': False})
    } {
        GameSystemActor[3].EventWait({'IsWaitEnd': True, 'Frames': 110})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_Piton', 'Length': 0.0})
        GameSystemActor[3].EventWait({'IsWaitEnd': True, 'Frames': 75})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Piton'})
        GameSystemActor[3].EventWait({'IsWaitEnd': True, 'Frames': 20})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_GoroGoro', 'Length': 3.799999952316284})
    }

}
