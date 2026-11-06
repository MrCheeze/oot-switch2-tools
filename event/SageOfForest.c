-------- EventFlow: SageOfForest --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: ['EventQueryIsEventSkipedMostRecent']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep', 'EventTriggerMiniGameTimerStart', 'EventTriggerShowTimerUI']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerRequestAutoSave', 'EventWaitForActorPresence', 'EventTraverseAroundAndWaitCreateActor', 'EventRemoveProjectiles', 'EventTriggerAddPreComputedCullingBasePos', 'EventWait', 'EventTriggerResetPlayedNoteAppliedPitch']
queries: ['EventQueryIsRecommendedMelody', 'EventQueryIsDreamWorld', 'EventQueryMelodyTypeForNormal']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventSendEventTalkMessageToPlayerCamera', 'EventChangeTemporarilyToPlayerCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Kokiri_Mido_Adult
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerForceSetRecentTalkFlag', 'EventDisableRecentTalkFlag', 'EventTriggerChangeEmotion', 'EventNpcBlockerEndBlockerAI', 'EventNpcBlockerSetIsStopUpdateTargetPosUntilPlayerMoved', 'EventTriggerKokiriRequestComeCloserFairy', 'EventWaitFinishBlockerAction']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventWarpToTargetActor', 'EventNaviWarpToPlayerHomePosition', 'EventNaviRequestBallonMessage', 'EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayerWarpToStarterLinkAnchor', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerEventStartWithDrawn', 'EventPlayerConversate', 'EventPlayerPlayOcarinaFree', 'EventPlayerSlowWalkStop', 'EventPlayerUnequip', 'EventTriggerPlayerEventStartWithRolling', 'EventPlayerPutAway', 'EventPlayerTurnAndLook', 'EventPlayerWait']
queries: ['EventQueryIsDirToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Obj_ForestTemple_PhantomGanonPainting_A_01[AppearAnchor_00]
entrypoint: None()
actions: ['EventPhantomGanonPaintingStartReplaceTexture']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_GhostPicturePerformer_PhantomGanon[Performer]
entrypoint: None()
actions: ['EventPhantomGanonPerformerStartSnapShot', 'EventTriggerEnemyCommonSetEnableClothParallel']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_GhostPicturePerformer_PhantomGanonHorse[Performer]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerEnemyCommonSetEnableClothParallel']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_DungeonBoss_PhantomGanon
entrypoint: None()
actions: ['EventTriggerDeathSignal', 'EventSetBattlePresentationOnPreState']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_PhantomGanonHorse
entrypoint: None()
actions: ['EventTriggerEnemyCommonSetEnableClothParallel']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Kokiri_Mido_Child[OcarinaPlaying_InitTalk_Blocker(BlockerNpc)]
entrypoint: OcarinaPlaying_InitTalk_Blocker(BlockerNpc)
actions: ['EventWaitFinishBlockerAction', 'EventTriggerBecomeSpeaker', 'EventAIScheduleEndTerror', 'EventNPCTurnToObjectGreeting', 'EventTriggerKokiriRequestComeCloserFairy']
queries: []
params: None

Actor: Npc_EventStarter[StartTalking_DuringPlayerTurn_MidoOnly(NpcActor)]
entrypoint: StartTalking_DuringPlayerTurn_MidoOnly(NpcActor)
actions: ['EventTriggerBecomeSpeaker', 'EventTalk']
queries: []
params: None

void ForestTemple_SageOfForest_StartingElevator() {
    if !GameSystemActor.EventQueryIsDreamWorld() {
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'DreamWorld_CreateWarp'})
    } else {
        Player_Event.EventTriggerPlayerEventStartWithDrawn()
        Player_Event.EventPlayerWait({'IsWaitEnd': True})

        call FocusOnGimmick.SwitchActivation()

        GameSystemActor.EventTriggerAddPreComputedCullingBasePos({'StartPos': [0.23000000417232513, 101.73999786376953, -2.7100000381469727], 'EndPos': [0.23000000417232513, 101.73999786376953, -2.7100000381469727]})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        EventSystemActor.EventTransition({'EventName': 'Dm_ForestTemple_0016', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SageOfForest', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step06_2'})
    }
}

void ForestTemple_SageOfForest_PhantomGanonAppearance() {
    if !GameSystemActor.EventQueryIsDreamWorld() {
        UISystemActor.EventEventFadeOut({'Color': 0, 'IsWaitEnd': False, 'Length': 3, 'IsNoPlayAnime': True})
        ChallengeSystemActor.EventTriggerShowTimerUI()

        call DreamBossStage.Rematch_Start_Common()

        Event73:
        GameSystemActor.EventWaitForActorPresence({'ActorName': 'Enemy_GhostPicturePerformer_PhantomGanon', 'IsActorCreateRequest': False, 'InstanceName': 'Performer', 'IsWaitEnd': True})
        Enemy_GhostPicturePerformer_PhantomGanon[Performer].EventPhantomGanonPerformerStartSnapShot({'IsWaitEnd': True})
        Enemy_GhostPicturePerformer_PhantomGanonHorse[Performer].EventTriggerParticipateEvent()
        Obj_ForestTemple_PhantomGanonPainting_A_01[AppearAnchor_00].EventPhantomGanonPaintingStartReplaceTexture({'IsWaitEnd': True})
        Enemy_GhostPicturePerformer_PhantomGanon[Performer].EventTriggerEnemyCommonSetEnableClothParallel({'IsEnable': True})
        Enemy_GhostPicturePerformer_PhantomGanonHorse[Performer].EventTriggerEnemyCommonSetEnableClothParallel({'IsEnable': True})
        Enemy_PhantomGanonHorse.EventTriggerEnemyCommonSetEnableClothParallel({'IsEnable': True})
        if GameSystemActor.EventQueryIsDreamWorld() {
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SageOfForest', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step08'})
        }

        fork {
            EventCamera.EventMoveToTargetPosCamera({'PosVector': [-8.670000076293945, 75.55000305175781, -67.62000274658203], 'AtVector': [13.739999771118164, 79.18000030517578, -54.52000045776367], 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {
            EventSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
        } {
            Npc_Navi.EventWarpToTargetPosAndRot({'YAngle': 60.0, 'IsWaitEnd': True, 'ClothWarpMode': -1, 'Position': [-6.340000152587891, 76.36000061035156, -65.75]})
        } {
            Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'UseDemoWait': True, 'NotChangeRot': False, 'InstanceName': 'StartPos_SageOfForest', 'ActorName': 'StartPos', 'ASCommand': 'EvtWait'})
        }

        GameSystemActor.EventRemoveProjectiles({'IsWaitEnd': True})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_ForestTemple_BossIn', 'FadeInTypeEventEnd': 2})
        Enemy_DungeonBoss_PhantomGanon.EventSetBattlePresentationOnPreState()
        Enemy_GhostPicturePerformer_PhantomGanon[Performer].EventTriggerEnemyCommonSetEnableClothParallel({'IsEnable': False})
        Enemy_GhostPicturePerformer_PhantomGanonHorse[Performer].EventTriggerEnemyCommonSetEnableClothParallel({'IsEnable': False})
        Enemy_PhantomGanonHorse.EventTriggerEnemyCommonSetEnableClothParallel({'IsEnable': False})
        if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {

            call Get_StoneOfForest.BossAppearSkip_Phantom()

        } else {
            EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
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
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ForestTemple_SageOfForest_BossAppearance'})
        goto Event73
    }
}

void ForestTemple_SageOfForest_PhantomGanonDefeat() {

    call Get_StoneOfForest.InitDefeatBoss()

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'PhantomGanonPaintings_TemporaryDelete', 'Value': True})
    if !GameSystemActor.EventQueryIsDreamWorld() {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_BossRush'}) {

            call SubEvent_AllBossBattle.BossRushBossStageExitSuccessPhantomGanon()

        } else {
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_ForestTemple_BossOut', 'FadeInTypeEventEnd': 2})

            call SubEvent_AllBossBattle.BossStageExitProcess()

        }
    } else {
        GameSystemActor.EventRemoveProjectiles({'IsWaitEnd': True})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_ForestTemple_BossOut', 'FadeInTypeEventEnd': 2})
        Enemy_DungeonBoss_PhantomGanon.EventTriggerDeathSignal()
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'UseDemoWait': True, 'NotChangeRot': False, 'ASCommand': 'EvtWait', 'ActorName': 'DestinationAnchor', 'InstanceName': 'EndPos_SageOfForest'})
        Npc_Navi.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0, 'ClothWarpMode': -1, 'IsWaitEnd': True, 'PositionOffset': [-0.4099999964237213, 0.20000000298023224, -0.17000000178813934]})
        Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsNearOffset': True, 'Type': 2, 'IsWaitEnd': False, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})

        call Common_Camera_Pln.Camera_PlayableAfterBoss()

        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageOfForest_IsBefore_Step08', 'Value': False})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SageOfForest', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step09'})
        GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    }
}

void ForestTemple_SageOfForest_MelodyGet() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_MelodyGet_Forest'})
    GameSystemActor.EventTriggerRequestAutoSave()
}

void ForestTemple_SageOfForest_BlockerMove() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.SageOfForest_ForestTemple_SageOfForest_StopInFrontOfForestTemple_Event24', 'Index': -1}) {
        Npc_Kokiri_Mido_Adult.EventWaitFinishBlockerAction({'IsWaitEnd': True})
        Npc_Kokiri_Mido_Adult.EventTriggerChangeEmotion({'EmotionType': 2, 'IsActFaceOnly': False})
        Npc_Kokiri_Mido_Adult.EventTriggerKokiriRequestComeCloserFairy()

        call NpcCommon.NpcCommon_PlayOcarina_BeginningTalk({'Arg_Turn': 0, 'Npc_PlayOcarina_IsReactedFlag': 'ForestTemple_SageOfForest_Mido_PlayOcarina_IsReacted', 'MessageId_IsFirst': 'EventFlowMsg/SageOfForest:Talk_25', 'MessageId_IsSecond': 'EventFlowMsg/SageOfForest:Talk_26', 'IsLookAtPlayer': True, 'ASName': '', 'Arg_Actor': ActorIdentifier(name="Npc_Kokiri_Mido_Adult")})

        if !Player_Event.EventQueryIsDirToTarget({'ActorName': 'Npc_Kokiri_Mido_Adult', 'AngleThreshold': 20.0, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Target': 3}) {
            Event244:

            call Dm_SY_Ocarina.PlayOcarinaSequence_NpcBeginningTalk({'MelodyType': 2, 'IsNeedMessageDialogOpenAnim': True})

            if GameSystemActor.EventQueryMelodyTypeForNormal() in [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12] {
                if !GameSystemActor.EventQueryIsRecommendedMelody() {
                    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_LostWood_0015', 'FadeInTypeEventEnd': 2})
                    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_LostWood_0021', 'FadeInTypeEventEnd': 2})
                    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_LostWood_0025'})
                    Npc_Kokiri_Mido_Adult.EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'KokiriForest_Npc_Kokiri_Mido_Adult_Blocker'})
                    Npc_Kokiri_Mido_Adult.EventNpcBlockerEndBlockerAI({'IsWaitEnd': True})
                    Npc_Kokiri_Mido_Adult.EventTriggerForceSetRecentTalkFlag({'value': False})
                    Npc_Kokiri_Mido_Adult.EventDisableRecentTalkFlag({'IsWaitEnd': True})
                    GameSystemActor.EventTriggerRequestAutoSave()
                } else {

                    call StartTalking_DuringPlayerTurn_MidoOnly({'NpcMessageID': 'EventFlowMsg/SageOfForest:Talk_27', 'NpcActor': ActorIdentifier(name="Npc_Kokiri_Mido_Adult"), 'ActorName': 'Npc_Kokiri_Mido_Adult', 'InstanceName': ''})

                    Npc_Kokiri_Mido_Adult.EventNpcBlockerSetIsStopUpdateTargetPosUntilPlayerMoved({'IsWaitEnd': True})
                }
            }
        } else {
            Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'Wait', 'ForceFadeFrame': 15.0, 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0})
            GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})

            fork {
                Player_Event.EventPlayerTurnAndLook({'ActorName': 'Npc_Kokiri_Mido_Adult', 'SlowTurn': True, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'UseNormalTurn': False, 'Target': 3, 'IsDoNavi': False})
            } {

                call NaviEventCommon.Navi_ActorWatch({'Target': 3, 'ActorName': 'Npc_Kokiri_Mido_Adult', 'InstanceName': ''})

            }

            goto Event244
        }
    } else {
        GameSystemActor.EventTriggerResetPlayedNoteAppliedPitch()
        Player_Event.EventPlayerPlayOcarinaFree({'IsWaitEnd': False})

        call OcarinaPlaying_InitTalk_Blocker({'Arg_Turn': 4, 'Arg_Greeting': 4, 'BlockerNpc': ActorIdentifier(name="Npc_Kokiri_Mido_Adult")})


        fork {

            call Npc_Kokiri_Mido_Adult.Player_MaskCheck()

        } {
            EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0, 'ASCommand': 'EvtWait'})
            EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
            Player_Event.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 3})
        }


        call Npc_Kokiri_Mido_Adult.SageOfForest_Blocker_Talk_OcarinaPlaying()

        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.SageOfForest_ForestTemple_SageOfForest_StopInFrontOfForestTemple_Event24', 'Value': True, 'Index': -1})
        GameSystemActor.EventTriggerRequestAutoSave()

        call Common_Camera_Pln.CameraDoF_Default()

        goto Event244
    }
}

void TreasureBoxDM_NaviChat_Bow() {
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_SY_Treasurebox'})
    Npc_Navi.EventNaviRequestBallonMessage({'Index': 476})
}

void OcarinaPlaying_InitTalk_Blocker() {
    Npc_Kokiri_Mido_Child[OcarinaPlaying_InitTalk_Blocker(BlockerNpc)].EventWaitFinishBlockerAction({'IsWaitEnd': True})

    fork {
        Npc_Kokiri_Mido_Child[OcarinaPlaying_InitTalk_Blocker(BlockerNpc)].EventTriggerBecomeSpeaker()
    } {

        call InitTalk.SetTalkCamera()

    } {

        call NaviEventCommon.Sub_InitTalkNavi_NPC2({'IsLookAtObject': True, 'LookAtInstanceName': '', 'LookAtTarget': 3, 'LookAtActorName': 'Npc_Kokiri_Mido_Adult'})

    }


    call InitTalk.Sub_InitFlag_Npc({'Arg_Actor': 'BlockerNpc'})

    Npc_Kokiri_Mido_Child[OcarinaPlaying_InitTalk_Blocker(BlockerNpc)].EventAIScheduleEndTerror({'IsWaitEnd': True, 'IsClearLookIK': True})
    Npc_Kokiri_Mido_Child[OcarinaPlaying_InitTalk_Blocker(BlockerNpc)].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'TurnType': 'Arg_Turn', 'GreetType': 'Arg_Greeting'})
    Npc_Kokiri_Mido_Child[OcarinaPlaying_InitTalk_Blocker(BlockerNpc)].EventTriggerKokiriRequestComeCloserFairy()
}

void StartTalking_DuringPlayerTurn_MidoOnly() {
    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'EvtWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

    fork {
        Npc_EventStarter[StartTalking_DuringPlayerTurn_MidoOnly(NpcActor)].EventTriggerBecomeSpeaker()
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 2})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

        fork {
            Npc_EventStarter[StartTalking_DuringPlayerTurn_MidoOnly(NpcActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'NpcMessageID', 'ASName': 'Act_Talk_Blowup'})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            Player_Event.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 3})
        }

    } {

        call Common_Camera_Pln.CameraDoF_Event_Common()

    }

}
