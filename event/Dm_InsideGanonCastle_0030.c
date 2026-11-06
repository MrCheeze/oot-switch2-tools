-------- EventFlow: Dm_InsideGanonCastle_0030 --------

Actor: Dm_Locator[Starting_Point]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Dm_Locator[Core]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetActor', 'EventTriggerPlayerLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventPlayAS', 'EventNaviMoveAroundToPlayer', 'EventWarpToTargetPosAndRot', 'EventNaviLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Obj_InsideGanonCastle_Core_D_01
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventPlayAS', 'EventTriggerModelBind']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0030/Dm_InsideGanonCastle_0030_Obj_InsideGanonCastle_Core_B/workspace.pp__ModelProject.gyml', 'IsBindNearestActor': False, 'IsWorld': False, 'IsGrounding': False, 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideGanonCastle_0030_Obj_InsideGanonCastle_Core_B-A-0.root.as', 'EventMemberCreateMethod': 0}

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
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignH': 0, 'BgAlignW': 0, 'Text1': 'C01', 'Text2': ''})
    } {
        Obj_InsideGanonCastle_Core_D_01.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_InsideGanonCastle_Hit_LightArrow'})
    } {
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Obj_InsideGanonCastle_Core_D_01', 'KeyName': 'Core'})
    } {
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Obj_InsideGanonCastle_Core_D_01', 'KeyName': 'Vacuum'})
    }

}

void EntryPoint1() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'C01-0', 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'Position': [103.76000213623047, 101.44000244140625, -20.020000457763672], 'YAngle': 100.0, 'IsWaitEnd': True, 'ClothWarpMode': -1})
        Npc_Navi.EventPlayAS({'ASName': 'Wait', 'IsAllSlot': True, 'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'LookAtTarget': 2, 'IsLookAtObject': True, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsNearOffset': False, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'IsHomePosition': True, 'offset': [0.0, 0.0, 0.0], 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': False, 'Target': 3, 'ActorName': 'Dm_Locator', 'InstanceName': 'Core', 'PosOffset': [0.0, 0.20000000298023224, 0.0], 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
    } {
        Obj_InsideGanonCastle_Core_D_01.EventTriggerModelBind({'ActorName': 'Dm_Locator', 'InstanceName': 'Core', 'BoneName': 'Dm_Locator', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0]})
        Obj_InsideGanonCastle_Core_D_01.EventPlayAS({'ASName': 'DemoBeat', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        Player_Event.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'Starting_Point', 'OffsetBase': 1, 'PositionOffset': [0.0, 0.0, 0.0], 'UseDemoWait': True, 'YAngle': 90.0, 'IsWaitEnd': True, 'ASCommand': 'EvtWait'})
        Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'Dm_Locator', 'Target': 3, 'InstanceName': 'Core', 'Direction': 120.0, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 2.0, 0.0]})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 242})
        UISystemActor.EventEventFadeOut({'Color': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 3})
    } {
        Dm_Locator[Starting_Point].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [103.0, 99.77999877929688, -21.0], 'ClothWarpMode': -1})
    } {
        Dm_Locator[Core].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [108.47000122070312, 104.05999755859375, -20.989999771118164], 'ClothWarpMode': -1})
    } {
        GameSystemActor[vibration].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Dohoon'})
        GameSystemActor[vibration].EventWait({'IsWaitEnd': True, 'Frames': 243})
        GameSystemActor[vibration].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Dooon'})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Explosion_Barrier_Long', 'IsIgnoreDucking': False})
    }

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'InsideGanonCastle_Dungeon_BarrierRemove_Water', 'Index': -1, 'Value': True})
}
