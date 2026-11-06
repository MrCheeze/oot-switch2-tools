-------- EventFlow: Dm_InsideGanonCastle_0060 --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLook']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideGanonCastle_0060_Player_Adult.root.as', 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0060/Dm_InsideGanonCastle_0060_Player_Adult/workspace.pp__ModelProject.gyml', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

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
actions: ['EventGoOffstageForUser', 'EventDoNothing', 'EventPlayAS', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsWorld': True, 'Rotation': [15.373000144958496, 303.87701416015625, -5.498000144958496], 'Position': [-18.348800659179688, 101.99929809570312, -21.29360008239746], 'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0060/Dm_InsideGanonCastle_0060_Obj_LiftRock_C/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideGanonCastle_0060_Obj_LiftRock_C.root.as'}

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

Actor: GameSystemActor[4]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

void C01-C02() {
    switch Npc_Navi.EventQueryNaviHomePositionOffsetType() {
      case [0, 2]:

        fork {
            Npc_Navi.EventWarpToTargetPosAndRot({'ClothWarpMode': -1, 'IsWaitEnd': True, 'Position': [-28.450000762939453, 101.20999908447266, -21.290000915527344], 'YAngle': -90.0})
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': False, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'MoveSpeed': 0.5, 'offset': [-0.699999988079071, 0.20000000298023224, -0.5]})
            GameSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 380})
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': False, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'MoveSpeed': 0.0, 'offset': [-0.30000001192092896, 0.0, -1.0], 'IsOffCenterCamera': False})
            GameSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 180})
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'PassThrough': -1.0, 'offset': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'IsOffCenterCamera': False, 'IsHomePosition': True, 'IsNearOffset': False, 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'MoveSpeed': 2.0, 'DecSpeedDistance': 0.30000001192092896, 'ArrivedASCommand': 'Wait', 'IsUseAfterPlayerTurn': True})
        } {

            call Player_LiftRock_0060()

        }

        Event16:
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})

        fork {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C02', 'IsReferenceRootOnce': True, 'RootType': 0, 'TargetActorName': ''})
            EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': False, 'AfterKeepEndInterpolateCountScale': 1.0, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
        } {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C02', 'UseAnmDriven': True, 'ClothWarpMode': -1})
            Player_Event.EventPlayerTurnAndLook({'SlowTurn': True, 'IsWaitEnd': True, 'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'UseNormalTurn': False, 'WorldPos': [-33.05009078979492, 99.73999786376953, -21.0], 'IsDoNavi': False})
        } {
            DevelopEventSystemActor.EventDemoProductSupportComment({'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C02', 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'IsWaitEnd': False})
        }

        Npc_Navi.EventNaviRequestBallonMessage({'Index': 151})
      case [1, 3]:

        fork {
            Npc_Navi.EventWarpToTargetPosAndRot({'Position': [-28.200000762939453, 101.20999908447266, -20.280000686645508], 'ClothWarpMode': -1, 'IsWaitEnd': True, 'YAngle': -90.0})
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': False, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'MoveSpeed': 0.5, 'offset': [0.699999988079071, 0.20000000298023224, -0.30000001192092896]})
            GameSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 380})
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': False, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsTurnLooking': False, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'offset': [0.699999988079071, 0.0, -1.0], 'MoveSpeed': 0.0, 'IsNearOffset': False})
            GameSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 180})
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'PassThrough': -1.0, 'offset': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'IsOffCenterCamera': False, 'IsHomePosition': True, 'IsNearOffset': False, 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'MoveSpeed': 2.0, 'DecSpeedDistance': 0.30000001192092896, 'ArrivedASCommand': 'Wait', 'IsUseAfterPlayerTurn': True})
        } {

            call Player_LiftRock_0060()

        }

        goto Event16
    }
}

void EntryPoint0() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'BgAlignW': 1, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 150, 'BgAlignH': 2, 'Text2': '', 'Text1': ''})
    if !GameSystemActor.EventQueryExistEventStarter() {

        call C01-C02()

    } else {
        GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    }
}

void Player_LiftRock_0060() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-0', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'CalcUpInInterpolate': False, 'RootType': 1, 'InterpolateFrame': 0.0, 'IsWaitEnd': True})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'YAngle': -90.0, 'UseDemoWait': True, 'IsWaitEnd': True, 'ClothWarpMode': 3, 'ASCommand': 'C01', 'Position': [-28.6294002532959, 99.74539947509766, -20.862699508666992], 'EnableInAir': False})

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ASCommand': 'C01', 'UseAnmDriven': True, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 3, 'IsAllSlot': True})
        } {
            Obj_LiftRock_C_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'IsAnimeDriven': True, 'ASName': 'ToLift_0060'})
        }

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C01', 'Text4': '', 'Text5': '', 'Text3': '', 'Text2': ''})
    } {
        Obj_LiftRock_C_04.EventGoOffstageForUser({'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False, 'IsWaitEnd': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 589})
        Obj_LiftRock_C_04.EventDoNothing({'IsWaitEnd': True})
        Obj_LiftRock_C_04.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C01_0060'})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
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
        GameSystemActor[3].EventWait({'IsWaitEnd': True, 'Frames': 30})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Doon'})
        GameSystemActor[3].EventWait({'IsWaitEnd': True, 'Frames': 43})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Dohoon'})
    } {
        GameSystemActor[4].EventWait({'IsWaitEnd': True, 'Frames': 590})
        Obj_LiftRock_C_04.EventTriggerEmitXLink({'ELinkKey': 'Dm_InsideGanonCastle_0060_C01', 'SLinkKey': ''})
    }

}
