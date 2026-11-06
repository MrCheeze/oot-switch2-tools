-------- EventFlow: AppearPierre_ByScarecrowSong --------

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint']
queries: ['EventQueryCameraCheckRayCastForMoveToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayerTurnAndLook', 'EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetActor', 'EventTriggerSetTimerInvalidAttentionLockOn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Pierre_CallOcarina[SCARECROW_LAKE_HYLIA_01]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Pierre_CallOcarina[SCARECROW_LAKE_HYLIA_03]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Pierre_CallOcarina[SCARECROW_LAKE_HYLIA_02]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Pierre_CallOcarina[SCARECROW_ZORA_FOUNTAIN_01]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Pierre_CallOcarina[SCARECROW_SACRED_FOREST_MEADOW_01]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Pierre_CallOcarina[SCARECROW_DEATH_MOUNTAIN_CRATER_01]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Pierre_CallOcarina[SCARECROW_DEATH_MOUNTAIN_CRATER_02]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Pierre_CallOcarina[SCARECROW_GERUDO_FORTRESS_01]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Pierre_CallOcarina[SCARECROW_DODONGO_CAVERN_01]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Pierre_CallOcarina[SCARECROW_FIRE_TEMPLE_01]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Pierre_CallOcarina[SCARECROW_WATER_TEMPLE_01]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Pierre_CallOcarina[SCARECROW_FOREST_TEMPLE_01]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Pierre_CallOcarina[SCARECROW_SHADOW_TEMPLE_01]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Pierre_CallOcarina[SCARECROW_SHADOW_TEMPLE_02]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Pierre_CallOcarina[SCARECROW_GERUDO_TRAINING_GROUND_01]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Pierre_CallOcarina[SCARECROW_SPIRIT_TEMPLE_01]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviRequestBallonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: ['EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Pierre_CallOcarina[AppearPierre_00(Npc_Pierre_CallOcarina)]
entrypoint: AppearPierre_00(Npc_Pierre_CallOcarina)
actions: ['EventTriggerParticipateEvent', 'EventTriggerSetModelLodManual', 'EventTriggerBalloonMessage']
queries: []
params: None

Actor: Npc_Pierre_CallOcarina[Camera_Care(Npc_Pierre_CallOcarina)]
entrypoint: Camera_Care(Npc_Pierre_CallOcarina)
actions: []
queries: []
params: None

void AppearPierre_00() {
    Player_Event.EventTriggerParticipateEvent()

    call AppearPierre_FlagReset()

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    } {
        EventCamera.EventTriggerCameraSavePoint()
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})
    }


    fork {

        call Camera_Care({'Npc_Pierre_CallOcarina': 'Npc_Pierre_CallOcarina', 'Arg': 'Arg', 'GameDataName': 'GameDataName'})

    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'Wait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    }

    Npc_Pierre_CallOcarina[AppearPierre_00(Npc_Pierre_CallOcarina)].EventTriggerParticipateEvent()
    Npc_Pierre_CallOcarina[AppearPierre_00(Npc_Pierre_CallOcarina)].EventTriggerSetModelLodManual({'LodLevel': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    Player_Event.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Pierre_CallOcarina', 'InstanceName': 'Arg', 'KeepTalkWait': False, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})

    call NaviEventCommon.NaviMove_PlayerHomePos({'IsLookAtPlayer': False, 'IsUseDisguiseSpeakerPos': False})

    Npc_Pierre_CallOcarina[AppearPierre_00(Npc_Pierre_CallOcarina)].EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_Pierre:HookShotTerror_01', 'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'DisplayFrame': 180})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 1.0})
    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HavePlayedNaviBalloonMessage.type416', 'Index': -1}) {
        Npc_Navi.EventNaviRequestBallonMessage({'Index': 416})
    }
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorName': 'PlayerCamera', 'ActorInstanceName': ''}) {
        Player_Event.EventTriggerSetTimerInvalidAttentionLockOn({'Frame': 90.0})
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
    } else {
        Player_Event.EventTriggerSetTimerInvalidAttentionLockOn({'Frame': 90.0})
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 3.0})
    }
}

void AppearPierre_LakeHylia_01() {

    call AppearPierre_00({'Arg': 'SCARECROW_LAKE_HYLIA_01', 'Npc_Pierre_CallOcarina': ActorIdentifier(name="Npc_Pierre_CallOcarina", sub_name="SCARECROW_LAKE_HYLIA_01"), 'GameDataName': 'Appear_SCARECROW_LAKE_HYLIA_01'})

}

void AppearPierre_LakeHylia_02() {

    call AppearPierre_00({'Arg': 'SCARECROW_LAKE_HYLIA_02', 'Npc_Pierre_CallOcarina': ActorIdentifier(name="Npc_Pierre_CallOcarina", sub_name="SCARECROW_LAKE_HYLIA_02"), 'GameDataName': 'Appear_SCARECROW_LAKE_HYLIA_02'})

}

void AppearPierre_LakeHylia_03() {

    call AppearPierre_00({'Arg': 'SCARECROW_LAKE_HYLIA_03', 'Npc_Pierre_CallOcarina': ActorIdentifier(name="Npc_Pierre_CallOcarina", sub_name="SCARECROW_LAKE_HYLIA_03"), 'GameDataName': 'Appear_SCARECROW_LAKE_HYLIA_03'})

}

void AppearPierre_ZoraFountain_01() {

    call AppearPierre_00({'Arg': 'SCARECROW_ZORA_FOUNTAIN_01', 'Npc_Pierre_CallOcarina': ActorIdentifier(name="Npc_Pierre_CallOcarina", sub_name="SCARECROW_ZORA_FOUNTAIN_01"), 'GameDataName': 'Appear_SCARECROW_ZORA_FOUNTAIN_01'})

}

void AppearPierre_SacredForestMeadow_01() {

    call AppearPierre_00({'Arg': 'SCARECROW_SACRED_FOREST_MEADOW_01', 'Npc_Pierre_CallOcarina': ActorIdentifier(name="Npc_Pierre_CallOcarina", sub_name="SCARECROW_SACRED_FOREST_MEADOW_01"), 'GameDataName': 'Appear_SCARECROW_SACRED_FOREST_MEADOW_01'})

}

void AppearPierre_DeathMountainCrater_01() {

    call AppearPierre_00({'Arg': 'SCARECROW_DEATH_MOUNTAIN_CRATER_01', 'Npc_Pierre_CallOcarina': ActorIdentifier(name="Npc_Pierre_CallOcarina", sub_name="SCARECROW_DEATH_MOUNTAIN_CRATER_01"), 'GameDataName': 'Appear_SCARECROW_DEATH_MOUNTAIN_CRATER_01'})

}

void AppearPierre_DeathMountainCrater_02() {

    call AppearPierre_00({'Arg': 'SCARECROW_DEATH_MOUNTAIN_CRATER_02', 'Npc_Pierre_CallOcarina': ActorIdentifier(name="Npc_Pierre_CallOcarina", sub_name="SCARECROW_DEATH_MOUNTAIN_CRATER_02"), 'GameDataName': 'Appear_SCARECROW_DEATH_MOUNTAIN_CRATER_02'})

}

void AppearPierre_GerudoFortress_01() {

    call AppearPierre_00({'Arg': 'SCARECROW_GERUDO_FORTRESS_01', 'Npc_Pierre_CallOcarina': ActorIdentifier(name="Npc_Pierre_CallOcarina", sub_name="SCARECROW_GERUDO_FORTRESS_01"), 'GameDataName': 'Appear_SCARECROW_GERUDO_FORTRESS_01'})

}

void AppearPierre_DodongoCavern_01() {

    call AppearPierre_00({'Arg': 'SCARECROW_DODONGO_CAVERN_01', 'GameDataName': 'Appear_SCARECROW_DODONGO_CAVERN_01', 'Npc_Pierre_CallOcarina': ActorIdentifier(name="Npc_Pierre_CallOcarina", sub_name="SCARECROW_DODONGO_CAVERN_01")})

}

void AppearPierre_ForestTemple_01() {

    call AppearPierre_00({'Arg': 'SCARECROW_FOREST_TEMPLE_01', 'Npc_Pierre_CallOcarina': ActorIdentifier(name="Npc_Pierre_CallOcarina", sub_name="SCARECROW_FOREST_TEMPLE_01"), 'GameDataName': 'Appear_SCARECROW_FOREST_TEMPLE_01'})

}

void AppearPierre_FireTemple_01() {

    call AppearPierre_00({'Arg': 'SCARECROW_FIRE_TEMPLE_01', 'Npc_Pierre_CallOcarina': ActorIdentifier(name="Npc_Pierre_CallOcarina", sub_name="SCARECROW_FIRE_TEMPLE_01"), 'GameDataName': 'Appear_SCARECROW_FIRE_TEMPLE_01'})

}

void AppearPierre_WaterTemple_01() {

    call AppearPierre_00({'Arg': 'SCARECROW_WATER_TEMPLE_01', 'Npc_Pierre_CallOcarina': ActorIdentifier(name="Npc_Pierre_CallOcarina", sub_name="SCARECROW_WATER_TEMPLE_01"), 'GameDataName': 'Appear_SCARECROW_WATER_TEMPLE_01'})

}

void AppearPierre_ShadowTemple_01() {

    call AppearPierre_00({'Arg': 'SCARECROW_SHADOW_TEMPLE_01', 'Npc_Pierre_CallOcarina': ActorIdentifier(name="Npc_Pierre_CallOcarina", sub_name="SCARECROW_SHADOW_TEMPLE_01"), 'GameDataName': 'Appear_SCARECROW_SHADOW_TEMPLE_01'})

}

void AppearPierre_ShadowTemple_02() {

    call AppearPierre_00({'Arg': 'SCARECROW_SHADOW_TEMPLE_02', 'GameDataName': 'Appear_SCARECROW_SHADOW_TEMPLE_02', 'Npc_Pierre_CallOcarina': ActorIdentifier(name="Npc_Pierre_CallOcarina", sub_name="SCARECROW_SHADOW_TEMPLE_02")})

}

void AppearPierre_GerudoTrainingGround_01() {

    call AppearPierre_00({'Arg': 'SCARECROW_GERUDO_TRAINING_GROUND_01', 'Npc_Pierre_CallOcarina': ActorIdentifier(name="Npc_Pierre_CallOcarina", sub_name="SCARECROW_GERUDO_TRAINING_GROUND_01"), 'GameDataName': 'Appear_SCARECROW_GERUDO_TRAINING_GROUND_01'})

}

void AppearPierre_SpiritTemple_01() {

    call AppearPierre_00({'Arg': 'SCARECROW_SPIRIT_TEMPLE_01', 'Npc_Pierre_CallOcarina': ActorIdentifier(name="Npc_Pierre_CallOcarina", sub_name="SCARECROW_SPIRIT_TEMPLE_01"), 'GameDataName': 'Appear_SCARECROW_SPIRIT_TEMPLE_01'})

}

void AppearPierre_FlagReset() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Appear_SCARECROW_LAKE_HYLIA_01', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Appear_SCARECROW_LAKE_HYLIA_02', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Appear_SCARECROW_LAKE_HYLIA_03'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Appear_SCARECROW_ZORA_FOUNTAIN_01'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Appear_SCARECROW_SACRED_FOREST_MEADOW_01'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Appear_SCARECROW_DEATH_MOUNTAIN_CRATER_01'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Appear_SCARECROW_DEATH_MOUNTAIN_CRATER_02'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Appear_SCARECROW_GERUDO_FORTRESS_01'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Appear_SCARECROW_DODONGO_CAVERN_01'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Appear_SCARECROW_FOREST_TEMPLE_01'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Appear_SCARECROW_FIRE_TEMPLE_01'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Appear_SCARECROW_WATER_TEMPLE_01'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Appear_SCARECROW_SHADOW_TEMPLE_01'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Appear_SCARECROW_SHADOW_TEMPLE_02'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Appear_SCARECROW_GERUDO_TRAINING_GROUND_01'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Appear_SCARECROW_SPIRIT_TEMPLE_01'})
}

void Camera_Care() {
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Npc_Pierre_CallOcarina', 'InstanceNameA': 'Arg', 'ActorNameB': 'Player_Event', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'CheckDistance': 1.5}) {
        Event90:

        fork {
            EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'FovySetType': 0, 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVectorSetType': 4, 'Actor2ActorName': 'Npc_Pierre_CallOcarina', 'Actor2InstanceName': 'Arg', 'IsWaitEnd': True, 'PosVectorSetType': 3, 'CameraCollisionLookAtActor': 2, 'IsIgnorePosVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionMode': 2, 'MoveTotargetPosType': 1, 'Actor1ActorName': 'Npc_Pierre_CallOcarina', 'Actor1InstanceName': 'Arg', 'PosVector': [-1.0, 1.5, 2.0], 'AtVector': [0.0, 1.5, 0.0], 'CameraCollisionLookAtActorOffset': [-1.0, 1.5, 2.0], 'LookAtDis': -1.0, 'EnableCameraAlpha': True, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'IsEnableRevertFast': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GameDataName'})
        } {
            Player_Event.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Npc_Pierre_CallOcarina', 'InstanceName': 'Arg', 'OffsetBase': 1, 'YAngle': 180.0, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'IsWaitEnd': True, 'PositionOffset': [0.0, 0.0, 1.2000000476837158]})

            call NaviEventCommon.NaviWarp_PlayerHomePos({'IsLookAtPlayer': False})

        } {

            call Common_Camera_Pln.CameraDoF_Default()

        } {

            call Dm_SY_Ocarina.PaletteRelease_ScreenCap()

        }

    } else
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Npc_Pierre_CallOcarina', 'InstanceNameA': 'Arg', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'ActorNameB': 'EventCamera', 'CheckDistance': 2.0999999046325684}) {
        goto Event90
    } else
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'Npc_Pierre_CallOcarina', 'ActorInstanceName': 'Arg', 'VectorSetType': 3, 'Vector': [0.0, 1.2000000476837158, 0.0], 'IsIgnoreVectorReferenceActorRot': False}) {
        Event15:
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GameDataName'})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})

        fork {
            EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'FovySetType': 0, 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVectorSetType': 4, 'Actor2ActorName': 'Npc_Pierre_CallOcarina', 'Actor2InstanceName': 'Arg', 'IsWaitEnd': True, 'PosVectorSetType': 3, 'CameraCollisionLookAtActor': 2, 'IsIgnorePosVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTotargetPosType': 1, 'Actor1ActorName': 'Npc_Pierre_CallOcarina', 'Actor1InstanceName': 'Arg', 'LookAtDis': -1.0, 'AtVector': [0.0, 1.2000000476837158, 0.0], 'CameraCollisionLookAtActorOffset': [0.0, 2.0, 2.0], 'PosVector': [0.0, 1.2000000476837158, 2.5], 'EnableCameraAlpha': True, 'CameraCollisionMode': 0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'MoveTime': 0, 'IsEnableRevertFast': False})
        } {

            call Common_Camera_Pln.CameraDoF_Default()

        } {

            call Dm_SY_Ocarina.PaletteRelease_ScreenCap()

        }

    } else
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'Npc_Pierre_CallOcarina', 'ActorInstanceName': 'Arg', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 1, 'Vector': [0.0, 0.5, 0.0]}) {
        goto Event15
    } else {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'FovySetType': 0, 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVectorSetType': 4, 'Actor2ActorName': 'Npc_Pierre_CallOcarina', 'Actor2InstanceName': 'Arg', 'IsWaitEnd': True, 'CameraCollisionLookAtActor': 2, 'IsIgnorePosVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTotargetPosType': 1, 'Actor1ActorName': 'Npc_Pierre_CallOcarina', 'Actor1InstanceName': 'Arg', 'IsPosVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'AtVector': [0.0, 1.2000000476837158, 0.0], 'PosVectorSetType': 1, 'PosVector': [0.0, 0.5, 0.0], 'MoveTime': 60, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'EnableCameraAlpha': True, 'IsAtVectorReferenceActorPosOnce': True, 'IsEnableRevertFast': False})
        } {

            call Common_Camera_Pln.CameraDoF_Default()

        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})

            call Dm_SY_Ocarina.PaletteRelease_ScreenCap()

        }

        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GameDataName'})
    }
}
