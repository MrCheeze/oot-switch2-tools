-------- EventFlow: Goto_SpiritTemple --------

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerOpenLocationUI', 'EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerMove', 'EventPlayerWarpToTargetPosAndRot']
queries: ['EventQueryPlayerIsChild']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventNaviFollowPlayer', 'EventNaviRequestBallonMessage']
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

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DM:PlayerSE下げ(初回突入デモ)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    if !Player_Event.EventQueryPlayerIsChild() {

        fork {
            Dm_Locator[HomePosition].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [0.0, 100.0, 8.039999961853027], 'YAngle': 180.0, 'ClothWarpMode': -1})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVectorSetType': 3, 'PosVectorSetType': 3, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveTime': 0, 'Actor1InstanceName': 'HomePosition', 'Actor1ActorName': 'Dm_Locator', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [0.800000011920929, 0.800000011920929, -3.5], 'AtVector': [0.6499999761581421, 0.800000011920929, 0.5], 'IsEnableRevertFast': False})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'HomePosition', 'AtVector': [0.0, 2.5, 10.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [0.0, 2.0399999618530273, 6.239999771118164], 'MoveTime': 220, 'StartAccelerateRate': 0.0, 'IsEnableRevertFast': False})
        } {
            UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 2})
        } {
            EventSystemActor[UI].EventWait({'IsWaitEnd': True, 'Frames': 140})
            UISystemActor.EventTriggerOpenLocationUI({'LocationName': 'Work/Location/SpiritTemple.game__location__Location.gyml'})
            EventSystemActor[UI].EventWait({'IsWaitEnd': True, 'Frames': 500})
        } {
            Player_Event.EventPlayerWarpToTargetPosAndRot({'YAngle': 180.0, 'ASCommand': 'EvtWait', 'UseDemoWait': False, 'IsWaitEnd': True, 'Position': [0.0, 100.25, 8.699999809265137], 'ClothWarpMode': 0, 'EnableInAir': False})
            Player_Event.EventPlayerMove({'IsWaitEnd': True, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'MoveSpeed': 0.10000000149011612, 'IsInertiaMove': False, 'IsContinueMoveAnimeAfterFinish': False, 'ApplySlowMove': True, 'DecSpeedDistance': 0.10000000149011612, 'WorldPos': [0.0, 100.25, 7.0]})
            Player_Event.EventPlayerWarpToTargetPosAndRot({'YAngle': 180.0, 'ASCommand': 'EvtWait', 'UseDemoWait': False, 'IsWaitEnd': True, 'Position': [0.0, 100.25, 7.670000076293945], 'ClothWarpMode': 0, 'EnableInAir': False})
        } {
            Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'ClothWarpMode': -1, 'YAngle': -90.0, 'Position': [0.4000000059604645, 101.25, 9.100000381469727]})
            Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': True, 'offset': [0.0, 0.0, 0.0], 'IsNearOffset': True, 'IsHomePosition': True, 'Speed': -1.0, 'OffsetType': -1})
        }

    } else {

        fork {
            Dm_Locator[HomePosition].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 180.0, 'ClothWarpMode': -1, 'Position': [0.0, 100.0, 8.09000015258789]})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVectorSetType': 3, 'PosVectorSetType': 3, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveTime': 0, 'Actor1InstanceName': 'HomePosition', 'Actor1ActorName': 'Dm_Locator', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [0.800000011920929, 1.100000023841858, -3.5], 'AtVector': [0.6499999761581421, 1.100000023841858, 0.5], 'IsEnableRevertFast': False})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'HomePosition', 'AtVector': [0.0, 2.5, 10.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [0.0, 2.0399999618530273, 6.239999771118164], 'MoveTime': 220, 'StartAccelerateRate': 0.0, 'IsEnableRevertFast': False})
        } {
            UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 2})
        } {
            EventSystemActor[UI].EventWait({'IsWaitEnd': True, 'Frames': 140})
            UISystemActor.EventTriggerOpenLocationUI({'LocationName': 'Work/Location/SpiritTemple.game__location__Location.gyml'})
            EventSystemActor[UI].EventWait({'IsWaitEnd': True, 'Frames': 500})
        } {
            Player_Event.EventPlayerWarpToTargetPosAndRot({'YAngle': 180.0, 'ASCommand': 'EvtWait', 'UseDemoWait': False, 'IsWaitEnd': True, 'ClothWarpMode': 0, 'EnableInAir': False, 'Position': [0.0, 100.25, 8.800000190734863]})
            Player_Event.EventPlayerMove({'IsWaitEnd': True, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsInertiaMove': False, 'IsContinueMoveAnimeAfterFinish': False, 'ApplySlowMove': True, 'DecSpeedDistance': 0.10000000149011612, 'MoveSpeed': 0.10000000149011612, 'WorldPos': [0.0, 100.25, 6.5]})
            Player_Event.EventPlayerWarpToTargetPosAndRot({'YAngle': 180.0, 'ASCommand': 'EvtWait', 'UseDemoWait': False, 'IsWaitEnd': True, 'Position': [0.0, 100.25, 7.670000076293945], 'ClothWarpMode': 0, 'EnableInAir': False})
        } {
            Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 180.0, 'ClothWarpMode': -1, 'Position': [0.4000000059604645, 101.91999816894531, 9.199999809265137]})
            Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': True, 'offset': [0.0, 0.0, 0.0], 'IsNearOffset': True, 'IsHomePosition': True, 'Speed': -1.0, 'OffsetType': -1})
        }

    }
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DM:PlayerSE下げ(初回突入デモ)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
    Npc_Navi.EventNaviRequestBallonMessage({'Index': 406})
}
