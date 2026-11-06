-------- EventFlow: Dm_ShadowTemple_0010 --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventPlayerPlayASForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'UseEventModelAnime': 'Work/Model/Event/Dm_ShadowTemple_0010/Dm_ShadowTemple_0010_Player_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ShadowTemple_0010_Player_Adult.root.as', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviFollowPlayer', 'EventNaviLookAtObject', 'EventPlayAS', 'EventWarpToTargetPosAndRot', 'EventNaviTrailRestart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'UseEventModelAnime': 'Work/Model/Event/Dm_ShadowTemple_0010/Dm_ShadowTemple_0010_Npc_Navi/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ShadowTemple_0010_Navi.root.as'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[player_taiki]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Controller]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart', 'EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    call Ready()


    fork {

        call C01()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C01', 'Text3': '', 'Text2': ''})
    }


    fork {

        call C03()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C03', 'Text2': '', 'Text3': ''})
    }


    fork {

        call C04()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C04', 'Text2': ''})
    }


    fork {

        call C05()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C05', 'Text2': '', 'Text3': ''})
    }

    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'KeepManualModeFrame': 120.0, 'AfterKeepEndInterpolateCountScale': 3.0, 'ChangeToManualModeAfterEvent': False, 'IsKeepWithRelativePos': True})
}

void Ready() {
    Npc_Navi.EventNaviTrailRestart({'IsWaitEnd': False})
}

void C05() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C05-1', 'IsReferenceRootOnce': False, 'IsIgnoreRootRot': False, 'RootType': 1, 'TargetActorName': ''})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C05', 'UseAnmDriven': False, 'ClothWarpMode': 0, 'IsAllSlot': True, 'IsWaitEnd': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 20.0, 'EndDistance': 20.0, 'StartFNumber': 3.0, 'EndFNumber': 3.0, 'StartBluarLevel': 1.7999999523162842, 'EndBluarLevel': 1.7999999523162842, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 300})
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'EndBluarLevel': 0.0, 'StartDistance': 20.0, 'EndDistance': 60.0, 'StartFNumber': 3.0, 'EndFNumber': 2.0, 'StartBluarLevel': 1.7999999523162842, 'IsWaitEnd': True, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

}

void C04() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [102.80000305175781, 46.7400016784668, -41.119998931884766], 'AtVector': [103.06999969482422, 46.83000183105469, -41.650001525878906], 'TargetFovy': 31.989999771118164, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C04', 'IsWaitEnd': True, 'UseAnmDriven': False, 'ClothWarpMode': 0, 'IsAllSlot': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'EndDistance': 15.0, 'EndFNumber': 10.0, 'EndBluarLevel': 1.5, 'StartDistance': 15.0, 'StartFNumber': 10.0, 'StartBluarLevel': 1.5, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsEnableNear': True, 'RequiredFrame': 0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

}

void C03() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [141.19000244140625, 44.709999084472656, -53.130001068115234], 'AtVector': [142.72999572753906, 44.0099983215332, -55.689998626708984], 'TargetFovy': 73.0, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C03', 'IsWaitEnd': True, 'UseAnmDriven': False, 'ClothWarpMode': 0, 'IsAllSlot': True})
    } {
        Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': False, 'offset': [0.0, 0.0, 0.0], 'IsHomePosition': True, 'IsNearOffset': True, 'Speed': -1.0, 'OffsetType': -1})
    } {
        EventSystemActor[Controller].EventWait({'IsWaitEnd': True, 'Frames': 40})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_GataGata', 'Length': 0.5})
        EventSystemActor[Controller].EventWait({'IsWaitEnd': True, 'Frames': 30})
        GameSystemActor.EventTriggerControllerRumble({'Length': 1.2999999523162842, 'RumbleCall': 'Demo_Large_GataGata'})
        EventSystemActor[Controller].EventWait({'IsWaitEnd': True, 'Frames': 55})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Doon'})
        EventSystemActor[Controller].EventWait({'IsWaitEnd': True, 'Frames': 60})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_GataGata', 'Length': 4.199999809265137})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'EndFNumber': 10.0, 'EndBluarLevel': 1.5, 'StartFNumber': 10.0, 'StartBluarLevel': 1.5, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'EndDistance': 10.0, 'StartDistance': 10.0, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

}

void C01() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-1', 'IsWaitEnd': True, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [130.97000122070312, 46.22999954223633, -62.2599983215332], 'YAngle': -90.0, 'ASCommand': 'DemoOcarinamove_st', 'UseDemoWait': True, 'ClothWarpMode': 0, 'EnableInAir': False})

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'KeepOneTimeAnm': False, 'UseAnmDriven': False, 'ASCommand': 'DemoOcarinamove_st', 'ForceFadeFrame': 15.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
        } {
            EventSystemActor[player_taiki].EventWait({'IsWaitEnd': True, 'Frames': 98})
        }

        Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ASCommand': 'C01', 'UseAnmDriven': False, 'IsWaitEnd': False, 'ClothWarpMode': 0, 'IsAllSlot': True, 'ForceFadeFrame': 50.0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 650})
    } {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'ShadowTemple_RoomB3FB4FJ_Departure', 'Index': -1, 'Value': True})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'ClothWarpMode': -1, 'Position': [131.6999969482422, 47.93000030517578, -61.790000915527344], 'YAngle': -90.0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
        Npc_Navi.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ASName': 'C01_Navi-Surprise', 'ForceFadeInFrame': 10.0, 'IsAnimeDriven': True})

        fork {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 38})
        } {
            Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'EvtWait', 'IsWaitEnd': False})
        }

        Npc_Navi.EventNaviLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'IsTurnX': True, 'Direction': 0.0, 'IsWaitEnd': True, 'WorldPos': [127.0, 49.0, -64.0]})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
        Npc_Navi.EventNaviLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'IsTurnX': True, 'Direction': 0.0, 'IsWaitEnd': True, 'WorldPos': [90.0, 49.0, -62.0]})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
    }

}
