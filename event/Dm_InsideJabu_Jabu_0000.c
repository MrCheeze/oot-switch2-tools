-------- EventFlow: Dm_InsideJabu_Jabu_0000 --------

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3, 'IsGrounding': True, 'IsWorld': False}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerOpenLocationUI', 'EventEventFadeIn', 'EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[cam]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 1, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': True, 'Position': [0.05000000074505806, -6.25, 6.230000019073486], 'Rotation': [0.0, 180.0, 0.0]}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventPlayerPlayASForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideJabu_Jabu_0000.root.as', 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideJabu_Jabu_0000/Dm_InsideJabu_Jabu_0000_Player_Child/workspace.pp__ModelProject.gyml', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideJabu_Jabu_0000/Dm_InsideJabu_Jabu_0000_Npc_Navi/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideJabu_Jabu_0000_Navi.root.as'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTriggerSetDemoPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[ESA2]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[ESA1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    fork {
        Dm_Locator[cam].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [0.0, 90.16000366210938, -0.8799999952316284], 'ClothWarpMode': -1})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'YAngle': 180.0, 'Position': [0.0, 90.16000366210938, -0.8799999952316284], 'ASCommand': 'EvtWait', 'ClothWarpMode': 0, 'EnableInAir': False})
    } {
        UISystemActor.EventEventFadeOut({'Color': 0, 'Length': 2, 'IsNoPlayAnime': True, 'IsWaitEnd': False})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [0.4300000071525574, 91.19000244140625, -0.699999988079071], 'YAngle': -180.0, 'ClothWarpMode': -1})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_InsideJabu_Jabu_0000_C01', 'CurrDemoPaletteName': 'Dm_InsideJabu_Jabu_0000_C01'})
    }


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'CameraName': '', 'TargetActorName': 'Dm_Locator', 'IsIgnoreRootRot': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'TargetActorInstanceName': 'cam', 'IsReferenceRootOnce': True, 'IsWaitEnd': True, 'SceneName': 'C01-1'})
        EventSystemActor[ESA1].EventWait({'IsWaitEnd': True, 'Frames': 20})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 400})
        UISystemActor.EventTriggerOpenLocationUI({'LocationName': 'Work/Location/InsideJabuJabuBelly.game__location__Location.gyml'})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 500})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ASCommand': 'C01', 'IsAllSlot': True, 'ForceFadeFrame': 0.0, 'IsWaitEnd': False, 'ClothWarpMode': 2})
    } {
        Npc_Navi.EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'C01', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': True})
        Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ASName': 'Wait', 'ForceFadeInFrame': 40.0, 'IsAnimeDriven': True})
    } {
        EventSystemActor[ESA2].EventWait({'IsWaitEnd': True, 'Frames': 60})
        UISystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 0, 'IsWaitEnd': False, 'Length': 2})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsWaitEnd': True, 'IsEnableNear': False, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartDistance': 0.0, 'EndDistance': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'RequiredFrame': 0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartBluarLevel': 0.75, 'IsEnableNear': False, 'EndBluarLevel': 0.75, 'EndDistance': 6.760000228881836, 'StartDistance': 6.760000228881836, 'RequiredFrame': 0, 'IsWaitEnd': False, 'StartFNumber': 30.0, 'EndFNumber': 30.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
}
