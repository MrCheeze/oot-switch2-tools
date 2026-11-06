-------- EventFlow: DreamBossStage --------

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerPlayerContinueSlippingDown', 'EventPlayerUnequip', 'EventTriggerStartFadeOut', 'EventTriggerPlayerEventStartWithDrawn', 'EventTriggerPlayerLookAtObject', 'EventTriggerPlayerEventStartWithClimb', 'EventTriggerPlayerEventStartWithCarry', 'EventTriggerPlayerEventStartWithRolling', 'EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLookLastDoActor', 'EventTriggerPlayerSetCalcLiftActor', 'EventTriggerChangeModelAlphaDrawTiming', 'EventWaitCreationFinishedEquipment']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk', 'EventTriggerNaviWarpToTargetPosAndRot', 'EventWarpToTargetPosAndRot', 'EventNaviMoveAroundToPlayer', 'EventTriggerParticipateEvent', 'EventTriggerStartFadeOut', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerMiniGameTimerStart', 'EventTriggerShowTimerUI', 'EventTriggerMiniGameTimerStop']
queries: ['EventQueryMiniGameTimerIsCounting']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventRefindRangeGameSafetySection', 'EventReserveBancChange', 'EventTriggerBancRequestBeforehandLoad', 'EventTriggerEnemyMuseumUpdateDefeatedStatus']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice3', 'EventQueryTalkChoice4']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventTriggerCameraSavePoint', 'EventSendEventSingleMessageToPlayerCamera', 'EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventSendEventTalkSignMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Enemy_DungeonBoss_Ganondorf
entrypoint: None()
actions: ['EventTriggerSetWasAppearInEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventTriggertExchangeEnemyMuseumPouchAndState', 'EventTriggerSyncPlayerEquipmentAndPouch', 'EventTriggertRestorePouchFromEnemyMuseum']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetGameDataInt', 'EventTriggerCopyGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SystemTextNPC
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetDoFForFlowchart', 'EventSetPixelScaleForModelLod']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_DungeonBoss_Kotake[KotakeKoumeBattleClient]
entrypoint: None()
actions: ['EventTriggerSetWasAppearInEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_DungeonBoss_Koume[KotakeKoumeBattleClient]
entrypoint: None()
actions: ['EventTriggerSetWasAppearInEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_DungeonBoss_BongoBongo
entrypoint: None()
actions: ['EventTriggerSetWasAppearInEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBecomeSpeaker', 'EventTriggerSetModelLodManual']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: Enemy_DungeonBoss_Dodongo
entrypoint: None()
actions: ['EventTriggerSetWasAppearInEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_DungeonBoss_Volvagia
entrypoint: None()
actions: ['EventTriggerSetWasAppearInEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_DungeonBoss_PhantomGanon
entrypoint: None()
actions: ['EventTriggerSetWasAppearInEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_DungeonBoss_Barinade
entrypoint: None()
actions: ['EventTriggerSetWasAppearInEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_DungeonBoss_Morpha[BossDefeat]
entrypoint: None()
actions: ['EventTriggerSetWasAppearInEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['Event_ResetChangeWindSpeedForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_Dream_Battle_StoneMonument_A_01
entrypoint: None()
actions: ['EventTriggerBecomeSpeaker']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_Dream_Battle_StoneMonument_A_02
entrypoint: None()
actions: ['EventTriggerBecomeSpeaker']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_Dream_Battle_StoneMonument_A_03
entrypoint: None()
actions: ['EventTriggerBecomeSpeaker']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Invisible_GerudoThief
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_MiddleBoss_BigOcto[MiddleBoss]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventDoNothing', 'EventTriggerSetWasAppearInEvent', 'EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_DungeonBoss_Ganon
entrypoint: None()
actions: ['EventTriggerSetWasAppearInEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerRemoveWeaponKeepSheath']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_Zelda_Adult
entrypoint: None()
actions: ['EventAIScheduleWarpToAnchor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: WorldMgrThunderMgr
entrypoint: None()
actions: ['EventTriggerWmThunderMgrSetIsUpdate', 'EventTriggerWorldMgrThunderMgrChangePatternKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_DungeonBoss_Gohma
entrypoint: None()
actions: ['EventDungeonBossGohmaWarpToReferencedAnchor', 'EventPlayAS', 'EventDungeonBossSetConsiderBattlePresentation']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_MiddleBoss_GerudoThief[Rematch_Lose_GerudoThief(Enemy_MiddleBoss_GerudoThief)]
entrypoint: Rematch_Lose_GerudoThief(Enemy_MiddleBoss_GerudoThief)
actions: ['EventWaitUntilASCancellable', 'EventTriggerSetCctForwardSpeedZero', 'EventPlayAS']
queries: []
params: None

void Rematch_Gohma() {
    GameSystemActor.EventTriggerBancRequestBeforehandLoad({'BancPath': 'Work/Banc/Scene/DreamWorld/GohmaStage.bcett.json', 'IsTargetRetry': False})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_BossRush'}) {
        switchcall SubEvent_AllBossBattle.BossRushBossStageExitSuccessBase() {
          case 3013883440:
            GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'IsStartOnEvent': False, 'EventStarterName': '', 'FadePattern': 1, 'NextBanc': 'GohmaStage', 'NextStartPos': 'GohmaStage', 'BootEventName': 'DreamBossStage_Rematch_Gohma_Start', 'IsItemWarp': False})
        }
    } else {
        EventCamera.EventTriggerCameraSavePoint()

        call ConfirmRematch({'EndDistance': 0.0, 'EndFNumber': 3.0})

        switchcall Enemy_Dictionary_Common.Dictionary_Rematch({'ActorName': 'ActorName'}) {
          case 3013883440:

            call SubEvent_AllBossBattle.ChildBossStageEnter({'NextStartPos': 'GohmaStage', 'NextBanc': 'GohmaStage', 'EnemyActor': 'Enemy_DungeonBoss_Gohma', 'IItemDrop': True, 'BossCount': 1, 'BootEventName': 'InsideTheDekuTree_BossAppear'})

        }
    }
}

void Rematch_Dodongo() {
    GameSystemActor.EventTriggerBancRequestBeforehandLoad({'BancPath': 'Work/Banc/Scene/DreamWorld/DodongoStage.bcett.json', 'IsTargetRetry': False})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_BossRush'}) {
        switchcall SubEvent_AllBossBattle.BossRushBossStageExitSuccessBase() {
          case 3013883440:
            GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'IsStartOnEvent': False, 'EventStarterName': '', 'FadePattern': 1, 'NextBanc': 'DodongoStage', 'NextStartPos': 'DodongoStage', 'BootEventName': 'DreamBossStage_Rematch_Dodongo_Start', 'IsItemWarp': False})
        }
    } else {
        EventCamera.EventTriggerCameraSavePoint()

        call ConfirmRematch({'EndDistance': 0.0, 'EndFNumber': 0.800000011920929})

        switchcall Enemy_Dictionary_Common.Dictionary_Rematch({'ActorName': 'ActorName'}) {
          case 3013883440:

            call SubEvent_AllBossBattle.ChildBossStageEnter({'NextStartPos': 'DodongoStage', 'NextBanc': 'DodongoStage', 'EnemyActor': 'Enemy_DungeonBoss_Dodongo', 'IItemDrop': True, 'BossCount': 4, 'BootEventName': 'Get_StoneOfFire_AppearBoss'})

        }
    }
}

void Rematch_Barinade() {
    GameSystemActor.EventTriggerBancRequestBeforehandLoad({'BancPath': 'Work/Banc/Scene/DreamWorld/BarinadeStage.bcett.json', 'IsTargetRetry': False})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_BossRush'}) {
        switchcall SubEvent_AllBossBattle.BossRushBossStageExitSuccessBase() {
          case 3013883440:
            GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'IsStartOnEvent': False, 'EventStarterName': '', 'FadePattern': 1, 'NextBanc': 'BarinadeStage', 'NextStartPos': 'BarinadeStage', 'BootEventName': 'DreamBossStage_Rematch_Barinade_Start', 'IsItemWarp': False})
        }
    } else {
        EventCamera.EventTriggerCameraSavePoint()

        call ConfirmRematch({'EndDistance': 0.0, 'EndFNumber': 1.100000023841858})

        switchcall Enemy_Dictionary_Common.Dictionary_Rematch({'ActorName': 'ActorName'}) {
          case 3013883440:

            call SubEvent_AllBossBattle.ChildBossStageEnter({'NextStartPos': 'BarinadeStage', 'NextBanc': 'BarinadeStage', 'EnemyActor': 'Enemy_DungeonBoss_Barinade', 'IItemDrop': True, 'BossCount': 6, 'BootEventName': 'DreamBossStage_Rematch_Barinade_Start'})

        }
    }
}

void Rematch_PhantomGanon() {
    GameSystemActor.EventTriggerBancRequestBeforehandLoad({'BancPath': 'Work/Banc/Scene/DreamWorld/PhantomGanonStage.bcett.json', 'IsTargetRetry': False})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_BossRush'}) {
        switchcall SubEvent_AllBossBattle.BossRushBossStageExitSuccessBase() {
          case 3013883440:
            GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'IsStartOnEvent': False, 'EventStarterName': '', 'FadePattern': 1, 'NextBanc': 'PhantomGanonStage', 'NextStartPos': 'PhantomGanonStage', 'BootEventName': 'DreamBossStage_Rematch_PhantomGanon_Start', 'IsItemWarp': False})
        }
    } else {
        EventCamera.EventTriggerCameraSavePoint()

        call ConfirmRematch({'EndDistance': 0.0, 'EndFNumber': 3.5})

        switchcall Enemy_Dictionary_Common.Dictionary_Rematch({'ActorName': 'ActorName'}) {
          case 3013883440:

            call SubEvent_AllBossBattle.AdultBossStageEnter({'NextStartPos': 'PhantomGanonStage', 'NextBanc': 'PhantomGanonStage', 'EnemyActor': 'Enemy_DungeonBoss_PhantomGanon', 'ItemDrop': True, 'BossCount': 9, 'BootEventName': 'ForestTemple_SageOfForest_PhantomGanonAppearance'})

        }
    }
}

void Rematch_Volvagia() {
    GameSystemActor.EventTriggerBancRequestBeforehandLoad({'BancPath': 'Work/Banc/Scene/DreamWorld/VolvagiaStage.bcett.json', 'IsTargetRetry': False})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_BossRush'}) {
        switchcall SubEvent_AllBossBattle.BossRushBossStageExitSuccessBase() {
          case 3013883440:
            GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'IsStartOnEvent': False, 'EventStarterName': '', 'FadePattern': 1, 'NextBanc': 'VolvagiaStage', 'NextStartPos': 'VolvagiaStage', 'BootEventName': 'DreamBossStage_Rematch_Volvagia_Start', 'IsItemWarp': False})
        }
    } else {
        EventCamera.EventTriggerCameraSavePoint()

        call ConfirmRematch({'EndDistance': 0.0, 'EndFNumber': 2.0})

        switchcall Enemy_Dictionary_Common.Dictionary_Rematch({'ActorName': 'ActorName'}) {
          case 3013883440:

            call SubEvent_AllBossBattle.AdultBossStageEnter({'NextStartPos': 'VolvagiaStage', 'NextBanc': 'VolvagiaStage', 'EnemyActor': 'Enemy_DungeonBoss_Volvagia', 'ItemDrop': True, 'BossCount': 11, 'BootEventName': 'SageOfFire_BossAppear'})

        }
    }
}

void Rematch_Morpha() {
    GameSystemActor.EventTriggerBancRequestBeforehandLoad({'BancPath': 'Work/Banc/Scene/DreamWorld/MorphaStage.bcett.json', 'IsTargetRetry': False})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_BossRush'}) {
        switchcall SubEvent_AllBossBattle.BossRushBossStageExitSuccessBase() {
          case 3013883440:
            GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'IsStartOnEvent': False, 'EventStarterName': '', 'FadePattern': 1, 'NextBanc': 'MorphaStage', 'NextStartPos': 'MorphaStage', 'BootEventName': 'DreamBossStage_Rematch_Morpha_Start', 'IsItemWarp': False})
        }
    } else {
        EventCamera.EventTriggerCameraSavePoint()

        call ConfirmRematch({'EndDistance': 0.0, 'EndFNumber': 3.0})

        switchcall Enemy_Dictionary_Common.Dictionary_Rematch({'ActorName': 'ActorName'}) {
          case 3013883440:

            call SubEvent_AllBossBattle.AdultBossStageEnter({'NextStartPos': 'MorphaStage', 'NextBanc': 'MorphaStage', 'EnemyActor': 'Enemy_DungeonBoss_Morpha', 'ItemDrop': True, 'BossCount': 14, 'BootEventName': 'Demo_SageOfWater_BossAppears'})

        }
    }
}

void Rematch_Bongobongo() {
    GameSystemActor.EventTriggerBancRequestBeforehandLoad({'BancPath': 'Work/Banc/Scene/DreamWorld/BongoBongoStage.bcett.json', 'IsTargetRetry': False})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_BossRush'}) {
        switchcall SubEvent_AllBossBattle.BossRushBossStageExitSuccessBase() {
          case 3013883440:
            GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'IsStartOnEvent': False, 'EventStarterName': '', 'FadePattern': 1, 'NextBanc': 'BongoBongoStage', 'NextStartPos': 'BongoBongoStage', 'BootEventName': 'DreamBossStage_Rematch_BongoBongo_Start', 'IsItemWarp': False})
        }
    } else {
        EventCamera.EventTriggerCameraSavePoint()

        call ConfirmRematch({'EndDistance': 0.0, 'EndFNumber': 0.4000000059604645})

        switchcall Enemy_Dictionary_Common.Dictionary_Rematch({'ActorName': 'ActorName'}) {
          case 3013883440:

            call SubEvent_AllBossBattle.AdultBossStageEnter({'NextStartPos': 'BongoBongoStage', 'NextBanc': 'BongoBongoStage', 'EnemyActor': 'Enemy_DungeonBoss_BongoBongo', 'ItemDrop': True, 'BossCount': 17, 'BootEventName': 'ShadowTemple_BossAppear'})

        }
    }
}

void Rematch_Twinrova() {
    GameSystemActor.EventTriggerBancRequestBeforehandLoad({'BancPath': 'Work/Banc/Scene/DreamWorld/TwinrovaStage.bcett.json', 'IsTargetRetry': False})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_BossRush'}) {
        switchcall SubEvent_AllBossBattle.BossRushBossStageExitSuccessBase() {
          case 3013883440:
            GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'IsStartOnEvent': False, 'EventStarterName': '', 'FadePattern': 1, 'NextBanc': 'TwinrovaStage', 'NextStartPos': 'TwinrovaStage', 'BootEventName': 'DreamBossStage_Rematch_Twinrova_Start', 'IsItemWarp': False})
        }
    } else {
        EventCamera.EventTriggerCameraSavePoint()

        call ConfirmRematch({'EndDistance': 0.0, 'EndFNumber': 0.699999988079071})

        switchcall Enemy_Dictionary_Common.Dictionary_Rematch({'ActorName': 'ActorName'}) {
          case 3013883440:

            call SubEvent_AllBossBattle.AdultBossStageEnter({'NextStartPos': 'TwinrovaStage', 'NextBanc': 'TwinrovaStage', 'EnemyActor': 'Enemy_DungeonBoss_Twinrova', 'ItemDrop': True, 'BossCount': 21, 'BootEventName': 'SageOfSpirit_BossStart'})

        }
    }
}

void Rematch_Ganondorf() {
    GameSystemActor.EventTriggerBancRequestBeforehandLoad({'BancPath': 'Work/Banc/Scene/DreamWorld/GanondorfStage.bcett.json', 'IsTargetRetry': False})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_BossRush'}) {
        switchcall SubEvent_AllBossBattle.BossRushBossStageExitSuccessBase() {
          case 3013883440:
            GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'IsStartOnEvent': False, 'EventStarterName': '', 'FadePattern': 1, 'NextBanc': 'GanondorfStage', 'NextStartPos': 'GanondorfStage', 'BootEventName': 'DreamBossStage_Rematch_Ganondorf_Start', 'IsItemWarp': False})
        }
    } else {
        EventCamera.EventTriggerCameraSavePoint()

        call ConfirmRematch({'EndDistance': 0.0, 'EndFNumber': 7.5})

        switchcall Enemy_Dictionary_Common.Dictionary_Rematch({'ActorName': 'ActorName'}) {
          case 3013883440:

            call SubEvent_AllBossBattle.AdultBossStageEnter({'NextStartPos': 'GanondorfStage', 'NextBanc': 'GanondorfStage', 'EnemyActor': 'Enemy_DungeonBoss_Ganondorf', 'ItemDrop': True, 'BootEventName': 'DreamBossStage_Rematch_Ganondorf_Start', 'BossCount': 24})

        }
    }
}

void Rematch_Ganon() {
    GameSystemActor.EventTriggerBancRequestBeforehandLoad({'BancPath': 'Work/Banc/Scene/DreamWorld/GanonStage.bcett.json', 'IsTargetRetry': False})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_BossRush'}) {
        switchcall SubEvent_AllBossBattle.BossRushBossStageExitSuccessBase() {
          case 3013883440:
            GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'IsStartOnEvent': False, 'EventStarterName': '', 'FadePattern': 1, 'NextBanc': 'GanonStage', 'NextStartPos': 'GanonStage', 'BootEventName': 'DreamBossStage_Rematch_Ganon_Start', 'IsItemWarp': False})
        }
    } else {
        EventCamera.EventTriggerCameraSavePoint()

        call ConfirmRematch({'EndDistance': 0.0, 'EndFNumber': 2.0999999046325684})

        switchcall Enemy_Dictionary_Common.Dictionary_Rematch({'ActorName': 'ActorName'}) {
          case 3013883440:

            call SubEvent_AllBossBattle.AdultBossStageEnter({'NextStartPos': 'GanonStage', 'NextBanc': 'GanonStage', 'EnemyActor': 'Enemy_DungeonBoss_Ganon_SecondHalfBattle', 'ItemDrop': True, 'BossCount': 25, 'BootEventName': 'InsideGanonCastle_Dungeon_BossAppear_2'})

        }
    }
}

void ConfirmRematch() {
    Npc_EventStarter.EventTriggerBecomeSpeaker()
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventPlayerTurnAndLookLastDoActor({'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'IsWaitEnd': False, 'IsDoNavi': False})

    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        PostProcessingActor.EventSetDoFForFlowchart({'IsPrimaryApply': False, 'IsWaitEnd': False, 'RequiredFrame': 20, 'IsAutoFocalDist': True, 'EndDistance': 'EndDistance', 'EndFNumber': 'EndFNumber', 'EndBluarLevel': 1.5})
        PostProcessingActor.EventSetPixelScaleForModelLod({'Scale': 5.0})
        Npc_EventStarter.EventTriggerSetModelLodManual({'LodLevel': 0})
    } {
        EventCamera.EventSendEventSingleMessageToPlayerCamera({'IsWaitEnd': False})
    } {
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': False, 'LookAtTarget': 2, 'IsOffCenterCamera': True, 'IsHomePosition': True, 'IsLookAtObject': False, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'OverwriteRotNearDist': -1.0, 'IsUseDisguiseSpeakerPos': False, 'offset': [0.0, 0.0, 0.0], 'IsNearOffset': False, 'PassThrough': -1.0, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'ArrivedASCommand': '', 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        Player_Event.EventTriggerChangeModelAlphaDrawTiming({'IsPostEffect': True, 'IsPreEffect': False})
        Player_Event.EventTriggerStartFadeOut({'FadeFrame': 5})
        Npc_Navi.EventTriggerXLinkFadeByKey({'ELinkKey': 'Wait', 'SLinkKey': '', 'IsKill': False})
        Npc_Navi.EventTriggerStartFadeOut({'FadeFrame': 5})
    }

}

void Rematch_DarkLink() {
    GameSystemActor.EventTriggerBancRequestBeforehandLoad({'BancPath': 'Work/Banc/Scene/DreamWorld/DarkLinkStage.bcett.json', 'IsTargetRetry': False})
    EventCamera.EventTriggerCameraSavePoint()

    call ConfirmRematch({'EndDistance': 0.0, 'EndFNumber': 10.0})

    switchcall Enemy_Dictionary_Common.Dictionary_Rematch({'ActorName': 'ActorName'}) {
      case 3013883440:
        GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'DreamBossStage_DarkLink_DisappearShadow'})

        call SubEvent_AllBossBattle.AdultBossStageEnter({'EnemyActor': 'Enemy_MiddleBoss_DarkLink', 'NextBanc': 'DarkLinkStage', 'NextStartPos': 'DarkLinkStage', 'ItemDrop': False, 'BootEventName': 'DreamBossStage_Rematch_Arrive', 'BossCount': 13})

    }
}

void Rematch_Stalfos() {
    GameSystemActor.EventTriggerBancRequestBeforehandLoad({'BancPath': 'Work/Banc/Scene/DreamWorld/StalfosStage.bcett.json', 'IsTargetRetry': False})
    EventCamera.EventTriggerCameraSavePoint()

    call ConfirmRematch({'EndDistance': 0.0, 'EndFNumber': 4.5})

    switchcall Enemy_Dictionary_Common.Dictionary_Rematch({'ActorName': 'ActorName'}) {
      case 3013883440:
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ShadowTemple_Gimmick_LooK_DepartureDemo'})

        call SubEvent_AllBossBattle.AdultBossStageEnter({'NextStartPos': 'StalfosStage', 'NextBanc': 'StalfosStage', 'EnemyActor': 'Enemy_Stalfos_AlwaysRespawn', 'ItemDrop': False, 'BootEventName': 'DreamBossStage_Rematch_Arrive', 'BossCount': 16})

    }
}

void NaviHint_Rematch() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Navi_Ban', 'Index': -1}) {

        call NaviHint.InitTalk_NaviHint_Ganondorf()

    } else {

        call NaviHint.InitTalk_NaviHint_Obj()

    }
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_BossRush'}) {
        if !ChallengeSystemActor.EventQueryMiniGameTimerIsCounting() {
            Event52:
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': '', 'IsCloseDialog': False, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Dream:Navi_Rematch_06', 'ChoiceLabel1': 10, 'ChoiceLabel2': 11, 'MaintainPerformanceState': 0})
            switchcall Dream_Navi_01() {
              case [1642511898, 3013883440]:
                Event237:
                Player_Event.EventTriggerPlayerSetCalcLiftActor({'IsStopCalc': False})
            }
        } else
        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRushBossCount', 'Value': 10}) {
          case 0:
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': '', 'IsCloseDialog': False, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Dream:Navi_Rematch_12', 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'MaintainPerformanceState': 0})
            switchcall Dream_Navi_02() {
              case [3013883440, 1642511898]:
                goto Event237
            }
          case [1, 2]:
            goto Event52
        }
    } else {
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': '', 'IsCloseDialog': False, 'ChoiceDefaultNo': 0, 'MessageId': 'EventFlowMsg/Npc_Dream:Navi_Rematch_06', 'ChoiceLabel1': 10, 'ChoiceNumber': 3, 'ChoiceLabel3': 11, 'ChoiceLabel2': 17, 'MaintainPerformanceState': 0})
        switchcall Dream_Navi_03() {
          case [894944625, 3013883440, 1642511898]:
            goto Event237
        }
    }
}

void Rematch_Wolfos() {
    GameSystemActor.EventTriggerBancRequestBeforehandLoad({'BancPath': 'Work/Banc/Scene/DreamWorld/WolfosStage.bcett.json', 'IsTargetRetry': False})
    EventCamera.EventTriggerCameraSavePoint()

    call ConfirmRematch({'EndDistance': 0.0, 'EndFNumber': 7.0})

    switchcall Enemy_Dictionary_Common.Dictionary_Rematch({'ActorName': 'ActorName'}) {
      case 3013883440:

        call SubEvent_AllBossBattle.ChildBossStageEnter({'NextStartPos': 'WolfosStage', 'NextBanc': 'WolfosStage', 'EnemyActor': 'Enemy_Wolfos', 'IItemDrop': False, 'BootEventName': 'DreamBossStage_Rematch_Arrive', 'BossCount': 2})

    }
}

void Rematch_Meg() {
    GameSystemActor.EventTriggerBancRequestBeforehandLoad({'BancPath': 'Work/Banc/Scene/DreamWorld/MegStage.bcett.json', 'IsTargetRetry': False})
    EventCamera.EventTriggerCameraSavePoint()

    call ConfirmRematch({'EndDistance': 0.0, 'EndFNumber': 9.0})

    switchcall Enemy_Dictionary_Common.Dictionary_Rematch({'ActorName': 'ActorName'}) {
      case 3013883440:

        call SubEvent_AllBossBattle.AdultBossStageEnter({'NextStartPos': 'MegStage', 'NextBanc': 'MegStage', 'EnemyActor': 'Enemy_MiddleBoss_Poe_Meg', 'ItemDrop': False, 'BootEventName': 'DreamBossStage_Rematch_Arrive', 'BossCount': 8})

    }
}

void Rematch_Lizalfos() {
    GameSystemActor.EventTriggerBancRequestBeforehandLoad({'BancPath': 'Work/Banc/Scene/DreamWorld/LizalfosStage.bcett.json', 'IsTargetRetry': False})
    EventCamera.EventTriggerCameraSavePoint()

    call ConfirmRematch({'EndDistance': 0.0, 'EndFNumber': 4.199999809265137})

    switchcall Enemy_Dictionary_Common.Dictionary_Rematch({'ActorName': 'ActorName'}) {
      case 3013883440:

        call SubEvent_AllBossBattle.ChildBossStageEnter({'NextStartPos': 'LizalfosStage', 'NextBanc': 'LizalfosStage', 'EnemyActor': 'Enemy_MiddleBoss_Lizalfos', 'IItemDrop': False, 'BootEventName': 'DreamBossStage_Rematch_Arrive', 'BossCount': 3})

    }
}

void Rematch_Flamedancer() {
    GameSystemActor.EventTriggerBancRequestBeforehandLoad({'BancPath': 'Work/Banc/Scene/DreamWorld/FlareDancerStage.bcett.json', 'IsTargetRetry': False})
    EventCamera.EventTriggerCameraSavePoint()

    call ConfirmRematch({'EndDistance': 0.0, 'EndFNumber': 3.200000047683716})

    switchcall Enemy_Dictionary_Common.Dictionary_Rematch({'ActorName': 'ActorName'}) {
      case 3013883440:

        call SubEvent_AllBossBattle.AdultBossStageEnter({'EnemyActor': 'Enemy_MiddleBoss_FlareDancer', 'NextBanc': 'FlareDancerStage', 'NextStartPos': 'FlareDancerStage', 'ItemDrop': False, 'BootEventName': 'DreamBossStage_Rematch_Arrive', 'BossCount': 10})

    }
}

void Rematch_Dinolfos() {
    GameSystemActor.EventTriggerBancRequestBeforehandLoad({'BancPath': 'Work/Banc/Scene/DreamWorld/DinolfosStage.bcett.json', 'IsTargetRetry': False})
    EventCamera.EventTriggerCameraSavePoint()

    call ConfirmRematch({'EndDistance': 0.0, 'EndFNumber': 5.0})

    switchcall Enemy_Dictionary_Common.Dictionary_Rematch({'ActorName': 'ActorName'}) {
      case 3013883440:

        call SubEvent_AllBossBattle.AdultBossStageEnter({'NextStartPos': 'DinolfosStage', 'NextBanc': 'DinolfosStage', 'EnemyActor': 'Enemy_Dinolfos', 'ItemDrop': False, 'BootEventName': 'DreamBossStage_Rematch_Arrive', 'BossCount': 22})

    }
}

void Rematch_IronKnuckleBlack() {
    GameSystemActor.EventTriggerBancRequestBeforehandLoad({'BancPath': 'Work/Banc/Scene/DreamWorld/IronKnuckleBlackStage.bcett.json', 'IsTargetRetry': False})
    EventCamera.EventTriggerCameraSavePoint()

    call ConfirmRematch({'EndDistance': 0.0, 'EndFNumber': 3.299999952316284})

    switchcall Enemy_Dictionary_Common.Dictionary_Rematch({'ActorName': 'ActorName'}) {
      case 3013883440:

        call SubEvent_AllBossBattle.AdultBossStageEnter({'ItemDrop': False, 'BootEventName': 'DreamBossStage_Rematch_Arrive', 'EnemyActor': 'Enemy_IronKnuckle_Black', 'NextStartPos': 'IronKnuckleBlackStage', 'NextBanc': 'IronKnuckleBlackStage', 'BossCount': 23})

    }
}

void Rematch_IronKnuckleWhite() {
    GameSystemActor.EventTriggerBancRequestBeforehandLoad({'BancPath': 'Work/Banc/Scene/DreamWorld/IronKnuckleWhiteStage.bcett.json', 'IsTargetRetry': False})
    EventCamera.EventTriggerCameraSavePoint()

    call ConfirmRematch({'EndDistance': 0.0, 'EndFNumber': 4.0})

    switchcall Enemy_Dictionary_Common.Dictionary_Rematch({'ActorName': 'ActorName'}) {
      case 3013883440:

        call SubEvent_AllBossBattle.ChildBossStageEnter({'NextStartPos': 'IronKnuckleWhiteStage', 'NextBanc': 'IronKnuckleWhiteStage', 'EnemyActor': 'Enemy_IronKnuckle_Silver', 'IItemDrop': False, 'BootEventName': 'DreamBossStage_Rematch_Arrive', 'BossCount': 19})

    }
}

void Rematch_Naboru() {
    GameSystemActor.EventTriggerBancRequestBeforehandLoad({'BancPath': 'Work/Banc/Scene/DreamWorld/NaboruStage.bcett.json', 'IsTargetRetry': False})
    EventCamera.EventTriggerCameraSavePoint()

    call ConfirmRematch({'EndDistance': 0.0, 'EndFNumber': 3.5})

    switchcall Enemy_Dictionary_Common.Dictionary_Rematch({'ActorName': 'ActorName'}) {
      case 3013883440:

        call SubEvent_AllBossBattle.AdultBossStageEnter({'NextStartPos': 'NaboruStage', 'NextBanc': 'NaboruStage', 'EnemyActor': 'Enemy_MiddleBoss_IronKnuckle_Nabooru', 'ItemDrop': False, 'BootEventName': 'DreamBossStage_Rematch_Arrive', 'BossCount': 20})

    }
}

void Rematch_GerudoThief() {
    GameSystemActor.EventTriggerBancRequestBeforehandLoad({'BancPath': 'Work/Banc/Scene/DreamWorld/GerudoThiefStage.bcett.json', 'IsTargetRetry': False})
    EventCamera.EventTriggerCameraSavePoint()

    call ConfirmRematch({'EndDistance': 0.0, 'EndFNumber': 5.5})

    switchcall Enemy_Dictionary_Common.Dictionary_Rematch({'ActorName': 'ActorName'}) {
      case 3013883440:

        call SubEvent_AllBossBattle.AdultBossStageEnter({'NextStartPos': 'GerudoThiefStage', 'NextBanc': 'GerudoThiefStage', 'EnemyActor': 'Enemy_MiddleBoss_GerudoThief', 'ItemDrop': False, 'BootEventName': 'DreamBossStage_Rematch_Arrive', 'BossCount': 18})

    }
}

void Rematch_BigOcto() {
    GameSystemActor.EventTriggerBancRequestBeforehandLoad({'BancPath': 'Work/Banc/Scene/DreamWorld/BigOctoStage.bcett.json', 'IsTargetRetry': False})
    EventCamera.EventTriggerCameraSavePoint()

    call ConfirmRematch({'EndDistance': 0.0, 'EndFNumber': 2.0})

    switchcall Enemy_Dictionary_Common.Dictionary_Rematch({'ActorName': 'ActorName'}) {
      case 3013883440:

        call SubEvent_AllBossBattle.ChildBossStageEnter({'NextStartPos': 'BigOctoStage', 'NextBanc': 'BigOctoStage', 'EnemyActor': 'Enemy_MiddleBoss_BigOcto', 'IItemDrop': False, 'BossCount': 5, 'BootEventName': 'DreamBossStage_Rematch_BigOcta_Start'})

    }
}

void Rematch_DeadHand() {
    GameSystemActor.EventTriggerBancRequestBeforehandLoad({'BancPath': 'Work/Banc/Scene/DreamWorld/DeadHandStage.bcett.json', 'IsTargetRetry': False})
    EventCamera.EventTriggerCameraSavePoint()

    call ConfirmRematch({'EndDistance': 0.0, 'EndFNumber': 4.0})

    switchcall Enemy_Dictionary_Common.Dictionary_Rematch({'ActorName': 'ActorName'}) {
      case 3013883440:

        call SubEvent_AllBossBattle.ChildBossStageEnter({'NextStartPos': 'DeadHandStage', 'NextBanc': 'DeadHandStage', 'EnemyActor': 'Enemy_DeadHand', 'IItemDrop': False, 'BootEventName': 'DreamBossStage_Rematch_Arrive', 'BossCount': 15})

    }
}

void Rematch_WolfosWhite() {
    GameSystemActor.EventTriggerBancRequestBeforehandLoad({'BancPath': 'Work/Banc/Scene/DreamWorld/WolfosWhiteStage.bcett.json', 'IsTargetRetry': False})
    EventCamera.EventTriggerCameraSavePoint()

    call ConfirmRematch({'EndDistance': 0.0, 'EndFNumber': 6.199999809265137})

    switchcall Enemy_Dictionary_Common.Dictionary_Rematch({'ActorName': 'ActorName'}) {
      case 3013883440:

        call SubEvent_AllBossBattle.AdultBossStageEnter({'NextStartPos': 'WolfosWhiteStage', 'NextBanc': 'WolfosWhiteStage', 'EnemyActor': 'Enemy_Wolfos_White', 'ItemDrop': False, 'BootEventName': 'DreamBossStage_Rematch_Arrive', 'BossCount': 12})

    }
}

void TimeCountStart() {
    ChallengeSystemActor.EventTriggerShowTimerUI()
    ChallengeSystemActor.EventTriggerMiniGameTimerStart()
}

void TimeCountStop() {

    call DmF_SY_FallDown.FallDownSoundFadeIn()

    ChallengeSystemActor.EventTriggerMiniGameTimerStop()
    UISystemActor.EventTriggertRestorePouchFromEnemyMuseum()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    UISystemActor.EventTriggertExchangeEnemyMuseumPouchAndState({'IsMQ': False, 'IsChild': False, 'EnemyActor': 'Enemy_Stalfos_AlwaysRespawn'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    UISystemActor.EventTriggerSyncPlayerEquipmentAndPouch()
    Player_Event.EventWaitCreationFinishedEquipment({'IsWaitEnd': True})

    call SubEvent_AllBossBattle.BossStageEnterBase({'NextBanc': 'StalfosStage', 'NextStartPos': 'StalfosStage', 'EnemyActor': 'Enemy_Stalfos_AlwaysRespawn', 'NextEnemy': 'Enemy_DungeonBoss_BongoBongo', 'BootEventName': 'DreamBossStage_Rematch_Arrive', 'BossCount': 16})

}

void TimeCountStopDarkLink() {

    call Middleboss_Defeat_Start()


    call Common.AirStartUp_OnlyStopInAir()


    call SubEvent_AllBossBattle.TimeCountStopAndRecordBestTime()


    call Middleboss_Defeat()


    call SubEvent_AllBossBattle.BossStageExitProcess()

}

void TimeAppear() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 0, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})

    call Dm_SY_BancChangeArrive.DreamWorldBossAreaArrive()


    call SubEvent_AllBossBattle.NaviRematchFirst()

}

void TimeCountStopStalfos() {

    call Middleboss_Defeat_Start()


    call Common.AirStartUp_OnlyStopInAir()


    call SubEvent_AllBossBattle.TimeCountStopAndRecordBestTime()


    call Middleboss_Defeat()


    call SubEvent_AllBossBattle.BossStageExitProcess()

}

void TimeCountStopWolfos() {

    call Middleboss_Defeat_Start()


    call Common.AirStartUp_OnlyStopInAir()


    call SubEvent_AllBossBattle.TimeCountStopAndRecordBestTime()


    call Middleboss_Defeat()


    call SubEvent_AllBossBattle.BossStageExitProcess()

}

void TimeCountStopWolfosWhite() {

    call Middleboss_Defeat_Start()


    call Common.AirStartUp_OnlyStopInAir()


    call SubEvent_AllBossBattle.TimeCountStopAndRecordBestTime()


    call Middleboss_Defeat()


    call SubEvent_AllBossBattle.BossStageExitProcess()

}

void TimeCountStopMeg() {

    call Middleboss_Defeat_Start()


    call Common.AirStartUp_OnlyStopInAir()


    call SubEvent_AllBossBattle.TimeCountStopAndRecordBestTime()


    call Middleboss_Defeat()


    call SubEvent_AllBossBattle.BossStageExitProcess()

}

void TimeCountStopLizalfos() {

    call Middleboss_Defeat_Start()


    call Common.AirStartUp_OnlyStopInAir()


    call SubEvent_AllBossBattle.TimeCountStopAndRecordBestTime()


    call Middleboss_Defeat()


    call SubEvent_AllBossBattle.BossStageExitProcess()

}

void TimeCountStopFlaredancer() {

    call Middleboss_Defeat_Start()


    call Common.AirStartUp_OnlyStopInAir()


    call SubEvent_AllBossBattle.TimeCountStopAndRecordBestTime()


    call Middleboss_Defeat()


    call SubEvent_AllBossBattle.BossStageExitProcess()

}

void TimeCountStopDinolfos() {

    call Middleboss_Defeat_Start()


    call Common.AirStartUp_OnlyStopInAir()


    call SubEvent_AllBossBattle.TimeCountStopAndRecordBestTime()


    call Middleboss_Defeat()


    call SubEvent_AllBossBattle.BossStageExitProcess()

}

void TimeCountStopIronKnuckleBlack() {

    call Middleboss_Defeat_Start()


    call Common.AirStartUp_OnlyStopInAir()


    call SubEvent_AllBossBattle.TimeCountStopAndRecordBestTime()


    call Middleboss_Defeat()


    call SubEvent_AllBossBattle.BossStageExitProcess()

}

void TimeCountStopIronKnuckleWhite() {

    call Middleboss_Defeat_Start()


    call Common.AirStartUp_OnlyStopInAir()


    call SubEvent_AllBossBattle.TimeCountStopAndRecordBestTime()


    call Middleboss_Defeat()


    call SubEvent_AllBossBattle.BossStageExitProcess()

}

void TimeCountStopNaboru() {
    UISystemActor.EventEventFadeOut({'Color': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': True, 'Length': 3})

    call Middleboss_Defeat_Start()


    call SubEvent_AllBossBattle.BossStageExitProcess()

}

void TimeCountStopGerudoThief() {

    call Middleboss_Defeat_Start()


    call Common.AirStartUp_OnlyStopInAir()


    call SubEvent_AllBossBattle.TimeCountStopAndRecordBestTime()


    call Middleboss_Defeat()


    call SubEvent_AllBossBattle.BossStageExitProcess()

}

void TimeCountStopBigOcto() {

    call Middleboss_Defeat_Start()

    Npc_Navi.EventTriggerParticipateEvent()
    Enemy_MiddleBoss_BigOcto[MiddleBoss].EventTriggerParticipateEvent()

    call Common.AirStartUp_OnlyStopInAir()

    Enemy_MiddleBoss_BigOcto[MiddleBoss].EventDoNothing({'IsWaitEnd': True})

    call SubEvent_AllBossBattle.TimeCountStopAndRecordBestTime()

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})

    call Middleboss_Defeat()


    call SubEvent_AllBossBattle.BossStageExitProcess()

}

void TimeCountStopDeadHand() {

    call Middleboss_Defeat_Start()


    call Common.AirStartUp_OnlyStopInAir()


    call SubEvent_AllBossBattle.TimeCountStopAndRecordBestTime()


    call Middleboss_Defeat()


    call SubEvent_AllBossBattle.BossStageExitProcess()

}

void Rematch_Lose_GerudoThief() {
    Player_Event.EventTriggerPlayerContinueSlippingDown()
    Npc_Invisible_GerudoThief.EventTriggerParticipateEvent()
    SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': True, 'FadeType': 1, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
    Enemy_MiddleBoss_GerudoThief[Rematch_Lose_GerudoThief(Enemy_MiddleBoss_GerudoThief)].EventWaitUntilASCancellable({'IsWaitEnd': True})

    fork {
        Npc_Invisible_GerudoThief.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_001:Talk_22', 'IsCloseDialog': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0})
    } {
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    } {
        Enemy_MiddleBoss_GerudoThief[Rematch_Lose_GerudoThief(Enemy_MiddleBoss_GerudoThief)].EventTriggerSetCctForwardSpeedZero({'IsWaitEnd': True})
        Enemy_MiddleBoss_GerudoThief[Rematch_Lose_GerudoThief(Enemy_MiddleBoss_GerudoThief)].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }

    EventSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
    Npc_Invisible_GerudoThief.EventTalk({'MessageId': 'EventFlowMsg/Npc_Gerudo_001:Talk_12', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})

    call SubEvent_AllBossBattle.BossRushBossBattleExit()


    call SubEvent_AllBossBattle.BossRushRematchFirst()

}

void Rematch_Ganondorf_demo() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Navi_Ban', 'Value': False, 'Index': -1})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'DreamWorld_BossRush', 'Index': -1}) {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

        call SubEvent_AllBossBattle.BossRushBossStageExitSuccessGanon()

    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'InsideGanonCastele_Dungeon_Ganondorf_Die', 'Index': -1, 'Value': True})
        EventSystemActor.EventTransition({'EventName': 'Dm_InsideGanonCastle_BossOut', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2})

        call SubEvent_AllBossBattle.BossStageExitProcess()

    }
}

void Rematch_Ganon_demo() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'FinalBattleField_DefeatGanonStart'})
    EventWorldManagerController.Event_ResetChangeWindSpeedForFlowchart({'IsWaitEnd': False})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_FinalBattle_BossOut'})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'DreamWorld_BossRush', 'Index': -1}) {

        call SubEvent_AllBossBattle.ResultBossrush()

    } else {

        call SubEvent_AllBossBattle.BossStageExitProcess()

    }
}

void Rematch_StalfosWeak() {
    GameSystemActor.EventTriggerBancRequestBeforehandLoad({'BancPath': 'Work/Banc/Scene/DreamWorld/StalfosWeakStage.bcett.json', 'IsTargetRetry': False})
    EventCamera.EventTriggerCameraSavePoint()

    call ConfirmRematch({'EndDistance': 0.0, 'EndFNumber': 6.699999809265137})

    switchcall Enemy_Dictionary_Common.Dictionary_Rematch({'ActorName': 'ActorName'}) {
      case 3013883440:

        call SubEvent_AllBossBattle.AdultBossStageEnter({'EnemyActor': 'Enemy_Stalfos_Weak', 'NextStartPos': 'StalfosWeakStage', 'NextBanc': 'StalfosWeakStage', 'ItemDrop': False, 'BootEventName': 'DreamBossStage_Rematch_Arrive', 'BossCount': 7})

    }
}

void TimeCountStopStalfosWeak() {

    call Middleboss_Defeat_Start()


    call Common.AirStartUp_OnlyStopInAir()


    call SubEvent_AllBossBattle.TimeCountStopAndRecordBestTime()


    call Middleboss_Defeat()


    call SubEvent_AllBossBattle.BossStageExitProcess()

}

void NaviHint_Rematch_Sub() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_BossRush'}) {
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': '', 'IsCloseDialog': False, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 10, 'MessageId': 'EventFlowMsg/Npc_Dream:Navi_Rematch_11', 'ChoiceLabel3': 11, 'ChoiceNumber': 3, 'ChoiceLabel2': 15, 'MaintainPerformanceState': 0})
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': '', 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 12, 'ChoiceLabel2': 13, 'MessageId': 'EventFlowMsg/Npc_Dream:Navi_Rematch_13', 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
            Event503:
            if !GameSystemActor.EventQueryTalkChoice2() {
                UISystemActor.EventEventFadeOut({'Color': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 0})
                EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DreamBossStage_WarpFromBattle'})
                Event349:
                return 2045477761
            } else {
                Event505:
                Npc_Navi.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 0, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Dream:Navi_Rematch_07', 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
                return 1642511898
            }
          case 1:
            Event495:
            return 2413946405
          case 2:
            goto Event505
        }
    } else {
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': '', 'IsCloseDialog': False, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 10, 'MessageId': 'EventFlowMsg/Npc_Dream:Navi_Rematch_11', 'ChoiceLabel2': 17, 'ChoiceLabel4': 11, 'ChoiceLabel3': 15, 'ChoiceNumber': 4, 'MaintainPerformanceState': 0})
        switch GameSystemActor.EventQueryTalkChoice4() {
          case 0:
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': '', 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceDefaultNo': 0, 'MessageId': 'EventFlowMsg/Npc_Dream:Navi_Rematch_10', 'ChoiceLabel1': 12, 'ChoiceLabel2': 13, 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
            goto Event503
          case 1:
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceDefaultNo': 0, 'MessageId': 'EventFlowMsg/Npc_Dream:Navi_Rematch_02', 'ChoiceLabel1': 19, 'ChoiceLabel2': 20, 'ChoiceNumber': 2, 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
            if !GameSystemActor.EventQueryTalkChoice2() {
                UISystemActor.EventEventFadeOut({'Color': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 0})

                call SubEvent_AllBossBattle.BossRushBossBattleExit()

                EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DreamBossStage_Warp'})
                goto Event349
            } else {
                Npc_Navi.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 0, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Dream:Navi_Rematch_07', 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
                return 1642511898
            }
          case 2:
            goto Event495
          case 3:
            goto Event505
        }
    }
}

void BossRush_01() {
    GameSystemActor.EventTriggerBancRequestBeforehandLoad({'BancPath': 'Work/Banc/Scene/DreamWorld/BossRushIntervalRoom.bcett.json', 'IsTargetRetry': False})
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Dream_BossRush_First'}) {

        call Npc_Dream.BossRush()

    }
    Obj_Dream_Battle_StoneMonument_A_01.EventTriggerBecomeSpeaker()

    call BossRush_Check()

    SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'ChoiceLabel1': 7, 'ChoiceLabel2': 8, 'ChoiceNumber': 0, 'OverrideStyle': 2, 'MessageId': 'EventFlowMsg/SubEvent_AllBossBattle:Talk_12', 'IsOverrideStyle': True, 'MaintainPerformanceState': 0, 'IsNotBecomeSpeaker': False})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DreamBossStage_HaveRecordedTime_BossRush_01'}) {
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 7, 'ChoiceLabel2': 8, 'MessageId': 'EventFlowMsg/SubEvent_AllBossBattle:Talk_13', 'MaintainPerformanceState': 0, 'IsNotBecomeSpeaker': False})
    } else {
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 9, 'ChoiceLabel2': 10, 'MessageId': 'EventFlowMsg/SubEvent_AllBossBattle:Talk_14', 'MaintainPerformanceState': 0, 'IsNotBecomeSpeaker': False})
    }
    if !GameSystemActor.EventQueryTalkChoice2() {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        UISystemActor.EventEventFadeOut({'Length': 0, 'IsNoPlayAnime': False, 'Color': 0, 'IsWaitEnd': True})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_BossRush_Full', 'Value': False})
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRush_Mode', 'Value': 1})

        call SubEvent_AllBossBattle.BossRush()

    }
}

void BossRush_03() {
    GameSystemActor.EventTriggerBancRequestBeforehandLoad({'BancPath': 'Work/Banc/Scene/DreamWorld/BossRushIntervalRoom.bcett.json', 'IsTargetRetry': False})
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Dream_BossRush_First'}) {

        call Npc_Dream.BossRush()

    }
    Obj_Dream_Battle_StoneMonument_A_02.EventTriggerBecomeSpeaker()

    call BossRush_Check()

    SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'ChoiceLabel1': 7, 'ChoiceLabel2': 8, 'ChoiceNumber': 0, 'OverrideStyle': 2, 'MessageId': 'EventFlowMsg/SubEvent_AllBossBattle:Talk_18', 'IsOverrideStyle': True, 'MaintainPerformanceState': 0})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'DreamBossStage_HaveRecordedTime_BossRush', 'Index': -1}) {
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'ChoiceNumber': 2, 'ChoiceLabel2': 8, 'ChoiceLabel1': 7, 'MessageId': 'EventFlowMsg/SubEvent_AllBossBattle:Talk_19', 'MaintainPerformanceState': 0})
    } else {
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 9, 'ChoiceLabel2': 10, 'MessageId': 'EventFlowMsg/SubEvent_AllBossBattle:Talk_20', 'MaintainPerformanceState': 0})
    }
    if !GameSystemActor.EventQueryTalkChoice2() {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        UISystemActor.EventEventFadeOut({'Length': 0, 'IsNoPlayAnime': False, 'Color': 0, 'IsWaitEnd': True})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_BossRush_Full', 'Value': False})
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRush_Mode', 'Value': 0})
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'PlayerStatus.WeaponSwordGiantLife', 'Value': 8, 'Index': -1})

        call SubEvent_AllBossBattle.BossRush()

    }
}

void BossRush_02() {
    GameSystemActor.EventTriggerBancRequestBeforehandLoad({'BancPath': 'Work/Banc/Scene/DreamWorld/BossRushIntervalRoom.bcett.json', 'IsTargetRetry': False})
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Dream_BossRush_First'}) {

        call Npc_Dream.BossRush()

    }
    Obj_Dream_Battle_StoneMonument_A_03.EventTriggerBecomeSpeaker()

    call BossRush_Check()

    SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'ChoiceLabel1': 7, 'ChoiceLabel2': 8, 'ChoiceNumber': 0, 'OverrideStyle': 2, 'MessageId': 'EventFlowMsg/SubEvent_AllBossBattle:Talk_15', 'IsOverrideStyle': True, 'MaintainPerformanceState': 0})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DreamBossStage_HaveRecordedTime_BossRush_02'}) {
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 7, 'ChoiceLabel2': 8, 'MessageId': 'EventFlowMsg/SubEvent_AllBossBattle:Talk_16', 'MaintainPerformanceState': 0})
    } else {
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 9, 'ChoiceLabel2': 10, 'MessageId': 'EventFlowMsg/SubEvent_AllBossBattle:Talk_17', 'MaintainPerformanceState': 0})
    }
    if !GameSystemActor.EventQueryTalkChoice2() {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        UISystemActor.EventEventFadeOut({'Length': 0, 'IsNoPlayAnime': False, 'Color': 0, 'IsWaitEnd': True})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_BossRush_Full', 'Value': False})
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRush_Mode', 'Value': 2})

        call SubEvent_AllBossBattle.BossRush()

    }
}

void Rematch_Gohma_Start() {
    UISystemActor.EventEventFadeOut({'IsNoPlayAnime': True, 'Color': 0, 'IsWaitEnd': True, 'Length': 3})
    Player_Event.EventTriggerParticipateEvent()
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'PosVector': [0.0, 1.0, -3.0], 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DreamWorld_BossAppear'})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'InsideTheDekuTree_BossArea_ChangeENVForBoss'})
    Enemy_DungeonBoss_Gohma.EventDungeonBossGohmaWarpToReferencedAnchor({'InstanceName': 'Gohma_BattleStartPos', 'IsWaitEnd': True})
    Enemy_DungeonBoss_Gohma.EventPlayAS({'ASName': 'Pre_Battle_Ceiling_Find', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': True})
    Enemy_DungeonBoss_Gohma.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'GuardWalk'})
    Npc_Navi.EventTriggerNaviWarpToTargetPosAndRot({'Position': [6.670000076293945, 47.917510986328125, 67.22000122070312], 'ClothWarpMode': -1, 'YAngle': 90.0})
    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'LockOnWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    Enemy_DungeonBoss_Gohma.EventDungeonBossSetConsiderBattlePresentation()

    call TimeCountStart()

    UISystemActor.EventEventFadeIn({'Color': 0, 'Length': 3, 'IsWaitEnd': False, 'IsNoPlayAnime': False})
}

void Rematch_Dodongo_Start() {
    UISystemActor.EventEventFadeOut({'IsNoPlayAnime': True, 'Color': 0, 'IsWaitEnd': True, 'Length': 3})
    Player_Event.EventTriggerParticipateEvent()
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DreamWorld_BossAppear'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    Enemy_DungeonBoss_Dodongo.EventTriggerSetWasAppearInEvent()
    EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EndRecelerateRate': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.12999999523162842, 1.159999966621399, -3.559999942779541], 'AtVector': [0.0, 1.4700000286102295, 0.029999999329447746], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'IsEnableRevertFast': False})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'KeepManualModeFrame': 120.0, 'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': True, 'IsKeepWithRelativePos': False})
    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'LockOnWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

    call TimeCountStart()

    UISystemActor.EventEventFadeIn({'Color': 0, 'Length': 3, 'IsWaitEnd': False, 'IsNoPlayAnime': False})
}

void Rematch_Start_Common() {
    Player_Event.EventTriggerParticipateEvent()
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Sequence_HoldRangeSafetyRequest', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DreamWorld_BossAppear'})
    GameSystemActor.EventRefindRangeGameSafetySection({'IsWaitEnd': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void Rematch_Barinade_Start() {
    UISystemActor.EventEventFadeOut({'IsNoPlayAnime': True, 'Color': 0, 'IsWaitEnd': True, 'Length': 3})
    Player_Event.EventTriggerParticipateEvent()
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_BossRush'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DreamWorld_BossAppear'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        Enemy_DungeonBoss_Barinade.EventTriggerSetWasAppearInEvent()
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [42.43000030517578, 102.94999694824219, -96.08999633789062], 'AtVector': [42.41999816894531, 102.95999908447266, -97.08999633789062], 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'LockOnWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

        call TimeCountStart()

        UISystemActor.EventEventFadeIn({'Color': 0, 'Length': 3, 'IsWaitEnd': False, 'IsNoPlayAnime': False})
    } else {
        ChallengeSystemActor.EventTriggerShowTimerUI()

        call Get_StoneOfWater.fromDream()

        ChallengeSystemActor.EventTriggerMiniGameTimerStart()
    }
}

void Rematch_PhantomGanon_Start() {
    UISystemActor.EventEventFadeOut({'IsNoPlayAnime': True, 'Color': 0, 'IsWaitEnd': True, 'Length': 3})
    Player_Event.EventTriggerParticipateEvent()
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DreamWorld_BossAppear'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    Enemy_DungeonBoss_PhantomGanon.EventTriggerSetWasAppearInEvent()
    EventCamera.EventMoveToTargetPosCamera({'PosVector': [-8.670000076293945, 75.55000305175781, -67.62000274658203], 'AtVector': [13.739999771118164, 79.18000030517578, -54.52000045776367], 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'LockOnWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

    call TimeCountStart()

    UISystemActor.EventEventFadeIn({'Color': 0, 'Length': 3, 'IsWaitEnd': False, 'IsNoPlayAnime': False})
}

void Rematch_Volvagia_Start() {
    UISystemActor.EventEventFadeOut({'IsNoPlayAnime': True, 'Color': 0, 'IsWaitEnd': True, 'Length': 3})
    Player_Event.EventTriggerParticipateEvent()
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DreamWorld_BossAppear'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    Enemy_DungeonBoss_Volvagia.EventTriggerSetWasAppearInEvent()
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'PosVector': [-60.189998626708984, 104.33000183105469, 0.029999999329447746], 'AtVector': [-64.58999633789062, 103.94000244140625, 0.029999999329447746], 'TargetFovy': 50.0, 'IsEnableRevertFast': False})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'LockOnWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

    call TimeCountStart()

    UISystemActor.EventEventFadeIn({'Color': 0, 'Length': 3, 'IsWaitEnd': False, 'IsNoPlayAnime': False})
}

void Rematch_Morpha_Start() {
    UISystemActor.EventEventFadeOut({'IsNoPlayAnime': True, 'Color': 0, 'IsWaitEnd': True, 'Length': 3})
    Player_Event.EventTriggerParticipateEvent()
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DreamWorld_BossAppear'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    Enemy_DungeonBoss_Morpha[BossDefeat].EventTriggerSetWasAppearInEvent()
    EventCamera.EventMoveToTargetPosCamera({'PosVector': [4.869999885559082, 132.77999877929688, -82.48999786376953], 'AtVector': [4.150000095367432, 132.75, -83.18000030517578], 'TargetFovy': 25.75, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 1.0, 'CameraResetPolicy': 0})
    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'LockOnWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

    call TimeCountStart()

    UISystemActor.EventEventFadeIn({'Color': 0, 'Length': 3, 'IsWaitEnd': False, 'IsNoPlayAnime': False})
}

void Rematch_BongoBongo_Start() {
    UISystemActor.EventEventFadeOut({'IsNoPlayAnime': True, 'Color': 0, 'IsWaitEnd': True, 'Length': 3})
    Player_Event.EventTriggerParticipateEvent()
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DreamWorld_BossAppear'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    Enemy_DungeonBoss_BongoBongo.EventTriggerSetWasAppearInEvent()
    Npc_Navi.EventWarpToTargetPosAndRot({'YAngle': 0.0, 'ClothWarpMode': -1, 'IsWaitEnd': True, 'Position': [-137.92999267578125, -9.949999809265137, 21.149999618530273]})
    EventCamera.EventMoveToTargetPosCamera({'PosVector': [-138.57000732421875, -10.1899995803833, 16.219999313354492], 'AtVector': [-138.57000732421875, -10.109999656677246, 17.209999084472656], 'TargetFovy': 50.93000030517578, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'LockOnWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

    call TimeCountStart()

    UISystemActor.EventEventFadeIn({'Color': 0, 'Length': 3, 'IsWaitEnd': False, 'IsNoPlayAnime': False})
}

void Rematch_Twinrova_Start() {
    UISystemActor.EventEventFadeOut({'IsNoPlayAnime': True, 'Color': 0, 'IsWaitEnd': True, 'Length': 3})
    Player_Event.EventTriggerParticipateEvent()
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DreamWorld_BossAppear'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

    fork {
        Enemy_DungeonBoss_Koume[KotakeKoumeBattleClient].EventTriggerSetWasAppearInEvent()
    } {
        Enemy_DungeonBoss_Kotake[KotakeKoumeBattleClient].EventTriggerSetWasAppearInEvent()
    }

    EventCamera.EventMoveToTargetPosCamera({'PosVector': [-4.619999885559082, 143.6699981689453, -162.3300018310547], 'AtVector': [-3.930000066757202, 143.85000610351562, -161.6300048828125], 'TargetFovy': 59.5, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'LockOnWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

    call TimeCountStart()

    UISystemActor.EventEventFadeIn({'Color': 0, 'Length': 3, 'IsWaitEnd': False, 'IsNoPlayAnime': False})
}

void Rematch_Ganondorf_Start() {
    UISystemActor.EventEventFadeOut({'IsNoPlayAnime': True, 'Color': 0, 'IsWaitEnd': True, 'Length': 3})
    Player_Event.EventTriggerParticipateEvent()
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_BossRush'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DreamWorld_BossAppear'})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Navi_Ban', 'Index': -1, 'Value': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        Enemy_DungeonBoss_Ganondorf.EventTriggerSetWasAppearInEvent()
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVector': [0.03999999910593033, 1.5199999809265137, -2.109999895095825], 'AtVector': [0.03999999910593033, 1.5199999809265137, -1.0399999618530273], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'KeepManualModeFrame': 120.0, 'ChangeToManualModeAfterEvent': True, 'AfterKeepEndInterpolateCountScale': 3.0, 'IsKeepWithRelativePos': False})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'LockOnWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

        call TimeCountStart()

        UISystemActor.EventEventFadeIn({'Color': 0, 'Length': 3, 'IsWaitEnd': False, 'IsNoPlayAnime': False})
    } else {

        call Defeat_Ganon.InsideGanonCastle_Dungeon_BossAppear_1()

        ChallengeSystemActor.EventTriggerMiniGameTimerStart()
    }
}

void Rematch_Ganon_Start() {
    UISystemActor.EventEventFadeOut({'IsNoPlayAnime': True, 'Color': 0, 'IsWaitEnd': True, 'Length': 3})
    Player_Event.EventTriggerParticipateEvent()
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'FinalBattleField_ChangeENVForBeforeBattle', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DreamWorld_BossAppear'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    Enemy_DungeonBoss_Ganon.EventTriggerSetWasAppearInEvent()
    PouchSystemActor.EventTriggerRemoveWeaponKeepSheath({'Actor': 'Weapon_Sword_Master'})
    Npc_Hylia_Zelda_Adult.EventAIScheduleWarpToAnchor({'AnchorType': 4, 'InstanceName': '', 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'IsWaitEnd': True, 'ClothWarpMode': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'FinalBattleField_ZeldaPos_FirstHalf', 'Value': True})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'PosVector': [16.29290008544922, 101.7782974243164, -1.0700000524520874], 'AtVector': [11.793000221252441, 101.77799987792969, -1.0700000524520874], 'TargetFovy': 50.0, 'IsEnableRevertFast': False})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 1.0, 'CameraResetPolicy': 0})
    WorldMgrThunderMgr.EventTriggerWmThunderMgrSetIsUpdate({'IsUpdate': True})
    WorldMgrThunderMgr.EventTriggerWorldMgrThunderMgrChangePatternKey({'PatternKey': 'First_Battle'})
    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'LockOnWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

    call TimeCountStart()

    UISystemActor.EventEventFadeIn({'Color': 0, 'Length': 3, 'IsWaitEnd': False, 'IsNoPlayAnime': False})
}

void Middleboss_Defeat() {
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    if Player_Event.EventQueryCheckPlayerState({'State': 2}) {
        Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
    }
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    UISystemActor.EventEventFadeOut({'Color': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 0})
}

void Dream_Navi_01() {
    if !GameSystemActor.EventQueryTalkChoice2() {
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': '', 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 12, 'ChoiceLabel2': 13, 'MessageId': 'EventFlowMsg/Npc_Dream:Navi_Rematch_13', 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
        if !GameSystemActor.EventQueryTalkChoice2() {
            UISystemActor.EventEventFadeOut({'Color': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 0})
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DreamBossStage_WarpFromBattle'})
            return 3013883440
        } else {
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 0, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Dream:Navi_Rematch_07', 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
            return 1642511898
        }
    } else {
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 0, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Dream:Navi_Rematch_07', 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
        return 1642511898
    }
}

void Dream_Navi_02() {
    if !GameSystemActor.EventQueryTalkChoice2() {
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': '', 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 12, 'ChoiceLabel2': 13, 'MessageId': 'EventFlowMsg/Npc_Dream:Navi_Rematch_13', 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
        if !GameSystemActor.EventQueryTalkChoice2() {
            UISystemActor.EventEventFadeOut({'Color': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 0})
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DreamBossStage_WarpFromBattle'})
            return 3013883440
        } else {
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Dream:Navi_Rematch_05', 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
            return 1642511898
        }
    } else {
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Dream:Navi_Rematch_05', 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
        return 1642511898
    }
}

void Dream_Navi_03() {
    switch GameSystemActor.EventQueryTalkChoice3() {
      case 0:
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': '', 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceDefaultNo': 0, 'MessageId': 'EventFlowMsg/Npc_Dream:Navi_Rematch_10', 'ChoiceLabel1': 12, 'ChoiceLabel2': 13, 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
        if !GameSystemActor.EventQueryTalkChoice2() {
            UISystemActor.EventEventFadeOut({'Color': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 0})
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DreamBossStage_WarpFromBattle'})
            return 3013883440
        } else {
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 0, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Dream:Navi_Rematch_07', 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
            return 1642511898
        }
      case 1:
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceDefaultNo': 0, 'MessageId': 'EventFlowMsg/Npc_Dream:Navi_Rematch_02', 'ChoiceLabel1': 19, 'ChoiceLabel2': 20, 'ChoiceNumber': 2, 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
        if !GameSystemActor.EventQueryTalkChoice2() {
            UISystemActor.EventEventFadeOut({'Color': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 0})

            call SubEvent_AllBossBattle.BossRushBossBattleExit()

            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DreamBossStage_Warp'})
            return 894944625
        } else {
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 0, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Dream:Navi_Rematch_07', 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
            return 1642511898
        }
      case 2:
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 0, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Dream:Navi_Rematch_07', 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
        return 1642511898
    }
}

void BossRush_Check() {

    fork {
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 1, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    } {
        EventCamera.EventSendEventTalkSignMessageToPlayerCamera({'IsWaitEnd': False})
    }

}

void Ganon_GD_Reset() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.Dm_FinalBattle_0010', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'FinalBattleField_ZeldaPos_FirstHalf'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'FinalBattleField_ZeldaPos_SecondHalf_Tired'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'FinalBattleField_ZeldaPos_SecondHalf_MagicCharge'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'FinalBattleField_ZeldaPos_SecondHalf'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'FinalBattleField_WhileGanonDown'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'FinalBattleField_WhileGanonDown'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'FinalBattleField_Cloud'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'FinalBattleField_ShouldDeleteMasterSword'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'HavePlayedEvent.Dm_FinalBattle_0030'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'HavePlayedEvent.Dm_FinalBattle_BossIn'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'HavePlayedEvent.Dm_FinalBattle_0020'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'HavePlayedEvent.Dm_FinalBattle_BossOut'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'FinalBattleField_BeforeGanonAppear_IsZeldaInStartPos'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'FinalBattleField_DefeatGanonStart'})
    GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'DreamBossStage_WeaponSwordGiantLife', 'DstGameDataName': 'PlayerStatus.WeaponSwordGiantLife'})
    GameSystemActor.EventTriggerEnemyMuseumUpdateDefeatedStatus()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

    call Npc_Dream.Dictionary_Check()

}

void Rematch_BigOcta_Start() {
    UISystemActor.EventEventFadeOut({'IsNoPlayAnime': True, 'Color': 0, 'IsWaitEnd': True, 'Length': 3})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'PosVector': [0.0, 1.0, -3.0], 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    Enemy_MiddleBoss_BigOcto[MiddleBoss].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'ClothWarpMode': -1, 'Position': [-38.4630012512207, 84.88999938964844, -90.4469985961914], 'YAngle': 25.12969970703125})
    Enemy_MiddleBoss_BigOcto[MiddleBoss].EventTriggerSetWasAppearInEvent()
    ChallengeSystemActor.EventTriggerShowTimerUI()
    Player_Event.EventTriggerParticipateEvent()
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Sequence_HoldRangeSafetyRequest', 'Value': False})
    GameSystemActor.EventRefindRangeGameSafetySection({'IsWaitEnd': True})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'LockOnWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

    call TimeCountStart()

    UISystemActor.EventEventFadeIn({'Color': 0, 'Length': 3, 'IsWaitEnd': False, 'IsNoPlayAnime': False})
}

void CountStart() {
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerPlayerEventStartWithRolling()
    Player_Event.EventTriggerPlayerEventStartWithClimb()
    Player_Event.EventTriggerPlayerEventStartWithCarry()

    call Common.AirStartUp_OnlyStopInAir()


    call TimeCountStart()

}

void Middleboss_Defeat_Start() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerPlayerEventStartWithRolling()
    Player_Event.EventTriggerPlayerEventStartWithClimb()
    Player_Event.EventTriggerPlayerEventStartWithCarry()
}
