-------- EventFlow: Minigame_HorsebackArchery --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventSuspend', 'EventWait', 'EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep', 'EventOpenPlayerStatusMiniGame', 'EventClosePlayerStatusMiniGame', 'EventExecuteRollbackChallengeStep', 'EventTriggerUnshowMiniGameScoreNum', 'EventTriggerShowReady', 'EventTriggerShowGo', 'EventTriggerShowMiniGameScoreNum']
queries: ['EventQueryMiniGameTimerIsCounting']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToStarterLinkAnchor', 'EventPlayerSetExtraOrderDecelerateToStop', 'EventPlayerPlayASForFlowchart', 'EventPlayerResetItemBeforeMiniGame', 'EventPlayerSetItemForMiniGame', 'EventPlayerHorseGetOff', 'EventPlayerWait', 'EventPlayerDrawn', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerPlayASFollowRideHorse']
queries: ['EventQueryIsHorseEponaNear', 'EventQueryPlayerIsEquipArmor', 'EventQueryPlayerIsEquipMask', 'EventQueryPlayerCheckRideHorse']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAIScheduleCheckActorActionAll']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventCloseRupeeDisplay', 'EventTriggerOpenRupeeDisplay', 'EventShowFinish']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerRequestAutoSave', 'EventTriggerOwnedHorseUnregisterRail', 'EventTriggerOwnedHorseRegisterNearestRail', 'EventWait', 'EventRemoveProjectiles']
queries: ['EventQueryTalkChoice3', 'EventQueryTalkChoice2', 'EventQueryRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataInt', 'EventTriggerSetGameDataBool', 'EventTriggerCopyGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataInt', 'EventQueryCompareGameDataInt', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Gerudo_008
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventTriggerLookAtObject', 'EventTriggerChangeEmotion', 'EventPlayAS']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 4, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventChangeTemporarilyToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerIncreaseRupee']
queries: ['EventQueryHasRuppe', 'EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Animal_Epona_Adult[Animal_Epona_Adult_Owned]
entrypoint: None()
actions: ['EventTriggerRequestRideMe', 'EventTriggerSoundEnableSpMode', 'EventTriggerSoundDisableSpMode']
queries: ['EventQueryRidableIsRidden']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryIsCurrentTimeInSpecifiedTimeRange']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventTriggerStartBgmSimple', 'EventTriggerSoundControlBGM', 'EventTriggerStartInGameBgm', 'EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Gerudo_005
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventAIScheduleWarpToAnchor', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[0]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Ready_Npc_Gerudo_008_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

    switch Npc_EventStarter.EventQueryAIScheduleCheckActorActionAll() {
      case 0:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_75', 'MaintainPerformanceState': 0})
      case 1:
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_HorsebackArchery_MapIcon_Flag', 'Index': -1, 'Value': True})
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_Epona_IsCompleted_Exp'}) {
            if !Player_Event.EventQueryIsHorseEponaNear({'Distance': 30.0}) {
                if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Weapon_Range_Bow', 'Num': 1}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorsebackArchery_GotaHeart'}) {
                        Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_23', 'MaintainPerformanceState': 0})
                        if !Player_Event.EventQueryPlayerCheckRideHorse({'IsRidingAny': False, 'Type': 0, 'ActorFileName': ''}) {
                            Event327:
                            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                                Event262:
                                if !Player_Event.EventQueryPlayerIsEquipMask() {
                                    Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_03', 'MaintainPerformanceState': 0})
                                } else {
                                    Npc_Gerudo_008.EventTalk({'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_02', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MaintainPerformanceState': 0})
                                }
                                Event58:
                                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorsebackArchery_Retry', 'Value': False})
                                UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
                                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_PlayedYabusame'}) {
                                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorsebackArchery_GotaHeart'}) {
                                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorseBackArchery_Get_Quiver'}) {
                                            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {

                                                call YabusamePrize({'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_88'})

                                            } else {

                                                call YabusamePrize({'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_86'})

                                            }
                                        } else
                                        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {

                                            call YabusamePrize({'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_89'})

                                        } else {

                                            call YabusamePrize({'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_87'})

                                        }
                                    } else
                                    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {

                                        call YabusamePrize({'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_55'})

                                    } else {

                                        call YabusamePrize({'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_55'})

                                    }
                                } else
                                if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {

                                    call YabusamePrize({'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_55'})

                                } else {

                                    call YabusamePrize({'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_55'})

                                }
                            } else {
                                Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_04', 'MaintainPerformanceState': 0})
                                goto Event58
                            }
                        } else
                        if !Player_Event.EventQueryIsHorseEponaNear({'Distance': 5.0}) {
                            goto Event327
                        } else {
                            goto Event58
                        }
                    } else
                    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_HorseBackArcher_HaveTalkedAboutRentalHorse', 'Index': -1}) {
                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_HorseBackArcher_HaveTalkedAboutRentalHorse', 'Index': -1, 'Value': False})
                            Event0:
                            Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_11', 'MaintainPerformanceState': 0})
                            Event267:
                            if !Player_Event.EventQueryPlayerCheckRideHorse({'IsRidingAny': False, 'Type': 0, 'ActorFileName': ''}) {
                                goto Event262
                            } else
                            if !Player_Event.EventQueryIsHorseEponaNear({'Distance': 5.0}) {
                                goto Event262
                            } else {
                                goto Event58
                            }
                        } else {
                            Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_23', 'MaintainPerformanceState': 0})
                            goto Event267
                        }
                    } else {
                        goto Event0
                    }
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_HorseBackArcher_HaveTalkedAboutBow', 'Index': -1}) {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 3, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_81', 'MaintainPerformanceState': 0})
                    Event285:
                    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 8, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Mask_21', 'MaintainPerformanceState': 0})
                    }
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_12', 'MaintainPerformanceState': 0})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_80', 'MaintainPerformanceState': 0})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_HorseBackArcher_HaveTalkedAboutBow', 'Index': -1, 'Value': True})
                    goto Event285
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_PlayedYabusame'}) {
                if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_95', 'MaintainPerformanceState': 0})
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_94', 'MaintainPerformanceState': 0})
                }
                Event283:
                if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 8, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Mask_20', 'MaintainPerformanceState': 0})
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_HorseBackArcher_HaveTalkedAboutRentalHorse', 'Index': -1}) {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 3, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_78', 'MaintainPerformanceState': 0})
                Event44:

                call CheckBow()

                goto Event283
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_HorseBackArcher_HaveTalkedAboutRentalHorse', 'Index': -1, 'Value': True})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_11', 'MaintainPerformanceState': 0})
                Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 3, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_61', 'ChoiceNumber': 0, 'ASName': '', 'MaintainPerformanceState': 0})
                Npc_Gerudo_008.EventPlayAS({'ASName': 'Act_LookAround', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': 60.0, 'IsAnimeDriven': True, 'IsWaitEnd': False})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 3, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_77', 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
                goto Event44
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_HorseBackArcher_HaveTalkedAboutHorse', 'Index': -1}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_76', 'MaintainPerformanceState': 0})
            Event9:

            call CheckBow()

            if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 8, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Mask_19', 'MaintainPerformanceState': 0})
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_HorseBackArcher_HaveTalkedAboutHorse', 'Index': -1, 'Value': True})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_12', 'MaintainPerformanceState': 0})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_01', 'MaintainPerformanceState': 0})
            goto Event9
        }
      case [2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26]:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorseBackArchery_Get_Quiver'}) {
            if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Adult_GlassTruth'}) {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Mask_16', 'MaintainPerformanceState': 0})
                Event274:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Mask_17', 'MaintainPerformanceState': 0})
                if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 8, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Mask_18', 'MaintainPerformanceState': 0})
                }
            } else
            if !Player_Event.EventQueryPlayerIsEquipMask() {
                if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Bunny'}) {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Mask_14', 'MaintainPerformanceState': 0})
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Mask_15', 'MaintainPerformanceState': 0})
                }
                goto Event274
            } else
            switch Npc_EventStarter.EventQueryAIScheduleCheckActorActionAll() {
              case [0, 1, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26]:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_74', 'MaintainPerformanceState': 0})
              case 2:
                if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Adult_GlassTruth'}) {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Mask_82', 'MaintainPerformanceState': 0})
                }
                if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_70', 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'MaintainPerformanceState': 0, 'ChoiceNumber': 0})
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_37', 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'MaintainPerformanceState': 0, 'ChoiceNumber': 0})
                }
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_38', 'MaintainPerformanceState': 0})
                if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 8, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Mask_11', 'MaintainPerformanceState': 0})
                }
            }
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Adult_GlassTruth'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Mask_82', 'MaintainPerformanceState': 0})
        }
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_70', 'ChoiceNumber': 2, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_37', 'ChoiceNumber': 2, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'MaintainPerformanceState': 0})
        }
        if !GameSystemActor.EventQueryTalkChoice2() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_73', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_HorsebackArchery_MapIcon_Flag', 'Index': -1, 'Value': True})
            Event168:
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_Epona_IsCompleted_Exp'}) {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_38', 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_72', 'MaintainPerformanceState': 0})
            }
            if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 8, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Mask_11', 'MaintainPerformanceState': 0})
            }
        } else
        goto Event168
    }
}

void Playing_Npc_Gerudo_008_EachFrame() {
    EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
}

void MiniGame_HorsebackArchery_Finish() {
    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 0})
    SoundSystemActor.EventTriggerStopInGameBgm({'IsImmediateOnAutoOff': True, 'CommandLife': 2, 'FadeType': 1, 'WithPlayableEvent': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
    GameSystemActor.EventTriggerRequestAutoSave()

    fork {

        call HorseBackArchery_FinishUI()

    } {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MiniGame_IsZeroEqualOverwriteItemNum'}) {
            Event312:
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
            Animal_Epona_Adult[Animal_Epona_Adult_Owned].EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 4, 'FadeTime': 0.0})
        } else {
            Animal_Epona_Adult[Animal_Epona_Adult_Owned].EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 4, 'FadeTime': 0.0})
            PostProcessingActor.EventSetDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'EndDistance': 9.0, 'EndFNumber': 17.0, 'EndBluarLevel': 3.0})
            EventCamera.EventMoveToTargetPosCamera({'IsAtVectorReferenceActorPosOnce': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'PosVector': [28.229999542236328, 116.37000274658203, 77.30999755859375], 'AtVector': [26.84000015258789, 116.7300033569336, 73.04000091552734], 'TargetFovy': 30.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            EventCamera.EventMoveToTargetPosCamera({'IsAtVectorReferenceActorPosOnce': False, 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'FinishViewPoint', 'Actor2InstanceName': 'FinishTarget', 'IsIgnorePosVectorReferenceActorRot': True, 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'TargetFovy': 60.0, 'MoveTime': 150, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            PostProcessingActor.EventSetDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'EndBluarLevel': 3.0, 'EndFNumber': 20.0, 'EndDistance': 27.0})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            EventCamera.EventMoveToTargetPosCamera({'IsAtVectorReferenceActorPosOnce': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'PosVector': [78.22000122070312, 119.19000244140625, 25.56999969482422], 'AtVector': [47.4900016784668, 117.91000366210938, 56.90999984741211], 'TargetFovy': 16.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            goto Event312
        }
    }

    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1, 'Color': 0})
    GameSystemActor.EventTriggerOwnedHorseUnregisterRail()
    Player_Event.EventPlayerSetExtraOrderDecelerateToStop({'IsWaitEnd': True, 'StopToTime': 15, 'WaitUntilStable': False})
    Player_Event.EventPlayerPlayASFollowRideHorse({'IsWaitEnd': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})

    fork {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_HorsebackArchery_Establishing', 'Value': False, 'Index': -1})
    } {

        call MiniGame_HorseArchery_WeaponRollback()

        Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'InstanceName': 'HorsebackArcheryHorsePos', 'ASCommand': 'EvtWait'})
        Event144:
        Player_Event.EventPlayerHorseGetOff({'IsWaitEnd': True})
        if !Animal_Epona_Adult[Animal_Epona_Adult_Owned].EventQueryRidableIsRidden({'IsCheckRiderType': False, 'RiderType': 0}) {
            EventSystemActor.EventWait({'Frames': 2, 'IsWaitEnd': True})
            goto Event144
        } else {
            Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'HorsebackArcheryPlayerPos', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'ASCommand': 'EvtWait'})

            call NaviEventCommon.NaviWarp_PlayerHomePos_Choice({'IsLookAtPlayer': False, 'IsLeft': True})

        }
    }

    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:Bgm下げ', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    ChallengeSystemActor.EventClosePlayerStatusMiniGame({'IsWaitEnd': True})
    ChallengeSystemActor.EventTriggerUnshowMiniGameScoreNum({'IsWaitEnd': True})

    call InitTalk.InitTalk_OnEvent({'Arg_Turn': 4, 'Arg_Greeting': 4, 'ActorNameA': 'Npc_Gerudo_008', 'InstanceNameA': '', 'Arg_Actor': ActorIdentifier(name="Npc_Gerudo_008")})

    EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
    GameSystemActor.EventRemoveProjectiles({'IsWaitEnd': True})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Player_Event', 'PosVector': [-4.449999809265137, 1.6399999856948853, -0.49000000953674316], 'AtVector': [-0.009999999776482582, 1.2599999904632568, 1.190000057220459], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1, 'Color': 0})
    SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'ResumeDelay': 0})
    ChallengeSystemActor.EventExecuteRollbackChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'Minigame_HorsebackArchery', 'ChallengeStep': 'Ready', 'IsIgnoreChallengeProgressUI': True})
    GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataName': 'MiniGame_Score', 'DstGameDataName': 'MiniGame_Score_ForMessage', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

    call MiniGame_HorsebackArchery_Clear()


    call MiniGame_HorsebackArchery_FinishRetry()

}

void MiniGame_HorsebackArchery_FinishRetry() {
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_Score', 'Index': -1, 'Value': 1400}) {
      case 0:
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_Score', 'Index': -1, 'Value': 750}) {
          case 0:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorsebackArchery_GotaHeart'}) {
                Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_24', 'ASName': 'Act_Talk_Failure', 'MaintainPerformanceState': 0})
                Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_54', 'ASName': '', 'MaintainPerformanceState': 0})
                Event102:
                UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})

                call YabusamePrizeRetry()

            } else {
                Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_06', 'ASName': 'Act_Talk_Failure', 'MaintainPerformanceState': 0})
                Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_52', 'ASName': '', 'MaintainPerformanceState': 0})
                goto Event102
            }
          case [1, 2]:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorsebackArchery_GotaHeart'}) {
                Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_09', 'ASName': 'Act_Talk_Success', 'MaintainPerformanceState': 0})
                goto Event102
            } else {
                Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_08', 'ASName': 'Act_Talk_Success', 'MaintainPerformanceState': 0})
                Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_53', 'ASName': '', 'MaintainPerformanceState': 0})

                call HourseBackArchery_HeartGet()

                Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_07_3', 'MaintainPerformanceState': 0})
                Event297:

                call NPC_Gerudo_005_FinishwatchArcherry()

            }
        }
      case [1, 2]:
        Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_27', 'MaintainPerformanceState': 0})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorsebackArchery_GotaHeart'}) {

            call HourseBackArchery_MakeQuiverLarger()

            goto Event297
        } else {

            call HourseBackArchery_HeartGet()


            call HourseBackArchery_MakeQuiverLarger_DoubleGet()

            goto Event297
        }
    }
}

void MiniGame_HorsebackArchery_Start() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1, 'Color': 0})

    call MiniGame_HorsebackArchery_Ready()


    call NPC_Gerudo_005_watchArcherry()

    Animal_Epona_Adult[Animal_Epona_Adult_Owned].EventTriggerRequestRideMe({'TargetActorInstanceName': '', 'RidingMode': 1, 'SeatIndex': 0, 'TargetActorName': 'Player_Event'})
    Event111:
    if !Animal_Epona_Adult[Animal_Epona_Adult_Owned].EventQueryRidableIsRidden({'IsCheckRiderType': False, 'RiderType': 0}) {
        Player_Event.EventPlayerWait({'IsWaitEnd': True})
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'InstanceName': 'HorsebackArcheryRideStart', 'ASCommand': 'EvtWait'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})

        call NaviEventCommon.NaviWarp_PlayerHomePos_Choice({'IsLookAtPlayer': False, 'IsLeft': False})


        call MiniGame_HorseArchery_WeaponChange()

        PostProcessingActor.EventSetDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'EndDistance': 3.819999933242798, 'EndFNumber': 18.0, 'EndBluarLevel': 3.0})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorsebackArchery_Retry'}) {
            Event94:
            EventCamera.EventMoveToTargetPosCamera({'IsPosVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsAtVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'IsIgnorePosVectorReferenceActorRot': True, 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'AtVectorSetType': 4, 'AtVector': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'ThirdViewPoint', 'Actor2InstanceName': 'ThirdTarget2', 'EndRecelerateRate': 0.0, 'MoveToTargetPosCalcMode': 0, 'IsWaitEnd': True, 'TargetFovy': 50.0, 'MoveTime': 120, 'StartAccelerateRate': 1.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1, 'Color': 0})
            Event198:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorsebackArchery_ExplainRentalItem'}) {
                Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceNumber': 0, 'EndDialogOption': 3, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_93', 'MaintainPerformanceState': 0})
                Event342:

                call Common_Camera_Pln.CameraDoF_Default()

                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': '', 'IsAtVectorReferenceActorPosOnce': False, 'Actor1ActorName': 'Animal_Epona_Adult', 'Actor1InstanceName': 'Animal_Epona_Adult_Owned', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'TargetFovy': 55.0, 'PosVector': [0.0, 1.9610999822616577, -4.5], 'AtVector': [0.0, 1.5688999891281128, 0.0], 'MoveTime': 60, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                ChallengeSystemActor.EventTriggerShowMiniGameScoreNum({'MiniGameScoreIconType': 1})
                ChallengeSystemActor.EventOpenPlayerStatusMiniGame({'MiniGameType': 6, 'IsWaitEnd': False})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Horse', 'CommandLife': 2, 'IsReleaseDucking': True})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
                ChallengeSystemActor.EventTriggerShowReady({'MiniGameType': 6})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 43})
                Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 123})

                fork {
                    ChallengeSystemActor.EventTriggerShowGo({'MiniGameType': 6})
                } {
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 26})
                }

                GameSystemActor.EventTriggerOwnedHorseRegisterNearestRail()
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Playing', 'ChallengeName': 'Minigame_HorsebackArchery'})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_HorsebackArchery_ExplainRentalItem'})
                Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_51', 'MaintainPerformanceState': 0})
                goto Event342
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorsebackArchery_ISGetSpecialPrize'}) {
            goto Event94
        } else {
            EventCamera.EventMoveToTargetPosCamera({'IsPosVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsAtVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EndRecelerateRate': 0.0, 'StartAccelerateRate': 0.0, 'IsWaitEnd': True, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'IsIgnorePosVectorReferenceActorRot': True, 'Actor1InstanceName': 'FirstViewPoint', 'Actor2InstanceName': 'FirstTarget2', 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'AtVectorSetType': 4, 'AtVector': [0.0, 0.0, 0.0], 'MoveTime': 0, 'TargetFovy': 45.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1, 'Color': 0})

            fork {
                Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_36', 'EndDialogOption': 3, 'IsCloseDialog': False, 'MaintainPerformanceState': 0})
            } {
                EventCamera.EventMoveToTargetPosCamera({'IsPosVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsAtVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EndRecelerateRate': 0.0, 'StartAccelerateRate': 0.0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'IsIgnorePosVectorReferenceActorRot': True, 'Actor1InstanceName': 'FirstViewPoint', 'Actor2InstanceName': 'FirstTarget2', 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'AtVectorSetType': 4, 'AtVector': [0.0, 0.0, 0.0], 'IsWaitEnd': False, 'MoveTime': 300, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            }

            EventCamera.EventMoveToTargetPosCamera({'IsPosVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsAtVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'IsIgnorePosVectorReferenceActorRot': True, 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'AtVectorSetType': 4, 'AtVector': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'SecondViewPoint', 'Actor2InstanceName': 'SecondTarget2', 'EndRecelerateRate': 0.0, 'MoveToTargetPosCalcMode': 0, 'IsWaitEnd': True, 'TargetFovy': 50.0, 'MoveTime': 120, 'StartAccelerateRate': 1.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceNumber': 0, 'EndDialogOption': 3, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_92', 'MaintainPerformanceState': 0})
            EventCamera.EventMoveToTargetPosCamera({'IsPosVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsAtVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'IsIgnorePosVectorReferenceActorRot': True, 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'AtVectorSetType': 4, 'AtVector': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'ThirdViewPoint', 'Actor2InstanceName': 'ThirdTarget2', 'EndRecelerateRate': 0.0, 'MoveToTargetPosCalcMode': 0, 'IsWaitEnd': True, 'TargetFovy': 50.0, 'MoveTime': 120, 'StartAccelerateRate': 1.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            goto Event198
        }
    } else {
        EventSystemActor.EventWait({'Frames': 2, 'IsWaitEnd': True})
        goto Event111
    }
}

void MiniGame_HorsebackArchery_Ready() {
    GameSystemActor.EventRemoveProjectiles({'IsWaitEnd': True})
    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'MiniGame_HorsebackArchery_Progress', 'Index': -1, 'Value': 0})
    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'MiniGame_Score', 'Index': -1, 'Value': 0})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_HorsebackArchery_Establishing', 'Index': -1, 'Value': True})
}

void MiniGame_HorsebackArchery_Clear() {
    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'MiniGame_HorsebackArchery_Progress', 'Index': -1, 'Value': 0})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorsebackArchery_Retry', 'Value': True})
}

void MiniGame_HorseArchery_WeaponRollback() {
    Player_Event.EventPlayerResetItemBeforeMiniGame({'IsWaitEnd': True})
}

void MiniGame_HorseArchery_WeaponChange() {
    Player_Event.EventPlayerSetItemForMiniGame({'UsingItemMiniGame': 30, 'IsWaitEnd': True, 'ItemNum': 20, 'IsEquipMiniGameActor': True})
    Player_Event.EventPlayerDrawn({'EquipmentSlot': 3, 'IsWaitEnd': True, 'IsDrawnImmediate': True})
}

void MiniGame_HorsebackArchery_ArrowIsNoneFinish() {

    call MiniGame_HorsebackArchery_Finish()

}

void Ready_Npc_Gerudo_008_Near() {
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorActionAll() {
      case 0:
        Npc_Gerudo_008.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Gerudo_008:Near_03'})
      case 1:
        Npc_Gerudo_008.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Gerudo_008:Near_01'})
      case 2:
        Npc_Gerudo_008.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Gerudo_008:Near_02'})
    }
}

void HourseBackArchery_HeartGet() {
    Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_07', 'MaintainPerformanceState': 0})
    Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_07_2', 'ASName': '', 'MaintainPerformanceState': 0})

    fork {

        call Dm_SY_GetInEvent.GetInEvent_NotTurn_PosCamera({'NpcActorName': 'Npc_Gerudo_008', 'ActorName': 'Obj_Heart_Piece', 'NpcInstanceName': '', 'Target': 3})

    } {
        Npc_Gerudo_008.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    }

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_HorsebackArchery_GotaHeart', 'Index': -1, 'Value': True})
}

void HourseBackArchery_MakeQuiverLarger() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_HorseBackArchery_Get_Quiver', 'Index': -1}) {
        if !GameSystemActor.EventQueryRandomChoice2() {
            Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_100', 'ASName': ''})
        } else {
            Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_101', 'ASName': ''})
        }
        Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ASName': 'Handover', 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_98', 'MaintainPerformanceState': 0})

        fork {

            call Dm_SY_GetInEvent.GetInEvent_NotTurn_PosCamera({'ActorName': 'Obj_Rupee_Purple', 'NpcActorName': 'Npc_Gerudo_008', 'Target': 3, 'NpcInstanceName': ''})

        } {
            Npc_Gerudo_008.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        }

        UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
        Event158:
        Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_18', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_HorsebackArchery_ISGetSpecialPrize'})
    } else {
        Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_34', 'ASName': 'Handover', 'MaintainPerformanceState': 0})
        Event99:
        if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Item_Quiver_Medium'}) {

            fork {

                call Dm_SY_GetInEvent.GetInEvent_NotTurn_PosCamera({'NpcActorName': 'Npc_Gerudo_008', 'ActorName': 'Item_Quiver_Large', 'Target': 3, 'NpcInstanceName': ''})

            } {
                Npc_Gerudo_008.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
            }

        } else {

            fork {

                call Dm_SY_GetInEvent.GetInEvent_NotTurn_PosCamera({'NpcActorName': 'Npc_Gerudo_008', 'ActorName': 'Item_Quiver_Medium', 'Target': 3, 'NpcInstanceName': ''})

            } {
                Npc_Gerudo_008.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
            }

        }
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_HorseBackArchery_Get_Quiver'})
        Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_39', 'MaintainPerformanceState': 0})
        goto Event158
    }
}

void HorseBackArchery_FinishUI() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_HorsebackArchery_Played', 'Index': -1}) {
        if !GameDataActor.EventQueryCompareGameDataInt({'GameDataB': 'MiniGame_HorsebackArchery_BestScore', 'GameDataA': 'MiniGame_Score', 'Operator': 2}) {
            GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'MiniGame_Score', 'DstGameDataName': 'MiniGame_HorsebackArchery_BestScore'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_HorsebackArchery_NewScore'})
            UISystemActor.EventShowFinish({'Type': 1, 'IsNewRecords': True, 'IsWaitEnd': True, 'MiniGameType': 6})
        } else {
            Event221:
            UISystemActor.EventShowFinish({'Type': 1, 'IsNewRecords': False, 'IsWaitEnd': True, 'MiniGameType': 6})
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_HorsebackArchery_Played', 'Index': -1, 'Value': True})
        GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'MiniGame_Score', 'DstGameDataName': 'MiniGame_HorsebackArchery_BestScore'})
        goto Event221
    }
}

void NPC_Gerudo_005_watchArcherry() {
    if !EventWorldManagerController.EventQueryIsCurrentTimeInSpecifiedTimeRange({'StartTime': 11, 'EndTme': 18}) {
        Npc_Gerudo_005.EventTriggerParticipateEvent()
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Gerudo_005_WatchArchery_atFortress'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        Npc_Gerudo_005.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 6, 'InstanceName': '', 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'ClothWarpMode': -1})
        Npc_Gerudo_005.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    } else {
        Npc_Gerudo_005.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'ClothWarpMode': -1, 'AnchorType': 0})
        Npc_Gerudo_005.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    }
}

void NPC_Gerudo_005_FinishwatchArcherry() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_Gerudo_005_WatchArchery_atFortress', 'Value': False})
}

void CheckBow() {
    if PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Weapon_Range_Bow', 'Num': 1}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_79', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_HorseBackArcher_HaveTalkedAboutBow', 'Index': -1, 'Value': True})
    }
}

void HourseBackArchery_MakeQuiverLarger_DoubleGet() {
    Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_25', 'ASName': 'Handover', 'MaintainPerformanceState': 0})
    goto Event99
}

void YabusamePrize() {
    Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'MessageId': 'MessageId', 'MaintainPerformanceState': 0})
    Event62:
    switch GameSystemActor.EventQueryTalkChoice3() {
      case 0:
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0, 'ASCommand': 'EvtTalkYes', 'IsWaitEnd': True})
        if !PouchSystemActor.EventQueryHasRuppe({'Value': 30}) {

            call SubEvent_GetSwordBigGoron.SubEvent_TimerCheck()

            if !ChallengeSystemActor.EventQueryMiniGameTimerIsCounting() {
                Event55:
                UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})

                call NPC_Gerudo_005_FinishwatchArcherry()

            } else {
                Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_20', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MaintainPerformanceState': 0})

                fork {
                    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkHandOver', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
                    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'EvtTalk', 'ClothWarpMode': 0})
                } {
                    Npc_Gerudo_008.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
                    Npc_Gerudo_008.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Act_Normal_Wait'})
                    Npc_Gerudo_008.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
                    Npc_Gerudo_008.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Handover', 'IsWaitEnd': False})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                } {
                    EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 110})
                    PouchSystemActor.EventTriggerIncreaseRupee({'Value': -30})
                }

                UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GerudoFortress_PlayedYabusame'})
                Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_28', 'MaintainPerformanceState': 0})
                EventSystemActor.EventTransition({'EventName': 'MiniGame_HorsebackArchery_Start', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
            }
        } else {
            Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_22', 'MaintainPerformanceState': 0})
            goto Event55
        }
      case 1:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorsebackArchery_Retry'}) {
            Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_99', 'MaintainPerformanceState': 0})
            Event68:
            Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_15', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_HorsebackArchery_ExplainRentalItem'})
            Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_50', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorsebackArchery_Introduction', 'Value': True})
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorsebackArchery_GotaHeart'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorseBackArchery_Get_Quiver'}) {
                    Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_35', 'MaintainPerformanceState': 0})
                } else {
                    Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_17', 'MaintainPerformanceState': 0})
                }
                Event73:

                call YabusamePrizeLoop()

            } else {
                Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_16', 'MaintainPerformanceState': 0})
                goto Event73
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HorsebackArchery_Introduction'}) {
            Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_30', 'MaintainPerformanceState': 0})
        }
        goto Event68
      case 2:
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0, 'ASCommand': 'EvtTalkNo', 'IsWaitEnd': True})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GerudoFortress_PlayedYabusame', 'Index': -1}) {
            Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_18', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MaintainPerformanceState': 0})
        } else {
            Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_63', 'MaintainPerformanceState': 0})
        }
        UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
            Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 8, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Mask_13', 'MaintainPerformanceState': 0})
        }

        call NPC_Gerudo_005_FinishwatchArcherry()

    }
}

void YabusamePrizeLoop() {
    Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_29', 'MaintainPerformanceState': 0})
    goto Event62
}

void YabusamePrizeRetry() {
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_Score', 'Index': -1, 'Value': 750}) {
      case 0:
        Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_10', 'MaintainPerformanceState': 0})
        goto Event62
      case [1, 2]:
        Npc_Gerudo_008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'MessageId': 'EventFlowMsg/Npc_Gerudo_008:Talk_13', 'MaintainPerformanceState': 0})
        goto Event62
    }
}
