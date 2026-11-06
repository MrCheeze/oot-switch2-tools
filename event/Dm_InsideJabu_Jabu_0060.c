-------- EventFlow: Dm_InsideJabu_Jabu_0060 --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_Deku_0010/Dm_Deku_0010/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_Deku_0010_Player_Child.root.as'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventAS': '使用しない', 'ExceptionalBindType': 3, 'IsWorld': True, 'UseEventModelAnime': 'Work/Model/Event/Dm_Deku_0010/Dm_Deku_0010/workspace.pp__ModelProject.gyml'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[position]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventTriggerEmitXLink']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['Event_SetDemoPaletteTransitionForTimeline', 'Event_SetWindForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[light02]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor[sound]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor[sound]
entrypoint: None()
actions: ['EventSoundStartSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    } {
        Dm_Locator[position].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1, 'Position': [42.38999938964844, 101.7699966430664, -112.08999633789062]})
    } {
        EventWorldManagerController.Event_SetWindForFlowchart({'IsImmTrans': False, 'Elevation': 90.0, 'IsWaitEnd': False, 'Azimuth': 0.0, 'Speed': 5.5})
    }


    fork {
        Player_Event.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'YAngle': 0.0, 'UseDemoWait': True, 'OffsetBase': 1, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'position', 'PositionOffset': [0.0, 0.0, 0.0], 'ASCommand': 'EvtWait'})
        Player_Event.EventPlayerPlayASForFlowchart({'IsAllSlot': True, 'UseAnmDriven': True, 'ASCommand': 'C01', 'ForceFadeFrame': 0.0, 'KeepOneTimeAnm': True, 'IsWaitEnd': True, 'ClothWarpMode': 0})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C01-0', 'IsReferenceRootOnce': True, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'position'})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 200})
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1, 'Color': 1})
    } {
        Dm_Locator[position].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_InsideJabu_Jabu_0060_Warp_01'})
    } {
        SoundSystemActor[sound].EventSoundStartSound({'SLinkKey': 'WARP', 'IsIgnoreDucking': False})
        EventSystemActor[sound].EventWait({'IsWaitEnd': True, 'Frames': 360})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        EventWorldManagerController.Event_SetDemoPaletteTransitionForTimeline({'IsWaitEnd': False, 'RateFrame': 0.0, 'RateStart': 0.0, 'RateEnd': 0.0, 'PrevDemoPaletteName': 'Dm_InsideJabu_Jabu_0060', 'CurrDemoPaletteName': 'Dm_InsideJabu_Jabu_0060'})
        EventSystemActor[light02].EventWait({'IsWaitEnd': True, 'Frames': 60})
        EventWorldManagerController.Event_SetDemoPaletteTransitionForTimeline({'IsWaitEnd': False, 'RateStart': 0.0, 'RateEnd': 1.0, 'RateFrame': 180.0, 'CurrDemoPaletteName': 'Dm_InsideJabu_Jabu_0060_2', 'PrevDemoPaletteName': 'Dm_InsideJabu_Jabu_0060'})
    } {
        Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

}
