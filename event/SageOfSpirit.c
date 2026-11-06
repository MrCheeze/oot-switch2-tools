-------- EventFlow: SageOfSpirit --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: ['EventQueryIsEventSkipedMostRecent']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep', 'EventTriggerShowChallengeProgressUI', 'EventTriggerMiniGameTimerStart', 'EventTriggerShowTimerUI']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerAddOrSubGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp', 'EventQueryGameDataIntBranch']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventTriggerBecomeSpeaker', 'EventNPCTurnToTargetWithAS']
queries: ['EventQueryAvoidDuplicationRandomChoice4', 'EventNPCQueryCheckFrontToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventReserveBancChange', 'EventAIScheduleNPCForceSecurityLifted', 'EventTriggerSendErrorToEventResource', 'EventTriggerRequestOwnedHorseForceChangeBanc', 'EventWaitForActorPresence', 'EventWait', 'EventTraverseAroundAndWaitCreateActor', 'EventRemoveProjectiles', 'EventWaitTalkCameraInterpolationEnd']
queries: ['EventQueryRandomChoice2', 'EventQueryIsDreamWorld', 'EventQueryRandomChoice3', 'EventQueryTalkChoice3', 'EventQueryTalkChoice2', 'EventQueryIsDistanceBetweenActorsClose', 'EventQueryIsExistWarpPointForFaroreWind']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundStartSceneBgm', 'EventTriggerSoundStopBgmWithFade', 'EventSoundReleaseDucking', 'EventSoundWaitForOcarinaMelodyFinished', 'EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventChangeTemporarilyToPlayerCamera', 'EventBasedOnLookAtCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventChasePlayerCameraForDoor', 'EventSendEventTalkMessageToPlayerCamera']
queries: ['EventQueryCameraCheckRayCastForMoveToTarget', 'EventQueryCameraCheckRayCastForBasedOnLookAt', 'EventQueryCameraCheckOcclusionToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToStarterLinkAnchor', 'EventTriggerParticipateEvent', 'EventPlayerWarpToTargetPosAndRot', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerEventStartWithDrawn', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerSlowWalkStop', 'EventTriggerPlayerLookAtObject', 'EventPlayerSetExtraOrderDecelerateToStop', 'EventTriggerPlayerEventStartWithoutStopRidingTarget', 'EventPlayerTurnAndLook', 'EventPlayerMove', 'EventPlayerUnequip', 'EventTriggerPlayerEventStartWithRolling', 'EventPlayerBackMoveForTalk', 'EventPlayerPutAway', 'EventTriggerPlayerEventStartWithCarry', 'EventTriggerPlayerRequestLookAtTheFront', 'EventPlayerMoveToAnchor', 'EventPlayerPlayASFollowRideHorse']
queries: ['EventQueryPlayerIsEquipArmor', 'EventQueryPlayerIsEquipMask', 'EventQueryPlayerCheckRideHorse', 'EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Gerudo_001
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventAIScheduleWarpToAnchor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_DungeonBoss_Twinrova
entrypoint: None()
actions: ['EventTriggerDeathSignal', 'EventWarpToTargetPosAndRot', 'EventDoNothing', 'EventSetBattlePresentationOnPreState']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk', 'EventNaviRequestBallonMessage', 'EventNaviWarpToPlayerHomePosition', 'EventTriggerParticipateEvent', 'EventNaviFollowPlayer', 'EventPlayAS', 'EventNaviLookAtObject', 'EventWarpToTargetPosAndRot', 'EventWarpToTargetActor', 'EventTriggerBecomeSpeaker']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Enemy_MiddleBoss_IronKnuckle_Nabooru
entrypoint: None()
actions: ['EventTriggerDeathSignal', 'EventTriggerParticipateEvent', 'EventWarpToTargetPosAndRot', 'EventDoNothing', 'EventTriggerSetWasAppearInEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Gerudo_Nabooru_Child
entrypoint: None()
actions: ['EventAIScheduleWarpToAnchor', 'EventTriggerLookAtObject', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_DungeonBoss_Kotake[KotakeKoumeBattleClient]
entrypoint: None()
actions: ['EventTriggerDeathSignal', 'EventWarpToTargetPosAndRot', 'EventDoNothing', 'EventTriggerSetModelAlpha', 'EventSetBattlePresentationOnPreState']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_DungeonBoss_Koume[KotakeKoumeBattleClient]
entrypoint: None()
actions: ['EventTriggerDeathSignal', 'EventWarpToTargetPosAndRot', 'EventDoNothing', 'EventTriggerSetModelAlpha', 'EventSetBattlePresentationOnPreState']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Gerudo_017
entrypoint: None()
actions: ['EventAIScheduleWarpToAnchor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Obj_Gerudo_SwitchShutter_A_08[RestrictedDoor_GerudoFortress_00]
entrypoint: None()
actions: ['EventDoorClose']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Gerudo_015
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Npc_Gerudo_014
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Npc_Gerudo_018
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Npc_Gerudo_011
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Npc_Gerudo_001[FortressCleared]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: DoorShutter_EventStarter
entrypoint: None()
actions: ['EventDoorOpen', 'EventDoorClose', 'EventDoorUnlockChain']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: Dm_Npc_Kotake
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Npc_Koume
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_MiddleBoss_GerudoThief
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Navi_EvtWait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[Instance2]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Gerudo_HideOutGuard[GerudoFortress_GotoPrison_Pair(Npc_Gerudo_Pair)]
entrypoint: GerudoFortress_GotoPrison_Pair(Npc_Gerudo_Pair)
actions: ['EventPlayAS', 'EventNPCTurnToTargetWithAS', 'EventTriggerLookAtObject']
queries: ['EventQueryIsPlayingSameAS', 'EventNPCQueryCheckFrontToTarget']
params: None

void SageOfSpirit_NaboorIsTakenAway() {
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_SY_Treasurebox'})
    EventSystemActor.EventTransition({'EventName': 'Dm_DesertColossus_0030', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2})
    Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'YAngle': 150.0, 'Position': [-161.35000610351562, 112.5999984741211, 27.600000381469727], 'ASCommand': 'EvtWait', 'ClothWarpMode': 0, 'EnableInAir': False})
    Npc_Navi.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0, 'ClothWarpMode': -1, 'IsWaitEnd': True, 'PositionOffset': [-0.4099999964237213, 0.20000000298023224, -0.17000000178813934]})
    Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'IsNearOffset': True, 'Type': 2, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'LookAtDis': 4.900000095367432, 'IsIgnoreAtVectorReferenceActorRot': True, 'PosVector': [-162.6199951171875, 116.30000305175781, 30.329999923706055], 'AtVector': [-161.0, 113.49400329589844, 27.600000381469727], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    }

    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HavePlayedEvent.NaviTips_Gauntlet_01', 'Value': False, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'HavePlayedEvent.NaviTips_Gauntlet_03'})

    call NaviChat.NaviChat_Serious()

    Npc_Navi.EventNaviRequestBallonMessage({'Index': 197})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SageOfSpirit', 'IsIgnoreCompletedChallenge': True, 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step07'})
    ChallengeSystemActor.EventTriggerShowChallengeProgressUI({'ChallengeName': 'SageOfSpirit', 'IsFirstStep': False})
}

void SageOfSpirit_MiddleBossStart() {
    Player_Event.EventTriggerParticipateEvent()

    call Common_Dungeon_OpenShutterMove.PreMoveCommon_Boss()

    EventCamera.EventChasePlayerCameraForDoor({'PlayerActorName': 'Player_Event', 'DoorActorName': 'DoorShutter_EventStarter', 'Fovy': 50.0, 'IsWaitEnd': False, 'PlayerInstanceName': '', 'DoorInstanceName': '', 'LookAtDis': 5.0, 'LookAtOffset': [0.0, 1.75, 0.0], 'Latitude': -7.0, 'LerpFrame': 80.0})
    Player_Event.EventPlayerMove({'IsWaitEnd': True, 'MoveSpeed': 1.0, 'DecSpeedDistance': 1.0, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsInertiaMove': False, 'ApplySlowMove': False, 'IsContinueMoveAnimeAfterFinish': False, 'WorldPos': 'PreOpenPos'})
    Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'PosOffset': [0.0, 1.0, 0.0], 'Target': 0, 'ActorName': '', 'InstanceName': '', 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'TurnFaceControlType': 0, 'KeepTalkWait': False, 'UseNormalTurn': False, 'WorldPos': 'LastPos', 'IsDoNavi': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtDoorBoss', 'ClothWarpMode': 0})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        DoorShutter_EventStarter.EventDoorUnlockChain({'IsWaitEnd': False})
    }

    DoorShutter_EventStarter.EventDoorOpen({'IsWaitEnd': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 72})

    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player_Event.EventPlayerMove({'DecSpeedDistance': 1.0, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsInertiaMove': False, 'ApplySlowMove': False, 'IsContinueMoveAnimeAfterFinish': False, 'WorldPos': 'LastPos', 'IsWaitEnd': False, 'MoveSpeed': 0.5})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Player_Event.EventPlayerSlowWalkStop({'IsSheathed': False, 'IsWaitEnd': False})
        UISystemActor.EventEventFadeOut({'Length': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0})
    } {

        call Common_Dungeon_OpenShutterMove.DoorCamera({'ChildVerticalAngle': 5.0, 'ChildDistance': 1.5, 'ChildSpeed': 60, 'ChildOffset': [0.0, 1.2799999713897705, 0.0], 'AdultOffset': [0.0, 1.75, 0.0], 'AdultSpeed': 80, 'AdultDistance': 2.0, 'AdultVerticalAngle': 5.0})

    }

    Enemy_MiddleBoss_IronKnuckle_Nabooru.EventTriggerParticipateEvent()
    DoorShutter_EventStarter.EventDoorClose({'IsWaitEnd': False})

    fork {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'UseDemoWait': True, 'IsWaitEnd': True, 'ASCommand': 'LockOnWait', 'YAngle': 180.0, 'ClothWarpMode': 0, 'Position': [0.07000000029802322, 135.0399932861328, -81.94999694824219], 'EnableInAir': False})
        Npc_Navi.EventWarpToTargetPosAndRot({'ClothWarpMode': -1, 'IsWaitEnd': True, 'YAngle': 180.0, 'Position': [0.47999998927116394, 136.14849853515625, -82.0999984741211]})
    } {
        EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 44.40999984741211, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'PosVector': [0.0, 138.02999877929688, -78.83000183105469], 'AtVector': [-0.009999999776482582, 136.92999267578125, -82.16000366210938], 'IsEnableRevertFast': False})
    } {
        Enemy_MiddleBoss_IronKnuckle_Nabooru.EventWarpToTargetPosAndRot({'YAngle': 0.0, 'IsWaitEnd': False, 'ClothWarpMode': -1, 'Position': [0.0, 135.0399932861328, -91.04000091552734]})
        Enemy_MiddleBoss_IronKnuckle_Nabooru.EventTriggerSetWasAppearInEvent()
        Enemy_MiddleBoss_IronKnuckle_Nabooru.EventDoNothing({'IsWaitEnd': True})
        Dm_Npc_Kotake.EventWarpToTargetPosAndRot({'YAngle': 215.0, 'Position': [11.329999923706055, 147.1699981689453, -142.52999877929688], 'IsWaitEnd': True, 'ClothWarpMode': -1})
        Dm_Npc_Koume.EventWarpToTargetPosAndRot({'Position': [14.210000038146973, 147.1699981689453, -147.49000549316406], 'YAngle': 215.0, 'IsWaitEnd': True, 'ClothWarpMode': -1})
    }

    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SageOfSpirit', 'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step08', 'IsWaitEnd': True})
    GameSystemActor.EventRemoveProjectiles({'IsWaitEnd': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    EventSystemActor.EventTransition({'EventName': 'Dm_SpiritTemple_0010', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2})
    if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {

        call Get_StoneOfForest.BossAppearSkip_Nabooru()

    } else {
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'AfterKeepEndInterpolateCountScale': 3.0, 'IsKeepWithRelativePos': False})
    }
    if !GameSystemActor.EventQueryIsDreamWorld() {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DreamWorld_BossAppear'})
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Enemy_MiddleBoss_IronKnuckle_Nabooru_BossAppear'})
    }
}

void SageOfSpirit_MiddleBossEnd() {
    if !GameSystemActor.EventQueryIsDreamWorld() {

        call DreamBossStage.TimeCountStopNaboru()

    } else {

        call Get_StoneOfForest.InitDefeatBoss()

        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SpiritTemple_Room33_ChairBroken'})
        Player_Event.EventTriggerParticipateEvent()
        Enemy_MiddleBoss_IronKnuckle_Nabooru.EventWarpToTargetPosAndRot({'YAngle': 0.0, 'IsWaitEnd': False, 'ClothWarpMode': -1, 'Position': [0.0, 114.1500015258789, -54.31999969482422]})

        fork {
            Player_Event.EventPlayerWarpToTargetPosAndRot({'Position': [-0.019999999552965164, 135.0399932861328, -85.73999786376953], 'YAngle': -180.0, 'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0, 'EnableInAir': False})
        } {
            Npc_Navi.EventWarpToTargetPosAndRot({'Position': [0.38999998569488525, 136.7100067138672, -85.56999969482422], 'YAngle': -180.0, 'IsWaitEnd': True, 'ClothWarpMode': -1})
        }

        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SageOfSpirit', 'IsIgnoreCompletedChallenge': True, 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step08_01'})
        GameSystemActor.EventRemoveProjectiles({'IsWaitEnd': True})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_SpiritTemple_0020', 'FadeInTypeEventEnd': 2})
        SoundSystemActor.EventTriggerSoundStartSceneBgm({'BgmName': 'BGM_SpiritTemple', 'StartType': 2})
        Enemy_MiddleBoss_IronKnuckle_Nabooru.EventTriggerDeathSignal()
        if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
        }
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Enemy_MiddleBoss_IronKnuckle_Nabooru_BossDefeat'})
    }
}

void SageOfSpirit_BossStart() {
    if !GameSystemActor.EventQueryIsDreamWorld() {
        UISystemActor.EventEventFadeOut({'IsNoPlayAnime': True, 'Color': 0, 'IsWaitEnd': True, 'Length': 3})
        ChallengeSystemActor.EventTriggerShowTimerUI()

        call DreamBossStage.Rematch_Start_Common()

        Event82:
        GameSystemActor.EventWaitForActorPresence({'IsActorCreateRequest': False, 'ActorName': 'Enemy_DungeonBoss_Kotake', 'IsWaitEnd': True, 'InstanceName': 'KotakeKoumeBattleClient'})
        GameSystemActor.EventWaitForActorPresence({'ActorName': 'Enemy_DungeonBoss_Koume', 'IsActorCreateRequest': False, 'IsWaitEnd': True, 'InstanceName': 'KotakeKoumeBattleClient'})

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
        } {
            Enemy_DungeonBoss_Koume[KotakeKoumeBattleClient].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'ClothWarpMode': -1, 'YAngle': -25.121999740600586, 'Position': [18.080219268798828, 147.1699981689453, -149.3780975341797]})
            Enemy_DungeonBoss_Koume[KotakeKoumeBattleClient].EventDoNothing({'IsWaitEnd': True})
        } {
            Enemy_DungeonBoss_Kotake[KotakeKoumeBattleClient].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'ClothWarpMode': -1, 'YAngle': 120.86699676513672, 'Position': [13.418749809265137, 147.1699981689453, -135.6450958251953]})
            Enemy_DungeonBoss_Kotake[KotakeKoumeBattleClient].EventDoNothing({'IsWaitEnd': True})
        } {
            Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'Position': [-0.7900000214576721, 142.16000366210938, -158.7100067138672], 'YAngle': 45.0, 'ASCommand': 'LockOnWait', 'ClothWarpMode': 0, 'EnableInAir': False})
            Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'ClothWarpMode': -1, 'YAngle': 45.0, 'Position': [-0.3799999952316284, 143.26519775390625, -158.84800720214844]})
        } {
            EventCamera.EventMoveToTargetPosCamera({'PosVector': [-4.619999885559082, 143.6699981689453, -162.3300018310547], 'AtVector': [-3.930000066757202, 143.85000610351562, -161.6300048828125], 'TargetFovy': 59.5, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        }

        if GameSystemActor.EventQueryIsDreamWorld() {
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SageOfSpirit', 'IsIgnoreCompletedChallenge': True, 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step09_01'})
        }
        GameSystemActor.EventRemoveProjectiles({'IsWaitEnd': True})
        EventSystemActor.EventTransition({'EventName': 'Dm_SpiritTemple_BossIn', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2})
        Enemy_DungeonBoss_Koume[KotakeKoumeBattleClient].EventSetBattlePresentationOnPreState()
        Enemy_DungeonBoss_Kotake[KotakeKoumeBattleClient].EventSetBattlePresentationOnPreState()
        Enemy_DungeonBoss_Koume[KotakeKoumeBattleClient].EventTriggerSetModelAlpha({'Alpha': 1.0})
        Enemy_DungeonBoss_Kotake[KotakeKoumeBattleClient].EventTriggerSetModelAlpha({'Alpha': 1.0})
        if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {

            call Get_StoneOfForest.BossAppearSkip_KotakeKoume()

        } else {
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 5.0})
        }
        if !GameSystemActor.EventQueryIsDreamWorld() {
            ChallengeSystemActor.EventTriggerMiniGameTimerStart()
        }
    } else {
        Player_Event.EventTriggerPlayerEventStartWithRolling()
        Player_Event.EventTriggerPlayerEventStartWithDrawn()
        EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})

        fork {
            Player_Event.EventPlayerSlowWalkStop({'IsWaitEnd': True, 'IsSheathed': True})
        } {
            UISystemActor.EventEventFadeOut({'Length': 3, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0})
        }

        Player_Event.EventPlayerUnequip({'IsWaitEnd': False})
        Player_Event.EventPlayerPutAway({'IsWaitEnd': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfSpirit_BossIn'})
        goto Event82
    }
}

void SageOfSpirit_BossChange() {

    call Get_StoneOfForest.InitDefeatBoss()

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Enemy_DungeonBoss_TwinrovaChange'})
    GameSystemActor.EventWaitForActorPresence({'IsWaitEnd': True, 'ActorName': 'Enemy_DungeonBoss_Twinrova', 'IsActorCreateRequest': False, 'InstanceName': ''})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [-3.8299999237060547, 143.0399932861328, -161.83999633789062], 'AtVector': [-3.1600000858306885, 143.3000030517578, -161.14999389648438], 'TargetFovy': 50.93000030517578, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'Position': [-0.7900000214576721, 142.16000366210938, -158.7100067138672], 'YAngle': 45.0, 'ASCommand': 'LockOnWait', 'ClothWarpMode': 0, 'EnableInAir': False})
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'ClothWarpMode': -1, 'YAngle': 45.0, 'Position': [-0.3884899914264679, 143.2548065185547, -158.8679962158203]})
    } {
        Enemy_DungeonBoss_Twinrova.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'ClothWarpMode': -1, 'YAngle': 225.0, 'Position': [12.65999984741211, 143.66000366210938, -145.25]})
        Enemy_DungeonBoss_Twinrova.EventDoNothing({'IsWaitEnd': True})
    }

    GameSystemActor.EventRemoveProjectiles({'IsWaitEnd': True})
    EventSystemActor.EventTransition({'EventName': 'Dm_SpiritTemple_0030', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2})
    Enemy_DungeonBoss_Twinrova.EventSetBattlePresentationOnPreState()
    if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {
        SoundSystemActor.EventTriggerSoundStopBgmWithFade({'BGMName': 'BGM_DungeonBoss_KotakeKoume', 'FadeTime': 0.0})
        SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'Dm:Bgm下げ', 'IsImmediately': True, 'DuckingName2': '', 'DuckingName3': '', 'IsClearRefCount': False})

        call Get_StoneOfForest.BossAppearSkip_Twinrova()

        Event434:

        fork {
            Enemy_DungeonBoss_Koume[KotakeKoumeBattleClient].EventTriggerDeathSignal()
        } {
            Enemy_DungeonBoss_Kotake[KotakeKoumeBattleClient].EventTriggerDeathSignal()
        }

        if !GameSystemActor.EventQueryIsDreamWorld() {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DreamBossStage_Enemy_GerudoThief_01'})
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfSpirit_DungeonBoss_KotakeKoume_Off'})
        }
    } else {
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
        goto Event434
    }
}

void SageOfSpirit_BossEnd() {

    call Get_StoneOfForest.InitDefeatBoss()

    if !GameSystemActor.EventQueryIsDreamWorld() {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_BossRush'}) {

            call SubEvent_AllBossBattle.BossRushBossStageExitSuccessTwinrova()

        } else {
            EventSystemActor.EventTransition({'EventName': 'Dm_SpiritTemple_BossOut', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DreamWorld_CreateWarp'})

            call SubEvent_AllBossBattle.BossStageExitProcess()

        }
    } else {
        GameSystemActor.EventRemoveProjectiles({'IsWaitEnd': True})
        EventSystemActor.EventTransition({'EventName': 'Dm_SpiritTemple_BossOut', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2})
        Enemy_DungeonBoss_Twinrova.EventTriggerDeathSignal()
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'UseDemoWait': True, 'NotChangeRot': False, 'InstanceName': 'BossDefeat', 'ActorName': 'DestinationAnchor', 'ASCommand': 'EvtWait'})

        call Common_Camera_Pln.Camera_PlayableAfterBoss()

        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SageOfSpirit', 'IsIgnoreCompletedChallenge': True, 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step10'})
        GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    }
}

void Step05_Npc_Gerudo_Nabooru_Child_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/SageOfSpirit:Near_00', 'NotOverriddenByInterestBalloon': True, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'IsChallenge': False})
}

void Step06_Npc_Gerudo_Nabooru_Child_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'MessageID': 'EventFlowMsg/SageOfSpirit:Near_02', 'IsChallenge': False, 'NotOverriddenByInterestBalloon': False})
}

void Step06_Npc_Gerudo_Nabooru_Child_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.SageOfSpirit_Step06_Npc_Gerudo_Nabooru_Child_Talk_Event18', 'Index': -1}) {
        switch GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'Npc_Gerudo_Nabooru_FlavorTalk_Int'}) {
          case 0:
            GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'GameDataName': 'Npc_Gerudo_Nabooru_FlavorTalk_Int', 'Value': 1})
            Event443:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfSpirit:Talk_14', 'MaintainPerformanceState': 0})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfSpirit:Talk_32', 'ChoiceNumber': 3, 'ChoiceLabel1': 7, 'ChoiceLabel2': 8, 'ChoiceLabel3': 9, 'MaintainPerformanceState': 0, 'ChoiceCancelNo': 1})
            Event369:
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 9, 'MessageId': 'EventFlowMsg/SageOfSpirit:Talk_33', 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
                Event406:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 9, 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/SageOfSpirit:Talk_36', 'MaintainPerformanceState': 0})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 9, 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/SageOfSpirit:Talk_26', 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.SageOfSpirit_Step06_Npc_Gerudo_Nabooru_Child_Talk_Event18', 'Value': True, 'Index': -1})
                if !Player_Event.EventQueryPlayerIsEquipMask() {
                    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 9, 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/SageOfSpirit:Mask_05', 'OverrideStyle': 8, 'IsOverrideStyle': True, 'ASName': 'TalkMonolog', 'MaintainPerformanceState': 0, 'NotPlayLipSyncAnim': True})
                    } else {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 9, 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/SageOfSpirit:Mask_103', 'OverrideStyle': 0, 'IsOverrideStyle': False, 'MaintainPerformanceState': 0, 'NotPlayLipSyncAnim': True, 'ASName': 'TalkMonolog'})
                    }
                } else
                if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_GlassTruth'}) {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 9, 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'ChoiceNumber': 0, 'OverrideStyle': 0, 'IsOverrideStyle': False, 'MessageId': 'EventFlowMsg/SageOfSpirit:Mask_104', 'MaintainPerformanceState': 0, 'NotPlayLipSyncAnim': True, 'ASName': 'TalkMonolog'})
                }
              case 1:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 9, 'ChoiceLabel2': 9, 'MessageId': 'EventFlowMsg/SageOfSpirit:Talk_34', 'ChoiceLabel1': 7, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
                goto Event406
              case 2:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 9, 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'MessageId': 'EventFlowMsg/SageOfSpirit:Talk_35', 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
                goto Event406
            }
          case 1:
            GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'GameDataName': 'Npc_Gerudo_Nabooru_FlavorTalk_Int', 'Value': 1})
            Event339:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 7, 'ChoiceLabel2': 8, 'ChoiceLabel3': 9, 'MessageId': 'EventFlowMsg/SageOfSpirit:Talk_15', 'MaintainPerformanceState': 0, 'ChoiceCancelNo': 1})
            goto Event369
          case 2:
            GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'GameDataName': 'Npc_Gerudo_Nabooru_FlavorTalk_Int', 'Value': 1})
            Event211:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfSpirit:Talk_16', 'ChoiceNumber': 3, 'ChoiceLabel1': 7, 'ChoiceLabel2': 8, 'ChoiceLabel3': 9, 'MaintainPerformanceState': 0, 'ChoiceCancelNo': 1})
            goto Event369
          case 3:
            switch Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice4() {
              case 0:
                goto Event443
              case 1:
                goto Event339
              case 2:
                goto Event211
              case 3:
                Event18:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfSpirit:Talk_38', 'ChoiceNumber': 2, 'ChoiceLabel1': 10, 'ChoiceLabel2': 11, 'ChoiceCancelNo': 1, 'MaintainPerformanceState': 0})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfSpirit:Talk_41', 'ChoiceNumber': 3, 'ChoiceLabel1': 7, 'ChoiceLabel2': 8, 'ChoiceLabel3': 9, 'MaintainPerformanceState': 0, 'ChoiceCancelNo': 1})
                    goto Event369
                } else {
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfSpirit:Talk_39', 'ChoiceNumber': 3, 'ChoiceLabel1': 7, 'ChoiceLabel2': 8, 'ChoiceLabel3': 9, 'MaintainPerformanceState': 0, 'ChoiceCancelNo': 1})
                    goto Event369
                }
            }
          case [4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15]:
            GameSystemActor.EventTriggerSendErrorToEventResource({'Title': '世間話の指定値がおかしい'})
        }
    } else {
        goto Event18
    }
}

void Ready_Npc_Hylia_012_Adult_Talk() {

    call Npc_Hylia_012_Adult.Npc_Hylia_012_SageOfSpirit_Ready()

}

void Meet_FourCarpenter_ClearEvent() {
    Npc_Gerudo_001.EventTriggerParticipateEvent()
    Player_Event.EventTriggerParticipateEvent()

    call InitTalk.Sub_InitFlag_Npc({'Arg_Actor': ActorIdentifier(name="Npc_Gerudo_001")})

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_Gerudo_0025', 'FadeInTypeEventEnd': 0})
    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_Gerudo_001.EventAIScheduleWarpToAnchor({'AnchorType': 2, 'IsWaitEnd': True, 'InstanceName': '', 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'ClothWarpMode': -1})
    EventSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GerudoFortress_Npc_Gerudo_001_IsInFirstPlace', 'Value': False, 'Index': -1})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'SageOfSpirit', 'StepName': 'Step02'})
    Npc_Gerudo_017.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'AnchorType': 6, 'ClothWarpMode': -1})
    ChallengeSystemActor.EventTriggerShowChallengeProgressUI({'ChallengeName': 'SageOfSpirit', 'IsFirstStep': False})
    if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'ActorName1': 'Player_Event', 'VectorSetType1': 3, 'ActorName2': 'Player_Event', 'VectorSetType2': 3, 'Vector1': [0.0, 1.9064199924468994, -3.9794158935546875], 'IsEnableSpaceCheck': True, 'Vector2': [0.0, 0.25, 0.0], 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'SpaceCheckRadius': 0.0, 'IsEnableCameraBodyCheck': False, 'IsConsiderWater': False}) {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'MoveTotargetPosType': 1, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'PosVector': [0.0, 1.7000000476837158, -1.75], 'AtVector': [0.0, 1.5499999523162842, 0.0], 'IsEnableRevertFast': False})
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    } else {
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
    }
}

void GerudoFortress_GotoPrison() {

    call GerudoFortress_GotoPrison_Alert({'Mask00': 'EventFlowMsg/Npc_Gerudo_001:Mask_11', 'Mask01': 'EventFlowMsg/Npc_Gerudo_001:Mask_12', 'Mask02': 'EventFlowMsg/Npc_Gerudo_001:Mask_13', 'Mask03': 'EventFlowMsg/Npc_Gerudo_001:Mask_14', 'Mask04': 'EventFlowMsg/Npc_Gerudo_001:Mask_15', 'Mask05': 'EventFlowMsg/Npc_Gerudo_001:Mask_16', 'Mask06': 'EventFlowMsg/Npc_Gerudo_001:Mask_17', 'Mask07': 'EventFlowMsg/Npc_Gerudo_001:Mask_18', 'Mask08': 'EventFlowMsg/Npc_Gerudo_001:Mask_101', 'Mask09': 'EventFlowMsg/Npc_Gerudo_001:Mask_102', 'Mask10': 'EventFlowMsg/Npc_Gerudo_001:Mask_108', 'FirstAlert': 'EventFlowMsg/Npc_Gerudo_001:Talk_18', 'Alert0': 'EventFlowMsg/Npc_Gerudo_001:Talk_24', 'Alert3': 'EventFlowMsg/Npc_Gerudo_001:Talk_27', 'Alert1': 'EventFlowMsg/Npc_Gerudo_001:Talk_26', 'Alert2': 'EventFlowMsg/Npc_Gerudo_001:Talk_25', 'ClearedAlert0': 'EventFlowMsg/Npc_Gerudo_001:Talk_53', 'AlertTalkFirst': 'EventFlowMsg/Npc_Gerudo_001:Talk_16', 'ClearedAlert1': 'EventFlowMsg/Npc_Gerudo_001:Talk_55'})

}

void Step02_Npc_Gerudo_001_Talk() {

    call Npc_Gerudo_001.Talk()

}

void Find_a_Carpenter00_Npc_Hylia_012_Adult_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_Hylia_012_Adult:Near_02', 'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void SageOfSpirit_GetShield() {
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_SY_Treasurebox'})
}

void SageOfSpirit_MeetNabooru() {
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})

    fork {
        Player_Event.EventPlayerSlowWalkStop({'IsWaitEnd': True, 'IsSheathed': True})
    } {
        UISystemActor.EventEventFadeOut({'Length': 3, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0})
    }

    Player_Event.EventPlayerUnequip({'IsWaitEnd': False})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_DesertColossus_0020', 'FadeInTypeEventEnd': 1})
    SoundSystemActor.EventTriggerSoundStartSceneBgm({'BgmName': 'BGM_SpiritTemple', 'StartType': 2})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_DesertColossus_0025', 'FadeInTypeEventEnd': 2})
    Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'IsNearOffset': False, 'Type': -1, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
    Npc_Gerudo_Nabooru_Child.EventAIScheduleWarpToAnchor({'InstanceName': '', 'IsWaitEnd': True, 'AnchorType': 4, 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'ClothWarpMode': -1})
    Npc_Gerudo_Nabooru_Child.EventTriggerLookAtObject({'InstanceName': '', 'Target': 2, 'ActorName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Npc_Gerudo_Nabooru_Child.EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})

    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVector': [0.0, 1.8200000524520874, -3.450000047683716], 'AtVector': [0.0, 1.2100000381469727, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    }

    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'SageOfSpirit', 'StepName': 'Step06'})
    ChallengeSystemActor.EventTriggerShowChallengeProgressUI({'ChallengeName': 'SageOfSpirit', 'IsFirstStep': False})
}

void Step02_Npc_Gerudo_001_Near_001() {
    Event68:

    call Npc_Gerudo_001.Near()

}

void Step02_Npc_Gerudo_001_NearActorsTalk() {

    call Npc_Gerudo_001.Talk_Meeting()

}

void Step02_Npc_Gerudo_001_NearActorsNear() {
    goto Event68
}

void MaskTalk_FirstTalk() {
    if Npc_EventStarter.EventNPCQueryCheckFrontToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'AngleThreshold': 90.0}) {
        Npc_EventStarter.EventNPCTurnToTargetWithAS({'Target': 2, 'ASName': 'NoticeTurn_Quick', 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': False, 'IsConfront': False})
    }
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorName': 'Armor_Child_Mask_Keaton', 'ArmorSlot': 0}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0, 'ASName': 'Notice', 'MessageId': 'Mask00'})
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorName': 'Armor_Child_Mask_Skull', 'ArmorSlot': 0}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0, 'ASName': 'Notice', 'MessageId': 'Mask01'})
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorName': 'Armor_Child_Mask_Spooky', 'ArmorSlot': 0}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0, 'ASName': 'Notice', 'MessageId': 'Mask02'})
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorName': 'Armor_Child_Mask_Bunny', 'ArmorSlot': 0}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0, 'ASName': 'Notice', 'MessageId': 'Mask03'})
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorName': 'Armor_Child_Mask_Truth', 'ArmorSlot': 0}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0, 'ASName': 'Notice', 'MessageId': 'Mask04'})
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorName': 'Armor_Child_Mask_Goron', 'ArmorSlot': 0}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0, 'ASName': 'Notice', 'MessageId': 'Mask05'})
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorName': 'Armor_Child_Mask_Zora', 'ArmorSlot': 0}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0, 'ASName': 'Notice', 'MessageId': 'Mask06'})
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorName': 'Armor_Child_Mask_Gerudo', 'ArmorSlot': 0}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0, 'ASName': 'Notice', 'MessageId': 'Mask07'})
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Amiibo1'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0, 'ASName': 'Notice', 'MessageId': 'Mask08'})
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Amiibo0'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0, 'ASName': 'Notice', 'MessageId': 'Mask09'})
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Adult_GlassTruth'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0, 'ASName': 'Notice', 'MessageId': 'Mask10'})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveTalked_Special.SageOfSpirit_GerudoFortress_GotoPrison_Event356'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_Hookshot'}) {
            switch GameSystemActor.EventQueryRandomChoice3() {
              case 0:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0, 'ASName': 'Notice', 'MessageId': 'Alert0'})
              case 1:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0, 'ASName': 'Notice', 'MessageId': 'Alert1'})
              case 2:
                Event228:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0, 'ASName': 'Notice', 'MessageId': 'Alert2'})
            }
        } else
        if !GameSystemActor.EventQueryRandomChoice2() {
            goto Event228
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0, 'IsCloseDialog': True, 'ASName': 'Notice', 'MessageId': 'Alert3'})
        }
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0, 'ASName': 'Notice', 'MessageId': 'FirstAlert'})
    }
}

void SageOfSpirit_Navi_CrawlTunnel() {

    call NaviEventCommon.InitTalk_NaviPlayerFront({'IsLookAtNavi': True})


    call NaviEventCommon.EventTalk_Navi_WithPlayerTalk({'MessageId': 'EventFlowMsg/SageOfSpirit:Talk_28'})

    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SageOfSpirit', 'IsIgnoreCompletedChallenge': True, 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step07_pre00'})
}

void Obj_SpiritTemple_StoneTablet_A_01() {

    call SignboardWood.Talk_ReadableOnlyFront()

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HavePlayedEvent.Obj_SpiritTemple_StoneTablet_A_01', 'Index': -1, 'Value': True})
}

void Obj_SpiritTemple_StoneTablet_A_02() {

    call SignboardWood.Talk_ReadableOnlyFront()

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HavePlayedEvent.Obj_SpiritTemple_StoneTablet_A_02', 'Index': -1, 'Value': True})
}

void SageOfSpirit_WalkBackTimeTemple() {
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})

    fork {
        Player_Event.EventPlayerSlowWalkStop({'IsWaitEnd': True, 'IsSheathed': True})
    } {
        UISystemActor.EventEventFadeOut({'Length': 3, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0})
    }

    Player_Event.EventPlayerUnequip({'IsWaitEnd': False})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_TimeTemple_0086', 'FadeInTypeEventEnd': 2})
    Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'YAngle': 90.0, 'Position': [37.81999969482422, 102.87000274658203, -34.0099983215332], 'ASCommand': 'EvtWait', 'ClothWarpMode': 0, 'EnableInAir': False})
    Npc_Navi.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0, 'ClothWarpMode': -1, 'IsWaitEnd': True, 'PositionOffset': [0.4099999964237213, 0.20000000298023224, -0.17000000178813934]})
    Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'IsNearOffset': True, 'Type': 1, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVector': [-0.05999999865889549, 1.2799999713897705, -3.8499999046325684], 'AtVector': [0.0, 1.409999966621399, 0.009999999776482582], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
}

void GerudoFortress_MiddleBossDefeat_Dream() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Enemy_MiddleBoss_GerudoThief.EventTriggerParticipateEvent()

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtCaution', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        Npc_Navi.EventPlayAS({'ASName': 'EvtCaution', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

    fork {

        call DreamBossStage.TimeCountStopGerudoThief()

    } {
        EventSystemActor[Navi_EvtWait].EventWait({'IsWaitEnd': True, 'Frames': 60})
        Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'EvtWait'})
    }

}

void Navi_LeaveDungeon() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerPlayerEventStartWithCarry()
    Player_Event.EventTriggerPlayerEventStartWithRolling()
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Gerudo004_AllTBoxOpen'}) {
        Event489:
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GerudoTrainingGround_OutThroughEntrance', 'Index': -1, 'Value': True})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_SY_BancChangeGo'})
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetIceArrow_IsCompleted_Exp'}) {
        goto Event489
    } else
    if !GameSystemActor.EventQueryIsExistWarpPointForFaroreWind() {
        goto Event489
    } else {
        Npc_Navi.EventTriggerParticipateEvent()
        Player_Event.EventPlayerSlowWalkStop({'IsSheathed': False, 'IsWaitEnd': True})

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ASCommand': 'EvtWait', 'IsWaitEnd': False, 'ForceFadeFrame': 15.0})
            Player_Event.EventTriggerPlayerRequestLookAtTheFront()
        } {
            Event257:
            if !Player_Event.EventQueryCheckPlayerState({'State': 21}) {

                call NaviEventCommon.NaviMove_PlayerTalkPos({'IsUseDisguiseSpeakerPos': True})

                Npc_Navi.EventTriggerBecomeSpeaker()
            } else {
                GameSystemActor[Instance2].EventWait({'IsWaitEnd': True, 'Frames': 10})
                goto Event257
            }
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
            EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 1})
            GameSystemActor.EventWaitTalkCameraInterpolationEnd({'IsWaitEnd': True})
        }


        fork {
            EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'EvtTalk', 'ClothWarpMode': 0})
        } {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoTrainingGround_Navi_LeaveDungeon_HasRead'}) {
                Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfSpirit:TrainingGround_Navi_02', 'ChoiceNumber': 2, 'ChoiceLabel1': 9996, 'ChoiceLabel2': 9997, 'MaintainPerformanceState': 0})
            } else {
                Npc_Navi.EventTalk({'MessageId': 'EventFlowMsg/SageOfSpirit:TrainingGround_Navi_00', 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                Npc_Navi.EventTalk({'MessageId': 'EventFlowMsg/SageOfSpirit:TrainingGround_Navi_01', 'ChoiceNumber': 2, 'ChoiceLabel1': 9996, 'ChoiceLabel2': 9997, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GerudoTrainingGround_Navi_LeaveDungeon_HasRead', 'Value': True})
            }
        }

        if !GameSystemActor.EventQueryTalkChoice2() {
            Npc_Navi.EventNaviFollowPlayer({'Speed': -1.0, 'IsNearOffset': False, 'IsHomePosition': False, 'offset': [-0.4000000059604645, 0.10000000149011612, 0.0], 'OffsetType': -1, 'IsWaitEnd': False})
            goto Event489
        } else {
            Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})

            fork {
                Npc_Navi.EventNaviFollowPlayer({'Speed': -1.0, 'IsHomePosition': True, 'IsNearOffset': True, 'offset': [0.0, 0.0, 0.0], 'OffsetType': -1, 'IsWaitEnd': False})
            } {
                Player_Event.EventPlayerMoveToAnchor({'IsWaitEnd': True, 'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'PosIfNotLeaving', 'RidableGoalDistanceTolerance': 1.0, 'ApplySlowMove': False, 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableTurnAngleToleranceDeg': 90.0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsMoveAnchorFrontDir': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'DecSpeedDistance': 2.0, 'MoveSpeed': 0.699999988079071})
            } {
                EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'TargetActorName': 'Player_Event', 'TargetActorInstanceName': '', 'IdealDistance': 7.5, 'ToleranceXZAngle': 10.0, 'LookAtVectorY': 0, 'ToleranceDistance': 4.0, 'ToleranceYUpwardAngle': 50.0, 'LookAtVectorXZ': 0, 'MoveTime': 72, 'TargetOffset': [0.0, 1.2000000476837158, 0.0], 'CameraCollisionLookAtActorOffset': [0.0, 1.2000000476837158, 0.0], 'ToleranceYDownwardAngle': -15.0})
            }

        }
    }
}

void GerudoFortress_GotoPrison_Pair() {

    fork {

        call GerudoFortress_GotoPrison()

    } {
        if !Npc_Gerudo_HideOutGuard[GerudoFortress_GotoPrison_Pair(Npc_Gerudo_Pair)].EventQueryIsPlayingSameAS({'ASName': 'Down', 'Partial': ''}) {
            Npc_Gerudo_HideOutGuard[GerudoFortress_GotoPrison_Pair(Npc_Gerudo_Pair)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': True, 'ASName': 'Wakeup'})
            Event286:
            Npc_Gerudo_HideOutGuard[GerudoFortress_GotoPrison_Pair(Npc_Gerudo_Pair)].EventNPCTurnToTargetWithAS({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': False, 'ASName': 'NoticeTurn', 'IsConfront': False})
            Npc_Gerudo_HideOutGuard[GerudoFortress_GotoPrison_Pair(Npc_Gerudo_Pair)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Notice'})
        } else
        if !Npc_Gerudo_HideOutGuard[GerudoFortress_GotoPrison_Pair(Npc_Gerudo_Pair)].EventNPCQueryCheckFrontToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'AngleThreshold': 60.0}) {
            Npc_Gerudo_HideOutGuard[GerudoFortress_GotoPrison_Pair(Npc_Gerudo_Pair)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Notice'})
            Npc_Gerudo_HideOutGuard[GerudoFortress_GotoPrison_Pair(Npc_Gerudo_Pair)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        } else {
            goto Event286
        }
    }

}

void GerudoFortress_GotoPrison_Pair_014() {

    call GerudoFortress_GotoPrison_Pair({'Npc_Gerudo_Pair': ActorIdentifier(name="Npc_Gerudo_015")})

}

void GerudoFortress_GotoPrison_Pair_015() {

    call GerudoFortress_GotoPrison_Pair({'Npc_Gerudo_Pair': ActorIdentifier(name="Npc_Gerudo_014")})

}

void GerudoFortress_GotoPrison_Pair_018() {

    call GerudoFortress_GotoPrison_Pair({'Npc_Gerudo_Pair': ActorIdentifier(name="Npc_Gerudo_017")})

}

void GerudoFortress_GotoPrison_Pair_017() {

    call GerudoFortress_GotoPrison_Pair({'Npc_Gerudo_Pair': ActorIdentifier(name="Npc_Gerudo_018")})

}

void GerudoFortress_GotoPrison_Pair_() {

    call GerudoFortress_GotoPrison_Pair({'Npc_Gerudo_Pair': ActorIdentifier(name="Npc_Gerudo_011")})

}

void GerudoFortress_GotoPrison_Pair_0() {

    call GerudoFortress_GotoPrison_Pair({'Npc_Gerudo_Pair': ActorIdentifier(name="Npc_Gerudo_001", sub_name="FortressCleared")})

}

void Npc_Hylia_013_Adult_GerudoFortress_Talk() {

    call SageOfSpirit_RescueCarpenter.GerudoFortress_MiddleBossAppear_01()

}

void Npc_Hylia_013_Adult_FithingGerudoThief_Near() {
    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GerudoFortress_IsAfterHelpCarpenter_Npc_Hylia_013_Adult', 'Index': -1}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'NotOverriddenByInterestBalloon': False, 'IsDisplayInTerror': True, 'MessageID': 'EventFlowMsg/Npc_Hylia_013_Adult:Near_01'})
    }
}

void Npc_Hylia_013_Adult_IsCallingHelp_Near() {

    call SageOfSpirit_RescueCarpenter.Step01_Npc_Hylia_013_Adult_IsCallingHelp_Near()

}

void Npc_Hylia_013_Adult_DestroyGerudoThief_Near() {

    call SageOfSpirit_RescueCarpenter.GerudoFortress_Imprisoned_UntilUnlocked_Near({'GameDataName': 'IsGet_SmallKey_GerudoFortress.SmallKey01'})

}

void Npc_Hylia_013_Adult_DestroyGerudoThief_Talk() {

    call SageOfSpirit_RescueCarpenter.GerudoFortress_Imprisoned_UntilUnlocked_Talk()

}

void Npc_Hylia_014_Adult_GerudoFortress_Talk() {

    call SageOfSpirit_RescueCarpenter.GerudoFortress_MiddleBossAppear_02()

}

void Npc_Hylia_014_Adult_FightingGerudoThief_Near() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_IsAfterHelpCarpenter_Npc_Hylia_014_Adult'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'NotOverriddenByInterestBalloon': False, 'IsDisplayInTerror': True, 'MessageID': 'EventFlowMsg/Npc_Hylia_014_Adult:Near_01'})
    }
}

void Npc_Hylia_014_Adult_IsCallingHelp_Near() {

    call SageOfSpirit_RescueCarpenter.GerudoFortress_Npc_Hylia_014_Adult_Near_BeforeTalking()

}

void Npc_Hylia_014_Adult_DestroyGerudoThief_Near() {

    call SageOfSpirit_RescueCarpenter.GerudoFortress_Imprisoned_UntilUnlocked_Near({'GameDataName': 'IsGet_SmallKey_GerudoFortress.SmallKey02'})

}

void Npc_Hylia_014_Adult_DestroyGerudoThief_Talk() {

    call SageOfSpirit_RescueCarpenter.GerudoFortress_Imprisoned_UntilUnlocked_Talk()

}

void Npc_Hylia_015_Adult_GerudoFortress_Talk() {

    call SageOfSpirit_RescueCarpenter.GerudoFortress_MiddleBossAppear_03()

}

void Npc_Hylia_015_Adult_IsCallingHelp_Near() {

    call SageOfSpirit_RescueCarpenter.GerudoFortress_Npc_Hylia_015_Adult_Near_BeforeTalking()

}

void Npc_Hylia_015_Adult_FightingGerudoThief_Near() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_IsAfterHelpCarpenter_Npc_Hylia_015_Adult'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'NotOverriddenByInterestBalloon': False, 'IsDisplayInTerror': True, 'MessageID': 'EventFlowMsg/Npc_Hylia_015_Adult:Near_01'})
    }
}

void Npc_Hylia_015_Adult_DestroyGerudoThief_Near() {

    call SageOfSpirit_RescueCarpenter.GerudoFortress_Imprisoned_UntilUnlocked_Near({'GameDataName': 'IsGet_SmallKey_GerudoFortress.SmallKey03'})

}

void Npc_Hylia_015_Adult_DestroyGerudoThief_Talk() {

    call SageOfSpirit_RescueCarpenter.GerudoFortress_Imprisoned_UntilUnlocked_Talk()

}

void Npc_Hylia_016_Adult_FightingGerudoThief_Near() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_IsAfterHelpCarpenter_Npc_Hylia_016_Adult'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'NotOverriddenByInterestBalloon': False, 'IsDisplayInTerror': True, 'MessageID': 'EventFlowMsg/Npc_Hylia_016_Adult:Near_01'})
    }
}

void Npc_Hylia_016_Adult_DestroyGerudoThief_Near() {

    call SageOfSpirit_RescueCarpenter.GerudoFortress_Imprisoned_UntilUnlocked_Near({'GameDataName': 'IsGet_SmallKey_GerudoFortress.SmallKey04'})

}

void Npc_Hylia_016_Adult_DestroyGerudoThief_Talk() {

    call SageOfSpirit_RescueCarpenter.GerudoFortress_Imprisoned_UntilUnlocked_Talk()

}

void Npc_Hylia_016_Adult_GerudoFortress_Talk() {

    call SageOfSpirit_RescueCarpenter.GerudoFortress_MiddleBossAppear_04()

}

void Npc_Hylia_016_Adult_OutSideIsCallingHelp_Talk() {

    call SageOfSpirit_RescueCarpenter.GerudoFortress_Npc_Hylia_016_Adult_IsCallingHelp_Talk_OnOutdoor()

}

void Npc_Hylia_016_Adult_GerudoFortress_PlayerNear() {

    call SageOfSpirit_RescueCarpenter.GerudoFortress_Npc_Hylia_016_Adult_Near_BeforeTalking()

}

void SageOfSpirit_OcarinaBackTimeTemple() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:Bgmミュート(即フェード)', 'DuckingName3': '', 'CommandLife': 0, 'DuckingName2': ''})
    UISystemActor.EventEventFadeOut({'IsNoPlayAnime': True, 'IsWaitEnd': False, 'Length': 3, 'Color': 1})
    SoundSystemActor.EventSoundWaitForOcarinaMelodyFinished({'TimeoutFrame': 600, 'IsWaitEnd': True})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_TimeTemple_0087', 'FadeInTypeEventEnd': 2})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_TimeTemple_0086', 'FadeInTypeEventEnd': 2})
    Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'YAngle': 90.0, 'Position': [37.81999969482422, 102.87000274658203, -34.0099983215332], 'ASCommand': 'EvtWait', 'ClothWarpMode': 0, 'EnableInAir': False})
    Npc_Navi.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0, 'ClothWarpMode': -1, 'IsWaitEnd': True, 'PositionOffset': [0.4099999964237213, 0.20000000298023224, -0.17000000178813934]})
    Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'IsNearOffset': True, 'Type': 1, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVector': [-0.05999999865889549, 1.2799999713897705, -3.8499999046325684], 'AtVector': [0.0, 1.409999966621399, 0.009999999776482582], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
}

void NPC_FocusCamera() {
    if GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Npc_EventStarter', 'ActorNameB': 'Player_Event', 'InstanceNameA': '', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'CheckDistance': 5.0}) {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Npc_EventStarter', 'ActorNameB': 'Player_Event', 'InstanceNameA': '', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'CheckDistance': 10.0}) {
            if !EventCamera.EventQueryCameraCheckRayCastForBasedOnLookAt({'TargetActorLink': 'Npc_EventStarter', 'TargetOffset': [0.0, 1.0, 0.20000000298023224], 'IdealDistance': 6.0, 'ToleranceXZAngle': 360.0, 'TargetActorInstanceName': '', 'ToleranceDistance': 3.0, 'ToleranceYUpwardAngle': 25.0, 'ToleranceYDownwardAngle': -45.0, 'LookAtVectorY': 1, 'LookAtVectorXZ': 0}) {
                Event486:
                if EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'VectorSetType': 3, 'ActorName': 'Player_Event', 'Vector': [0.0, 2.0, 0.0], 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False})
                && EventCamera.EventQueryCameraCheckOcclusionToTarget({'ActorName1': 'Player_Event', 'VectorSetType1': 3, 'ActorName2': 'Npc_EventStarter', 'VectorSetType2': 2, 'Vector2': [0.0, 1.0, 0.20000000298023224], 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'IsEnableSpaceCheck': False, 'SpaceCheckRadius': 0.0, 'IsEnableCameraBodyCheck': False, 'IsConsiderWater': False, 'Vector1': [0.0, 2.25, 0.0]}) {
                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Npc_EventStarter', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVectorSetType': 4, 'PosVectorSetType': 3, 'AtVector': [0.0, 1.0, 0.20000000298023224], 'CameraCollisionLookAtActor': 2, 'CameraCollisionLookAtActorOffset': [0.0, 2.0, 0.0], 'MoveTotargetPosType': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTime': 60, 'EnableCameraAlpha': True, 'TargetFovy': 40.0, 'CameraCollisionMode': 0, 'PosVector': [0.0, 2.25, 0.0], 'IsEnableRevertFast': False})
                }
            } else {
                EventCamera.EventBasedOnLookAtCamera({'TargetOffset': [0.0, 1.0, 0.20000000298023224], 'MoveTime': 45, 'TargetActorName': 'Npc_EventStarter', 'IdealDistance': 6.0, 'ToleranceDistance': 3.0, 'ToleranceXZAngle': 360.0, 'IsWaitEnd': True, 'TargetActorInstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'ToleranceYUpwardAngle': 25.0, 'CameraCollisionMode': 2, 'ToleranceYDownwardAngle': -45.0, 'LookAtVectorY': 1, 'LookAtVectorXZ': 0})
            }
        } else
        if !EventCamera.EventQueryCameraCheckRayCastForBasedOnLookAt({'TargetActorLink': 'Npc_EventStarter', 'ToleranceDistance': 2.0, 'IdealDistance': 10.0, 'TargetOffset': [0.0, 1.0, 0.20000000298023224], 'ToleranceXZAngle': 360.0, 'TargetActorInstanceName': '', 'ToleranceYUpwardAngle': 25.0, 'ToleranceYDownwardAngle': -45.0, 'LookAtVectorY': 1, 'LookAtVectorXZ': 0}) {
            goto Event486
        } else {
            EventCamera.EventBasedOnLookAtCamera({'TargetOffset': [0.0, 1.0, 0.20000000298023224], 'IdealDistance': 10.0, 'ToleranceDistance': 2.0, 'MoveTime': 45, 'TargetActorName': 'Npc_EventStarter', 'ToleranceXZAngle': 360.0, 'IsWaitEnd': True, 'TargetActorInstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'ToleranceYUpwardAngle': 25.0, 'CameraCollisionMode': 2, 'ToleranceYDownwardAngle': -45.0, 'LookAtVectorY': 1, 'LookAtVectorXZ': 0})
        }
    }
}

void GerudoFortress_GotoPrison_Alert() {
    Event130:

    call Common.AirStartUp()


    call InitTalk.Sub_InitTalk_Npc_NoSpeaker({'Arg_Greeting': 4, 'Arg_Turn': 1, 'Arg_Actor': ActorIdentifier(name="Npc_EventStarter")})


    fork {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfSpirit_IsAfter_Step01_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_GoToPrison_AfterClear'})
            && !GameSystemActor.EventQueryRandomChoice2() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0, 'ASName': 'Notice', 'MessageId': 'ClearedAlert1'})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0, 'ASName': 'Notice', 'MessageId': 'ClearedAlert0'})
            }
        } else {

            call MaskTalk_FirstTalk({'Mask00': 'Mask00', 'Mask01': 'Mask01', 'Mask02': 'Mask02', 'Mask03': 'Mask03', 'Mask04': 'Mask04', 'Mask05': 'Mask05', 'Mask06': 'Mask06', 'Mask07': 'Mask07', 'Mask08': 'Mask08', 'Mask09': 'Mask09', 'Mask10': 'Mask10', 'FirstAlert': 'FirstAlert', 'Alert0': 'Alert0', 'Alert1': 'Alert1', 'Alert2': 'Alert2', 'Alert3': 'Alert3'})

        }
    } {
        if !Player_Event.EventQueryPlayerCheckRideHorse({'IsRidingAny': False, 'Type': 0, 'ActorFileName': ''}) {
            Player_Event.EventTriggerPlayerEventStartWithoutStopRidingTarget()
            Player_Event.EventPlayerSetExtraOrderDecelerateToStop({'IsWaitEnd': True, 'StopToTime': 5, 'WaitUntilStable': False})
            Player_Event.EventPlayerPlayASFollowRideHorse({'IsWaitEnd': True})
            Player_Event.EventTriggerPlayerLookAtObject({'Target': 1, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 60.0})
        } else {

            fork {
                EventSystemActor.EventWait({'Frames': 5, 'IsWaitEnd': True})
                if Player_Event.EventQueryCheckPlayerState({'State': 4}) {
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
                }
                Player_Event.EventTriggerPlayerLookAtObject({'Target': 1, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 60.0})
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfSpirit_IsAfter_Step01_Exp'}) {
                    Npc_EventStarter.EventTriggerBecomeSpeaker()
                    Player_Event.EventPlayerTurnAndLook({'Target': 1, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': False})
                    Player_Event.EventPlayerBackMoveForTalk({'IsWaitEnd': True, 'OffsetDist': -0.800000011920929})
                } else {
                    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtFlinchLong', 'IsWaitEnd': False, 'ClothWarpMode': 0})
                }
            } {
                Npc_Navi.EventNaviLookAtObject({'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'Target': 1, 'IsWaitEnd': True})

                call NaviChat.NaviEmotionChange_NoTime({'EmotionType': 4})

                Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'EvtTalk', 'IsWaitEnd': False})
            }

        }
    } {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_Hookshot'})
        && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.SageOfSpirit_GerudoFortress_GotoPrison_Event356', 'Index': -1}) {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})

            call NPC_FocusCamera()

        }
    }

    Npc_EventStarter.EventTriggerBecomeSpeaker()
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfSpirit_IsAfter_Step01_Exp'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_001:Talk_54', 'MaintainPerformanceState': 0, 'ASName': 'Notice'})
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Obj_Gerudo_SwitchShutter_A_08[RestrictedDoor_GerudoFortress_00].EventDoorClose({'IsWaitEnd': True})
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'InstanceName': 'GotoPrison_FromFortressGuard', 'ActorName': 'DestinationAnchor', 'ASCommand': 'EvtWait'})

        call NaviEventCommon.NaviWarp_PlayerHomePos({'IsLookAtPlayer': False})

        GameSystemActor.EventAIScheduleNPCForceSecurityLifted({'IsWaitEnd': True})
        GameSystemActor.EventTriggerRequestOwnedHorseForceChangeBanc({'Banc': 'GerudoValley', 'Position': [-46.12677001953125, 101.66840362548828, -9.52242374420166], 'RotY': -31.0})
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        EventSystemActor.EventTransition({'EventName': 'Dm_Gerudo_0010', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_GoToPrison_AfterClear'}) {
            Npc_Navi.EventNaviRequestBallonMessage({'Index': 45})
        } else {
            Npc_Navi.EventNaviRequestBallonMessage({'Index': 44})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GerudoFortress_GoToPrison_AfterClear'})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_Hookshot'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.SageOfSpirit_GerudoFortress_GotoPrison_Event356', 'Index': -1}) {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            Npc_Navi.EventNaviRequestBallonMessage({'Index': 131})
            Event248:
            UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.SageOfSpirit_GerudoFortress_GotoPrison_Event356', 'Value': True, 'Index': -1})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GerudoFortress_GoToPrison'})
            Obj_Gerudo_SwitchShutter_A_08[RestrictedDoor_GerudoFortress_00].EventDoorClose({'IsWaitEnd': True})
            Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'InstanceName': 'GotoPrison_FromFortressGuard', 'ActorName': 'DestinationAnchor', 'ASCommand': 'EvtWait'})

            call NaviEventCommon.NaviWarp_PlayerHomePos({'IsLookAtPlayer': False})

            GameSystemActor.EventAIScheduleNPCForceSecurityLifted({'IsWaitEnd': True})
            GameSystemActor.EventTriggerRequestOwnedHorseForceChangeBanc({'Banc': 'GerudoValley', 'Position': [-46.12677001953125, 101.66840362548828, -9.52242374420166], 'RotY': -31.0})
            Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
            EventSystemActor.EventTransition({'EventName': 'Dm_Gerudo_0010', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
            EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
        } else {

            call NPC_FocusCamera()

            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'ASName': 'Notice', 'MessageId': 'AlertTalkFirst'})
            Npc_Navi.EventNaviRequestBallonMessage({'Index': 130})
            goto Event248
        }
    } else {

        call NPC_FocusCamera()

        if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.SageOfSpirit_GerudoFortress_GotoPrison_Event336', 'Index': -1}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'ASName': 'Notice', 'MessageId': 'AlertTalkFirst'})
        }
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_001:Talk_36', 'MaintainPerformanceState': 0})
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.SageOfSpirit_GerudoFortress_GotoPrison_Event336', 'Value': True, 'Index': -1})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.SageOfSpirit_GerudoFortress_GotoPrison_Event356', 'Value': True, 'Index': -1})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GerudoFortress_RunFromFortress'})
        GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'IsStartOnEvent': False, 'FadePattern': 0, 'NextBanc': 'GerudoValley_Adult', 'NextStartPos': 'GerudoValley_FromGerudoFortress', 'EventStarterName': '', 'BootEventName': 'Dm_SY_BancChangeArrive_GerudoValley_01', 'IsItemWarp': False})
    }
}

void GerudoFortress_GotoPrison_sub() {

    call GerudoFortress_GotoPrison_Suprise({'Mask00': 'EventFlowMsg/Npc_Gerudo_001:Mask_27', 'Mask01': 'EventFlowMsg/Npc_Gerudo_001:Mask_28', 'Mask02': 'EventFlowMsg/Npc_Gerudo_001:Mask_29', 'Mask03': 'EventFlowMsg/Npc_Gerudo_001:Mask_30', 'Mask04': 'EventFlowMsg/Npc_Gerudo_001:Mask_31', 'Mask05': 'EventFlowMsg/Npc_Gerudo_001:Mask_32', 'Mask06': 'EventFlowMsg/Npc_Gerudo_001:Mask_33', 'Mask07': 'EventFlowMsg/Npc_Gerudo_001:Mask_34', 'Mask08': 'EventFlowMsg/Npc_Gerudo_001:Mask_109', 'Mask09': 'EventFlowMsg/Npc_Gerudo_001:Mask_110', 'Mask10': 'EventFlowMsg/Npc_Gerudo_001:Mask_111', 'FirstAlert': 'EventFlowMsg/Npc_Gerudo_001:Talk_19', 'Alert0': 'EventFlowMsg/Npc_Gerudo_001:Talk_37', 'Alert1': 'EventFlowMsg/Npc_Gerudo_001:Talk_58', 'Alert2': 'EventFlowMsg/Npc_Gerudo_001:Talk_59', 'Alert3': 'EventFlowMsg/Npc_Gerudo_001:Talk_60', 'ClearedAlert0': 'EventFlowMsg/Npc_Gerudo_001:Talk_62', 'ClearedAlert1': 'EventFlowMsg/Npc_Gerudo_001:Talk_64', 'AlertTalkFirst': 'EventFlowMsg/Npc_Gerudo_001:Talk_17'})

}

void GerudoFortress_GotoPrison_Suprise() {
    goto Event130
}

void GerudoFortress_GotoPrison_004() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetIceArrow_IsCompleted_Exp'}) {
        if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Gerudo_004_Talk_Event64', 'Index': -1}) {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Gerudo_004_Talk_Event64', 'Value': True, 'Index': -1})
        }
        Event456:

        call GerudoFortress_GotoPrison_sub()

    } else {
        goto Event456
    }
}
