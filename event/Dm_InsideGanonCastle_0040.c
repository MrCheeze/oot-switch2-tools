-------- EventFlow: Dm_InsideGanonCastle_0040 --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerControllerRumble']
queries: ['EventQueryExistEventStarter']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_LiftRock_C_01
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventPlayerPlayASForFlowchart']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0040/Dm_InsideGanonCastle_0040_Player_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideGanonCastle_0040_Player_Adult.root.as', 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart']
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

Actor: Obj_LiftRock_C_04
entrypoint: None()
actions: ['EventPlayAS', 'EventDoNothing', 'EventGoOffstageForUser']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0040/Dm_InsideGanonCastle_0040_Obj_LiftRock_C/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideGanonCastle_0040_Obj_LiftRock_C.root.as', 'Rotation': [169.78700256347656, 29.131000518798828, -162.0240020751953], 'IsWorld': True, 'IsBindNearestActor': False, 'IsGrounding': False, 'EventMemberCreateMethod': 1, 'Position': [-22.17460060119629, 114.83619689941406, -84.47599792480469]}

Actor: Dm_Land_InsideGanonCastle_A_04
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerEmitXLink']
queries: []
params: {'IsWorld': True, 'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'Position': [0.0, 0.0, 0.0], 'EventMemberCreateMethod': 2}

Actor: GameSystemActor[3]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[shindo_add]
entrypoint: None()
actions: ['EventTriggerControllerRumble', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
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
            Npc_Navi.EventWarpToTargetPosAndRot({'ClothWarpMode': -1, 'IsWaitEnd': True, 'Position': [-45.2400016784668, 106.98999786376953, -72.83999633789062], 'YAngle': -65.0})
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': False, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'MoveSpeed': 0.5, 'offset': [-0.6000000238418579, 0.20000000298023224, -0.5]})
            GameSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 380})
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': False, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'offset': [-0.30000001192092896, 0.0, -1.0], 'MoveSpeed': 0.0})
            GameSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 180})
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'PassThrough': -1.0, 'offset': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'IsOffCenterCamera': False, 'IsHomePosition': True, 'IsNearOffset': False, 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'ArrivedASCommand': 'Wait', 'DecSpeedDistance': 0.30000001192092896, 'MoveSpeed': 2.0})
        } {

            call Player_LiftRock_0040()

        }

      case [1, 3]:

        fork {
            Npc_Navi.EventWarpToTargetPosAndRot({'ClothWarpMode': -1, 'IsWaitEnd': True, 'Position': [-44.11000061035156, 106.98999786376953, -72.06999969482422], 'YAngle': -62.0})
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': False, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'MoveSpeed': 0.5, 'offset': [0.800000011920929, 0.20000000298023224, -0.20000000298023224]})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 380})
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': False, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'MoveSpeed': 0.0, 'offset': [0.699999988079071, 0.0, -1.0]})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 180})
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'PassThrough': -1.0, 'offset': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'IsOffCenterCamera': False, 'IsHomePosition': True, 'IsNearOffset': False, 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'ArrivedASCommand': 'Wait', 'MoveSpeed': 2.0, 'DecSpeedDistance': 0.30000001192092896})
        } {

            call Player_LiftRock_0040()

        }

    }
}

void Player_LiftRock_0040() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'CalcUpInInterpolate': False, 'RootType': 1, 'SceneName': 'C01-1', 'IsWaitEnd': True, 'InterpolateFrame': 0.0})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'YAngle': -60.0, 'UseDemoWait': True, 'Position': [-45.130001068115234, 105.69999694824219, -72.33000183105469], 'IsWaitEnd': True, 'ClothWarpMode': 3, 'ASCommand': 'C01', 'EnableInAir': False})

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ASCommand': 'C01', 'UseAnmDriven': True, 'IsWaitEnd': True, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 3, 'IsAllSlot': True})
            Player_Event.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'KeepOneTimeAnm': False, 'UseAnmDriven': True, 'ASCommand': 'DemoWaitHalf', 'IsWaitEnd': False, 'ForceFadeFrame': 20.0, 'ClothWarpMode': 0})
        } {
            Obj_LiftRock_C_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'IsAnimeDriven': True, 'ASName': 'ToLift_0040'})
        }

    } {
        Obj_LiftRock_C_04.EventGoOffstageForUser({'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False, 'IsWaitEnd': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 607})
        Obj_LiftRock_C_04.EventDoNothing({'IsWaitEnd': True})
        Obj_LiftRock_C_04.EventPlayAS({'ASName': 'C01', 'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsAllSlot': True})
    } {
        Dm_Land_InsideGanonCastle_A_04.EventPlayAS({'ASName': 'C01', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Dm_Land_InsideGanonCastle_A_04.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'LavaSplash'})
    } {
        GameSystemActor[3].EventWait({'IsWaitEnd': True, 'Frames': 110})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_Piton', 'Length': 0.0})
        GameSystemActor[3].EventWait({'IsWaitEnd': True, 'Frames': 75})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Piton'})
        GameSystemActor[3].EventWait({'IsWaitEnd': True, 'Frames': 20})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_GoroGoro', 'Length': 3.799999952316284})
        GameSystemActor[3].EventWait({'IsWaitEnd': True, 'Frames': 403})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Dooon', 'Length': 0.0})
        GameSystemActor[3].EventWait({'IsWaitEnd': True, 'Frames': 45})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Dohoon'})
        GameSystemActor[3].EventWait({'IsWaitEnd': True, 'Frames': 5})

        fork {
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Bofuhn'})
            GameSystemActor[3].EventWait({'IsWaitEnd': True, 'Frames': 5})
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Bofuhn'})
            GameSystemActor[3].EventWait({'IsWaitEnd': True, 'Frames': 14})
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Don'})
            GameSystemActor[3].EventWait({'IsWaitEnd': True, 'Frames': 23})
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Piton'})
        } {
            GameSystemActor[shindo_add].EventWait({'Frames': 20, 'IsWaitEnd': True})
            GameSystemActor[shindo_add].EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Dooon', 'Length': 0.0})
        }

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C01', 'Text4': '', 'Text5': '', 'Text3': '', 'Text2': '', 'IsWaitEnd': False})
    }


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C02', 'RootType': 3, 'TargetActorName': 'Player_Event'})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C02', 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': ''})
    }

    Npc_Navi.EventNaviRequestBallonMessage({'Index': 151})
}
