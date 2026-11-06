-------- EventFlow: Dm_ForestTemple_0020 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'IsWorld': True, 'Position': [3.799999952316284, -17.0, -105.0], 'UseEventModelAnime': 'Work/Model/Event/Dm_ForestTemple_0020/Dm_ForestTemple_0020_Player_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ForestTemple_0020_Player_Adult.root.as', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[pos]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTriggerSetDemoPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[PalletWait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    Dm_Locator[pos].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1, 'Position': [-0.06599999964237213, 74.66999816894531, -62.57099914550781]})

    fork {
        Player_Event.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'OffsetBase': 1, 'InstanceName': 'pos', 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'UseDemoWait': True, 'ASCommand': 'DemoWaitHalf'})
        Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C01', 'IsWaitEnd': True, 'UseAnmDriven': True, 'IsAllSlot': True, 'ClothWarpMode': 0})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-0', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'pos'})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 640})
        UISystemActor.EventEventFadeOut({'Color': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 150, 'Text4': '', 'Text3': '', 'IsWaitEnd': False, 'Text2': '', 'Text1': 'C01', 'BgAlignH': 0, 'BgAlignW': 0})
    } {
        Dm_Locator[pos].EventTriggerEmitXLink({'ELinkKey': 'Dm_ForestTemple_0020_Warp_00', 'SLinkKey': ''})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 420})
        Dm_Locator[pos].EventTriggerEmitXLink({'ELinkKey': 'Dm_ForestTemple_0020_Crystal_00', 'SLinkKey': ''})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 180})
        Dm_Locator[pos].EventTriggerEmitXLink({'ELinkKey': 'Dm_ForestTemple_0020_CrystalFinish_00', 'SLinkKey': ''})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_ForestTemple_0020_C01', 'CurrDemoPaletteName': 'Dm_ForestTemple_0020_C01'})
        EventSystemActor[PalletWait].EventWait({'IsWaitEnd': True, 'Frames': 250})
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'PrevDemoPaletteName': 'Dm_ForestTemple_0020_C01', 'CurrDemoPaletteName': 'Dm_ForestTemple_0020_C01_2', 'Frames': 300})
    } {
        Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
    }

}
