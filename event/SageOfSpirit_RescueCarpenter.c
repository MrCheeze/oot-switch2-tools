-------- EventFlow: SageOfSpirit_RescueCarpenter --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerAddOrSubGameDataInt', 'EventTriggerSetGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventTriggerSetVolatileGeneralPurposeFlag']
queries: ['EventQueryVolatileGeneralPurposeFlagOn']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventReserveBancChange', 'EventWaitForActorPresence', 'EventWait', 'EventTriggerRequestAutoSave', 'EventEnterGameSafetySection', 'EventTriggerLeaveGameSafetySection', 'EventWaitTalkCameraInterpolationEnd']
queries: ['EventQueryIsDreamWorld', 'EventQueryRandomChoice3', 'EventQueryRandomChoice2', 'EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventSoundReleaseDucking', 'EventTriggerForbidEmitIfOutsideView', 'EventTriggerCancelForbidEmitIfOutsideView', 'EventSoundStartSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventBasedOnLookAtCamera', 'EventTriggerRequestCameraShake', 'EventTriggerRequestStopCameraShake', 'EventSendEventTalkMessageToPlayerCamera']
queries: ['EventQueryCameraCheckRayCastForMoveToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToStarterLinkAnchor', 'EventPlayerTurnAndLook', 'EventTriggerParticipateEvent', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerLookAtObject', 'EventTriggerPlayerEventStartWithDrawn', 'EventPlayerConversate', 'EventPlayerUnequip', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventTriggerPlayerContinueSlippingDown', 'EventPlayerOnStopMode', 'EventPlayerOffStopMode', 'EventPlayerWarpToTargetActor', 'EventGoOffstageForUser']
queries: ['EventQueryIsDirToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventAS': 'Work/AS/Root/Event/GerudoFortress_MiddleBossDefeat_04_Player.root.as', 'UseEventModelAnime': 'Work/Model/Event/GerudoFortress_MiddleBossDefeat_04/GerudoFortress_MiddleBossDefeat_04/workspace.pp__ModelProject.gyml'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_016_Adult[GerudoFortress]
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventAIScheduleMoveToAnchor', 'EventTriggerLookAtObject']
queries: ['EventQueryAIScheduleCheckActorActionAll']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_015_Adult[GerudoFortress]
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_014_Adult[GerudoFortress]
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_013_Adult[GerudoFortress]
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_MiddleBoss_GerudoThief_04
entrypoint: None()
actions: []
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 4}

Actor: Enemy_MiddleBoss_GerudoThief
entrypoint: None()
actions: []
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 4}

Actor: Enemy_MiddleBoss_GerudoThief_02
entrypoint: None()
actions: []
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 4}

Actor: Enemy_MiddleBoss_GerudoThief_03
entrypoint: None()
actions: []
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 4}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviRequestBallonMessage', 'EventNaviMoveAroundToPlayer', 'EventTalk', 'EventNaviMovePosTalkToPlayer', 'EventTriggerParticipateEvent', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Obj_Dungeon_SmallKey_GerudoFortress_01[SmallKeyForEvent_01]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_Dungeon_SmallKey_GerudoFortress_02[SmallKeyForEvent_02]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_Dungeon_SmallKey_GerudoFortress_03[SmallKeyForEvent_03]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_Dungeon_SmallKey_GerudoFortress_04[SmallKeyForEvent_04]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[GerudoThief01_Defeat]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[GerudoThief02_Defeat]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[GerudoThief03_Defeat]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[GerudoThief04_Defeat]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[GerudoThief04_ReAppear]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[GerudoThief03_ReAppear]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[GerudoThief02_ReAppear]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[GerudoThief01_ReAppear]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[GerudoThief04_Appear]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[GerudoThief03_Appear]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[GerudoThief02_Appear]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[GerudoThief01_Appear]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Gerudo_017
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Npc_Invisible_GerudoThief
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_MiddleBoss_GerudoThief[GerudoFortress_GerudoThiefLose(Enemy_MiddleBoss_GerudoThief)]
entrypoint: GerudoFortress_GerudoThiefLose(Enemy_MiddleBoss_GerudoThief)
actions: ['EventWaitUntilASCancellable', 'EventTriggerSetCctForwardSpeedZero', 'EventPlayAS']
queries: []
params: None

Actor: Enemy_MiddleBoss_GerudoThief_04[GerudoFortress_BeAnMiddleBoss(AppearGerudoThief_ActorId)]
entrypoint: GerudoFortress_BeAnMiddleBoss(AppearGerudoThief_ActorId)
actions: ['EventPlayAS']
queries: []
params: None

Actor: Npc_Hylia_016_Adult[GerudoFortress_BeAnMiddleBoss(FoundNpc_ActorId)]
entrypoint: GerudoFortress_BeAnMiddleBoss(FoundNpc_ActorId)
actions: ['EventTalk', 'EventTriggerRequestLookAtTheFront', 'EventPlayAS', 'EventTriggerLookAtObject', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Dm_Locator[GerudoFortress_BeAnMiddleBoss(Dm_Locator)]
entrypoint: GerudoFortress_BeAnMiddleBoss(Dm_Locator)
actions: ['EventTriggerEmitXLink']
queries: []
params: None

Actor: Obj_Dungeon_SmallKey[GerudoThiefDropKey(Obj_SmallKey)]
entrypoint: GerudoThiefDropKey(Obj_SmallKey)
actions: ['EventTriggerParticipateEvent', 'EventWarpToActorIncludedRayCheck']
queries: []
params: None

Actor: Enemy_MiddleBoss_GerudoThief[GerudoThiefDropKey(Actor_GerudoThief)]
entrypoint: GerudoThiefDropKey(Actor_GerudoThief)
actions: ['EventTriggerParticipateEvent', 'EventWarpToTargetActor', 'EventPlayAS', 'EventTriggerStartFadeOut', 'EventGoOffstageForUser', 'EventTriggerDeathSignal']
queries: ['EventQueryCalcTargetAngleDiff']
params: None

Actor: Dm_Locator[GerudoThiefDropKey(Dm_Locator)]
entrypoint: GerudoThiefDropKey(Dm_Locator)
actions: ['EventWarpToTargetActor', 'EventTriggerEmitXLink']
queries: []
params: None

Actor: Enemy_MiddleBoss_GerudoThief[GerudoThiefReAppear(GerudoThief)]
entrypoint: GerudoThiefReAppear(GerudoThief)
actions: ['EventActorWarpToAnchor', 'EventPlayAS']
queries: []
params: None

Actor: Dm_Locator[GerudoThiefReAppear(Dm_Locator)]
entrypoint: GerudoThiefReAppear(Dm_Locator)
actions: ['EventTriggerEmitXLink']
queries: []
params: None

Actor: Npc_Hylia_016_Adult[GerudoThiefReAppear(Npc_Hylia)]
entrypoint: GerudoThiefReAppear(Npc_Hylia)
actions: ['EventTriggerRequestLookAtTheFront', 'EventPlayAS']
queries: []
params: None

Actor: Enemy_MiddleBoss_GerudoThief_04[GerudoFortress_BeAnMiddleBoss_ApproachShutter(AppearGerudoThief_ActorId)]
entrypoint: GerudoFortress_BeAnMiddleBoss_ApproachShutter(AppearGerudoThief_ActorId)
actions: ['EventPlayAS']
queries: []
params: None

Actor: Npc_Hylia_016_Adult[GerudoFortress_BeAnMiddleBoss_ApproachShutter(FoundNpc_ActorId)]
entrypoint: GerudoFortress_BeAnMiddleBoss_ApproachShutter(FoundNpc_ActorId)
actions: ['EventTalk', 'EventTriggerRequestLookAtTheFront', 'EventPlayAS', 'EventTriggerLookAtObject', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Dm_Locator[GerudoFortress_BeAnMiddleBoss_ApproachShutter(Dm_Locator)]
entrypoint: GerudoFortress_BeAnMiddleBoss_ApproachShutter(Dm_Locator)
actions: ['EventTriggerEmitXLink']
queries: []
params: None

Actor: Enemy_MiddleBoss_GerudoThief[GerudoFortress_MiddleBossLose(Enemy_MiddleBoss_GerudoThief)]
entrypoint: GerudoFortress_MiddleBossLose(Enemy_MiddleBoss_GerudoThief)
actions: []
queries: []
params: None

Actor: Enemy_MiddleBoss_GerudoThief[GerudoFortress_MiddleBossLose2(Enemy_MiddleBoss_GerudoThief)]
entrypoint: GerudoFortress_MiddleBossLose2(Enemy_MiddleBoss_GerudoThief)
actions: []
queries: []
params: None

Actor: Enemy_MiddleBoss_GerudoThief[GerudoFortress_MiddleBossLose3(Enemy_MiddleBoss_GerudoThief)]
entrypoint: GerudoFortress_MiddleBossLose3(Enemy_MiddleBoss_GerudoThief)
actions: []
queries: []
params: None

Actor: Enemy_MiddleBoss_GerudoThief[GerudoFortress_MiddleBossLose4(Enemy_MiddleBoss_GerudoThief)]
entrypoint: GerudoFortress_MiddleBossLose4(Enemy_MiddleBoss_GerudoThief)
actions: []
queries: []
params: None

void GerudoFortress_GerudoThiefLose() {
    if !GameSystemActor.EventQueryIsDreamWorld() {

        call DreamBossStage.Rematch_Lose_GerudoThief({'Enemy_MiddleBoss_GerudoThief': ActorIdentifier(name="Enemy_MiddleBoss_GerudoThief")})

    } else {
        GameSystemActor.EventTriggerLeaveGameSafetySection()
        Player_Event.EventTriggerPlayerContinueSlippingDown()
        SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': True, 'FadeType': 1, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
        Enemy_MiddleBoss_GerudoThief[GerudoFortress_GerudoThiefLose(Enemy_MiddleBoss_GerudoThief)].EventWaitUntilASCancellable({'IsWaitEnd': True})

        fork {
            Enemy_MiddleBoss_GerudoThief[GerudoFortress_GerudoThiefLose(Enemy_MiddleBoss_GerudoThief)].EventTriggerSetCctForwardSpeedZero({'IsWaitEnd': True})
            Enemy_MiddleBoss_GerudoThief[GerudoFortress_GerudoThiefLose(Enemy_MiddleBoss_GerudoThief)].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            Npc_Invisible_GerudoThief.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_001:Talk_22', 'IsCloseDialog': False, 'IsWaitEnd': True, 'EndDialogOption': 3, 'MaintainPerformanceState': 0})
        } {
            UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        }

        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_Hookshot'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HavePlayedEvent.GerudoFortress_MiddleBossLose', 'Index': -1}) {
                Event332:
                Npc_Invisible_GerudoThief.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_001:Talk_15', 'MaintainPerformanceState': 0})
                Npc_Invisible_GerudoThief.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_001:Talk_35', 'MaintainPerformanceState': 0})
                Npc_Navi.EventNaviRequestBallonMessage({'Index': 131})
                Event206:

                call Process_GotoPrison()

                EventSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
                EventSystemActor.EventTransition({'EventName': 'Dm_Gerudo_0010', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GerudoFortress_IsGoingPrison', 'Value': False, 'Index': -1})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GerudoFortress_GoToPrison'})
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.GerudoFortress_MiddleBossLose_02'}) {
                goto Event332
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.GerudoFortress_MiddleBossLose_03'}) {
                goto Event332
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.GerudoFortress_MiddleBossLose_04'}) {
                goto Event332
            } else {
                Npc_Invisible_GerudoThief.EventTalk({'MessageId': 'EventFlowMsg/Npc_Gerudo_001:Talk_12', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MaintainPerformanceState': 0})
                Npc_Invisible_GerudoThief.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_001:Talk_23', 'MaintainPerformanceState': 0})
                Npc_Navi.EventNaviRequestBallonMessage({'Index': 130})
                goto Event206
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HavePlayedEvent.GerudoFortress_MiddleBossLose', 'Index': -1}) {
            Event342:
            Npc_Invisible_GerudoThief.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_001:Talk_29', 'MaintainPerformanceState': 0})
            Event336:
            UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

            call Process_GotoPrison()

            GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'IsStartOnEvent': False, 'FadePattern': 0, 'BootEventName': '', 'NextBanc': 'GerudoValley_Adult', 'NextStartPos': 'GerudoValley_FromGerudoFortress', 'EventStarterName': '', 'IsItemWarp': False})
            UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.GerudoFortress_MiddleBossLose_02'}) {
            goto Event342
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.GerudoFortress_MiddleBossLose_03'}) {
            goto Event342
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.GerudoFortress_MiddleBossLose_04'}) {
            goto Event342
        } else {
            Npc_Invisible_GerudoThief.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_001:Talk_28', 'MaintainPerformanceState': 0})
        }
        goto Event336
    }
}

void GerudoFortress_MiddleBossAppear_01() {

    call InitTalk.InitTalk_OnEvent_NoCamera_Navi_ForceNormalCamera({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_013_Adult", sub_name="GerudoFortress"), 'InstanceNameA': 'GerudoFortress', 'ActorNameA': 'Npc_Hylia_013_Adult'})


    call CarpenterTalkCam()

    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_013_Adult:Talk_01', 'MaintainPerformanceState': 0})

    call GerudoFortress_BeAnMiddleBoss({'AppearGerudoThief_Flag': 'GerudoFortress_AppearGerudoThief_Npc_Hylia_013_Adult', 'AppearGerudoThief_ActorName': 'Enemy_MiddleBoss_GerudoThief', 'FoundNpc_Flag': 'Found_Npc_Hylia_013_Adult', 'PlayerBattleStartPos_AnchorInstanceName': 'WalkPoint01', 'AppearGerudoThief_ASName': 'BattleStart', 'InstanceName': 'GerudoThief01_Appear', 'CloseShatter': 'GerudoFortress_CloseShutter_Npc_Hylia_013_Adult', 'PlayerPos': 'WalkPoint00', 'EnemyPos': 'GerudoThief_01', 'LastCarpenterMessage': 'EventFlowMsg/Npc_Hylia_013_Adult:Talk_06', 'CameraPosVector': [30.72599983215332, 104.25189971923828, -66.33999633789062], 'AppearGerudoThief_ActorId': ActorIdentifier(name="Enemy_MiddleBoss_GerudoThief"), 'FoundNpc_ActorId': ActorIdentifier(name="Npc_Hylia_013_Adult", sub_name="GerudoFortress"), 'Dm_Locator': ActorIdentifier(name="Dm_Locator", sub_name="GerudoThief01_Appear")})

}

void GerudoFortress_MiddleBossAppear_02() {

    call InitTalk.InitTalk_OnEvent_NoCamera_Navi_ForceNormalCamera({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_014_Adult", sub_name="GerudoFortress"), 'ActorNameA': 'Npc_Hylia_014_Adult', 'InstanceNameA': 'GerudoFortress'})


    call CarpenterTalkCam()


    call GerudoFortress_BeAnMiddleBoss({'FoundNpc_Flag': 'Found_Npc_Hylia_014_Adult', 'AppearGerudoThief_ActorName': 'Enemy_MiddleBoss_GerudoThief_02', 'AppearGerudoThief_Flag': 'GerudoFortress_AppearGerudoThief_Npc_Hylia_014_Adult', 'PlayerBattleStartPos_AnchorInstanceName': 'WalkPoint03', 'AppearGerudoThief_ASName': 'BattleStart', 'InstanceName': 'GerudoThief02_Appear', 'CloseShatter': 'GerudoFortress_CloseShutter_Npc_Hylia_014_Adult', 'PlayerPos': 'WalkPoint00', 'EnemyPos': 'GerudoThief_02', 'LastCarpenterMessage': 'EventFlowMsg/Npc_Hylia_014_Adult:Talk_01', 'AppearGerudoThief_ActorId': ActorIdentifier(name="Enemy_MiddleBoss_GerudoThief_02"), 'FoundNpc_ActorId': ActorIdentifier(name="Npc_Hylia_014_Adult", sub_name="GerudoFortress"), 'Dm_Locator': ActorIdentifier(name="Dm_Locator", sub_name="GerudoThief02_Appear"), 'CameraPosVector': [70.6240005493164, 122.18900299072266, -111.37799835205078]})

}

void GerudoFortress_MiddleBossAppear_03() {

    call InitTalk.InitTalk_OnEvent_NoCamera_Navi_ForceNormalCamera({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_015_Adult", sub_name="GerudoFortress"), 'ActorNameA': 'Npc_Hylia_015_Adult', 'InstanceNameA': 'GerudoFortress'})


    call CarpenterTalkCam()


    call GerudoFortress_BeAnMiddleBoss({'FoundNpc_Flag': 'Found_Npc_Hylia_015_Adult', 'AppearGerudoThief_Flag': 'GerudoFortress_AppearGerudoThief_Npc_Hylia_015_Adult', 'AppearGerudoThief_ActorName': 'Enemy_MiddleBoss_GerudoThief_03', 'PlayerBattleStartPos_AnchorInstanceName': 'WalkPoint02', 'AppearGerudoThief_ASName': 'BattleStart', 'InstanceName': 'GerudoThief03_Appear', 'CloseShatter': 'GerudoFortress_CloseShutter_Npc_Hylia_015_Adult', 'PlayerPos': 'WalkPoint00', 'EnemyPos': 'GerudoThief_03', 'LastCarpenterMessage': 'EventFlowMsg/Npc_Hylia_015_Adult:Talk_05', 'AppearGerudoThief_ActorId': ActorIdentifier(name="Enemy_MiddleBoss_GerudoThief_03"), 'FoundNpc_ActorId': ActorIdentifier(name="Npc_Hylia_015_Adult", sub_name="GerudoFortress"), 'Dm_Locator': ActorIdentifier(name="Dm_Locator", sub_name="GerudoThief03_Appear"), 'CameraPosVector': [39.61199951171875, 120.63999938964844, -24.166000366210938]})

}

void GerudoFortress_MiddleBossAppear_04() {

    call InitTalk.InitTalk_OnEvent_NoCamera_Navi_ForceNormalCamera({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_016_Adult", sub_name="GerudoFortress"), 'ActorNameA': 'Npc_Hylia_016_Adult', 'InstanceNameA': 'GerudoFortress'})


    call CarpenterTalkCam()

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_Npc_Hylia_016_Adult_HaveTalkedOutSide'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_016_Adult:Talk_10', 'MaintainPerformanceState': 0})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_016_Adult:Talk_06', 'MaintainPerformanceState': 0})
    }

    call GerudoFortress_BeAnMiddleBoss({'FoundNpc_Flag': 'Found_Npc_Hylia_016_Adult', 'AppearGerudoThief_Flag': 'GerudoFortress_AppearGerudoThief_Npc_Hylia_016_Adult', 'AppearGerudoThief_ActorName': 'Enemy_MiddleBoss_GerudoThief_04', 'PlayerBattleStartPos_AnchorInstanceName': 'WalkPoint00', 'AppearGerudoThief_ASName': 'BattleStart', 'InstanceName': 'GerudoThief04_Appear', 'CloseShatter': 'GerudoFortress_CloseShutter_Npc_Hylia_016_Adult', 'PlayerPos': 'WalkPoint00', 'EnemyPos': 'GerudoThief_04', 'LastCarpenterMessage': 'EventFlowMsg/Npc_Hylia_016_Adult:Talk_09', 'AppearGerudoThief_ActorId': ActorIdentifier(name="Enemy_MiddleBoss_GerudoThief_04"), 'FoundNpc_ActorId': ActorIdentifier(name="Npc_Hylia_016_Adult", sub_name="GerudoFortress"), 'Dm_Locator': ActorIdentifier(name="Dm_Locator", sub_name="GerudoThief04_Appear"), 'CameraPosVector': [15.147000312805176, 111.69999694824219, -80.01499938964844]})

}

void GerudoFortress_Npc_Hylia_016_Adult_Near_BeforeTalking() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_Npc_Hylia_016_Adult_HaveHearCallingHelp'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_016_Adult:Near_03'})
    }
}

void GerudoFortress_DoDoor_AnotherKey_Hylia014() {
    Player_Event.EventTriggerParticipateEvent()

    call InitTalk.InitTalk_OnEvent_NoPlayerEvtTalk({'Arg_Turn': 4, 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_014_Adult", sub_name="GerudoFortress"), 'ActorNameA': 'Npc_Hylia_014_Adult', 'InstanceNameA': 'GerudoFortress'})


    call GerudoFortress_BeAnMiddleBoss_ApproachShutter({'FoundNpc_Flag': 'Found_Npc_Hylia_014_Adult', 'AppearGerudoThief_ActorName': 'Enemy_MiddleBoss_GerudoThief_02', 'AppearGerudoThief_Flag': 'GerudoFortress_AppearGerudoThief_Npc_Hylia_014_Adult', 'PlayerBattleStartPos_AnchorInstanceName': 'WalkPoint03', 'AppearGerudoThief_ASName': 'BattleStart', 'InstanceName': 'GerudoThief02_Appear', 'CloseShatter': 'GerudoFortress_CloseShutter_Npc_Hylia_014_Adult', 'PlayerPos': 'Dm_Gerudo_0023_LinkStartPosition', 'EnemyPos': 'GerudoThief_02', 'LastCarpenterMessage': 'EventFlowMsg/Npc_Hylia_014_Adult:Talk_02', 'AppearGerudoThief_ActorId': ActorIdentifier(name="Enemy_MiddleBoss_GerudoThief_02"), 'FoundNpc_ActorId': ActorIdentifier(name="Npc_Hylia_014_Adult", sub_name="GerudoFortress"), 'Dm_Locator': ActorIdentifier(name="Dm_Locator", sub_name="GerudoThief02_Appear"), 'CameraPosVector': [70.6240005493164, 122.18900299072266, -111.37799835205078]})

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'InsideTheRoom_Npc_Hylia_014_Adult'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'GerudoFortress_Npc_Hylia_014_Adult_IsCallingHelp'})
}

void GerudoFortress_DoDoor_AnotherKey_Hylia015() {
    Player_Event.EventTriggerParticipateEvent()

    call InitTalk.InitTalk_OnEvent_NoPlayerEvtTalk({'Arg_Turn': 4, 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_015_Adult", sub_name="GerudoFortress"), 'ActorNameA': 'Npc_Hylia_015_Adult', 'InstanceNameA': 'GerudoFortress'})


    call GerudoFortress_BeAnMiddleBoss_ApproachShutter({'FoundNpc_Flag': 'Found_Npc_Hylia_015_Adult', 'AppearGerudoThief_Flag': 'GerudoFortress_AppearGerudoThief_Npc_Hylia_015_Adult', 'AppearGerudoThief_ActorName': 'Enemy_MiddleBoss_GerudoThief_03', 'PlayerBattleStartPos_AnchorInstanceName': 'WalkPoint02', 'AppearGerudoThief_ASName': 'BattleStart', 'InstanceName': 'GerudoThief03_Appear', 'CloseShatter': 'GerudoFortress_CloseShutter_Npc_Hylia_015_Adult', 'PlayerPos': 'Dm_Gerudo_0023_LinkStartPosition', 'EnemyPos': 'GerudoThief_03', 'LastCarpenterMessage': 'EventFlowMsg/Npc_Hylia_015_Adult:Talk_06', 'AppearGerudoThief_ActorId': ActorIdentifier(name="Enemy_MiddleBoss_GerudoThief_03"), 'FoundNpc_ActorId': ActorIdentifier(name="Npc_Hylia_015_Adult", sub_name="GerudoFortress"), 'Dm_Locator': ActorIdentifier(name="Dm_Locator", sub_name="GerudoThief03_Appear"), 'CameraPosVector': [39.61199951171875, 120.63999938964844, -24.166000366210938]})

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'InsideTheRoom_Npc_Hylia_015_Adult', 'Index': -1, 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_Npc_Hylia_015_Adult_IsCallingHelp', 'Value': False})
}

void GerudoFortress_DoDoor_AnotherKey_Hylia013() {
    Player_Event.EventTriggerParticipateEvent()

    call InitTalk.InitTalk_OnEvent_NoPlayerEvtTalk({'Arg_Turn': 4, 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_013_Adult", sub_name="GerudoFortress"), 'ActorNameA': 'Npc_Hylia_013_Adult', 'InstanceNameA': 'GerudoFortress'})


    call GerudoFortress_BeAnMiddleBoss_ApproachShutter({'AppearGerudoThief_Flag': 'GerudoFortress_AppearGerudoThief_Npc_Hylia_013_Adult', 'AppearGerudoThief_ActorName': 'Enemy_MiddleBoss_GerudoThief', 'FoundNpc_Flag': 'Found_Npc_Hylia_013_Adult', 'PlayerBattleStartPos_AnchorInstanceName': 'WalkPoint01', 'AppearGerudoThief_ASName': 'BattleStart', 'InstanceName': 'GerudoThief01_Appear', 'CloseShatter': 'GerudoFortress_CloseShutter_Npc_Hylia_013_Adult', 'PlayerPos': 'Dm_Gerudo_0023_LinkStartPosition', 'EnemyPos': 'GerudoThief_01', 'LastCarpenterMessage': 'EventFlowMsg/Npc_Hylia_013_Adult:Talk_04', 'AppearGerudoThief_ActorId': ActorIdentifier(name="Enemy_MiddleBoss_GerudoThief"), 'FoundNpc_ActorId': ActorIdentifier(name="Npc_Hylia_013_Adult", sub_name="GerudoFortress"), 'Dm_Locator': ActorIdentifier(name="Dm_Locator", sub_name="GerudoThief01_Appear"), 'CameraPosVector': [30.72599983215332, 104.25189971923828, -66.33999633789062]})

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'InsideTheRoom_Npc_Hylia_013_Adult'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'GerudoFortress_Npc_Hylia_013_Adult_IsCallingHelp'})
}

void GerudoFortress_DoDoor_AnotherKey_Hylia016() {
    Player_Event.EventTriggerParticipateEvent()

    call InitTalk.InitTalk_OnEvent_NoPlayerEvtTalk({'Arg_Turn': 4, 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_016_Adult", sub_name="GerudoFortress"), 'ActorNameA': 'Npc_Hylia_016_Adult', 'InstanceNameA': 'GerudoFortress'})


    call GerudoFortress_BeAnMiddleBoss_ApproachShutter({'FoundNpc_Flag': 'Found_Npc_Hylia_016_Adult', 'AppearGerudoThief_Flag': 'GerudoFortress_AppearGerudoThief_Npc_Hylia_016_Adult', 'AppearGerudoThief_ActorName': 'Enemy_MiddleBoss_GerudoThief_04', 'PlayerBattleStartPos_AnchorInstanceName': 'WalkPoint00', 'AppearGerudoThief_ASName': 'BattleStart', 'InstanceName': 'GerudoThief04_Appear', 'CloseShatter': 'GerudoFortress_CloseShutter_Npc_Hylia_016_Adult', 'PlayerPos': 'Dm_Gerudo_0023_LinkStartPosition', 'EnemyPos': 'GerudoThief_04', 'LastCarpenterMessage': 'EventFlowMsg/Npc_Hylia_016_Adult:Talk_07', 'AppearGerudoThief_ActorId': ActorIdentifier(name="Enemy_MiddleBoss_GerudoThief_04"), 'FoundNpc_ActorId': ActorIdentifier(name="Npc_Hylia_016_Adult", sub_name="GerudoFortress"), 'Dm_Locator': ActorIdentifier(name="Dm_Locator", sub_name="GerudoThief04_Appear"), 'CameraPosVector': [15.147000312805176, 111.69999694824219, -80.01499938964844]})

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'InsideTheRoom_Npc_Hylia_016_Adult', 'Index': -1, 'Value': True})
}

void GerudoFortress_MiddleBossReAppear_01() {

    call GerudoThiefReAppear({'GameDataName': 'GerudoFortress_AppearGerudoThief_Npc_Hylia_013_Adult', 'ThieftActor': 'GerudoThief_01', 'ThiefNo.': 'Enemy_MiddleBoss_GerudoThief', 'CloseShatter': 'GerudoFortress_CloseShutter_Npc_Hylia_013_Adult', 'ThiefAppear': 'GerudoFortress_AppearGerudoThief_Npc_Hylia_013_Adult', 'GerudoThief': ActorIdentifier(name="Enemy_MiddleBoss_GerudoThief"), 'Dm_Locator': ActorIdentifier(name="Dm_Locator", sub_name="GerudoThief01_ReAppear"), 'Npc_Hylia': ActorIdentifier(name="Npc_Hylia_013_Adult", sub_name="GerudoFortress")})

}

void GerudoFortress_MiddleBossReAppear_02() {

    call GerudoThiefReAppear({'GameDataName': 'GerudoFortress_AppearGerudoThief_Npc_Hylia_014_Adult', 'ThiefNo.': 'Enemy_MiddleBoss_GerudoThief_02', 'ThieftActor': 'GerudoThief_02', 'CloseShatter': 'GerudoFortress_CloseShutter_Npc_Hylia_014_Adult', 'ThiefAppear': 'GerudoFortress_AppearGerudoThief_Npc_Hylia_014_Adult', 'GerudoThief': ActorIdentifier(name="Enemy_MiddleBoss_GerudoThief_02"), 'Dm_Locator': ActorIdentifier(name="Dm_Locator", sub_name="GerudoThief02_ReAppear"), 'Npc_Hylia': ActorIdentifier(name="Npc_Hylia_014_Adult", sub_name="GerudoFortress")})

}

void GerudoFortress_MiddleBossReAppear_03() {

    call GerudoThiefReAppear({'ThieftActor': 'GerudoThief_03', 'GameDataName': 'GerudoFortress_AppearGerudoThief_Npc_Hylia_015_Adult', 'ThiefNo.': 'Enemy_MiddleBoss_GerudoThief_03', 'CloseShatter': 'GerudoFortress_CloseShutter_Npc_Hylia_015_Adult', 'ThiefAppear': 'GerudoFortress_AppearGerudoThief_Npc_Hylia_015_Adult', 'GerudoThief': ActorIdentifier(name="Enemy_MiddleBoss_GerudoThief_03"), 'Dm_Locator': ActorIdentifier(name="Dm_Locator", sub_name="GerudoThief03_ReAppear"), 'Npc_Hylia': ActorIdentifier(name="Npc_Hylia_015_Adult", sub_name="GerudoFortress")})

}

void GerudoFortress_MiddleBossReAppear_04() {

    call GerudoThiefReAppear({'ThieftActor': 'GerudoThief_04', 'GameDataName': 'GerudoFortress_AppearGerudoThief_Npc_Hylia_016_Adult', 'ThiefNo.': 'Enemy_MiddleBoss_GerudoThief_04', 'ThiefAppear': 'GerudoFortress_AppearGerudoThief_Npc_Hylia_016_Adult', 'CloseShatter': 'GerudoFortress_CloseShutter_Npc_Hylia_016_Adult', 'GerudoThief': ActorIdentifier(name="Enemy_MiddleBoss_GerudoThief_04"), 'Dm_Locator': ActorIdentifier(name="Dm_Locator", sub_name="GerudoThief04_ReAppear"), 'Npc_Hylia': ActorIdentifier(name="Npc_Hylia_016_Adult", sub_name="GerudoFortress")})

}

void GerudoFortress_Npc_Hylia_016_Adult_IsCallingHelp_Talk_OnOutdoor() {
    switch Npc_Hylia_016_Adult[GerudoFortress].EventQueryAIScheduleCheckActorActionAll() {
      case [0, 1, 2, 3, 4, 5, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26]:
        Player_Event.EventGoOffstageForUser({'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False, 'IsWaitEnd': False})

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'CameraCollisionLookAtActor': 2, 'CameraCollisionMode': 0, 'TargetFovy': 40.0, 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'CamPosLeft', 'PosVectorSetType': 4, 'Actor1ActorName': 'Npc_Hylia_016_Adult', 'Actor1InstanceName': 'GerudoFortress', 'AtVectorSetType': 4, 'AtVector': [0.0, -0.30000001192092896, -2.0], 'PosVector': [0.0, 0.10000000149011612, 0.5], 'MoveTime': 0, 'IsEnableRevertFast': False})
        } {
            Npc_Hylia_016_Adult[GerudoFortress].EventAIScheduleMoveToAnchor({'AnchorType': 2, 'IsWaitEnd': True, 'InstanceName': '', 'ASName': '', 'DesiredGear': 1, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False, 'IsTurnToAnchorRot': True, 'IsAlignAnchorPos': True})
        }

        Event403:
        Npc_Hylia_016_Adult[GerudoFortress].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GerudoFortress_Npc_Hylia_016_Adult_HaveHearCallingHelp'})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_Npc_Hylia_016_Adult_HaveTalkedOutSide'}) {
            Npc_Hylia_016_Adult[GerudoFortress].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_016_Adult:Talk_13', 'MaintainPerformanceState': 0})
            Event210:
            Npc_Hylia_016_Adult[GerudoFortress].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_016_Adult:Talk_12', 'MaintainPerformanceState': 0})
        } else {
            Npc_Hylia_016_Adult[GerudoFortress].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_016_Adult:Talk_08', 'MaintainPerformanceState': 0})
            Npc_Hylia_016_Adult[GerudoFortress].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_016_Adult:Talk_11', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GerudoFortress_Npc_Hylia_016_Adult_HaveTalkedOutSide'})
            goto Event210
        }
      case [6, 7]:
        Player_Event.EventGoOffstageForUser({'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False, 'IsWaitEnd': False})

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'CameraCollisionLookAtActor': 2, 'CameraCollisionMode': 0, 'TargetFovy': 40.0, 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'CamPosRight', 'PosVectorSetType': 4, 'Actor1ActorName': 'Npc_Hylia_016_Adult', 'Actor1InstanceName': 'GerudoFortress', 'AtVectorSetType': 4, 'AtVector': [0.15000000596046448, -0.30000001192092896, -2.0], 'PosVector': [0.15000000596046448, 0.10000000149011612, 0.5], 'MoveTime': 0, 'IsEnableRevertFast': False})
        } {
            Npc_Hylia_016_Adult[GerudoFortress].EventAIScheduleMoveToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ASName': '', 'DesiredGear': 1, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False, 'AnchorType': 6, 'IsTurnToAnchorRot': True, 'IsAlignAnchorPos': True})
        }

        goto Event403
    }
}

void GerudoFortress_Npc_Hylia_016_Adult_PlayersMoveAway_Near() {
    Npc_Hylia_016_Adult[GerudoFortress].EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_016_Adult:Near_07'})
}

void GerudoFortress_Imprisoned_UntilUnlocked_Talk() {

    fork {

        call Common_Camera_Pln.CameraDoF_Event_Normal()

    } {
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'Npc_EventStarter', 'InstanceNameA': '', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'CheckDistance': 4.0}) {
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'WalkPoint00', 'Actor2ActorName': 'Player_Event', 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'AtVector': [0.0, 1.25, 1.5], 'MoveTime': 45, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 2, 'IsWaitEnd': True, 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'EnableCameraAlpha': True, 'LongShiftRange': 30.0, 'PosVector': [0.0, 2.0, -2.5], 'IsEnableRevertFast': False})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'WalkPoint00', 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'MoveTime': 45, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 2, 'IsWaitEnd': True, 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'EnableCameraAlpha': True, 'LongShiftRange': 30.0, 'Actor2ActorName': 'Npc_EventStarter', 'AtVector': [0.0, 1.25, 1.0], 'PosVector': [0.0, 2.0, -2.5], 'IsEnableRevertFast': False})
        }
    } {

        call InitTalk.InitTalk_OnEvent_NoCamera_NoTalk({'Arg_Turn': 4, 'Arg_Greeting': 4, 'ActorName': 'Npc_EventStarter', 'InstanceName': '', 'Arg_Actor': ActorIdentifier(name="Npc_EventStarter")})

    }

    if !Npc_EventStarter.EventQueryVolatileGeneralPurposeFlagOn() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_013_Adult:Talk_05', 'MaintainPerformanceState': 0})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_013_Adult:Talk_03', 'MaintainPerformanceState': 0})
        Npc_EventStarter.EventTriggerSetVolatileGeneralPurposeFlag({'Value': True})
    }
}

void GerudoFortress_Imprisoned_UntilUnlocked_Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GameDataName'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'NotOverriddenByInterestBalloon': False, 'IsDisplayInTerror': True, 'MessageID': 'EventFlowMsg/Npc_Hylia_016_Adult:Near_09'})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'NotOverriddenByInterestBalloon': False, 'IsDisplayInTerror': True, 'MessageID': 'EventFlowMsg/Npc_Hylia_016_Adult:Near_08'})
    }
}

void GerudoFortress_BeAnMiddleBoss() {

    call GerudoThief_DefineLevel()

    Npc_Hylia_016_Adult[GerudoFortress_BeAnMiddleBoss(FoundNpc_ActorId)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'LastCarpenterMessage'})
    Event539:

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ClothWarpMode': 0, 'ASCommand': 'Wait', 'ForceFadeFrame': 20.0})
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ASCommand': 'EvtNotice', 'ForceFadeFrame': -1.0, 'IsWaitEnd': True})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0, 'ASCommand': 'Wait'})
    } {
        Npc_Hylia_016_Adult[GerudoFortress_BeAnMiddleBoss_ApproachShutter(FoundNpc_ActorId)].EventTriggerRequestLookAtTheFront()
        Npc_Hylia_016_Adult[GerudoFortress_BeAnMiddleBoss_ApproachShutter(FoundNpc_ActorId)].EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Act_Surprise_Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
    } {
        switch GameDataActor.EventQueryIsGameDataInt({'Value': 1, 'Index': -1, 'GameDataName': 'Enemy_MiddleBoss_GerudoThief_DefeatNum'}) {
          case 0:
            Npc_Invisible_GerudoThief.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Gerudo_001:Talk_34', 'MaintainPerformanceState': 0})
          case [1, 2]:
            switch GameDataActor.EventQueryIsGameDataInt({'Value': 2, 'Index': -1, 'GameDataName': 'Enemy_MiddleBoss_GerudoThief_DefeatNum'}) {
              case 0:
                Npc_Invisible_GerudoThief.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Gerudo_001:Talk_39', 'MaintainPerformanceState': 0})
              case [1, 2]:
                switch GameDataActor.EventQueryIsGameDataInt({'Value': 3, 'Index': -1, 'GameDataName': 'Enemy_MiddleBoss_GerudoThief_DefeatNum'}) {
                  case 0:
                    Npc_Invisible_GerudoThief.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Gerudo_001:Talk_40', 'MaintainPerformanceState': 0})
                  case [1, 2]:
                    Npc_Invisible_GerudoThief.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Gerudo_001:Talk_41', 'MaintainPerformanceState': 0})
                }
            }
        }
    }

    SoundSystemActor.EventTriggerForbidEmitIfOutsideView({'IsIgnoreLODResult': False})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GerudoFortress_BattleGerudoThief', 'Index': -1}) {
        SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'FadeType': 3, 'WaitingResumeInGameBgm': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'FoundNpc_Flag'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'CloseShatter'})
        GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'GameDataName': 'GerudoFortress_Meet_FourCarpenter_NumOfCarpenterFound', 'Value': 1})
        Event542:

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            SoundSystemActor.EventTriggerCancelForbidEmitIfOutsideView()

            fork {
                Player_Event.EventTriggerPlayerLookAtObject({'Direction': 0.0, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 1.5, 0.0], 'ActorName': 'DestinationAnchor', 'Target': 5, 'InstanceName': 'EnemyPos'})
            } {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                Npc_Hylia_016_Adult[GerudoFortress_BeAnMiddleBoss_ApproachShutter(FoundNpc_ActorId)].EventTriggerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'InstanceName': 'EnemyPos'})
            }

            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

            fork {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'DestinationAnchor', 'AtVector': [0.0, 1.0, 0.0], 'MoveTime': 90, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 3, 'Actor1InstanceName': 'EnemyPos', 'IsAtVectorReferenceActorPosOnce': False, 'Actor2ActorName': 'Player_Event', 'PosVector': [0.0, 1.5, 4.0], 'IsPosVectorReferenceActorPosOnce': True, 'IsEnableRevertFast': False})
            } {

                call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 90})

            }


            fork {
                Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'UseDemoWait': True, 'NotChangeRot': True, 'InstanceName': 'WalkPoint01', 'ASCommand': 'EvtCaution'})
                Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'OverwriteRotNearDist': -1.0, 'IsUseDisguiseSpeakerPos': False, 'offset': [0.0, 0.0, 0.0], 'IsNearOffset': False, 'PassThrough': -1.0, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'ArrivedASCommand': '', 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'IsHomePosition': True, 'IsOffCenterCamera': False})
                Player_Event.EventPlayerTurnAndLook({'Direction': 0.0, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'IsWaitEnd': False, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'Target': 3, 'ActorName': 'Dm_Locator', 'KeepTalkWait': True, 'PosOffset': [0.0, 1.5, 0.0], 'UseNormalTurn': False, 'InstanceName': 'InstanceName', 'IsDoNavi': False})
            } {
                Dm_Locator[GerudoFortress_BeAnMiddleBoss_ApproachShutter(Dm_Locator)].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'GerudoFortress_MiddleBossAppear_Smoke'})
                SoundSystemActor.EventSoundStartSound({'IsIgnoreDucking': True, 'SLinkKey': 'GerudoThief_Appear_Smoke'})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 48})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'AppearGerudoThief_Flag'})
                GameSystemActor.EventWaitForActorPresence({'IsWaitEnd': True, 'InstanceName': '', 'IsActorCreateRequest': True, 'ActorName': 'AppearGerudoThief_ActorName'})
                SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'Dm:Bgm下げ', 'IsImmediately': True, 'DuckingName2': '', 'DuckingName3': '', 'IsClearRefCount': False})
                Enemy_MiddleBoss_GerudoThief_04[GerudoFortress_BeAnMiddleBoss_ApproachShutter(AppearGerudoThief_ActorId)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Demo_Appear', 'IsWaitEnd': True})
                Enemy_MiddleBoss_GerudoThief_04[GerudoFortress_BeAnMiddleBoss_ApproachShutter(AppearGerudoThief_ActorId)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'WaitBeforeBattle'})
            }

        } {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_MiddleBoss_AfterLose_BeforeReappear'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_Hookshot'}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_HaveTalkedGerudoThief_HaveNotFookShot'}) {
                        Event134:
                        Npc_Invisible_GerudoThief.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_001:Talk_57', 'MaintainPerformanceState': 0})
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_Hookshot'}) {
                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_HaveTalkedGerudoThief_HaveNotFookShot', 'Value': False})
                        }
                    } else {
                        Npc_Invisible_GerudoThief.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_001:Talk_52', 'MaintainPerformanceState': 0})
                    }
                } else {
                    goto Event134
                }
            } else
            switch GameDataActor.EventQueryIsGameDataInt({'Value': 1, 'Index': -1, 'GameDataName': 'Enemy_MiddleBoss_GerudoThief_DefeatNum'}) {
              case 0:
                Npc_Invisible_GerudoThief.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Gerudo_001:Talk_30', 'MaintainPerformanceState': 0})
              case [1, 2]:
                switch GameDataActor.EventQueryIsGameDataInt({'Value': 2, 'Index': -1, 'GameDataName': 'Enemy_MiddleBoss_GerudoThief_DefeatNum'}) {
                  case 0:
                    Npc_Invisible_GerudoThief.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Gerudo_001:Talk_31', 'MaintainPerformanceState': 0})
                  case [1, 2]:
                    switch GameDataActor.EventQueryIsGameDataInt({'Value': 3, 'Index': -1, 'GameDataName': 'Enemy_MiddleBoss_GerudoThief_DefeatNum'}) {
                      case 0:
                        Npc_Invisible_GerudoThief.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Gerudo_001:Talk_32', 'MaintainPerformanceState': 0})
                      case [1, 2]:
                        Npc_Invisible_GerudoThief.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Gerudo_001:Talk_33', 'MaintainPerformanceState': 0})
                    }
                }
            }
        }


        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtCaution', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0, 'IsWaitEnd': False})
        } {
            Npc_Navi.EventPlayAS({'ASName': 'EvtCaution', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        }

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            EventCamera.EventMoveToTargetPosCamera({'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'EndRecelerateRate': 0.0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsLinearMove': False, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'Actor1ActorName': 'Player_Event', 'AtVectorSetType': 4, 'CameraCollisionMode': 1, 'FovySetType': 0, 'TargetFovy': 50.0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveTotargetPosType': 1, 'MoveTime': 150, 'StartAccelerateRate': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'AtVector': [0.0, 0.25, 0.0], 'EnableCameraAlpha': True, 'PosVectorSetType': 0, 'Actor2ActorName': 'AppearGerudoThief_ActorName', 'PosVector': 'CameraPosVector', 'IsWaitEnd': True, 'IsEnableRevertFast': False})
        } {
            Enemy_MiddleBoss_GerudoThief_04[GerudoFortress_BeAnMiddleBoss_ApproachShutter(AppearGerudoThief_ActorId)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'BattleStart'})
        } {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_MiddleBoss_AfterLose_BeforeReappear'}) {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_MiddleBoss_AfterLose_BeforeReappear', 'Value': False})
                Npc_Invisible_GerudoThief.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotBecomeSpeaker': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_001:Talk_49', 'MaintainPerformanceState': 0, 'IsCloseDialog': True})
            } else
            switch GameDataActor.EventQueryIsGameDataInt({'Value': 1, 'Index': -1, 'GameDataName': 'Enemy_MiddleBoss_GerudoThief_DefeatNum'}) {
              case 0:
                Npc_Invisible_GerudoThief.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Gerudo_001:Talk_38', 'MaintainPerformanceState': 0})
              case [1, 2]:
                switch GameDataActor.EventQueryIsGameDataInt({'Value': 2, 'Index': -1, 'GameDataName': 'Enemy_MiddleBoss_GerudoThief_DefeatNum'}) {
                  case 0:
                    Npc_Invisible_GerudoThief.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Gerudo_001:Talk_42', 'MaintainPerformanceState': 0})
                  case [1, 2]:
                    switch GameDataActor.EventQueryIsGameDataInt({'Value': 3, 'Index': -1, 'GameDataName': 'Enemy_MiddleBoss_GerudoThief_DefeatNum'}) {
                      case 0:
                        Npc_Invisible_GerudoThief.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Gerudo_001:Talk_43', 'MaintainPerformanceState': 0})
                      case [1, 2]:
                        Npc_Invisible_GerudoThief.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Gerudo_001:Talk_44', 'MaintainPerformanceState': 0})
                    }
                }
            }
        } {

            call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 150})

        }

        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_Hookshot'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_HaveTalkedGerudoThief_HaveNotFookShot', 'Value': True})
        }
        GameSystemActor.EventEnterGameSafetySection({'IsWaitEnd': True, 'GameSafetySetting': 'Common_ShutterEnemy'})
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GerudoFortress_BattleGerudoThief', 'Index': -1, 'Value': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Npc_Hylia_016_Adult[GerudoFortress_BeAnMiddleBoss_ApproachShutter(FoundNpc_ActorId)].EventTriggerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'BattleShutter02', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'BattleShutter02', 'PosOffset': [0.0, 1.5, 0.0], 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})

        fork {
            if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'DestinationAnchor', 'ActorInstanceName': 'BattleShutter02', 'VectorSetType': 3, 'Vector': [3.0, 0.0, -1.0], 'IsIgnoreVectorReferenceActorRot': False}) {

                fork {
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'BattleShutter02', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 3, 'IsWaitEnd': True, 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'PosVector': [-1.0, 0.0, 3.0], 'Actor2ActorName': 'Player_Event', 'AtVector': [0.0, 0.75, -2.5], 'IsEnableRevertFast': False})
                } {

                    call Common_Camera_Pln.CameraDoF_Default()

                }

            } else {

                fork {
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'BattleShutter02', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'MoveTotargetPosType': 1, 'CameraCollisionLookAtActor': 3, 'MoveTime': 60, 'IsWaitEnd': True, 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'PosVector': [-1.0, 0.0, 3.0], 'Actor2ActorName': 'Player_Event', 'CameraCollisionMode': 2, 'AtVector': [0.0, 0.75, -2.5], 'IsEnableRevertFast': False})
                } {

                    call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 60})

                }

            }
            SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'FadeType': 1, 'WaitingResumeInGameBgm': False})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

            fork {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'FoundNpc_Flag'})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'CloseShatter'})
                EventCamera.EventTriggerRequestCameraShake({'LoopEndCount': 3, 'IsRumbleController': True, 'ApplyType': 0, 'Power': 0.5, 'Pattern': 1})
                EventCamera.EventTriggerRequestStopCameraShake({'DampEndFrame': 30.0})
            } {
                Npc_Hylia_016_Adult[GerudoFortress_BeAnMiddleBoss_ApproachShutter(FoundNpc_ActorId)].EventNPCTurnToTarget({'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'BattleShutter02', 'IsWaitEnd': False})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 35})
                Npc_Hylia_016_Adult[GerudoFortress_BeAnMiddleBoss_ApproachShutter(FoundNpc_ActorId)].EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Act_Surprise_Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
            }

        }


        fork {
            Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Direction': 0.0, 'TurnFaceControlType': 1, 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'Target': 5, 'OffsetBase': 1, 'PosOffset': [0.0, 0.0, -3.5], 'UpperASCommand': '', 'SlowTurn': False, 'InstanceName': 'BattleShutter02', 'UseNormalTurn': False, 'IsDoNavi': False})
            Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'UseDemoWait': True, 'NotChangeRot': True, 'ASCommand': 'EvtWait', 'InstanceName': 'PlayerPos'})
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtCaution', 'IsWaitEnd': False, 'ClothWarpMode': 0})
        } {
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'OverwriteRotNearDist': -1.0, 'IsUseDisguiseSpeakerPos': False, 'offset': [0.0, 0.0, 0.0], 'IsNearOffset': False, 'PassThrough': -1.0, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'IsHomePosition': True, 'IsOffCenterCamera': False, 'ArrivedASCommand': 'EvtCaution'})
        }

        GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'GameDataName': 'GerudoFortress_Meet_FourCarpenter_NumOfCarpenterFound', 'Value': 1})

        fork {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.10999999940395355, 1.350000023841858, 1.340000033378601], 'AtVector': [-0.07000000029802322, 1.2899999618530273, 0.3400000035762787], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor2ActorName': 'Player_Event', 'MoveTotargetPosType': 1, 'CameraCollisionLookAtActor': 3, 'IsEnableRevertFast': False})
        } {

            call Common_Camera_Pln.CameraDoF_Default()

        }

        goto Event542
    }
}

void GerudoFortress_Npc_Hylia_016_Adult_PlayersComeBack_Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'InsideTheRoom_Npc_Hylia_016_Adult'}) {
        Npc_Hylia_016_Adult[GerudoFortress].EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_016_Adult:Near_06'})
        Event496:
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'GerudoFortress_IgnoreCarpenter_015'})
    } else {
        Npc_Hylia_016_Adult[GerudoFortress].EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_016_Adult:Near_04'})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'InsideTheRoom_Npc_Hylia_016_Adult', 'Index': -1, 'Value': True})
        goto Event496
    }
}

void GerudoFortress_Npc_Hylia_015_Adult_PlayersMoveAway_Near() {
    Npc_Hylia_015_Adult[GerudoFortress].EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_015_Adult:Near_04'})
}

void GerudoFortress_Npc_Hylia_015_Adult_PlayersComeBack_Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'InsideTheRoom_Npc_Hylia_015_Adult'}) {
        Npc_Hylia_015_Adult[GerudoFortress].EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_015_Adult:Near_05'})
        Event495:
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'GerudoFortress_IgnoreCarpenter_015'})
    } else {
        Npc_Hylia_015_Adult[GerudoFortress].EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_015_Adult:Near_03'})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'InsideTheRoom_Npc_Hylia_015_Adult', 'Index': -1, 'Value': True})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_Npc_Hylia_015_Adult_IsCallingHelp', 'Value': False})
        goto Event495
    }
}

void GerudoFortress_Npc_Hylia_015_Adult_Near_BeforeTalking() {
    Npc_Hylia_015_Adult[GerudoFortress].EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_015_Adult:Near_02'})
}

void GerudoFortress_Npc_Hylia_014_Adult_PlayersMoveAway_Near() {
    Npc_Hylia_014_Adult[GerudoFortress].EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_014_Adult:Near_05'})
}

void GerudoFortress_Npc_Hylia_014_Adult_PlayersComeBack_Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'InsideTheRoom_Npc_Hylia_014_Adult'}) {
        Npc_Hylia_014_Adult[GerudoFortress].EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_014_Adult:Near_06'})
        Event493:
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'GerudoFortress_IgnoreCarpenter_014'})
    } else {
        Npc_Hylia_014_Adult[GerudoFortress].EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_014_Adult:Near_04'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'InsideTheRoom_Npc_Hylia_014_Adult'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'GerudoFortress_Npc_Hylia_014_Adult_IsCallingHelp'})
        goto Event493
    }
}

void GerudoFortress_Npc_Hylia_013_Adult_PlayersMoveAway_Near() {
    Npc_Hylia_013_Adult[GerudoFortress].EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_013_Adult:Near_05'})
}

void GerudoFortress_Npc_Hylia_013_Adult_PlayersComeBack_Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'InsideTheRoom_Npc_Hylia_013_Adult'}) {
        Npc_Hylia_013_Adult[GerudoFortress].EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_013_Adult:Near_03'})
        Event494:
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'GerudoFortress_IgnoreCarpenter_013'})
    } else {
        Npc_Hylia_013_Adult[GerudoFortress].EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_013_Adult:Near_02'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'InsideTheRoom_Npc_Hylia_013_Adult'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'GerudoFortress_Npc_Hylia_013_Adult_IsCallingHelp'})
        goto Event494
    }
}

void GerudoFortress_Npc_Hylia_014_Adult_Near_BeforeTalking() {
    Npc_Hylia_014_Adult[GerudoFortress].EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_014_Adult:Near_03'})
}

void GerudoFortress_Npc_Hylia_016_Adult_CallingHelp_Near() {
    Npc_Hylia_016_Adult[GerudoFortress].EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_016_Adult:Near_02', 'IsIgnoreDisplayKeepDepth': True})
}

void Step01_Npc_Hylia_013_Adult_IsCallingHelp_Near() {
    Npc_Hylia_013_Adult[GerudoFortress].EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_013_Adult:Near_04'})
}

void GerudoThief_DefineLevel() {
    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Enemy_MiddleBoss_GerudoThief_DefeatNum', 'Index': -1, 'Value': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_DestroyGerudoThief_Npc_Hylia_013_Adult'}) {

        call GerudoThief_LevelUp()

    }
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_DestroyGerudoThief_Npc_Hylia_014_Adult'}) {

        call GerudoThief_LevelUp()

    }
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_DestroyGerudoThief_Npc_Hylia_015_Adult'}) {

        call GerudoThief_LevelUp()

    }
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_DestroyGerudoThief_Npc_Hylia_016_Adult'}) {

        call GerudoThief_LevelUp()

    }
}

void GerudoThief_LevelUp() {
    GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'Enemy_MiddleBoss_GerudoThief_DefeatNum', 'Value': 1, 'Index': -1})
}

void GerudoFortress_DestroyGerudoThief01() {

    call GerudoThiefDropKey({'ActorName_GerudoThief': 'Enemy_MiddleBoss_GerudoThief', 'message01': 'EventFlowMsg/Npc_Gerudo_001:Talk_45', 'KeyPosition': [26.111000061035156, 102.5, -67.4219970703125], 'GameDataName': 'GerudoFortress_DestroyGerudoThief_Npc_Hylia_013_Adult', 'GameDataName2': 'GerudoFortress_CloseShutter_Npc_Hylia_013_Adult', 'Obj_SmallKey': ActorIdentifier(name="Obj_Dungeon_SmallKey_GerudoFortress_01", sub_name="SmallKeyForEvent_01"), 'Actor_GerudoThief': ActorIdentifier(name="Enemy_MiddleBoss_GerudoThief"), 'Dm_Locator': ActorIdentifier(name="Dm_Locator", sub_name="GerudoThief01_Defeat")})

}

void GerudoFortress_DestroyGerudoThief02() {

    call GerudoThiefDropKey({'ActorName_GerudoThief': 'Enemy_MiddleBoss_GerudoThief_02', 'message01': 'EventFlowMsg/Npc_Gerudo_001:Talk_46', 'KeyPosition': [67.5, 120.5, -107.9000015258789], 'GameDataName': 'GerudoFortress_DestroyGerudoThief_Npc_Hylia_014_Adult', 'Obj_SmallKey': ActorIdentifier(name="Obj_Dungeon_SmallKey_GerudoFortress_02", sub_name="SmallKeyForEvent_02"), 'Actor_GerudoThief': ActorIdentifier(name="Enemy_MiddleBoss_GerudoThief_02"), 'Dm_Locator': ActorIdentifier(name="Dm_Locator", sub_name="GerudoThief02_Defeat"), 'GameDataName2': 'GerudoFortress_CloseShutter_Npc_Hylia_014_Adult'})

}

void GerudoFortress_DestroyGerudoThief03() {

    call GerudoThiefDropKey({'ActorName_GerudoThief': 'Enemy_MiddleBoss_GerudoThief_03', 'message01': 'EventFlowMsg/Npc_Gerudo_001:Talk_47', 'KeyPosition': [37.0, 119.0, -28.100000381469727], 'GameDataName': 'GerudoFortress_DestroyGerudoThief_Npc_Hylia_015_Adult', 'Obj_SmallKey': ActorIdentifier(name="Obj_Dungeon_SmallKey_GerudoFortress_03", sub_name="SmallKeyForEvent_03"), 'Actor_GerudoThief': ActorIdentifier(name="Enemy_MiddleBoss_GerudoThief_03"), 'Dm_Locator': ActorIdentifier(name="Dm_Locator", sub_name="GerudoThief03_Defeat"), 'GameDataName2': 'GerudoFortress_CloseShutter_Npc_Hylia_015_Adult'})

}

void GerudoFortress_DestroyGerudoThief04() {

    call GerudoThiefDropKey({'ActorName_GerudoThief': 'Enemy_MiddleBoss_GerudoThief_04', 'message01': 'EventFlowMsg/Npc_Gerudo_001:Talk_48', 'KeyPosition': [18.667999267578125, 109.99800109863281, -78.8479995727539], 'GameDataName': 'GerudoFortress_DestroyGerudoThief_Npc_Hylia_016_Adult', 'Obj_SmallKey': ActorIdentifier(name="Obj_Dungeon_SmallKey_GerudoFortress_04", sub_name="SmallKeyForEvent_04"), 'Actor_GerudoThief': ActorIdentifier(name="Enemy_MiddleBoss_GerudoThief_04"), 'Dm_Locator': ActorIdentifier(name="Dm_Locator", sub_name="GerudoThief04_Defeat"), 'GameDataName2': 'GerudoFortress_CloseShutter_Npc_Hylia_016_Adult'})

}

void GerudoThiefDropKey() {
    GameSystemActor.EventTriggerLeaveGameSafetySection()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Enemy_MiddleBoss_GerudoThief[GerudoThiefDropKey(Actor_GerudoThief)].EventTriggerParticipateEvent()
    Player_Event.EventPlayerOnStopMode({'StopAnm': False, 'ResetLookIK': True})
    SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': True, 'FadeType': 1, 'CommandLife': 0, 'IsImmediateOnAutoOff': True, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
    if !Player_Event.EventQueryIsDirToTarget({'Target': 3, 'ActorName': 'ActorName_GerudoThief', 'AngleThreshold': 22.5, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0]}) {

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtCaution', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        } {
            Npc_Navi.EventPlayAS({'ASName': 'EvtCaution', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        }

        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'ActorName_GerudoThief'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Event382:
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'ActorName_GerudoThief', 'CheckDistance': 4.0, 'InstanceNameA': '', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False}) {
            if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'ActorName_GerudoThief', 'InstanceNameA': '', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'CheckDistance': 1.25}) {
                if EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'Player_Event', 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 0.5, -1.0]}) {
                    Player_Event.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'OffsetBase': 1, 'ASCommand': 'EvtCaution', 'InstanceName': '', 'UseDemoWait': True, 'ActorName': 'Player_Event', 'PositionOffset': [0.0, 0.0, -0.5], 'YAngle': 0.0, 'IsWaitEnd': False})
                }
                Event183:

                fork {
                    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'Player_Event', 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [1.0, 1.600000023841858, -1.0]}) {
                        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'Player_Event', 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [-1.0, 1.600000023841858, -1.0]}) {

                            fork {
                                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'MoveTime': 0, 'Actor2ActorName': 'ActorName_GerudoThief', 'AtVectorSetType': 3, 'PosVector': [-1.0, 1.600000023841858, 3.0], 'AtVector': [0.0, 0.8500000238418579, 0.75], 'IsEnableRevertFast': False})
                            } {
                                if !Enemy_MiddleBoss_GerudoThief[GerudoThiefDropKey(Actor_GerudoThief)].EventQueryCalcTargetAngleDiff({'AngleXZ': 120.0}) {
                                    Enemy_MiddleBoss_GerudoThief[GerudoThiefDropKey(Actor_GerudoThief)].EventWarpToTargetActor({'TargetActorKind': 1, 'OffsetBase': 1, 'PositionOffset': [0.0, 0.0, 0.0], 'ClothWarpMode': -1, 'InstanceName': '', 'IsWaitEnd': False, 'YAngle': 90.0, 'ActorName': 'ActorName_GerudoThief'})
                                }
                                Enemy_MiddleBoss_GerudoThief[GerudoThiefDropKey(Actor_GerudoThief)].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Demo_Disappear_Lp'})
                            }

                        } else {

                            fork {
                                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'MoveTime': 0, 'Actor2ActorName': 'ActorName_GerudoThief', 'AtVectorSetType': 3, 'AtVector': [0.0, 0.8500000238418579, 0.75], 'PosVector': [-1.0, 1.600000023841858, -1.0], 'IsEnableRevertFast': False})
                            } {
                                if !Enemy_MiddleBoss_GerudoThief[GerudoThiefDropKey(Actor_GerudoThief)].EventQueryCalcTargetAngleDiff({'AngleXZ': 120.0}) {
                                    Enemy_MiddleBoss_GerudoThief[GerudoThiefDropKey(Actor_GerudoThief)].EventWarpToTargetActor({'TargetActorKind': 1, 'OffsetBase': 1, 'PositionOffset': [0.0, 0.0, 0.0], 'ClothWarpMode': -1, 'InstanceName': '', 'IsWaitEnd': False, 'ActorName': 'ActorName_GerudoThief', 'YAngle': -90.0})
                                }
                                Enemy_MiddleBoss_GerudoThief[GerudoThiefDropKey(Actor_GerudoThief)].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Demo_Disappear_Lp'})
                            }

                        }
                    } else {

                        fork {
                            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'MoveTime': 0, 'Actor2ActorName': 'ActorName_GerudoThief', 'AtVectorSetType': 3, 'PosVector': [1.0, 1.600000023841858, -1.0], 'AtVector': [0.0, 0.8500000238418579, 0.75], 'IsEnableRevertFast': False})
                        } {
                            if !Enemy_MiddleBoss_GerudoThief[GerudoThiefDropKey(Actor_GerudoThief)].EventQueryCalcTargetAngleDiff({'AngleXZ': 120.0}) {
                                Enemy_MiddleBoss_GerudoThief[GerudoThiefDropKey(Actor_GerudoThief)].EventWarpToTargetActor({'TargetActorKind': 1, 'OffsetBase': 1, 'PositionOffset': [0.0, 0.0, 0.0], 'ClothWarpMode': -1, 'InstanceName': '', 'IsWaitEnd': False, 'YAngle': 90.0, 'ActorName': 'ActorName_GerudoThief'})
                            }
                            Enemy_MiddleBoss_GerudoThief[GerudoThiefDropKey(Actor_GerudoThief)].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Demo_Disappear_Lp'})
                        }

                    }
                } {
                    Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': False, 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsLookAtObject': True, 'LookAtPosOffset': [0.0, 0.0, 2.0], 'LookAtTarget': 3, 'IsNearOffset': False, 'offset': [0.0, 0.0, 0.0], 'IsHomePosition': True, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'LookAtInstanceName': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'LookAtActorName': 'ActorName_GerudoThief', 'ArrivedASCommand': 'EvtCaution'})
                } {

                    call Common_Camera_Pln.CameraDoF_Default()

                }

                EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                Event177:

                fork {
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

                    fork {
                        Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
                    } {
                        Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'EvtWait'})
                    }

                    Player_Event.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 3})
                } {
                    switch GameDataActor.EventQueryIsGameDataInt({'Value': 1, 'Index': -1, 'GameDataName': 'Enemy_MiddleBoss_GerudoThief_DefeatNum'}) {
                      case 0:
                        Npc_Invisible_GerudoThief.EventTalk({'MessageId': 'EventFlowMsg/Npc_Gerudo_001:Talk_45', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                      case [1, 2]:
                        switch GameDataActor.EventQueryIsGameDataInt({'Value': 2, 'Index': -1, 'GameDataName': 'Enemy_MiddleBoss_GerudoThief_DefeatNum'}) {
                          case 0:
                            Npc_Invisible_GerudoThief.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_001:Talk_46'})
                          case [1, 2]:
                            switch GameDataActor.EventQueryIsGameDataInt({'Value': 3, 'Index': -1, 'GameDataName': 'Enemy_MiddleBoss_GerudoThief_DefeatNum'}) {
                              case 0:
                                Npc_Invisible_GerudoThief.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_001:Talk_47'})
                              case [1, 2]:
                                Npc_Invisible_GerudoThief.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_001:Talk_48'})
                            }
                        }
                    }
                }


                fork {
                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'Actor1ActorName': '', 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                } {

                    call Common_Camera_Pln.CameraDoF_Default()

                }


                fork {

                    fork {
                        Enemy_MiddleBoss_GerudoThief[GerudoThiefDropKey(Actor_GerudoThief)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Demo_Disappear', 'ForceFadeInFrame': 30.0, 'IsWaitEnd': True})
                    } {
                        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 71})
                        Enemy_MiddleBoss_GerudoThief[GerudoThiefDropKey(Actor_GerudoThief)].EventTriggerStartFadeOut({'FadeFrame': 15})
                    }

                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                    Enemy_MiddleBoss_GerudoThief[GerudoThiefDropKey(Actor_GerudoThief)].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
                } {
                    Dm_Locator[GerudoThiefDropKey(Dm_Locator)].EventWarpToTargetActor({'TargetActorKind': 1, 'IsWaitEnd': True, 'InstanceName': '', 'OffsetBase': 0, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'ClothWarpMode': -1, 'ActorName': 'ActorName_GerudoThief'})
                    Dm_Locator[GerudoThiefDropKey(Dm_Locator)].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'GerudoFortress_MiddleBossDefea_Smoke'})
                } {
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 70})

                    fork {
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GameDataName'})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                        Obj_Dungeon_SmallKey[GerudoThiefDropKey(Obj_SmallKey)].EventTriggerParticipateEvent()
                        Obj_Dungeon_SmallKey[GerudoThiefDropKey(Obj_SmallKey)].EventWarpToActorIncludedRayCheck({'IsWaitEnd': True, 'TargetActorKind': 1, 'InstanceName': '', 'ActorName': 'ActorName_GerudoThief'})
                        SoundSystemActor.EventTriggerForbidEmitIfOutsideView({'IsIgnoreLODResult': False})
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GameDataName2', 'Value': False})
                    } {
                        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0, 'ASCommand': 'Demo_shielding_motion'})
                    }

                }

                Enemy_MiddleBoss_GerudoThief[GerudoThiefDropKey(Actor_GerudoThief)].EventTriggerDeathSignal()
                Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                SoundSystemActor.EventTriggerCancelForbidEmitIfOutsideView()
                Player_Event.EventPlayerOffStopMode()
            } else {
                goto Event183
            }
        } else {
            UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'ActorName_GerudoThief', 'InstanceNameA': '', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'CheckDistance': 6.0}) {
                Player_Event.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'OffsetBase': 1, 'ASCommand': 'EvtCaution', 'InstanceName': '', 'UseDemoWait': True, 'ActorName': 'Player_Event', 'YAngle': 0.0, 'IsWaitEnd': True, 'PositionOffset': [0.0, 0.0, 2.0]})
                Event477:

                fork {
                    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'Player_Event', 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [1.0, 1.600000023841858, -1.0]}) {

                        fork {
                            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'MoveTime': 0, 'Actor2ActorName': 'ActorName_GerudoThief', 'AtVectorSetType': 3, 'AtVector': [0.0, 0.8500000238418579, 0.75], 'PosVector': [-1.0, 1.600000023841858, -1.0], 'IsEnableRevertFast': False})
                        } {
                            if !Enemy_MiddleBoss_GerudoThief[GerudoThiefDropKey(Actor_GerudoThief)].EventQueryCalcTargetAngleDiff({'AngleXZ': 120.0}) {
                                Enemy_MiddleBoss_GerudoThief[GerudoThiefDropKey(Actor_GerudoThief)].EventWarpToTargetActor({'TargetActorKind': 1, 'OffsetBase': 1, 'PositionOffset': [0.0, 0.0, 0.0], 'ClothWarpMode': -1, 'InstanceName': '', 'IsWaitEnd': False, 'ActorName': 'ActorName_GerudoThief', 'YAngle': -90.0})
                            }
                            Enemy_MiddleBoss_GerudoThief[GerudoThiefDropKey(Actor_GerudoThief)].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Demo_Disappear_Lp'})
                        }

                    } else {

                        fork {
                            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'MoveTime': 0, 'Actor2ActorName': 'ActorName_GerudoThief', 'AtVectorSetType': 3, 'PosVector': [1.0, 1.600000023841858, -1.0], 'AtVector': [0.0, 0.8500000238418579, 0.75], 'IsEnableRevertFast': False})
                        } {
                            if !Enemy_MiddleBoss_GerudoThief[GerudoThiefDropKey(Actor_GerudoThief)].EventQueryCalcTargetAngleDiff({'AngleXZ': 120.0}) {
                                Enemy_MiddleBoss_GerudoThief[GerudoThiefDropKey(Actor_GerudoThief)].EventWarpToTargetActor({'TargetActorKind': 1, 'OffsetBase': 1, 'PositionOffset': [0.0, 0.0, 0.0], 'ClothWarpMode': -1, 'InstanceName': '', 'IsWaitEnd': False, 'YAngle': 90.0, 'ActorName': 'ActorName_GerudoThief'})
                            }
                            Enemy_MiddleBoss_GerudoThief[GerudoThiefDropKey(Actor_GerudoThief)].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Demo_Disappear_Lp'})
                        }

                    }
                } {
                    Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': False, 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsLookAtObject': True, 'LookAtPosOffset': [0.0, 0.0, 2.0], 'LookAtTarget': 3, 'IsNearOffset': False, 'offset': [0.0, 0.0, 0.0], 'IsHomePosition': True, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'LookAtInstanceName': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'LookAtActorName': 'ActorName_GerudoThief', 'ArrivedASCommand': 'EvtCaution'})
                } {

                    call Common_Camera_Pln.CameraDoF_Default()

                }

                EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                goto Event177
            } else
            if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'ActorName_GerudoThief', 'InstanceNameA': '', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'CheckDistance': 8.0}) {
                Player_Event.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'OffsetBase': 1, 'ASCommand': 'EvtCaution', 'InstanceName': '', 'UseDemoWait': True, 'ActorName': 'Player_Event', 'YAngle': 0.0, 'IsWaitEnd': True, 'PositionOffset': [0.0, 0.0, 4.0]})
            } else {
                Player_Event.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'OffsetBase': 1, 'ASCommand': 'EvtCaution', 'InstanceName': '', 'UseDemoWait': True, 'ActorName': 'Player_Event', 'YAngle': 0.0, 'IsWaitEnd': True, 'PositionOffset': [0.0, 0.0, 6.0]})
            }
            goto Event477
        }
    } else {
        Player_Event.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'ActorName': 'ActorName_GerudoThief', 'IsWaitEnd': True, 'IsDoNavi': False})
        goto Event382
    }
}

void GerudoThiefReAppear() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 2, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventBasedOnLookAtCamera({'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'StartAccelerateRate': 0.0, 'TargetActorName': 'DestinationAnchor', 'MoveTime': 0, 'ToleranceDistance': 3.0, 'LookAtVectorXZ': 1, 'ToleranceXZAngle': 10.0, 'ToleranceYUpwardAngle': 30.0, 'ToleranceYDownwardAngle': -5.0, 'TargetActorInstanceName': 'Reappear_EnemyPos', 'LookAtVectorY': 0, 'TargetOffset': [0.0, 1.0, 0.0], 'IdealDistance': 1.2000000476837158, 'EndRecelerateRate': 0.0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'ActorName': 'DestinationAnchor', 'NotChangeRot': False, 'InstanceName': 'Reappear_PlayerPos'})
    Dm_Locator[GerudoThiefReAppear(Dm_Locator)].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'GerudoFortress_MiddleBossAppear_Smoke'})
    SoundSystemActor.EventSoundStartSound({'IsIgnoreDucking': True, 'SLinkKey': 'GerudoThief_Appear_Smoke'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 48})
    SoundSystemActor.EventTriggerForbidEmitIfOutsideView({'IsIgnoreLODResult': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ThiefAppear'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'CloseShatter'})
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'Dm:Bgm下げ', 'IsImmediately': True, 'DuckingName2': '', 'DuckingName3': '', 'IsClearRefCount': False})
    GameSystemActor.EventWaitForActorPresence({'IsWaitEnd': True, 'InstanceName': '', 'IsActorCreateRequest': True, 'ActorName': 'ThiefNo.'})
    Enemy_MiddleBoss_GerudoThief[GerudoThiefReAppear(GerudoThief)].EventActorWarpToAnchor({'IsWaitEnd': True, 'InstanceName': 'Reappear_EnemyPos'})

    fork {
        Npc_Hylia_016_Adult[GerudoThiefReAppear(Npc_Hylia)].EventTriggerRequestLookAtTheFront()
        Npc_Hylia_016_Adult[GerudoThiefReAppear(Npc_Hylia)].EventPlayAS({'ASName': 'Crouch', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    } {
        Enemy_MiddleBoss_GerudoThief[GerudoThiefReAppear(GerudoThief)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Demo_Appear', 'IsWaitEnd': True})
    }

    Enemy_MiddleBoss_GerudoThief[GerudoThiefReAppear(GerudoThief)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'BattleStart_Lp', 'IsWaitEnd': False})
    SoundSystemActor.EventTriggerCancelForbidEmitIfOutsideView()

    call GerudoThief_DefineLevel()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_MiddleBoss_AfterLose_BeforeReappear'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_Hookshot'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_HaveTalkedGerudoThief_HaveNotFookShot'}) {
                    Event117:
                    if !GameSystemActor.EventQueryRandomChoice2() {
                        Npc_Invisible_GerudoThief.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_001:Talk_57', 'MaintainPerformanceState': 0})
                    } else {
                        Npc_Invisible_GerudoThief.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_001:Talk_56', 'MaintainPerformanceState': 0})
                    }
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_HaveTalkedGerudoThief_HaveNotFookShot'}) {
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_HaveTalkedGerudoThief_HaveNotFookShot', 'Value': False})
                    }
                } else
                switch GameSystemActor.EventQueryRandomChoice3() {
                  case 0:
                    Npc_Invisible_GerudoThief.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_001:Talk_50', 'MaintainPerformanceState': 0})
                  case 1:
                    Npc_Invisible_GerudoThief.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_001:Talk_52', 'MaintainPerformanceState': 0})
                  case 2:
                    Npc_Invisible_GerudoThief.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_001:Talk_51', 'MaintainPerformanceState': 0})
                }
            } else
            goto Event117
        } else
        switch GameDataActor.EventQueryIsGameDataInt({'Value': 2, 'Index': -1, 'GameDataName': 'Enemy_MiddleBoss_GerudoThief_DefeatNum'}) {
          case 0:
            Npc_Invisible_GerudoThief.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Gerudo_001:Talk_31', 'MaintainPerformanceState': 0})
          case [1, 2]:
            switch GameDataActor.EventQueryIsGameDataInt({'Value': 3, 'Index': -1, 'GameDataName': 'Enemy_MiddleBoss_GerudoThief_DefeatNum'}) {
              case 0:
                Npc_Invisible_GerudoThief.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Gerudo_001:Talk_32', 'MaintainPerformanceState': 0})
              case [1, 2]:
                Npc_Invisible_GerudoThief.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Gerudo_001:Talk_33', 'MaintainPerformanceState': 0})
            }
        }
    } {
        Player_Event.EventPlayerTurnAndLook({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': '', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Target': 3, 'IsWaitEnd': False, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'ActorName': 'ThiefNo.', 'UseNormalTurn': False, 'IsDoNavi': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtCaution', 'IsWaitEnd': False, 'ClothWarpMode': 0})
        } {
            Npc_Navi.EventPlayAS({'ASName': 'EvtCaution', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        }

    }


    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'EndRecelerateRate': 0.0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsLinearMove': False, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'Actor1ActorName': 'Player_Event', 'AtVector': [0.0, 0.0, 0.0], 'AtVectorSetType': 4, 'CameraCollisionMode': 1, 'PosVectorSetType': 3, 'FovySetType': 0, 'TargetFovy': 50.0, 'PosVector': [0.5, 2.200000047683716, -2.0], 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveTotargetPosType': 1, 'MoveTime': 150, 'StartAccelerateRate': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor2ActorName': 'ThiefNo.', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False, 'IsWaitEnd': True})
    } {
        Enemy_MiddleBoss_GerudoThief[GerudoThiefReAppear(GerudoThief)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'BattleStart'})
    } {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_MiddleBoss_AfterLose_BeforeReappear'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_MiddleBoss_AfterLose_BeforeReappear', 'Value': False})
            Npc_Invisible_GerudoThief.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotBecomeSpeaker': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_001:Talk_49', 'MaintainPerformanceState': 0, 'IsCloseDialog': True})
        } else
        switch GameDataActor.EventQueryIsGameDataInt({'Value': 2, 'Index': -1, 'GameDataName': 'Enemy_MiddleBoss_GerudoThief_DefeatNum'}) {
          case 0:
            Npc_Invisible_GerudoThief.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Gerudo_001:Talk_42', 'MaintainPerformanceState': 0})
          case [1, 2]:
            switch GameDataActor.EventQueryIsGameDataInt({'Value': 3, 'Index': -1, 'GameDataName': 'Enemy_MiddleBoss_GerudoThief_DefeatNum'}) {
              case 0:
                Npc_Invisible_GerudoThief.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Gerudo_001:Talk_43', 'MaintainPerformanceState': 0})
              case [1, 2]:
                Npc_Invisible_GerudoThief.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Gerudo_001:Talk_44', 'MaintainPerformanceState': 0})
            }
        }
    }

    GameSystemActor.EventEnterGameSafetySection({'IsWaitEnd': True, 'GameSafetySetting': 'Common_ShutterEnemy'})
}

void CheckRestrictedDoor() {

    fork {

        call InitTalk.InitTalk_Door({'PreOpenPos': 'PreOpenPos', 'LastPos': 'LastPos'})

    } {
        EventSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})
        Npc_Gerudo_017.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_HaveTalked_PrisonDoor'}) {
        switch GameSystemActor.EventQueryRandomChoice3() {
          case 0:
            Npc_Gerudo_017.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/RestrictedDoor:RestrictedDoor_GerudoFortress_02', 'MaintainPerformanceState': 0})
          case 1:
            Npc_Gerudo_017.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/RestrictedDoor:RestrictedDoor_GerudoFortress_03', 'MaintainPerformanceState': 0})
          case 2:
            Npc_Gerudo_017.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/RestrictedDoor:RestrictedDoor_GerudoFortress_01', 'MaintainPerformanceState': 0})
        }
    } else {
        Npc_Gerudo_017.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/RestrictedDoor:RestrictedDoor_GerudoFortress_00'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GerudoFortress_HaveTalked_PrisonDoor'})
    }
}

void CarpenterTalkCam() {

    fork {

        call Common_Camera_Pln.CameraDoF_Event_Normal()

    } {
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 0})
        GameSystemActor.EventWaitTalkCameraInterpolationEnd({'IsWaitEnd': True})
    }

}

void GerudoFortress_BeAnMiddleBoss_ApproachShutter() {

    call GerudoThief_DefineLevel()


    fork {

        call NpcCommon.NpcCommon_PlayerTalk_WaitFrame({'Frames': 30})

    } {
        Npc_Hylia_016_Adult[GerudoFortress_BeAnMiddleBoss_ApproachShutter(FoundNpc_ActorId)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'LastCarpenterMessage', 'MaintainPerformanceState': 0})
    }

    goto Event539
}

void GerudoFortress_MiddleBossLose() {

    call GerudoFortress_GerudoThiefLose({'Enemy_MiddleBoss_GerudoThief': ActorIdentifier(name="Enemy_MiddleBoss_GerudoThief")})

}

void GerudoFortress_MiddleBossLose2() {

    call GerudoFortress_GerudoThiefLose({'Enemy_MiddleBoss_GerudoThief': ActorIdentifier(name="Enemy_MiddleBoss_GerudoThief_02")})

}

void GerudoFortress_MiddleBossLose3() {

    call GerudoFortress_GerudoThiefLose({'Enemy_MiddleBoss_GerudoThief': ActorIdentifier(name="Enemy_MiddleBoss_GerudoThief_03")})

}

void GerudoFortress_MiddleBossLose4() {

    call GerudoFortress_GerudoThiefLose({'Enemy_MiddleBoss_GerudoThief': ActorIdentifier(name="Enemy_MiddleBoss_GerudoThief_04")})

}

void StepCheck_Clear() {
    GameSystemActor.EventTriggerRequestAutoSave()
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GameDataName01'})
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'GerudoFortress_Meet_FourCarpenter_NumOfCarpenterHelped', 'Value': 1, 'Index': -1}) {
      case [0, 1]:

        call NaviEvent_CarpenterNumber({'MessageId': 'EventFlowMsg/SageOfSpirit:Talk_19', 'GameDataName': 'GameDataName01'})

      case 2:
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'GerudoFortress_Meet_FourCarpenter_NumOfCarpenterHelped', 'Value': 2, 'Index': -1}) {
          case [0, 1]:

            call NaviEvent_CarpenterNumber({'MessageId': 'EventFlowMsg/SageOfSpirit:Talk_20', 'GameDataName': 'GameDataName01'})

          case 2:
            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'GerudoFortress_Meet_FourCarpenter_NumOfCarpenterHelped', 'Value': 3, 'Index': -1}) {
              case [0, 1]:

                call NaviEvent_CarpenterNumber({'MessageId': 'EventFlowMsg/SageOfSpirit:Talk_22', 'GameDataName': 'GameDataName01'})

              case 2:
                EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Meet_FourCarpenter_ClearEvent', 'FadeInTypeEventEnd': 0})
            }
        }
    }
}

void NaviEvent_CarpenterNumber() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-1.2100000381469727, 1.3300000429153442, 2.309999942779541], 'AtVector': [0.0, 1.1200000047683716, 0.3700000047683716], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})

    call NaviEventCommon.InitTalk_NaviPlayerFront({'IsLookAtNavi': True})


    call NaviEventCommon.EventTalk_Navi_WithPlayerTalk({'MessageId': 'MessageId'})

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GameDataName'})
}

void Check_NumOfCarpenterHelped() {
    GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'GerudoFortress_Meet_FourCarpenter_NumOfCarpenterHelped', 'Value': 1, 'Index': -1})
    GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'GameDataName': 'GerudoFortress_Meet_FourCarpenter_NumOfCarpenterHelped_02', 'Value': -1})
    EventSystemActor.EventWait({'Frames': 2, 'IsWaitEnd': True})
}

void Windowhint() {
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Npc_Navi.EventTriggerParticipateEvent()

    fork {
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'CheckedWindowGameData'}) {
            Npc_Navi.EventNaviMovePosTalkToPlayer({'ASCommand': '', 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'DistPassThrough': 0.0, 'IsUseDisguiseSpeakerPos': True, 'IsTurnLooking': True, 'MinimumSpeed': 0.20000000298023224, 'IsWaitEnd': True, 'MoveSpeed': 8.0})
        }
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 60, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'CameraCollisionLookAtActor': 2, 'CameraCollisionMode': 0, 'TargetFovy': 40.0, 'AtVectorSetType': 4, 'AtVector': [0.0, 0.0, 0.0], 'PosVectorSetType': 4, 'Actor2ActorName': 'DestinationAnchor', 'PosVector': [-1.0, 3.0, 4.0], 'Actor2InstanceName': 'Window', 'IsEnableRevertFast': False})
    } {
        Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'DestinationAnchor', 'InstanceName': 'Window', 'Target': 5})
    }


    fork {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'FoundRoom'}) {
            Npc_Navi.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/NaviHint:NaviHint_Gerudo_02'})
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'CheckedWindowGameData_02'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'CheckedWindowGameData'}) {
                Event416:
                Npc_Navi.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/NaviHint:NaviHint_Gerudo_00'})
            } else {
                Npc_Navi.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/NaviHint:NaviHint_Gerudo_01', 'IsNotBecomeSpeaker': True, 'ASName': 'EvtLookAroundAttention'})
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'CheckedWindowGameData'}) {
            goto Event416
        } else {
            Npc_Navi.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/NaviHint:NaviHint_Gerudo', 'IsWaitEnd': True})
        }
    } {
        Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_Navi', 'InstanceName': '', 'Target': 3})
    }

}

void Windowhint_1() {

    call Windowhint({'CheckedWindowGameData': 'GerudoFortress_HasCheckedWindow_01', 'CheckedWindowGameData_02': 'GerudoFortress_HasCheckedWindow_04', 'FoundRoom': 'Found_Npc_Hylia_013_Adult'})

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GerudoFortress_HasCheckedWindow_01'})
}

void Windowhint_4() {

    call Windowhint({'CheckedWindowGameData': 'GerudoFortress_HasCheckedWindow_04', 'CheckedWindowGameData_02': 'GerudoFortress_HasCheckedWindow_01', 'FoundRoom': 'Found_Npc_Hylia_016_Adult'})

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GerudoFortress_HasCheckedWindow_04'})
}

void Process_GotoPrison() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GerudoFortress_MiddleBoss_AfterLose_BeforeReappear'})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GerudoFortress_IsGoingPrison', 'Index': -1, 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'GerudoFortress_AppearGerudoThief_Npc_Hylia_013_Adult'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'GerudoFortress_AppearGerudoThief_Npc_Hylia_014_Adult'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'GerudoFortress_AppearGerudoThief_Npc_Hylia_015_Adult'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_AppearGerudoThief_Npc_Hylia_016_Adult', 'Value': False})
    EventSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
    Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'GotoPrison_FromFortressGuard', 'ASCommand': 'EvtWait'})
}
