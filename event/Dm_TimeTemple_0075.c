-------- EventFlow: Dm_TimeTemple_0075 --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerPlayerSetTimerInvalidDoAction', 'EventPlayerWarpToTargetPosAndRot']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_TimeTemple_0075/Dm_TimeTemple_0075_Player_Child/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_TimeTemple_0075_Player_Child.root.as', 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventWarpToTargetActor', 'EventNaviLookAtObject', 'EventPlayAS', 'EventWarpToTargetPosAndRot', 'EventNaviRequestBallonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_TimeTemple_0075/Dm_TimeTemple_0075_Npc_Navi/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_TimeTemple_0075_Npc_Navi.root.as', 'ExceptionalBindType': 3}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryHavePlayedEvent']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Land_HrlCity_MasterSword
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'Dm_TimeTemple_0075'}) {

        call Played()

    } else {

        call First()

    }
    Player_Event.EventTriggerPlayerSetTimerInvalidDoAction({'Frame': 90.0})
}

void Played() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C01', 'IsWaitEnd': False, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})

    fork {
        Land_HrlCity_MasterSword.EventTriggerParticipateEvent()
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [137.16000366210938, 106.12000274658203, -34.0], 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'YAngle': 90.0, 'ClothWarpMode': 3, 'EnableInAir': False})
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'C01-Player_Child-A-0', 'ForceFadeFrame': 0.0, 'IsAllSlot': True, 'UseAnmDriven': True, 'KeepOneTimeAnm': False, 'ClothWarpMode': 3})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C01-0', 'RootType': 1, 'TargetActorName': ''})
    } {
        UISystemActor.EventEventFadeIn({'Color': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 0})
    } {
        Npc_Navi.EventWarpToTargetActor({'TargetActorKind': 1, 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'OffsetBase': 1, 'PositionOffset': [-0.30000001192092896, 0.4000000059604645, -0.05000000074505806], 'ActorName': 'Land_HrlCity_MasterSword', 'ClothWarpMode': -1})
        Npc_Navi.EventNaviLookAtObject({'Target': 2, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': False, 'IsWaitEnd': False, 'ActorName': 'Player_Event'})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    }

}

void First() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C01', 'IsWaitEnd': False, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})

    fork {
        Land_HrlCity_MasterSword.EventTriggerParticipateEvent()
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'YAngle': 90.0, 'ClothWarpMode': 3, 'Position': [136.88999938964844, 106.12000274658203, -34.0], 'EnableInAir': False})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C02-Player_Child-A-0', 'IsWaitEnd': True, 'UseAnmDriven': True, 'IsAllSlot': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 3})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 1, 'TargetActorName': '', 'SceneName': 'C02-0', 'IsWaitEnd': True})
    } {
        UISystemActor.EventEventFadeIn({'Color': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 0})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [136.82000732421875, 107.23999786376953, -33.560001373291016], 'ClothWarpMode': -1})
        Npc_Navi.EventPlayAS({'ASName': 'C02-Npc_Navi-A-0', 'Partial': '', 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'IsAllSlot': True, 'IsWaitEnd': False})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    }

    Npc_Navi.EventNaviRequestBallonMessage({'Index': 110})
}
