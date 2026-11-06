-------- EventFlow: Dm_Graveyard_0030 --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetActor']
queries: ['EventQueryPlayerIsEquipWeapon']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'UseEventAS': 'Work/AS/Root/Event/Dm_Graveyard_0030_Player.root.as', 'UseEventModelAnime': 'Work/Model/Event/Dm_Graveyard_0030/Dm_Graveyard_0030_Player_Adult/workspace.pp__ModelProject.gyml', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Dm_Locator[position]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventTriggerEmitXLink']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1, 'IsWorld': False}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventNaviMoveAtPos', 'EventNaviRequestLookAtTheFront']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundStartSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[NaviWait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    Dm_Locator[position].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -92.14753723144531, 'Position': [64.70800018310547, 108.9469985961914, 2.4739999771118164], 'ClothWarpMode': -1})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'position', 'PosVector': [-0.3799999952316284, 1.8700000047683716, -8.539999961853027], 'AtVector': [0.019999999552965164, 2.180000066757202, 0.17000000178813934], 'TargetFovy': 50.099998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerWarpToTargetActor({'UseDemoWait': True, 'ActorName': 'Dm_Locator', 'OffsetBase': 1, 'YAngle': 0.0, 'InstanceName': 'position', 'TargetActorKind': 1, 'PositionOffset': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'ASCommand': 'EvtWait'})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C01', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0})
    } {

        call Navi()

    } {
        Dm_Locator[position].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_Graveyard_0030_WarpOut_01'})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C01', 'IsWaitEnd': False, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'ENTRY', 'IsIgnoreDucking': False})
    }

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 4.0, 'CameraResetPolicy': 0})
}

void Navi() {
    if !Player_Event.EventQueryPlayerIsEquipWeapon({'ArmorName': 'Weapon_Sword_Biggoron', 'WeaponSlot': 0}) {
        Event21:
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'ClothWarpMode': -1, 'Position': [64.88999938964844, 118.5, 2.069999933242798], 'YAngle': -269.0})
        EventSystemActor[NaviWait].EventWait({'Frames': 30, 'IsWaitEnd': True})
        Npc_Navi.EventNaviMoveAtPos({'IsWaitEnd': True, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtOffsetBase': 0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'OverwriteRotNearDist': -1.0, 'IsLookAtObject': True, 'IsTurnLooking': True, 'ASCommand': 'Wait', 'LookAtTarget': 4, 'DecSpeedDistance': 2.0, 'MoveSpeed': 2.5999999046325684, 'LookAtPosOffset': [-100.0, 0.0, 0.0], 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtDirection': -269.0, 'WorldPos': [64.88999938964844, 110.48999786376953, 2.069999933242798]})
        Npc_Navi.EventNaviRequestLookAtTheFront({'IsWaitEnd': True})
    } else
    if !Player_Event.EventQueryPlayerIsEquipWeapon({'WeaponSlot': 0, 'ArmorName': 'Weapon_Sword_BrokenGiant'}) {
        goto Event21
    } else
    if !Player_Event.EventQueryPlayerIsEquipWeapon({'WeaponSlot': 0, 'ArmorName': 'Weapon_Sword_Giant'}) {
        goto Event21
    } else {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'ClothWarpMode': -1, 'YAngle': -269.0, 'Position': [64.86000061035156, 118.5, 2.890000104904175]})
        EventSystemActor[NaviWait].EventWait({'Frames': 30, 'IsWaitEnd': True})
        Npc_Navi.EventNaviMoveAtPos({'IsWaitEnd': True, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtOffsetBase': 0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'OverwriteRotNearDist': -1.0, 'IsLookAtObject': True, 'IsTurnLooking': True, 'ASCommand': 'Wait', 'LookAtTarget': 4, 'DecSpeedDistance': 2.0, 'MoveSpeed': 2.5999999046325684, 'LookAtPosOffset': [-100.0, 0.0, 0.0], 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtDirection': -269.0, 'WorldPos': [64.86000061035156, 110.48999786376953, 2.890000104904175]})
        Npc_Navi.EventNaviRequestLookAtTheFront({'IsWaitEnd': True})
    }
}
