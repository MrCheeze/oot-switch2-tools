-------- EventFlow: Get_StoneOfFire --------

Actor: Npc_Goron_Darunia_Child
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventTriggerChangeEmotion', 'EventPlayAS', 'EventAIScheduleMoveToAnchor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

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
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerPlayerLookAtObject', 'EventPlayerWarpToStarterLinkAnchor', 'EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetPosAndRot', 'EventPlayerTurnAndLook', 'EventPlayerTalk', 'EventTriggerPlayerEventStartWithDrawn', 'EventPlayerUnequip', 'EventPlayerSlowWalkStop', 'EventPlayerPutAway', 'EventPlayerMove', 'EventTriggerSoundDisableSpMode', 'EventTriggerSoundEnableSpMode']
queries: ['EventQueryPlayerIsEquipArmor', 'EventQueryPlayerIsEquipMask', 'EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Enemy_DungeonBoss_Dodongo
entrypoint: None()
actions: ['EventTriggerDeathSignal', 'EventDoNothing', 'EventWarpToTargetPosAndRot', 'EventSetBattlePresentationOnPreState']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventWaitForActorPresence', 'EventTraverseAroundAndWaitCreateActor', 'EventRemoveProjectiles', 'EventRefindRangeGameSafetySection']
queries: ['EventQueryIsRecommendedMelody', 'EventQueryIsDreamWorld', 'EventQueryMelodyTypeForNormal']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle', 'EventSoundReleaseDucking', 'EventSoundRequestDucking', 'EventTriggerStopInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventTriggerRequestCameraShake', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventChangeTemporarilyToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerForceSetMaskTalkFlag', 'EventTriggerForceSetAmiiboMaskTalkFlag', 'EventTriggerChangeEmotion']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAvoidDuplicationRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviRequestBallonMessage', 'EventTalk', 'EventNaviLookAtObject', 'EventWarpToTargetPosAndRot', 'EventNaviWarpToPlayerHomePosition', 'EventWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventProxyRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[01]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTriggerSetDemoPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void DodongoCavernOpne_Npc_Goron_Darunia_Child_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})


    call Mask_Darunia_Message({'Mask_Keaton_Talk': 'EventFlowMsg/Get_StoneOfFire:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Get_StoneOfFire:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Get_StoneOfFire:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Get_StoneOfFire:Mask_04', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Get_StoneOfFire:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Get_StoneOfFire:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Get_StoneOfFire:Mask_103', 'ChangeTheTopic_Talk': 'EventFlowMsg/Get_StoneOfFire:Mask_09'})

    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_Goron_Darunia_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfFire:DodongoCavernOpne_Talk_01', 'MaintainPerformanceState': 0})
        } else {
            Npc_Goron_Darunia_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfFire:DodongoCavernOpne_Talk_02', 'MaintainPerformanceState': 0})
        }
    } else {
        Npc_Goron_Darunia_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfFire:DodongoCavernOpne_Talk_00', 'MaintainPerformanceState': 0})
    }
}

void Get_StoneOfFire_DodongoCavernOpne() {

    call Common.AirStartUp()

    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_DeathMtTrail_0010'})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfFire_IsAfter_DodongoCavernOpne_Exp'}) {
        Npc_Navi.EventNaviRequestBallonMessage({'Index': 89})
    }
}

void Get_StoneOfFire_AppearBoss() {
    if !GameSystemActor.EventQueryIsDreamWorld() {
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'Color': 0, 'Length': 3, 'IsNoPlayAnime': True})
        Player_Event.EventTriggerParticipateEvent()
        ChallengeSystemActor.EventTriggerShowTimerUI()
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DreamWorld_BossAppear'})
        Event226:
        GameSystemActor.EventWaitForActorPresence({'ActorName': 'Enemy_DungeonBoss_Dodongo', 'IsWaitEnd': True, 'InstanceName': '', 'IsActorCreateRequest': True})
        Enemy_DungeonBoss_Dodongo.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -90.0, 'ClothWarpMode': -1, 'Position': [31.34000015258789, 73.38999938964844, -77.58000183105469]})
        if !GameSystemActor.EventQueryIsDreamWorld() {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Sequence_HoldRangeSafetyRequest', 'Value': False})
            GameSystemActor.EventRefindRangeGameSafetySection({'IsWaitEnd': True})
            Event222:
            Enemy_DungeonBoss_Dodongo.EventDoNothing({'IsWaitEnd': True})

            fork {
                Player_Event.EventPlayerWarpToTargetPosAndRot({'YAngle': 90.0, 'ASCommand': 'LockOnWait', 'IsWaitEnd': True, 'UseDemoWait': True, 'ClothWarpMode': 0, 'EnableInAir': False, 'Position': [24.0, 73.39234924316406, -77.52999877929688]})
            } {
                EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EndRecelerateRate': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'MoveTime': 0, 'PosVector': [0.10999999940395355, 1.149999976158142, -3.559999942779541], 'AtVector': [-0.019999999552965164, 1.4800000190734863, 0.10999999940395355], 'StartAccelerateRate': 0.0, 'IsEnableRevertFast': False})
            } {
                Npc_Navi.EventWarpToTargetPosAndRot({'YAngle': 90.0, 'IsWaitEnd': True, 'ClothWarpMode': -1, 'Position': [23.442800521850586, 74.2403793334961, -78.10459899902344]})
            }

            if GameSystemActor.EventQueryIsDreamWorld() {
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'Get_StoneOfFire', 'StepName': 'BossBattle'})
            }
            GameSystemActor.EventRemoveProjectiles({'IsWaitEnd': True})
            Player_Event.EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 4, 'FadeTime': 0.0})
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_DodongoCave_BossIn', 'FadeInTypeEventEnd': 2})
            Enemy_DungeonBoss_Dodongo.EventSetBattlePresentationOnPreState()
            if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {

                call Get_StoneOfForest.BossAppearSkip_Dodongo()

            } else {
                EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'KeepManualModeFrame': 120.0, 'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': True, 'IsKeepWithRelativePos': False})
            }
            if !GameSystemActor.EventQueryIsDreamWorld() {
                ChallengeSystemActor.EventTriggerMiniGameTimerStart()
            }
        } else {
            goto Event222
        }
    } else {
        Player_Event.EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 4, 'FadeTime': 0.0})
        Player_Event.EventTriggerPlayerEventStartWithDrawn()
        Player_Event.EventTriggerParticipateEvent()
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 3})
        if !Player_Event.EventQueryCheckPlayerState({'State': 12}) {
            if Player_Event.EventQueryCheckPlayerState({'State': 10}) {
                Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
            }
            Event186:
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Enemy_DungeonBoss_Dodongo_BossAppear'})
            goto Event226
        } else {
            Player_Event.EventPlayerPutAway({'IsWaitEnd': True})
            goto Event186
        }
    }
}

void Get_StoneOfFire_DefeatBoss() {

    call Get_StoneOfForest.InitDefeatBoss()

    Player_Event.EventTriggerParticipateEvent()
    if !GameSystemActor.EventQueryIsDreamWorld() {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_BossRush'}) {

            call SubEvent_AllBossBattle.BossRushBossStageExitSuccessDodongo()

        } else {
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_DodongoCave_BossOut', 'FadeInTypeEventEnd': 2})

            call SubEvent_AllBossBattle.BossStageExitProcess()

        }
    } else {
        GameSystemActor.EventRemoveProjectiles({'IsWaitEnd': True})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_DodongoCave_BossOut', 'FadeInTypeEventEnd': 2})
        Enemy_DungeonBoss_Dodongo.EventTriggerDeathSignal()
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DodongoCavern_BossGroundChange'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Enemy_DungeonBoss_Dodongo_BossAppear', 'Value': False})
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'UseDemoWait': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'EndPos_Get_StoneOfFire', 'NotChangeRot': False, 'ASCommand': 'EvtWait'})
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1, 'Position': [24.40999984741211, 74.38999938964844, -72.48999786376953]})
        Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsNearOffset': True, 'Type': 2, 'IsWaitEnd': True, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})

        call Common_Camera_Pln.Camera_PlayableAfterBoss()

        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'Get_StoneOfFire', 'StepName': 'EscapeDungeon'})
        GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    }
}

void SariaMelodyPlay_Npc_Goron_Darunia_Child_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

    if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
        Npc_Goron_Darunia_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfFire:PlayOcarina_Talk_00', 'MaintainPerformanceState': 0, 'ASName': 'Act_Badmood_Wait'})
    } else {
        Npc_Goron_Darunia_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfFire:PlayOcarina_Talk_04', 'MaintainPerformanceState': 0, 'ASName': 'Act_Badmood_Wait'})
    }
}

void SariaMelodyPlay_Npc_Goron_Darunia_Child_Near() {
    Npc_Goron_Darunia_Child.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsChallenge': False, 'DisplayFrame': 180, 'MessageID': 'EventFlowMsg/Get_StoneOfFire:PlayOcarina_Near_00'})
}

void Get_StoneOfFire_PlayOcarina() {
    Player_Event.EventTriggerParticipateEvent()
    EventCamera.EventTriggerCameraSavePoint()
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfFire_IsAfter_SariaMelodyPlay_Exp'}) {

        call Dm_SY_Ocarina.PlayOcarinaFree({'MelodyType': 2, 'HasRecommendedMelody': True})

        SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': False, 'IsForceFadeTime': False, 'IsImmediateOnAutoOff': True, 'CommandLife': 0, 'FadeType': 0, 'WaitingResumeInGameBgm': False})
        if GameSystemActor.EventQueryMelodyTypeForNormal() in [0, 1, 2, 3, 4, 5, 12] {
            Event35:
            if !GameSystemActor.EventQueryIsRecommendedMelody() {
                UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_Goron_0025'})
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfFire_IsAfter_SariaMelodyPlay_Exp'}) {
                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [1.0499999523162842, 99.2300033569336, -36.97999954223633], 'AtVector': [-0.09000000357627869, 99.5999984741211, -40.27000045776367], 'TargetFovy': 35.0, 'IsEnableRevertFast': False})

                    call InitTalk.InitTalk_OnEvent({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Arg_Actor': ActorIdentifier(name="Npc_Goron_Darunia_Child"), 'ActorNameA': 'Npc_Goron_Darunia_Child', 'InstanceNameA': ''})

                    Npc_Goron_Darunia_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfFire:PlayOcarina_Talk_01', 'MaintainPerformanceState': 0})
                } else {
                    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_Goron_0030'})
                }
            } else {
                EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_Goron_0028'})
                if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfFire_IsAfter_SariaMelodyPlay_Exp'}) {
                    Npc_Goron_Darunia_Child.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
                    Npc_Goron_Darunia_Child.EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 20.0})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                    Npc_Goron_Darunia_Child.EventAIScheduleMoveToAnchor({'AnchorType': 2, 'IsTurnToAnchorRot': True, 'IsAlignAnchorPos': False, 'IsWaitEnd': True, 'InstanceName': '', 'ASName': '', 'DesiredGear': 1, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
                }
            }
        }
    } else {

        call NpcCommon.NpcCommon_PlayOcarina_BeginningTalk({'Npc_PlayOcarina_IsReactedFlag': 'Get_StoneOfFire_Darunia_PlayOcarina_IsReacted', 'MessageId_IsSecond': 'EventFlowMsg/Get_StoneOfFire:PlayOcarina_Talk_102', 'MessageId_IsFirst': 'EventFlowMsg/Get_StoneOfFire:PlayOcarina_Talk_101', 'IsLookAtPlayer': False, 'ASName': 'Act_Badmood_Wait', 'Arg_Actor': ActorIdentifier(name="Npc_Goron_Darunia_Child"), 'Arg_Turn': 0})

        SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:演奏中SEミュート', 'CommandLife': 2, 'DuckingName2': '', 'DuckingName3': ''})

        call Dm_SY_Ocarina.PlayOcarinaSequence_NpcBeginningTalk({'MelodyType': 2, 'IsNeedMessageDialogOpenAnim': True})

        SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': False, 'IsForceFadeTime': False, 'IsImmediateOnAutoOff': True, 'CommandLife': 0, 'FadeType': 0, 'WaitingResumeInGameBgm': False})
        SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'Dm:演奏中SEミュート', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
        if GameSystemActor.EventQueryMelodyTypeForNormal() in [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12] {
            goto Event35
        }
    }
}

void DeathMtTrailNpc_Npc_Goron_007_Child_Talk() {

    call Npc_Goron_007_Child.Talk()

    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'Get_StoneOfFire', 'StepName': 'GoronCityIn'})
}

void DeathMtTrailNpc_Npc_Goron_007_Child_Near() {

    call Npc_Goron_007_Child.Near()

}

void KakarikoVillageNpc_Npc_Hylia_Soldier_003_Talk() {

    call Npc_Hylia_Soldier_003.Talk()

    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'Get_StoneOfFire', 'StepName': 'KakarikoVillageLetter'})
}

void KakarikoVillageNpc_Npc_Hylia_Soldier_003_Near() {
    Event50:

    call Npc_Hylia_Soldier_003.Near()

}

void Get_StoneOfFire_ArriveCity() {
    if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfFire_IsAfter_GoronCityIn_Exp'}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'Get_StoneOfFire', 'StepName': 'GoronCityDarniaroomNpcTalk01'})
    }
}

void KakarikoVillageLetter_Npc_Hylia_Soldier_003_Talk() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Hylia_Soldier_003_GateOpen', 'Index': -1}) {

        call Npc_Hylia_Soldier_003.GateOpened_Talk()

    } else {

        call Npc_Hylia_Soldier_003.GateClosed_Talk()

    }
}

void GoronCityDarniaroomNpcTalk01_Npc_Goron_005_Child_Talk() {

    call Npc_Goron_005_Child.Talk()

    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'Get_StoneOfFire', 'StepName': 'GoronCityDarniaroomOpen'})
}

void GoronCityDarniaroomNpcTalk01_Npc_Goron_005_Child_Near() {

    call Npc_Goron_005_Child.Near()

}

void GoronCity_PlayZeldasLullaby() {

    call Dm_SY_Ocarina.PlayOcarinaSequence({'MelodyType': 0})

    if !GameSystemActor.EventQueryIsRecommendedMelody() {

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
        } {
            EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'PrevDemoPaletteName': 'Dm_SY_Ocarina_CorrectCam', 'CurrDemoPaletteName': 'Dm_SY_Ocarina_CorrectCam', 'IsWaitEnd': True, 'Frames': 0})
        }

        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'IsZeldaLullabyPlayed_DaruniaEntrance'})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})

        call Common_Camera_Pln.CameraDoF_Default()


        fork {
            EventCamera.EventMoveToTargetPosCamera({'PosVector': [3.5, 100.87000274658203, -24.280000686645508], 'AtVector': [-0.23000000417232513, 99.51000213623047, -28.920000076293945], 'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            EventCamera.EventMoveToTargetPosCamera({'PosVector': [-4.010000228881836, 100.9800033569336, -24.360000610351562], 'AtVector': [-0.23000000417232513, 99.51000213623047, -28.920000076293945], 'TargetFovy': 50.0, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsLinearMove': True, 'IsWaitEnd': False, 'MoveTime': 3000, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {
            Npc_Goron_Darunia_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfFire:PlayOcarina_Talk_06', 'MaintainPerformanceState': 0})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            Player_Event.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'Target': 3, 'IsWaitEnd': True, 'SlowTurn': False, 'ActorName': 'Obj_Goron_SwitchShutter_A_01', 'InstanceName': 'DaruniaEntrance', 'WorldPos': [0.0, 0.0, 0.0], 'UseNormalTurn': False, 'IsDoNavi': False})
        } {

            call Dm_SY_Ocarina.PaletteRelease_ScreenCap()

        } {

            call NaviEventCommon.Navi_followPlayer()

        }


        fork {

            fork {
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 50.0, 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'GoronCityDoor01', 'Actor2InstanceName': 'GoronCityDoor02', 'AtVectorSetType': 3, 'PosVectorSetType': 4, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [0.0, 0.0, -4.5], 'AtVector': [0.0, 0.5, 0.0], 'IsEnableRevertFast': False})
            } {

                call Common_Camera_Pln.CameraDoF_Default()

            }


            fork {
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 50.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'GoronCityDoor01', 'Actor2InstanceName': 'GoronCityDoor02', 'AtVectorSetType': 3, 'PosVectorSetType': 4, 'MoveTime': 1200, 'IsWaitEnd': False, 'IsLinearMove': True, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [0.0, 0.0, -3.5], 'AtVector': [0.0, 0.5, 0.0], 'IsEnableRevertFast': False})
            } {

                call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 1200})

            }

        } {
            Npc_Goron_Darunia_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfFire:PlayOcarina_Talk_07', 'MaintainPerformanceState': 0})
            Npc_Goron_Darunia_Child.EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Act_Badmood', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
            EventProxyRequestActor.EventTriggerSetEventBool({'Bool': True})

            fork {
                Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'InstanceName': 'DaruniaEntrance', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Obj_Goron_SwitchShutter_A_01'})
            } {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
                EventCamera.EventTriggerRequestCameraShake({'Pattern': 11, 'ApplyType': 0, 'LoopEndCount': 6, 'Power': 0.019999999552965164, 'IsRumbleController': True})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
            }

        }

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 127})
        EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'IsRumbleController': False, 'Pattern': 1, 'LoopEndCount': 1, 'Power': 0.20000000298023224})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 2.0})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Goron_005_DontReactToZeldaLullaby'})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfFire_IsAfter_GoronCityDarniaroomOpen_Exp'}) {
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'Get_StoneOfFire', 'StepName': 'GoronCityDarniaTalk'})
        }
    }
}

void AfterMeetDarnia_Near() {

    call Npc_Goron_005_Child.AfterMeetDarnia_Near()

}

void AfterMeetDarnia_Talk() {

    call Npc_Goron_005_Child.AfterMeetDarnia_Talk()

    if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfFire_IsAfter_DarniaRoomKokiriTalk_Exp'}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'Get_StoneOfFire', 'StepName': 'KokiriForestNPCTalk'})
    }
}

void KokiriForestNPCTalk_Npc_Goron_003_Child_Near() {

    call Npc_Goron_003_Child.Near()

}

void KokiriForestNPCTalk_Npc_Goron_003_Child_Talk() {

    call Npc_Goron_003_Child.Talk()

    if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfFire_IsAfter_KokiriForestNPCTalk_Exp'}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'Get_StoneOfFire', 'StepName': 'KokiriForestFire'})
    }
}

void Get_StoneOfFire_MelodyGet_Saria() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfFire_IsAfter_GoronCityDarniaTalk_Exp'}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'Get_StoneOfFire', 'StepName': 'SariaMelodyPlay'})
    }
}

void Get_StoneOfFire_MeetDarnia() {
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})

    fork {
        Player_Event.EventPlayerSlowWalkStop({'IsWaitEnd': True, 'IsSheathed': True})
    } {
        UISystemActor.EventEventFadeOut({'Length': 3, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0})
    }

    Player_Event.EventPlayerUnequip({'IsWaitEnd': False})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_Goron_0020', 'FadeInTypeEventEnd': 2})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'Get_StoneOfFire', 'StepName': 'DarniaRoomKokiriTalk'})
    Player_Event.EventPlayerWarpToTargetPosAndRot({'Position': [-0.15000000596046448, 98.5, -37.0], 'IsWaitEnd': True, 'UseDemoWait': True, 'YAngle': 180.0, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0, 'EnableInAir': False})
    Npc_Navi.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0, 'ClothWarpMode': -1, 'IsWaitEnd': True, 'PositionOffset': [-0.4099999964237213, 0.20000000298023224, -0.17000000178813934]})
    Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsNearOffset': True, 'IsWaitEnd': True, 'Type': 2, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.0, 1.6699999570846558, -3.7899999618530273], 'AtVector': [0.0, 1.3600000143051147, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    ChallengeSystemActor.EventTriggerShowChallengeProgressUI({'IsFirstStep': False, 'ChallengeName': 'Get_StoneOfFire'})
}

void Get_StoneOfFire_DeathMtTrailIn() {
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'Get_StoneOfFire', 'StepName': 'DeathMtTrailNpc'})
}

void Get_StoneOfFire_KakarikoVillageLetter() {
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'Get_StoneOfFire', 'StepName': 'DeathMtTrailIn'})
    ChallengeSystemActor.EventTriggerShowChallengeProgressUI({'IsFirstStep': False, 'ChallengeName': 'Get_StoneOfFire'})
}

void Get_StoneOfFire_GetBombBag() {
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_SY_Treasurebox', 'FadeInTypeEventEnd': 1})
    Npc_Navi.EventNaviRequestBallonMessage({'Index': 495})
}

void Check_DaruniaDoor() {
    EventCamera.EventTriggerCameraSavePoint()
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GoronCity_SwitchShutter_HavePlayedShutterDo'}) {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'LookAtDis': 4.0, 'PosVector': [-1.7699999809265137, 100.30999755859375, -22.969999313354492], 'AtVector': [-0.6700000166893005, 99.9000015258789, -27.579999923706055], 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTime': 60, 'IsEnableRevertFast': False})
        } {
            Player_Event.EventPlayerMove({'IsWaitEnd': True, 'ApplySlowMove': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsInertiaMove': False, 'DecSpeedDistance': 0.0, 'MoveSpeed': 0.5, 'WorldPos': 'PreOpenPos', 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'IsContinueMoveAnimeAfterFinish': False})
            Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'WorldPos': 'LastPos', 'KeepTalkWait': False, 'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': False})
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'GrabMovableObj', 'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 10.0, 'ClothWarpMode': 0})
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'Push', 'IsWaitEnd': False, 'KeepOneTimeAnm': True, 'ForceFadeFrame': 10.0, 'ClothWarpMode': 0})
            EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 95})
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'KeepOneTimeAnm': True, 'ASCommand': 'PrePushWait', 'ForceFadeFrame': 26.0, 'ClothWarpMode': 0})
            EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 10})
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'KeepOneTimeAnm': True, 'ASCommand': 'EvtWait', 'ForceFadeFrame': 16.0, 'ClothWarpMode': 0})
            Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Navi', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        }

        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfFire:NaviTalk_09', 'MaintainPerformanceState': 0})

        call CarpetCam()

        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfFire:NaviTalk_08', 'MaintainPerformanceState': 0})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'AtVectorSetType': 3, 'AtVector': [0.0, 1.0, 0.0], 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'PosVectorSetType': 1, 'MoveTime': 30, 'PosVector': [0.0, -1.0, 0.0], 'IsEnableRevertFast': False})
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 2.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GoronCity_SwitchShutter_HavePlayedShutterDo'})
    } else {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'LookAtDis': 4.0, 'PosVector': [-1.7699999809265137, 100.30999755859375, -22.969999313354492], 'AtVector': [-0.6700000166893005, 99.9000015258789, -27.579999923706055], 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTime': 60, 'IsEnableRevertFast': False})
        } {
            Player_Event.EventPlayerMove({'IsWaitEnd': True, 'ApplySlowMove': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsInertiaMove': False, 'DecSpeedDistance': 0.0, 'MoveSpeed': 0.5, 'WorldPos': 'PreOpenPos', 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'IsContinueMoveAnimeAfterFinish': False})
            Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'WorldPos': 'LastPos', 'KeepTalkWait': False, 'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': False})
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'EvtDoorFailure', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 42})
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'GrabMovableObj', 'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 10.0, 'ClothWarpMode': 0})
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'Push', 'IsWaitEnd': False, 'KeepOneTimeAnm': True, 'ForceFadeFrame': 10.0, 'ClothWarpMode': 0})
            EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 190})
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'KeepOneTimeAnm': True, 'ASCommand': 'PrePushWait', 'ForceFadeFrame': 26.0, 'ClothWarpMode': 0})
            EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 10})
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'KeepOneTimeAnm': True, 'ASCommand': 'EvtWait', 'ForceFadeFrame': 16.0, 'ClothWarpMode': 0})
            Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Navi', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        }

        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfFire:NaviTalk_03', 'MaintainPerformanceState': 0})
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'Target': 3, 'ActorName': 'Obj_Goron_Carpet_A_01', 'InstanceName': 'GoronCity_005'})
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'EvtLookAroundAttention', 'MessageId': 'EventFlowMsg/Get_StoneOfFire:NaviTalk_04', 'IsCloseDialog': True, 'EndDialogOption': 0, 'MaintainPerformanceState': 0})

        call CarpetCam()

        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfFire:NaviTalk_01', 'MaintainPerformanceState': 0})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'AtVectorSetType': 3, 'AtVector': [0.0, 1.0, 0.0], 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'PosVectorSetType': 1, 'MoveTime': 30, 'PosVector': [0.0, -1.0, 0.0], 'IsEnableRevertFast': False})
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 2.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GoronCity_SwitchShutter_HavePlayedShutterDo'})
    }
}

void CarpetCam() {

    fork {

        call NaviEventCommon.NaviMove_Attention_Must({'IsUseDisguiseSpeakerPos': False, 'TargetActorName': 'Obj_Goron_Carpet_A_01', 'TargetInstanceName': 'GoronCity_005', 'TargetOffset': [0.0, 0.27000001072883606, 0.0]})

    } {
        EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 20})
        Player_Event.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'Target': 3, 'UseNormalTurn': False, 'SlowTurn': True, 'IsWaitEnd': True, 'ActorName': 'Obj_Goron_Carpet_A_01', 'InstanceName': 'GoronCity_005', 'WorldPos': [0.0, 0.0, 0.0], 'IsDoNavi': False})
        Player_Event.EventPlayerTalk({'IsWaitEnd': True, 'HelloType': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 28})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-1.0700000524520874, 101.69999694824219, -23.93000030517578], 'AtVector': [-0.33000001311302185, 98.87000274658203, -26.639999389648438], 'LookAtDis': 4.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'TargetFovy': 50.0, 'MoveTime': 90, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }

}

void GoronCity_SecretHole_AppearTreasureBox() {
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()

    call Defeat_Ganon.GimmickTreasureBox_Changed({'CamPosName': 'camPos_hazure', 'AtPosName': 'atPos_hazure', 'AvoidPosName': 'avoidPos_hazure'})

}

void GoronCity_SecretHole_AppearTreasureBox2() {
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()

    call Defeat_Ganon.GimmickTreasureBox_Changed({'CamPosName': 'camPos_atari', 'AtPosName': 'atPos_atari', 'AvoidPosName': 'avoidPos_atari'})

}

void Get_StoneOfFire_ReadStoneTablet() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DodongoCavern_Room01_ReadStoneTablet'})
    Event134:

    call SignboardWood.Talk_ReadableOnlyFront()

}

void Get_StoneOfFire_ReadStoneTablet2() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DodongoCavern_Room01_ReadStoneTablet2'})
    goto Event134
}

void Mask_Darunia_Message() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorName': 'Armor_Child_Mask_Keaton', 'ArmorSlot': 0}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChangeMstxtForActor': False, 'MaintainPerformanceState': 0, 'MessageId': 'Mask_Keaton_Talk', 'ASName': ''})
        Event190:
        Npc_EventStarter.EventTriggerForceSetMaskTalkFlag({'value': True})
        Event40:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'MaintainPerformanceState': 0, 'MessageId': 'ChangeTheTopic_Talk'})
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Skull'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'MaintainPerformanceState': 0, 'MessageId': 'Mask_Skull_Talk', 'ASName': ''})
        goto Event190
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Spooky'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'MaintainPerformanceState': 0, 'MessageId': 'Mask_Spooky_Talk', 'ASName': ''})
        goto Event190
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Bunny'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'MaintainPerformanceState': 0, 'MessageId': 'Mask_Bunny_Talk', 'ASName': ''})
        goto Event190
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Amiibo1'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'MaintainPerformanceState': 0, 'ASName': 'Notice', 'MessageId': 'Mask_Amiibo00_Talk'})
        Npc_EventStarter.EventTriggerForceSetAmiiboMaskTalkFlag({'value': True})
        Npc_EventStarter.EventTriggerChangeEmotion({'EmotionType': 2, 'IsActFaceOnly': False})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'MaintainPerformanceState': 0, 'MessageId': 'ChangeTheTopic_Talk'})
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Amiibo0'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'MaintainPerformanceState': 0, 'MessageId': 'Mask_Amiibo01_Talk', 'ASName': ''})
        Event191:
        Npc_EventStarter.EventTriggerForceSetAmiiboMaskTalkFlag({'value': True})
        goto Event40
    } else
    if !Player_Event.EventQueryPlayerIsEquipMask() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'MaintainPerformanceState': 0, 'MessageId': 'Mask_Amiibo02_Talk', 'ASName': ''})
        goto Event191
    }
}

void KakarikoVillageLetter_Npc_Hylia_Soldier_003_Near() {
    goto Event50
}
