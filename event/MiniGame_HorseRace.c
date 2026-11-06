-------- EventFlow: MiniGame_HorseRace --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventExecuteAIScheduleReceiveInterestInfo', 'EventNPCTurnToTarget', 'EventTriggerChangeEmotion']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAIScheduleGetReceiveInterestTypeAll', 'EventQueryAvoidDuplicationRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetGameDataInt', 'EventTriggerSetGameDataBoolArrayAllOnce', 'EventTriggerAddOrSubGameDataFloat', 'EventTriggerSetGameDataFloat', 'EventTriggerCopyGameDataFloat']
queries: ['EventQueryIsGameDataBool', 'EventQueryCompareGameDataFloat', 'EventQueryIsGameDataFloat', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWaitForActorPresence', 'EventWait', 'EventTriggerRequestAutoSave', 'EventRemoveProjectiles']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice3', 'EventQueryTalkChoice4', 'EventQueryRandomChoice3']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventSuspend', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerMiniGameTimerStart', 'EventTriggerShowTimerUI', 'EventTriggerMiniGameTimerSetting', 'EventTriggerUnshowTimerUI', 'EventTriggerMiniGameTimerStop', 'EventExecuteRollbackChallengeStep', 'EventTriggerMiniGameCalcElapsedTime', 'EventTriggerMiniGameHorseRaceSetPenalty', 'EventExecuteProgressChallengeStep', 'EventTriggerShowReady', 'EventTriggerShowGo', 'EventTriggerSetUngrayoutEvent']
queries: ['EventQueryMiniGameTimeOver']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventCloseRupeeDisplay', 'EventShowFinish']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToStarterLinkAnchor', 'EventTriggerPlayerEventStartWithoutStopRidingTarget', 'EventPlayerSetExtraOrderDecelerateToStop', 'EventPlayerPlayASForFlowchart', 'EventPlayerHorseGetOff', 'EventPlayerTurnAndLook', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerPlayASFollowRideHorse']
queries: ['EventQueryIsHorseEponaNear', 'EventQueryPlayerIsEquipMask']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventSendEventTalkMessageToPlayerCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Hylia_Malon_Adult
entrypoint: None()
actions: ['EventTalk', 'EventAIScheduleWarpToAnchor', 'EventTriggerBalloonMessage', 'EventTriggerBecomeSpeaker', 'EventNPCTurnToTarget', 'EventPlayAS', 'EventTriggerLookAtObject', 'EventTriggerAIScheduleSelectSchedule', 'EventTriggerSetModelLodManual']
queries: ['EventQueryAvoidDuplicationRandomChoice2', 'EventQueryAIScheduleCheckActorActionAll']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Animal_Epona_Adult[Animal_Epona_Adult_Owned]
entrypoint: None()
actions: ['EventTriggerRequestRideMe']
queries: ['EventQueryRidableIsRidden']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryCheckTime', 'EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventTriggerStartBgmSimple', 'EventTriggerSoundControlBGM', 'EventTriggerStartInGameBgm', 'EventSoundRequestDucking', 'EventTriggerSoundStopBGM']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviRequestBallonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Hylia_Ingo_001_Adult
entrypoint: None()
actions: ['EventAIScheduleWarpToAnchor']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'EventMemberCreateMethod': 2}

void Ready_Npc_Hylia_Malon_Adult_Talk() {

    call Npc_Hylia_Malon_Adult.Mask_All()

    switch Npc_Hylia_Malon_Adult.EventQueryAIScheduleCheckActorActionAll() {
      case [0, 2]:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorseRace_FirstTalkToMalon'}) {
            if !EventWorldManagerController.EventQueryTimeDivision() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Adult:Talk_14', 'MaintainPerformanceState': 0})
            } else
            if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Adult:Talk_13', 'MaintainPerformanceState': 0})
            }
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Adult:Talk_50', 'MaintainPerformanceState': 0})
        } else {
            Event135:

            call First_Talk()

            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_LeaveKakariko_Npc_Hylia_Talon_Adult'}) {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_47', 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'HorseRace_MoveTalk_TalonBackedFirst'})
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'HorseRace_IsTalkAboutTalon'})
            }
        }
      case [1, 3, 5, 6, 7, 8, 9, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26]:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorseRace_FirstTalkToMalon'}) {
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Event212:

                call InterestTalk_Malon_Adult()

                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_LeaveKakariko_Npc_Hylia_Talon_Adult'}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseRace_IsTalkAboutTalon'}) {
                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HorseRace_MoveTalk_TalonBackedFirst', 'Index': -1}) {
                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'HorseRace_MoveTalk_TalonBackedFirst', 'Value': False})
                            Event139:
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_51', 'MaintainPerformanceState': 0})
                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.MiniGame_HorseRace_Ready_Npc_Hylia_Malon_Adult_Talk_Event293', 'Value': True, 'Index': -1})
                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_Unlock_HorseRace'})
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_52', 'MaintainPerformanceState': 0})
                            if !EventWorldManagerController.EventQueryCheckTime({'Hour': 6, 'CompareOparator': 3, 'Minute': 0})
                            && !EventWorldManagerController.EventQueryCheckTime({'Hour': 19, 'Minute': 30, 'CompareOparator': 5}) {
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_44', 'ChoiceLabel1': 0, 'ChoiceLabel4': 1, 'ChoiceNumber': 3, 'ChoiceLabel3': 1, 'ChoiceLabel2': 2, 'MaintainPerformanceState': 0})
                                switch GameSystemActor.EventQueryTalkChoice3() {
                                  case 0:
                                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MinigGame_HorseRace_Permission', 'Index': -1}) {

                                        call NpcCommon.Npc_IsConfront_WithLinkAS({'NpcActor': ActorIdentifier(name="Npc_Hylia_Malon_Adult"), 'LinkAS': 'EvtTalkYes'})

                                        Event328:

                                        call RaceStartTalk()

                                    } else {
                                        Event430:

                                        call NoEponaTalk()

                                    }
                                  case 1:
                                    Event329:

                                    call RuleTalk()

                                  case 2:
                                    Event425:
                                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})

                                    call GoodBye()

                                }
                            } else {
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_05', 'MaintainPerformanceState': 0})
                            }
                        } else
                        if !EventWorldManagerController.EventQueryCheckTime({'Hour': 6, 'CompareOparator': 3, 'Minute': 0})
                        && !EventWorldManagerController.EventQueryCheckTime({'Hour': 19, 'Minute': 30, 'CompareOparator': 5}) {
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 1, 'ChoiceLabel3': 6, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_09', 'ChoiceLabel1': 12, 'ChoiceNumber': 4, 'MaintainPerformanceState': 0})
                            switch GameSystemActor.EventQueryTalkChoice4() {
                              case 0:
                                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MinigGame_HorseRace_Permission', 'Index': -1}) {

                                    call NpcCommon.Npc_IsConfront({'NpcActor': ActorIdentifier(name="Npc_Hylia_Malon_Adult")})

                                    goto Event328
                                } else {
                                    goto Event430
                                }
                              case 1:
                                goto Event329
                              case 2:
                                Event318:

                                call MalonTalk()

                              case 3:
                                goto Event425
                            }
                        } else {
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_10', 'ChoiceLabel1': 6, 'ChoiceNumber': 2, 'MaintainPerformanceState': 0})
                            if !GameSystemActor.EventQueryTalkChoice2() {
                                Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                                goto Event318
                            } else {
                                goto Event425
                            }
                        }
                    } else {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_46', 'MaintainPerformanceState': 0})
                        Event142:
                        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'HorseRace_IsTalkAboutTalon'})
                        goto Event139
                    }
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_22', 'ChoiceNumber': 2, 'ChoiceLabel1': 6, 'ChoiceLabel2': 11, 'MaintainPerformanceState': 0})
                    if !GameSystemActor.EventQueryTalkChoice2() {

                        call MalonTalk()

                    } else {

                        call GoodBye()

                    }
                }
            } else
            if !Player_Event.EventQueryPlayerIsEquipMask() {
                goto Event212
            } else
            if !EventWorldManagerController.EventQueryCheckTime({'Hour': 6, 'CompareOparator': 3, 'Minute': 0})
            && !EventWorldManagerController.EventQueryCheckTime({'Hour': 19, 'Minute': 30, 'CompareOparator': 5}) {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_07', 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_08', 'MaintainPerformanceState': 0})
            }
            goto Event212
        } else {

            call First_Talk()

            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_LeaveKakariko_Npc_Hylia_Talon_Adult'}) {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_47', 'MaintainPerformanceState': 0})
                goto Event142
            }
        }
      case [4, 10]:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorseRace_FirstTalkToMalon'}) {
            if !EventWorldManagerController.EventQueryTimeDivision() {
                if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Adult:Talk_59'})
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Adult:Talk_58'})
                }
            } else
            if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Adult:Talk_13', 'MaintainPerformanceState': 0})
            }
            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Adult:Talk_61'})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Adult:Talk_60'})
            }
        } else {
            goto Event135
        }
    }
}

void MiniGame_HorseRace_Start() {

    call MiniGame_HorseRace_Ready()


    call NaviEventCommon.NaviWarp_PlayerHomePos_Choice({'IsLeft': False, 'IsLookAtPlayer': False})

    GameSystemActor.EventRemoveProjectiles({'IsWaitEnd': True})
    Npc_Hylia_Ingo_001_Adult.EventAIScheduleWarpToAnchor({'ClothWarpMode': -1, 'AnchorType': 0, 'IsWaitEnd': True, 'InstanceName': '', 'ForceGetUpDuringSleep': True, 'ArrivalState': 1})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_Hylia_Malon_Adult.EventPlayAS({'ASName': 'Act_StartingSignal', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Event327:
    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Horse', 'IsReleaseDucking': True, 'CommandLife': 2})
    ChallengeSystemActor.EventTriggerShowReady({'MiniGameType': 7})
    ChallengeSystemActor.EventTriggerMiniGameTimerSetting({'IsCountDown': False, 'TimerLimit': 10800})
    ChallengeSystemActor.EventTriggerSetUngrayoutEvent({'IsUngrayoutEvent': False})
    ChallengeSystemActor.EventTriggerShowTimerUI()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 166})

    fork {
        ChallengeSystemActor.EventTriggerShowGo({'MiniGameType': 7})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 26})
    } {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'MiniGame_HorseRace', 'StepName': 'Playing', 'IsIgnoreChallengeProgressUI': True, 'IsIgnoreCompletedChallenge': False, 'IsWaitEnd': True})
    }

    ChallengeSystemActor.EventTriggerMiniGameTimerStart()
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorseRace_Navi_Failed', 'Value': False})

    call Playing_Npc_Hylia_Malon_Adult_Near()

}

void Playing_Npc_Hylia_Malon_Adult_EachFrame() {
    Event294:
    if !ChallengeSystemActor.EventQueryMiniGameTimeOver() {
        ChallengeSystemActor.EventTriggerMiniGameTimerStop()
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_HorseRace_Timeup', 'Index': -1, 'Value': True})
        Event88:
        EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
        goto Event88
    } else {
        EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
        goto Event294
    }
}

void MiniGame_HorseRace_End() {
    Player_Event.EventTriggerPlayerEventStartWithoutStopRidingTarget()
    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 0})
    SoundSystemActor.EventTriggerStopInGameBgm({'CommandLife': 2, 'FadeType': 0, 'IsImmediateOnAutoOff': False, 'WithPlayableEvent': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
    if !Animal_Epona_Adult[Animal_Epona_Adult_Owned].EventQueryRidableIsRidden({'IsCheckRiderType': False, 'RiderType': 0}) {

        fork {
            ChallengeSystemActor.EventExecuteRollbackChallengeStep({'ChallengeName': 'MiniGame_HorseRace', 'IsIgnoreChallengeProgressUI': True, 'IsIgnoreCompletedChallenge': False, 'ChallengeStep': 'Ready', 'IsWaitEnd': False})
            ChallengeSystemActor.EventTriggerMiniGameTimerStop()

            call MiniGame_HorseRace_UpdateRecord()

            UISystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': False, 'Type': 1, 'MiniGameType': 7})
        } {
            Player_Event.EventPlayerSetExtraOrderDecelerateToStop({'IsWaitEnd': True, 'StopToTime': 120, 'WaitUntilStable': False})
            Player_Event.EventPlayerPlayASFollowRideHorse({'IsWaitEnd': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
        }

        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        ChallengeSystemActor.EventTriggerUnshowTimerUI()
        Event185:
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'UseDemoWait': True, 'NotChangeRot': False, 'InstanceName': 'HorseRacePlayerStartPos', 'ASCommand': 'EvtWait'})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:Bgm下げ', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_HorseRace_UpdateBestTime', 'Index': -1}) {

            call Warp_Malon_and_Link_and_Epona()

            UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

            call MiniGame_HorseRace_After()

        } else {

            call MiniGame_HorseRace_Retry()

        }
    } else {
        ChallengeSystemActor.EventExecuteRollbackChallengeStep({'ChallengeName': 'MiniGame_HorseRace', 'IsIgnoreChallengeProgressUI': True, 'IsIgnoreCompletedChallenge': False, 'ChallengeStep': 'Ready', 'IsWaitEnd': False})
        ChallengeSystemActor.EventTriggerMiniGameTimerStop()

        call MiniGame_HorseRace_UpdateRecord()

        UISystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': False, 'Type': 1, 'MiniGameType': 7})
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        ChallengeSystemActor.EventTriggerUnshowTimerUI()
        Animal_Epona_Adult[Animal_Epona_Adult_Owned].EventTriggerRequestRideMe({'TargetActorInstanceName': '', 'RidingMode': 1, 'SeatIndex': 0, 'TargetActorName': 'Player_Event'})
        Event216:
        if !Animal_Epona_Adult[Animal_Epona_Adult_Owned].EventQueryRidableIsRidden({'IsCheckRiderType': False, 'RiderType': 0}) {
            Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtHorseWait', 'ForceFadeFrame': 0.0, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'IsWaitEnd': False})
            goto Event185
        } else {
            EventSystemActor.EventWait({'Frames': 2, 'IsWaitEnd': True})
            goto Event216
        }
    }
}

void MiniGame_HorseRace_After() {
    SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'ResumeDelay': 0})
    Npc_Hylia_Malon_Adult.EventTriggerSetModelLodManual({'LodLevel': 0})
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_HorseRace_PenaltyCount', 'Value': 0, 'Index': -1}) {
      case [0, 1]:
        Event123:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorseRace_IsNewRecord'}) {
            Npc_Hylia_Malon_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_25', 'MaintainPerformanceState': 0})

            call Dm_SY_GetInEvent.GetInEvent_NotTurn({'ActorName': 'Obj_Rupee_Red', 'ASName': 'Wait', 'NpcActorName': 'Npc_Hylia_Malon_Adult', 'NpcInstanceName': '', 'Npc_EventStarter': ActorIdentifier(name="Npc_Hylia_Malon_Adult"), 'Target': 3})

            UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_IsTalked_Cow'}) {
                Event233:
                Npc_Hylia_Malon_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_28', 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorseRace_UpdateBestTime', 'Value': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorseRace_Navi_NewRecord', 'Value': False})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                Npc_Navi.EventNaviRequestBallonMessage({'Index': 229})
                GameSystemActor.EventTriggerRequestAutoSave()
            } else {
                Npc_Hylia_Malon_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_27', 'MaintainPerformanceState': 0})

                call NpcCommon.NpcCommon_PlayerEvtTalking_NpcWait({'Player_AS': 'EvtTalkingS', 'Npc_ActorName': ActorIdentifier(name="Npc_Hylia_Malon_Adult"), 'Player_IsWaitEnd': True})

                EventSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})
                Npc_Hylia_Malon_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_50', 'MaintainPerformanceState': 0})
                goto Event233
            }
        } else {
            Npc_Hylia_Malon_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_26', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'MiniGame_HorseRace_IsNewRecord'})
            goto Event233
        }
      case 2:
        Npc_Hylia_Malon_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_24', 'MaintainPerformanceState': 0})
        goto Event123
    }
}

void MiniGame_HorseRace_Ready() {
    GameDataActor.EventTriggerSetGameDataBoolArrayAllOnce({'Value': False, 'GameDataName': 'MiniGame_HorseRace_IsHurdleCleared'})
    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'Value': 0, 'GameDataName': 'MiniGame_HorseRace_ProgressRound'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MiniGame_HorseRace_Goaled'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorseRace_UpdateBestTime', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Minigame_HorseRace_MalonSayStart', 'Index': -1, 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MiniGame_HorseRace_Around1stLap'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'MiniGame_HorseRace_IsRoundOne', 'Index': -1})
    GameDataActor.EventTriggerSetGameDataFloat({'GameDataName': 'MiniGame_TimerValue', 'Index': -1, 'Value': 0.0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_HorseRace_Establishing', 'Value': True, 'Index': -1})
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

    fork {
        GameSystemActor.EventWaitForActorPresence({'ActorName': 'Obj_LonLon_Hurdle_A_01', 'IsWaitEnd': True, 'IsActorCreateRequest': True, 'InstanceName': 'Hurdle_00_00'})
        GameSystemActor.EventWaitForActorPresence({'IsWaitEnd': True, 'IsActorCreateRequest': True, 'InstanceName': 'Hurdle_03_00', 'ActorName': 'Obj_LonLon_Hurdle_A_02'})
        GameSystemActor.EventWaitForActorPresence({'IsWaitEnd': True, 'IsActorCreateRequest': True, 'InstanceName': 'Hurdle_04_00', 'ActorName': 'Obj_LonLon_Hurdle_A_01'})
    } {
        Animal_Epona_Adult[Animal_Epona_Adult_Owned].EventTriggerRequestRideMe({'TargetActorInstanceName': '', 'RidingMode': 1, 'SeatIndex': 0, 'TargetActorName': 'Player_Event'})
        Event43:
        if !Animal_Epona_Adult[Animal_Epona_Adult_Owned].EventQueryRidableIsRidden({'IsCheckRiderType': False, 'RiderType': 0}) {
            Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtHorseWait', 'ForceFadeFrame': 0.0, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'IsWaitEnd': False})
            Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'UseDemoWait': True, 'NotChangeRot': False, 'InstanceName': 'HorseRacePlayerStartPos', 'ASCommand': 'EvtWait'})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.0, 1.2899999618530273, -4.300000190734863], 'AtVector': [0.0, 0.07999999821186066, 0.029999999329447746], 'TargetFovy': 55.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
            Npc_Hylia_Malon_Adult.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 22, 'InstanceName': 'HorseRacePlayingMalonPos', 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'ClothWarpMode': -1})
        } else {
            EventSystemActor.EventWait({'Frames': 2, 'IsWaitEnd': True})
            goto Event43
        }
    }

}

void MiniGame_HorseRace_Clean() {
    GameDataActor.EventTriggerSetGameDataBoolArrayAllOnce({'Value': False, 'GameDataName': 'MiniGame_HorseRace_IsHurdleCleared'})
    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'Value': 0, 'GameDataName': 'MiniGame_HorseRace_ProgressRound'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MiniGame_HorseRace_Goaled'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorseRace_UpdateBestTime', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Minigame_HorseRace_MalonSayStart', 'Index': -1, 'Value': False})
    GameDataActor.EventTriggerSetGameDataFloat({'GameDataName': 'MiniGame_TimerValue', 'Index': -1, 'Value': 0.0})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MiniGame_HorseRace_Around1stLap'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'MiniGame_HorseRace_IsRoundOne', 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_HorseRace_Timeup', 'Value': False, 'Index': -1})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
}

void MiniGame_HorseRace_UpdateRecord() {
    ChallengeSystemActor.EventTriggerMiniGameHorseRaceSetPenalty({'PenaltyBaseTime': 5})
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    GameDataActor.EventTriggerAddOrSubGameDataFloat({'AddGameData': 'MiniGame_HorseRace_PenaltyTime', 'Value': 0.0, 'Index': -1, 'GameDataName': 'MiniGame_TimerValue'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    ChallengeSystemActor.EventTriggerMiniGameCalcElapsedTime({'ElapsedTimerValue': 'MiniGame_HorseRace_CrrentTime', 'LimitTimerValue': 'MiniGame_HorseRace_TimeLimit', 'ElapsedTimerMinute': 'MiniGame_HorseRace_Result_Minutes', 'ElapsedTimerSecond': 'MiniGame_HorseRace_Result_Second', 'ElapsedTimerMilliSecond': 'MiniGame_HorseRace_Result_MiliSecond'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    switch GameDataActor.EventQueryIsGameDataFloat({'Index': -1, 'Value': 0.0, 'GameDataName': 'MiniGame_HorseRace_BestTime'}) {
      case [0, 1]:
        if !GameDataActor.EventQueryIsGameDataFloat({'GameDataName': 'MiniGame_TimerValue', 'Index': -1, 'Value': 2400.0}) {
            Event61:
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorseRace_UpdateBestTime', 'Value': True})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            ChallengeSystemActor.EventTriggerMiniGameCalcElapsedTime({'ElapsedTimerValue': 'MiniGame_HorseRace_CrrentTime', 'LimitTimerValue': 'MiniGame_HorseRace_TimeLimit', 'ElapsedTimerMinute': 'MiniGame_HorseRace_BestTime_Minutes', 'ElapsedTimerSecond': 'MiniGame_HorseRace_BestTime_Second', 'ElapsedTimerMilliSecond': 'MiniGame_HorseRace_BestTime_MiliSecond'})
            GameDataActor.EventTriggerCopyGameDataFloat({'SrcGameDataName': 'MiniGame_TimerValue', 'DstGameDataName': 'MiniGame_HorseRace_BestTime', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_HorseRace_Navi_NewRecord'})
        }
      case 2:
        if !GameDataActor.EventQueryCompareGameDataFloat({'Operator': 4, 'GameDataB': 'MiniGame_HorseRace_BestTime', 'GameDataA': 'MiniGame_TimerValue'}) {
            goto Event61
        }
    }
}

void MiniGame_HorseRace_Timeup() {
    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 0})
    SoundSystemActor.EventTriggerStopInGameBgm({'CommandLife': 2, 'FadeType': 0, 'IsImmediateOnAutoOff': False, 'WithPlayableEvent': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
    if !Animal_Epona_Adult[Animal_Epona_Adult_Owned].EventQueryRidableIsRidden({'IsCheckRiderType': False, 'RiderType': 0}) {
        Player_Event.EventTriggerPlayerEventStartWithoutStopRidingTarget()

        fork {
            ChallengeSystemActor.EventExecuteRollbackChallengeStep({'ChallengeName': 'MiniGame_HorseRace', 'IsIgnoreChallengeProgressUI': True, 'IsIgnoreCompletedChallenge': False, 'ChallengeStep': 'Ready', 'IsWaitEnd': True})
            ChallengeSystemActor.EventTriggerUnshowTimerUI()
            Npc_Hylia_Malon_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_48', 'MaintainPerformanceState': 0})
        } {
            Player_Event.EventPlayerSetExtraOrderDecelerateToStop({'IsWaitEnd': True, 'StopToTime': 120, 'WaitUntilStable': False})
            Player_Event.EventPlayerPlayASFollowRideHorse({'IsWaitEnd': False})
        }

        Event112:
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_HorseRace_Navi_Failed', 'Index': -1, 'Value': True})
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        call MiniGame_HorseRace_Clean()


        call Warp_Malon_and_Link_and_Epona()

        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'ResumeDelay': 0})
        Npc_Hylia_Malon_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_38'})
        Npc_Hylia_Malon_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_28', 'MaintainPerformanceState': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    } else {
        ChallengeSystemActor.EventExecuteRollbackChallengeStep({'ChallengeName': 'MiniGame_HorseRace', 'IsIgnoreChallengeProgressUI': True, 'IsIgnoreCompletedChallenge': False, 'ChallengeStep': 'Ready', 'IsWaitEnd': True})
        ChallengeSystemActor.EventTriggerUnshowTimerUI()
        Npc_Hylia_Malon_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_48', 'MaintainPerformanceState': 0})
        goto Event112
    }
}

void MiniGame_HorseRace_WrongWay() {
    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 0})
    SoundSystemActor.EventTriggerStopInGameBgm({'CommandLife': 2, 'FadeType': 0, 'IsImmediateOnAutoOff': False, 'WithPlayableEvent': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
    Player_Event.EventTriggerPlayerEventStartWithoutStopRidingTarget()

    fork {
        ChallengeSystemActor.EventExecuteRollbackChallengeStep({'ChallengeName': 'MiniGame_HorseRace', 'IsIgnoreChallengeProgressUI': True, 'IsIgnoreCompletedChallenge': False, 'ChallengeStep': 'Ready', 'IsWaitEnd': True})
        ChallengeSystemActor.EventTriggerMiniGameTimerStop()
        ChallengeSystemActor.EventTriggerUnshowTimerUI()
        Npc_Hylia_Malon_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_53', 'MaintainPerformanceState': 0})
    } {
        Player_Event.EventPlayerSetExtraOrderDecelerateToStop({'IsWaitEnd': True, 'StopToTime': 120, 'WaitUntilStable': False})
        Player_Event.EventPlayerPlayASFollowRideHorse({'IsWaitEnd': False})
    }

    goto Event112
}

void Playing_Npc_Hylia_Malon_Adult_Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Minigame_HorseRace_MalonSayStart', 'Index': -1}) {
        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'MiniGame_HorseRace_ProgressRound', 'Value': 1}) {
          case 0:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorseRace_IsRoundOne'}) {
                Npc_Hylia_Malon_Adult.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/MiniGame_HorseRace:Near_02'})
            } else
            Event155:
            if !Npc_Hylia_Malon_Adult.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_Hylia_Malon_Adult.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/MiniGame_HorseRace:Near_05'})
            } else {
                Npc_Hylia_Malon_Adult.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/MiniGame_HorseRace:Near_04'})
            }
          case [1, 2]:
            goto Event155
        }
    } else {
        Npc_Hylia_Malon_Adult.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/MiniGame_HorseRace:Near_03'})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Minigame_HorseRace_MalonSayStart', 'Value': True, 'Index': -1})
    }
}

void TalonsTalk() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_LeaveKakariko_Npc_Hylia_Talon_Adult'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_17', 'MaintainPerformanceState': 0})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_18', 'MaintainPerformanceState': 0})
    }
}

void InterestTalk_Malon_Adult() {
    if Npc_EventStarter.EventQueryAIScheduleGetReceiveInterestTypeAll() == 30 {
        switch GameSystemActor.EventQueryRandomChoice3() {
          case 0:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_39', 'MaintainPerformanceState': 0})
            Event213:
            Npc_EventStarter.EventExecuteAIScheduleReceiveInterestInfo({'IsWaitEnd': True})
          case 1:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_40', 'MaintainPerformanceState': 0})
            goto Event213
          case 2:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_41', 'MaintainPerformanceState': 0})
            goto Event213
        }
    }
}

void IngosTalk() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_LeaveKakariko_Npc_Hylia_Talon_Adult'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_19', 'MaintainPerformanceState': 0})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_20', 'MaintainPerformanceState': 0})
    }
}

void EponasTalk() {
    if !Player_Event.EventQueryIsHorseEponaNear({'Distance': 15.0}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_49', 'MaintainPerformanceState': 0})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_43', 'MaintainPerformanceState': 0})
    }
}

void GoodBye() {
    if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_42', 'MaintainPerformanceState': 0})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_23', 'MaintainPerformanceState': 0})
    }
}

void Playing_Npc_Hylia_Malon_Adult_Talk() {

    call InitTalk.InitTalk_NoMaskTalk({'Arg_Greeting': 4, 'Arg_Turn': 3})

    Npc_Hylia_Malon_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 3, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_34', 'ChoiceLabel3': 11, 'ChoiceLabel1': 5, 'ChoiceLabel2': 4, 'MaintainPerformanceState': 0})
    switch GameSystemActor.EventQueryTalkChoice3() {
      case 0:
        Npc_Hylia_Malon_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_36', 'MaintainPerformanceState': 0})
        ChallengeSystemActor.EventExecuteRollbackChallengeStep({'ChallengeName': 'MiniGame_HorseRace', 'IsIgnoreChallengeProgressUI': True, 'IsIgnoreCompletedChallenge': False, 'ChallengeStep': 'Ready', 'IsWaitEnd': True})
        ChallengeSystemActor.EventTriggerMiniGameTimerStop()
        ChallengeSystemActor.EventTriggerUnshowTimerUI()
        SoundSystemActor.EventTriggerStopInGameBgm({'IsForceFadeTime': False, 'FadeType': 2, 'CommandLife': 0, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': True, 'WaitingResumeInGameBgm': False})
        SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Horse', 'IsUseSuspendFade': True})
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        call MiniGame_HorseRace_Clean()


        call MiniGame_HorseRace_Start()

      case 1:
        Npc_Hylia_Malon_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_35', 'MaintainPerformanceState': 0})
        ChallengeSystemActor.EventExecuteRollbackChallengeStep({'ChallengeName': 'MiniGame_HorseRace', 'IsIgnoreChallengeProgressUI': True, 'IsIgnoreCompletedChallenge': False, 'ChallengeStep': 'Ready', 'IsWaitEnd': True})
        ChallengeSystemActor.EventTriggerMiniGameTimerStop()
        ChallengeSystemActor.EventTriggerUnshowTimerUI()
        SoundSystemActor.EventTriggerStopInGameBgm({'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'FadeType': 2, 'CommandLife': 2, 'WithPlayableEvent': False, 'WaitingResumeInGameBgm': False})
        SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Horse', 'IsUseSuspendFade': True})
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_Hylia_Malon_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_32', 'MaintainPerformanceState': 0})

        call MiniGame_HorseRace_Clean()


        call Fence_Delete()

        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'ResumeDelay': 0})
        Npc_Hylia_Malon_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_28', 'MaintainPerformanceState': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
      case 2:
        Npc_Hylia_Malon_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_37', 'MaintainPerformanceState': 0})
    }
}

void MiniGame_HorseRace_Retry() {
    EventCamera.EventMoveToTargetPosCamera({'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsAtVectorReferenceActorPosOnce': False, 'IsWaitEnd': True, 'FovySetType': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-1.2799999713897705, 0.7099999785423279, -2.3499999046325684], 'AtVector': [-0.9100000262260437, -0.2199999988079071, 1.409999966621399], 'TargetFovy': 37.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    Npc_Hylia_Malon_Adult.EventTriggerBecomeSpeaker()

    call InitTalk.InitTalk_OnEvent({'Arg_Greeting': 4, 'ActorNameA': 'Npc_Hylia_Malon_Adult', 'InstanceNameA': '', 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_Malon_Adult"), 'Arg_Turn': 3})

    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'ResumeDelay': 0})
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_HorseRace_PenaltyCount', 'Value': 0, 'Index': -1}) {
      case [0, 1]:
        Event221:
        Npc_Hylia_Malon_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_29', 'MaintainPerformanceState': 0})
        Npc_Hylia_Malon_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_31', 'MaintainPerformanceState': 0})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            Npc_Hylia_Malon_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_36', 'MaintainPerformanceState': 0})
            SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 3, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
            Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
            EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'FovySetType': 0, 'MoveTime': 90, 'Actor1ActorName': 'Player_Event', 'PosVector': [-0.009999999776482582, 2.25, -4.559999942779541], 'AtVector': [0.0, 1.0, -0.009999999776482582], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': True, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})

            call MiniGame_HorseRace_Clean()


            call RetryStart()

        } else {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
            UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            Npc_Hylia_Malon_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_32', 'MaintainPerformanceState': 0})

            call Warp_Malon_and_Link_and_Epona()

            UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            Npc_Hylia_Malon_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_33', 'MaintainPerformanceState': 0})
        }
      case 2:
        Npc_Hylia_Malon_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_24', 'MaintainPerformanceState': 0})
        goto Event221
    }
}

void RetryStart() {
    Npc_Hylia_Malon_Adult.EventNPCTurnToTarget({'IsWaitEnd': True, 'IsConfront': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'Direction': 0.0, 'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'HorseRacePlayingMalonPos', 'FaceControlType': 0})
    Npc_Hylia_Malon_Adult.EventPlayAS({'ASName': 'Act_StartingSignal', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    goto Event327
}

void Fence_Delete() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_HorseRace_Establishing', 'Value': False, 'Index': -1})
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
}

void Warp_Malon_and_Link_and_Epona() {

    call MiniGame_HorseRace_Clean()


    call Fence_Delete()

    Npc_Hylia_Malon_Adult.EventTriggerAIScheduleSelectSchedule()
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    Npc_Hylia_Malon_Adult.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'InstanceName': '', 'AnchorType': 4, 'ClothWarpMode': 2})
    Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'UseDemoWait': True, 'NotChangeRot': False, 'InstanceName': 'HorseRacePlayerStartPos', 'ASCommand': 'EvtWait'})
    Event193:
    Player_Event.EventPlayerHorseGetOff({'IsWaitEnd': True})
    if !Animal_Epona_Adult[Animal_Epona_Adult_Owned].EventQueryRidableIsRidden({'IsCheckRiderType': False, 'RiderType': 0}) {
        EventSystemActor.EventWait({'Frames': 2, 'IsWaitEnd': True})
        goto Event193
    } else {
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'InstanceName': 'ResultPlayerPos', 'ASCommand': 'EvtWait'})

        fork {
            Player_Event.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'ActorName': 'Npc_Hylia_Malon_Adult', 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})
        } {
            Npc_Hylia_Malon_Adult.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        }

        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsAtVectorReferenceActorPosOnce': False, 'IsWaitEnd': True, 'FovySetType': 0, 'Actor1ActorName': 'Npc_Hylia_Malon_Adult', 'PosVector': [-3.4100000858306885, 1.3200000524520874, 2.369999885559082], 'AtVector': [0.8500000238418579, 1.2400000095367432, 0.5699999928474426], 'TargetFovy': 37.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        Npc_Hylia_Malon_Adult.EventTriggerBecomeSpeaker()
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 2})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    }
}

void MalonTalk() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 4, 'ChoiceLabel2': 8, 'ChoiceLabel3': 9, 'ChoiceLabel4': 10, 'ChoiceLabel1': 7, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_06', 'MaintainPerformanceState': 0})
    switch GameSystemActor.EventQueryTalkChoice4() {
      case 0:

        call NpcCommon.Npc_IsConfront({'NpcActor': ActorIdentifier(name="Npc_Hylia_Malon_Adult")})


        call TalonsTalk()

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'ChoiceLabel3': 10, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_15', 'MaintainPerformanceState': 0})
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:

            call IngosTalk()

            Event187:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 2, 'ChoiceLabel2': 10, 'ChoiceLabel1': 9, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_15', 'MaintainPerformanceState': 0})
            if !GameSystemActor.EventQueryTalkChoice2() {

                call EponasTalk()

                Event196:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_16', 'MaintainPerformanceState': 0})
            } else {
                Event428:
                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})

                call GoodBye()

            }
          case 1:

            call EponasTalk()

            Event189:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 8, 'ChoiceLabel4': 0, 'ChoiceNumber': 2, 'ChoiceLabel2': 10, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_15', 'MaintainPerformanceState': 0})
            if !GameSystemActor.EventQueryTalkChoice2() {

                call IngosTalk()

                goto Event196
            } else {
                goto Event428
            }
          case 2:
            Event427:
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})

            call GoodBye()

        }
      case 1:

        call NpcCommon.Npc_IsConfront({'NpcActor': ActorIdentifier(name="Npc_Hylia_Malon_Adult")})


        call IngosTalk()

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 7, 'ChoiceNumber': 3, 'ChoiceLabel2': 9, 'ChoiceLabel3': 10, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_15', 'MaintainPerformanceState': 0})
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:

            call TalonsTalk()

            goto Event187
          case 1:

            call EponasTalk()

            Event191:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 2, 'ChoiceLabel2': 10, 'ChoiceLabel1': 7, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_15', 'MaintainPerformanceState': 0})
            if !GameSystemActor.EventQueryTalkChoice2() {

                call TalonsTalk()

                goto Event196
            } else {
                goto Event428
            }
          case 2:
            goto Event427
        }
      case 2:

        call NpcCommon.Npc_IsConfront({'NpcActor': ActorIdentifier(name="Npc_Hylia_Malon_Adult")})


        call EponasTalk()

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 8, 'ChoiceLabel1': 7, 'ChoiceNumber': 3, 'ChoiceLabel3': 10, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_15', 'MaintainPerformanceState': 0})
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:

            call TalonsTalk()

            goto Event189
          case 1:

            call IngosTalk()

            goto Event191
          case 2:
            goto Event427
        }
      case 3:

        call GoodBye()

    }
}

void RuleTalk() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 1, 'ChoiceLabel2': 3, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_11', 'ChoiceNumber': 3, 'MaintainPerformanceState': 0})
    Event320:
    switch GameSystemActor.EventQueryTalkChoice3() {
      case 0:

        call NpcCommon.Npc_IsConfront({'NpcActor': ActorIdentifier(name="Npc_Hylia_Malon_Adult")})


        call RaceStartTalk()

      case 1:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_12', 'MaintainPerformanceState': 0})

        call NpcCommon.Npc_IsConfront({'NpcActor': ActorIdentifier(name="Npc_Hylia_Malon_Adult")})

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 3, 'ChoiceLabel3': 1, 'ChoiceLabel2': 3, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_11', 'MaintainPerformanceState': 0})
        goto Event320
      case 2:

        call GoodBye()

    }
}

void RaceStartTalk() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorseRace_IsNewRecord'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'NaviChat_Cancel_HorseRaceClear'})
    }

    call SubEvent_GetSwordBigGoron.SubEvent_TimerCheck()

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SubEvent_TimerCheck_Canceled'}) {

        call GoodBye()

    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorseRace_IsNewRecord'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_13', 'MaintainPerformanceState': 0})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_14', 'MaintainPerformanceState': 0})
    }
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 3, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call MiniGame_HorseRace_Start()

}

void MiniGame_HorseRace_Retire2() {

    call Common.AirStartUp_OnlyStopInAir()

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_Hylia_Malon_Adult.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Npc_Hylia_Malon_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_34', 'ChoiceLabel3': 11, 'ChoiceNumber': 2, 'ChoiceLabel1': 5, 'ChoiceLabel2': 4, 'MaintainPerformanceState': 0, 'ChoiceCancelNo': 1})
    if !GameSystemActor.EventQueryTalkChoice2() {
        Npc_Hylia_Malon_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_36', 'MaintainPerformanceState': 0})
        ChallengeSystemActor.EventExecuteRollbackChallengeStep({'ChallengeName': 'MiniGame_HorseRace', 'IsIgnoreChallengeProgressUI': True, 'IsIgnoreCompletedChallenge': False, 'ChallengeStep': 'Ready', 'IsWaitEnd': True})
        ChallengeSystemActor.EventTriggerMiniGameTimerStop()
        ChallengeSystemActor.EventTriggerUnshowTimerUI()
        SoundSystemActor.EventTriggerStopInGameBgm({'IsForceFadeTime': False, 'FadeType': 2, 'CommandLife': 0, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': True, 'WaitingResumeInGameBgm': False})
        SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Horse', 'IsUseSuspendFade': True})
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        call MiniGame_HorseRace_Clean()


        call MiniGame_HorseRace_Start()

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    } else {
        Npc_Hylia_Malon_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_35', 'MaintainPerformanceState': 0})
        ChallengeSystemActor.EventExecuteRollbackChallengeStep({'ChallengeName': 'MiniGame_HorseRace', 'IsIgnoreChallengeProgressUI': True, 'IsIgnoreCompletedChallenge': False, 'ChallengeStep': 'Ready', 'IsWaitEnd': True})
        ChallengeSystemActor.EventTriggerMiniGameTimerStop()
        ChallengeSystemActor.EventTriggerUnshowTimerUI()
        SoundSystemActor.EventTriggerStopInGameBgm({'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'FadeType': 2, 'CommandLife': 2, 'WithPlayableEvent': False, 'WaitingResumeInGameBgm': False})
        SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Horse', 'IsUseSuspendFade': True})
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_Hylia_Malon_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_32', 'MaintainPerformanceState': 0})

        call MiniGame_HorseRace_Clean()


        call Fence_Delete()


        call Warp_Malon_and_Link_and_Epona()

        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'ResumeDelay': 0})
        Npc_Hylia_Malon_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_28', 'MaintainPerformanceState': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    }
}

void NoEponaTalk() {
    if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 1, 'ChoiceLabel2': 3, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_54', 'ChoiceNumber': 0})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_42', 'MaintainPerformanceState': 0})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 1, 'ChoiceLabel2': 3, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_55', 'ChoiceNumber': 0})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_23', 'MaintainPerformanceState': 0})
    }
}

void First_Talk() {
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'MiniGame_HorseRace_FirstTalkToMalon'})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_01', 'MaintainPerformanceState': 0})

    fork {
        GameSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
        Npc_EventStarter.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_EventStarter.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkingL', 'IsWaitEnd': False, 'ClothWarpMode': 0})
    }

    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_02', 'MaintainPerformanceState': 0})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_HorseRace:Talk_21', 'MaintainPerformanceState': 0})
}
