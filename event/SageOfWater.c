-------- EventFlow: SageOfWater --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: ['EventQueryIsEventSkipedMostRecent']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventWaitForActorPresence', 'EventTraverseAroundAndWaitCreateActor', 'EventRemoveProjectiles']
queries: ['EventQueryIsRecommendedMelody', 'EventQueryIsDreamWorld', 'EventQueryMelodyTypeForNormal', 'EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep', 'EventTriggerShowChallengeProgressUI', 'EventTriggerMiniGameTimerStart', 'EventTriggerShowTimerUI']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveCameraToSavePoint', 'EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventBasedOnLookAtCamera', 'EventChangeTemporarilyToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLook', 'EventPlayerWarpToStarterLinkAnchor', 'EventPlayerConversate', 'EventPlayerSlowWalkStop', 'EventPlayerWarpToTargetPosAndRot', 'EventTriggerPlayerEventStartWithDrawn', 'EventPlayerUnequip', 'EventPlayerMoveToAnchor', 'EventTriggerPlayerLookAtObject', 'EventPlayerBackMoveForAnchor', 'EventPlayerPutAway', 'EventTriggerPlayerEventStartWithClimb']
queries: ['EventQueryPlayerIsEquipArmor', 'EventQueryPlayerIsEquipMask']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Zora_KingZora_adult
entrypoint: None()
actions: ['EventTalk', 'EventTriggerLookAtObject', 'EventPlayAS', 'EventTriggerNPCEndFrozen', 'EventTriggerBecomeSpeaker', 'EventExecuteNPCStartFrozen']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_Zora_0010/Dm_Zora_0010_Npc_Zora_ZU_KingZora/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_Zora_0010_KingZora.root.as'}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTriggerRequestLookAtTheFront']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk', 'EventNaviLookAtObject', 'EventWarpToTargetPosAndRot', 'EventTriggerParticipateEvent', 'EventNaviWarpToPlayerHomePosition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_DungeonBoss_Morpha[BossDefeat]
entrypoint: None()
actions: ['EventTriggerDeathSignal', 'EventWarpToTargetPosAndRot', 'EventDoNothing', 'EventSetBattlePresentationOnPreState']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void WaterTemple_RutoDemo() {

    call Common.AirStartUp_OnlyStopInAir()

    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})

    fork {
        Player_Event.EventPlayerSlowWalkStop({'IsWaitEnd': True, 'IsSheathed': True})
    } {
        UISystemActor.EventEventFadeOut({'Length': 3, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0})
    }

    Player_Event.EventPlayerUnequip({'IsWaitEnd': False})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_WaterTemple_0010', 'FadeInTypeEventEnd': 2})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Zora_Ruto_Adult_FastTouch'})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_WaterTemple_0015'})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True, 'ChallengeName': 'SageOfWater', 'StepName': 'Step07'})
}

void SageOfWater_BossAppears() {
    Player_Event.EventTriggerParticipateEvent()
    if !GameSystemActor.EventQueryIsDreamWorld() {
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'Color': 0, 'IsNoPlayAnime': True, 'Length': 3})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'WaterTemple_Room23_LightSwitch', 'Value': False})
        ChallengeSystemActor.EventTriggerShowTimerUI()

        call DreamBossStage.Rematch_Start_Common()

        Event4:
        GameSystemActor.EventWaitForActorPresence({'IsActorCreateRequest': False, 'ActorName': 'Enemy_DungeonBoss_Morpha', 'InstanceName': 'BossDefeat', 'IsWaitEnd': True})
        Enemy_DungeonBoss_Morpha[BossDefeat].EventWarpToTargetPosAndRot({'Position': [-0.5440000295639038, 125.08100128173828, -89.7249984741211], 'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1})
        Enemy_DungeonBoss_Morpha[BossDefeat].EventDoNothing({'IsWaitEnd': True})

        fork {
            Player_Event.EventPlayerWarpToTargetPosAndRot({'Position': [0.18000000715255737, 131.36000061035156, -87.12999725341797], 'YAngle': -135.0, 'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'LockOnWait', 'ClothWarpMode': 0, 'EnableInAir': False})
        } {
            Npc_Navi.EventWarpToTargetPosAndRot({'Position': [0.5899999737739563, 133.02999877929688, -87.30000305175781], 'YAngle': -135.0, 'IsWaitEnd': True, 'ClothWarpMode': -1})
        } {
            EventCamera.EventMoveToTargetPosCamera({'PosVector': [4.869999885559082, 132.77999877929688, -82.48999786376953], 'AtVector': [4.150000095367432, 132.75, -83.18000030517578], 'TargetFovy': 25.75, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        }

        GameSystemActor.EventRemoveProjectiles({'IsWaitEnd': True})
        EventSystemActor.EventWait({'Frames': 5, 'IsWaitEnd': True})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_WaterTemple_BossIn', 'FadeInTypeEventEnd': 2})
        Enemy_DungeonBoss_Morpha[BossDefeat].EventSetBattlePresentationOnPreState()
        if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {

            call Get_StoneOfForest.BossAppearSkip_Morpha()

        }
        if !GameSystemActor.EventQueryIsDreamWorld() {
            ChallengeSystemActor.EventTriggerMiniGameTimerStart()
        }
    } else {
        Player_Event.EventTriggerPlayerEventStartWithDrawn()
        EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})

        fork {
            Player_Event.EventPlayerSlowWalkStop({'IsWaitEnd': True, 'IsSheathed': True})
        } {
            UISystemActor.EventEventFadeOut({'Length': 3, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0})
        }

        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'WaterTemple_Room23_LightSwitch', 'Value': False})
        Player_Event.EventPlayerUnequip({'IsWaitEnd': False})
        Player_Event.EventPlayerPutAway({'IsWaitEnd': False})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True, 'ChallengeName': 'SageOfWater', 'StepName': 'Step07_2'})
        goto Event4
    }
}

void SageOfWater_BossDefeat() {

    call Get_StoneOfForest.InitDefeatBoss()

    if !GameSystemActor.EventQueryIsDreamWorld() {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_BossRush'}) {

            call SubEvent_AllBossBattle.BossRushBossStageExitSuccessMorpha()

        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'IsExistMorpha_DreamWorld', 'Value': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DreamWorld_CreateWarp'})
            EventSystemActor.EventTransition({'EventName': 'Dm_WaterTemple_BossOut', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2})

            call SubEvent_AllBossBattle.BossStageExitProcess()

        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Morpha_DeleteWater'})
        GameSystemActor.EventRemoveProjectiles({'IsWaitEnd': True})
        EventSystemActor.EventTransition({'EventName': 'Dm_WaterTemple_BossOut', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2})
        Enemy_DungeonBoss_Morpha[BossDefeat].EventTriggerDeathSignal()
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'UseDemoWait': True, 'NotChangeRot': False, 'ActorName': 'DestinationAnchor', 'InstanceName': 'BossDefeat', 'ASCommand': 'EvtWait'})

        call Common_Camera_Pln.Camera_PlayableAfterBoss()

        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True, 'ChallengeName': 'SageOfWater', 'StepName': 'Step08'})
        GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    }
}

void WaterTemple_WaterLevelChange01() {
    EventCamera.EventTriggerCameraSavePoint()

    call Dm_SY_Ocarina.PlayOcarinaSequence({'MelodyType': 0})

    if GameSystemActor.EventQueryMelodyTypeForNormal() in [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12] {
        if !GameSystemActor.EventQueryIsRecommendedMelody() {
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_WaterTemple_0020', 'FadeInTypeEventEnd': 2})
        } else {
            EventCamera.EventMoveCameraToSavePoint({'ReviseMode': 1, 'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': True, 'IsRestoreDoF': False})
        }
    }
}

void WaterTemple_WaterLevelChange02() {
    EventCamera.EventTriggerCameraSavePoint()

    call Dm_SY_Ocarina.PlayOcarinaSequence({'MelodyType': 0})

    if GameSystemActor.EventQueryMelodyTypeForNormal() in [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12] {
        if !GameSystemActor.EventQueryIsRecommendedMelody() {
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_WaterTemple_0021'})
        } else {
            EventCamera.EventMoveCameraToSavePoint({'ReviseMode': 1, 'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': True, 'IsRestoreDoF': False})
        }
    }
}

void WaterTemple_WaterLevelChange03() {
    EventCamera.EventTriggerCameraSavePoint()

    call Dm_SY_Ocarina.PlayOcarinaSequence({'MelodyType': 0})

    if GameSystemActor.EventQueryMelodyTypeForNormal() in [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12] {
        if !GameSystemActor.EventQueryIsRecommendedMelody() {
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_WaterTemple_0022'})
        } else {
            EventCamera.EventMoveCameraToSavePoint({'ReviseMode': 1, 'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': True, 'IsRestoreDoF': False})
        }
    }
}

void IceCavern_WaterSerenade() {
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_SY_Treasurebox', 'FadeInTypeEventEnd': 0})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfWater_KingZora_adult_Talk_Event198'}) {
        Event287:
        SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_MelodyGet_Water', 'FadeInTypeEventEnd': 1})
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfWater_GetWaterSerenade'})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True, 'ChallengeName': 'SageOfWater', 'IsIgnoreCompletedChallenge': False, 'StepName': 'Step05'})
    } else
    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Armor_Adult_Zora', 'Num': 1}) {
        goto Event287
    } else {
        SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_MelodyGet_Water', 'FadeInTypeEventEnd': 1})
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfWater_GetWaterSerenade'})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True, 'ChallengeName': 'SageOfWater', 'IsIgnoreCompletedChallenge': False, 'StepName': 'Step04'})
    }
}

void Ready_Npc_Zora_KingZora_adult_Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfWater_KingZora_adult_Talk_Event198'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/SageOfWater:Near_01'})
    }
}

void KingZora_IrregularTalk() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfWater_KingZora_adult_Talk_Event198'}) {

        call Talk_Nearby()

        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetSwordBigGoron_IsAfter_Step08_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GetSwordBigGoron_Step09_RetryCheck'}) {
                Event151:
                Npc_EventStarter.EventTriggerRequestLookAtTheFront()
                Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfWater:KingZora_Talk_38', 'MaintainPerformanceState': 0})
            }
        } else {
            goto Event151
        }
    } else {

        call Talk_Nearby()

    }
}

void Ready_Npc_Zora_KingZora_adult_Talk() {

    call Get_StoneOfWater.Test_InitTalk_KingZora({'Arg_Turn': 4, 'Arg_Greeting': 4})

    Event279:
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfWater_KingZora_adult_Talk_Event198'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetSwordBigGoron_IsAfter_Step09_Exp'}) {
            Event48:
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.SageOfWater_Ready_Npc_Zora_KingZora_adult_Talk_Event114', 'Index': -1}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.SageOfWater_Ready_Npc_Zora_KingZora_adult_Talk_Event77', 'Index': -1}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.SageOfWater_Ready_Npc_Zora_KingZora_adult_Talk_Event203', 'Index': -1}) {
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.SageOfWater_Ready_Npc_Zora_KingZora_adult_Talk_Event203', 'Index': -1, 'Value': False})
                        Event139:
                        Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfWater:KingZora_Talk_26', 'MaintainPerformanceState': 0})
                        Event43:
                        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetSwordBigGoron_IsAfter_Step08_Exp'}) {
                            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetSwordBigGoron_IsAfter_Step09_Exp'}) {
                                Event68:
                                Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfWater:KingZora_Talk_09', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MaintainPerformanceState': 0})
                                if !Player_Event.EventQueryPlayerIsEquipMask() {
                                    Event258:
                                    Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/SageOfWater:KingZora_Talk_14', 'MaintainPerformanceState': 0})
                                    Event78:
                                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfWater_GetWaterSerenade'}) {
                                        Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfWater:KingZora_Talk_10', 'MaintainPerformanceState': 0})
                                    } else {
                                        Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfWater:KingZora_Talk_11', 'MaintainPerformanceState': 0})
                                    }
                                    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
                                        Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfWater:KingZora_Talk_12', 'OverrideStyle': 8, 'IsOverrideStyle': True, 'MaintainPerformanceState': 0})
                                    }
                                } else
                                if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Adult_GlassTruth'}) {
                                    goto Event258
                                }
                                goto Event78
                            } else {
                                Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfWater:KingZora_Talk_13', 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'MaintainPerformanceState': 0})
                                if !GameSystemActor.EventQueryTalkChoice2() {

                                    call Npc_Zora_KingZora_adult.EyeballFrogFailed()

                                } else
                                goto Event78
                            }
                        } else {
                            goto Event68
                        }
                    } else
                    Event126:
                    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                        Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfWater:KingZora_Talk_08', 'MaintainPerformanceState': 0})
                    } else {
                        goto Event139
                    }
                    goto Event43
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfWater_GetWaterSerenade'}) {
                    Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfWater:KingZora_Talk_30', 'MaintainPerformanceState': 0})
                    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkingL', 'IsWaitEnd': False, 'ClothWarpMode': 0})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
                    Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfWater:KingZora_Talk_31', 'MaintainPerformanceState': 0})
                    Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfWater:KingZora_Talk_27', 'MaintainPerformanceState': 0})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.SageOfWater_Ready_Npc_Zora_KingZora_adult_Talk_Event77', 'Value': True, 'Index': -1})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.SageOfWater_Ready_Npc_Zora_KingZora_adult_Talk_Event203', 'Value': True, 'Index': -1})
                } else
                goto Event126
            } else
            goto Event126
        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetSwordBigGoron_IsAfter_Step08_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GetSwordBigGoron_Step09_RetryCheck'}) {
                goto Event48
            } else {

                call Npc_Zora_KingZora_adult.SubEvent_GetSwordBigGoron_Step09Retry()

            }
        } else
        goto Event48
    } else {

        call Safety_Entry()

    }
}

void Talk_Nearby() {

    call Get_StoneOfWater.Test_InitTalk_KingZora02({'Arg_Turn': 4, 'Arg_Greeting': 4})

    goto Event279
}

void HowToGoToWaterTemple() {

    call NaviEventCommon.InitTalk_NaviPlayerFront({'IsLookAtNavi': True})


    call NaviEventCommon.EventTalk_Navi_WithPlayerTalk({'MessageId': 'EventFlowMsg/SageOfWater:HowToGoToWaterTemple_00'})

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfWater_IsReminded', 'Index': -1, 'Value': True})
}

void KingZora_IsMelted_Ice() {

    call Common.AirStartUp_OnlyStopInAir()

    EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 1, 'AtVectorSetType': 1, 'FovySetType': 1, 'TargetFovy': 0.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    Player_Event.EventTriggerPlayerEventStartWithClimb()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerParticipateEvent()
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Zora_KingZora_PlayerCameraIn', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Zora_KingZora_IrregularTalk', 'Index': -1}) {
            EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor2ActorName': 'Npc_Zora_KingZora_adult', 'AtVectorSetType': 4, 'IsWaitEnd': False, 'MoveTotargetPosType': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'IsPosVectorReferenceActorPosOnce': False, 'MoveTime': 60, 'PosVector': [0.0, 0.0, 0.0], 'FovySetType': 0, 'TargetFovy': 50.0, 'PosVectorSetType': 1, 'Actor1ActorName': '', 'AtVector': [0.0, 1.5, 0.0], 'IsEnableRevertFast': False})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVectorSetType': 1, 'Actor2ActorName': 'Npc_Zora_KingZora_adult', 'PosVector': [0.0, 0.0, 0.0], 'AtVectorSetType': 4, 'IsWaitEnd': False, 'MoveTotargetPosType': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'IsPosVectorReferenceActorPosOnce': False, 'MoveTime': 60, 'AtVector': [0.0, 0.5, 0.0], 'FovySetType': 0, 'TargetFovy': 50.0, 'Actor1ActorName': '', 'IsEnableRevertFast': False})
        }
        Event67:
        Npc_Zora_KingZora_adult.EventExecuteNPCStartFrozen({'IsWaitEnd': False})
        Npc_Zora_KingZora_adult.EventTriggerBecomeSpeaker()

        call InitTalk.Sub_InitFlag_Npc({'Arg_Actor': ActorIdentifier(name="Npc_Zora_KingZora_adult")})

        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageOfWater_KingZora_RedIce_02', 'Value': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
        EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'MoveTime': 0, 'TargetActorName': 'Npc_Zora_KingZora_adult', 'ToleranceDistance': 0.0, 'ToleranceXZAngle': 0.0, 'TargetActorInstanceName': '', 'LookAtVectorXZ': 1, 'LookAtVectorY': 0, 'TargetOffset': [0.0, 2.0, 0.0], 'IdealDistance': 7.0, 'ToleranceYUpwardAngle': 5.0, 'ToleranceYDownwardAngle': 5.0})
        Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
        Player_Event.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 4})

        fork {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Zora_KingZora_IrregularTalk', 'Index': -1}) {
                Player_Event.EventPlayerMoveToAnchor({'AnchorActorName': 'DestinationAnchor', 'MoveSpeed': 0.0, 'DecSpeedDistance': 0.0, 'ApplySlowMove': False, 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsMoveAnchorFrontDir': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'AnchorInstanceName': 'KingZora_IsMelted_Ice_LinkPosition', 'IsWaitEnd': True})
            } else {
                Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'InstanceName': 'KingZora_IsMelted_Ice_LinkPosition02', 'ASCommand': 'EvtWait'})
            }
            Player_Event.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 3, 'ActorName': 'Npc_Zora_KingZora_adult', 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            Npc_Zora_KingZora_adult.EventTriggerNPCEndFrozen()
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
            Npc_Zora_KingZora_adult.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Freeze_Wait_Ed', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 270})
            Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfWater:KingZora_Talk_32', 'MaintainPerformanceState': 0, 'ASName': 'C08-ha!'})
            EventCamera.EventMoveToTargetPosCamera({'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'TargetFovy': 50.0, 'Actor1ActorName': '', 'Actor2ActorName': '', 'CameraCollisionLookAtActor': 1, 'EnableCameraAlpha': True, 'MoveTime': 0, 'IsWaitEnd': True, 'PosVector': [49.261871337890625, 127.78379821777344, 5.526400089263916], 'AtVector': [58.5919189453125, 121.57990264892578, 12.312629699707031], 'IsEnableRevertFast': False})

            fork {
                EventCamera.EventMoveToTargetPosCamera({'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'Actor2ActorName': '', 'CameraCollisionLookAtActor': 1, 'EnableCameraAlpha': True, 'IsWaitEnd': False, 'MoveTime': 1200, 'TargetFovy': 50.0, 'PosVector': [48.84722137451172, 127.78350067138672, 9.855500221252441], 'AtVector': [58.17679977416992, 121.57990264892578, 15.641400337219238], 'IsEnableRevertFast': False})
            } {
                Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfWater:KingZora_Talk_46', 'MaintainPerformanceState': 0, 'IsCloseDialog': False, 'EndDialogOption': 0, 'ASName': 'Act_LookAround_B'})
                Npc_Zora_KingZora_adult.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
                Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfWater:KingZora_Talk_44', 'MaintainPerformanceState': 0})
            }

        }

        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 120, 'TargetFovy': 50.0, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'EnableCameraAlpha': True, 'PosVector': [58.55910110473633, 118.20919799804688, 18.01569938659668], 'AtVector': [62.13130187988281, 120.13490295410156, 12.363309860229492], 'IsEnableRevertFast': False})
        } {
            Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'InstanceName': 'KingZora_IsMelted_Ice_LinkPosition02', 'ASCommand': 'EvtWait'})
            Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'IsNearOffset': False, 'Type': 1, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
            Player_Event.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 3, 'ActorName': 'Npc_Zora_KingZora_adult', 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': False})
        }

        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Event70:
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkingL', 'IsWaitEnd': False, 'ClothWarpMode': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfWater_GetWaterSerenade'}) {
            Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfWater:KingZora_Talk_25', 'MaintainPerformanceState': 0})
            Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfWater:KingZora_Talk_54', 'MaintainPerformanceState': 0})
            Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfWater:KingZora_Talk_55', 'MaintainPerformanceState': 0})
            Event156:

            fork {
                Npc_Zora_KingZora_adult.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Handover'})
            } {
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 55})
            }


            call Dm_SY_GetInEvent.GetInEvent_NotTurn_PosCamera({'ActorName': 'Obj_Armor_Zora', 'Target': 3, 'NpcActorName': 'Npc_Zora_KingZora_adult', 'NpcInstanceName': ''})

            Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfWater:KingZora_Talk_48', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfWater_KingZora_adult_Talk_Event198'})
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfWater_GetWaterSerenade'}) {
                Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfWater:KingZora_Talk_27', 'MaintainPerformanceState': 0})
                if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfWater_IsAfter_Step05_Exp'}) {
                    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True, 'ChallengeName': 'SageOfWater', 'IsIgnoreCompletedChallenge': False, 'StepName': 'Step05'})
                    ChallengeSystemActor.EventTriggerShowChallengeProgressUI({'ChallengeName': 'SageOfWater', 'IsFirstStep': False})
                }
            } else {
                Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfWater:KingZora_Talk_29', 'MaintainPerformanceState': 0})
            }
        } else {
            Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfWater:KingZora_Talk_41', 'MaintainPerformanceState': 0})
            Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfWater:KingZora_Talk_52', 'ASName': 'Act_LookAround', 'MaintainPerformanceState': 0})
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 70})
            Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfWater:KingZora_Talk_53', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.SageOfWater_Ready_Npc_Zora_KingZora_adult_Talk_Event114', 'Value': True, 'Index': -1})
            Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfWater:KingZora_Talk_35', 'MaintainPerformanceState': 0})
            Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfWater:KingZora_Talk_37', 'MaintainPerformanceState': 0})
            goto Event156
        }
    } else {
        goto Event67
    }
}

void KingZoraFrozen_Talk() {
    Player_Event.EventTriggerParticipateEvent()
    EventCamera.EventMoveToTargetPosCamera({'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'Actor1ActorName': 'Npc_Zora_KingZora_adult', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'TargetFovy': 35.0, 'PosVector': [50.58300018310547, 120.5, 18.90399932861328], 'AtVector': [54.4640007019043, 120.5, 17.28499984741211], 'MoveTime': 60, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfWater_GetWaterSerenade'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Zora_KingZora_Frozen_Talk'}) {
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfWater:KingZoraFrozen_Talk_05', 'MaintainPerformanceState': 0})
        } else {
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfWater:KingZoraFrozen_Talk_02', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_Zora_KingZora_Frozen_Talk', 'Value': True})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.SageOfWater_KingZoraFrozen_Talk_Event350', 'Index': -1}) {
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfWater:KingZoraFrozen_Talk_00', 'MaintainPerformanceState': 0})
    } else {
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfWater:KingZoraFrozen_Talk_01', 'MaintainPerformanceState': 0})
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfWater:KingZoraFrozen_Talk_04', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.SageOfWater_KingZoraFrozen_Talk_Event350', 'Value': True, 'Index': -1})
    }
}

void SignboardCheck_FireArrow_LakeHylia_01() {

    call Obj_LakeHrl_StoneTablet_A_01.Talk()

}

void WaterTemple_DarkLink_Movement() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'WaterTemple_DefeatDarkLinkAndGo', 'Index': -1}) {
        Event110:

        call Common_Dungeon_OpenShutterMove.PreMoveCommon()


        call Common_Dungeon_OpenShutterMove.MoveTo({'PreOpenPos': 'PreOpenPos', 'LastPos': 'LastPos', 'PostOpenPos': 'PostOpenPos'})

        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'WaterTemple_SwitchDarkLinkDome', 'Value': False, 'Index': -1})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'WaterTemple_Room23_ResetDeletedRoom', 'Value': False})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'WaterTemple_Room22_Cleared'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'WaterTemple_DefeatDarkLinkAndGo'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'WaterTemple_Room23_DeleteBackRoom'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'WaterTemple_Room23_DeleteFrontRoom', 'Value': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'WaterTemple_Room23_ResetDeletedRoom'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'WaterTemple_Room22_Cleared_Provisional'})
        Event218:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'WaterTemple_Room22_CreateDome'}) {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'WaterTemple_SwitchDarkLinkDome', 'Index': -1, 'Value': True})
        }
        goto Event110
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'WaterTemple_Room23_DeleteBackRoom'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'WaterTemple_Room23_DeleteBackRoom'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'WaterTemple_Room23_DeleteFrontRoom', 'Value': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'WaterTemple_Room23_ResetDeletedRoom'})
        goto Event218
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'WaterTemple_Room23_ResetDeletedRoom', 'Value': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'WaterTemple_Room23_DeleteBackRoom'})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'WaterTemple_SwitchDarkLinkDome', 'Index': -1, 'Value': True})

        call Common_Dungeon_OpenShutterMove.PreMoveCommon()


        call Common_Dungeon_OpenShutterMove.MoveTo({'PreOpenPos': 'PreOpenPos', 'LastPos': 'LastPos', 'PostOpenPos': 'PostOpenPos'})

        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'WaterTemple_SwitchDarkLinkDome', 'Value': False, 'Index': -1})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'WaterTemple_Room23_DeleteFrontRoom'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'WaterTemple_Room23_ResetDeletedRoom', 'Value': False})
    }
}

void WaterTemple_WaterLevelChange_Navi() {
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Npc_Navi.EventTriggerParticipateEvent()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'CameraCollisionLookAtActor': 2, 'CameraCollisionMode': 0, 'TargetFovy': 40.0, 'AtVectorSetType': 4, 'AtVector': [0.0, 0.0, 0.0], 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'Point', 'PosVectorSetType': 4, 'MoveTime': 50, 'PosVector': [-1.0, 0.0, 4.5], 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerBackMoveForAnchor({'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'Point', 'OffsetDist': 0.30000001192092896, 'IsWaitEnd': True})
        Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'Point'})
    }


    fork {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.Dm_WaterTemple_0020'}) {
            Event194:
            Npc_Navi.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/NaviHint:NaviHint_WaterTemple_03'})
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfWater_HaveSearchedTriforcePoint'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.Dm_WaterTemple_0020'}) {
                goto Event194
            } else {
                Npc_Navi.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/NaviHint:NaviHint_WaterTemple_02'})
            }
        } else {
            Npc_Navi.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/NaviHint:NaviHint_WaterTemple_01'})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfWater_HaveSearchedTriforcePoint', 'Index': -1, 'Value': True})
        }
    } {
        Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_Navi', 'InstanceName': '', 'Target': 3})
    }

}

void Safety_Entry() {
    goto Event70
}

void Dm_MelodyGet_WaterAfter() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-46.18000030517578, 111.56999969482422, 30.18000030517578], 'AtVector': [-46.189998626708984, 111.19000244140625, 34.15999984741211], 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerTurnAndLook({'KeepTalkWait': True, 'WorldPos': [-46.220001220703125, 111.10299682617188, 42.529998779296875], 'IsWaitEnd': True, 'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'UseNormalTurn': False, 'IsDoNavi': False, 'SlowTurn': True})
    } {
        Npc_Navi.EventNaviLookAtObject({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    }


    call NaviEventCommon.InitTalk_NaviPlayerFront({'IsLookAtNavi': True})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfWater_KingZora_adult_Talk_Event198'}) {
        Event140:

        call NaviEventCommon.EventTalk_Navi_WithPlayerTalk({'MessageId': 'EventFlowMsg/SageOfWater:NaviRepeat_01_00'})

        Event233:

        call NaviChat.NaviEmotionChange_NoTime({'EmotionType': 0})

        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'MaskEquip', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 2.0, 'CameraResetPolicy': 0})
        ChallengeSystemActor.EventTriggerShowChallengeProgressUI({'ChallengeName': 'SageOfWater', 'IsFirstStep': False})
    } else
    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Armor_Adult_Zora', 'Num': 1}) {
        goto Event140
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_Melody_ForestMinuet'}) {
        Event161:

        call NaviEventCommon.EventTalk_Navi_WithPlayerTalk({'MessageId': 'EventFlowMsg/SageOfWater:NaviRepeat_00_00'})

        goto Event233
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_Melody_FireBolero'}) {
        goto Event161
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_Melody_SpiritRequiem'}) {
        goto Event161
    } else {

        call NaviEventCommon.EventTalk_Navi_WithPlayerTalk({'MessageId': 'EventFlowMsg/SageOfWater:NaviRepeat_00_01'})

    }
    goto Event233
}
