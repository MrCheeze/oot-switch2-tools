-------- EventFlow: Goto_ZoraRiver --------

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerOpenLocationUI', 'EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToStarterLinkAnchor', 'EventPlayerMove']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviFollowPlayer', 'EventNaviRequestBallonMessage', 'EventNaviWarpToPlayerHomePosition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Dm_Locator[HomePosition]
entrypoint: None()
actions: ['EventDmLocatorWarpToStarterLinkAnchor']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: EventSystemActor[UI]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Navi]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DM:PlayerSE下げ(初回突入デモ)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})

    fork {
        Dm_Locator[HomePosition].EventDmLocatorWarpToStarterLinkAnchor({'IsWaitEnd': True, 'ActorName': 'StartPos', 'InstanceName': 'ZoraRiver_Entrance', 'NotChangeRot': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVectorSetType': 3, 'PosVectorSetType': 3, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveTime': 0, 'Actor1InstanceName': 'HomePosition', 'Actor1ActorName': 'Dm_Locator', 'PosVector': [-0.30000001192092896, 0.5, -1.7999999523162842], 'AtVector': [-0.30000001192092896, 0.5, 0.30000001192092896], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'HomePosition', 'PosVector': [-2.2899999618530273, 8.350000381469727, 10.34000015258789], 'AtVector': [-0.550000011920929, 6.53000020980835, 17.389999389648438], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 340, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 2})
    } {
        EventSystemActor[UI].EventWait({'IsWaitEnd': True, 'Frames': 180})
        UISystemActor.EventTriggerOpenLocationUI({'LocationName': 'Work/Location/ZoraRiver.game__location__Location.gyml'})
        EventSystemActor[UI].EventWait({'IsWaitEnd': True, 'Frames': 500})
    } {
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'StartPos', 'InstanceName': 'ZoraRiver_Entrance', 'NotChangeRot': False, 'ASCommand': 'EvtWait', 'IsWaitEnd': True, 'UseDemoWait': False})
        Player_Event.EventPlayerMove({'IsWaitEnd': True, 'DecSpeedDistance': 2.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'MoveSpeed': 0.25, 'IsSheathed': False, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'WorldPos': [-88.2699966430664, 96.73999786376953, 23.350000381469727], 'IsInertiaMove': False, 'IsContinueMoveAnimeAfterFinish': False, 'ApplySlowMove': False})
    } {
        EventSystemActor[Navi].EventWait({'IsWaitEnd': True, 'Frames': 1})
        Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': False, 'Type': 0, 'IsNearOffset': False, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
        Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': True, 'offset': [0.0, 0.0, 0.0], 'IsNearOffset': True, 'IsHomePosition': True, 'Speed': -1.0, 'OffsetType': -1})
    }

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
    Npc_Navi.EventNaviRequestBallonMessage({'Index': 384})
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DM:PlayerSE下げ(初回突入デモ)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
    PostProcessingActor.EventNorifyCutChangeForGraphics()
}
