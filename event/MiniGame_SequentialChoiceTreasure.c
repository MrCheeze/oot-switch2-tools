-------- EventFlow: MiniGame_SequentialChoiceTreasure --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataInt', 'EventTriggerAddOrSubGameDataInt', 'EventTriggerSetGameDataBool', 'EventTriggerSetDayTimeStruct']
queries: ['EventQueryIsGameDataBool', 'EventQueryGameDataIntBranch', 'EventQueryCheckElapsedTime']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryIsCurrentTimeInSpecifiedTimeRange']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventDisableRecentTalkFlag', 'EventTriggerSetHaveTalked']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryHaveTalked', 'EventQueryAvoidDuplicationRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerRequestAutoSave', 'EventWait', 'EventReserveBancChange', 'EventTriggerSendErrorToEventResource', 'EventWaitTalkCameraInterpolationEnd']
queries: ['EventQueryTalkChoice3', 'EventQueryExistEventStarter', 'EventQueryTalkChoice2', 'EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventCloseRupeeDisplay', 'EventEventFadeOut', 'EventEventFadeIn', 'EventTriggerSetDisplaySmallKey', 'EventTriggerCloseRupeeDisplay', 'EventTriggerOpenRupeeDisplay']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryHasRuppe', 'EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventSuspend']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteRollbackChallengeStep', 'EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventSendEventTalkMessageToPlayerCamera', 'EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint']
queries: ['EventQueryCameraCheckRayCastForMoveToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToStarterLinkAnchor', 'EventPlayerTurnAndLook', 'EventTriggerHealLife', 'EventPlayerDie', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerSetTimerInvalidDoAction']
queries: ['EventQueryPlayerIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Hylia_022_Shop_Child
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBecomeSpeaker', 'EventTriggerSetModelLodManual']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: TreasureBox_EventStarter
entrypoint: None()
actions: ['EventTriggerTBoxRequestDeleteContentDisplay', 'EventDoNothing']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: Obj_Door_ShopTreasureBox[RestrictedDoor_Market_01]
entrypoint: None()
actions: ['EventDoorClose']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectStopGetItem']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchContentGuestPerformer
entrypoint: None()
actions: ['EventTriggerRequestDeath']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 2}

void Ready_Npc_Hylia_022_Shop_Child_Talk() {

    call BackMove_Check({'Arg_Turn': 4, 'Arg_Greeting': 4})

    Obj_Door_ShopTreasureBox[RestrictedDoor_Market_01].EventDoorClose({'IsWaitEnd': True})
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Market_MiniGame_ChoiceTreasure_FirstTalk'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Market_MiniGame_ChoiceTreasure_FirstTalk'})
    }

    call TalkReset()

    if !EventWorldManagerController.EventQueryIsCurrentTimeInSpecifiedTimeRange({'EndTme': 6, 'StartTime': 20}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_ChoiceTreasure_IsClear'}) {
            if !GameDataActor.EventQueryCheckElapsedTime({'GameDataName': 'MiniGame_ChoiceTreasure_ElapsedTime', 'ElapsedHour': 12, 'ElapsedMinute': 0}) {
                Event79:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Market_MiniGame_ChoiceTreasure_GameOver'}) {
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Market_MiniGame_ChoiceTreasure_GameOver', 'Value': False})
                    UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
                    Npc_Hylia_022_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ASName': '', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_102', 'ChoiceNumber': 3, 'ChoiceLabel2': 4, 'ChoiceLabel3': 1})
                    Event12:
                    switch GameSystemActor.EventQueryTalkChoice3() {
                      case 0:
                        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'EvtTalkYes', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

                        call StartMinigame()

                      case 1:
                        Npc_Hylia_022_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_17', 'MaintainPerformanceState': 0})

                        call HowToPlay()

                      case 2:

                        call CancelMinigame()

                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Market_MiniGame_ChoiceTreasure_ChoiceNotPlay'})
                    }
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Market_MiniGame_ChoiceTreasure_MissGame', 'Index': -1}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Market_Minigame_ChoiceTreasure_MissReplayTalk'}) {
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Market_Minigame_ChoiceTreasure_MissReplayTalk', 'Value': False})
                        Npc_Hylia_022_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_50', 'MaintainPerformanceState': 0})
                        Event278:
                        UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
                        Npc_Hylia_022_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 3, 'ChoiceLabel3': 1, 'ChoiceLabel2': 4, 'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_03', 'MaintainPerformanceState': 0})
                        goto Event12
                    } else
                    Event271:
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Market_MiniGame_ChoiceTreasure_ChoiceNotPlay'}) {
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Market_MiniGame_ChoiceTreasure_ChoiceNotPlay'})
                        Npc_Hylia_022_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_19', 'MaintainPerformanceState': 0})
                        goto Event278
                    } else {
                        Npc_Hylia_022_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_49', 'MaintainPerformanceState': 0})
                        goto Event278
                    }
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Market_MiniGame_ChoiceTreasure_HowtoPlay'}) {
                    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                        goto Event271
                    } else
                    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorName': 'Armor_Child_GlassTruth', 'ArmorSlot': 0}) {
                        Npc_Hylia_022_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_91', 'MaintainPerformanceState': 0})
                    } else {
                        Npc_Hylia_022_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_90', 'MaintainPerformanceState': 0})
                    }
                    Npc_Hylia_022_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_07', 'MaintainPerformanceState': 0})
                    Event1:
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_ChoiceTreasure_TalkedAboutRules'}) {
                        goto Event278
                    } else {
                        Npc_Hylia_022_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_02', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MaintainPerformanceState': 0})

                        call AboutPrize()

                        goto Event278
                    }
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Market_MiniGame_ChoiceTreasure_HowtoPlay'})
                    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorName': 'Armor_Child_GlassTruth', 'ArmorSlot': 0}) {
                        Npc_Hylia_022_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_06', 'MaintainPerformanceState': 0})
                    } else {
                        Npc_Hylia_022_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_01', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ASName': '', 'MaintainPerformanceState': 0})
                    }
                    Npc_Hylia_022_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_07', 'MaintainPerformanceState': 0})
                    goto Event1
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.MiniGame_SequentialChoiceTreasure_Ready_Npc_Hylia_022_Shop_Child_Talk_Event152', 'Index': -1}) {
                Npc_Hylia_022_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_101', 'MaintainPerformanceState': 0})
            } else {
                Npc_Hylia_022_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_100', 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.MiniGame_SequentialChoiceTreasure_Ready_Npc_Hylia_022_Shop_Child_Talk_Event152', 'Value': True, 'Index': -1})
            }
        } else
        goto Event79
    } else
    if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
        Npc_Hylia_022_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_80', 'MaintainPerformanceState': 0})
    } else {
        Npc_Hylia_022_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_81', 'MaintainPerformanceState': 0})
    }
    if Npc_EventStarter.EventQueryHaveTalked() {
        Npc_EventStarter.EventTriggerSetHaveTalked({'value': False, 'IsReflectWhenSleep': False})
    }
    Npc_EventStarter.EventDisableRecentTalkFlag({'IsWaitEnd': True})
}

void AboutPrize() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_ChoiceTreasure_IsClear'}) {
        Npc_Hylia_022_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_05', 'MaintainPerformanceState': 0})
    } else {
        Npc_Hylia_022_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_04', 'MaintainPerformanceState': 0})
    }
}

void HowToPlay() {
    Npc_Hylia_022_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_02', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MaintainPerformanceState': 0})

    call AboutPrize()

    Npc_Hylia_022_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 3, 'ChoiceLabel2': 5, 'ChoiceLabel3': 1, 'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_03', 'MaintainPerformanceState': 0})
    switch GameSystemActor.EventQueryTalkChoice3() {
      case 0:
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'EvtTalkYes', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

        call StartMinigame()

      case 1:
        Npc_Hylia_022_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_18', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MaintainPerformanceState': 0})

        call HowToPlay()

      case 2:

        call CancelMinigame()

    }
}

void CancelMinigame() {
    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_13', 'MaintainPerformanceState': 0})
    UISystemActor.EventTriggerCloseRupeeDisplay()

    call MiniGame_SequentialChoiceTreasure_End()

}

void StartMinigame() {
    if !PouchSystemActor.EventQueryHasRuppe({'Value': 10}) {

        call NpcCommon.NpcCommon_Receive_PlayerToNpc({'PaidRupee': -10, 'NpcActor': ActorIdentifier(name="Npc_Hylia_022_Shop_Child"), 'NpcReceiveASName': 'Receive', 'BeforeReceiveFrames': 0, 'IsTurn': False})

        UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
        Npc_Hylia_022_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_12', 'MaintainPerformanceState': 0})
        Npc_Hylia_022_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_12_2', 'ASName': 'Handover', 'MaintainPerformanceState': 0})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'StepName': 'Playing', 'IsIgnoreChallengeProgressUI': True, 'ChallengeName': 'MiniGame_SequentialChoiceTreasure'})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_MapMenuIsUnvisibleByLsPush', 'Value': True, 'Index': -1})

        call MiniGame_SequentialChoiceTreasure_Start()


        call PassOnKey()

        Npc_Hylia_022_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_15', 'MaintainPerformanceState': 0})
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorName': 'Armor_Child_GlassTruth', 'ArmorSlot': 0}) {
            Npc_Hylia_022_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_57', 'MaintainPerformanceState': 0})
        }
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_MapMenuIsUnvisibleByLsPush', 'Value': False, 'Index': -1})
    } else {
        Npc_Hylia_022_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_14', 'MaintainPerformanceState': 0})
        UISystemActor.EventTriggerCloseRupeeDisplay()

        call MiniGame_SequentialChoiceTreasure_End()

    }
}

void MiniGame_SequentialChoiceTreasure_End() {
    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'MiniGame_SmallKeyNum', 'Index': -1, 'Value': 0})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_ChoiceTreasure_OpenedEitherBox', 'Value': False, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_ChoiceTreasure_GimickRegeneration'})
    EventSystemActor.EventWait({'Frames': 2, 'IsWaitEnd': True})
    ChallengeSystemActor.EventExecuteRollbackChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': True, 'ChallengeStep': 'Ready', 'ChallengeName': 'MiniGame_SequentialChoiceTreasure'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    GameSystemActor.EventTriggerRequestAutoSave()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MiniGame_ChoiceTreasure_GimickRegeneration'})
}

void MiniGame_SequentialChoiceTreasure_Start() {
    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'Value': 0, 'GameDataName': 'Market_MiniGame_ChoiceTreasure_NumOfHit'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Market_MiniGame_ChoiceTreasure_MissGame', 'Value': False})
}

void PassOnKey() {

    call NpcCommon.NpcCommon_HandOver_NpcToPlayer_DisplayGet_NoDisplay({'ReceiveItem': 'Obj_MiniGame_SmallKey', 'NpcActor': ActorIdentifier(name="Npc_Hylia_022_Shop_Child"), 'NpcActorName': 'Npc_Hylia_022_Shop_Child', 'ASName': 'Wait', 'NpcInstanceName': ''})

}

void MiniGame_SequentialChoiceTreasure_GetKey() {
    Event55:
    GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'MiniGame_SmallKeyNum', 'Value': 1, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'UI_RequestSmallKeyCountUpDemo'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    UISystemActor.EventTriggerSetDisplaySmallKey({'IsDisplaySmallKey': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
}

void Playing_Npc_Hylia_022_Shop_Child_EachFrame() {
    Event60:
    EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
    goto Event60
}

void MiniGame_SequentialChoiceTreasure_OpenMissTreasureBox() {
    if !GameSystemActor.EventQueryExistEventStarter() {

        call MiniGame_SequentialChoiceTreasure_OpenTreasureBox({'ContentName': 'ContentName'})

        Npc_Hylia_022_Shop_Child.EventTriggerSetModelLodManual({'LodLevel': 0})

        call WarpCamera()


        call MiniGame_SequentialChoiceTreasure_End()

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        call Talk_NotHit()

    } else {
        GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    }
}

void MiniGame_SequentialChoiceTreasure_OpenHitTreasureBox() {
    if !GameSystemActor.EventQueryExistEventStarter() {

        call MiniGame_SequentialChoiceTreasure_OpenTreasureBox({'ContentName': 'ContentName'})


        call MiniGame_SequentialChoiceTreasure_GetKey()


        call MiniGame_SequentialChoiceTreasure_HitCountInclement()

    } else {
        GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    }
}

void MiniGame_SequentialChoiceTreasure_OpenLastHitTreasureBox() {
    if !GameSystemActor.EventQueryExistEventStarter() {

        call MiniGame_SequentialChoiceTreasure_OpenTreasureBox({'ContentName': 'ContentName'})


        call MiniGame_SequentialChoiceTreasure_GetKey()


        call MiniGame_SequentialChoiceTreasure_HitCountInclement()

    } else {
        GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    }
}

void MiniGame_SequentialChoiceTreasure_OpenTreasureBox() {
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'TreasureBox_EventStarter', 'VectorSetType': 3, 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [0.0, 0.5, -0.800000011920929]}) {
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'TreasureBox_EventStarter', 'ActorNameB': 'EventCamera', 'InstanceNameA': '', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'CheckDistance': 2.5}) {
            Event89:

            fork {
                EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'TreasureBox_EventStarter', 'Actor2ActorName': 'Player_Event', 'AtVectorSetType': 3, 'MoveTime': 60, 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'PosVector': [-2.0, 2.5, 2.0], 'AtVector': [0.0, 0.5, 0.0], 'CameraCollisionMode': 0, 'IsWaitEnd': False, 'IsEnableRevertFast': False})
            } {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            }

        }
        Event166:
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_ChoiceTreasure_OpenedEitherBox', 'Value': True, 'Index': -1})
        TreasureBox_EventStarter.EventTriggerTBoxRequestDeleteContentDisplay()
        TreasureBox_EventStarter.EventDoNothing({'IsWaitEnd': False})

        call Dm_SY_TreasureboxSmall.SuccessForMiniGame({'ContentName': 'ContentName'})

    } else
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'TreasureBox_EventStarter', 'VectorSetType': 3, 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [0.8999999761581421, 0.5, 0.0]}) {
        goto Event89
    } else {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'TreasureBox_EventStarter', 'Actor2ActorName': 'Player_Event', 'AtVectorSetType': 3, 'PosVector': [2.0, 2.5, 2.0], 'MoveTime': 60, 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'AtVector': [0.0, 0.5, 0.0], 'CameraCollisionMode': 0, 'IsWaitEnd': False, 'IsEnableRevertFast': False})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        }

    }
    goto Event166
}

void Talk_NotHit() {

    call InitTalk.InitTalk_OnEvent({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_022_Shop_Child"), 'ActorNameA': 'Npc_Hylia_022_Shop_Child', 'InstanceNameA': ''})

    Npc_Hylia_022_Shop_Child.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_44', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
    UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
    switch GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'Market_MiniGame_ChoiceTreasure_NumOfHit'}) {
      case 0:
        Npc_Hylia_022_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_22', 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'MaintainPerformanceState': 0})
        Event93:
        if !GameSystemActor.EventQueryTalkChoice2() {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'EvtTalkYes', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

            call Choicetreasure_Retry()


            call StartMinigame()

        } else {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
            UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
            Npc_Hylia_022_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_58', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Market_MiniGame_ChoiceTreasure_MissGame'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Market_Minigame_ChoiceTreasure_MissReplayTalk', 'Value': True})
        }
      case 1:
        Npc_Hylia_022_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_23', 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'MaintainPerformanceState': 0})
        goto Event93
      case 2:
        Npc_Hylia_022_Shop_Child.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_25', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'MaintainPerformanceState': 0})
        goto Event93
      case 3:
        Npc_Hylia_022_Shop_Child.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_26', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'MaintainPerformanceState': 0})
        goto Event93
      case 4:
        Npc_Hylia_022_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_39', 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'MaintainPerformanceState': 0})
        goto Event93
    }
}

void WarpCamera() {
    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    fork {
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'InstanceName': 'MiniGameChoiceTreasureRestartPos', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'ActorName': 'StartPos', 'ASCommand': 'EvtWait'})
        Player_Event.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Hylia_022_Shop_Child', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': False})

        call NaviEventCommon.NaviWarp_PlayerHomePos_Choice({'IsLookAtPlayer': False, 'IsLeft': False})

    } {

        call Camera_LinkANDMaster()

        Npc_Hylia_022_Shop_Child.EventTriggerBecomeSpeaker()
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 2})
        GameSystemActor.EventWaitTalkCameraInterpolationEnd({'IsWaitEnd': True})
    }

}

void MiniGame_SequentialChoiceTreasure_HitCountInclement() {
    GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'Market_MiniGame_ChoiceTreasure_NumOfHit', 'Value': 1, 'Index': -1})
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
}

void MiniGame_SequentialChoiceTreasure_OpenClearTreasureBox() {
    if !GameSystemActor.EventQueryExistEventStarter() {

        call MiniGame_SequentialChoiceTreasure_OpenTreasureBoxClear({'ContentName': 'ContentName'})

        Npc_Hylia_022_Shop_Child.EventTriggerSetModelLodManual({'LodLevel': 0})

        call WarpCamera()

        PouchContentGuestPerformer.EventTriggerRequestDeath({'DeathReason': 4})
        EventEffectEmitter.EventEffectStopGetItem()

        call MiniGame_SequentialChoiceTreasure_End()

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_Hylia_022_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_27', 'MaintainPerformanceState': 0})
        if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Armor_Child_GlassTruth'}) {
            Npc_Hylia_022_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_55', 'MaintainPerformanceState': 0})
        }
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_ChoiceTreasure_TalkedAboutRules', 'Value': False})
        GameDataActor.EventTriggerSetDayTimeStruct({'GameDataName': 'MiniGame_ChoiceTreasure_ElapsedTime'})

        call MiniGame_SequentialChoiceTreasure_ClearFlagOn()

    } else {
        GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    }
}

void MiniGame_SequentialChoiceTreasure_ClearFlagOn() {
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'MiniGame_ChoiceTreasure_IsClear', 'Index': -1})
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
}

void Playing_Npc_Hylia_022_Shop_Child_Talk() {

    call InitTalk.InitTalk_NoMaskTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_08', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0})

    call MasterCamera_Front()


    call RetireCheck()

}

void MiniGame_SequentialChoiceTreasure_GiveupTalk_TryOpenDoor() {

    call InitTalk.InitTalk_OnEvent_NoCamera({'Arg_Turn': 4, 'FirstGreeting_MesageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_10', 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_022_Shop_Child"), 'ActorName': 'Npc_Hylia_022_Shop_Child', 'InstanceName': ''})

    EventCamera.EventTriggerCameraSavePoint()
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Hylia_022_Shop_Child', 'PosVector': [-1.7300000190734863, 0.9200000166893005, 3.859999895095825], 'AtVector': [-0.9700000286102295, 1.1399999856948853, 2.2699999809265137], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})

    call RetireCheck()

    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'MoveFrame': 0, 'IsRestoreDoF': False})
    Player_Event.EventTriggerPlayerSetTimerInvalidDoAction({'Frame': 30.0})
}

void MiniGame_SequentialChoiceTreasure_GameOver() {
    Player_Event.EventPlayerDie({'IsWaitEnd': True, 'SkipResetDebugMode': True})
    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_Hylia_022_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_99', 'MaintainPerformanceState': 0})
    Player_Event.EventTriggerHealLife({'Value': 4})
    GameSystemActor.EventReserveBancChange({'FadePattern': 1, 'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'BootEventName': '', 'IsStartOnEvent': False, 'NextBanc': 'Market_Child', 'NextStartPos': 'MiniGameChoiceTreasureRestartPos', 'EventStarterName': '', 'IsItemWarp': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Market_MiniGame_ChoiceTreasure_GameOver', 'Value': True})

    call MiniGame_SequentialChoiceTreasure_End()

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void MiniGame_SequentialChoiceTreasure_OpenTreasureBoxClear() {
    TreasureBox_EventStarter.EventTriggerTBoxRequestDeleteContentDisplay()
    TreasureBox_EventStarter.EventDoNothing({'IsWaitEnd': False})

    call Dm_SY_Treasurebox.SuccessForMiniGame({'ContentName': 'ContentName'})

}

void CheckRestrictedDoor() {

    call InitTalk.InitTalk_Door({'PreOpenPos': 'PreOpenPos', 'LastPos': 'LastPos'})

    if !EventWorldManagerController.EventQueryIsCurrentTimeInSpecifiedTimeRange({'StartTime': 6, 'EndTme': 12}) {
        Npc_Hylia_022_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/RestrictedDoor:RestrictedDoor_Market_01', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Market_MiniGame_ChoiceTreasure_FirstTalk', 'Index': -1, 'Value': True})
    } else
    if !EventWorldManagerController.EventQueryIsCurrentTimeInSpecifiedTimeRange({'StartTime': 12, 'EndTme': 16}) {
        Npc_Hylia_022_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/RestrictedDoor:RestrictedDoor_Market_20', 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0})

        call NaviEventCommon.NaviMove_PlayerHomePos_Door()

        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/RestrictedDoor:RestrictedDoor_Market_Navi_04', 'MaintainPerformanceState': 0})
    } else
    if !EventWorldManagerController.EventQueryIsCurrentTimeInSpecifiedTimeRange({'StartTime': 16, 'EndTme': 21}) {
        Npc_Hylia_022_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/RestrictedDoor:RestrictedDoor_Market_10', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Market_MiniGame_ChoiceTreasure_FirstTalk', 'Index': -1, 'Value': True})
    } else {
        GameSystemActor.EventTriggerSendErrorToEventResource({'Title': '通るはずのないフロー'})
    }
}

void TalkReset() {
    if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.MiniGame_SequentialChoiceTreasure_Ready_Npc_Hylia_022_Shop_Child_Talk_Event152', 'Index': -1, 'Value': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Market_MiniGame_ChoiceTreasure_ChoiceNotPlay'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_SequentialChoiceTreasure_Navi_IsAbort', 'Value': False})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    }
}

void Choicetreasure_Retry() {
    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'MiniGame_SmallKeyNum', 'Index': -1, 'Value': 0})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_ChoiceTreasure_OpenedEitherBox', 'Value': False, 'Index': -1})
}

void MasterCamera_Front() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1ActorName': 'Npc_Hylia_022_Shop_Child', 'PosVector': [-0.03999999910593033, 1.5399999618530273, 1.690000057220459], 'AtVector': [0.05000000074505806, 1.5099999904632568, 0.44999998807907104], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
}

void Camera_LinkANDMaster() {
    EventCamera.EventMoveToTargetPosCamera({'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsAtVectorReferenceActorPosOnce': False, 'IsWaitEnd': True, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Npc_Hylia_022_Shop_Child', 'PosVector': [-1.4299999475479126, 0.8100000023841858, 3.7699999809265137], 'AtVector': [-0.009999999776482582, 1.1100000143051147, 1.6200000047683716], 'TargetFovy': 37.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
}

void RetireCheck() {
    Npc_Hylia_022_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_59', 'MaintainPerformanceState': 0})
    if !GameSystemActor.EventQueryTalkChoice2() {
        switch GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'Market_MiniGame_ChoiceTreasure_NumOfHit'}) {
          case [0, 1, 2, 3, 4, 6, 7, 8, 9, 10, 11, 12, 13, 15]:
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_SequentialChoiceTreasure_Navi_IsAbort', 'Value': True})

            call MiniGame_SequentialChoiceTreasure_End()

            Npc_Hylia_022_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_09', 'MaintainPerformanceState': 0})
          case 5:
            Npc_Hylia_022_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_40', 'MaintainPerformanceState': 0})
            if !GameSystemActor.EventQueryTalkChoice2() {

                call MiniGame_SequentialChoiceTreasure_End()

                Npc_Hylia_022_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_43', 'MaintainPerformanceState': 0})
            } else {
                Npc_Hylia_022_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_42', 'MaintainPerformanceState': 0})
            }
        }
    } else {
        Npc_Hylia_022_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_022_Shop_Child:Talk_11', 'MaintainPerformanceState': 0})
    }
}

void BackMove_Check() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_BackMoveCounter_PlayerPosition_Nearby', 'Index': -1}) {
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'Npc_EventStarter', 'InstanceNameA': '', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'CheckDistance': 1.3799999952316284}) {

            call InitTalk.InitTalk_BackMoveCounter({'Arg_Turn': 4, 'Arg_Greeting': 4, 'OffsetDist': 0.44999998807907104})

        } else
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'Npc_EventStarter', 'InstanceNameA': '', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'CheckDistance': 1.600000023841858}) {

            call InitTalk.InitTalk_BackMoveCounter({'Arg_Turn': 4, 'Arg_Greeting': 4, 'OffsetDist': 0.6499999761581421})

        } else
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'Npc_EventStarter', 'InstanceNameA': '', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'CheckDistance': 1.75}) {

            call InitTalk.InitTalk_BackMoveCounter({'Arg_Turn': 4, 'Arg_Greeting': 4, 'OffsetDist': 0.75})

        } else {

            call InitTalk.InitTalk_BackMoveCounter({'Arg_Turn': 4, 'Arg_Greeting': 4, 'OffsetDist': 0.8999999761581421})

        }
    } else {

        call InitTalk.InitTalk_BackMoveCounter({'Arg_Turn': 4, 'Arg_Greeting': 4, 'OffsetDist': 0.4000000059604645})

    }
}

void MiniGame_SequentialChoiceTreasure_GetKey_Shop() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_MiniGameGetSmallKeyOnce', 'Index': -1, 'Value': True})
    goto Event55
}
