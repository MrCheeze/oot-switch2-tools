-------- EventFlow: Get_StoneOfWater --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: ['EventQueryIsEventSkipedMostRecent']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventReserveBancChange', 'EventWait', 'EventTraverseAroundAndWaitCreateActor', 'EventTriggerControllerRumble', 'EventRemoveProjectiles']
queries: ['EventQueryIsRecommendedMelody', 'EventQueryTalkChoice2', 'EventQueryIsDreamWorld']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep', 'EventTriggerShowChallengeProgressUI']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventTriggerReserveChangeConnectionTimingAfterEvent', 'EventMoveCameraToSavePoint', 'EventBasedOnLookAtCamera', 'EventSendEventTalkMessageToPlayerCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventChangeTemporarilyToPlayerCamera']
queries: ['EventQueryCameraCheckRayCastForMoveToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage']
queries: ['EventQueryHaveTalked', 'EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerPlayerEventStartWithCarry', 'EventPlayerWarpToStarterLinkAnchor', 'EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLook', 'EventDeleteShowItem', 'EventTriggerPlayerLookAtObject', 'EventPlayerMove', 'EventTriggerPlayerEventStartWithDrawn', 'EventPlayerUnequip', 'EventPlayerMoveToAnchor', 'EventPlayerOutBottle', 'EventPlayerDrawnBottleFull', 'EventPlayerSlowWalkStop', 'EventPlayerWarpToTargetPosAndRot', 'EventPlayerStopUpdateSelectedItem', 'EventPlayerStartUpdateSelectedItem', 'EventTriggerSetTimerInvalidAttentionLockOn', 'EventTriggerSetModelLodManual']
queries: ['EventQueryPlayerIsEquipArmor', 'EventQueryPlayerIsEquipMask']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Zora_KingZora_child
entrypoint: None()
actions: ['EventTalk', 'EventDisableRecentTalkFlag', 'EventTriggerForceSetRecentTalkFlag', 'EventTriggerLookAtObject', 'EventTriggerSetModelLodManual']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventEventFadeOut', 'EventTriggerSetDisplayMiniMap']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk', 'EventNaviRequestBallonMessage', 'EventNaviLookAtObject', 'EventNaviMovePosTalkToPlayer', 'EventTriggerParticipateEvent', 'EventNaviFollowPlayer', 'EventWarpToTargetPosAndRot', 'EventNaviWarpToPlayerHomePosition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Zora_Ruto_Child_001[Step1]
entrypoint: None()
actions: ['EventAIScheduleWarpToAnchor', 'EventTriggerParticipateEvent', 'EventPlayAS', 'EventTriggerSetModelLodManual']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerRemoveFromSpecificBottle', 'EventTriggerRemoveFromSelectedBottle']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_DungeonBoss_Barinade
entrypoint: None()
actions: ['EventTriggerDeathSignal', 'EventDoNothing', 'EventWarpToTargetPosAndRot', 'EventTriggerRestartAutoPlayAnm', 'EventSetBattlePresentationOnPreState']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Animal_Fish_Blue
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_Impa_Child[Impa_OutKakariko2]
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBecomeSpeaker', 'EventGoOffstageForUser', 'EventPlayAS', 'EventTriggerParticipateEvent', 'EventTriggerLookAtObject', 'EventAIScheduleWarpToAnchor', 'EventTriggerEmitXLink', 'EventTriggerEmitNpcOrPlayerVoice']
queries: []
params: {'IsWorld': False, 'EventMemberCreateMethod': 2, 'IsBindNearestActor': True, 'IsGrounding': True, 'UseEventModelAnime': 'Work/Model/Event/Dm_HrlField_0020/Dm_HrlField_0020_Npc_Hylia_WU_Impa/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_HrlField_0020_Impa.root.as'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventTriggerSoundStartSceneBgm', 'EventTriggerSoundBeginForbidScreenDucking', 'EventTriggerSoundEndForbidScreenDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DoorShutter_EventStarter
entrypoint: None()
actions: ['EventDoorOpen']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTriggerSetDemoPaletteForFlowchart', 'EventTriggerResetDemoPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_MiddleBoss_BigOcto[MiddleBoss]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventDoNothing', 'EventTriggerRequestDeath', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Weapon_Bottle_Fish
entrypoint: None()
actions: ['EventBottleOutBottle']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Impa_EventWait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Impa_Effect_EvantWait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void StoneOfWater_JabuJabuEat() {
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventPlayerStopUpdateSelectedItem({'IsWaitEnd': True})
    Player_Event.EventPlayerDrawnBottleFull({'IsWaitEnd': True})

    fork {
        PouchSystemActor.EventTriggerRemoveFromSelectedBottle()
        Player_Event.EventPlayerOutBottle({'IsWaitEnd': True})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 74})
        Weapon_Bottle_Fish.EventBottleOutBottle({'ASName': 'CapOff', 'IsWaitEnd': False})
    }

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Get_StoneOfWater_Animal_Fish_Blue'}) {
        Animal_Fish_Blue.EventTriggerParticipateEvent()
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 3})
        Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
        Player_Event.EventPlayerStartUpdateSelectedItem({'IsWaitEnd': False})
        EventSystemActor.EventTransition({'EventName': 'Dm_ZoraFountain_0010', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2})
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GaveFishToJabJab'})
        GameSystemActor.EventReserveBancChange({'NextBanc': 'InsideJabuJabuBelly', 'NextStartPos': 'InsideJabuJabuBelly_FromZoraFountain', 'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'IsStartOnEvent': False, 'FadePattern': 0, 'BootEventName': 'Get_StoneOfWater_ArriveJabuJabuBelly', 'EventStarterName': '', 'IsItemWarp': False})
    }
}

void Step10_Npc_Zora_Ruto_Child_001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !Npc_EventStarter.EventQueryHaveTalked() {
        if !Player_Event.EventQueryPlayerIsEquipMask() {
            Event385:
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 4, 'ChoiceNumber': 2, 'ChoiceDefaultNo': 0, 'IsAnimeDriven': True, 'ChoiceLabel2': 5, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Ruto_Talk_08', 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 4, 'ChoiceNumber': 2, 'ChoiceDefaultNo': 0, 'IsAnimeDriven': True, 'ChoiceLabel2': 5, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Ruto_Talk_09', 'MaintainPerformanceState': 0})
            }
            Event248:
            if !GameSystemActor.EventQueryTalkChoice2() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Ruto_Talk_01', 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'LiftUp_Ruto'})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Ruto_Talk_05', 'ASName': 'Rest', 'MaintainPerformanceState': 0})
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Get_StoneOfWater', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'StepName': 'Step11', 'IsIgnoreChallengeProgressUI': False})
                ChallengeSystemActor.EventTriggerShowChallengeProgressUI({'ChallengeName': 'Get_StoneOfWater', 'IsFirstStep': False})
            } else {
                Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': True, 'ClothWarpMode': 0, 'ASCommand': 'EvtTalkYes'})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Ruto_Talk_03', 'MaintainPerformanceState': 0})
            }
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_GlassTruth'}) {
            goto Event385
        } else
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 4, 'ChoiceNumber': 2, 'ChoiceDefaultNo': 0, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Ruto_Talk_02', 'IsAnimeDriven': True, 'ChoiceLabel2': 5, 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 4, 'ChoiceNumber': 2, 'ChoiceDefaultNo': 0, 'IsAnimeDriven': True, 'ChoiceLabel2': 5, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Ruto_Talk_04', 'MaintainPerformanceState': 0})
        }
        goto Event248
    } else
    if !Player_Event.EventQueryPlayerIsEquipMask() {
        Event377:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Ruto_Talk_10', 'MaintainPerformanceState': 0})
        goto Event248
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_GlassTruth'}) {
        goto Event377
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Ruto_Talk_00', 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceNumber': 2, 'MaintainPerformanceState': 0})
    }
    goto Event248
}

void StoneOfWater_ArriveJabuJabuBelly() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'InsideJabuJabuBelly_Fish_Spawn', 'Index': -1, 'Value': True})
    Animal_Fish_Blue.EventTriggerParticipateEvent()
    Player_Event.EventTriggerParticipateEvent()
    SoundSystemActor.EventTriggerSoundStartSceneBgm({'StartType': 1, 'BgmName': 'BGM_InsideJabuJabuBelly'})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_InsideJabu_Jabu_0000'})
    Player_Event.EventTriggerSetModelLodManual({'LodLevel': 0})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Get_StoneOfWater', 'IsWaitEnd': True, 'StepName': 'Step09', 'IsIgnoreChallengeProgressUI': False, 'IsIgnoreCompletedChallenge': True})
    Npc_Navi.EventNaviRequestBallonMessage({'Index': 102})
    PostProcessingActor.EventNorifyCutChangeForGraphics()
}

void StoneOfWater_MeetRuto() {

    call Common.AirStartUp_OnlyStopInAir()

    Player_Event.EventTriggerParticipateEvent()
    UISystemActor.EventTriggerSetDisplayMiniMap({'IsDisplayMiniMap': False})
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})

    fork {
        Player_Event.EventPlayerSlowWalkStop({'IsWaitEnd': True, 'IsSheathed': True})
    } {
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 3})
    }

    Player_Event.EventPlayerUnequip({'IsWaitEnd': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'InsideJabuJabuBelly_HoleDelete'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'InsideJabuJabuBelly_Room02_RemoveLightRig', 'Value': True})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_InsideJabu_Jabu_0010', 'FadeInTypeEventEnd': 2})
    Npc_Zora_Ruto_Child_001[Step1].EventAIScheduleWarpToAnchor({'AnchorType': 2, 'IsWaitEnd': True, 'InstanceName': '', 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'ClothWarpMode': -1})
    Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'After_MeetRuto', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'ASCommand': 'EvtWait'})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.12999999523162842, 3.0799999237060547, -3.069999933242798], 'AtVector': [0.0, 1.3899999856948853, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    }

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Meet_Ruto_First', 'Index': -1, 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'InsideJabuJabuBelly_HoleOpend'})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Get_StoneOfWater', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'StepName': 'Step10', 'IsIgnoreChallengeProgressUI': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    Npc_Navi.EventWarpToTargetPosAndRot({'Position': [3.9000000953674316, 92.08000183105469, -75.33000183105469], 'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1})
    Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsNearOffset': True, 'IsWaitEnd': True, 'Type': 2, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
}

void StoneOfWater_WaterfallSplit() {
    EventCamera.EventTriggerCameraSavePoint()

    call Dm_SY_Ocarina.PlayOcarinaSequence({'MelodyType': 0})

    if !GameSystemActor.EventQueryIsRecommendedMelody() {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Zorariver_TheWaterfallsplits', 'Index': -1, 'Value': True})
        Npc_Navi.EventNaviRequestBallonMessage({'Index': 98})
        EventSystemActor.EventTransition({'EventName': 'Dm_ZoraRiver_0010', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
        Player_Event.EventTriggerSetTimerInvalidAttentionLockOn({'Frame': 60.0})
    }
}

void Step01_Npc_Zora_KingZora_child_Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Get_StoneOfWater_TalkedKingZora', 'Index': -1}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Near_02'})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Near_01'})
    }
}

void StoneOfWater_GetRutoletter() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Get_StoneOfWater_GetRutoLetter', 'Index': -1, 'Value': True})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfWater_IsAfter_Step03_Exp'}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'ChallengeName': 'Get_StoneOfWater', 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step05_01', 'IsIgnoreCompletedChallenge': True})
    } else {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 4})
    }
    Npc_Navi.EventNaviRequestBallonMessage({'Index': 335})
}

void StoneOfWater_TalkKaepora_ZoraRiver() {
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_ZoraRiver_0000'})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Get_StoneOfWater_MeetImpa', 'Index': -1}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'Get_StoneOfWater', 'StepName': 'Step02', 'IsIgnoreChallengeProgressUI': False})
    }
}

void Step01_Npc_Zora_KingZora_child_Talk() {

    call Test_InitTalk_KingZora({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Get_StoneOfWater_TalkedKingZora', 'Index': -1}) {
        if !Npc_Zora_KingZora_child.EventQueryIsOnRecentTalkFlag() {
            Npc_Zora_KingZora_child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Talk_04', 'MaintainPerformanceState': 0})
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Get_StoneOfWater_GetRutoLetter', 'Index': -1}) {
                Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Talk_05', 'MaintainPerformanceState': 0})
            }
        } else {
            Npc_Zora_KingZora_child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Talk_03', 'MaintainPerformanceState': 0})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
            Npc_Zora_KingZora_child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Talk_06', 'MaintainPerformanceState': 0})
            Npc_Zora_KingZora_child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Talk_04', 'MaintainPerformanceState': 0})
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Get_StoneOfWater_TalkedKingZora', 'Index': -1, 'Value': True})
        Npc_Zora_KingZora_child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Talk_10', 'MaintainPerformanceState': 0})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkingL', 'IsWaitEnd': False, 'ClothWarpMode': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
        Npc_Zora_KingZora_child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Talk_09', 'ChoiceNumber': 1, 'MaintainPerformanceState': 0})
        Npc_Zora_KingZora_child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Talk_27', 'EndDialogOption': 3, 'MaintainPerformanceState': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Npc_Zora_KingZora_child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Talk_17', 'MaintainPerformanceState': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Npc_Zora_KingZora_child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Talk_18', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Get_StoneOfWater_Step01_Npc_Zora_KingZora_child_Talk_Event177', 'Value': True, 'Index': -1})
        ChallengeSystemActor.EventTriggerShowChallengeProgressUI({'ChallengeName': 'Get_StoneOfWater', 'IsFirstStep': False})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_Diving_Cleared', 'Index': -1}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Get_StoneOfWater_GetRutoLetter', 'Index': -1}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Get_StoneOfWater_ReadRutoLetter', 'Index': -1}) {
                    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'ChallengeName': 'Get_StoneOfWater', 'StepName': 'Step06', 'IsIgnoreChallengeProgressUI': False, 'IsIgnoreCompletedChallenge': True})
                } else {
                    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'ChallengeName': 'Get_StoneOfWater', 'IsIgnoreChallengeProgressUI': False, 'IsIgnoreCompletedChallenge': True, 'StepName': 'Step05_01'})
                }
            } else {
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'ChallengeName': 'Get_StoneOfWater', 'IsIgnoreChallengeProgressUI': False, 'IsIgnoreCompletedChallenge': True, 'StepName': 'Step05'})
            }
        } else {
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'ChallengeName': 'Get_StoneOfWater', 'StepName': 'Step04', 'IsIgnoreChallengeProgressUI': False, 'IsIgnoreCompletedChallenge': False})
        }
    }
}

void Step07_Npc_Zora_KingZora_child_Talk() {

    call Test_InitTalk_KingZora({'Arg_Turn': 4, 'Arg_Greeting': 4})

    Event371:
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Zora_KingZora_IrregularTalk'}) {
        Event25:
        Npc_Zora_KingZora_child.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Talk_26', 'EndDialogOption': 3, 'IsCloseDialog': False, 'MaintainPerformanceState': 0})
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfWater_IsAfter_Step07_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.Get_StoneOfWater_JabuJabuEat'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.Get_StoneOfWater_MeetRuto'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Get_StoneOfWater_Step07_Npc_Zora_KingZora_child_Talk_Event93', 'Index': -1})
                && !Npc_Zora_KingZora_child.EventQueryIsOnRecentTalkFlag() {
                    Npc_Zora_KingZora_child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Talk_22', 'MaintainPerformanceState': 0})
                } else {
                    Npc_Zora_KingZora_child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Talk_29', 'MaintainPerformanceState': 0})
                    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkingL', 'IsWaitEnd': False, 'ClothWarpMode': 0})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
                    Npc_Zora_KingZora_child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Talk_23', 'MaintainPerformanceState': 0})
                    Npc_Zora_KingZora_child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Talk_24', 'MaintainPerformanceState': 0})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Get_StoneOfWater_Step07_Npc_Zora_KingZora_child_Talk_Event93', 'Value': True, 'Index': -1})
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Get_StoneOfWater_Step07_Npc_Zora_KingZora_child_Talk_Event143', 'Index': -1})
            && !Npc_Zora_KingZora_child.EventQueryIsOnRecentTalkFlag() {
                Npc_Zora_KingZora_child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Talk_22', 'MaintainPerformanceState': 0})
                Event258:
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Get_StoneOfWater_Step07_Npc_Zora_KingZora_child_Talk_Event143', 'Value': True, 'Index': -1})
            } else {
                Npc_Zora_KingZora_child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Talk_11', 'MaintainPerformanceState': 0})
                Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkingL', 'IsWaitEnd': False, 'ClothWarpMode': 0})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
                Npc_Zora_KingZora_child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Talk_20', 'MaintainPerformanceState': 0})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
                Npc_Zora_KingZora_child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Talk_21', 'MaintainPerformanceState': 0})
                goto Event258
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Get_StoneOfWater_Step07_Npc_Zora_KingZora_child_Talk_Event95', 'Index': -1}) {
            if !Npc_Zora_KingZora_child.EventQueryIsOnRecentTalkFlag() {
                Npc_Zora_KingZora_child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Talk_13', 'MaintainPerformanceState': 0})
            } else {
                Npc_Zora_KingZora_child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Talk_11', 'MaintainPerformanceState': 0})
                Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkingL', 'IsWaitEnd': False, 'ClothWarpMode': 0})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
                Npc_Zora_KingZora_child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Talk_14', 'MaintainPerformanceState': 0})
            }
        } else {
            Npc_Zora_KingZora_child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Talk_11', 'MaintainPerformanceState': 0})
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkingL', 'IsWaitEnd': False, 'ClothWarpMode': 0})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
            Npc_Zora_KingZora_child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Talk_12', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Get_StoneOfWater_Step07_Npc_Zora_KingZora_child_Talk_Event95', 'Value': True, 'Index': -1})
        }
    } else
    if !Npc_Zora_KingZora_child.EventQueryIsOnRecentTalkFlag() {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Get_StoneOfWater_Step07_Npc_Zora_KingZora_child_Talk_Event61', 'Index': -1}) {
            if !Player_Event.EventQueryPlayerIsEquipMask() {
                Event455:
                Npc_Zora_KingZora_child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Talk_15', 'MaintainPerformanceState': 0})
                Event342:

                call IrregularEvent()

            } else
            if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_GlassTruth'}) {
                goto Event455
            } else {
                Npc_Zora_KingZora_child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Talk_08', 'MaintainPerformanceState': 0})
            }
            goto Event342
        } else {
            Npc_Zora_KingZora_child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Talk_07', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Get_StoneOfWater_Step07_Npc_Zora_KingZora_child_Talk_Event61', 'Value': True, 'Index': -1})
            goto Event342
        }
    } else {
        Npc_Zora_KingZora_child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Talk_07', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Get_StoneOfWater_Step07_Npc_Zora_KingZora_child_Talk_Event61', 'Value': True, 'Index': -1})
        goto Event342
    }
}

void Step07_Npc_Zora_KingZora_child_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Near_03'})
}

void StoneOfWater_TalkWithImpa() {
    Npc_Hylia_Impa_Child[Impa_OutKakariko2].EventTriggerParticipateEvent()
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventPlayerSlowWalkStop({'IsWaitEnd': True, 'IsSheathed': False})
    Npc_Hylia_Impa_Child[Impa_OutKakariko2].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})

    call InitTalk.InitTalk_OnEvent_NoCamera({'Arg_Turn': 4, 'FirstGreeting_MesageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Talk_9911', 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_Impa_Child", sub_name="Impa_OutKakariko2"), 'ActorName': 'Npc_Hylia_Impa_Child', 'InstanceName': 'Impa_OutKakariko2'})


    fork {
        Npc_Hylia_Impa_Child[Impa_OutKakariko2].EventTriggerBecomeSpeaker()
        Npc_Hylia_Impa_Child[Impa_OutKakariko2].EventAIScheduleWarpToAnchor({'AnchorType': 22, 'InstanceName': 'StoneOfWater_ImpaPos', 'IsWaitEnd': True, 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'ClothWarpMode': -1})
        Npc_Hylia_Impa_Child[Impa_OutKakariko2].EventTriggerLookAtObject({'Target': 2, 'ActorName': 'Player_Event', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    } {
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Hylia_Impa_Child', 'InstanceName': 'Impa_OutKakariko2', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'UseDemoWait': True, 'ActorName': 'DestinationAnchor', 'NotChangeRot': False, 'IsWaitEnd': True, 'ASCommand': 'EvtWait', 'InstanceName': 'StoneOfWater_PlayerWarpPos'})
        Npc_Navi.EventNaviFollowPlayer({'offset': [0.5, 0.0, 0.0], 'IsHomePosition': False, 'IsNearOffset': False, 'IsWaitEnd': True, 'Speed': -1.0, 'OffsetType': -1})
        Player_Event.EventPlayerMoveToAnchor({'IsWaitEnd': True, 'MoveSpeed': 0.5, 'DecSpeedDistance': 2.0, 'ApplySlowMove': True, 'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'StoneOfWater_PlayerPos', 'FinishASCommand': 'EvtTalk', 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsMoveAnchorFrontDir': False, 'IsInertiaMove': False, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Npc_Hylia_Impa_Child', 'Actor1InstanceName': 'Impa_OutKakariko2', 'PosVector': [0.5099999904632568, 1.559999942779541, 1.3899999856948853], 'AtVector': [0.27000001072883606, 1.5299999713897705, 0.9900000095367432], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

        call TalkWithImpaCamera_PlayerCut({'MoveTime': 180})

    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'StoneOfWater_TalkWithImpa_C01', 'CurrDemoPaletteName': 'StoneOfWater_TalkWithImpa_C01'})
    }

    Npc_Hylia_Impa_Child[Impa_OutKakariko2].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Talk_9902', 'MaintainPerformanceState': 0})

    call TalkWithImpaCamera_ImpaCut()

    Npc_Hylia_Impa_Child[Impa_OutKakariko2].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Talk_9910', 'MaintainPerformanceState': 0})
    Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Talk_9903', 'MaintainPerformanceState': 0})
    EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LookAtDis': -1.0, 'IsWaitEnd': True, 'Actor1ActorName': 'Npc_Hylia_Impa_Child', 'Actor1InstanceName': 'Impa_OutKakariko2', 'PosVector': [0.4099999964237213, 1.4900000095367432, 1.440000057220459], 'AtVector': [0.27000001072883606, 1.5199999809265137, 1.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})

    fork {
        Npc_Hylia_Impa_Child[Impa_OutKakariko2].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Talk_9904', 'MaintainPerformanceState': 0})
        Npc_Hylia_Impa_Child[Impa_OutKakariko2].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Talk_9907', 'MaintainPerformanceState': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LookAtDis': -1.0, 'MoveTime': 600, 'Actor1ActorName': 'Npc_Hylia_Impa_Child', 'Actor1InstanceName': 'Impa_OutKakariko2', 'PosVector': [0.3199999928474426, 1.5099999904632568, 1.149999976158142], 'AtVector': [0.27000001072883606, 1.5199999809265137, 1.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }


    call TalkWithImpaCamera_ImpaCut()

    Npc_Hylia_Impa_Child[Impa_OutKakariko2].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Talk_9908', 'MaintainPerformanceState': 0})

    fork {
        Npc_Hylia_Impa_Child[Impa_OutKakariko2].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'throw_walk', 'IsWaitEnd': False, 'IsAnimeDriven': True})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
    }


    fork {
        Npc_Hylia_Impa_Child[Impa_OutKakariko2].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'throw', 'IsAnimeDriven': True, 'IsWaitEnd': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 87})
    } {
        EventSystemActor[Impa_EventWait].EventWait({'IsWaitEnd': True, 'Frames': 70})

        fork {
            Npc_Hylia_Impa_Child[Impa_OutKakariko2].EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'Dm_HrlField_0020_0016_Sp_00'})
        } {
            EventSystemActor[Impa_EventWait].EventWait({'IsWaitEnd': True, 'Frames': 12})
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Don'})
        }

    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [62.42900085449219, 108.46399688720703, -64.73400115966797], 'AtVector': [59.49800109863281, 108.44499969482422, -63.75299835205078], 'LookAtDis': 3.0999999046325684, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        EventSystemActor[Impa_Effect_EvantWait].EventWait({'IsWaitEnd': True, 'Frames': 2})
        Npc_Hylia_Impa_Child[Impa_OutKakariko2].EventTriggerEmitXLink({'ELinkKey': 'Dm_Get_StoneOfWater_TalkWithImpa_Flash_00', 'SLinkKey': ''})
    }


    fork {
        Npc_Hylia_Impa_Child[Impa_OutKakariko2].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        SoundSystemActor.EventTriggerSoundBeginForbidScreenDucking({'CommandLife': 2})
        UISystemActor.EventEventFadeOut({'Color': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': True, 'Length': 1})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 62})
        UISystemActor.EventEventFadeIn({'Color': 1, 'IsNoPlayAnime': False, 'IsWaitEnd': False, 'Length': 1})
        EventWorldManagerController.EventTriggerResetDemoPaletteForFlowchart({'IsWaitEnd': False})
        SoundSystemActor.EventTriggerSoundEndForbidScreenDucking()
    }

    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'IsAllSlot': True, 'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtLookAroundAttention', 'IsWaitEnd': False, 'ClothWarpMode': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
    Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'IsAllSlot': True, 'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0})
    Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Talk_9906', 'MaintainPerformanceState': 0})

    fork {

        call NaviEventCommon.InitTalk_NaviPlayerFront_NoPlayer()

    } {
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Navi', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    }

    Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Talk_9909', 'MaintainPerformanceState': 0})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'Get_StoneOfWater', 'StepName': 'Step01', 'IsIgnoreChallengeProgressUI': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Get_StoneOfWater_MeetImpa', 'Index': -1, 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Get_StoneOfWater_TalkWithImpa_AiScheduleControl', 'Value': False})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    EventCamera.EventTriggerReserveChangeConnectionTimingAfterEvent({'BasedOnPosDiff': False})
}

void StoneOfWater_ClearDivingGame() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfWater_IsAfter_Step03_Exp'})
    && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfWater_IsAfter_Step03_Impa_Exp'}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'ChallengeName': 'Get_StoneOfWater', 'StepName': 'Step05', 'IsIgnoreChallengeProgressUI': False, 'IsIgnoreCompletedChallenge': True})
    }
}

void StoneOfWater_DiscoveryStone() {

    call Common_Dungeon_OpenShutterMove.MoveToPlusZ_JabuJabu_Octa({'PreOpenPos': 'PreOpenPos', 'PostOpenPos': 'PostOpenPos', 'LastPos': 'LastPos'})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Get_StoneOfWater_EnteredFlowerRuto'})
    && GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Get_StoneOfWater_DiscoveryStone'}) {
        UISystemActor.EventTriggerSetDisplayMiniMap({'IsDisplayMiniMap': False})
        Player_Event.EventTriggerParticipateEvent()
        Player_Event.EventTriggerPlayerEventStartWithCarry()
        EventCamera.EventTriggerCameraSavePoint()
        Npc_Zora_Ruto_Child_001[Step1].EventTriggerSetModelLodManual({'LodLevel': 0})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_InsideJabu_Jabu_0020', 'FadeInTypeEventEnd': 2})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Get_StoneOfWater_DiscoveryStone', 'Index': -1, 'Value': True})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        Npc_Zora_Ruto_Child_001[Step1].EventTriggerParticipateEvent()
        Npc_Zora_Ruto_Child_001[Step1].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Act_Tantrum_Loop'})
        EventCamera.EventMoveCameraToSavePoint({'CollisionInterpolateSkip': True, 'IsWaitEnd': True, 'ReviseMode': 0, 'MoveFrame': 0, 'IsRestoreDoF': False})
    }
}

void StoneOfWater_RutoGetStone() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'LiftUp_Ruto', 'Value': False})
    Player_Event.EventTriggerParticipateEvent()
    Npc_Zora_Ruto_Child_001[Step1].EventTriggerParticipateEvent()
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Get_StoneOfWater_BigOctoAppear'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    Enemy_MiddleBoss_BigOcto[MiddleBoss].EventWarpToTargetPosAndRot({'Position': [-0.5440000295639038, 125.08100128173828, -89.7249984741211], 'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1})
    Enemy_MiddleBoss_BigOcto[MiddleBoss].EventDoNothing({'IsWaitEnd': True})
    GameSystemActor.EventRemoveProjectiles({'IsWaitEnd': True})
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Npc_Zora_Ruto_Child_001[Step1].EventTriggerSetModelLodManual({'LodLevel': 0})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_InsideJabu_Jabu_0030', 'FadeInTypeEventEnd': 2})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Get_StoneOfWater', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'StepName': 'Step12', 'IsIgnoreChallengeProgressUI': False})
    Enemy_MiddleBoss_BigOcto[MiddleBoss].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'ClothWarpMode': -1, 'Position': [-38.4630012512207, 84.88999938964844, -90.4469985961914], 'YAngle': 25.12969970703125})
}

void StoneOfWater_BossAppear() {
    Player_Event.EventTriggerParticipateEvent()
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfWater_IsAfter_Step13_01_Exp'}) {

        call Common_Dungeon_OpenShutterMove.MoveToPlusZ_JabuJabu({'PreOpenPos': 'PreOpenPos', 'LastPos': 'LastPos', 'PostOpenPos': 'PostOpenPos'})

    } else {

        call Common_Dungeon_OpenShutterMove.PreMoveCommon_Boss()

        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'CameraMinusZ', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'MoveTime': 60, 'PosVector': [0.0, 1.7999999523162842, 5.0], 'AtVector': [0.0, 1.7999999523162842, -0.5], 'IsWaitEnd': False, 'IsEnableRevertFast': False})
        Player_Event.EventPlayerMove({'IsWaitEnd': True, 'MoveSpeed': 1.0, 'DecSpeedDistance': 1.0, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsInertiaMove': False, 'ApplySlowMove': False, 'IsContinueMoveAnimeAfterFinish': False, 'WorldPos': 'PreOpenPos'})
        Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'PosOffset': [0.0, 1.0, 0.0], 'Target': 0, 'ActorName': '', 'InstanceName': '', 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'TurnFaceControlType': 0, 'UseNormalTurn': False, 'WorldPos': 'LastPos', 'IsDoNavi': False})

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'EvtDoorJabu', 'ClothWarpMode': 0})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 18})
            DoorShutter_EventStarter.EventDoorOpen({'IsWaitEnd': False})
        }

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 75})

        fork {
            Player_Event.EventPlayerMove({'DecSpeedDistance': 1.0, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'WorldPos': 'LastPos', 'IsSheathed': False, 'IsWaitEnd': False, 'MoveSpeed': 0.20000000298023224, 'IsInertiaMove': False, 'ApplySlowMove': False, 'IsContinueMoveAnimeAfterFinish': False})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
        }

        UISystemActor.EventEventFadeOut({'IsNoPlayAnime': False, 'Color': 0, 'Length': 1, 'IsWaitEnd': True})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Barrinade_ChageEnvPallet', 'Value': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Barrinade_doorFlag'})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Get_StoneOfWater', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step13_01'})
        Event410:

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 180})
        } {
            Enemy_DungeonBoss_Barinade.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1, 'Position': [42.27000045776367, 100.41000366210938, -112.0999984741211]})
            Enemy_DungeonBoss_Barinade.EventDoNothing({'IsWaitEnd': True})
            Player_Event.EventPlayerWarpToTargetPosAndRot({'YAngle': 180.0, 'ASCommand': 'LockOnWait', 'IsWaitEnd': True, 'UseDemoWait': True, 'ClothWarpMode': 0, 'EnableInAir': False, 'Position': [42.38999938964844, 101.9000015258789, -98.12999725341797]})
            Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'ClothWarpMode': -1, 'YAngle': 180.0, 'Position': [41.93486022949219, 102.87999725341797, -98.27999877929688]})
            EventCamera.EventMoveToTargetPosCamera({'PosVector': [42.43000030517578, 102.94999694824219, -96.08999633789062], 'AtVector': [42.41999816894531, 102.95999908447266, -97.08999633789062], 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        }

        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_InsideJabu_Jabu_BossIn', 'FadeInTypeEventEnd': 2})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Barrinade_doorFlag', 'Value': False})
        Enemy_DungeonBoss_Barinade.EventSetBattlePresentationOnPreState()
        Enemy_DungeonBoss_Barinade.EventTriggerRestartAutoPlayAnm()
        if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {

            call Get_StoneOfForest.BossAppearSkip_Barinade()

        } else {
            EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
        }
    }
}

void StoneOfWater_DestroyBoss() {

    call Get_StoneOfForest.InitDefeatBoss()

    Player_Event.EventTriggerParticipateEvent()
    if !GameSystemActor.EventQueryIsDreamWorld() {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_BossRush'}) {

            call SubEvent_AllBossBattle.BossRushBossStageExitSuccessBarinade()

        } else {
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_InsideJabu_Jabu_BossOut', 'FadeInTypeEventEnd': 2})

            call SubEvent_AllBossBattle.BossStageExitProcess()

        }
    } else {
        GameSystemActor.EventRemoveProjectiles({'IsWaitEnd': True})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_InsideJabu_Jabu_BossOut', 'FadeInTypeEventEnd': 2})
        Enemy_DungeonBoss_Barinade.EventTriggerDeathSignal()
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'UseDemoWait': True, 'NotChangeRot': False, 'InstanceName': 'BossDefeat', 'ActorName': 'DestinationAnchor', 'ASCommand': 'EvtWait'})
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1, 'Position': [42.88999938964844, 102.86000061035156, -104.16000366210938]})
        Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsNearOffset': True, 'IsWaitEnd': True, 'Type': 1, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})

        call Common_Camera_Pln.Camera_PlayableAfterBoss()

        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Get_StoneOfWater', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'StepName': 'Step14', 'IsIgnoreChallengeProgressUI': False})
        GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
        Npc_Navi.EventNaviRequestBallonMessage({'Index': 104})
    }
}

void Test_InitTalk_KingZora() {

    call InitTalk.Sub_InitTalk_Common_Settings({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Arg_Actor': ActorIdentifier(name="Npc_EventStarter")})


    call KingZoraCamera()

}

void StoneOfWater_UseRutoletter() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Get_StoneOfWater_ReadRutoLetter'})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfWater_IsAfter_Step03_Exp'}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'ChallengeName': 'Get_StoneOfWater', 'StepName': 'Step06', 'IsIgnoreChallengeProgressUI': False, 'IsIgnoreCompletedChallenge': True})
        Npc_Navi.EventNaviRequestBallonMessage({'Index': 100})
        ChallengeSystemActor.EventTriggerShowChallengeProgressUI({'ChallengeName': 'Get_StoneOfWater', 'IsFirstStep': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Get_StoneOfWater_TalkedZoraAboutRutoLetter'})
    }
}

void IrregularTalk() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfWater_IsAfter_Step06_Exp'}) {

        call Talk_Nearby_Emergency()

    } else {

        call Test_InitTalk_KingZora01({'Arg_Turn': 4, 'Arg_Greeting': 4})

        if !Npc_Zora_KingZora_child.EventQueryIsOnRecentTalkFlag() {
            Npc_Zora_KingZora_child.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            Npc_Zora_KingZora_child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_child:Talk_103', 'MaintainPerformanceState': 0})
        } else {
            Npc_Zora_KingZora_child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_child:Talk_105', 'MaintainPerformanceState': 0})
            Npc_Zora_KingZora_child.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
            Npc_Zora_KingZora_child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_child:Talk_100', 'MaintainPerformanceState': 0})
        }
    }
}

void StoneOfWater_ElevatedFloor() {
    Player_Event.EventTriggerParticipateEvent()
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'InsidejaubjabuBelly_gimic_GetoffLift', 'Index': -1})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    EventCamera.EventMoveToTargetPosCamera({'IsIgnorePosVectorReferenceActorRot': True, 'AtVectorSetType': 4, 'PosVectorSetType': 3, 'IsWaitEnd': True, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'DestinationAnchor', 'AtVector': [0.0, 2.0, 0.0], 'PosVector': [0.0, 2.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': True, 'Actor1InstanceName': 'ElevatedFloor', 'Actor2ActorName': 'Player_Event', 'Actor2InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 1, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 240})
}

void StoneOfWater_ShowLetter() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Zora_KingZora_IrregularTalk'}) {
        Npc_Zora_KingZora_child.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})

        call Npc_Zora_KingZora_adult.ShowItem_KingZoraOnly({'NpcActor': ActorIdentifier(name="Npc_Zora_KingZora_child"), 'ActorName': 'Npc_Zora_KingZora_child', 'InstanceName': ''})


        call ShowItem.ShowItemSuccess_NoCamera_BottleItem({'BottleItem': 5, 'BoolValue': True})

        Npc_Zora_KingZora_child.EventDisableRecentTalkFlag({'IsWaitEnd': True})
        if !Npc_Zora_KingZora_child.EventQueryIsOnRecentTalkFlag() {
            Npc_Zora_KingZora_child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_ShowRutoLetterBySide_01', 'MaintainPerformanceState': 0})
            Event470:

            call NpcCommon.ShowItem_Close()

        } else {
            Npc_Zora_KingZora_child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_ShowRutoLetterBySide_00', 'MaintainPerformanceState': 0})
            Npc_Zora_KingZora_child.EventTriggerForceSetRecentTalkFlag({'value': True})
            goto Event470
        }
    } else {
        Npc_Zora_KingZora_child.EventTriggerSetModelLodManual({'LodLevel': 0})

        call ShowItem.ShowItemSuccess_NoCamera_BottleItem({'BottleItem': 5, 'BoolValue': True})

        EventSystemActor.EventTransition({'EventName': 'Dm_Zora_0010', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
        Player_Event.EventDeleteShowItem({'IsWaitEnd': True, 'IsFadeOut': False, 'IsScaleOut': False, 'ChangeVisibleOffWithRequestDelete': False})
        PouchSystemActor.EventTriggerRemoveFromSpecificBottle({'Item': 5})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'Get_StoneOfWater', 'StepName': 'Step07', 'IsIgnoreChallengeProgressUI': False})
        ChallengeSystemActor.EventTriggerShowChallengeProgressUI({'ChallengeName': 'Get_StoneOfWater', 'IsFirstStep': False})
    }
}

void Talk_Nearby_Emergency() {

    call Test_InitTalk_KingZora02({'Arg_Turn': 4, 'Arg_Greeting': 4})

    goto Event371
}

void IrregularEvent() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Zora_KingZora_IrregularTalk'}) {
        goto Event25
    }
}

void Test_InitTalk_KingZora01() {

    fork {

        call InitTalk.Sub_InitTalk_Common_Settings({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Arg_Actor': ActorIdentifier(name="Npc_EventStarter")})

    } {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Sequence_IsChildhood'}) {
            if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'Npc_Zora_KingZora_child', 'VectorSetType': 3, 'Vector': [6.880000114440918, 1.6299999952316284, 6.099999904632568], 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False}) {
                EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Npc_Zora_KingZora_child', 'PosVector': [6.880000114440918, 1.6299999952316284, 6.099999904632568], 'AtVector': [2.690000057220459, 1.6799999475479126, 1.590000033378601], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsWaitEnd': False, 'MoveTime': 0, 'IsEnableRevertFast': False})
            } else {
                EventCamera.EventMoveToTargetPosCamera({'MoveTime': 60, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Npc_Zora_KingZora_child', 'PosVector': [6.880000114440918, 1.6299999952316284, 6.099999904632568], 'AtVector': [2.690000057220459, 1.6799999475479126, 1.590000033378601], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsWaitEnd': False, 'IsEnableRevertFast': False})
            }
        } else
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'VectorSetType': 3, 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'ActorName': 'Npc_Zora_KingZora_adult', 'Vector': [4.630000114440918, 3.25, 3.5899999141693115]}) {
            EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [4.630000114440918, 3.25, 3.5899999141693115], 'AtVector': [2.5199999809265137, 2.1700000762939453, -0.25], 'TargetFovy': 59.72999954223633, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsWaitEnd': False, 'Actor1ActorName': 'Npc_Zora_KingZora_adult', 'MoveTime': 0, 'IsEnableRevertFast': False})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'MoveTime': 60, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [4.630000114440918, 3.25, 3.5899999141693115], 'AtVector': [2.5199999809265137, 2.1700000762939453, -0.25], 'TargetFovy': 59.72999954223633, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsWaitEnd': False, 'Actor1ActorName': 'Npc_Zora_KingZora_adult', 'IsEnableRevertFast': False})
        }
    }

}

void Test_InitTalk_KingZora02() {

    fork {

        call InitTalk.Sub_InitTalk_Common_Settings({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Arg_Actor': ActorIdentifier(name="Npc_EventStarter")})

    } {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Sequence_IsChildhood'}) {
            if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'Npc_Zora_KingZora_child', 'VectorSetType': 3, 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [7.46999979019165, 3.2899999618530273, 6.809999942779541]}) {
                EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Npc_Zora_KingZora_child', 'PosVector': [7.46999979019165, 3.2899999618530273, 6.809999942779541], 'AtVector': [4.159999847412109, 1.9199999570846558, 1.8600000143051147], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsWaitEnd': False, 'MoveTime': 0, 'IsEnableRevertFast': False})
            } else {
                EventCamera.EventMoveToTargetPosCamera({'MoveTime': 60, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Npc_Zora_KingZora_child', 'PosVector': [7.46999979019165, 3.2899999618530273, 6.809999942779541], 'AtVector': [4.159999847412109, 1.9199999570846558, 1.8600000143051147], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsWaitEnd': False, 'IsEnableRevertFast': False})
            }
        } else
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'VectorSetType': 3, 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'ActorName': 'Npc_Zora_KingZora_adult', 'Vector': [4.630000114440918, 3.25, 3.5899999141693115]}) {
            EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Npc_Zora_KingZora_adult', 'PosVector': [4.630000114440918, 3.25, 3.5899999141693115], 'AtVector': [2.5199999809265137, 2.1700000762939453, -0.25], 'TargetFovy': 59.72999954223633, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsWaitEnd': False, 'MoveTime': 0, 'IsEnableRevertFast': False})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'MoveTime': 60, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Npc_Zora_KingZora_adult', 'PosVector': [4.630000114440918, 3.25, 3.5899999141693115], 'AtVector': [2.5199999809265137, 2.1700000762939453, -0.25], 'TargetFovy': 59.72999954223633, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsWaitEnd': False, 'IsEnableRevertFast': False})
        }
    }

}

void StoneOfWater_ElevatedFloor_NaviTalk() {

    call Common.AirStartUp()

    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Npc_Navi.EventTriggerParticipateEvent()
    Enemy_MiddleBoss_BigOcto[MiddleBoss].EventTriggerParticipateEvent()
    Enemy_MiddleBoss_BigOcto[MiddleBoss].EventDoNothing({'IsWaitEnd': True})
    Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Enemy_MiddleBoss_BigOcto', 'InstanceName': 'MiddleBoss', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 130})
    Npc_Navi.EventNaviLookAtObject({'WorldPos': [-31.639999389648438, 86.18000030517578, -92.95999908447266], 'IsWaitEnd': True, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'InsideJabuJabuBelly_MiddleBoss_BigOcto_NormalRotation', 'Index': -1}) {
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'Enemy_MiddleBoss_BigOcto', 'ActorInstanceName': 'MiddleBoss', 'VectorSetType': 3, 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [4.0, 1.600000023841858, -7.0]}) {
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Enemy_MiddleBoss_BigOcto', 'Actor1InstanceName': 'MiddleBoss', 'PosVectorSetType': 3, 'IsWaitEnd': True, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': True, 'TargetFovy': 50.0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'Actor2InstanceName': '', 'AtVectorSetType': 3, 'Actor2ActorName': '', 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'MoveTotargetPosType': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'AtVector': [0.0, 2.0, 0.0], 'PosVector': [4.0, 1.600000023841858, -7.0], 'IsEnableRevertFast': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 240})
            Event390:
            EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'LookAtVectorXZ': 1, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'TargetActorInstanceName': 'ElevatorCamera', 'LookAtVectorY': 1, 'ToleranceYDownwardAngle': 5.0, 'ToleranceXZAngle': 0.0, 'IdealDistance': 1.2999999523162842, 'IsLinearMove': False, 'MoveTime': 0, 'TargetOffset': [0.0, 0.699999988079071, 0.0], 'ToleranceYUpwardAngle': 5.0})
            Enemy_MiddleBoss_BigOcto[MiddleBoss].EventTriggerRequestDeath({'DeathReason': 0})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            EventRequestActor.EventTriggerSetEventBool({'Bool': True})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'ViewPoint', 'IgnoreTargetPosMove': True, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'UseNormalTurn': False, 'SlowTurn': True, 'PosOffset': [0.0, -3.0, 0.0], 'TurnFaceControlType': 1, 'IsDoNavi': False})
            Npc_Navi.EventNaviMovePosTalkToPlayer({'ASCommand': '', 'IsUseDisguiseSpeakerPos': False, 'IsTurnLooking': False, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'DistPassThrough': 0.0, 'IsWaitEnd': True, 'MoveSpeed': 5.0, 'MinimumSpeed': 5.0})
            Npc_Navi.EventTalk({'MessageId': 'EventFlowMsg/Get_StoneOfWater:ElevatorTalk_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
            EventCamera.EventSendEventTalkMessageToPlayerCamera({'EventTalkCameraType': 1, 'IsWaitEnd': False})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
            Npc_Navi.EventTalk({'MessageId': 'EventFlowMsg/Get_StoneOfWater:ElevatorTalk_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 1.0})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Enemy_MiddleBoss_BigOcto', 'Actor1InstanceName': 'MiddleBoss', 'PosVectorSetType': 3, 'IsWaitEnd': True, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': True, 'TargetFovy': 50.0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'Actor2InstanceName': '', 'AtVectorSetType': 3, 'Actor2ActorName': '', 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'MoveTotargetPosType': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'MoveTime': 60, 'AtVector': [0.0, 2.0, 0.0], 'PosVector': [4.0, 1.600000023841858, -7.0], 'IsEnableRevertFast': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 180})
            goto Event390
        }
    } else
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'Enemy_MiddleBoss_BigOcto', 'ActorInstanceName': 'MiddleBoss', 'VectorSetType': 3, 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [-4.0, 1.600000023841858, -7.0]}) {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Enemy_MiddleBoss_BigOcto', 'Actor1InstanceName': 'MiddleBoss', 'PosVectorSetType': 3, 'IsWaitEnd': True, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': True, 'TargetFovy': 50.0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 60, 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'Actor2InstanceName': '', 'AtVectorSetType': 3, 'Actor2ActorName': '', 'MoveTotargetPosType': 1, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnorePosVectorReferenceActorRot': False, 'AtVector': [0.0, 2.0, 0.0], 'PosVector': [-4.0, 1.600000023841858, -7.0], 'IsEnableRevertFast': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 240})
        goto Event390
    } else {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Enemy_MiddleBoss_BigOcto', 'Actor1InstanceName': 'MiddleBoss', 'PosVectorSetType': 3, 'IsWaitEnd': True, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': True, 'TargetFovy': 50.0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 60, 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'Actor2InstanceName': '', 'AtVectorSetType': 3, 'Actor2ActorName': '', 'MoveTotargetPosType': 1, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnorePosVectorReferenceActorRot': False, 'AtVector': [0.0, 2.0, 0.0], 'PosVector': [-4.0, 1.600000023841858, -7.0], 'IsEnableRevertFast': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 180})
        goto Event390
    }
}

void TalkWithImpaCamera_ImpaCut() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1ActorName': 'Npc_Hylia_Impa_Child', 'Actor1InstanceName': 'Impa_OutKakariko2', 'PosVector': [2.950000047683716, 2.0899999141693115, -1.1299999952316284], 'AtVector': [0.09000000357627869, 0.9200000166893005, 1.090000033378601], 'TargetFovy': 37.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
}

void TalkWithImpaCamera_PlayerCut() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 'MoveTime', 'Actor1ActorName': 'Npc_Hylia_Impa_Child', 'Actor1InstanceName': 'Impa_OutKakariko2', 'PosVector': [1.6200000047683716, 0.25999999046325684, 3.7300000190734863], 'AtVector': [0.10000000149011612, 0.8199999928474426, 1.5199999809265137], 'TargetFovy': 37.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
}

void fromDream() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Barrinade_ChageEnvPallet', 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Barrinade_doorFlag'})

    call DreamBossStage.Rematch_Start_Common()

    goto Event410
}

void KingZoraCamera() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HavePlayedEvent.Dm_InsideJabu_Jabu_0050', 'Index': -1})
    && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Sequence_IsChildhood'}) {
        EventCamera.EventMoveToTargetPosCamera({'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'ViewPoint', 'Actor2InstanceName': 'TargetPoint', 'AtVectorSetType': 4, 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'IsWaitEnd': False, 'MoveTime': 45, 'IsEnableRevertFast': False})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_KingZora_Near'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Sequence_IsChildhood'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_KingZora_Right'}) {
                EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsPosVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Player_Event', 'PosVector': [-1.840000033378601, 0.28999999165534973, -1.2599999904632568], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor2ActorName': '', 'EnableCameraAlpha': True, 'IsWaitEnd': False, 'MoveTime': 45, 'AtVector': [1.0, 2.799999952316284, 3.0], 'IsEnableRevertFast': False})
            } else {
                EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsPosVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Player_Event', 'PosVector': [-1.840000033378601, 0.28999999165534973, -1.2599999904632568], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor2ActorName': '', 'EnableCameraAlpha': True, 'IsWaitEnd': False, 'MoveTime': 45, 'AtVector': [1.0, 3.0999999046325684, 3.0], 'IsEnableRevertFast': False})
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_KingZora_Right'}) {
            EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsPosVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor2ActorName': '', 'EnableCameraAlpha': True, 'IsWaitEnd': False, 'MoveTime': 45, 'TargetFovy': 50.0, 'PosVector': [-1.840000033378601, 0.5, -1.2599999904632568], 'AtVector': [1.0, 2.5999999046325684, 3.0], 'IsEnableRevertFast': False})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsPosVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor2ActorName': '', 'EnableCameraAlpha': True, 'IsWaitEnd': False, 'MoveTime': 45, 'TargetFovy': 50.0, 'PosVector': [-1.840000033378601, 0.5, -1.2599999904632568], 'AtVector': [1.0, 2.9000000953674316, 3.0], 'IsEnableRevertFast': False})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_KingZora_Far'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Sequence_IsChildhood'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_KingZora_Right'}) {
                EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsWaitEnd': False, 'MoveTime': 45, 'PosVector': [-1.840000033378601, 0.4000000059604645, -1.0800000429153442], 'AtVector': [1.0800000429153442, 2.0, 3.0], 'IsEnableRevertFast': False})
            } else {
                EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsWaitEnd': False, 'MoveTime': 45, 'PosVector': [-1.840000033378601, 0.4000000059604645, -1.0800000429153442], 'AtVector': [1.0800000429153442, 2.0999999046325684, 3.0], 'IsEnableRevertFast': False})
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_KingZora_Right'}) {
            EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsWaitEnd': False, 'MoveTime': 45, 'PosVector': [-1.840000033378601, 0.6000000238418579, -1.0800000429153442], 'AtVector': [1.0800000429153442, 2.200000047683716, 3.0], 'IsEnableRevertFast': False})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsWaitEnd': False, 'MoveTime': 45, 'PosVector': [-1.840000033378601, 0.6000000238418579, -1.0800000429153442], 'AtVector': [1.0800000429153442, 2.3499999046325684, 3.0], 'IsEnableRevertFast': False})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Sequence_IsChildhood'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_KingZora_Right'}) {
            EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsWaitEnd': False, 'MoveTime': 45, 'AtVector': [1.0800000429153442, 2.5999999046325684, 3.0], 'PosVector': [-1.840000033378601, 0.4000000059604645, -1.0800000429153442], 'IsEnableRevertFast': False})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsWaitEnd': False, 'MoveTime': 45, 'PosVector': [-1.840000033378601, 0.4000000059604645, -1.0800000429153442], 'AtVector': [1.0800000429153442, 2.700000047683716, 3.0], 'IsEnableRevertFast': False})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_KingZora_Right'}) {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsWaitEnd': False, 'MoveTime': 45, 'PosVector': [-1.840000033378601, 0.6000000238418579, -1.0800000429153442], 'AtVector': [1.0800000429153442, 2.4000000953674316, 3.0], 'IsEnableRevertFast': False})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsWaitEnd': False, 'MoveTime': 45, 'PosVector': [-1.840000033378601, 0.6000000238418579, -1.0800000429153442], 'AtVector': [1.0800000429153442, 2.5, 3.0], 'IsEnableRevertFast': False})
    }
}
