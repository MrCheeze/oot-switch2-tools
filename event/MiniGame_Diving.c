-------- EventFlow: MiniGame_Diving --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventTriggerBalloonMessage']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAvoidDuplicationRandomChoice3']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventReserveBancChange']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice3']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep', 'EventTriggerMiniGameTimerSetting', 'EventTriggerMiniGameTimerStart', 'EventTriggerUnshowTimerUI', 'EventTriggerMiniGameTimerStop', 'EventTriggerProgressChallengeStep', 'EventExecuteRollbackChallengeStep', 'EventTriggerUnshowMiniGameScoreNum', 'EventTriggerShowTimerUI', 'EventTriggerShowMiniGameScoreNum', 'EventShowReadyGo']
queries: ['EventQueryMiniGameTimeOver', 'EventQueryMiniGameTimerIsCounting']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryHasRuppe']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Zora_001
entrypoint: None()
actions: ['EventTriggerMiniGameDivingRequestCreateActor', 'EventTriggerMiniGameDivingReset', 'EventTalk', 'EventTriggerBecomeSpeaker', 'EventNPCTurnToObjectNow', 'EventNPCTurnToTarget', 'EventAIScheduleMoveToAnchor', 'EventAIScheduleWarpToAnchor', 'EventPlayAS', 'EventTriggerLookAtObject', 'EventTriggerAIScheduleSelectSchedule', 'EventAIScheduleEndTerror', 'EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule', 'EventTriggerSetModelLodManual']
queries: ['EventQueryAIScheduleCheckActorAction']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventSuspend', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventCloseRupeeDisplay', 'EventEventFadeOut', 'EventEventFadeIn', 'EventTriggerOpenRupeeDisplay', 'EventShowFinish']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerMoveToAnchor', 'EventPlayerTurnAndLook', 'EventTriggerHealLife', 'EventPlayerWarpToStarterLinkAnchor', 'EventPlayerWaitStabilityInWater', 'EventPlayerDie', 'EventPlayerWarpToTargetPosAndRot', 'EventPlayerPlayASForFlowchart', 'EventPlayerConversate', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventTriggerPlayerResetMaxFloatBuoyancyAccelGravityUnit']
queries: ['EventQueryCheckPlayerState', 'EventQueryPlayerIsEquipMask', 'EventQueryPlayerIsEquipArmor', 'EventQueryIsDirToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventChangeTemporarilyToPlayerCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: ['EventQueryCameraCheckOcclusionToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviRequestBallonMessage', 'EventNaviFollowPlayer']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Zora_006
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventTriggerStartBgmSimple', 'EventTriggerSoundControlBGM', 'EventTriggerStartInGameBgm', 'EventTriggerSoundStopBGM']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Ready_Npc_Zora_001_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 3})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Diving_Cleared'}) {
        Npc_Zora_001.EventTriggerMiniGameDivingRequestCreateActor({'IsAfterGetScaleSilver': True})
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
            Npc_Zora_001.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'OverrideStyle': 8, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Mask_72', 'IsOverrideStyle': True, 'ASName': 'Act_Passionate', 'MaintainPerformanceState': 0})
        }
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Diving_ShilverScale_First'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Diving_Dead'}) {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Diving_Dead', 'Value': False})
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'IsWaitEnd': True, 'ChoiceLabel2': 7, 'ChoiceLabel3': 2, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_20'})
                Event277:
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'IsWaitEnd': True, 'ChoiceNumber': 3, 'ChoiceLabel2': 7, 'ChoiceLabel3': 2, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_50', 'MaintainPerformanceState': 0})
                Event275:
                switch GameSystemActor.EventQueryTalkChoice3() {
                  case 0:
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
                    UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
                    Npc_Zora_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_51', 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'ASName': 'Act_Passionate', 'MaintainPerformanceState': 0})
                    if !GameSystemActor.EventQueryTalkChoice2() {
                        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
                        if !PouchSystemActor.EventQueryHasRuppe({'Value': 10}) {

                            call NpcCommon.NpcCommon_Receive_PlayerToNpc({'NpcReceiveASName': 'Receive', 'BeforeReceiveFrames': 0, 'IsTurn': True, 'NpcActor': ActorIdentifier(name="Npc_EventStarter"), 'PaidRupee': -10})

                            UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})

                            call MiniGame_Start()

                        } else {
                            UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                            Npc_Zora_001.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_06', 'MaintainPerformanceState': 0})
                        }
                    } else {
                        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'IsAllSlot': True, 'ClothWarpMode': 0})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
                        UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                        Event241:
                        if !Player_Event.EventQueryPlayerIsEquipMask() {
                            Npc_Zora_001.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_10', 'MaintainPerformanceState': 0})
                        } else {
                            Npc_Zora_001.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_05', 'MaintainPerformanceState': 0})
                        }
                    }
                  case 1:
                    Npc_Zora_001.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_03', 'ChoiceNumber': 3, 'ChoiceLabel2': 7, 'ChoiceLabel3': 2, 'ASName': 'Act_Passionate', 'MaintainPerformanceState': 0})
                    goto Event275
                  case 2:
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'IsAllSlot': True, 'ClothWarpMode': 0})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
                    goto Event241
                }
            } else
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_22', 'IsWaitEnd': True, 'ChoiceLabel2': 7, 'ChoiceLabel3': 2, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'IsWaitEnd': True, 'ChoiceLabel2': 7, 'ChoiceLabel3': 2, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_70', 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
            }
            goto Event277
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_Diving_ShilverScale_First'})
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'IsWaitEnd': True, 'ChoiceLabel2': 7, 'ChoiceLabel3': 2, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_49', 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'IsWaitEnd': True, 'ChoiceLabel2': 7, 'ChoiceLabel3': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_69', 'MaintainPerformanceState': 0})
            }
            goto Event277
        }
    } else {
        Npc_Zora_001.EventTriggerMiniGameDivingRequestCreateActor({'IsAfterGetScaleSilver': False})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.MiniGame_Diving_Ready_Npc_Zora_001_Talk_Event67', 'Index': -1}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.MiniGame_Diving_Ready_Npc_Zora_001_Talk_Event324', 'Index': -1}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Diving_Dead'}) {
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Diving_Dead', 'Value': False})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 2, 'ChoiceNumber': 2, 'ChoiceLabel2': 16, 'ChoiceLabel1': 17, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_16'})
                    Event86:
                    if !GameSystemActor.EventQueryTalkChoice2() {
                        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
                        Npc_Zora_001.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'ASName': 'Act_Passionate', 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_15', 'MaintainPerformanceState': 0})

                        call MiniGame_Start()

                    } else {
                        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkWonder', 'ClothWarpMode': 0})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
                        Npc_Zora_001.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_21', 'MaintainPerformanceState': 0})
                    }
                } else
                if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 2, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_64', 'ChoiceNumber': 2, 'ChoiceLabel2': 16, 'ChoiceLabel1': 17, 'MaintainPerformanceState': 0})
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_14', 'ChoiceLabel3': 2, 'ChoiceNumber': 2, 'ChoiceLabel2': 16, 'ChoiceLabel1': 17, 'MaintainPerformanceState': 0})
                }
                goto Event86
            } else
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 2, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_64', 'ChoiceNumber': 2, 'ChoiceLabel2': 16, 'ChoiceLabel1': 15, 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_14', 'ChoiceLabel3': 2, 'ChoiceNumber': 2, 'ChoiceLabel2': 16, 'ChoiceLabel1': 15, 'MaintainPerformanceState': 0})
            }
            Event128:
            if !GameSystemActor.EventQueryTalkChoice2() {
                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.MiniGame_Diving_Ready_Npc_Zora_001_Talk_Event324', 'Value': True, 'Index': -1})
                Npc_Zora_001.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_61', 'ASName': 'Act_Passionate', 'MaintainPerformanceState': 0})
                Npc_Zora_001.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_62', 'ASName': 'Act_Passionate', 'MaintainPerformanceState': 0})

                call MiniGame_Start()

            } else {
                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkWonder', 'ClothWarpMode': 0})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
                Npc_Zora_001.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_58', 'MaintainPerformanceState': 0})
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.MiniGame_Diving_Ready_Npc_Zora_001_Talk_Event67', 'Value': True, 'Index': -1})
            Npc_Zora_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_01', 'ChoiceLabel3': 2, 'ChoiceLabel1': 10, 'ChoiceLabel2': 11, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'ASName': 'Act_Passionate', 'MaintainPerformanceState': 0})
            Npc_Zora_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 2, 'ChoiceLabel1': 10, 'ChoiceLabel2': 11, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_56', 'ASName': 'Act_Passionate', 'MaintainPerformanceState': 0})
            Npc_Zora_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 2, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_57', 'ChoiceLabel1': 15, 'ChoiceLabel2': 16, 'ChoiceNumber': 0, 'ASName': '', 'MaintainPerformanceState': 0})
            Npc_Zora_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 2, 'ChoiceNumber': 2, 'ChoiceLabel1': 15, 'ChoiceLabel2': 16, 'ASName': 'Act_Passionate', 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_65', 'MaintainPerformanceState': 0})
            goto Event128
        }
    }
}

void Step01_Npc_Zora_001_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 3})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Diving_Cleared'}) {
        Npc_Zora_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ASName': 'Act_Passionate', 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_36', 'MaintainPerformanceState': 0, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4})
    } else {
        Npc_Zora_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_07', 'ChoiceNumber': 2, 'ASName': 'Act_Passionate', 'MaintainPerformanceState': 0, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4})
    }
    if !GameSystemActor.EventQueryTalkChoice2() {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Diving_Cleared'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_19', 'MaintainPerformanceState': 0})
        } else {
            Npc_Zora_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_21', 'ASName': 'Act_Passionate', 'MaintainPerformanceState': 0})
        }
        SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'FadeType': 2, 'CommandLife': 0, 'WaitingResumeInGameBgm': False})
        SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_MiniGame', 'IsUseSuspendFade': True})
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        call Sub_Minigame_Diving_TimerAndUI_Stop()


        call MiniGame_Diving_CloseScoreUI()


        call MiniGame_Diving_Reset()

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        Npc_Zora_006.EventTriggerParticipateEvent()
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    } else {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': True, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_17', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0})
    }
}

void MiniGame_Diving_Clear() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.MiniGame_Diving_Ready_Npc_Zora_001_Talk_Event331', 'Value': True, 'Index': -1})

    call Sub_Minigame_Diving_TimerAndUI_Stop()

    Player_Event.EventPlayerWaitStabilityInWater({'IsWaitEnd': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 0})
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 0, 'CommandLife': 2, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Diving_Cleared'}) {

        call SecondClear({'IsNpcEventStarter': True})

    } else {

        call FirstClear({'IsNpcEventStarter': True})

    }
}

void Step01_Npc_Zora_001_EachFrame() {
    Event140:
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MiniGame_Diving_IsPlaying'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Diving_Cleared'}) {
            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_Score', 'Value': 10, 'Index': -1}) {
              case 0:
                Event17:
                if !ChallengeSystemActor.EventQueryMiniGameTimeOver() {
                    ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'MiniGame_Diving', 'StepName': 'Step02'})
                } else {

                    call Step01_Loop()

                }
              case [1, 2]:
                Event29:
                ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'MiniGame_Diving', 'StepName': 'Step03'})
            }
        } else
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_Score', 'Value': 5, 'Index': -1}) {
          case 0:
            goto Event17
          case [1, 2]:
            goto Event29
        }
    }
}

void Sub_Minigame_Diving_TimerAndUI_Stop() {
    ChallengeSystemActor.EventTriggerMiniGameTimerStop()
    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'MiniGame_ScoreMax', 'Value': 0, 'Index': -1})
}

void Step01_Loop() {
    EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
    goto Event140
}

void MiniGame_Diving_Failure() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.MiniGame_Diving_Ready_Npc_Zora_001_Talk_Event331', 'Value': True, 'Index': -1})

    call Sub_Minigame_Diving_TimerAndUI_Stop()

    Player_Event.EventTriggerPlayerResetMaxFloatBuoyancyAccelGravityUnit()
    Npc_Zora_001.EventAIScheduleEndTerror({'IsWaitEnd': True, 'IsClearLookIK': False})
    Npc_Zora_001.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_MiniGame', 'IsUseSuspendFade': False})
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 0, 'CommandLife': 2, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Diving_Cleared'}) {
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_Score', 'Value': 10, 'Index': -1}) {
          case 0:
            Event138:
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_Diving_Navi_Failure'})
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Diving_Cleared'}) {
                UISystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': False, 'Type': 1, 'MiniGameType': 1})
                Npc_Zora_001.EventNPCTurnToObjectNow({'TurnType': 3, 'IsWaitEnd': True})

                call InitTalk.InitTalk_OnEvent_NoCamera({'Arg_Turn': 4, 'FirstGreeting_MesageId': 'EventFlowMsg/MiniGame_Diving:Talk_11', 'Arg_Actor': ActorIdentifier(name="Npc_Zora_001"), 'ActorName': 'Npc_Zora_001', 'InstanceName': ''})


                call WarpCamera()


                call MiniGame_Diving_Reset()

                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
                SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'ResumeDelay': 0})
                Npc_Zora_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_39', 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
                UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
                Npc_Zora_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_40', 'MaintainPerformanceState': 0})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
                    if !PouchSystemActor.EventQueryHasRuppe({'Value': 10}) {

                        call SubEvent_GetSwordBigGoron.SubEvent_TimerCheck()

                        if !ChallengeSystemActor.EventQueryMiniGameTimerIsCounting() {
                            UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                        } else {

                            call NpcCommon.NpcCommon_Receive_PlayerToNpc({'NpcReceiveASName': 'Receive', 'BeforeReceiveFrames': 0, 'IsTurn': True, 'NpcActor': ActorIdentifier(name="Npc_Zora_001"), 'PaidRupee': -10})

                            UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                            Npc_Zora_001.EventTriggerMiniGameDivingRequestCreateActor({'IsAfterGetScaleSilver': True})

                            call MiniGame_ReStart()

                        }
                    } else {
                        UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                        Npc_Zora_001.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_06', 'MaintainPerformanceState': 0})
                        Event339:

                        call MiniGame_Diving_Reset()

                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                        Npc_Zora_006.EventTriggerParticipateEvent()
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                        Npc_Zora_001.EventTriggerAIScheduleSelectSchedule()
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                    }
                } else {
                    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': True, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
                    UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                    if !Player_Event.EventQueryPlayerIsEquipMask() {
                        Npc_Zora_001.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_10', 'MaintainPerformanceState': 0})
                    } else {
                        Npc_Zora_001.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_05', 'MaintainPerformanceState': 0})
                    }
                    goto Event339
                }
            } else {

                call InitTalk.InitTalk_OnEvent_NoCamera({'Arg_Turn': 4, 'ActorName': 'Npc_Zora_001', 'InstanceName': '', 'Arg_Actor': ActorIdentifier(name="Npc_Zora_001"), 'FirstGreeting_MesageId': 'EventFlowMsg/MiniGame_Diving:Talk_12'})

                Npc_Zora_001.EventNPCTurnToObjectNow({'TurnType': 3, 'IsWaitEnd': True})
                Npc_Zora_001.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'Npc_Zora_001', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'AtVectorSetType': 3, 'AtVector': [0.0, 1.2999999523162842, 0.0], 'PosVectorSetType': 0, 'PosVector': [21.229999542236328, 112.54000091552734, -6.130000114440918], 'IsEnableRevertFast': False})
                Npc_Zora_001.EventTalk({'ChoiceLabel1': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0, 'EndDialogOption': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_11'})

                call WarpCamera()


                call MiniGame_Diving_Reset()

                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
                SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'ResumeDelay': 0})
                Npc_Zora_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_29', 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'MaintainPerformanceState': 0})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
                    Npc_Zora_001.EventTriggerMiniGameDivingRequestCreateActor({'IsAfterGetScaleSilver': False})
                    Npc_Zora_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_66', 'ChoiceNumber': 0, 'ASName': 'Act_Passionate', 'MaintainPerformanceState': 0})

                    call MiniGame_ReStart()

                } else {
                    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': True, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
                    Npc_Zora_001.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_21', 'ASName': 'Act_Passionate', 'MaintainPerformanceState': 0})
                    goto Event339
                }
            }
          case [1, 2]:

            call SecondClear({'IsNpcEventStarter': False})

        }
    } else
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_Score', 'Value': 5, 'Index': -1}) {
      case 0:
        goto Event138
      case [1, 2]:

        call FirstClear({'IsNpcEventStarter': False})

    }
}

void MiniGame_Start() {
    Npc_Zora_001.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_04', 'ASName': 'Act_Passionate', 'MaintainPerformanceState': 0})
    if Npc_Zora_001.EventQueryAIScheduleCheckActorAction({'ActionType': 1, 'AIScheduleState': 1}) {
        Npc_EventStarter.EventNPCTurnToTarget({'FaceControlType': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'Target': 1, 'IsConfront': False, 'IsWaitEnd': True})
    }

    fork {
        if !Player_Event.EventQueryIsDirToTarget({'Target': 5, 'WorldPos': [0.0, 0.0, 0.0], 'ActorName': 'AnchorAction2', 'AngleThreshold': 90.0, 'InstanceName': ''}) {
            Npc_Zora_001.EventAIScheduleMoveToAnchor({'AnchorType': 2, 'InstanceName': '', 'ASName': 'Walk', 'IsTurnToAnchorRot': False, 'DesiredGear': 1, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False, 'IsWaitEnd': False, 'IsAlignAnchorPos': False})
        }
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 2})
    }

    Npc_Zora_001.EventAIScheduleWarpToAnchor({'AnchorType': 2, 'IsWaitEnd': True, 'InstanceName': '', 'ArrivalState': 1, 'ForceGetUpDuringSleep': True, 'ClothWarpMode': -1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_Diving_Playing', 'Value': True, 'Index': -1})
    Npc_Zora_001.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    call Diving_NaviReaction_Reset()


    fork {
        UISystemActor.EventEventFadeIn({'Length': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0})
    } {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_Zora_0020'})
    }

    Npc_Zora_001.EventTriggerSetModelLodManual({'LodLevel': 0})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'camPos_forChange', 'Actor2InstanceName': 'atPos_forChange', 'MoveTime': 0, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'IsEnableRevertFast': False})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    } {
        SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 3, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
        Player_Event.EventPlayerWarpToTargetPosAndRot({'Position': [27.770000457763672, 113.23999786376953, -5.150000095367432], 'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'YAngle': 260.0, 'ClothWarpMode': 0, 'EnableInAir': False})
    }


    call BackCamera()

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Diving_Cleared'}) {
        ChallengeSystemActor.EventTriggerMiniGameTimerSetting({'IsCountDown': True, 'TimerLimit': 4800})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_Diving_Hard'})
        Npc_Zora_001.EventTriggerMiniGameDivingReset()

        call MiniGame_Diving_ScoreUI()

        ChallengeSystemActor.EventShowReadyGo({'IsWaitEnd': True, 'MiniGameType': 1})
        Event130:
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_MiniGame', 'IsReleaseDucking': True, 'CommandLife': 2})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'MiniGame_Diving', 'StepName': 'Step01', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
        ChallengeSystemActor.EventTriggerMiniGameTimerStart()
    } else {
        ChallengeSystemActor.EventTriggerMiniGameTimerSetting({'IsCountDown': True, 'TimerLimit': 2400})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_Diving_Normal'})
        Npc_Zora_001.EventTriggerMiniGameDivingReset()

        fork {

            call MiniGame_Diving_ScoreUI()

        } {
            Npc_Zora_001.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_44', 'ASName': 'Act_Passionate', 'MaintainPerformanceState': 0})
        }

        goto Event130
    }
}

void MiniGame_Diving_GameOver() {
    Player_Event.EventPlayerDie({'IsWaitEnd': True, 'SkipResetDebugMode': True})

    call Sub_Minigame_Diving_TimerAndUI_Stop()

    SoundSystemActor.EventTriggerStopInGameBgm({'CommandLife': 2, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'FadeType': 2, 'WaitingResumeInGameBgm': False})
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_MiniGame', 'IsUseSuspendFade': True})
    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_Zora_001.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_13', 'MaintainPerformanceState': 0})
    Player_Event.EventTriggerHealLife({'Value': 4})
    GameSystemActor.EventReserveBancChange({'FadePattern': 1, 'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'BootEventName': '', 'IsStartOnEvent': False, 'NextBanc': 'ZoraDomain_Child', 'NextStartPos': 'MiniGame_Diving_PlayerStart', 'EventStarterName': '', 'IsItemWarp': False})

    call MiniGame_Diving_CloseScoreUI()

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Diving_Dead', 'Value': True})

    call MiniGame_Diving_Reset()

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
}

void Diving_NaviReaction_Reset() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Diving_Navi_Failure', 'Value': False})
}

void MiniGame_Diving_GoFar() {
    if Player_Event.EventQueryCheckPlayerState({'State': 0}) {
        Player_Event.EventTriggerPlayerResetMaxFloatBuoyancyAccelGravityUnit()
    }

    call Diving_UnderWater()

    Player_Event.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 3})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Diving_Cleared'}) {
        Npc_Zora_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_33', 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'MaintainPerformanceState': 0})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
            Npc_Zora_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_19', 'MaintainPerformanceState': 0})
            Event307:
            SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_MiniGame', 'IsUseSuspendFade': False})
            SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 0, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
            UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

            call Sub_Minigame_Diving_TimerAndUI_Stop()


            call MiniGame_Diving_CloseScoreUI()


            call MiniGame_Diving_Reset()

            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            Npc_Zora_006.EventTriggerParticipateEvent()
            EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
            Player_Event.EventPlayerTurnAndLook({'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsWaitEnd': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'ActorName': 'Npc_Zora_001', 'SlowTurn': False, 'TurnFaceControlType': 0, 'KeepTalkWait': False, 'UseNormalTurn': True, 'IsDoNavi': True})
            Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        } else {
            Event189:
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': True, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
            Npc_Zora_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_37', 'MaintainPerformanceState': 0})
            Npc_Zora_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_46', 'MaintainPerformanceState': 0})
            UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_Diving_IsNearWater', 'Index': -1}) {
                Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'NearOfWater', 'ASCommand': 'SwimWait'})
            } else {
                Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'FarFromWater', 'ASCommand': 'EvtWait'})
            }
            Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
            UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        }
    } else {
        Npc_Zora_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_35', 'ChoiceLabel1': 10, 'ChoiceLabel2': 11, 'MaintainPerformanceState': 0})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
            Npc_Zora_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_18', 'MaintainPerformanceState': 0})
            goto Event307
        } else {
            goto Event189
        }
    }
}

void MiniGame_Diving_ScoreUI() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Diving_Cleared'}) {
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'MiniGame_ScoreMax', 'Index': -1, 'Value': 10})
    } else {
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'MiniGame_ScoreMax', 'Index': -1, 'Value': 5})
    }
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    ChallengeSystemActor.EventTriggerShowMiniGameScoreNum({'MiniGameScoreIconType': 2})
    ChallengeSystemActor.EventTriggerShowTimerUI()
}

void MiniGame_Diving_Reset() {
    Npc_Zora_001.EventTriggerMiniGameDivingReset()
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Diving_Normal', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Diving_Hard', 'Value': False})
    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'MiniGame_Score', 'Index': -1, 'Value': 0})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_Diving_Playing', 'Index': -1, 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_Zora_001_Child_Near01'})
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Diving_Mapicon'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'MiniGame_Diving_Mapicon'})
    }
    ChallengeSystemActor.EventExecuteRollbackChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'MiniGame_Diving', 'ChallengeStep': 'Ready', 'IsIgnoreChallengeProgressUI': True})
}

void WarpCamera() {
    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    fork {
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'MiniGame_Diving_PlayerReset', 'ASCommand': 'EvtWait'})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        Player_Event.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'ActorName': 'Npc_Zora_001', 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})
        Npc_Zora_001.EventNPCTurnToObjectNow({'TurnType': 3, 'IsWaitEnd': True})
    } {
        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [1.6399999856948853, 0.7099999785423279, -1.7699999809265137], 'AtVector': [0.1599999964237213, 1.090000033378601, 1.409999966621399], 'TargetFovy': 37.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {

        call MiniGame_Diving_CloseScoreUI()

    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 75})
    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void MiniGame_ReStart() {
    Npc_Zora_001.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_04', 'MaintainPerformanceState': 0})
    EventSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_Diving_Playing', 'Value': True, 'Index': -1})
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 3, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})

    call Diving_NaviReaction_Reset()

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Diving_Cleared'}) {
        ChallengeSystemActor.EventTriggerMiniGameTimerSetting({'IsCountDown': True, 'TimerLimit': 4800})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_Diving_Hard'})
        Event124:
        Npc_Zora_001.EventTriggerMiniGameDivingReset()
        Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Direction': 0.0, 'OffsetBase': 0, 'KeepTalkWait': False, 'PosOffset': [0.0, 0.0, 0.0], 'UpperASCommand': '', 'TurnFaceControlType': 1, 'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'MiniGame_Diving_CameraTarget', 'WorldPos': [0.0, 0.0, 0.0], 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': True, 'IsDoNavi': True})

        call BackCamera()

        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Diving_Cleared'}) {

            call MiniGame_Diving_ScoreUI()

            ChallengeSystemActor.EventShowReadyGo({'IsWaitEnd': True, 'MiniGameType': 1})
            goto Event130
        } else {

            fork {

                call MiniGame_Diving_ScoreUI()

            } {
                Npc_Zora_001.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_44', 'MaintainPerformanceState': 0})
            }

            goto Event130
        }
    } else {
        ChallengeSystemActor.EventTriggerMiniGameTimerSetting({'IsCountDown': True, 'TimerLimit': 2400})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_Diving_Normal'})
        goto Event124
    }
}

void Diving_UnderWater() {
    Npc_Zora_001.EventTriggerSetModelLodManual({'LodLevel': 0})
    Npc_Zora_001.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Npc_Zora_001.EventTriggerBecomeSpeaker()
    Npc_Zora_001.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsNotBecomeSpeaker': True, 'EndDialogOption': 3, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_34', 'MaintainPerformanceState': 0})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_Diving_IsNearWater', 'Index': -1})
    && !EventCamera.EventQueryCameraCheckOcclusionToTarget({'ActorName1': 'Player_Event', 'VectorSetType1': 3, 'ActorName2': 'DestinationAnchor', 'VectorSetType2': 3, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Vector1': [0.0, 0.0, 0.0], 'IsIgnoreVectorReferenceActorRot2': False, 'Vector2': [0.0, 0.0, 0.0], 'IsEnableSpaceCheck': False, 'SpaceCheckRadius': 0.0, 'Actor2InstanceName': 'judgePos_changeCameraWhenGoHidden', 'IsEnableCameraBodyCheck': False, 'IsConsiderWater': False}) {
        Npc_Zora_001.EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'ActorName': 'DestinationAnchor', 'InstanceName': 'camPos_isWhenGoHidden', 'Target': 5})
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionMode': 0, 'MoveTotargetPosType': 1, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'Actor1InstanceName': 'camPos_isWhenGoHidden', 'Actor2InstanceName': 'atPos_isWhenGoHidden', 'IsEnableRevertFast': False})
    }
}

void Ready_Npc_Zora_001_Near() {
    switch Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice3() {
      case 0:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/MiniGame_Diving:Near_06'})
      case 1:
        Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/MiniGame_Diving:Near_00', 'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
      case 2:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/MiniGame_Diving:Near_05'})
    }
}

void BackCamera() {

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': True, 'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'OffsetType': -1, 'IsHomePosition': True, 'IsNearOffset': True})
        Player_Event.EventPlayerMoveToAnchor({'IsWaitEnd': True, 'AnchorInstanceName': 'MiniGame_Diving_PlayerStart', 'IsKeepSpeed': False, 'AnchorActorName': 'StartPos', 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'MoveSpeed': 3.0, 'DecSpeedDistance': 2.0, 'IsMoveAnchorFrontDir': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'ApplySlowMove': False, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0})
        Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Direction': 0.0, 'OffsetBase': 0, 'KeepTalkWait': False, 'PosOffset': [0.0, 0.0, 0.0], 'UpperASCommand': '', 'TurnFaceControlType': 1, 'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'MiniGame_Diving_CameraTarget', 'WorldPos': [0.0, 0.0, 0.0], 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': True, 'IsDoNavi': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 50.0, 'MoveTime': 90, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'camPos_forGameStart', 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'atPos_forGameStart', 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'IsEnableRevertFast': False})
        Npc_Zora_001.EventNPCTurnToTarget({'ActorName': 'Player_Event', 'IsWaitEnd': True, 'Target': 0, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    }

}

void MiniGame_Diving_CloseScoreUI() {
    ChallengeSystemActor.EventTriggerUnshowTimerUI()
    ChallengeSystemActor.EventTriggerUnshowMiniGameScoreNum({'IsWaitEnd': True})
}

void FirstClear() {
    Npc_Zora_001.EventTalk({'ChoiceLabel1': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_12', 'EndDialogOption': 0, 'IsCloseDialog': True, 'IsWaitEnd': True})
    Npc_Zora_001.EventNPCTurnToObjectNow({'TurnType': 3, 'IsWaitEnd': True})
    Npc_Zora_001.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'Npc_Zora_001', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'AtVectorSetType': 3, 'AtVector': [0.0, 1.2999999523162842, 0.0], 'PosVectorSetType': 0, 'PosVector': [21.229999542236328, 112.54000091552734, -6.130000114440918], 'IsEnableRevertFast': False})

    call InitTalk.InitTalk_OnEvent_NoCamera({'Arg_Turn': 4, 'FirstGreeting_MesageId': 'EventFlowMsg/MiniGame_Diving:Talk_08', 'Arg_Actor': ActorIdentifier(name="Npc_Zora_001"), 'ActorName': 'Npc_Zora_001', 'InstanceName': ''})


    call WarpCamera()

    SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'ResumeDelay': 0})
    Npc_Zora_001.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_30', 'MaintainPerformanceState': 0})
    Npc_Zora_001.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_30_2', 'IsPlayASAllSlot': False, 'ASName': 'Handover', 'MaintainPerformanceState': 0})

    call Dm_SY_GetInEvent.GetInEvent_NotTurn_NotNpc({'ActorName': 'Item_Scale_Silver', 'IsNpcEventStarter': 'IsNpcEventStarter'})


    call Get_StoneOfWater.StoneOfWater_ClearDivingGame()

    Npc_Zora_001.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_67', 'MaintainPerformanceState': 0})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Diving_Cleared', 'Value': True})
    if !Player_Event.EventQueryPlayerIsEquipMask() {
        Event118:
        Npc_Zora_001.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Mask_71', 'OverrideStyle': 8, 'ASName': 'TalkMonolog', 'IsOverrideStyle': False, 'MaintainPerformanceState': 0})
        Event9:

        call MiniGame_Diving_Reset()

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
        Npc_Zora_001.EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        Npc_Navi.EventNaviRequestBallonMessage({'Index': 67})
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_GlassTruth'}) {
        goto Event118
    }
    goto Event9
}

void SecondClear() {
    UISystemActor.EventShowFinish({'Type': 0, 'IsWaitEnd': True, 'IsNewRecords': False, 'MiniGameType': 1})
    Npc_Zora_001.EventNPCTurnToObjectNow({'TurnType': 3, 'IsWaitEnd': True})

    call InitTalk.InitTalk_OnEvent_NoCamera({'Arg_Turn': 4, 'FirstGreeting_MesageId': 'EventFlowMsg/MiniGame_Diving:Talk_09', 'Arg_Actor': ActorIdentifier(name="Npc_Zora_001"), 'ActorName': 'Npc_Zora_001', 'InstanceName': ''})


    call WarpCamera()

    SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'ResumeDelay': 0})
    Npc_Zora_001.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_42', 'ASName': 'Handover', 'MaintainPerformanceState': 0})

    call Dm_SY_GetInEvent.GetInEvent_NotTurn_NotNpc({'ActorName': 'Obj_Rupee_Red', 'IsNpcEventStarter': 'IsNpcEventStarter'})

    UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
    Npc_Zora_001.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Talk_25', 'MaintainPerformanceState': 0})
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_GlassTruth'}) {
        Npc_Zora_001.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'OverrideStyle': 8, 'IsOverrideStyle': False, 'MessageId': 'EventFlowMsg/MiniGame_Diving:Mask_73', 'ASName': 'Act_Passionate', 'MaintainPerformanceState': 0})
    }

    call MiniGame_Diving_Reset()

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
    Npc_Zora_001.EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
}
