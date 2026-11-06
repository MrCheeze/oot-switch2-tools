-------- EventFlow: Dm_LakeHrl_0035 --------

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetActor']
queries: ['EventQueryPlayerIsEquipWeapon']
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_LakeHrl_0035/Dm_LakeHrl_0035_Player_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_LakeHrl_0035_Player.root.as', 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventNaviMoveAtPos', 'EventNaviRequestLookAtTheFront']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Dm_Locator[pos]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1, 'IsWorld': True}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[Effect]
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Zora_009_Adult
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 3, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Zora_010_Adult
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 3, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Bonooru
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 3, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundStartSound', 'EventTriggerStopInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[GSA2]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: LastRiddenAnimal_ForEvent
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[NaviWait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 0, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})

    fork {
        Dm_Locator[pos].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-202.2899932861328, 131.75, 509.8299865722656], 'ClothWarpMode': -1})
    } {
        Dm_Locator[Effect].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-202.2899932861328, 131.75, 509.8299865722656], 'ClothWarpMode': -1})
    }

    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameB': 'LastRiddenAnimal_ForEvent', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'ActorNameA': 'Dm_Locator', 'InstanceNameA': 'pos', 'CheckDistance': 25.0}) {
        LastRiddenAnimal_ForEvent.EventWarpToTargetPosAndRot({'Position': [-198.0, 131.0, 507.0], 'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1})
    }
    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'Length': 1, 'Color': 1, 'IsNoPlayAnime': True})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'pos', 'PosVector': [-5.699999809265137, 1.3899999856948853, 8.0600004196167], 'AtVector': [0.07000000029802322, 2.5899999141693115, -0.10000000149011612], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 50.0, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'PositionOffset': [0.0, 0.0, 0.0], 'UseDemoWait': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'pos', 'OffsetBase': 1, 'YAngle': 140.0, 'ASCommand': 'EvtWait'})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C01', 'IsWaitEnd': True, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'UseAnmDriven': False, 'ClothWarpMode': 0})
    } {

        call Navi()

    } {
        Dm_Locator[Effect].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_LakeHrl_0035_WarpOut_01'})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C01', 'IsWaitEnd': False, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    } {

        fork {
            Npc_Zora_009_Adult.EventTriggerParticipateEvent()
        } {
            Npc_Zora_010_Adult.EventTriggerParticipateEvent()
        } {
            Npc_Bonooru.EventTriggerParticipateEvent()
        }

    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'ENTRY', 'IsIgnoreDucking': False})
    } {
        GameSystemActor[GSA2].EventWait({'IsWaitEnd': True, 'Frames': 30})
        UISystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'IsWaitEnd': True, 'Color': 1, 'Length': 1})
    }

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 4.0, 'CameraResetPolicy': 0})
}

void Navi() {
    if !Player_Event.EventQueryPlayerIsEquipWeapon({'ArmorName': 'Weapon_Sword_Biggoron', 'WeaponSlot': 0}) {
        Event33:
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'ClothWarpMode': -1, 'YAngle': 140.0, 'Position': [-202.08999633789062, 141.1699981689453, 510.2300109863281]})
        EventSystemActor[NaviWait].EventWait({'Frames': 30, 'IsWaitEnd': True})
        Npc_Navi.EventNaviMoveAtPos({'IsWaitEnd': True, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtOffsetBase': 0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'OverwriteRotNearDist': -1.0, 'IsLookAtObject': True, 'IsTurnLooking': True, 'ASCommand': 'Wait', 'DecSpeedDistance': 2.0, 'MoveSpeed': 2.5999999046325684, 'LookAtDirection': 140.0, 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtWorldPos': [-165.0, 138.0, 465.0], 'LookAtTarget': 0, 'WorldPos': [-202.08999633789062, 133.25, 510.2200012207031]})
        Npc_Navi.EventNaviRequestLookAtTheFront({'IsWaitEnd': True})
    } else
    if !Player_Event.EventQueryPlayerIsEquipWeapon({'WeaponSlot': 0, 'ArmorName': 'Weapon_Sword_BrokenGiant'}) {
        goto Event33
    } else
    if !Player_Event.EventQueryPlayerIsEquipWeapon({'WeaponSlot': 0, 'ArmorName': 'Weapon_Sword_Giant'}) {
        goto Event33
    } else {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'ClothWarpMode': -1, 'YAngle': 140.0, 'Position': [-202.7100067138672, 141.1699981689453, 509.69000244140625]})
        EventSystemActor[NaviWait].EventWait({'Frames': 30, 'IsWaitEnd': True})
        Npc_Navi.EventNaviMoveAtPos({'IsWaitEnd': True, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtOffsetBase': 0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'OverwriteRotNearDist': -1.0, 'IsLookAtObject': True, 'IsTurnLooking': True, 'ASCommand': 'Wait', 'DecSpeedDistance': 2.0, 'MoveSpeed': 2.5999999046325684, 'LookAtDirection': 140.0, 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtWorldPos': [-165.0, 138.0, 465.0], 'LookAtTarget': 0, 'WorldPos': [-202.7100067138672, 133.25, 509.69000244140625]})
        Npc_Navi.EventNaviRequestLookAtTheFront({'IsWaitEnd': True})
    }
}
