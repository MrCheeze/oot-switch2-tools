-------- EventFlow: Dm_InsideGanonCastle_0050 --------

Actor: Dm_Locator[Starting_Point]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[Core]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetActor', 'EventTriggerPlayerLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventPlayAS', 'EventNaviMoveAroundToPlayer', 'EventNaviLookAtObject', 'EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Obj_InsideGanonCastle_Core_C_01
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventTriggerModelBind', 'EventPlayAS']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0050/Dm_InsideGanonCastle_0050_Obj_InsideGanonCastle_Core_B/workspace.pp__ModelProject.gyml', 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideGanonCastle_0050_Obj_InsideGanonCastle_Core_B.root.as', 'EventMemberCreateMethod': 0}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundStartSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[vibration]
entrypoint: None()
actions: ['EventTriggerControllerRumble', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    fork {

        call EntryPoint1()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 150, 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': '', 'Text1': 'C01'})
    } {
        Obj_InsideGanonCastle_Core_C_01.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_InsideGanonCastle_Hit_LightArrow'})
    } {
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Obj_InsideGanonCastle_Core_C_01', 'KeyName': 'Vacuum'})
    } {
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Obj_InsideGanonCastle_Core_C_01', 'KeyName': 'Core'})
    }

}

void EntryPoint1() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'C01-0', 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'YAngle': 210.0, 'IsWaitEnd': True, 'Position': [-53.810001373291016, 105.6500015258789, -106.94999694824219], 'ClothWarpMode': -1})
        Npc_Navi.EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_Navi.EventNaviMoveAroundToPlayer({'offset': [0.0, 1.100000023841858, 0.0], 'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'IsHomePosition': True, 'IsNearOffset': True, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
        Npc_Navi.EventNaviLookAtObject({'Target': 3, 'ActorName': 'Dm_Locator', 'InstanceName': 'Core', 'PosOffset': [0.0, 0.20000000298023224, 0.0], 'IsWaitEnd': False, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
    } {
        Obj_InsideGanonCastle_Core_C_01.EventTriggerModelBind({'ActorName': 'Dm_Locator', 'InstanceName': 'Core', 'BoneName': 'Dm_Locator', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0]})
        Obj_InsideGanonCastle_Core_C_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'DemoBeat'})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        Player_Event.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'OffsetBase': 1, 'IsWaitEnd': True, 'PositionOffset': [0.0, 0.0, 0.0], 'UseDemoWait': True, 'InstanceName': 'Starting_Point', 'YAngle': 210.0, 'ASCommand': 'EvtWait'})
        Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'Dm_Locator', 'InstanceName': 'Core', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 120.0, 'Target': 3, 'PosOffset': [0.0, 2.0, 0.0]})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 242})
        UISystemActor.EventEventFadeOut({'Color': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 3})
    } {
        Dm_Locator[Starting_Point].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-54.29999923706055, 103.9800033569336, -107.04000091552734], 'ClothWarpMode': -1})
    } {
        Dm_Locator[Core].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-57.060001373291016, 108.30000305175781, -111.73999786376953], 'ClothWarpMode': -1})
    } {
        GameSystemActor[vibration].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Dohoon'})
        GameSystemActor[vibration].EventWait({'IsWaitEnd': True, 'Frames': 243})
        GameSystemActor[vibration].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Dooon'})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Explosion_Barrier_Long', 'IsIgnoreDucking': True})
    }

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'InsideGanonCastle_Dungeon_BarrierRemove_Fire', 'Index': -1, 'Value': True})
}
