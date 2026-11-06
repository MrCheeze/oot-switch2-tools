-------- EventFlow: Npc_Hylia_RunningMan_Adult --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerCopyGameDataInt', 'EventTriggerAddOrSubGameDataInt', 'EventTriggerSetGameDataInt']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool', 'EventQueryCompareGameDataInt', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventTriggerLookAtObject', 'EventTriggerSetMaskTalkFlag']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAvoidDuplicationRandomChoice2', 'EventQueryAvoidDuplicationRandomChoice3', 'EventQueryIsOnMaskTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventReserveBancChange', 'EventTriggerRequestAutoSave', 'EventWait', 'EventTriggerOwnedHorseParticipateInPlayingMainEvent']
queries: ['EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerMiniGameTimerSetting', 'EventTriggerMiniGameTimerStart', 'EventTriggerShowTimerUI', 'EventTriggerUnshowTimerUI', 'EventTriggerMiniGameTimerStop', 'EventExecuteRollbackChallengeStep', 'EventExecuteProgressChallengeStep', 'EventShowReadyGo']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventCloseRupeeDisplay', 'EventShowFinish']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_RunningMan_Adult
entrypoint: None()
actions: ['EventTalk', 'EventWarpToTargetPosAndRot', 'EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk', 'EventNaviFollowPlayer']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerCameraSavePoint', 'EventMoveToTargetPosCamera', 'EventMoveCameraToSavePoint', 'EventBasedOnLookAtCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerMoveToAnchor', 'EventPlayerSetExtraOrderDecelerateToStop', 'EventPlayerPlayASForFlowchart', 'EventTriggerParticipateEvent', 'EventPlayerWarpToStarterLinkAnchor', 'EventPlayerPlayASFollowRideHorse']
queries: ['EventQueryPlayerIsEquipArmor', 'EventQueryPlayerCheckRideHorse', 'EventQueryIsHorseEponaNear']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

void Talk() {

    call MaskTalk()

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_RunningRace_IsAfter_Ready_Exp'}) {
        switch Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice3() {
          case 0:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Rest_Incite', 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_37', 'MaintainPerformanceState': 0})
            Event163:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Rest_Incite', 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_42', 'ChoiceNumber': 2, 'ChoiceLabel1': 10000, 'ChoiceLabel2': 10001, 'MaintainPerformanceState': 0})
            if !GameSystemActor.EventQueryTalkChoice2() {
                Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Rest_Incite', 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_43', 'ChoiceLabel1': 10000, 'ChoiceLabel2': 9999, 'MaintainPerformanceState': 0})

                call RunningRace_TimerAndUI_Stop()

            } else {
                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Rest_Incite', 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_32', 'MaintainPerformanceState': 0})
            }
          case 1:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Rest_Incite', 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_38', 'MaintainPerformanceState': 0})
            goto Event163
          case 2:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Rest_Incite', 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_39', 'MaintainPerformanceState': 0})
            goto Event163
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfSpirit_IsAfter_Step01_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_RunningMan_Adult_Talk_Event4', 'Index': -1}) {
            if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BeforeSell_Mask_Bunny_IsAfterTalk_Adult'}) {

                call Greetings()

            }
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Subevent_RunningRace_HaveFinished', 'Index': -1})
            && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_RunningMan_Adult_RunningRace_Clear_Event32', 'Index': -1}) {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_07', 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_05', 'MaintainPerformanceState': 0})
            }
            Event51:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_20', 'MaintainPerformanceState': 0})
            if !GameSystemActor.EventQueryTalkChoice2() {
                Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetSwordBigGoron_TimerCountingStep'}) {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_06', 'MaintainPerformanceState': 0})
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_24', 'MaintainPerformanceState': 0})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Rest_Incite', 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_32', 'MaintainPerformanceState': 0})

                    call RunningRace_Start()

                }
            } else {
                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_23', 'MaintainPerformanceState': 0})
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_RunningMan_Adult_Talk_Event4', 'Value': True, 'Index': -1})
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_RunningMan_Adult_Talk_Event3', 'Index': -1}) {
                if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BeforeSell_Mask_Bunny_IsAfterTalk_Adult'}) {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_26', 'MaintainPerformanceState': 0})
                }
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_21', 'MaintainPerformanceState': 0})
                goto Event51
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BeforeSell_Mask_Bunny_IsAfterTalk_Adult'}) {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_36', 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'BeforeSell_Mask_Bunny_IsAfterTalk_Adult', 'Value': False, 'Index': -1})
                Event48:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_17', 'MaintainPerformanceState': 0})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_19', 'MaintainPerformanceState': 0})
                goto Event51
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_16', 'MaintainPerformanceState': 0})
                goto Event48
            }
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_RunningMan_Adult_Talk_Event3', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BeforeSell_Mask_Bunny_IsAfterTalk_Adult'}) {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'BeforeSell_Mask_Bunny_IsAfterTalk_Adult', 'Value': False, 'Index': -1})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_35', 'MaintainPerformanceState': 0})
            Event98:
            if !GameSystemActor.EventQueryTalkChoice2() {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_RunningMan_Adult_Desert'}) {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_28', 'MaintainPerformanceState': 0})
                    Event47:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_18', 'MaintainPerformanceState': 0})
                    EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
                    Event102:
                    if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_41', 'MaintainPerformanceState': 0})
                    } else {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_29', 'MaintainPerformanceState': 0})
                    }
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_Hylia_RunningMan_Adult_Desert'})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_25', 'MaintainPerformanceState': 0})
                    goto Event47
                }
            } else
            goto Event102
        } else {

            call Greetings()

            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_01', 'MaintainPerformanceState': 0})
            goto Event98
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_RunningMan_Adult_Talk_Event3', 'Value': True, 'Index': -1})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BeforeSell_Mask_Bunny_IsAfterTalk_Adult'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_36', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'BeforeSell_Mask_Bunny_IsAfterTalk_Adult', 'Value': False, 'Index': -1})
            Event45:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_31', 'MaintainPerformanceState': 0})
            goto Event98
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_16', 'MaintainPerformanceState': 0})
            goto Event45
        }
    }
}

void RunningRace_Start() {
    ChallengeSystemActor.EventTriggerMiniGameTimerSetting({'IsCountDown': False, 'TimerLimit': 108000})
    ChallengeSystemActor.EventTriggerShowTimerUI()
    ChallengeSystemActor.EventShowReadyGo({'IsWaitEnd': True, 'MiniGameType': -1})
    ChallengeSystemActor.EventTriggerMiniGameTimerStart()
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SubEvent_RunningRace_NoBancChange'})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'SubEvent_RunningRace', 'StepName': 'Playing', 'IsIgnoreChallengeProgressUI': True, 'IsWaitEnd': True})
}

void RunningRace_TimerAndUI_Stop() {
    ChallengeSystemActor.EventTriggerMiniGameTimerStop()
    ChallengeSystemActor.EventTriggerUnshowTimerUI()
    ChallengeSystemActor.EventExecuteRollbackChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'ChallengeStep': 'Ready', 'IsIgnoreChallengeProgressUI': True, 'ChallengeName': 'SubEvent_RunningRace'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
}

void RunningRace_Clear() {
    Player_Event.EventTriggerParticipateEvent()
    Npc_Hylia_RunningMan_Adult.EventTriggerParticipateEvent()
    GameSystemActor.EventTriggerRequestAutoSave()
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Subevent_RunningRace_HaveFinished'})
    && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_RunningMan_Adult_RunningRace_Clear_Event32', 'Index': -1}) {
        if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerMinute', 'GameDataB': 'SubEvent_RunningRace_BestTime_Minute', 'Operator': 4}) {
            Event63:

            call InitTalk.InitTalk_OnEvent_NoCamera_NoTalk({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_RunningMan_Adult"), 'ActorName': 'Npc_Hylia_RunningMan_Adult', 'InstanceName': ''})

            Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': False, 'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'IsHomePosition': True, 'IsNearOffset': False, 'OffsetType': 1})
            ChallengeSystemActor.EventTriggerMiniGameTimerStop()
            EventCamera.EventTriggerCameraSavePoint()
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'MoveTotargetPosType': 1, 'Actor1ActorName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'PosVector': [-127.33000183105469, 116.08999633789062, -36.470001220703125], 'AtVector': [-123.98999786376953, 115.69999694824219, -38.63999938964844], 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTime': 0, 'IsEnableRevertFast': False})
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Subevent_RunningRace_HaveFinished'})
            && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_RunningMan_Adult_RunningRace_Clear_Event32', 'Index': -1}) {
                if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerMinute', 'GameDataB': 'SubEvent_RunningRace_BestTime_Minute', 'Operator': 4}) {
                    Event74:
                    GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'MiniGame_TimerMinute', 'DstGameDataName': 'SubEvent_RunningRace_BestTime_Minute'})
                    GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'MiniGame_TimerSecond', 'DstGameDataName': 'SubEvent_RunningRace_BestTime_Second'})
                    GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'MiniGame_TimerMilliSecond', 'DstGameDataName': 'SubEvent_RunningRace_BestTime_MilliSecond'})
                    GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'SubEvent_RunningRace_TempTime_Minute_RunningMan', 'DstGameDataName': 'SubEvent_RunningRace_BestTime_Minute_RunningMan'})
                    GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'SubEvent_RunningRace_TempTime_Second_RunningMan', 'DstGameDataName': 'SubEvent_RunningRace_BestTime_Second_RunningMan'})
                    GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'SubEvent_RunningRace_TempTime_MilliSecond_RunningMan', 'DstGameDataName': 'SubEvent_RunningRace_BestTime_MilliSecond_RunningMan'})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Subevent_RunningRace_HaveFinished'}) {
                        UISystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': True, 'Type': 1, 'MiniGameType': -1})
                        Event88:
                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_RunningMan_Adult_RunningRace_Clear_Event32', 'Index': -1}) {
                            Npc_Hylia_RunningMan_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_11', 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'ChoiceNumber': 0, 'ASName': '', 'MaintainPerformanceState': 0})
                            Npc_Hylia_RunningMan_Adult.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
                            Npc_Hylia_RunningMan_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'ChoiceNumber': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_44', 'MaintainPerformanceState': 0})
                            ChallengeSystemActor.EventTriggerUnshowTimerUI()

                            call Dm_SY_GetInEvent.GetInEvent_NotTurnForPosCamera({'ASName': 'Wait', 'Target': 3, 'NpcActorName': 'Npc_Hylia_RunningMan_Adult', 'ActorName': 'Obj_Rupee_Red', 'Npc_EventStarter': ActorIdentifier(name="Npc_Hylia_RunningMan_Adult"), 'NpcInstanceName': ''})

                            UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                            Npc_Hylia_RunningMan_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_40', 'MaintainPerformanceState': 0})
                            Event110:
                            if !GameSystemActor.EventQueryTalkChoice2() {
                                Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                                Npc_Hylia_RunningMan_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_33', 'MaintainPerformanceState': 0})
                                GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'FadePattern': 1, 'IsStartOnEvent': False, 'NextBanc': 'GerudoValley_Adult', 'NextStartPos': 'RunningRace_pos', 'BootEventName': '', 'EventStarterName': '', 'IsItemWarp': False})
                                Event72:
                                ChallengeSystemActor.EventExecuteRollbackChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'ChallengeStep': 'Ready', 'IsIgnoreChallengeProgressUI': True, 'ChallengeName': 'SubEvent_RunningRace'})
                                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
                                Npc_Hylia_RunningMan_Adult.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': False})
                            } else {
                                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
                                Npc_Hylia_RunningMan_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_34', 'MaintainPerformanceState': 0})
                                UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                                Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
                                Npc_Hylia_RunningMan_Adult.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'ClothWarpMode': -1})
                                EventSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})
                                UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                                EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'MoveFrame': 30, 'IsRestoreDoF': False})
                                goto Event72
                            }
                        } else {
                            Npc_Hylia_RunningMan_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_12', 'ASName': '', 'MaintainPerformanceState': 0})
                            Npc_Hylia_RunningMan_Adult.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
                            Npc_Hylia_RunningMan_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_13', 'MaintainPerformanceState': 0})
                            ChallengeSystemActor.EventTriggerUnshowTimerUI()

                            call Dm_SY_GetInEvent.GetInEvent_NotTurnForPosCamera({'ActorName': 'Obj_Rupee_Purple', 'ASName': 'Wait', 'Target': 3, 'NpcActorName': 'Npc_Hylia_RunningMan_Adult', 'Npc_EventStarter': ActorIdentifier(name="Npc_Hylia_RunningMan_Adult"), 'NpcInstanceName': ''})

                            UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_RunningMan_Adult_RunningRace_Clear_Event32', 'Value': True, 'Index': -1})
                            Npc_Hylia_RunningMan_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_15', 'ChoiceNumber': 2, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'MaintainPerformanceState': 0})
                            goto Event110
                        }
                    } else {
                        UISystemActor.EventShowFinish({'IsWaitEnd': True, 'Type': 1, 'MiniGameType': -1, 'IsNewRecords': False})
                        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Subevent_RunningRace_HaveFinished'})
                        goto Event88
                    }
                } else
                if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerMinute', 'GameDataB': 'SubEvent_RunningRace_BestTime_Minute', 'Operator': 0}) {
                    if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerSecond', 'GameDataB': 'SubEvent_RunningRace_BestTime_Second', 'Operator': 4}) {
                        goto Event74
                    } else
                    if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerSecond', 'GameDataB': 'SubEvent_RunningRace_BestTime_Second', 'Operator': 0})
                    && !GameDataActor.EventQueryCompareGameDataInt({'Operator': 4, 'GameDataA': 'MiniGame_TimerMilliSecond', 'GameDataB': 'SubEvent_RunningRace_BestTime_MilliSecond'}) {
                        goto Event74
                    } else {
                        Event71:
                        UISystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': False, 'Type': 1, 'MiniGameType': -1})
                        Event30:
                        Npc_Hylia_RunningMan_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_08', 'ChoiceNumber': 2, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'MaintainPerformanceState': 0})
                        ChallengeSystemActor.EventTriggerUnshowTimerUI()
                        if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_RunningMan_Adult_RunningRace_Clear_Event32', 'Index': -1}) in [0, 1] {
                            goto Event110
                        }
                    }
                } else {
                    goto Event71
                }
            } else
            if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerMinute', 'Operator': 4, 'GameDataB': 'SubEvent_RunningRace_BestTime_Minute_RunningMan'}) {
                goto Event74
            } else
            if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerMinute', 'Operator': 0, 'GameDataB': 'SubEvent_RunningRace_BestTime_Minute_RunningMan'})
            && !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerSecond', 'Operator': 4, 'GameDataB': 'SubEvent_RunningRace_BestTime_Second_RunningMan'}) {
                goto Event74
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Subevent_RunningRace_HaveFinished'}) {
                if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerMinute', 'GameDataB': 'SubEvent_RunningRace_BestTime_Minute', 'Operator': 4}) {
                    Event257:
                    GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'MiniGame_TimerMinute', 'DstGameDataName': 'SubEvent_RunningRace_BestTime_Minute'})
                    GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'MiniGame_TimerSecond', 'DstGameDataName': 'SubEvent_RunningRace_BestTime_Second'})
                    GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'MiniGame_TimerMilliSecond', 'DstGameDataName': 'SubEvent_RunningRace_BestTime_MilliSecond'})
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Subevent_RunningRace_HaveFinished'}) {
                        UISystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': True, 'Type': 1, 'MiniGameType': -1})
                        goto Event30
                    } else {
                        UISystemActor.EventShowFinish({'IsWaitEnd': True, 'Type': 1, 'MiniGameType': -1, 'IsNewRecords': False})
                        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Subevent_RunningRace_HaveFinished'})
                        goto Event30
                    }
                } else
                if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerMinute', 'GameDataB': 'SubEvent_RunningRace_BestTime_Minute', 'Operator': 0}) {
                    if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerSecond', 'GameDataB': 'SubEvent_RunningRace_BestTime_Second', 'Operator': 4}) {
                        goto Event257
                    } else
                    if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerSecond', 'GameDataB': 'SubEvent_RunningRace_BestTime_Second', 'Operator': 0})
                    && !GameDataActor.EventQueryCompareGameDataInt({'Operator': 4, 'GameDataA': 'MiniGame_TimerMilliSecond', 'GameDataB': 'SubEvent_RunningRace_BestTime_MilliSecond'}) {
                        goto Event257
                    } else {
                        goto Event71
                    }
                } else {
                    goto Event71
                }
            } else {
                goto Event257
            }
        } else
        if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerMinute', 'GameDataB': 'SubEvent_RunningRace_BestTime_Minute', 'Operator': 0}) {
            if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerSecond', 'GameDataB': 'SubEvent_RunningRace_BestTime_Second', 'Operator': 4}) {
                goto Event63
            } else
            if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerSecond', 'GameDataB': 'SubEvent_RunningRace_BestTime_Second', 'Operator': 0})
            && GameDataActor.EventQueryCompareGameDataInt({'Operator': 4, 'GameDataA': 'MiniGame_TimerMilliSecond', 'GameDataB': 'SubEvent_RunningRace_BestTime_MilliSecond'}) {
                Event9:
                Npc_Hylia_RunningMan_Adult.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
            }
            goto Event63
        } else {
            goto Event9
        }
    } else
    if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerMinute', 'Operator': 4, 'GameDataB': 'SubEvent_RunningRace_BestTime_Minute_RunningMan'}) {
        goto Event63
    } else
    if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerMinute', 'Operator': 0, 'GameDataB': 'SubEvent_RunningRace_BestTime_Minute_RunningMan'})
    && GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerSecond', 'Operator': 4, 'GameDataB': 'SubEvent_RunningRace_BestTime_Second_RunningMan'}) {
        Npc_Hylia_RunningMan_Adult.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
    }
    goto Event63
}

void Greetings() {
    if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_30', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_27', 'MaintainPerformanceState': 0})
        }
    }
}

void Near() {
    Event29:
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_RunningRace_IsAfter_Ready_Exp'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Near_03'})
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfSpirit_IsAfter_Step01_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_RunningMan_Adult_RunningRace_Clear_Event32', 'Index': -1}) {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Near_04'})
        } else {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Near_02'})
        }
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Near_01'})
    }
}

void SubEvent_RunningRace_IsAfter_Ready_Exp_Near() {
    goto Event29
}

void MaskTalk() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Bunny'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsAfterSell_Mask_Bunny', 'Index': -1}) {
            Event148:

            call Mask_All()

        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_RunningMan_Adult_BunnyMask_CheckAndTalk_Event116', 'Index': -1}) {

            call Mask_All_02()

        } else {

            call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_91', 'ASName': '', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_RunningMan_Adult_BunnyMask_CheckAndTalk_Event116', 'Value': True, 'Index': -1})
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'BeforeSell_Mask_Bunny_IsAfterTalk_Adult'})
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            if Npc_EventStarter.EventQueryIsOnMaskTalkFlag() {
                Npc_EventStarter.EventTriggerSetMaskTalkFlag({'value': True, 'IsReflectWhenSleep': False})
            }
        }
    } else {
        goto Event148
    }
}

void Mask_All() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Adult_GlassTruth'}) {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_RunningMan_Adult_GlassTruth'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Hylia_RunningMan_Adult_GlassTruth'})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:GlassTruth', 'MaintainPerformanceState': 0})
        }
    } else {
        switchcall Mask_Talk_01() {
          case fnv1a("Mask_Talk"):
            Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Mask_10', 'MaintainPerformanceState': 0})
        }
    }
}

void Mask_Talk_01() {
    switchcall NpcCommon.Mask_Talk_Common_With_InitTalk({'Arg_Turn_For_IgnoreMaskTalk': 4, 'Arg_Turn_For_MaskTalk': 4, 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Mask_04', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Mask_05', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Mask_08', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Mask_09', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Mask_103', 'ASName': 'TalkMonolog'}) {
      case 0xfab0f371:
        return fnv1a("Mask_Talk")
      case 0xf7b0eeb8:
        return 0xa6da0479
    }
}

void Mask_All_02() {
    switchcall Mask_Talk_02() {
      case fnv1a("Mask_Talk"):
        Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Mask_10', 'MaintainPerformanceState': 0})
    }
}

void Mask_Talk_02() {
    switchcall NpcCommon.Mask_Talk_Common_With_InitTalk({'Arg_Turn_For_IgnoreMaskTalk': 4, 'Arg_Turn_For_MaskTalk': 4, 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Mask_03', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Mask_05', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Mask_08', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Mask_09', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Mask_04_02', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Mask_103', 'ASName': 'TalkMonolog'}) {
      case 0xfab0f371:
        return fnv1a("Mask_Talk")
      case 0xf7b0eeb8:
        return 0xa6da0479
    }
}

void Go_LakeHylia() {

    call Common.AirStartUp()

    if !Player_Event.EventQueryPlayerCheckRideHorse({'IsRidingAny': False, 'Type': 0, 'ActorFileName': ''}) {
        Player_Event.EventPlayerSetExtraOrderDecelerateToStop({'IsWaitEnd': True, 'StopToTime': 0, 'WaitUntilStable': False})
        Player_Event.EventPlayerPlayASFollowRideHorse({'IsWaitEnd': True})
        Event191:

        call NaviEventCommon.InitTalk_NaviPlayerFront({'IsLookAtNavi': True})


        call NaviEventCommon.EventTalk_Navi_WithPlayerTalk_Choice2({'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_900', 'ChoiceNumber': 2, 'ChoiceLabel1': 9998, 'ChoiceLabel2': 9999, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0})

        if !GameSystemActor.EventQueryTalkChoice2() {
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ASName': 'Fly', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_902', 'MaintainPerformanceState': 0})
            Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})

            call RunningRace_TimerAndUI_Stop()

        } else {
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ASName': 'Fly', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_903', 'MaintainPerformanceState': 0})
            Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})

            call BackPlayer({'AnchorInstanceName': 'BackPos', 'IsMoveAnchorFrontDir': False})

        }
    } else
    if !Player_Event.EventQueryIsHorseEponaNear({'Distance': 15.0}) {
        GameSystemActor.EventTriggerOwnedHorseParticipateInPlayingMainEvent()
    }
    goto Event191
}

void BackPlayer() {
    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'Value': 0, 'GameDataName': 'SubEvent_RunningRace_SafetyCounter'})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SubEvent_RunningRace_EponaArea', 'Index': -1, 'Value': True})
    if !Player_Event.EventQueryPlayerCheckRideHorse({'IsRidingAny': False, 'Type': 0, 'ActorFileName': ''}) {

        fork {
            Player_Event.EventPlayerMoveToAnchor({'AnchorActorName': 'DestinationAnchor', 'IsKeepSpeed': False, 'IsSheathed': False, 'FinishASCommand': 'EvtWait', 'AnchorInstanceName': 'AnchorInstanceName', 'IsMoveAnchorFrontDir': False, 'ApplySlowMove': True, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'MoveSpeed': 1.0, 'IsInertiaMove': False, 'DecSpeedDistance': 3.0, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 15.0, 'IsWaitEnd': False})

            call NaviEventCommon.Navi_followPlayer()

            Event190:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SubEvent_RunningRace_NGAreaIn'}) {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 59})
                GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'Value': 1, 'GameDataName': 'SubEvent_RunningRace_SafetyCounter'})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'SubEvent_RunningRace_SafetyCounter', 'Value': 5}) {
                  case 0:
                    goto Event190
                  case [1, 2]:
                    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                    Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'InstanceName': 'BackPos'})
                    GameSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})
                    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                }
            }
        } {
            EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'TargetActorName': 'Player_Event', 'TargetActorInstanceName': '', 'IdealDistance': 7.5, 'ToleranceXZAngle': 10.0, 'LookAtVectorY': 0, 'ToleranceDistance': 4.0, 'ToleranceYUpwardAngle': 50.0, 'LookAtVectorXZ': 0, 'MoveTime': 72, 'CameraCollisionLookAtActorOffset': [0.0, 1.2000000476837158, 0.0], 'ToleranceYDownwardAngle': -15.0, 'TargetOffset': [0.0, 0.800000011920929, 0.0]})
        }

    } else {

        fork {
            Player_Event.EventPlayerMoveToAnchor({'AnchorActorName': 'DestinationAnchor', 'IsKeepSpeed': False, 'IsWaitEnd': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'ApplySlowMove': False, 'AnchorInstanceName': 'AnchorInstanceName', 'MoveSpeed': 1.0, 'IsMoveAnchorFrontDir': 'IsMoveAnchorFrontDir', 'DecSpeedDistance': 3.0, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0})

            call NaviEventCommon.Navi_followPlayer()

            Event193:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SubEvent_RunningRace_NGAreaIn'}) {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 59})
                GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'Value': 1, 'GameDataName': 'SubEvent_RunningRace_SafetyCounter'})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'SubEvent_RunningRace_SafetyCounter', 'Value': 5}) {
                  case 0:
                    goto Event193
                  case [1, 2]:
                    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                    Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'InstanceName': 'BackPos'})
                    GameSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})
                    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                }
            }
        } {
            EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'TargetActorName': 'Player_Event', 'TargetActorInstanceName': '', 'IdealDistance': 7.5, 'ToleranceXZAngle': 10.0, 'LookAtVectorY': 0, 'ToleranceDistance': 4.0, 'ToleranceYUpwardAngle': 50.0, 'LookAtVectorXZ': 0, 'MoveTime': 72, 'TargetOffset': [0.0, 1.2000000476837158, 0.0], 'CameraCollisionLookAtActorOffset': [0.0, 1.2000000476837158, 0.0], 'ToleranceYDownwardAngle': -15.0})
        }

    }
}

void Go_LakeHylia2() {

    call Common.AirStartUp()

    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'InstanceName': 'BackPos'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}
