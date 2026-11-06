-------- EventFlow: Defeat_Ganon --------

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep', 'EventTriggerProgressChallengeStep', 'EventTriggerShowChallengeProgressUI', 'EventTriggerShowTimerUI', 'EventTriggerMiniGameTimerStart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: ['EventQueryIsEventSkipedMostRecent']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToStarterLinkAnchor', 'EventTriggerHealLifeMax', 'EventTriggerParticipateEvent', 'EventTriggerEquipmentUserRequestCreateStaticEquipment', 'EventTriggerPlayerHealMPMax', 'EventTriggerPlayerEventStartWithDrawn', 'EventPlayerStopInAir', 'EventPlayerUnequip', 'EventPlayerTurnAndLook', 'EventPlayerMoveToOffsetAnchor', 'EventPlayerWarpToTargetPosAndRot', 'EventTriggerPlayerEventStartWithClimb', 'EventPlayerSlowWalkStop', 'EventTriggerPlayerLookAtObject', 'EventPlayerMoveToAnchor', 'EventTriggerPlayerWarpToStarterLinkAnchor', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerContinueWalk', 'EventTriggerPlayerEventStartWithRolling', 'EventTriggerSetTimerInvalidAttentionLockOn', 'EventGoOffstageForUser']
queries: ['EventQueryCheckPlayerState', 'EventQueryPlayerIsEquipWeapon']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerAddOrSubGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerPauseMgrRequestPause', 'EventSetEventResult', 'EventReserveBancChange', 'EventEnterGameSafetySection', 'EventSaveAndWaitTemporarySave', 'EventChangeDungeonRoom', 'EventTriggerLeaveGameSafetySection', 'EventTriggerRequestAutoSave', 'EventWait', 'EventWaitForActorPresence', 'EventTraverseAroundAndWaitCreateActor', 'EventRemoveAllDroppedItemActors', 'EventTriggerBancRequestBeforehandLoad', 'EventRemoveProjectiles']
queries: ['EventQueryIsRecommendedMelody', 'EventQueryIsDreamWorld', 'EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventLoadingFadeOut', 'EventEventFadeIn', 'EventEventFadeOut', 'EventDeleteStaffRoll', 'EventTriggerRequestLoadStaffRollTable']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerRemoveWeaponKeepSheath']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventMoveToTargetPosCamera', 'EventTriggerRequestCameraShake', 'EventChangeTemporarilyToPlayerCamera', 'EventMoveCameraToSavePoint', 'EventTriggerCameraSavePoint']
queries: ['EventQueryCameraCheckRayCastForMoveToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Enemy_DungeonBoss_Ganondorf
entrypoint: None()
actions: ['EventTriggerDeathSignal', 'EventWarpToTargetPosAndRot', 'EventDoNothing', 'EventSetBattlePresentationOnPreState']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_DungeonBoss_Ganon_SecondHalfBattle
entrypoint: None()
actions: ['EventTriggerDeathSignal']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_DungeonBoss_Ganon
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventWarpToTargetPosAndRot', 'EventSetBattlePresentationOnPreState']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventWarpToTargetActor', 'EventNaviWarpToPlayerHomePosition', 'EventNaviRequestBallonMessage', 'EventWarpToTargetPosAndRot', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['Event_ResetChangeWindSpeedForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool', 'EventTriggerSetEventBoolEX1']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: WorldMgrThunderMgr
entrypoint: None()
actions: ['EventTriggerWmThunderMgrSetIsUpdate', 'EventTriggerWorldMgrThunderMgrChangePatternKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle', 'EventTriggerStopInGameBgm', 'EventTriggerStartInGameBgm', 'EventTriggerSoundStartSceneBgm', 'EventSoundRequestDucking', 'EventSoundWaitForEventSoundFinished', 'EventTriggerSetOcclusionReferenceToListener']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_Zelda_Adult
entrypoint: None()
actions: ['EventAIScheduleWarpToAnchor', 'EventDoNothing', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Floormaster[Floormaster03InsideGanonCastle17]
entrypoint: None()
actions: ['EventWallmasterEventAppear']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Floormaster[Floormaster02InsideGanonCastle17]
entrypoint: None()
actions: ['EventWallmasterEventAppear']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Floormaster[Floormaster04InsideGanonCastle17]
entrypoint: None()
actions: ['EventWallmasterEventAppear']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Floormaster[Floormaster05InsideGanonCastle17]
entrypoint: None()
actions: ['EventWallmasterEventAppear']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Floormaster[Floormaster06InsideGanonCastle17]
entrypoint: None()
actions: ['EventWallmasterEventAppear']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Floormaster[Floormaster07InsideGanonCastle17]
entrypoint: None()
actions: ['EventWallmasterEventAppear']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Floormaster[Floormaster08InsideGanonCastle17]
entrypoint: None()
actions: ['EventWallmasterEventAppear']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Floormaster[Floormaster09InsideGanonCastle17]
entrypoint: None()
actions: ['EventWallmasterEventAppear']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Wallmaster[Wallmaster01InsideGanonCastle17]
entrypoint: None()
actions: ['EventWallmasterEventAppear']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Wallmaster[Wallmaster02InsideGanonCastle17]
entrypoint: None()
actions: ['EventWallmasterEventAppear']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Wallmaster[Wallmaster03InsideGanonCastle17]
entrypoint: None()
actions: ['EventWallmasterEventAppear']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Floormaster[Floormaster01InsideGanonCastle17]
entrypoint: None()
actions: ['EventWallmasterEventAppear']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventProxyRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventResetToInGameParametersDoF', 'EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_InsideGanonCastle_SageSymbol_A_01[MainRoom]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_InsideGanonCastle_SageSymbol_A_02[MainRoom]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_InsideGanonCastle_SageSymbol_A_03[MainRoom]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_InsideGanonCastle_SageSymbol_A_04[MainRoom]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_InsideGanonCastle_SageSymbol_A_05[MainRoom]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_InsideGanonCastle_SageSymbol_A_06[MainRoom]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void GanonCastle_Adult_Field_Rainbow() {
    GameSystemActor.EventTriggerBancRequestBeforehandLoad({'IsTargetRetry': False, 'BancPath': 'Work/Banc/Scene/InsideGanonCastle/InsideGanonCastle.bcett.json'})
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})

    fork {
        Player_Event.EventPlayerSlowWalkStop({'IsWaitEnd': True, 'IsSheathed': True})
    } {
        UISystemActor.EventEventFadeOut({'Length': 3, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0})
    }

    Player_Event.EventPlayerUnequip({'IsWaitEnd': False})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    EventSystemActor.EventTransition({'EventName': 'Dm_InsideGanonCastle_0000', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2})
    EventRequestActor.EventTriggerSetEventBoolEX1({'Bool': True})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Defeat_Ganon', 'StepName': 'Step02', 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'IsIgnoreCompletedChallenge': False})
    Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': '', 'NotChangeRot': False, 'UseDemoWait': True, 'ASCommand': 'EvtWait'})
    Npc_Navi.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0, 'ClothWarpMode': -1, 'IsWaitEnd': True, 'PositionOffset': [0.4099999964237213, 0.20000000298023224, -0.17000000178813934]})
    Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': False, 'IsNearOffset': True, 'Type': 1, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVector': [-0.17000000178813934, 1.6299999952316284, -4.010000228881836], 'AtVector': [0.0, 1.5199999809265137, 0.009999999776482582], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    }

    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_Navi.EventNaviRequestBallonMessage({'Index': 139})
}

void InsideGanonCastle_Dungeon_BarrierRemove_Light() {

    call Common.AirStartUp()

    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_InsideGanonCastle_0070'})
    Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
    Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': True})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_InsideGanonCastle_0075'})

    fork {
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 1})
    } {
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'InstanceName': '', 'NotChangeRot': False, 'UseDemoWait': True, 'ActorName': 'AnchorAction1', 'ASCommand': 'EvtWait'})
    }

    GameSystemActor.EventChangeDungeonRoom({'ChangeRoomID': 1, 'IsWaitEnd': True})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'InsideGanonCastle_Dungeon_BarrierRemove_Light'})
    GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'GameDataName': 'InsideGanonCastle_Dungeon_Barrier_Count', 'Value': -1})
    Event581:

    call InsideGanonCastle_Dungeon_BarrierRemove_All()

    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'InsideGanonCastle_Dungeon_SeeBarrierGuide'})
    GameSystemActor.EventTriggerRequestAutoSave()
}

void InsideGanonCastle_Dungeon_BarrierRemove_Forest() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_InsideGanonCastle_0020'})
    Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
    Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': True})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_InsideGanonCastle_0025'})

    fork {
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 1})
    } {
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'InstanceName': '', 'NotChangeRot': False, 'UseDemoWait': True, 'ActorName': 'AnchorAction1', 'ASCommand': 'EvtWait'})
    }

    GameSystemActor.EventChangeDungeonRoom({'ChangeRoomID': 1, 'IsWaitEnd': True})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'InsideGanonCastle_Dungeon_BarrierRemove_Forest'})
    GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'GameDataName': 'InsideGanonCastle_Dungeon_Barrier_Count', 'Value': -1})
    goto Event581
}

void InsideGanonCastle_Dungeon_BarrierRemove_Water() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_InsideGanonCastle_0030'})
    Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
    Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': True})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_InsideGanonCastle_0032'})

    fork {
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 1})
    } {
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'InstanceName': '', 'NotChangeRot': False, 'UseDemoWait': True, 'ActorName': 'AnchorAction1', 'ASCommand': 'EvtWait'})
    }

    GameSystemActor.EventChangeDungeonRoom({'ChangeRoomID': 1, 'IsWaitEnd': True})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'InsideGanonCastle_Dungeon_BarrierRemove_Water'})
    GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'GameDataName': 'InsideGanonCastle_Dungeon_Barrier_Count', 'Value': -1})
    goto Event581
}

void InsideGanonCastle_Dungeon_BarrierRemove_Shadow() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_InsideGanonCastle_0010'})
    Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
    Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': True})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_InsideGanonCastle_0015'})

    fork {
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 1})
    } {
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'InstanceName': '', 'NotChangeRot': False, 'UseDemoWait': True, 'ActorName': 'AnchorAction1', 'ASCommand': 'EvtWait'})
    }

    GameSystemActor.EventChangeDungeonRoom({'ChangeRoomID': 1, 'IsWaitEnd': True})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'InsideGanonCastle_Dungeon_BarrierRemove_Shadow'})
    GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'GameDataName': 'InsideGanonCastle_Dungeon_Barrier_Count', 'Value': -1})
    goto Event581
}

void InsideGanonCastle_Dungeon_BarrierRemove_Fire() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_InsideGanonCastle_0050'})
    Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
    Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': True})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_InsideGanonCastle_0055'})

    fork {
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 1})
    } {
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'InstanceName': '', 'NotChangeRot': False, 'UseDemoWait': True, 'ActorName': 'AnchorAction1', 'ASCommand': 'EvtWait'})
    }

    GameSystemActor.EventChangeDungeonRoom({'ChangeRoomID': 1, 'IsWaitEnd': True})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'InsideGanonCastle_Dungeon_BarrierRemove_Fire'})
    GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'GameDataName': 'InsideGanonCastle_Dungeon_Barrier_Count', 'Value': -1})
    goto Event581
}

void InsideGanonCastle_Dungeon_BarrierRemove_Spirit() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_InsideGanonCastle_0080'})
    Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
    Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': True})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_InsideGanonCastle_0085'})

    fork {
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 1})
    } {
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'InstanceName': '', 'NotChangeRot': False, 'UseDemoWait': True, 'ActorName': 'AnchorAction1', 'ASCommand': 'EvtWait'})
    }

    GameSystemActor.EventChangeDungeonRoom({'ChangeRoomID': 1, 'IsWaitEnd': True})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'InsideGanonCastle_Dungeon_BarrierRemove_Spirit', 'Value': True, 'Index': -1})
    GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'GameDataName': 'InsideGanonCastle_Dungeon_Barrier_Count', 'Value': -1})
    goto Event581
}

void InsideGanonCastle_Dungeon_BossAppear_1() {
    if !GameSystemActor.EventQueryIsDreamWorld() {
        UISystemActor.EventEventFadeOut({'IsNoPlayAnime': True, 'Color': 0, 'IsWaitEnd': True, 'Length': 3})
        ChallengeSystemActor.EventTriggerShowTimerUI()

        call DreamBossStage.Rematch_Start_Common()

        Event5:
        EventSystemActor.EventWait({'Frames': 3, 'IsWaitEnd': True})
        Enemy_DungeonBoss_Ganondorf.EventWarpToTargetPosAndRot({'Position': [0.07999999821186066, 174.05999755859375, -24.6299991607666], 'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1})
        Enemy_DungeonBoss_Ganondorf.EventDoNothing({'IsWaitEnd': True})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_InsideGanonCastle_BossIn'})
        Enemy_DungeonBoss_Ganondorf.EventSetBattlePresentationOnPreState()
        GameSystemActor.EventRemoveAllDroppedItemActors()
        if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {
            Player_Event.EventTriggerHealLifeMax()
            Player_Event.EventTriggerPlayerHealMPMax()
            if GameSystemActor.EventQueryIsDreamWorld() {
                Player_Event.EventTriggerPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'NotChangeRot': False, 'InstanceName': '', 'UseDemoWait': False, 'ASCommand': ''})
            }
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Navi_Ban', 'Index': -1, 'Value': True})

            call Get_StoneOfForest.BossAppearSkip_Ganondorf()

        } else
        if GameSystemActor.EventQueryIsDreamWorld() {
            Player_Event.EventTriggerPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'NotChangeRot': False, 'InstanceName': '', 'UseDemoWait': False, 'ASCommand': ''})
        }
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Navi_Ban', 'Index': -1, 'Value': True})
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'KeepManualModeFrame': 120.0, 'ChangeToManualModeAfterEvent': True, 'AfterKeepEndInterpolateCountScale': 3.0, 'IsKeepWithRelativePos': False})
    } else {
        GameSystemActor.EventEnterGameSafetySection({'GameSafetySetting': 'Defeat_Ganon', 'IsWaitEnd': True})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'Defeat_Ganon', 'StepName': 'Step05'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'InsideGanonCastle_IsBossAppearDemo'})
        goto Event5
    }
}

void InsideGanonCastle_Dungeon_BossDie_1() {

    call Get_StoneOfForest.InitDefeatBoss()

    if !GameSystemActor.EventQueryIsDreamWorld() {

        call DreamBossStage.Rematch_Ganondorf_demo()

    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Navi_Ban', 'Value': False, 'Index': -1})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'InsideGanonCastele_Dungeon_Ganondorf_Die', 'Index': -1, 'Value': True})
        Player_Event.EventTriggerEquipmentUserRequestCreateStaticEquipment({'EquipmentActorName': 'Weapon_Sword_Master', 'DynamicEquipmentState': 2, 'IsActive': True})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_InsideGanonCastle_BossOut'})
        Enemy_DungeonBoss_Ganondorf.EventTriggerDeathSignal()
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'Defeat_Ganon', 'StepName': 'Step06'})
        GameSystemActor.EventTriggerLeaveGameSafetySection()
        GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'IsStartOnEvent': False, 'NextPosition': [0.0, 0.0, 0.0], 'NextBanc': 'CrumblingGanonCastle', 'NextStartPos': 'CrumblingGanonCastle_StartPos', 'BootEventName': 'CrumblingGanonCastle_Arrive', 'EventStarterName': 'CrumblingGanonCastle_StartPos', 'NextStartRot': [0.0, 0.0, 0.0], 'IsItemWarp': False, 'FadePattern': 4})
    }
}

void InsideGanonCaslte_Dungeon_Escape() {
    Player_Event.EventTriggerParticipateEvent()
    UISystemActor.EventEventFadeOut({'Color': 0, 'Length': 1, 'IsWaitEnd': False, 'IsNoPlayAnime': True})
    GameSystemActor.EventEnterGameSafetySection({'IsWaitEnd': True, 'GameSafetySetting': 'Defeat_Ganon'})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'System_IsSaveTemporaryStorage', 'Index': -1, 'Value': True})
    GameSystemActor.EventSaveAndWaitTemporarySave({'IsLastBattleRestartPos': True, 'IsWaitEnd': True, 'GameSafetySetting': 'Defeat_Ganon', 'IsResetTemporarySaveAfterLoad': False, 'LastBattleStartPosName': 'RestartPos_Ganondorf_BossBattle'})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'Defeat_Ganon', 'StepName': 'Step07'})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'KeepManualModeFrame': 120.0, 'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'IsKeepWithRelativePos': False})

    call NaviEventCommon.NaviWarp_PlayerHomePos_Choice({'IsLookAtPlayer': False, 'IsLeft': False})

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_FinalBattle_0005'})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'FinalBattleField_BeforeGanonAppear', 'Index': -1, 'Value': True})
}

void InsideGanonCastle_Dungeon_BossAppear_2() {
    Player_Event.EventTriggerParticipateEvent()
    if !GameSystemActor.EventQueryIsDreamWorld() {
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'Color': 0, 'Length': 3, 'IsNoPlayAnime': True})
        Event61:
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'FinalBattleField_ChangeENVForBeforeBattle', 'Value': False})
        Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        Player_Event.EventTriggerEquipmentUserRequestCreateStaticEquipment({'EquipmentActorName': 'Weapon_Sword_Master', 'DynamicEquipmentState': 2, 'IsActive': True})
        Event66:
        if !Player_Event.EventQueryPlayerIsEquipWeapon({'ArmorName': 'Weapon_Sword_Master', 'WeaponSlot': 0}) {
            PouchSystemActor.EventTriggerRemoveWeaponKeepSheath({'Actor': 'Weapon_Sword_Master'})
            if !GameSystemActor.EventQueryIsDreamWorld() {
                ChallengeSystemActor.EventTriggerShowTimerUI()

                call DreamBossStage.Rematch_Start_Common()

                Event31:
                Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'ActorName': 'AnchorAction1', 'InstanceName': 'FinalBattle_StartPos', 'ASCommand': 'LockOnWait'})
                Npc_Hylia_Zelda_Adult.EventAIScheduleWarpToAnchor({'AnchorType': 4, 'InstanceName': '', 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'IsWaitEnd': True, 'ClothWarpMode': -1})
                Npc_Navi.EventWarpToTargetPosAndRot({'ClothWarpMode': -1, 'YAngle': -90.0, 'IsWaitEnd': True, 'Position': [11.989999771118164, 101.69999694824219, -0.6200000047683716]})
                if GameSystemActor.EventQueryIsDreamWorld() {
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'FinalBattleField_BeforeGanonAppear', 'Value': False, 'Index': -1})
                }
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                GameSystemActor.EventWaitForActorPresence({'ActorName': 'WorldMgrThunderMgr', 'IsWaitEnd': True, 'InstanceName': '', 'IsActorCreateRequest': True})
                GameSystemActor.EventWaitForActorPresence({'IsWaitEnd': True, 'InstanceName': '', 'IsActorCreateRequest': True, 'ActorName': 'Enemy_DungeonBoss_Ganon'})
                GameSystemActor.EventWaitForActorPresence({'IsWaitEnd': True, 'InstanceName': '', 'IsActorCreateRequest': True, 'ActorName': 'Obj_GanonCastle_FireWallCircle_A_01'})
                WorldMgrThunderMgr.EventTriggerWmThunderMgrSetIsUpdate({'IsUpdate': False})
                GameSystemActor.EventRemoveProjectiles({'IsWaitEnd': True})
                EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_FinalBattle_BossIn'})
                Enemy_DungeonBoss_Ganon.EventSetBattlePresentationOnPreState()
                EventRequestActor.EventTriggerSetEventBoolEX1({'Bool': True})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'FinalBattleField_ZeldaPos_FirstHalf', 'Value': True})
                if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {

                    call Get_StoneOfForest.BossAppearSkip_Ganon()

                } else {
                    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
                }
                WorldMgrThunderMgr.EventTriggerWmThunderMgrSetIsUpdate({'IsUpdate': True})
                WorldMgrThunderMgr.EventTriggerWorldMgrThunderMgrChangePatternKey({'PatternKey': 'First_Battle'})
                Player_Event.EventTriggerSetTimerInvalidAttentionLockOn({'Frame': 45.0})
                if !GameSystemActor.EventQueryIsDreamWorld() {
                    ChallengeSystemActor.EventTriggerMiniGameTimerStart()
                }
            } else {
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Defeat_Ganon', 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'IsIgnoreCompletedChallenge': False, 'StepName': 'Step08'})
                goto Event31
            }
        } else {
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            goto Event66
        }
    } else {
        Player_Event.EventTriggerPlayerEventStartWithDrawn()
        Player_Event.EventTriggerPlayerEventStartWithRolling()
        Player_Event.EventPlayerContinueWalk({'IsWaitEnd': True, 'ASCommand': 'EvtWait'})

        fork {
            UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        } {
            Player_Event.EventPlayerMoveToAnchor({'IsKeepSpeed': True, 'IsInertiaMove': True, 'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'FinalBattle_BossInStartPos', 'MoveSpeed': 0.0, 'DecSpeedDistance': 0.0, 'ApplySlowMove': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsMoveAnchorFrontDir': False, 'FinishASCommand': 'EvtWait', 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0, 'IsWaitEnd': False})
        }

        GameSystemActor.EventTriggerLeaveGameSafetySection()
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
        GameSystemActor.EventEnterGameSafetySection({'IsWaitEnd': True, 'GameSafetySetting': 'Defeat_Ganon_InBattle'})
        goto Event61
    }
}

void InsideGanonCastle_Dungeon_BossDie_2() {
    if !GameSystemActor.EventQueryIsDreamWorld() {

        call DreamBossStage.Rematch_Ganon_demo()

    } else {
        Player_Event.EventTriggerPlayerEventStartWithDrawn()
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'FinalBattleField_DefeatGanonStart'})
        UISystemActor.EventTriggerRequestLoadStaffRollTable()
        EventWorldManagerController.Event_ResetChangeWindSpeedForFlowchart({'IsWaitEnd': False})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_FinalBattle_BossOut'})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_SageRoom_0020'})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_SageRoom_0025'})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_SageRoom_0027'})
        Enemy_DungeonBoss_Ganon_SecondHalfBattle.EventTriggerDeathSignal()
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Defeat_Ganon', 'StepName': 'Complete', 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'IsIgnoreCompletedChallenge': False})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_Ending_0000', 'FadeInTypeEventEnd': 2})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_StaffCredit_0000', 'FadeInTypeEventEnd': 2})
        GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextStartRot': [0.0, 0.0, 0.0], 'EventStarterName': '', 'BootEventName': 'InsideGanonCastle_Dungeon_StaffRoll_HyruleCastle', 'IsStartOnEvent': False, 'NextStartPos': 'Ending', 'NextPosition': [0.0, 0.0, 0.0], 'FadePattern': 3, 'NextBanc': 'Demo_ShootingLocation_Tapestry_ED', 'IsItemWarp': False})
    }
}

void EndingProcess() {
    GameSystemActor.EventSetEventResult({'EventResult': 'Title', 'IsWaitEnd': True})
    UISystemActor.EventLoadingFadeOut({'IsBlackFade': True, 'IsWaitEnd': True, 'IsNoIcon': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Sequence_ToTitleFromGameClear', 'Index': -1, 'Value': True})
    GameSystemActor.EventTriggerPauseMgrRequestPause({'PauseType': 'GameOverPause'})
}

void InsideGanonCastle_Dungeon_Ocarina() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'InsideGanonCastele_Dungeon_Room13_Ocarina', 'Index': -1}) {

        call Dm_SY_Ocarina.PlayOcarinaFree({'HasRecommendedMelody': False, 'MelodyType': 0})

    } else {

        call Dm_SY_Ocarina.PlayOcarinaFree({'HasRecommendedMelody': True, 'MelodyType': 0})

        if !GameSystemActor.EventQueryIsRecommendedMelody() {

            fork {
                PostProcessingActor.EventResetToInGameParametersDoF({'IsWaitEnd': True, 'TransitionFrame': 0})
            } {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'room13_camPos01', 'Actor2InstanceName': 'room13_atPos01', 'MoveTime': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            } {
                Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'YAngle': 174.2550048828125, 'ClothWarpMode': 0, 'EnableInAir': False, 'Position': [-52.19200134277344, 99.77899932861328, -22.341999053955078]})
            } {
                Npc_Navi.EventNaviWarpToPlayerHomePosition({'ActorName': '', 'InstanceName': '', 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'IsWaitEnd': False, 'Target': 0, 'IsDisguisedPlayerPos': True, 'Type': 2, 'IsNearOffset': False, 'WorldPos': [-52.19200134277344, 99.77899932861328, -22.341999053955078], 'YAngle': 174.2550048828125})
            }

            EventProxyRequestActor.EventTriggerSetEventBool({'Bool': True})

            call TreasureBoxAppear.Act_Magic()

            SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'InsideGanonCastele_Dungeon_Room13_Ocarina'})
        }
    }
}

void InsideGanonCastle_Dungeon_BarrierRemove_All() {
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    if GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'InsideGanonCastle_Dungeon_Barrier_Count', 'Value': 0, 'Index': -1}) in [0, 1] {
        Player_Event.EventTriggerParticipateEvent()
        Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        Obj_InsideGanonCastle_SageSymbol_A_01[MainRoom].EventPlayAS({'ASName': 'OnKeep', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Obj_InsideGanonCastle_SageSymbol_A_02[MainRoom].EventPlayAS({'ASName': 'OnKeep', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Obj_InsideGanonCastle_SageSymbol_A_03[MainRoom].EventPlayAS({'ASName': 'OnKeep', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Obj_InsideGanonCastle_SageSymbol_A_04[MainRoom].EventPlayAS({'ASName': 'OnKeep', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Obj_InsideGanonCastle_SageSymbol_A_05[MainRoom].EventPlayAS({'ASName': 'OnKeep', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Obj_InsideGanonCastle_SageSymbol_A_06[MainRoom].EventPlayAS({'ASName': 'OnKeep', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'InsideGanonCastle_IsAllBarrierClear'})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_InsideGanonCastle_0090'})
        Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'Defeat_Ganon', 'StepName': 'Step04'})
        ChallengeSystemActor.EventTriggerShowChallengeProgressUI({'ChallengeName': 'Defeat_Ganon', 'IsFirstStep': False})
    }
}

void InsideGanonCastle_Dungeon_Boss_GetMasterSword() {
    if !GameSystemActor.EventQueryIsDreamWorld() {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_CreateWarp', 'Value': True})
        Event53:

        fork {
            EventSystemActor.EventWait({'Frames': 3, 'IsWaitEnd': True})
        } {
            Player_Event.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
        } {
            UISystemActor.EventEventFadeOut({'Length': 3, 'IsNoPlayAnime': True, 'IsWaitEnd': True, 'Color': 0})
        }

        Enemy_DungeonBoss_Ganon.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1, 'Position': [7.0, 100.0999984741211, 15.0]})
        Enemy_DungeonBoss_Ganon.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'FinalBattleField_ZeldaPos_FirstHalf', 'Value': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'FinalBattleField_ZeldaPos_SecondHalf'})
        GameSystemActor.EventRemoveProjectiles({'IsWaitEnd': True})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_FinalBattle_0010'})
        Player_Event.EventTriggerSetTimerInvalidAttentionLockOn({'Frame': 45.0})
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'FinalBattleField_Create_Ganon_SecondHalfBattle', 'Index': -1, 'Value': True})
        ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'Defeat_Ganon', 'IsIgnoreChallengeProgressUI': False, 'IsIgnoreCompletedChallenge': False, 'StepName': 'Step09'})
        goto Event53
    }
}

void CrumblingGanonCastle_Arrive() {

    fork {
        Npc_Hylia_Zelda_Adult.EventDoNothing({'IsWaitEnd': True})
    } {
        SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 0, 'WithPlayableEvent': True, 'CommandLife': 2, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
        UISystemActor.EventEventFadeOut({'Length': 1, 'Color': 1, 'IsNoPlayAnime': True, 'IsWaitEnd': True})
    }

    SoundSystemActor.EventSoundWaitForEventSoundFinished({'IsWaitEnd': True})
    GameSystemActor.EventEnterGameSafetySection({'GameSafetySetting': 'Defeat_Ganon', 'IsWaitEnd': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'System_IsSaveTemporaryStorage', 'Index': -1, 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Hylia_Zelda_Adult_CanTalk', 'Value': False, 'Index': -1})
    ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'EscapeFromCrumblingGanonCastle', 'StepName': 'Step01'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'IsAppear_GanondorfDeadBody'})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
    EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    EventCamera.EventTriggerCameraSavePoint()
    GameSystemActor.EventSaveAndWaitTemporarySave({'IsLastBattleRestartPos': True, 'IsWaitEnd': True, 'GameSafetySetting': 'Defeat_Ganon', 'IsResetTemporarySaveAfterLoad': False, 'LastBattleStartPosName': 'RestartPos_Ganondorf_BossBattle'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'EscapeFromCrumblingGanonCastle_Erase_CollapseTower', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'EscapeFromCrumblingGanonCastle_SetBackRubble', 'Value': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_InsideGanonCastle_0110', 'FadeInTypeEventEnd': 2})
    PostProcessingActor.EventNorifyCutChangeForGraphics()
    Player_Event.EventTriggerPlayerWarpToStarterLinkAnchor({'ActorName': 'StartPos', 'InstanceName': 'CrumblingGanonCastle_StartPos', 'UseDemoWait': True, 'NotChangeRot': False, 'ASCommand': 'Wait'})
    SoundSystemActor.EventTriggerStartInGameBgm({'WithPlayableEvent': True, 'IsFadeIn': False, 'ResumeDelay': 0})
    SoundSystemActor.EventTriggerSoundStartSceneBgm({'BgmName': 'BGM_EscapeFromGanonTower', 'StartType': 2})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'EscapeFromCrumblingGanonCastle_Erase_CollapseTower'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'EscapeFromCrumblingGanonCastle_SetBackRubble'})

    call NaviChat.NaviChat_Serious()

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})
}

void GanonCastle_Adult_Field_SeeTowerBarrier() {
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_InsideGanonCastle_0003'})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Defeat_Ganon', 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'IsIgnoreCompletedChallenge': False, 'StepName': 'Step03'})
    ChallengeSystemActor.EventTriggerShowChallengeProgressUI({'ChallengeName': 'Defeat_Ganon', 'IsFirstStep': False})
}

void StaffCredit_SecondHalf() {
    UISystemActor.EventEventFadeOut({'IsNoPlayAnime': True, 'IsWaitEnd': True, 'Length': 3, 'Color': 0})
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:WorldSEミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_StaffCredit_0005'})
    if EventSystemActor.EventQueryIsEventSkipedMostRecent() {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_StaffCredit_0007'})
    }
    UISystemActor.EventDeleteStaffRoll({'IsWaitEnd': True})

    call EndingProcess()

}

void InsideGanonCastle_Dungeon_EnemyAppear01() {

    call InsideGanonCastle_Dungeon_EnemyAppear01_Changed()

}

void InsideGanonCastle_Dungeon_EnemyAppear02() {

    call InsideGanonCastle_Dungeon_EnemyAppear02_Changed()

}

void InsideGanonCastle_Dungeon_EnemyAppear03() {

    call InsideGanonCastle_Dungeon_EnemyAppear03_Changed()

}

void InsideGanonCastle_Dungeon_TreasureBox_02() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()

    call GimmickTreasureBox_Changed({'CamPosName': 'room02_camPos01', 'AtPosName': 'room02_atPos01', 'AvoidPosName': 'room02_avoidPos01'})

}

void InsideGanonCastle_Dungeon_Shutter_02() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()

    call GimmickShutter_Changed({'CamPosName': 'room02_camPos02', 'AtPosName': 'room02_atPos02', 'LookPosName': 'room02_lookPos02'})

}

void InsideGanonCastle_Dungeon_Shutter_06() {

    call InsideGanonCastle_Dungeon_Shutter_06_Changed()

}

void InsideGanonCastle_Dungeon_Gimmick_08() {

    call InsideGanonCastle_Dungeon_Gimmick_08_Changed()

}

void InsideGanonCastle_Dungeon_TreasureBox_08() {

    call InsideGanonCastle_Dungeon_TreasureBox_08_Changed()

}

void InsideGanonCastle_Dungeon_Shutter_08() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()

    call GimmickShutter_Changed({'CamPosName': 'room08_camPos06', 'AtPosName': 'room08_atPos06', 'LookPosName': 'room08_atPos06'})

}

void InsideGanonCastle_Dungeon_TreasureBox_17() {

    call InsideGanonCastle_Dungeon_TreasureBox_17_Changed()

}

void InsideGanonCastle_Dungeon_Shutter_17_01() {

    call InsideGanonCastle_Dungeon_Shutter_17_01_Changed()

}

void InsideGanonCastle_Dungeon_Shutter_17_02() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'room17_camPos03', 'Actor2InstanceName': 'room17_atPos03', 'MoveTime': 90, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})

    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
        Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'UseNormalTurn': False, 'IsWaitEnd': False, 'KeepTalkWait': False, 'InstanceName': 'Point1', 'IsDoNavi': True, 'SlowTurn': True})
    }

    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
}

void InsideGanonCastle_Dungeon_TreasureBox_12() {

    call InsideGanonCastle_Dungeon_TreasureBox_12_Changed()

}

void AvoidGimmick() {
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'InstanceNameB': 'ObjectInstance', 'CheckDistance': 'NearDistance'}) {
        Player_Event.EventPlayerMoveToOffsetAnchor({'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'ObjectInstance', 'DecSpeedDistance': 0.0, 'ApplySlowMove': False, 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'MoveSpeed': 5.0, 'IsWaitEnd': True, 'IsOffsetBasedOnAnchorDir': True, 'Offset': 'MoveOffset'})
        Player_Event.EventPlayerTurnAndLook({'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'UpperASCommand': '', 'IsWaitEnd': False, 'ActorName': 'DestinationAnchor', 'Target': 5, 'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 1, 'InstanceName': 'TBox', 'UseNormalTurn': False, 'IsDoNavi': True, 'SlowTurn': True})
    } else {
        Player_Event.EventPlayerTurnAndLook({'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'UpperASCommand': '', 'IsWaitEnd': False, 'ActorName': 'DestinationAnchor', 'Target': 5, 'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 1, 'InstanceName': 'TBox', 'UseNormalTurn': False, 'IsDoNavi': True, 'SlowTurn': True})
    }
}

void GimmickShutter_Changed() {
    SoundSystemActor.EventTriggerSetOcclusionReferenceToListener({'CommandLife': 0})
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'DestinationAnchor', 'VectorSetType': 3, 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [0.0, 0.0, 0.0], 'ActorInstanceName': 'CamPosName'}) {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'MoveTime': 1, 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'CamPosName', 'Actor2InstanceName': 'AtPosName', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Event422:
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})

        fork {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'UseNormalTurn': False, 'IsWaitEnd': False, 'KeepTalkWait': False, 'InstanceName': 'LookPosName', 'IsDoNavi': True, 'SlowTurn': True})
        }

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorName': 'PlayerCamera', 'ActorInstanceName': ''}) {
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
        }
    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'MoveTime': 90, 'Actor1InstanceName': 'CamPosName', 'Actor2InstanceName': 'AtPosName', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        goto Event422
    }
}

void InsideGanonCastle_Dungeon_Shutter_17_01_Changed() {

    call Common.AirStartUp()

    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerPlayerEventStartWithClimb()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'DestinationAnchor', 'VectorSetType': 3, 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [0.0, 0.0, 0.0], 'ActorInstanceName': 'room17_camPos01'}) {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'MoveTime': 1, 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'room17_camPos01', 'Actor2InstanceName': 'room17_atPos01', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Event441:
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})

        fork {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        } {
            if !Player_Event.EventQueryCheckPlayerState({'State': 3}) {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
                Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'UseNormalTurn': False, 'IsWaitEnd': False, 'KeepTalkWait': False, 'InstanceName': 'room17_lookPos01', 'IsDoNavi': True, 'SlowTurn': True})
            }
        }

        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorName': 'PlayerCamera', 'ActorInstanceName': ''}) {
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
        }
    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'room17_camPos01', 'Actor2InstanceName': 'room17_atPos01', 'MoveTime': 60, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        goto Event441
    }
}

void InsideGanonCastle_Dungeon_TreasureBox_17_Changed() {

    call Common.AirStartUp()

    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerPlayerEventStartWithClimb()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'DestinationAnchor', 'VectorSetType': 3, 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [0.0, 0.0, 0.0], 'ActorInstanceName': 'room17_camPos02'}) {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'MoveTime': 1, 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'room17_camPos02', 'Actor2InstanceName': 'room17_atPos02', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Event108:

        call DodongoCavern_FocusOnGimmick.TBox_Avoid_temp({'CloseDistance': 1.0, 'TBoxName': 'TBox', 'PlayerDestination': 'room17_avoidPos01', 'isNeedSE': True, 'isByNormalBool': True, 'isByExt1Bool': False, 'isStepBackAvoid': False, 'WaitBeforeAct': -1, 'WaitAfterAct': -1})

        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorName': 'PlayerCamera', 'ActorInstanceName': ''}) {
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
        }
    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'MoveTime': 60, 'Actor1InstanceName': 'room17_camPos02', 'Actor2InstanceName': 'room17_atPos02', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        goto Event108
    }
}

void GimmickTreasureBox_Changed() {
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'DestinationAnchor', 'VectorSetType': 3, 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [0.0, 0.0, 0.0], 'ActorInstanceName': 'CamPosName'}) {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'MoveTime': 1, 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'CamPosName', 'Actor2InstanceName': 'AtPosName', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Event114:

        call DodongoCavern_FocusOnGimmick.TBox_Avoid_temp({'TBoxName': 'TBox', 'PlayerDestination': 'AvoidPosName', 'CloseDistance': 1.0, 'isNeedSE': True, 'isByNormalBool': True, 'isByExt1Bool': False, 'isStepBackAvoid': True, 'WaitBeforeAct': -1, 'WaitAfterAct': -1})

        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorName': 'PlayerCamera', 'ActorInstanceName': ''}) {
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
        }
    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'MoveTime': 60, 'Actor1InstanceName': 'CamPosName', 'Actor2InstanceName': 'AtPosName', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        goto Event114
    }
}

void InsideGanonCastle_Dungeon_TreasureBox_08_Changed() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'DestinationAnchor', 'VectorSetType': 3, 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [0.0, 0.0, 0.0], 'ActorInstanceName': 'room08_camPos01'}) {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'MoveTime': 1, 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'room08_camPos01', 'Actor2InstanceName': 'room08_atPos01', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Event463:

        call DodongoCavern_FocusOnGimmick.TBox_Avoid_temp({'CloseDistance': 1.5, 'TBoxName': 'TBox', 'PlayerDestination': 'room08_avoidPos01', 'isNeedSE': True, 'isByNormalBool': True, 'isByExt1Bool': False, 'isStepBackAvoid': False, 'WaitBeforeAct': -1, 'WaitAfterAct': -1})

        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorName': 'PlayerCamera', 'ActorInstanceName': ''}) {
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
        }
    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'room08_camPos01', 'Actor2InstanceName': 'room08_atPos01', 'EnableCameraAlpha': True, 'MoveTime': 90, 'IsEnableRevertFast': False})
        goto Event463
    }
}

void InsideGanonCastle_Dungeon_Gimmick_08_Changed() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'InstanceNameB': 'room08_judgePos01', 'CheckDistance': 3.0, 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False}) {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'MoveTime': 1, 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'room08_camPos04', 'Actor2InstanceName': 'room08_atPos04', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'MoveTime': 1, 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'room08_camPos02', 'Actor2InstanceName': 'room08_atPos02', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

    fork {
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'InstanceNameB': 'room08_judgePos01', 'CheckDistance': 3.0, 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False}) {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'MoveTime': 90, 'Actor1InstanceName': 'room08_camPos05', 'Actor2InstanceName': 'room08_atPos05', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'UseNormalTurn': False, 'IsWaitEnd': False, 'KeepTalkWait': False, 'InstanceName': 'room08_lookPos05', 'IsDoNavi': True, 'SlowTurn': True})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'room08_camPos03', 'Actor2InstanceName': 'room08_atPos03', 'MoveTime': 90, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'UseNormalTurn': False, 'IsWaitEnd': False, 'KeepTalkWait': False, 'InstanceName': 'room08_lookPos03', 'IsDoNavi': True, 'SlowTurn': True})
        }
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorName': 'PlayerCamera', 'ActorInstanceName': ''}) {
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
    }
}

void InsideGanonCastle_Dungeon_Shutter_06_Changed() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'MoveTime': 1, 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'room06_camPos01', 'Actor2InstanceName': 'room06_atPos01', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})

    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'Position': [78.8290023803711, 102.74600219726562, -37.39799880981445], 'YAngle': 0.0, 'ClothWarpMode': 0, 'EnableInAir': False})
    }

    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor2ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': 5.0, 'AtVector': [0.0, 0.0, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'CameraCollisionMode': 0, 'PosVector': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'room06_camPos02', 'Actor2InstanceName': 'room06_atPos02', 'MoveTime': 90, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'AfterKeepEndInterpolateCountScale': 3.0, 'IsKeepWithRelativePos': False})
}

void InsideGanonCastle_Dungeon_AppearExtendingPlatform_03() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'DestinationAnchor', 'VectorSetType': 3, 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [0.0, 0.0, 0.0], 'ActorInstanceName': 'room03_camPos02'}) {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'MoveTime': 1, 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'room03_camPos02', 'Actor2InstanceName': 'room03_atPos02', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Event556:
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})

        fork {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 76})
            EventCamera.EventTriggerRequestCameraShake({'Pattern': 1, 'ApplyType': 0, 'LoopEndCount': 1, 'IsRumbleController': False, 'Power': 0.10000000149011612})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
            Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'UseNormalTurn': False, 'IsWaitEnd': False, 'KeepTalkWait': False, 'InstanceName': 'room03_lookPos02', 'IsDoNavi': True, 'SlowTurn': True})
        }

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 1})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorName': 'PlayerCamera', 'ActorInstanceName': ''}) {
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
        }
    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'room03_camPos02', 'Actor2InstanceName': 'room03_atPos02', 'MoveTime': 60, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        goto Event556
    }
}

void InsideGanonCastle_Dungeon_EnemyAppear01_Changed() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'AtVectorSetType': 4, 'Actor2ActorName': 'DestinationAnchor', 'MoveTime': 30, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'EventCamera', 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': True, 'PosVector': [0.0, 0.5, -3.0], 'AtVector': [0.0, 0.0, 0.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'UseNormalTurn': False, 'IsWaitEnd': False, 'KeepTalkWait': False, 'InstanceName': '', 'IsDoNavi': True, 'SlowTurn': True})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'InsideGanonCastle_Dungeon_Room17_SolarSwitch_Fake02_Wallmaster', 'Index': -1}) {
        Event566:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'InsideGanonCastle_Dungeon_Room17_SolarSwitch_Fake02_Floormaster'}) {
            Event572:
            GameSystemActor.EventWaitForActorPresence({'IsWaitEnd': True, 'IsActorCreateRequest': True, 'ActorName': 'Enemy_Floormaster', 'InstanceName': 'Floormaster02InsideGanonCastle17'})
            GameSystemActor.EventWaitForActorPresence({'IsWaitEnd': True, 'IsActorCreateRequest': True, 'ActorName': 'Enemy_Floormaster', 'InstanceName': 'Floormaster03InsideGanonCastle17'})

            fork {
                Enemy_Floormaster[Floormaster03InsideGanonCastle17].EventWallmasterEventAppear({'IsWaitEnd': True, 'AnchorInstanceName': ''})
            } {
                Enemy_Floormaster[Floormaster02InsideGanonCastle17].EventWallmasterEventAppear({'IsWaitEnd': True, 'AnchorInstanceName': ''})
            }

        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'InsideGanonCastle_Dungeon_Room17_SolarSwitch_Fake03_Floormaster'}) {
            goto Event572
        } else {
            GameSystemActor.EventWaitForActorPresence({'IsWaitEnd': True, 'IsActorCreateRequest': True, 'ActorName': 'Enemy_Floormaster', 'InstanceName': 'Floormaster01InsideGanonCastle17'})
            Enemy_Floormaster[Floormaster01InsideGanonCastle17].EventWallmasterEventAppear({'IsWaitEnd': True, 'AnchorInstanceName': ''})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'InsideGanonCastle_Dungeon_Room17_SolarSwitch_Fake03_Wallmaster', 'Index': -1}) {
        goto Event566
    } else {
        GameSystemActor.EventWaitForActorPresence({'ActorName': 'Enemy_Wallmaster', 'IsWaitEnd': True, 'IsActorCreateRequest': True, 'InstanceName': 'Wallmaster01InsideGanonCastle17'})
        Enemy_Wallmaster[Wallmaster01InsideGanonCastle17].EventWallmasterEventAppear({'IsWaitEnd': True, 'AnchorInstanceName': ''})
    }
}

void InsideGanonCastle_Dungeon_EnemyAppear02_Changed() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'AtVectorSetType': 4, 'Actor2ActorName': 'DestinationAnchor', 'MoveTime': 30, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'EventCamera', 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': True, 'PosVector': [0.0, 0.5, -3.0], 'AtVector': [0.0, 0.0, 0.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'UseNormalTurn': False, 'IsWaitEnd': False, 'KeepTalkWait': False, 'InstanceName': '', 'IsDoNavi': True, 'SlowTurn': True})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'InsideGanonCastle_Dungeon_Room17_SolarSwitch_Fake01_Wallmaster'}) {
        Event584:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'InsideGanonCastle_Dungeon_Room17_SolarSwitch_Fake01_Floormaster'}) {
            Event591:
            GameSystemActor.EventWaitForActorPresence({'IsWaitEnd': True, 'IsActorCreateRequest': True, 'ActorName': 'Enemy_Floormaster', 'InstanceName': 'Floormaster05InsideGanonCastle17'})
            GameSystemActor.EventWaitForActorPresence({'IsWaitEnd': True, 'IsActorCreateRequest': True, 'ActorName': 'Enemy_Floormaster', 'InstanceName': 'Floormaster06InsideGanonCastle17'})

            fork {
                Enemy_Floormaster[Floormaster05InsideGanonCastle17].EventWallmasterEventAppear({'IsWaitEnd': True, 'AnchorInstanceName': ''})
            } {
                Enemy_Floormaster[Floormaster06InsideGanonCastle17].EventWallmasterEventAppear({'IsWaitEnd': True, 'AnchorInstanceName': ''})
            }

        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'InsideGanonCastle_Dungeon_Room17_SolarSwitch_Fake03_Floormaster'}) {
            goto Event591
        } else {
            GameSystemActor.EventWaitForActorPresence({'IsWaitEnd': True, 'IsActorCreateRequest': True, 'ActorName': 'Enemy_Floormaster', 'InstanceName': 'Floormaster04InsideGanonCastle17'})
            Enemy_Floormaster[Floormaster04InsideGanonCastle17].EventWallmasterEventAppear({'IsWaitEnd': True, 'AnchorInstanceName': ''})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'InsideGanonCastle_Dungeon_Room17_SolarSwitch_Fake03_Wallmaster', 'Index': -1}) {
        goto Event584
    } else {
        GameSystemActor.EventWaitForActorPresence({'ActorName': 'Enemy_Wallmaster', 'IsWaitEnd': True, 'IsActorCreateRequest': True, 'InstanceName': 'Wallmaster02InsideGanonCastle17'})
        Enemy_Wallmaster[Wallmaster02InsideGanonCastle17].EventWallmasterEventAppear({'IsWaitEnd': True, 'AnchorInstanceName': ''})
    }
}

void InsideGanonCastle_Dungeon_EnemyAppear03_Changed() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'AtVectorSetType': 4, 'Actor2ActorName': 'DestinationAnchor', 'MoveTime': 30, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'EventCamera', 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': True, 'PosVector': [0.0, 0.5, -3.0], 'AtVector': [0.0, 0.0, 0.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'UseNormalTurn': False, 'IsWaitEnd': False, 'KeepTalkWait': False, 'InstanceName': '', 'IsDoNavi': True, 'SlowTurn': True})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'InsideGanonCastle_Dungeon_Room17_SolarSwitch_Fake01_Wallmaster'}) {
        Event603:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'InsideGanonCastle_Dungeon_Room17_SolarSwitch_Fake01_Floormaster'}) {
            Event610:
            GameSystemActor.EventWaitForActorPresence({'IsWaitEnd': True, 'IsActorCreateRequest': True, 'ActorName': 'Enemy_Floormaster', 'InstanceName': 'Floormaster08InsideGanonCastle17'})
            GameSystemActor.EventWaitForActorPresence({'IsWaitEnd': True, 'IsActorCreateRequest': True, 'ActorName': 'Enemy_Floormaster', 'InstanceName': 'Floormaster08InsideGanonCastle17'})

            fork {
                Enemy_Floormaster[Floormaster08InsideGanonCastle17].EventWallmasterEventAppear({'IsWaitEnd': True, 'AnchorInstanceName': ''})
            } {
                Enemy_Floormaster[Floormaster09InsideGanonCastle17].EventWallmasterEventAppear({'IsWaitEnd': True, 'AnchorInstanceName': ''})
            }

        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'InsideGanonCastle_Dungeon_Room17_SolarSwitch_Fake02_Floormaster'}) {
            goto Event610
        } else {
            GameSystemActor.EventWaitForActorPresence({'IsWaitEnd': True, 'IsActorCreateRequest': True, 'ActorName': 'Enemy_Floormaster', 'InstanceName': 'Floormaster07InsideGanonCastle17'})
            Enemy_Floormaster[Floormaster07InsideGanonCastle17].EventWallmasterEventAppear({'IsWaitEnd': True, 'AnchorInstanceName': ''})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'InsideGanonCastle_Dungeon_Room17_SolarSwitch_Fake02_Wallmaster'}) {
        goto Event603
    } else {
        GameSystemActor.EventWaitForActorPresence({'ActorName': 'Enemy_Wallmaster', 'IsWaitEnd': True, 'IsActorCreateRequest': True, 'InstanceName': 'Wallmaster03InsideGanonCastle17'})
        Enemy_Wallmaster[Wallmaster03InsideGanonCastle17].EventWallmasterEventAppear({'IsWaitEnd': True, 'AnchorInstanceName': ''})
    }
}

void InsideGanonCastle_Dungeon_TreasureBox_12_Changed() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'DestinationAnchor', 'VectorSetType': 3, 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [0.0, 0.0, 0.0], 'ActorInstanceName': 'room12_camPos01'}) {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'MoveTime': 1, 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'EnableCameraAlpha': True, 'Actor1InstanceName': 'room12_camPos01', 'Actor2InstanceName': 'room12_atPos01', 'IsEnableRevertFast': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Event646:
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'room12_lookPos01'})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 70})

        call DodongoCavern_FocusOnGimmick.TBox_Avoid_temp({'TBoxName': 'TBox', 'CloseDistance': 1.0, 'isNeedSE': True, 'isStepBackAvoid': True, 'WaitBeforeAct': -1, 'WaitAfterAct': -1, 'PlayerDestination': 'room12_avoidPos01', 'isByNormalBool': False, 'isByExt1Bool': True})

        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorName': 'PlayerCamera', 'ActorInstanceName': ''}) {
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
        }
    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'MoveTime': 60, 'EnableCameraAlpha': True, 'Actor1InstanceName': 'room12_camPos01', 'Actor2InstanceName': 'room12_atPos01', 'IsEnableRevertFast': False})
        goto Event646
    }
}

void InsideGanonCastle_Dungeon_Get_Gauntlet_Gold() {
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_SY_Treasurebox', 'FadeInTypeEventEnd': 2})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 1, 'EventName': 'Dm_InsideGanonCastle_0006'})
}

void GanonCastle_Adult_Field_SeeTowerBarrier_FromDoor() {

    call Common_Dungeon_OpenShutterMove.MoveToPlusZ({'PreOpenPos': 'PreOpenPos', 'PostOpenPos': 'PostOpenPos', 'LastPos': 'LastPos'})

    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HavePlayedEvent.GanonCastle_Dungeon_SeeTowerBarrier', 'Index': -1}) {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_InsideGanonCastle_0003'})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HavePlayedEvent.GanonCastle_Dungeon_SeeTowerBarrier', 'Value': True, 'Index': -1})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Defeat_Ganon', 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'IsIgnoreCompletedChallenge': False, 'StepName': 'Step03'})
        ChallengeSystemActor.EventTriggerShowChallengeProgressUI({'ChallengeName': 'Defeat_Ganon', 'IsFirstStep': False})
        Npc_Navi.EventNaviRequestBallonMessage({'Index': 407})
    }
}

void InsideGanonCastle_Dungeon_BossBind0() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerPlayerEventStartWithRolling()
    Npc_Hylia_Zelda_Adult.EventTriggerParticipateEvent()
    Player_Event.EventPlayerContinueWalk({'ASCommand': 'LockOnWait', 'IsWaitEnd': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'FinalBattleField_ZeldaPos_SecondHalf_MagicCharge'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'FinalBattleField_ZeldaPos_SecondHalf', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'FinalBattleField_ZeldaPos_SecondHalf_Tired', 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Enemy_DungeonBossGanon_IsZeldaMagicChargeFinish', 'Value': False})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_FinalBattle_0030'})
    Player_Event.EventTriggerPlayerWarpToStarterLinkAnchor({'ASCommand': 'LockOnWait', 'InstanceName': 'Dm_FinalBattle_0030_PlayerPos', 'ActorName': 'DestinationAnchor', 'NotChangeRot': False, 'UseDemoWait': False})
    Player_Event.EventTriggerSetTimerInvalidAttentionLockOn({'Frame': 45.0})
}
