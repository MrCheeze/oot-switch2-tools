-------- EventFlow: SubEvent_AllBossBattle --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventReserveBancChange', 'EventWait', 'EventReserveBancChangeForRematchBossStage', 'EventTriggerDropDeactive', 'EventTriggerDropActive']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice3']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventTriggertExchangeEnemyMuseumPouchAndState', 'EventTriggertRestorePouchFromEnemyMuseum', 'EventTriggertExchangeEnemyMuseumPouchAndStateForContinuous', 'EventTriggerRequestDeletePlayerEquipmentFromPouch', 'EventTriggerSyncPlayerEquipmentAndPouch']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SystemTextNPC
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerPlayerRequestLookAtTheFrontLock', 'EventTriggerEquipmentUserRequestCreateStaticEquipment', 'EventCreateShowItemFromActorFileName', 'EventDeleteShowItem', 'EventPlayerPlayASForFlowchart', 'EventTriggerStartFadeIn', 'EventWaitCreationFinishedEquipment', 'EventPlayerSetSelectedItem', 'EventTriggerPlayerLookAtObject', 'EventPlayerWait', 'EventTriggerChangeModelAlphaDrawTiming', 'EventTriggerPlayerClearNayruLoveCount']
queries: ['EventQueryPlayerIsChild']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetGameDataInt', 'EventTriggerAddOrSubGameDataInt', 'EventTriggerSetGameDataString64']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataInt', 'EventQueryIsBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerMiniGameTimerSetting', 'EventTriggerUnshowTimerUI', 'EventTriggerMiniGameTimerStop', 'EventTriggerMiniGameCalcElapsedTime', 'EventExecuteProgressChallengeStep', 'EventTriggerRecordBestTimeForDreamWorld', 'EventTriggerSetBestTimeInfoForBossRush', 'EventTriggerMinigameTimerStopAnim']
queries: ['EventQueryShouldUpdateBestTime', 'EventQueryHaveRecordedTime']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraToSavePoint', 'EventTriggerCameraSavePoint', 'EventChangeTemporarilyToPlayerCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent', 'EventTriggerSetForGetWindow']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectStopGetItem']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTriggerChangeEmotion', 'EventTriggerStartFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Invisible_Kaepora
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventResetToInGameParametersDoF', 'EventSetPixelScaleForModelLod']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void ChildBossStageEnter() {
    if !ChallengeSystemActor.EventQueryHaveRecordedTime() {
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'IsOverrideStyle': False, 'ChoiceLabel1': 7, 'ChoiceLabel2': 8, 'MessageId': 'EventFlowMsg/SubEvent_AllBossBattle:Talk_10', 'OverrideStyle': 0, 'MaintainPerformanceState': 0})
    } else {
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'IsOverrideStyle': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 9, 'ChoiceLabel2': 10, 'MessageId': 'EventFlowMsg/SubEvent_AllBossBattle:Talk_11', 'OverrideStyle': 0, 'MaintainPerformanceState': 0})
    }
    if !GameSystemActor.EventQueryTalkChoice2() {
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:Bgmミュート(フェード普通)', 'CommandLife': 1, 'DuckingName2': '', 'DuckingName3': ''})
        UISystemActor.EventEventFadeOut({'IsNoPlayAnime': False, 'Color': 0, 'Length': 1, 'IsWaitEnd': True})

        call Rematch_Start()

        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Sequence_HoldRangeSafetyRequest', 'Index': -1, 'Value': True})

        call ChildBossStageEnterBase({'NextEnemy': 'Enemy_DungeonBoss_Gohma', 'NextBanc': 'NextBanc', 'NextStartPos': 'NextStartPos', 'EnemyActor': 'EnemyActor', 'BootEventName': 'BootEventName', 'BossCount': 'BossCount'})

        UISystemActor.EventTriggertExchangeEnemyMuseumPouchAndState({'IsMQ': False, 'IsChild': True, 'EnemyActor': 'EnemyActor'})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        UISystemActor.EventTriggerSyncPlayerEquipmentAndPouch()
        Player_Event.EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
        if !GameDataActor.EventQueryIsBool({'BoolValue': 'IItemDrop'}) {
            GameSystemActor.EventTriggerDropActive()
        } else {
            GameSystemActor.EventTriggerDropDeactive()
        }
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': True, 'ChallengeName': 'SubEvent_AllBossBattle', 'StepName': 'Playing', 'IsIgnoreChallengeProgressUI': True})
    } else {
        Player_Event.EventTriggerStartFadeIn({'FadeFrame': 5})
        Npc_Navi.EventTriggerStartFadeIn({'FadeFrame': 5})

        fork {

            call Common_Camera_Pln.CameraDoF_Default()

            PostProcessingActor.EventSetPixelScaleForModelLod({'Scale': 1.0})
            EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'MoveFrame': 30, 'IsRestoreDoF': False})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
            Player_Event.EventTriggerChangeModelAlphaDrawTiming({'IsPostEffect': False, 'IsPreEffect': False})
        }

        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    }
}

void AdultBossStageEnter() {
    if !ChallengeSystemActor.EventQueryHaveRecordedTime() {
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel2': 8, 'ChoiceLabel1': 7, 'MessageId': 'EventFlowMsg/SubEvent_AllBossBattle:Talk_10', 'MaintainPerformanceState': 0})
    } else {
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel2': 10, 'ChoiceLabel1': 9, 'MessageId': 'EventFlowMsg/SubEvent_AllBossBattle:Talk_11', 'MaintainPerformanceState': 0})
    }
    if !GameSystemActor.EventQueryTalkChoice2() {
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:Bgmミュート(フェード普通)', 'CommandLife': 1, 'DuckingName2': '', 'DuckingName3': ''})
        UISystemActor.EventEventFadeOut({'IsNoPlayAnime': False, 'Color': 0, 'Length': 1, 'IsWaitEnd': True})

        call Rematch_Start()

        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Sequence_HoldRangeSafetyRequest', 'Index': -1, 'Value': True})

        call AdultBossStageEnterBase({'NextEnemy': 'Enemy_DungeonBoss_Gohma', 'NextBanc': 'NextBanc', 'NextStartPos': 'NextStartPos', 'EnemyActor': 'EnemyActor', 'BootEventName': 'BootEventName', 'BossCount': 'BossCount'})

        UISystemActor.EventTriggertExchangeEnemyMuseumPouchAndState({'IsMQ': False, 'EnemyActor': 'EnemyActor', 'IsChild': False})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        UISystemActor.EventTriggerSyncPlayerEquipmentAndPouch()
        Player_Event.EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
        if !GameDataActor.EventQueryIsBool({'BoolValue': 'ItemDrop'}) {
            GameSystemActor.EventTriggerDropActive()
        } else {
            GameSystemActor.EventTriggerDropDeactive()
        }
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': True, 'ChallengeName': 'SubEvent_AllBossBattle', 'StepName': 'Playing', 'IsIgnoreChallengeProgressUI': True})
    } else {
        Player_Event.EventTriggerStartFadeIn({'FadeFrame': 5})
        Npc_Navi.EventTriggerStartFadeIn({'FadeFrame': 5})

        fork {

            call Common_Camera_Pln.CameraDoF_Default()

            PostProcessingActor.EventSetPixelScaleForModelLod({'Scale': 1.0})
            EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'MoveFrame': 30, 'IsRestoreDoF': False})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
            Player_Event.EventTriggerChangeModelAlphaDrawTiming({'IsPostEffect': False, 'IsPreEffect': False})
        }

        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    }
}

void BossRush() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Sequence_HoldRangeSafetyRequest', 'Index': -1, 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DreamWorld_BossRush'})
    GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRushBossCount', 'Value': 1})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})

    call Rematch_Start()

    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRush_Mode', 'Value': 1}) {
      case 0:
        ChallengeSystemActor.EventTriggerSetBestTimeInfoForBossRush({'ElapsedTimerFrameGD': 'DreamWorld_BossRushResultFrame', 'ElapsedTimerMinuteGD': 'DreamWorld_BossRushResultMinute', 'HaveRecordedTimeGD': 'DreamBossStage_HaveRecordedTime_BossRush', 'LastBossRushBossCount': 10, 'ElapsedTimerSecondGD': 'DreamWorld_BossRushResultSecond', 'ElapsedTimerMilliSecondGD': 'DreamWorld_BossRushResultMilliSecond', 'BestTimeFrameGD': 'DreamWorld_BossRushBestTime'})

        call ChildBossStageEnterBase({'NextStartPos': 'GohmaStage', 'EnemyActor': 'Enemy_DungeonBoss_Gohma', 'NextBanc': 'GohmaStage', 'NextEnemy': 'Enemy_DungeonBoss_Gohma', 'BossCount': 0, 'BootEventName': 'DreamBossStage_Rematch_TimeAppear'})

        UISystemActor.EventTriggertExchangeEnemyMuseumPouchAndStateForContinuous({'IsMQ': False, 'IsChild': True})
        Event34:
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        UISystemActor.EventTriggerSyncPlayerEquipmentAndPouch()
        Player_Event.EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
        ChallengeSystemActor.EventTriggerMiniGameTimerSetting({'IsCountDown': False, 'TimerLimit': 216000})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': True, 'ChallengeName': 'SubEvent_AllBossBattle', 'StepName': 'Playing', 'IsIgnoreChallengeProgressUI': True})
      case 1:
        ChallengeSystemActor.EventTriggerSetBestTimeInfoForBossRush({'ElapsedTimerFrameGD': 'DreamWorld_BossrushResultFrame_01', 'ElapsedTimerMinuteGD': 'DreamWorld_BossrushResultMinute_01', 'ElapsedTimerSecondGD': 'DreamWorld_BossrushResultSecond_01', 'ElapsedTimerMilliSecondGD': 'DreamWorld_BossrushResultMilliSecond_01', 'HaveRecordedTimeGD': 'DreamBossStage_HaveRecordedTime_BossRush_01', 'BestTimeFrameGD': 'DreamWorld_BossrushBestTime_01', 'LastBossRushBossCount': 3})

        call ChildBossStageEnterBase({'NextStartPos': 'GohmaStage', 'EnemyActor': 'Enemy_DungeonBoss_Gohma', 'NextBanc': 'GohmaStage', 'NextEnemy': 'Enemy_DungeonBoss_Gohma', 'BossCount': 0, 'BootEventName': 'DreamBossStage_Rematch_TimeAppear'})

        UISystemActor.EventTriggertExchangeEnemyMuseumPouchAndState({'IsMQ': False, 'IsChild': True, 'EnemyActor': 'Obj_Dream_Battle_StoneMonument_A_01'})
        goto Event34
      case 2:
        ChallengeSystemActor.EventTriggerSetBestTimeInfoForBossRush({'ElapsedTimerFrameGD': 'DreamWorld_BossrushResultFrame_02', 'ElapsedTimerMinuteGD': 'DreamWorld_BossrushResultMinute_02', 'ElapsedTimerSecondGD': 'DreamWorld_BossrushResultSecond_02', 'ElapsedTimerMilliSecondGD': 'DreamWorld_BossrushResultMilliSecond_02', 'BestTimeFrameGD': 'DreamWorld_BossrushBestTime_02', 'HaveRecordedTimeGD': 'DreamBossStage_HaveRecordedTime_BossRush_02', 'LastBossRushBossCount': 5})

        call AdultBossStageEnterBase({'NextBanc': 'PhantomGanonStage', 'NextStartPos': 'PhantomGanonStage', 'EnemyActor': 'Enemy_DungeonBoss_PhantomGanon', 'NextEnemy': 'Enemy_DungeonBoss_PhantomGanon', 'BossCount': 0, 'BootEventName': 'DreamBossStage_Rematch_TimeAppear'})

        UISystemActor.EventTriggertExchangeEnemyMuseumPouchAndState({'IsMQ': False, 'IsChild': False, 'EnemyActor': 'Obj_Dream_Battle_StoneMonument_A_03'})
        goto Event34
    }
}

void ChildBossStageEnterBase() {
    if Player_Event.EventQueryPlayerIsChild() {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Sequence_IsChildhood', 'Index': -1, 'Value': True})
    }

    call BossStageEnterBase({'NextBanc': 'NextBanc', 'NextStartPos': 'NextStartPos', 'EnemyActor': 'EnemyActor', 'NextEnemy': 'NextEnemy', 'BootEventName': 'BootEventName', 'BossCount': 'BossCount'})

}

void AdultBossStageEnterBase() {
    if !Player_Event.EventQueryPlayerIsChild() {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Sequence_IsChildhood', 'Index': -1, 'Value': False})
    }

    call BossStageEnterBase({'NextBanc': 'NextBanc', 'NextStartPos': 'NextStartPos', 'EnemyActor': 'EnemyActor', 'NextEnemy': 'NextEnemy', 'BootEventName': 'BootEventName', 'BossCount': 'BossCount'})

}

void BossRushBossStageExitSuccessBase() {
    EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
    Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': '', 'InstanceName': '', 'Direction': 0.0, 'WorldPos': [0.0, 2.049999952316284, -22.0], 'Target': 1})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    Npc_Invisible_Kaepora.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/SubEvent_AllBossBattle:Talk_03', 'ChoiceLabel1': 3, 'ChoiceLabel3': 4, 'IsOverrideStyle': True, 'MaintainPerformanceState': 0})
    switch GameSystemActor.EventQueryTalkChoice3() {
      case 0:
        return fnv1a("Yes")
      case 1:
        Npc_Invisible_Kaepora.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/SubEvent_AllBossBattle:Talk_04', 'ChoiceLabel2': 5, 'IsOverrideStyle': True, 'MaintainPerformanceState': 0})
        if !GameSystemActor.EventQueryTalkChoice2() {

            call BossStageExitProcess()

        } else {
            Event4:
            Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
        }
        return fnv1a("No")
      case 2:
        goto Event4
    }
}

void BossRushBossStageExitSuccessGohma() {

    call ChildBossStageEnterBase({'EnemyActor': 'Enemy_DungeonBoss_Dodongo', 'NextBanc': 'DodongoStage', 'NextStartPos': 'DodongoStage', 'BossCount': 4, 'NextEnemy': 'Enemy_DungeonBoss_Dodongo', 'BootEventName': 'DreamBossStage_Rematch_TimeAppear'})

}

void BossRushBossStageExitSuccessDodongo() {

    call ChildBossStageEnterBase({'NextBanc': 'BarinadeStage', 'NextStartPos': 'BarinadeStage', 'EnemyActor': 'Enemy_DungeonBoss_Barinade', 'BossCount': 6, 'NextEnemy': 'Enemy_DungeonBoss_Barinade', 'BootEventName': 'DreamBossStage_Rematch_TimeAppear'})

    PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Actor': 'Weapon_Boomerang', 'Num': 1, 'IsEquipDIrect': False, 'IsSetMessageTargetActorName': True, 'IsGetEvent': False})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    Player_Event.EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
}

void BossRushBossStageExitSuccessBarinade() {
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRush_Mode', 'Value': 1}) {
      case [0, 2]:

        call AdultBossStageEnterBase({'NextBanc': 'PhantomGanonStage', 'NextStartPos': 'PhantomGanonStage', 'EnemyActor': 'Enemy_DungeonBoss_PhantomGanon', 'BossCount': 9, 'NextEnemy': 'Enemy_DungeonBoss_PhantomGanon', 'BootEventName': 'DreamBossStage_Rematch_TimeAppear'})

        UISystemActor.EventTriggertExchangeEnemyMuseumPouchAndStateForContinuous({'IsMQ': False, 'IsChild': False})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        Player_Event.EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        Player_Event.EventPlayerSetSelectedItem({'Item': 30, 'IsWaitEnd': True})
      case 1:
        UISystemActor.EventEventFadeOut({'IsNoPlayAnime': False, 'Color': 0, 'IsWaitEnd': True, 'Length': 3})

        call ResultBossrush()

    }
}

void BossRushBossStageExitSuccessPhantomGanon() {

    call AdultBossStageEnterBase({'NextBanc': 'VolvagiaStage', 'NextStartPos': 'VolvagiaStage', 'EnemyActor': 'Enemy_DungeonBoss_Volvagia', 'BossCount': 11, 'NextEnemy': 'Enemy_DungeonBoss_Volvagia', 'BootEventName': 'DreamBossStage_Rematch_TimeAppear'})

    PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': 1, 'Actor': 'Weapon_Hammer', 'IsEquipDIrect': False, 'IsSetMessageTargetActorName': True, 'IsGetEvent': False})
    Player_Event.EventTriggerEquipmentUserRequestCreateStaticEquipment({'EquipmentActorName': 'Armor_Adult_Goron', 'DynamicEquipmentState': 2, 'IsActive': True})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    Player_Event.EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
}

void BossRushBossStageExitSuccessVolvagia() {

    call AdultBossStageEnterBase({'NextBanc': 'MorphaStage', 'NextStartPos': 'MorphaStage', 'EnemyActor': 'Enemy_DungeonBoss_Morpha', 'BossCount': 14, 'NextEnemy': 'Enemy_DungeonBoss_Morpha', 'BootEventName': 'DreamBossStage_Rematch_TimeAppear'})

    Player_Event.EventTriggerEquipmentUserRequestCreateStaticEquipment({'EquipmentActorName': 'Armor_Adult_Zora', 'DynamicEquipmentState': 2, 'IsActive': True})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    Player_Event.EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
}

void BossRushBossStageExitSuccessMorpha() {

    call AdultBossStageEnterBase({'NextBanc': 'BongoBongoStage', 'NextStartPos': 'BongoBongoStage', 'EnemyActor': 'Enemy_DungeonBoss_BongoBongo', 'BossCount': 17, 'NextEnemy': 'Enemy_DungeonBoss_BongoBongo', 'BootEventName': 'DreamBossStage_Rematch_TimeAppear'})

    Player_Event.EventTriggerEquipmentUserRequestCreateStaticEquipment({'DynamicEquipmentState': 2, 'EquipmentActorName': 'Armor_Adult_Normal', 'IsActive': True})
    Player_Event.EventTriggerEquipmentUserRequestCreateStaticEquipment({'EquipmentActorName': 'Armor_GlassTruth', 'IsActive': False, 'DynamicEquipmentState': 1})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    Player_Event.EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
}

void BossRushBossStageExitSuccessBongoBongo() {

    call AdultBossStageEnterBase({'NextBanc': 'TwinrovaStage', 'NextStartPos': 'TwinrovaStage', 'EnemyActor': 'Enemy_DungeonBoss_Twinrova', 'BossCount': 21, 'NextEnemy': 'Enemy_DungeonBoss_Twinrova', 'BootEventName': 'DreamBossStage_Rematch_TimeAppear'})

    PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': 1, 'Actor': 'Weapon_Shield_Mirror', 'IsEquipDIrect': False, 'IsSetMessageTargetActorName': True, 'IsGetEvent': False})
    Player_Event.EventTriggerEquipmentUserRequestCreateStaticEquipment({'DynamicEquipmentState': 2, 'EquipmentActorName': 'Weapon_Shield_Mirror', 'IsActive': True})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    Player_Event.EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
}

void BossStageNoExitProcess() {

    call Common.AirStartUp()

    UISystemActor.EventEventFadeOut({'IsNoPlayAnime': False, 'Color': 0, 'IsWaitEnd': True, 'Length': 0})
    Event16:
    ChallengeSystemActor.EventTriggerUnshowTimerUI()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Sequence_IsChildEnteringDreamWorld', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Sequence_IsChildhood', 'Value': True, 'Index': -1})
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Sequence_IsChildhood', 'Value': False, 'Index': -1})
    }
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_BossRush'}) {
        GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'IsStartOnEvent': False, 'NextStartPos': 'EnemyMusuem', 'NextBanc': 'EnemyMuseum', 'EventStarterName': '', 'FadePattern': 1, 'IsItemWarp': False, 'BootEventName': 'Npc_Dream_ReturnFromBossRush'})
    } else {
        GameSystemActor.EventReserveBancChangeForRematchBossStage({'IsWaitEnd': True})
    }
    UISystemActor.EventTriggertRestorePouchFromEnemyMuseum()
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    UISystemActor.EventTriggerRequestDeletePlayerEquipmentFromPouch()
    Player_Event.EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
    GameSystemActor.EventTriggerDropActive()
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_BossRush', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'DreamWorld_BossRush_Full'})
    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRushBossCount', 'Value': 0})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'LinkBed_DeepSleep', 'Value': False})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': True, 'ChallengeName': 'SubEvent_AllBossBattle', 'IsIgnoreChallengeProgressUI': True, 'StepName': 'Retry'})

    call DreamBossStage.Ganon_GD_Reset()

    Player_Event.EventTriggerPlayerClearNayruLoveCount()
}

void BossStageExitProcess() {
    goto Event16
}

void NaviRematchFirst() {
    if !GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRush_Mode', 'Value': 1})
    && GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRushBossCount', 'Value': 9}) {
        Player_Event.EventPlayerWait({'IsWaitEnd': True})
        Npc_Invisible_Kaepora.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1002, 'ChoiceLabel1': 1001, 'ChoiceLabel2': 1003, 'ChoiceNumber': 0, 'IsOverrideStyle': True, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Dream:Talk_51', 'MaintainPerformanceState': 0})
        Player_Event.EventCreateShowItemFromActorFileName({'IsWaitEnd': True, 'Actor': 'Item_Arrow_Light'})
        EventCamera.EventTriggerCameraSavePoint()

        call Dm_SY_GetInEvent.GetInEvent_SetLocator({'ActorName': 'Item_Arrow_Light'})


        call Dm_SY_GetInEvent.GetInEvent_Animation({'ActorName': 'Item_Arrow_Light'})


        call Dm_SY_GetInEvent.Item_Position({'ActorName': 'Item_Arrow_Light'})

        PouchSystemActor.EventTriggerSetForGetWindow({'Actor': 'Item_Arrow_Light'})

        call GetPouchContent.OpenGetWindow()


        fork {
            Player_Event.EventDeleteShowItem({'IsWaitEnd': True, 'IsFadeOut': False, 'IsScaleOut': False, 'ChangeVisibleOffWithRequestDelete': False})
        } {
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

            fork {
                EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})
            } {
                EventEffectEmitter.EventEffectStopGetItem()
            } {
                PostProcessingActor.EventResetToInGameParametersDoF({'IsWaitEnd': True, 'TransitionFrame': 0})
            }

        }

        PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Actor': 'Item_Arrow_Light', 'Num': 1, 'IsEquipDIrect': False, 'IsSetMessageTargetActorName': True, 'IsGetEvent': False})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'Wait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
        Npc_Navi.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_Invisible_Kaepora.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1002, 'ChoiceLabel1': 1001, 'ChoiceLabel2': 1003, 'ChoiceNumber': 0, 'IsOverrideStyle': True, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Dream:Talk_52', 'MaintainPerformanceState': 0})
    }
}

void TimeCountStopAndRecordBestTime() {
    ChallengeSystemActor.EventTriggerMiniGameTimerStop()
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_BossRush'}) {
        if !ChallengeSystemActor.EventQueryHaveRecordedTime() {
            if !ChallengeSystemActor.EventQueryShouldUpdateBestTime() {
                ChallengeSystemActor.EventTriggerRecordBestTimeForDreamWorld()
                ChallengeSystemActor.EventTriggerMinigameTimerStopAnim({'IsNewRecord': True})
            } else {
                Event205:
                ChallengeSystemActor.EventTriggerMinigameTimerStopAnim({'IsNewRecord': False})
            }
        } else {
            ChallengeSystemActor.EventTriggerRecordBestTimeForDreamWorld()
            goto Event205
        }
    }
}

void BossRushBossStageExitSuccessTwinrova() {
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRush_Mode', 'Value': 1}) {
      case [0, 1]:

        call AdultBossStageEnterBase({'NextBanc': 'GanondorfStage', 'NextStartPos': 'GanondorfStage', 'EnemyActor': 'Enemy_DungeonBoss_Ganondorf', 'BossCount': 24, 'NextEnemy': 'Enemy_DungeonBoss_Ganondorf', 'BootEventName': 'DreamBossStage_Rematch_TimeAppear'})

        Player_Event.EventTriggerPlayerClearNayruLoveCount()
      case 2:
        UISystemActor.EventEventFadeOut({'IsNoPlayAnime': False, 'Color': 0, 'IsWaitEnd': True, 'Length': 3})

        call ResultBossrush()

    }
}

void BossRushBossStageExitSuccessGanon() {

    call AdultBossStageEnterBase({'NextBanc': 'GanonStage', 'NextStartPos': 'GanonStage', 'EnemyActor': 'Enemy_DungeonBoss_Ganon_SecondHalfBattle', 'NextEnemy': 'Enemy_DungeonBoss_Ganon', 'BossCount': 25, 'BootEventName': 'DreamBossStage_Rematch_TimeAppear'})

    Player_Event.EventTriggerPlayerClearNayruLoveCount()
}

void BossRushBossBattleExit() {
    ChallengeSystemActor.EventTriggerUnshowTimerUI()
    ChallengeSystemActor.EventTriggerMiniGameTimerStop()
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRushBossCount', 'Value': 2}) {
      case 0:

        call BossStageEnterBase({'NextStartPos': 'GohmaStage', 'EnemyActor': 'Enemy_DungeonBoss_Gohma', 'NextBanc': 'GohmaStage', 'NextEnemy': 'Enemy_DungeonBoss_Gohma', 'BossCount': 1, 'BootEventName': 'InsideTheDekuTree_BossAppear'})

      case 1:

        call BossStageEnterBase({'NextBanc': 'WolfosStage', 'NextStartPos': 'WolfosStage', 'EnemyActor': 'Enemy_Wolfos', 'BootEventName': 'DreamBossStage_Rematch_Arrive', 'NextEnemy': 'Enemy_MiddleBoss_Wolfos', 'BossCount': 2})

      case 2:
        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRushBossCount', 'Value': 4}) {
          case 0:

            call BossStageEnterBase({'EnemyActor': 'Enemy_MiddleBoss_Lizalfos', 'NextBanc': 'LizalfosStage', 'NextStartPos': 'LizalfosStage', 'NextEnemy': 'Enemy_DungeonBoss_Dodongo', 'BootEventName': 'DreamBossStage_Rematch_Arrive', 'BossCount': 3})

          case 1:

            call BossStageEnterBase({'EnemyActor': 'Enemy_DungeonBoss_Dodongo', 'NextBanc': 'DodongoStage', 'NextStartPos': 'DodongoStage', 'NextEnemy': 'Enemy_MiddleBoss_BigOcto', 'BossCount': 4, 'BootEventName': 'Get_StoneOfFire_AppearBoss'})

          case 2:
            switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRushBossCount', 'Value': 6}) {
              case 0:

                call BossStageEnterBase({'EnemyActor': 'Enemy_MiddleBoss_BigOcto', 'NextStartPos': 'BigOctoStage', 'NextBanc': 'BigOctoStage', 'NextEnemy': 'Enemy_DungeonBoss_Barinade', 'BossCount': 5, 'BootEventName': 'DreamBossStage_Rematch_BigOcta_Start'})

              case 1:

                call BossStageEnterBase({'NextBanc': 'BarinadeStage', 'NextStartPos': 'BarinadeStage', 'EnemyActor': 'Enemy_DungeonBoss_Barinade', 'NextEnemy': 'Enemy_Stalfos_Weak', 'BossCount': 6, 'BootEventName': 'DreamBossStage_Rematch_Barinade_Start'})

              case 2:
                switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRushBossCount', 'Value': 8}) {
                  case 0:

                    call BossStageEnterBase({'EnemyActor': 'Enemy_Stalfos_Weak', 'NextStartPos': 'StalfosWeakStage', 'NextBanc': 'StalfosWeakStage', 'NextEnemy': 'Enemy_MiddleBoss_Poe_Meg', 'BootEventName': 'DreamBossStage_Rematch_Arrive', 'BossCount': 7})

                  case 1:

                    call BossStageEnterBase({'NextBanc': 'MegStage', 'NextStartPos': 'MegStage', 'EnemyActor': 'Enemy_MiddleBoss_Poe_Meg', 'NextEnemy': 'Enemy_DungeonBoss_PhantomGanon', 'BootEventName': 'DreamBossStage_Rematch_Arrive', 'BossCount': 8})

                  case 2:
                    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRushBossCount', 'Value': 10}) {
                      case 0:

                        call BossStageEnterBase({'NextBanc': 'PhantomGanonStage', 'NextStartPos': 'PhantomGanonStage', 'EnemyActor': 'Enemy_DungeonBoss_PhantomGanon', 'NextEnemy': 'Enemy_MiddleBoss_FlareDancer', 'BossCount': 9, 'BootEventName': 'ForestTemple_SageOfForest_PhantomGanonAppearance'})

                      case 1:

                        call BossStageEnterBase({'EnemyActor': 'Enemy_MiddleBoss_FlareDancer', 'NextBanc': 'FlareDancerStage', 'NextStartPos': 'FlareDancerStage', 'NextEnemy': 'Enemy_DungeonBoss_Volvagia', 'BootEventName': 'DreamBossStage_Rematch_Arrive', 'BossCount': 10})

                      case 2:
                        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRushBossCount', 'Value': 12}) {
                          case 0:

                            call BossStageEnterBase({'NextBanc': 'VolvagiaStage', 'NextStartPos': 'VolvagiaStage', 'EnemyActor': 'Enemy_DungeonBoss_Volvagia', 'NextEnemy': 'Enemy_Wolfos_White', 'BossCount': 11, 'BootEventName': 'SageOfFire_BossAppear'})

                          case 1:

                            call BossStageEnterBase({'EnemyActor': 'Enemy_Wolfos_White', 'NextBanc': 'WolfosWhiteStage', 'NextStartPos': 'WolfosWhiteStage', 'NextEnemy': 'Enemy_MiddleBoss_DarkLink', 'BootEventName': 'DreamBossStage_Rematch_Arrive', 'BossCount': 12})

                          case 2:
                            switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRushBossCount', 'Value': 14}) {
                              case 0:

                                call BossStageEnterBase({'NextBanc': 'DarkLinkStage', 'NextStartPos': 'DarkLinkStage', 'EnemyActor': 'Enemy_MiddleBoss_DarkLink', 'NextEnemy': 'Enemy_DungeonBoss_Morpha', 'BootEventName': 'DreamBossStage_Rematch_Arrive', 'BossCount': 13})

                              case 1:

                                call BossStageEnterBase({'NextBanc': 'MorphaStage', 'NextStartPos': 'MorphaStage', 'EnemyActor': 'Enemy_DungeonBoss_Morpha', 'NextEnemy': 'Enemy_DeadHand', 'BossCount': 14, 'BootEventName': 'Demo_SageOfWater_BossAppears'})

                              case 2:
                                switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRushBossCount', 'Value': 16}) {
                                  case 0:

                                    call BossStageEnterBase({'NextBanc': 'DeadHandStage', 'NextStartPos': 'DeadHandStage', 'EnemyActor': 'Enemy_DeadHand', 'NextEnemy': 'Enemy_Stalfos', 'BootEventName': 'DreamBossStage_Rematch_Arrive', 'BossCount': 15})

                                  case 1:

                                    call BossStageEnterBase({'NextBanc': 'StalfosStage', 'NextStartPos': 'StalfosStage', 'EnemyActor': 'Enemy_Stalfos_AlwaysRespawn', 'NextEnemy': 'Enemy_DungeonBoss_BongoBongo', 'BootEventName': 'DreamBossStage_Rematch_Arrive', 'BossCount': 16})

                                  case 2:
                                    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRushBossCount', 'Value': 18}) {
                                      case 0:

                                        call BossStageEnterBase({'NextBanc': 'BongoBongoStage', 'NextStartPos': 'BongoBongoStage', 'EnemyActor': 'Enemy_DungeonBoss_BongoBongo', 'NextEnemy': 'Enemy_MiddleBoss_GerudoThief', 'BossCount': 17, 'BootEventName': 'ShadowTemple_BossAppear'})

                                      case 1:

                                        call BossStageEnterBase({'NextBanc': 'GerudoThiefStage', 'NextStartPos': 'GerudoThiefStage', 'EnemyActor': 'Enemy_MiddleBoss_GerudoThief', 'NextEnemy': 'Enemy_IronKnuckle_Silver', 'BootEventName': 'DreamBossStage_Rematch_Arrive', 'BossCount': 18})

                                      case 2:
                                        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRushBossCount', 'Value': 20}) {
                                          case 0:

                                            call BossStageEnterBase({'NextBanc': 'IronKnuckleWhiteStage', 'NextStartPos': 'IronKnuckleWhiteStage', 'EnemyActor': 'Enemy_IronKnuckle_Silver', 'NextEnemy': 'Enemy_MiddleBoss_IronKnuckle_Nabooru', 'BootEventName': 'DreamBossStage_Rematch_Arrive', 'BossCount': 19})

                                          case 1:

                                            call BossStageEnterBase({'NextBanc': 'NaboruStage', 'NextStartPos': 'NaboruStage', 'EnemyActor': 'Enemy_MiddleBoss_IronKnuckle_Nabooru', 'NextEnemy': 'Enemy_DungeonBoss_Twinrova', 'BootEventName': 'DreamBossStage_Rematch_Arrive', 'BossCount': 20})

                                          case 2:
                                            switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRushBossCount', 'Value': 22}) {
                                              case 0:

                                                call BossStageEnterBase({'NextBanc': 'TwinrovaStage', 'NextStartPos': 'TwinrovaStage', 'EnemyActor': 'Enemy_DungeonBoss_Twinrova', 'NextEnemy': 'Enemy_Dinolfos', 'BossCount': 21, 'BootEventName': 'SageOfSpirit_BossStart'})

                                              case 1:

                                                call BossStageEnterBase({'EnemyActor': 'Enemy_Dinolfos', 'NextBanc': 'DinolfosStage', 'NextStartPos': 'DinolfosStage', 'NextEnemy': 'Enemy_IronKnuckle_Black', 'BootEventName': 'DreamBossStage_Rematch_Arrive', 'BossCount': 22})

                                              case 2:
                                                switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRushBossCount', 'Value': 24}) {
                                                  case 0:

                                                    call BossStageEnterBase({'NextBanc': 'IronKnuckleBlackStage', 'NextStartPos': 'IronKnuckleBlackStage', 'EnemyActor': 'Enemy_IronKnuckle_Black', 'NextEnemy': 'Enemy_DungeonBoss_Ganondorf', 'BootEventName': 'DreamBossStage_Rematch_Arrive', 'BossCount': 23})

                                                  case 1:

                                                    call BossStageEnterBase({'NextBanc': 'GanondorfStage', 'NextStartPos': 'GanondorfStage', 'EnemyActor': 'Enemy_DungeonBoss_Ganondorf', 'NextEnemy': 'Enemy_DungeonBoss_Ganon', 'BossCount': 24, 'BootEventName': 'DreamBossStage_Rematch_Ganondorf_Start'})

                                                  case 2:

                                                    call BossStageEnterBase({'NextBanc': 'GanonStage', 'NextStartPos': 'GanonStage', 'EnemyActor': 'Enemy_DungeonBoss_Ganon_SecondHalfBattle', 'NextEnemy': 'Enemy_DungeonBoss_Ganon', 'BossCount': 25, 'BootEventName': 'InsideGanonCastle_Dungeon_BossAppear_2'})


                                                    call DreamBossStage.Ganon_GD_Reset()

                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void Rematch_Start() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Dream_FirstTalk_Rematch'}) {
        Npc_Invisible_Kaepora.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1002, 'ChoiceLabel1': 1001, 'ChoiceLabel2': 1003, 'ChoiceNumber': 0, 'IsOverrideStyle': True, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Dream:Talk_44', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Dream_FirstTalk_Rematch'})
    }
}

void BossStageEnterBase() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_BossRush'}) {
        GameDataActor.EventTriggerSetGameDataString64({'Index': -1, 'GameDataName': 'DreamWorld_NextEnemyBattleTeam', 'Value': 'NextEnemy'})
        GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'IsStartOnEvent': False, 'FadePattern': 1, 'EventStarterName': '', 'NextStartPos': 'BossRush', 'NextBanc': 'BossRushIntervalRoom', 'BootEventName': 'DreamBossStage_Rematch_TimeAppear', 'IsItemWarp': False})
    } else {
        UISystemActor.EventEventFadeOut({'Length': 0, 'IsNoPlayAnime': False, 'IsWaitEnd': True, 'Color': 0})
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRushBossCount', 'Value': 'BossCount'})
        ChallengeSystemActor.EventTriggerMiniGameTimerSetting({'IsCountDown': False, 'TimerLimit': 108000})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'DreamWorld_BossRushBossCount', 'Value': 1, 'Index': -1}) {
          case [0, 2]:
            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'DreamWorld_BossRushBossCount', 'Index': -1, 'Value': 4}) {
              case [0, 2]:
                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'DreamWorld_BossRushBossCount', 'Value': 14, 'Index': -1}) {
                  case [0, 2]:
                    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'DreamWorld_BossRushBossCount', 'Index': -1, 'Value': 25}) {
                      case [0, 2]:
                        GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'IsStartOnEvent': False, 'FadePattern': 1, 'NextBanc': 'NextBanc', 'NextStartPos': 'NextStartPos', 'BootEventName': 'BootEventName', 'EventStarterName': '', 'IsItemWarp': False})
                      case 1:
                        Event57:
                        GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'IsStartOnEvent': False, 'FadePattern': 1, 'NextBanc': 'NextBanc', 'NextStartPos': 'NextStartPos', 'BootEventName': 'BootEventName', 'EventStarterName': 'DreamRematch', 'IsItemWarp': False})
                    }
                  case 1:
                    goto Event57
                }
              case 1:
                goto Event57
            }
          case 1:
            goto Event57
        }
    }
}

void ResultBossrush() {
    ChallengeSystemActor.EventTriggerUnshowTimerUI()
    ChallengeSystemActor.EventTriggerMiniGameCalcElapsedTime({'ElapsedTimerMinute': 'DreamWorld_ResultMinute', 'ElapsedTimerSecond': 'DreamWorld_ResultSecond', 'ElapsedTimerMilliSecond': 'DreamWorld_ResultMilliSecond', 'LimitTimerValue': 'DreamWorld_BossRushTimeLimit', 'ElapsedTimerValue': 'DreamWorld_BossRushResultFrame'})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Sequence_IsChildEnteringDreamWorld', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Sequence_IsChildhood', 'Value': True, 'Index': -1})
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Sequence_IsChildhood', 'Value': False, 'Index': -1})
    }
    Npc_Invisible_Kaepora.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 2, 'ChoiceLabel1': 3, 'ChoiceLabel3': 4, 'IsOverrideStyle': True, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Dream:Talk_53', 'MaintainPerformanceState': 0})
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRush_Mode', 'Value': 1}) {
      case 0:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Dream_BossRush_Cleared'}) {
            Event145:
            Npc_Invisible_Kaepora.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 2, 'ChoiceLabel1': 3, 'ChoiceLabel3': 4, 'IsOverrideStyle': True, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Dream:Talk_56', 'MaintainPerformanceState': 0})
            Event146:
            Npc_Invisible_Kaepora.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 2, 'ChoiceLabel1': 3, 'ChoiceLabel3': 4, 'IsOverrideStyle': True, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Dream:Talk_57', 'MaintainPerformanceState': 0})
            GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'IsStartOnEvent': False, 'NextStartPos': 'EnemyMusuem', 'NextBanc': 'EnemyMuseum', 'EventStarterName': '', 'FadePattern': 1, 'IsItemWarp': False, 'BootEventName': 'Npc_Dream_ReturnFromBossRush'})
            UISystemActor.EventTriggertRestorePouchFromEnemyMuseum()
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            UISystemActor.EventTriggerRequestDeletePlayerEquipmentFromPouch()
            Player_Event.EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
            GameSystemActor.EventTriggerDropActive()
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_BossRush', 'Value': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'DreamWorld_BossRush_Full'})
            GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRushBossCount', 'Value': 0})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'LinkBed_DeepSleep', 'Value': False})
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': True, 'ChallengeName': 'SubEvent_AllBossBattle', 'IsIgnoreChallengeProgressUI': True, 'StepName': 'Retry'})

            call DreamBossStage.Ganon_GD_Reset()

            Player_Event.EventTriggerPlayerClearNayruLoveCount()
        } else {
            Npc_Invisible_Kaepora.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 2, 'ChoiceLabel1': 3, 'ChoiceLabel3': 4, 'IsOverrideStyle': True, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Dream:Talk_60'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_Dream_BossRush_Cleared', 'Value': True})
            goto Event146
        }
      case 1:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Dream_BossRush_Cleared_01'}) {
            goto Event145
        } else {
            Npc_Invisible_Kaepora.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 2, 'ChoiceLabel1': 3, 'ChoiceLabel3': 4, 'IsOverrideStyle': True, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Dream:Talk_58', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Dream_BossRush_Cleared_01'})
            goto Event146
        }
      case 2:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Dream_BossRush_Cleared_02'}) {
            goto Event145
        } else {
            Npc_Invisible_Kaepora.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 2, 'ChoiceLabel1': 3, 'ChoiceLabel3': 4, 'IsOverrideStyle': True, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Dream:Talk_59'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Dream_BossRush_Cleared_02'})
            goto Event146
        }
    }
}

void BossRushRematchFirst() {
    Player_Event.EventTriggerPlayerClearNayruLoveCount()

    call BossRushRematchEquip()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    UISystemActor.EventTriggerSyncPlayerEquipmentAndPouch()
    Player_Event.EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
}

void BossRushRematchEquip() {
    UISystemActor.EventTriggertRestorePouchFromEnemyMuseum()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRushBossCount', 'Value': 2}) {
      case 0:
        UISystemActor.EventTriggertExchangeEnemyMuseumPouchAndState({'IsMQ': False, 'IsChild': True, 'EnemyActor': 'Enemy_DungeonBoss_Gohma'})
      case 1:
        UISystemActor.EventTriggertExchangeEnemyMuseumPouchAndState({'IsMQ': False, 'EnemyActor': 'Enemy_Wolfos', 'IsChild': True})
      case 2:
        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRushBossCount', 'Value': 4}) {
          case 0:
            UISystemActor.EventTriggertExchangeEnemyMuseumPouchAndState({'IsMQ': False, 'IsChild': True, 'EnemyActor': 'Enemy_MiddleBoss_Lizalfos'})
          case 1:
            UISystemActor.EventTriggertExchangeEnemyMuseumPouchAndState({'IsMQ': False, 'EnemyActor': 'Enemy_DungeonBoss_Dodongo', 'IsChild': True})
          case 2:
            switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRushBossCount', 'Value': 6}) {
              case 0:
                UISystemActor.EventTriggertExchangeEnemyMuseumPouchAndState({'IsMQ': False, 'IsChild': True, 'EnemyActor': 'Enemy_MiddleBoss_BigOcto'})
              case 1:
                UISystemActor.EventTriggertExchangeEnemyMuseumPouchAndState({'IsMQ': False, 'EnemyActor': 'Enemy_DungeonBoss_Barinade', 'IsChild': True})
              case 2:
                switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRushBossCount', 'Value': 8}) {
                  case 0:
                    UISystemActor.EventTriggertExchangeEnemyMuseumPouchAndState({'IsMQ': False, 'EnemyActor': 'Enemy_Stalfos_Weak', 'IsChild': False})
                  case 1:
                    UISystemActor.EventTriggertExchangeEnemyMuseumPouchAndState({'IsMQ': False, 'IsChild': False, 'EnemyActor': 'Enemy_MiddleBoss_Poe_Meg'})
                  case 2:
                    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRushBossCount', 'Value': 10}) {
                      case 0:
                        UISystemActor.EventTriggertExchangeEnemyMuseumPouchAndState({'IsMQ': False, 'EnemyActor': 'Enemy_DungeonBoss_PhantomGanon', 'IsChild': False})
                      case 1:
                        UISystemActor.EventTriggertExchangeEnemyMuseumPouchAndState({'IsMQ': False, 'IsChild': False, 'EnemyActor': 'Enemy_MiddleBoss_FlareDancer'})
                      case 2:
                        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRushBossCount', 'Value': 12}) {
                          case 0:
                            UISystemActor.EventTriggertExchangeEnemyMuseumPouchAndState({'IsMQ': False, 'EnemyActor': 'Enemy_DungeonBoss_Volvagia', 'IsChild': False})
                          case 1:
                            UISystemActor.EventTriggertExchangeEnemyMuseumPouchAndState({'IsMQ': False, 'EnemyActor': 'Enemy_Wolfos_White', 'IsChild': False})
                          case 2:
                            switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRushBossCount', 'Value': 14}) {
                              case 0:
                                UISystemActor.EventTriggertExchangeEnemyMuseumPouchAndState({'IsMQ': False, 'IsChild': False, 'EnemyActor': 'Enemy_MiddleBoss_DarkLink'})
                                GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'DreamBossStage_DarkLink_DisappearShadow'})
                              case 1:
                                UISystemActor.EventTriggertExchangeEnemyMuseumPouchAndState({'IsMQ': False, 'IsChild': False, 'EnemyActor': 'Enemy_DungeonBoss_Morpha'})
                              case 2:
                                switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRushBossCount', 'Value': 16}) {
                                  case 0:
                                    UISystemActor.EventTriggertExchangeEnemyMuseumPouchAndState({'IsMQ': False, 'IsChild': True, 'EnemyActor': 'Enemy_DeadHand'})
                                  case 1:
                                    UISystemActor.EventTriggertExchangeEnemyMuseumPouchAndState({'IsMQ': False, 'IsChild': False, 'EnemyActor': 'Enemy_Stalfos_AlwaysRespawn'})
                                  case 2:
                                    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRushBossCount', 'Value': 18}) {
                                      case 0:
                                        UISystemActor.EventTriggertExchangeEnemyMuseumPouchAndState({'IsMQ': False, 'EnemyActor': 'Enemy_DungeonBoss_BongoBongo', 'IsChild': False})
                                      case 1:
                                        UISystemActor.EventTriggertExchangeEnemyMuseumPouchAndState({'IsMQ': False, 'IsChild': False, 'EnemyActor': 'Enemy_MiddleBoss_GerudoThief'})
                                      case 2:
                                        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRushBossCount', 'Value': 20}) {
                                          case 0:
                                            UISystemActor.EventTriggertExchangeEnemyMuseumPouchAndState({'IsMQ': False, 'IsChild': True, 'EnemyActor': 'Enemy_IronKnuckle_Silver'})
                                          case 1:
                                            UISystemActor.EventTriggertExchangeEnemyMuseumPouchAndState({'IsMQ': False, 'IsChild': False, 'EnemyActor': 'Enemy_MiddleBoss_IronKnuckle_Nabooru'})
                                          case 2:
                                            switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRushBossCount', 'Value': 22}) {
                                              case 0:
                                                UISystemActor.EventTriggertExchangeEnemyMuseumPouchAndState({'IsMQ': False, 'EnemyActor': 'Enemy_DungeonBoss_Twinrova', 'IsChild': False})
                                              case 1:
                                                UISystemActor.EventTriggertExchangeEnemyMuseumPouchAndState({'IsMQ': False, 'IsChild': False, 'EnemyActor': 'Enemy_Dinolfos'})
                                              case 2:
                                                switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRushBossCount', 'Value': 24}) {
                                                  case 0:
                                                    UISystemActor.EventTriggertExchangeEnemyMuseumPouchAndState({'IsMQ': False, 'EnemyActor': 'Enemy_IronKnuckle_Black', 'IsChild': False})
                                                  case 1:
                                                    UISystemActor.EventTriggertExchangeEnemyMuseumPouchAndState({'IsMQ': False, 'IsChild': False, 'EnemyActor': 'Enemy_DungeonBoss_Ganondorf'})
                                                  case 2:
                                                    UISystemActor.EventTriggertExchangeEnemyMuseumPouchAndState({'IsMQ': False, 'IsChild': False, 'EnemyActor': 'Enemy_DungeonBoss_Ganon_SecondHalfBattle'})
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
