-------- EventFlow: Dm_InsideGanonCastle_0035 --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetPosAndRot', 'EventPlayerTurnAndLook']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0035/Dm_InsideGanonCastle_0035_Player_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideGanonCastle_0035_Player_Adult.root.as', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Obj_LiftRock_C_01
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventTriggerRequestCameraShake']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

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

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerControllerRumble']
queries: ['EventQueryExistEventStarter']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_LiftRock_C_04
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventDoNothing', 'EventPlayAS']
queries: []
params: {'IsWorld': True, 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0035/Dm_InsideGanonCastle_0035_Obj_LiftRock_C/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideGanonCastle_0035Dm_InsideGanonCastle_0035_Obj_LiftRock_C.root.as', 'Position': [-8.423179626464844, 106.1498031616211, -37.172401428222656], 'IsBindNearestActor': False, 'IsGrounding': False, 'Rotation': [4.783999919891357, 242.98199462890625, 6.750999927520752], 'EventMemberCreateMethod': 1}

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
            Npc_Navi.EventWarpToTargetPosAndRot({'ClothWarpMode': -1, 'IsWaitEnd': True, 'Position': [-13.220000267028809, 105.19999694824219, -46.0099983215332], 'YAngle': -150.0})
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': False, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'MoveSpeed': 0.5, 'offset': [-0.6000000238418579, 0.20000000298023224, -0.5]})
            GameSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 380})
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': False, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'offset': [-0.30000001192092896, 0.0, -1.0], 'MoveSpeed': 0.0})
            GameSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 180})
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'PassThrough': -1.0, 'offset': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'IsOffCenterCamera': False, 'IsHomePosition': True, 'IsNearOffset': False, 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'ArrivedASCommand': 'Wait', 'DecSpeedDistance': 0.30000001192092896, 'MoveSpeed': 2.0})
        } {

            call Player_LiftRock_0035()

        }

        Event51:
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})

        fork {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C02', 'IsReferenceRootOnce': True, 'RootType': 0, 'TargetActorName': ''})
            EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': False, 'AfterKeepEndInterpolateCountScale': 1.0, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
        } {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ASCommand': 'C02', 'UseAnmDriven': True, 'ForceFadeFrame': 30.0, 'IsAllSlot': True, 'ClothWarpMode': 0})
            Player_Event.EventPlayerTurnAndLook({'SlowTurn': True, 'IsWaitEnd': True, 'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'WorldPos': [-16.079999923706055, 103.9000015258789, -49.790000915527344], 'UseNormalTurn': False, 'IsDoNavi': False})
        } {
            DevelopEventSystemActor.EventDemoProductSupportComment({'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C02', 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'IsWaitEnd': False})
        }

        Npc_Navi.EventNaviRequestBallonMessage({'Index': 151})
      case [1, 3]:

        fork {
            Npc_Navi.EventWarpToTargetPosAndRot({'ClothWarpMode': -1, 'IsWaitEnd': True, 'Position': [-14.4399995803833, 105.19999694824219, -45.54999923706055], 'YAngle': -142.0})
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': False, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'offset': [0.699999988079071, 0.20000000298023224, -0.30000001192092896], 'MoveSpeed': 0.5})
            GameSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 380})
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': False, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'offset': [0.699999988079071, 0.0, -1.0], 'MoveSpeed': 0.0})
            GameSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 180})
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'PassThrough': -1.0, 'offset': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'IsOffCenterCamera': False, 'IsHomePosition': True, 'IsNearOffset': False, 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'ArrivedASCommand': 'Wait', 'MoveSpeed': 2.0, 'DecSpeedDistance': 0.30000001192092896})
        } {

            call Player_LiftRock_0035()

        }

        goto Event51
    }
}

void Player_LiftRock_0035() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-0', 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'CalcUpInInterpolate': False, 'RootType': 1, 'IsWaitEnd': False, 'InterpolateFrame': 0.0, 'IsReferenceRootOnce': True})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'UseDemoWait': True, 'IsWaitEnd': True, 'ASCommand': 'C01', 'Position': [-13.848699569702148, 103.85299682617188, -45.91659927368164], 'YAngle': -150.61199951171875, 'ClothWarpMode': 3, 'EnableInAir': False})

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ASCommand': 'C01', 'UseAnmDriven': True, 'ForceFadeFrame': 0.0, 'IsAllSlot': True, 'ClothWarpMode': 3})
        } {
            Obj_LiftRock_C_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'IsAnimeDriven': True, 'ASName': 'ToLift_0035', 'ForceFadeInFrame': 0.0})
        }

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C01', 'Text4': '', 'Text5': '', 'Text3': '', 'Text2': ''})
    } {
        Obj_LiftRock_C_04.EventGoOffstageForUser({'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False, 'IsWaitEnd': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 589})
        Obj_LiftRock_C_04.EventDoNothing({'IsWaitEnd': True})
        Obj_LiftRock_C_04.EventPlayAS({'ASName': 'C01', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
        EventCamera.EventTriggerRequestCameraShake({'IsRumbleController': False, 'Pattern': 2, 'Power': 3.0, 'LoopEndCount': 1, 'ApplyType': 1})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 43})
        EventCamera.EventTriggerRequestCameraShake({'IsRumbleController': False, 'Pattern': 2, 'Power': 3.0, 'LoopEndCount': 1, 'ApplyType': 1})
    } {
        GameSystemActor[3].EventWait({'IsWaitEnd': True, 'Frames': 110})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_Piton', 'Length': 0.0})
        GameSystemActor[3].EventWait({'IsWaitEnd': True, 'Frames': 75})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Piton'})
        GameSystemActor[3].EventWait({'IsWaitEnd': True, 'Frames': 20})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_GoroGoro', 'Length': 3.799999952316284})
        GameSystemActor[3].EventWait({'IsWaitEnd': True, 'Frames': 394})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Dooon', 'Length': 0.0})
        GameSystemActor[3].EventWait({'IsWaitEnd': True, 'Frames': 40})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Doon'})
        GameSystemActor[3].EventWait({'IsWaitEnd': True, 'Frames': 43})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Dohoon'})
    }

}
