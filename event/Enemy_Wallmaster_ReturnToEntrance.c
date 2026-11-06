-------- EventFlow: Enemy_Wallmaster_ReturnToEntrance --------

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTraverseAroundAndWaitCreateActor', 'EventChangeDungeonRoom', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToDungeonEntrance', 'EventPlayerStopInAir', 'EventPlayerFreeMove', 'EventTriggerPlayerEventStartWithDrawn', 'EventPlayerUnequip', 'EventPlayerImmediateRagdollDown', 'EventTriggerPlayerEventStartWithRestraint']
queries: ['EventQueryPlayerIsChild']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventBasedOnLookAtCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Enemy_Wallmaster[ForestTemple_Room07]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Wallmaster[ForestTemple_Room11]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Wallmaster[ForestTemple_Room19]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Wallmaster[BottomOfTheWell_Room01]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Wallmaster[BottomOfTheWell_Room06]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Wallmaster[BottomOfTheWell_Room09]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Wallmaster[ShadowTemple_Room12]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Wallmaster[SpiritTemple_Room04]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Wallmaster[SpiritTemple_Room07]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Wallmaster[SpiritTemple_Room09]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Wallmaster[SpiritTemple_Room18_01]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Wallmaster[SpiritTemple_Room18_02]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Wallmaster[SpiritTemple_Room18_03]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Wallmaster[InsideGanonCastle_Room15]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Wallmaster
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Wallmaster[WallmasterSpritTemple19]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Wallmaster[Wallmaster01InsideGanonCastle17]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Wallmaster[Wallmaster02InsideGanonCastle17]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Wallmaster[Wallmaster03InsideGanonCastle17]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventSoundReleaseDucking', 'EventTriggerSoundBeginForbidScreenDucking', 'EventTriggerSoundEndForbidScreenDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Wallmaster[ReturnToEntrance(Enemy_Wallmaster)]
entrypoint: ReturnToEntrance(Enemy_Wallmaster)
actions: ['EventTriggerParticipateEvent', 'EventWallmasterRisingMove', 'EventGoOffstageForUser']
queries: []
params: None

void ReturnToEntrance() {
    SoundSystemActor.EventTriggerSoundBeginForbidScreenDucking({'CommandLife': 0})
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:WorldSEミュート(奈落)', 'CommandLife': 2, 'DuckingName2': '', 'DuckingName3': ''})
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerPlayerEventStartWithRestraint()
    Enemy_Wallmaster[ReturnToEntrance(Enemy_Wallmaster)].EventTriggerParticipateEvent()

    fork {
        Enemy_Wallmaster[ReturnToEntrance(Enemy_Wallmaster)].EventWallmasterRisingMove({'IsWaitEnd': False})
    } {
        if !Player_Event.EventQueryPlayerIsChild() {
            EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'Player_Event', 'LookAtVectorXZ': 0, 'LookAtVectorY': 1, 'TargetActorInstanceName': '', 'ToleranceYDownwardAngle': -5.0, 'TargetOffset': [0.0, 1.2000000476837158, 0.0], 'MoveTime': 15, 'ToleranceXZAngle': 15.0, 'ToleranceYUpwardAngle': 0.0, 'ToleranceDistance': 2.0, 'IdealDistance': 6.0})
        } else {
            EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'Player_Event', 'LookAtVectorXZ': 0, 'LookAtVectorY': 1, 'TargetActorInstanceName': '', 'ToleranceXZAngle': 10.0, 'ToleranceYDownwardAngle': -5.0, 'TargetOffset': [0.0, 1.5, 0.0], 'MoveTime': 15, 'ToleranceYUpwardAngle': 5.0, 'ToleranceDistance': 2.0, 'IdealDistance': 7.0})
        }

        fork {
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 1, 'AtVectorSetType': 3, 'IsWaitEnd': False, 'MoveTime': 60, 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 1.0, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 'Frames'})
            UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 3})
        }

    }

    Enemy_Wallmaster[ReturnToEntrance(Enemy_Wallmaster)].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Player_Event.EventPlayerWarpToDungeonEntrance({'IsWaitEnd': True})

    fork {
        GameSystemActor.EventChangeDungeonRoom({'IsWaitEnd': True, 'ChangeRoomID': 0})
        GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    } {
        Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'AtVector': [0.0, 0.5, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [0.0, 1.7999999523162842, -4.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }

    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    Player_Event.EventPlayerFreeMove({'IsWaitEnd': True, 'PositionType': 1, 'Pos': [0.0, 3.0, 0.0], 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'InitialVelocity': 0.0, 'AccelerationDistance': 0.0, 'DecelerationDistance': 0.0, 'IsCalcAngularVelocity': False, 'RotationType': 0, 'RotParam': 0.0, 'RotTargetDeg': 0.0, 'TargetVelocity': 0.10000000149011612, 'ASKeyName': 'SlippingDown', 'IsKeepAnm': True})
    Player_Event.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': True})
    SoundSystemActor.EventTriggerSoundEndForbidScreenDucking()
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'Dm:WorldSEミュート(奈落)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})

    fork {
        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 3})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player_Event.EventPlayerImmediateRagdollDown({'IsWaitEnd': True})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void ForestTemple_Room07() {

    call ReturnToEntrance({'Frames': 75, 'Enemy_Wallmaster': ActorIdentifier(name="Enemy_Wallmaster", sub_name="ForestTemple_Room07")})

}

void ForestTemple_Room11() {

    call ReturnToEntrance({'Enemy_Wallmaster': ActorIdentifier(name="Enemy_Wallmaster", sub_name="ForestTemple_Room11"), 'Frames': 55})

}

void ForestTemple_Room19() {

    call ReturnToEntrance({'Enemy_Wallmaster': ActorIdentifier(name="Enemy_Wallmaster", sub_name="ForestTemple_Room19"), 'Frames': 40})

}

void BottomOfTheWell_Room01() {

    call ReturnToEntrance({'Enemy_Wallmaster': ActorIdentifier(name="Enemy_Wallmaster", sub_name="BottomOfTheWell_Room01"), 'Frames': 30})

}

void BottomOfTheWell_Room06() {

    call ReturnToEntrance({'Enemy_Wallmaster': ActorIdentifier(name="Enemy_Wallmaster", sub_name="BottomOfTheWell_Room06"), 'Frames': 30})

}

void BottomOfTheWell_Room09() {

    call ReturnToEntrance({'Enemy_Wallmaster': ActorIdentifier(name="Enemy_Wallmaster", sub_name="BottomOfTheWell_Room09"), 'Frames': 30})

}

void ShadowTemple_Room12() {

    call ReturnToEntrance({'Enemy_Wallmaster': ActorIdentifier(name="Enemy_Wallmaster", sub_name="ShadowTemple_Room12"), 'Frames': 30})

}

void SpiritTemple_Room04() {

    call ReturnToEntrance({'Enemy_Wallmaster': ActorIdentifier(name="Enemy_Wallmaster", sub_name="SpiritTemple_Room04"), 'Frames': 40})

}

void SpiritTemple_Room07() {

    call ReturnToEntrance({'Enemy_Wallmaster': ActorIdentifier(name="Enemy_Wallmaster", sub_name="SpiritTemple_Room07"), 'Frames': 75})

}

void SpiritTemple_Room09() {

    call ReturnToEntrance({'Enemy_Wallmaster': ActorIdentifier(name="Enemy_Wallmaster", sub_name="SpiritTemple_Room09"), 'Frames': 75})

}

void SpiritTemple_Room18() {

    call ReturnToEntrance({'Enemy_Wallmaster': ActorIdentifier(name="Enemy_Wallmaster", sub_name="WallmasterSpritTemple19"), 'Frames': 75})

}

void SpiritTemple_Room18_01() {

    call ReturnToEntrance({'Enemy_Wallmaster': ActorIdentifier(name="Enemy_Wallmaster", sub_name="SpiritTemple_Room18_01"), 'Frames': 75})

}

void SpiritTemple_Room18_02() {

    call ReturnToEntrance({'Enemy_Wallmaster': ActorIdentifier(name="Enemy_Wallmaster", sub_name="SpiritTemple_Room18_02"), 'Frames': 75})

}

void SpiritTemple_Room18_03() {

    call ReturnToEntrance({'Enemy_Wallmaster': ActorIdentifier(name="Enemy_Wallmaster", sub_name="SpiritTemple_Room18_03"), 'Frames': 75})

}

void InsideGanonCastle_Room15() {

    call ReturnToEntrance({'Enemy_Wallmaster': ActorIdentifier(name="Enemy_Wallmaster", sub_name="InsideGanonCastle_Room15"), 'Frames': 40})

}

void InsideGanonCastle_Room17() {

    call ReturnToEntrance({'Enemy_Wallmaster': ActorIdentifier(name="Enemy_Wallmaster", sub_name="Wallmaster01InsideGanonCastle17"), 'Frames': 30})

}

void InsideGanonCastle_Room17_01() {

    call ReturnToEntrance({'Enemy_Wallmaster': ActorIdentifier(name="Enemy_Wallmaster", sub_name="Wallmaster02InsideGanonCastle17"), 'Frames': 30})

}

void InsideGanonCastle_Room17_02() {

    call ReturnToEntrance({'Enemy_Wallmaster': ActorIdentifier(name="Enemy_Wallmaster", sub_name="Wallmaster03InsideGanonCastle17"), 'Frames': 30})

}

void No_instanceName() {

    call ReturnToEntrance({'Frames': 75, 'Enemy_Wallmaster': ActorIdentifier(name="Enemy_Wallmaster")})

}
