-------- EventFlow: Goto_WaterTemple --------

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerOpenLocationUI']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerTurnAndLook', 'EventPlayerMoveToAnchor', 'EventTriggerPlayerEventStartWithRolling', 'EventPlayerWarpToStarterLinkAnchor']
queries: ['EventQueryPlayerIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviFollowPlayer', 'EventNaviRequestBallonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Dm_Locator[HomePosition]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[UI]
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

Actor: EventSystemActor[Player]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DM:PlayerSE下げ(初回突入デモ)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})

    fork {
        Dm_Locator[HomePosition].EventWarpToTargetPosAndRot({'YAngle': 180.0, 'IsWaitEnd': True, 'Position': [-4.519999980926514, 120.0, 21.239999771118164], 'ClothWarpMode': -1})
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsWaitEnd': True, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'HomePosition', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 52.0, 'PosVector': [0.0, 3.930000066757202, -0.550000011920929], 'AtVector': [0.0, 3.9800000190734863, 9.920000076293945], 'StartAccelerateRate': 0.0, 'MoveTime': 155, 'IsEnableRevertFast': False})
    } {
        EventSystemActor[UI].EventWait({'IsWaitEnd': True, 'Frames': 85})
        UISystemActor.EventTriggerOpenLocationUI({'LocationName': 'Work/Location/WaterTemple.game__location__Location.gyml'})
        EventSystemActor[UI].EventWait({'IsWaitEnd': True, 'Frames': 500})
    } {
        Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': True, 'offset': [0.0, 0.0, 0.0], 'IsNearOffset': True, 'IsHomePosition': True, 'Speed': -1.0, 'OffsetType': -1})
    } {
        Player_Event.EventTriggerPlayerEventStartWithRolling()
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorName': 'Armor_Adult_HeavyBoot', 'ArmorSlot': 2}) {
            Player_Event.EventPlayerMoveToAnchor({'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'Dm_Goto_WaterTemple_Pos', 'IsKeepSpeed': True, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsMoveAnchorFrontDir': False, 'MoveSpeed': 0.10000000149011612, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': True, 'ApplySlowMove': True, 'DecSpeedDistance': 4.5, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0, 'IsWaitEnd': False})
            EventSystemActor[Player].EventWait({'IsWaitEnd': True, 'Frames': 180})
            Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'Dm_Goto_WaterTemple_Pos', 'NotChangeRot': False, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'IsWaitEnd': True})
            Player_Event.EventPlayerTurnAndLook({'TurnFaceControlType': 0, 'WorldPos': [-4.572000026702881, 121.03299713134766, 1.0609999895095825], 'IsWaitEnd': True, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'SlowTurn': True, 'UseNormalTurn': False, 'IsDoNavi': False})
        } else {
            Player_Event.EventPlayerMoveToAnchor({'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'Dm_Goto_WaterTemple_Pos', 'IsKeepSpeed': True, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsMoveAnchorFrontDir': False, 'MoveSpeed': 0.10000000149011612, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': True, 'IsWaitEnd': True, 'ApplySlowMove': True, 'DecSpeedDistance': 4.5, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0})
            Player_Event.EventPlayerTurnAndLook({'TurnFaceControlType': 0, 'WorldPos': [-4.572000026702881, 121.03299713134766, 1.0609999895095825], 'IsWaitEnd': True, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'SlowTurn': True, 'UseNormalTurn': False, 'IsDoNavi': False})
        }
    }

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
    Npc_Navi.EventNaviRequestBallonMessage({'Index': 402})
    PostProcessingActor.EventNorifyCutChangeForGraphics()
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DM:PlayerSE下げ(初回突入デモ)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
}
