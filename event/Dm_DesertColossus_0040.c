-------- EventFlow: Dm_DesertColossus_0040 --------

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetActor']
queries: ['EventQueryPlayerIsEquipWeapon']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'UseEventModelAnime': 'Work/Model/Event/Dm_DesertColossus_0040/Dm_DesertColossus_0040_Player_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_DesertColossus_0040_Player.root.as', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Dm_Locator[01]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

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

Actor: EventSystemActor[NaviWait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[Effect]
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventSoundStartSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 0, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})

    fork {
        Dm_Locator[01].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-125.95999908447266, 93.87999725341797, 10.470000267028809], 'ClothWarpMode': -1})
    } {
        Dm_Locator[Effect].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1, 'Position': [-125.95999908447266, 93.87999725341797, 10.5600004196167]})
    }


    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': '01', 'PosVector': [-11.9399995803833, 2.5899999141693115, 0.7699999809265137], 'AtVector': [0.10000000149011612, 2.569999933242798, -0.019999999552965164], 'TargetFovy': 37.20000076293945, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'UseDemoWait': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': '01', 'PositionOffset': [0.0, 0.0, 0.0], 'ASCommand': 'EvtWait', 'OffsetBase': 1, 'YAngle': -269.0})
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'C01_player', 'UseAnmDriven': True, 'ClothWarpMode': 0})
    } {

        call Navi()

    } {
        Dm_Locator[Effect].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_DesertColossus_0040_WarpOut_01'})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C01', 'IsWaitEnd': False, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'ENTRY', 'IsIgnoreDucking': False})
    }

}

void Navi() {
    if !Player_Event.EventQueryPlayerIsEquipWeapon({'ArmorName': 'Weapon_Sword_Biggoron', 'WeaponSlot': 0}) {
        Event30:
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'ClothWarpMode': -1, 'YAngle': -269.0, 'Position': [-126.12000274658203, 103.87999725341797, 10.890000343322754]})
        EventSystemActor[NaviWait].EventWait({'Frames': 30, 'IsWaitEnd': True})
        Npc_Navi.EventNaviMoveAtPos({'IsWaitEnd': True, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtOffsetBase': 0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'OverwriteRotNearDist': -1.0, 'IsLookAtObject': True, 'IsTurnLooking': True, 'ASCommand': 'Wait', 'LookAtTarget': 4, 'DecSpeedDistance': 2.0, 'MoveSpeed': 2.5999999046325684, 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtDirection': -269.0, 'LookAtPosOffset': [100.0, 0.0, 0.0], 'WorldPos': [-126.12000274658203, 95.87999725341797, 10.890000343322754]})
        Npc_Navi.EventNaviRequestLookAtTheFront({'IsWaitEnd': True})
    } else
    if !Player_Event.EventQueryPlayerIsEquipWeapon({'WeaponSlot': 0, 'ArmorName': 'Weapon_Sword_BrokenGiant'}) {
        goto Event30
    } else
    if !Player_Event.EventQueryPlayerIsEquipWeapon({'WeaponSlot': 0, 'ArmorName': 'Weapon_Sword_Giant'}) {
        goto Event30
    } else {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'ClothWarpMode': -1, 'YAngle': -269.0, 'Position': [-126.0999984741211, 103.87999725341797, 10.069999694824219]})
        EventSystemActor[NaviWait].EventWait({'Frames': 30, 'IsWaitEnd': True})
        Npc_Navi.EventNaviMoveAtPos({'IsWaitEnd': True, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtOffsetBase': 0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'OverwriteRotNearDist': -1.0, 'IsLookAtObject': True, 'IsTurnLooking': True, 'ASCommand': 'Wait', 'LookAtTarget': 4, 'DecSpeedDistance': 2.0, 'MoveSpeed': 2.5999999046325684, 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtDirection': -269.0, 'LookAtPosOffset': [100.0, 0.0, 0.0], 'WorldPos': [-126.0999984741211, 95.86000061035156, 10.069999694824219]})
        Npc_Navi.EventNaviRequestLookAtTheFront({'IsWaitEnd': True})
    }
}
