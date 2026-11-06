-------- EventFlow: LinkSleepInBed --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventReserveBancChange', 'EventTriggerSetDreamWorldWarpPoint', 'EventAIScheduleNPCForceWarpToCurrentAnchor', 'EventWait', 'EventWaitTalkCameraInterpolationEnd', 'EventTriggerEnemyMuseumUpdateDefeatedStatus']
queries: ['EventQueryTalkChoice3', 'EventQueryTalkChoice2', 'EventQueryIsSunSongMakesMiddleTimeFromCurrentBanc', 'EventQueryTalkChoice4', 'EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerHealLifeMax', 'EventTriggerPlayerHealMPMax', 'EventPlayerPlayASForFlowchart', 'EventPlayerHorseGetOff', 'EventWaitCreationFinishedEquipment', 'EventPlayerWarpToStarterLinkAnchor', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventTriggerPlayerLookAtObject', 'EventTriggerPlayerClearNayruLoveCount']
queries: ['EventQueryPlayerIsChild', 'EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: UISystemActor
entrypoint: None()
actions: ['EventWaitHeartGaugeStable', 'EventTriggerSetDisplayHeartGauge', 'EventEventFadeOut', 'EventEventFadeIn', 'EventWaitCloseLoadingFade', 'EventTriggerRequestDeletePlayerEquipmentFromPouch', 'EventTriggerRequestOpenVanishExchangeItemSimpleInfo', 'EventTriggerRequestOpenLoseRunningRaceSimpleInfo']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: ['EventQueryMiniGameTimerIsCounting']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBecomeSpeaker', 'EventNaviLookAtObject']
queries: ['EventQueryAvoidDuplicationRandomChoice3', 'EventQueryNaviIsArrivedTarget', 'EventQueryIsNaviAttentionEqualEventStarter']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTrigger_SetTime']
queries: ['EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventChangeTemporarilyToPlayerCamera', 'EventMoveToTargetPosCamera', 'EventSendEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundSetSunSongInfo', 'EventTriggerStopInGameBgm', 'EventTriggerStartInGameBgm', 'EventTriggerStartBgmSimple']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerRemoveSwordBigGoronChallengeActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_LonLon_Door_A_03
entrypoint: None()
actions: ['EventDoorClose']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 3}

void EntryPoint0() {

    call NaviEventCommon.NaviMove_Attention({'TargetInstanceName': '', 'TargetOffset': [0.0, 0.0, 0.0], 'IsUseDisguiseSpeakerPos': False, 'TargetActorName': 'Obj_Kokiri_Bed_A_01'})

    Npc_Navi.EventTriggerBecomeSpeaker()
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 1})
    GameSystemActor.EventWaitTalkCameraInterpolationEnd({'IsWaitEnd': True})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.HyruleCastle_Goto_HyruleCastle_MeetZelda'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Market_Adult_GetLightPrelude'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.Npc_Dream_FirstTalk'}) {
                switch Npc_Navi.EventQueryAvoidDuplicationRandomChoice3() {
                  case 0:
                    Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1005, 'ChoiceLabel2': 1006, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_07', 'ChoiceNumber': 4, 'ChoiceLabel3': 1003, 'ChoiceLabel4': 1002, 'MaintainPerformanceState': 0})
                    Event101:
                    switch GameSystemActor.EventQueryTalkChoice4() {
                      case 0:
                        Event51:

                        call SleepUntilMorning()

                      case 1:
                        Event52:

                        call SleepUntilNight()

                      case 2:
                        Event313:

                        call EnterThePandemonium()

                      case 3:
                        Event173:

                        call Cancel()

                    }
                  case 1:
                    Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1005, 'ChoiceLabel2': 1006, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_31', 'ChoiceNumber': 4, 'ChoiceLabel3': 1003, 'ChoiceLabel4': 1002, 'MaintainPerformanceState': 0})
                    goto Event101
                  case 2:
                    Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1005, 'ChoiceLabel2': 1006, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_32', 'ChoiceNumber': 4, 'ChoiceLabel3': 1003, 'ChoiceLabel4': 1002, 'MaintainPerformanceState': 0})
                    goto Event101
                }
            } else {
                Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1002, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_03', 'ChoiceLabel2': 1002, 'ChoiceNumber': 2, 'ChoiceLabel1': 1001, 'MaintainPerformanceState': 0})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    goto Event313
                } else {
                    goto Event173
                }
            }
        } else
        switch Npc_Navi.EventQueryAvoidDuplicationRandomChoice3() {
          case 0:
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1005, 'ChoiceLabel2': 1006, 'ChoiceNumber': 3, 'ChoiceLabel3': 1002, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_07', 'MaintainPerformanceState': 0})
            Event114:
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                goto Event51
              case 1:
                goto Event52
              case 2:
                goto Event173
            }
          case 1:
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1005, 'ChoiceLabel2': 1006, 'ChoiceNumber': 3, 'ChoiceLabel3': 1002, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_31', 'MaintainPerformanceState': 0})
            goto Event114
          case 2:
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1005, 'ChoiceLabel2': 1006, 'ChoiceNumber': 3, 'ChoiceLabel3': 1002, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_32', 'MaintainPerformanceState': 0})
            goto Event114
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Gohma_DefeatBoss'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.LinkSleepInBed_EntryPoint0_Event88', 'Index': -1}) {
            switch Npc_Navi.EventQueryAvoidDuplicationRandomChoice3() {
              case 0:
                Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1002, 'ChoiceNumber': 2, 'ChoiceLabel2': 1002, 'ChoiceLabel1': 1001, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_07', 'MaintainPerformanceState': 0})
                Event24:
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Event110:

                    call SleepBeforeMeetZelda()

                } else {
                    goto Event173
                }
              case 1:
                Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1002, 'ChoiceNumber': 2, 'ChoiceLabel1': 1001, 'ChoiceLabel2': 1002, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_31', 'MaintainPerformanceState': 0})
                goto Event24
              case 2:
                Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1002, 'ChoiceNumber': 2, 'ChoiceLabel1': 1001, 'ChoiceLabel2': 1002, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_32', 'MaintainPerformanceState': 0})
                goto Event24
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.LinkSleepInBed_EntryPoint0_Event88', 'Value': True, 'Index': -1})
            if !Player_Event.EventQueryCheckPlayerState({'State': 36}) {
                Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_06', 'ChoiceLabel3': 1002, 'ChoiceNumber': 2, 'ChoiceLabel1': 1001, 'ChoiceLabel2': 1002, 'MaintainPerformanceState': 0})
            } else {
                Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_28', 'ChoiceLabel3': 1002, 'ChoiceLabel1': 1001, 'ChoiceLabel2': 1002, 'ChoiceNumber': 2, 'MaintainPerformanceState': 0})
            }
            if !GameSystemActor.EventQueryTalkChoice2() {
                goto Event110
            } else
            if !Player_Event.EventQueryCheckPlayerState({'State': 36}) {
                Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1002, 'ChoiceLabel1': 1001, 'ChoiceLabel2': 1003, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_30', 'MaintainPerformanceState': 0})
            } else {
                Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1002, 'ChoiceLabel1': 1001, 'ChoiceLabel2': 1003, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_17', 'MaintainPerformanceState': 0})
            }
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfForest_IsAfter_GoInside_Exp'}) {
        if !Player_Event.EventQueryCheckPlayerState({'State': 36}) {
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1002, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_15', 'ChoiceLabel2': 1002, 'ChoiceNumber': 2, 'ChoiceLabel1': 1001, 'MaintainPerformanceState': 0})
        } else {
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1002, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_05', 'ChoiceNumber': 2, 'ChoiceLabel2': 1002, 'ChoiceLabel1': 1001, 'MaintainPerformanceState': 0})
        }
        if !GameSystemActor.EventQueryTalkChoice2() {
            goto Event110
        } else
        if !Player_Event.EventQueryCheckPlayerState({'State': 36}) {
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1002, 'ChoiceLabel1': 1001, 'ChoiceLabel2': 1003, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_18', 'MaintainPerformanceState': 0})
        } else {
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1002, 'ChoiceLabel1': 1001, 'ChoiceLabel2': 1003, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_17', 'MaintainPerformanceState': 0})
        }
    } else {
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1002, 'ChoiceLabel1': 1001, 'ChoiceLabel2': 1003, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_04', 'MaintainPerformanceState': 0})
    }
}

void ChangeTime() {
    if !EventWorldManagerController.EventQueryTimeDivision() {
        if !GameSystemActor.EventQueryIsSunSongMakesMiddleTimeFromCurrentBanc() {
            EventWorldManagerController.EventTrigger_SetTime({'TimeMin': 0, 'TimeHour': 0})
        } else {
            EventWorldManagerController.EventTrigger_SetTime({'TimeMin': 0, 'TimeHour': 20})
        }
        Event72:
        GameSystemActor.EventAIScheduleNPCForceWarpToCurrentAnchor({'IsWaitEnd': True})
    } else
    if !GameSystemActor.EventQueryIsSunSongMakesMiddleTimeFromCurrentBanc() {
        EventWorldManagerController.EventTrigger_SetTime({'TimeMin': 0, 'TimeHour': 12})
    } else {
        EventWorldManagerController.EventTrigger_SetTime({'TimeMin': 0, 'TimeHour': 6})
    }
    goto Event72
}

void BedBootEvent() {
    UISystemActor.EventEventFadeOut({'Color': 0, 'IsWaitEnd': True, 'Length': 3, 'IsNoPlayAnime': True})

    call NaviEventCommon.NaviWarp_PlayerHomePos_Choice({'IsLookAtPlayer': False, 'IsLeft': True})

    if !Player_Event.EventQueryPlayerIsChild() {
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 3.0, 0.0], 'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Player_Event', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsAtVectorReferenceActorPosOnce': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'MoveTime': 0, 'AtVector': [0.0, 0.8999999761581421, 0.0], 'PosVector': [1.399999976158142, 0.949999988079071, 2.450000047683716], 'IsEnableRevertFast': False})
        EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
        Event238:
        if Player_Event.EventQueryCheckPlayerState({'State': 1}) {
            Player_Event.EventPlayerHorseGetOff({'IsWaitEnd': True})
        }

        call DefaultBootEvent.AirStartUP()


        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtStretch', 'ForceFadeFrame': 5.0, 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0})
        } {
            UISystemActor.EventWaitCloseLoadingFade({'IsWaitEnd': True})
            UISystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 0, 'Length': 1, 'IsWaitEnd': True})
            UISystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True})
            Player_Event.EventTriggerHealLifeMax()
            Player_Event.EventTriggerPlayerHealMPMax()
            UISystemActor.EventWaitHeartGaugeStable({'IsWaitEnd': True})
        }

        EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
        Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 3, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'UI_IsRequestLoseRunningRace_DreamWorld', 'Index': -1}) {
            UISystemActor.EventTriggerRequestOpenLoseRunningRaceSimpleInfo()
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsRequestLoseRunningRace_DreamWorld', 'Value': False, 'Index': -1})
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'UI_IsRequestVanishExchangeItem_DreamWorld', 'Index': -1}) {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsRequestVanishExchangeItem_DreamWorld', 'Value': False, 'Index': -1})
            UISystemActor.EventTriggerRequestOpenVanishExchangeItemSimpleInfo()
            PouchSystemActor.EventTriggerRemoveSwordBigGoronChallengeActor()
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetSwordBigGoron_IsAfter_Step09_Exp'}) {
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': True, 'IsWaitEnd': True, 'ChallengeName': 'SubEvent_GetSwordBigGoron', 'StepName': 'Step09_01'})
            } else
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetSwordBigGoron_IsAfter_Step08_Exp'}) {
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': True, 'IsWaitEnd': True, 'ChallengeName': 'SubEvent_GetSwordBigGoron', 'StepName': 'Step08_01'})
            } else
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetSwordBigGoron_IsAfter_Step03_03_Exp'}) {
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SubEvent_GetSwordBigGoron', 'IsIgnoreCompletedChallenge': True, 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step03_03'})
            }
        }
    } else {
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 3.0, 0.0], 'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Player_Event', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsAtVectorReferenceActorPosOnce': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'MoveTime': 0, 'AtVector': [0.0, 1.2999999523162842, 0.0], 'PosVector': [1.8200000524520874, 1.600000023841858, 3.184999942779541], 'IsEnableRevertFast': False})
        EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
        goto Event238
    }
}

void BedBootEvent_NoLoading() {
    if Player_Event.EventQueryCheckPlayerState({'State': 1}) {
        Player_Event.EventPlayerHorseGetOff({'IsWaitEnd': True})
    }

    call DefaultBootEvent.AirStartUP()


    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtStretch', 'ForceFadeFrame': 5.0, 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0})
    } {
        UISystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 0, 'Length': 1, 'IsWaitEnd': True})
        UISystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True})
        Player_Event.EventTriggerHealLifeMax()
        Player_Event.EventTriggerPlayerHealMPMax()
        UISystemActor.EventWaitHeartGaugeStable({'IsWaitEnd': True})
    }

    SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'ResumeDelay': 0, 'WithPlayableEvent': True})
}

void SleepUntilMorning() {

    call SubEvent_GetSwordBigGoron.SubEvent_TimerCheck_Sleep()

    if ChallengeSystemActor.EventQueryMiniGameTimerIsCounting() {
        switch Npc_Navi.EventQueryAvoidDuplicationRandomChoice3() {
          case 0:
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1002, 'ChoiceLabel1': 1001, 'ChoiceLabel2': 1003, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_09', 'MaintainPerformanceState': 0})
            Event250:
            SoundSystemActor.EventTriggerStopInGameBgm({'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'CommandLife': 2, 'FadeType': 2, 'WithPlayableEvent': True, 'WaitingResumeInGameBgm': False})
            UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_SleepInBed', 'CommandLife': 2, 'IsReleaseDucking': False})
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'LonLonRanch_IsNearBed', 'Index': -1}) {
                Obj_LonLon_Door_A_03.EventDoorClose({'IsWaitEnd': True})
            }
            EventWorldManagerController.EventTrigger_SetTime({'TimeMin': 0, 'TimeHour': 6})
            SoundSystemActor.EventTriggerSoundSetSunSongInfo({'NextTimeDivision': 0})
            GameSystemActor.EventAIScheduleNPCForceWarpToCurrentAnchor({'IsWaitEnd': True})

            call warp_to_anchor()

            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 300})

            call BedBootEvent_NoLoading()

            EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
            Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 3, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
            switch Npc_Navi.EventQueryAvoidDuplicationRandomChoice3() {
              case 0:
                Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1002, 'ChoiceLabel1': 1001, 'ChoiceLabel2': 1003, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_13', 'MaintainPerformanceState': 0})
              case 1:
                Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1002, 'ChoiceLabel1': 1001, 'ChoiceLabel2': 1003, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_19', 'MaintainPerformanceState': 0})
              case 2:
                Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1002, 'ChoiceLabel1': 1001, 'ChoiceLabel2': 1003, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_21', 'MaintainPerformanceState': 0})
            }
          case 1:
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1002, 'ChoiceLabel1': 1001, 'ChoiceLabel2': 1003, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_23', 'MaintainPerformanceState': 0})
            goto Event250
          case 2:
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1002, 'ChoiceLabel1': 1001, 'ChoiceLabel2': 1003, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_24', 'MaintainPerformanceState': 0})
            goto Event250
        }
    }
}

void SleepUntilNight() {

    call SubEvent_GetSwordBigGoron.SubEvent_TimerCheck_Sleep()

    if ChallengeSystemActor.EventQueryMiniGameTimerIsCounting() {
        switch Npc_Navi.EventQueryAvoidDuplicationRandomChoice3() {
          case 0:
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1002, 'ChoiceLabel1': 1001, 'ChoiceLabel2': 1003, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_25', 'MaintainPerformanceState': 0})
            Event251:
            SoundSystemActor.EventTriggerStopInGameBgm({'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'CommandLife': 2, 'FadeType': 2, 'WithPlayableEvent': True, 'WaitingResumeInGameBgm': False})
            UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_SleepInBed', 'CommandLife': 2, 'IsReleaseDucking': False})
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'LonLonRanch_IsNearBed', 'Index': -1}) {
                Obj_LonLon_Door_A_03.EventDoorClose({'IsWaitEnd': True})
            }
            EventWorldManagerController.EventTrigger_SetTime({'TimeMin': 0, 'TimeHour': 20})
            SoundSystemActor.EventTriggerSoundSetSunSongInfo({'NextTimeDivision': 1})
            GameSystemActor.EventAIScheduleNPCForceWarpToCurrentAnchor({'IsWaitEnd': True})

            call warp_to_anchor()

            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 300})

            call BedBootEvent_NoLoading()

            EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
            Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 3, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
            switch Npc_Navi.EventQueryAvoidDuplicationRandomChoice3() {
              case 0:
                Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1002, 'ChoiceLabel1': 1001, 'ChoiceLabel2': 1003, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_11', 'MaintainPerformanceState': 0})
              case 1:
                Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1002, 'ChoiceLabel1': 1001, 'ChoiceLabel2': 1003, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_20', 'MaintainPerformanceState': 0})
              case 2:
                Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1002, 'ChoiceLabel1': 1001, 'ChoiceLabel2': 1003, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_22', 'MaintainPerformanceState': 0})
            }
          case 1:
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1002, 'ChoiceLabel1': 1001, 'ChoiceLabel2': 1003, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_26', 'MaintainPerformanceState': 0})
            goto Event251
          case 2:
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1002, 'ChoiceLabel1': 1001, 'ChoiceLabel2': 1003, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_08', 'MaintainPerformanceState': 0})
            goto Event251
        }
    }
}

void CommonBed() {
    if !Npc_Navi.EventQueryNaviIsArrivedTarget() {
        if !Npc_Navi.EventQueryIsNaviAttentionEqualEventStarter() {
            Event293:
            Npc_Navi.EventNaviLookAtObject({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
            Event260:
            Npc_Navi.EventTriggerBecomeSpeaker()
            EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 1})
            GameSystemActor.EventWaitTalkCameraInterpolationEnd({'IsWaitEnd': True})
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.LinkSleepInBed_CommonBed_Event181', 'Index': -1}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.HyruleCastle_Goto_HyruleCastle_MeetZelda'}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Market_Adult_GetLightPrelude'}) {
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.Npc_Dream_FirstTalk'}) {
                            switch Npc_Navi.EventQueryAvoidDuplicationRandomChoice3() {
                              case 0:
                                Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_02', 'ChoiceNumber': 4, 'ChoiceLabel1': 1005, 'ChoiceLabel2': 1006, 'ChoiceLabel3': 1003, 'ChoiceLabel4': 1002, 'MaintainPerformanceState': 0})
                                Event194:
                                switch GameSystemActor.EventQueryTalkChoice4() {
                                  case 0:
                                    Event197:

                                    call SleepUntilMorning()

                                  case 1:
                                    Event198:

                                    call SleepUntilNight()

                                  case 2:
                                    Event10:

                                    call EnterThePandemonium()

                                  case 3:
                                    Event41:

                                    call Cancel()

                                }
                              case 1:
                                Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1005, 'ChoiceLabel2': 1006, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_33', 'ChoiceNumber': 4, 'ChoiceLabel3': 1003, 'ChoiceLabel4': 1002, 'MaintainPerformanceState': 0})
                                goto Event194
                              case 2:
                                Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1005, 'ChoiceLabel2': 1006, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_34', 'ChoiceNumber': 4, 'ChoiceLabel3': 1003, 'ChoiceLabel4': 1002, 'MaintainPerformanceState': 0})
                                goto Event194
                            }
                        } else {
                            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1002, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_03', 'ChoiceLabel2': 1002, 'ChoiceNumber': 2, 'ChoiceLabel1': 1001, 'MaintainPerformanceState': 0})
                            if !GameSystemActor.EventQueryTalkChoice2() {
                                goto Event10
                            } else {
                                goto Event41
                            }
                        }
                    } else
                    switch Npc_Navi.EventQueryAvoidDuplicationRandomChoice3() {
                      case 0:
                        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_02', 'ChoiceLabel1': 1005, 'ChoiceLabel2': 1006, 'ChoiceLabel3': 1002, 'ChoiceNumber': 3, 'MaintainPerformanceState': 0})
                        Event222:
                        switch GameSystemActor.EventQueryTalkChoice3() {
                          case 0:
                            goto Event197
                          case 1:
                            goto Event198
                          case 2:
                            goto Event41
                        }
                      case 1:
                        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1005, 'ChoiceLabel2': 1006, 'ChoiceNumber': 3, 'ChoiceLabel3': 1002, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_33', 'MaintainPerformanceState': 0})
                        goto Event222
                      case 2:
                        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1005, 'ChoiceLabel2': 1006, 'ChoiceNumber': 3, 'ChoiceLabel3': 1002, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_34', 'MaintainPerformanceState': 0})
                        goto Event222
                    }
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.LinkSleepInBed_EntryPoint0_Event88', 'Index': -1}) {
                    switch Npc_Navi.EventQueryAvoidDuplicationRandomChoice3() {
                      case 0:
                        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_02', 'ChoiceLabel3': 1002, 'ChoiceNumber': 2, 'ChoiceLabel2': 1002, 'ChoiceLabel1': 1001, 'MaintainPerformanceState': 0})
                        Event167:
                        if !GameSystemActor.EventQueryTalkChoice2() {
                            Event174:

                            call SleepBeforeMeetZelda()

                        } else {
                            goto Event41
                        }
                      case 1:
                        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1002, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_33', 'ChoiceNumber': 2, 'ChoiceLabel1': 1001, 'ChoiceLabel2': 1002, 'MaintainPerformanceState': 0})
                        goto Event167
                      case 2:
                        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1002, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_34', 'ChoiceNumber': 2, 'ChoiceLabel1': 1001, 'ChoiceLabel2': 1002, 'MaintainPerformanceState': 0})
                        goto Event167
                    }
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.LinkSleepInBed_EntryPoint0_Event88', 'Value': True, 'Index': -1})
                    if !Player_Event.EventQueryCheckPlayerState({'State': 36}) {
                        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_06', 'ChoiceLabel3': 1002, 'ChoiceNumber': 2, 'ChoiceLabel2': 1002, 'ChoiceLabel1': 1001, 'MaintainPerformanceState': 0})
                    } else {
                        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_28', 'ChoiceLabel3': 1002, 'ChoiceNumber': 2, 'ChoiceLabel1': 1001, 'ChoiceLabel2': 1002, 'MaintainPerformanceState': 0})
                    }
                    if !GameSystemActor.EventQueryTalkChoice2() {
                        goto Event174
                    } else
                    if !Player_Event.EventQueryCheckPlayerState({'State': 36}) {
                        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1002, 'ChoiceLabel1': 1001, 'ChoiceLabel2': 1003, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_30', 'MaintainPerformanceState': 0})
                    } else {
                        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1002, 'ChoiceLabel1': 1001, 'ChoiceLabel2': 1003, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_17', 'MaintainPerformanceState': 0})
                    }
                }
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.LinkSleepInBed_CommonBed_Event181', 'Value': True, 'Index': -1})
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Market_Adult_GetLightPrelude'}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.Npc_Dream_FirstTalk'}) {
                        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1005, 'ChoiceLabel2': 1006, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_29', 'MaintainPerformanceState': 0, 'ChoiceNumber': 4, 'ChoiceLabel4': 1002, 'ChoiceLabel3': 1003})
                        switch GameSystemActor.EventQueryTalkChoice4() {
                          case 0:
                            Event195:

                            call SleepUntilMorning()

                          case 1:
                            Event196:

                            call SleepUntilNight()

                          case 2:
                            Event39:

                            call EnterThePandemonium()

                          case 3:
                            Event200:

                            call Cancel()

                        }
                    } else {
                        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1002, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_03', 'ChoiceLabel2': 1002, 'ChoiceNumber': 2, 'ChoiceLabel1': 1001, 'MaintainPerformanceState': 0})
                        if !GameSystemActor.EventQueryTalkChoice2() {
                            goto Event39
                        } else {
                            goto Event200
                        }
                    }
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.HyruleCastle_Goto_HyruleCastle_MeetZelda'}) {
                    Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1005, 'ChoiceLabel2': 1006, 'ChoiceLabel3': 1002, 'ChoiceNumber': 3, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_29', 'MaintainPerformanceState': 0})
                    switch GameSystemActor.EventQueryTalkChoice3() {
                      case 0:
                        goto Event195
                      case 1:
                        goto Event196
                      case 2:
                        goto Event200
                    }
                } else {
                    Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1002, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_29', 'ChoiceNumber': 2, 'ChoiceLabel1': 1001, 'ChoiceLabel2': 1002, 'MaintainPerformanceState': 0})
                    if !GameSystemActor.EventQueryTalkChoice2() {

                        call SleepBeforeMeetZelda()

                    } else {
                        goto Event200
                    }
                }
            }
        } else
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'ActorNameB': 'DestinationAnchor', 'InstanceNameB': 'Attention', 'IsAnchorActorB': True, 'CheckDistance': 1.2000000476837158}) {
            goto Event293
        } else {
            Event219:

            call NaviEventCommon.NaviMove_Attention({'TargetInstanceName': '', 'TargetActorName': 'Obj_Common_Bed_A_01', 'TargetOffset': [0.0, 0.0, 0.0], 'IsUseDisguiseSpeakerPos': False})

        }
        goto Event260
    } else {
        goto Event219
    }
}

void Cancel() {
    if Player_Event.EventQueryCheckPlayerState({'State': 36}) {
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1002, 'ChoiceLabel1': 1001, 'ChoiceLabel2': 1003, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_17', 'MaintainPerformanceState': 0})
    }
}

void SleepBeforeMeetZelda() {
    SoundSystemActor.EventTriggerStopInGameBgm({'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'CommandLife': 2, 'FadeType': 2, 'WithPlayableEvent': True, 'WaitingResumeInGameBgm': False})
    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call warp_to_anchor()

    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_SleepInBed', 'CommandLife': 2, 'IsReleaseDucking': False})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'LonLonRanch_IsNearBed', 'Index': -1}) {
        Obj_LonLon_Door_A_03.EventDoorClose({'IsWaitEnd': True})
    }
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 300})

    call BedBootEvent_NoLoading()

    EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
    Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 3, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Gohma_DefeatBoss'}) {
        switch Npc_Navi.EventQueryAvoidDuplicationRandomChoice3() {
          case 0:
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1002, 'ChoiceLabel1': 1001, 'ChoiceLabel2': 1003, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_13', 'MaintainPerformanceState': 0})
          case 1:
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1002, 'ChoiceLabel1': 1001, 'ChoiceLabel2': 1003, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_19', 'MaintainPerformanceState': 0})
          case 2:
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1002, 'ChoiceLabel1': 1001, 'ChoiceLabel2': 1003, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_21', 'MaintainPerformanceState': 0})
        }
    } else {
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1002, 'ChoiceLabel1': 1001, 'ChoiceLabel2': 1003, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/LinkSleepInBed:Talk_27', 'MaintainPerformanceState': 0})
    }
}

void warp_to_anchor() {
    Player_Event.EventPlayerWarpToStarterLinkAnchor({'InstanceName': 'ReturnFromDreamWorld', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'ActorName': 'StartPos'})
    Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})

    call NaviEventCommon.NaviWarp_PlayerHomePos_Choice({'IsLookAtPlayer': False, 'IsLeft': True})

    if !Player_Event.EventQueryPlayerIsChild() {
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 3.0, 0.0], 'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Player_Event', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsAtVectorReferenceActorPosOnce': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'MoveTime': 0, 'AtVector': [0.0, 0.8999999761581421, 0.0], 'PosVector': [1.399999976158142, 0.949999988079071, 2.450000047683716], 'IsEnableRevertFast': False})
        EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 3.0, 0.0], 'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Player_Event', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsAtVectorReferenceActorPosOnce': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'MoveTime': 0, 'AtVector': [0.0, 1.2999999523162842, 0.0], 'PosVector': [1.8200000524520874, 1.600000023841858, 3.184999942779541], 'IsEnableRevertFast': False})
        EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
    }
}

void EnterThePandemonium() {
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'LinkBed_DeepSleep'})

    call SubEvent_GetSwordBigGoron.SubEvent_TimerCheck_Sleep()

    if ChallengeSystemActor.EventQueryMiniGameTimerIsCounting() {
        SoundSystemActor.EventTriggerStopInGameBgm({'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'FadeType': 2, 'CommandLife': 1, 'WithPlayableEvent': True, 'WaitingResumeInGameBgm': False})
        UISystemActor.EventEventFadeOut({'IsNoPlayAnime': False, 'Color': 0, 'IsWaitEnd': True, 'Length': 1})
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_SleepInBedToEnemyMuseum', 'IsReleaseDucking': False, 'CommandLife': 2})

        call ChangeTime()

        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Sequence_IsDisablePouchSyncEquipment', 'Value': True, 'Index': -1})
        Player_Event.EventTriggerPlayerClearNayruLoveCount()
        GameSystemActor.EventTriggerEnemyMuseumUpdateDefeatedStatus()
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

        call Npc_Dream.Dictionary_Check()

        GameSystemActor.EventTriggerSetDreamWorldWarpPoint()
        Player_Event.EventTriggerHealLifeMax()
        Player_Event.EventTriggerPlayerHealMPMax()
        UISystemActor.EventWaitHeartGaugeStable({'IsWaitEnd': True})
        GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'IsStartOnEvent': False, 'FadePattern': 1, 'NextStartPos': 'EnemyMusuem', 'NextBanc': 'EnemyMuseum', 'EventStarterName': '', 'BootEventName': 'Npc_Dream_FirstTalk', 'IsItemWarp': False})
        UISystemActor.EventTriggerRequestDeletePlayerEquipmentFromPouch()
        Player_Event.EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
    }
}
