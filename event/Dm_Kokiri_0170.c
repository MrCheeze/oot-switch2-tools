-------- EventFlow: Dm_Kokiri_0170 --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventPlayerPlayASForFlowchart']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_Kokiri_0170/Dm_Kokiri_0170_Player_Child/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_Kokiri_0170_Player_Child.root.as', 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventNaviMoveAtPos']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'UseEventModelAnime': 'Work/Model/Event/Dm_Kokiri_0170/Dm_Kokiri_0170_Npc_Navi/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_Kokiri_0170_Navi.root.as'}

Actor: Dm_Locator[position]
entrypoint: None()
actions: ['EventWarpToTargetActor', 'EventTriggerEmitXLink']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

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

void EntryPoint0() {

    fork {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'Position': [65.78199768066406, 112.6989974975586, -24.77199935913086], 'YAngle': 100.0, 'ClothWarpMode': 0, 'EnableInAir': False})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 100.0, 'ClothWarpMode': -1, 'Position': [65.73999786376953, 121.7699966430664, -24.34000015258789]})
    } {
        Dm_Locator[position].EventWarpToTargetActor({'IsWaitEnd': True, 'YAngle': 0.0, 'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 0, 'PositionOffset': [0.0, 0.0, 0.0], 'InstanceName': '', 'ClothWarpMode': -1})
    }


    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'position', 'PosVector': [-4.980000019073486, 2.2899999618530273, 0.6299999952316284], 'AtVector': [-0.17000000178813934, 2.4600000381469727, 0.029999999329447746], 'TargetFovy': 56.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 200, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'position', 'PosVector': [-4.980000019073486, 1.809999942779541, 0.6299999952316284], 'AtVector': [0.07000000029802322, 1.5299999713897705, -0.009999999776482582], 'TargetFovy': 56.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C01', 'ClothWarpMode': 0})
    } {
        UISystemActor.EventEventFadeIn({'Color': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1})
    } {
        Npc_Navi.EventNaviMoveAtPos({'IsWaitEnd': True, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtOffsetBase': 0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'LookAtDirection': 100.0, 'OverwriteRotNearDist': -1.0, 'IsLookAtObject': True, 'IsTurnLooking': True, 'LookAtTarget': 0, 'LookAtWorldPos': [103.0, 109.5, -29.6299991607666], 'DecSpeedDistance': 3.0, 'WorldPos': [65.70999908447266, 113.7699966430664, -24.34000015258789], 'MoveSpeed': 2.5999999046325684, 'ASCommand': 'Wait'})
    } {
        Dm_Locator[position].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_Kokiri_0170_WarpOut_01'})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C01', 'IsWaitEnd': False, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'ENTRY', 'IsIgnoreDucking': False})
    }

    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': False, 'IsKeepWithRelativePos': False, 'KeepManualModeFrame': 180.0, 'AfterKeepEndInterpolateCountScale': 3.0})
}
