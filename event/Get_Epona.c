-------- EventFlow: Get_Epona --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventTriggerBalloonMessage', 'EventTriggerForceSetMaskTalkFlag']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAIScheduleCheckActorActionAll', 'EventQueryAvoidDuplicationRandomChoice2', 'EventQueryAvoidDuplicationRandomChoice3']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWaitForActorPresence', 'EventTraverseAroundAndWaitCreateActor', 'EventTriggerSendErrorToEventResource', 'EventWait', 'EventTriggerRequestHorsesWarpToAnchorAction', 'EventTriggerRequestHorsesUpdateForceEquipSaddle', 'EventRemoveProjectiles']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice3', 'EventQueryRandomChoice3', 'EventQueryRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventCloseRupeeDisplay', 'EventEventFadeOut', 'EventEventFadeIn', 'EventTriggerOpenRupeeDisplay', 'EventOpenRupeeDisplay', 'EventWaitStableNumDisplay', 'EventShowFinish', 'EventTriggerCloseRupeeDisplay']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerAddOrSubGameDataInt', 'EventTriggerSetGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToStarterLinkAnchor', 'EventTriggerParticipateEvent', 'EventPlayerTurnAndLook', 'EventPlayerHorseGetOff', 'EventTriggerPlayerEventStartWithoutStopRidingTarget', 'EventPlayerSetExtraOrderDecelerateToStop', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerRideOnLastRiddenAnimal', 'EventPlayerTransferToOwnedHorse', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventTriggerPlayerLookAtObject', 'EventPlayerPlayASFollowRideHorse']
queries: ['EventQueryPlayerCheckRideHorse', 'EventQueryPlayerIsRideHorseOnce', 'EventQueryPlayerIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep', 'EventExecuteRollbackChallengeStep', 'EventTriggerShowReady', 'EventTriggerShowGo']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventSendEventTalkMessageToPlayerCamera', 'EventMoveToTargetPosCamera', 'EventSendImmediateUpdatePosEventTalkMessageToPlayerCamera', 'EventBasedOnLookAtCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventChangeTemporarilyToPlayerCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Hylia_Ingo_002_Adult
entrypoint: None()
actions: ['EventWarpToHomeMatrix', 'EventTriggerParticipateEvent', 'EventNPCTurnToTarget', 'EventTalk', 'EventAIScheduleWarpToAnchor', 'EventPlayAS', 'EventTriggerAIScheduleSelectSchedule', 'EventTriggerLookAtObject', 'EventWarpToTargetPosAndRot']
queries: ['EventQueryAIScheduleIsArrived']
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EventMemberCreateMethod': 0, 'EquipmentUser_Accessory4': ''}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerIncreaseRupee']
queries: ['EventQueryHasRuppe']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Animal_Epona_Adult
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventCopyAndRegisterOwnedHorse', 'EventTriggerParticipateEvent', 'EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Npc_Hylia_Ingo_003_Adult
entrypoint: None()
actions: ['EventPlayAS', 'EventPlayASHorseRideIngo', 'EventPlayerSetExtraOrderDecelerateToStop']
queries: ['EventQueryIsPlayingSameAS']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Animal_Horse_For_Ingo
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerRequestRideMe', 'EventTraceRailForGambleRace', 'EventTriggerChangeASVariationType']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: LastRiddenAnimal_ForEvent
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToHomeMatrix']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_Malon_Adult
entrypoint: None()
actions: ['EventAIScheduleWarpToAnchor']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk', 'EventNaviRequestBallonMessage', 'EventNaviLookAtObject', 'EventTriggerBecomeSpeaker', 'EventNaviWarpToPlayerHomePosition', 'EventWarpToTargetActor', 'EventNaviMovePosTalkToPlayer', 'EventNaviFollowPlayer']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventTriggerSoundControlBGM', 'EventTriggerStopInGameBgm', 'EventTriggerStartInGameBgm', 'EventTriggerSoundStopBGM', 'EventTriggerSoundStartSceneBgm', 'EventTriggerSoundStartAreaBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_LonLon_Gate_A_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void ReadyForGambleRace_Npc_Hylia_Ingo_002_Adult_Talk() {
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorActionAll() {
      case [0, 1]:

        call Mask_All()

        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_27', 'IsCloseDialog': False, 'EndDialogOption': 0, 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_26', 'IsCloseDialog': False, 'EndDialogOption': 0, 'MaintainPerformanceState': 0})
        }
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_Ingo_Adult_NoMoney'}) {
            UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 3, 'ChoiceLabel3': 1, 'ChoiceLabel2': 11, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_01'})
            Event5:
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                Event11:
                if !PouchSystemActor.EventQueryHasRuppe({'Value': 20}) {

                    call SubEvent_GetSwordBigGoron.SubEvent_TimerCheck()

                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SubEvent_TimerCheck_Canceled'}) {
                        Event447:
                        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
                        switch Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice3() {
                          case 0:
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_02', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsCloseDialog': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0})
                            Event17:
                            UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                          case 1:
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_69', 'EndDialogOption': 3, 'MaintainPerformanceState': 0})
                            goto Event17
                          case 2:
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_70', 'EndDialogOption': 3, 'MaintainPerformanceState': 0})
                            goto Event17
                        }
                    } else {
                        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})

                        fork {
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_21', 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsCloseDialog': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0})
                        } {
                            PouchSystemActor.EventTriggerIncreaseRupee({'Value': -20})
                        }

                        UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_04', 'ChoiceNumber': 2, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'IsCloseDialog': True, 'EndDialogOption': 0, 'MaintainPerformanceState': 0})
                        if !GameSystemActor.EventQueryTalkChoice2() {
                            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_05', 'IsCloseDialog': False, 'EndDialogOption': 0, 'MaintainPerformanceState': 0})
                            Event15:
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_36', 'IsCloseDialog': True, 'EndDialogOption': 0, 'MaintainPerformanceState': 0})
                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_Ingo_Adult_NoMoney', 'Value': False})
                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Get_Epona_HorseRidingPlaying_Npc_Hylia_Ingo_002_Adult_Talk_Event79', 'Index': -1, 'Value': False})

                            call Sub_Get_Epona_HorseRiding()

                        } else {
                            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
                            goto Event15
                        }
                    }
                } else {
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_Ingo_Adult_NoMoney', 'Value': True})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsCloseDialog': False, 'EndDialogOption': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_08'})
                    if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_03', 'IsCloseDialog': False, 'EndDialogOption': 0, 'MaintainPerformanceState': 0})
                    } else {
                        Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_14'})
                    }
                    goto Event17
                }
              case 1:
                UISystemActor.EventTriggerCloseRupeeDisplay()
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_61', 'MaintainPerformanceState': 0})
                if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_117', 'MaintainPerformanceState': 0})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_63', 'MaintainPerformanceState': 0})
                    Event216:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_62', 'MaintainPerformanceState': 0})
                    UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_20', 'MaintainPerformanceState': 0})
                    Event242:
                    if !GameSystemActor.EventQueryTalkChoice2() {
                        goto Event11
                    } else {
                        goto Event447
                    }
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_64', 'MaintainPerformanceState': 0})
                    goto Event216
                }
              case 2:
                goto Event447
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Get_Epona_Sub_Get_Epona_GambleRaceAfter_Event103', 'Index': -1}) {
            UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 3, 'ChoiceLabel3': 1, 'ChoiceLabel2': 11, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_93'})
            goto Event5
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_31', 'IsCloseDialog': False, 'EndDialogOption': 0, 'MaintainPerformanceState': 0})
            UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_32', 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 3, 'ChoiceLabel3': 1, 'ChoiceLabel2': 11, 'MaintainPerformanceState': 0})
            goto Event5
        }
      case 20:
        Event302:

        call Mask_All()

        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_84', 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_85', 'MaintainPerformanceState': 0})
            }
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_28', 'IsCloseDialog': False, 'EndDialogOption': 0, 'MaintainPerformanceState': 0})
        }
      case 21:
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {

            call InitTalk.InitTalk({'Arg_Greeting': 3, 'Arg_Turn': 0})

            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsOverrideStyle': True, 'OverrideStyle': 8, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Child:Talk_23'})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsOverrideStyle': True, 'OverrideStyle': 8, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Child:Talk_24'})
            }
        } else {

            call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': True, 'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_17', 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_16', 'MaintainPerformanceState': 0})
            }
        }
    }
}

void Sub_Get_Epona_HorseRiding() {

    call Sub_Get_Epona_HorseRidingStart_Common()

    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'AtVector': [8.0, 0.0, 0.0], 'MoveTime': 240, 'TargetFovy': 50.0, 'PosVector': [8.0, 0.0, 0.0], 'IsEnableRevertFast': False})
    Npc_Hylia_Ingo_002_Adult.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'TargetFovy': 40.0, 'IsPosVectorReferenceActorPosOnce': True, 'PosVector': [-91.57955932617188, 151.8079071044922, 237.0614013671875], 'AtVector': [-87.98651123046875, 151.6811981201172, 234.2982940673828], 'IsWaitEnd': False, 'IsEnableRevertFast': False})
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 0})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_Ingo_Adult_Explained'}) {
        Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_96', 'MaintainPerformanceState': 0})
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Hylia_Ingo_Adult_Explained'})
        Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_125', 'MaintainPerformanceState': 0})
        Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_35', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0})
    }
}

void HorseRidingPlaying_Npc_Hylia_Ingo_002_Adult_Talk() {

    call Mask_All()

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Get_Epona_Sub_Get_Epona_GambleRaceAfter_Event103', 'Index': -1}) {
        if !Player_Event.EventQueryPlayerCheckRideHorse({'IsRidingAny': False, 'Type': 0, 'ActorFileName': ''}) {
            if !Player_Event.EventQueryPlayerCheckRideHorse({'ActorFileName': 'Animal_Epona_Adult', 'IsRidingAny': False, 'Type': 0}) {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'LonLonRanch_GambleRaceLoseOtherThanEpona', 'Value': False})
                if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GetEpona_IsRideEpona'}) {
                    Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_128'})
                }
                Event407:

                fork {
                    UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
                } {
                    Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 7, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_94', 'ChoiceLabel1': 18, 'MaintainPerformanceState': 0})
                }

                if !GameSystemActor.EventQueryTalkChoice2() {
                    Event452:
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})
                    if !PouchSystemActor.EventQueryHasRuppe({'Value': 20}) {
                        UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Get_Epona_RidingEpona', 'Value': False})
                        if !Player_Event.EventQueryPlayerCheckRideHorse({'ActorFileName': 'Animal_Epona_Adult', 'IsRidingAny': False, 'Type': 0}) {
                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Get_Epona_RidingEpona', 'Value': True})
                            Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_106', 'MaintainPerformanceState': 0, 'ASName': 'TalkMonolog', 'NotPlayLipSyncAnim': True})
                            Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_107', 'MaintainPerformanceState': 0})
                            Event167:
                            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HavePlayedEvent.Dm_LonLon_0020', 'Index': -1}) {
                                SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 3, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'CommandLife': 0, 'WaitingResumeInGameBgm': False})
                                UISystemActor.EventEventFadeOut({'Color': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 2})
                                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'LonLonRanch_GambleRaceAfterFirstDemo', 'Value': False, 'Index': -1})
                                Event80:

                                call Sub_Get_Epona_GambleRace_Start()

                            } else {
                                Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Near_04'})

                                fork {
                                    Npc_Hylia_Ingo_002_Adult.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
                                } {
                                    UISystemActor.EventEventFadeOut({'Color': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1})
                                }


                                call Sub_Get_Epona_RambleRace_Ready()

                                EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_LonLon_0020', 'FadeInTypeEventEnd': 0})
                                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'LonLonRanch_GambleRaceAfterFirstDemo', 'Index': -1, 'Value': True})
                                goto Event80
                            }
                        } else {
                            Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_38', 'MaintainPerformanceState': 0})
                            goto Event167
                        }
                    } else {
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_Ingo_Adult_NoMoney', 'Value': True})
                        UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                        Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_09', 'MaintainPerformanceState': 0})
                        Event258:
                        Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_95', 'MaintainPerformanceState': 0})
                    }
                } else {
                    Event453:
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
                    UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                    Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_39', 'MaintainPerformanceState': 0})
                    goto Event258
                }
            } else {
                goto Event407
            }
        } else {
            Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 15, 'ChoiceLabel1': 5, 'ChoiceLabel3': 4, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_97', 'MaintainPerformanceState': 0})
            Event70:
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})
                Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_86', 'ChoiceNumber': 2, 'ChoiceLabel1': 5, 'ChoiceLabel2': 16, 'MaintainPerformanceState': 0})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})
                    Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_34', 'MaintainPerformanceState': 0})

                    call Sub_HorseRidingFinish()

                } else {
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
                    Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_89', 'MaintainPerformanceState': 0})
                }
              case 1:
                Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_83', 'MaintainPerformanceState': 0})
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_Ingo_Adult_NoMoney'}) {
                    Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_76'})
                } else {
                    Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_82'})
                }
              case 2:
                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
                Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_33', 'MaintainPerformanceState': 0})
            }
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_Unlock_GambleRace'})
        if !Player_Event.EventQueryPlayerCheckRideHorse({'IsRidingAny': False, 'Type': 0, 'ActorFileName': ''}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Get_Epona_HorseRidingPlaying_Npc_Hylia_Ingo_002_Adult_Talk_Event122', 'Index': -1}) {
                if !Player_Event.EventQueryPlayerCheckRideHorse({'ActorFileName': 'Animal_Epona_Adult', 'IsRidingAny': False, 'Type': 0}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GetEpona_IsRideEpona'}) {
                        Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_118'})
                    } else {
                        Event301:
                        Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_128'})
                    }
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GetEpona_IsRideEpona'})
                    Event404:

                    fork {
                        Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_43', 'MaintainPerformanceState': 0})
                    } {
                        UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
                    }

                    Event154:
                    if !GameSystemActor.EventQueryTalkChoice2() {
                        goto Event452
                    } else {
                        goto Event453
                    }
                } else
                Event584:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_Ingo_Adult_NoMoney'}) {
                    Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_91'})
                } else {
                    Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_40', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0})

                    fork {
                        UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
                    } {
                        Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_44', 'MaintainPerformanceState': 0})
                    }

                    goto Event154
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Get_Epona_HorseRidingPlaying_Npc_Hylia_Ingo_002_Adult_Talk_Event79', 'Index': -1}) {
                goto Event584
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Get_Epona_HorseRidingPlaying_Npc_Hylia_Ingo_002_Adult_Talk_Event79', 'Value': True, 'Index': -1})
                if !Player_Event.EventQueryPlayerCheckRideHorse({'ActorFileName': 'Animal_Epona_Adult', 'IsRidingAny': False, 'Type': 0}) {
                    goto Event301
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_Ingo_Adult_ByTheWay'}) {
                    goto Event404
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Hylia_Ingo_Adult_ByTheWay'})
                    Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_07', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0})
                    Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_10'})
                    goto Event404
                }
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Get_Epona_HorseRidingPlaying_Npc_Hylia_Ingo_002_Adult_Talk_Event79', 'Index': -1}) {
            Event582:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_Ingo_Adult_NoMoney'}) {
                Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 15, 'ChoiceLabel1': 5, 'ChoiceLabel3': 4, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_90'})
                goto Event70
            } else {
                Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_87', 'MaintainPerformanceState': 0})
                Event3:
                Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 15, 'ChoiceLabel1': 5, 'ChoiceLabel3': 4, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_88', 'MaintainPerformanceState': 0})
                goto Event70
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Get_Epona_HorseRidingPlaying_Npc_Hylia_Ingo_002_Adult_Talk_Event122', 'Index': -1}) {
            goto Event582
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Get_Epona_HorseRidingPlaying_Npc_Hylia_Ingo_002_Adult_Talk_Event122', 'Value': True, 'Index': -1})
            Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_07', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0})
            Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_58', 'MaintainPerformanceState': 0})
            goto Event3
        }
    }
}

void Sub_HorseRidingFinish() {
    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Player_Event.EventPlayerHorseGetOff({'IsWaitEnd': True})
    Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'Get_Epona_HorseRiding_StartPlayerPos', 'ASCommand': 'EvtWait'})

    call NaviEventCommon.NaviWarp_PlayerHomePos({'IsLookAtPlayer': False})

    GameSystemActor.EventWaitForActorPresence({'ActorName': 'Npc_Hylia_Ingo_002_Adult', 'IsWaitEnd': True, 'InstanceName': '', 'IsActorCreateRequest': True})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    GameSystemActor.EventTriggerRequestHorsesUpdateForceEquipSaddle({'ForceEquip': False})
    Npc_Hylia_Ingo_002_Adult.EventWarpToHomeMatrix({'IsWaitEnd': True})
    Npc_Hylia_Ingo_002_Adult.EventTriggerParticipateEvent()
    Player_Event.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Hylia_Ingo_002_Adult', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'IsWaitEnd': False, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})
    Npc_Hylia_Ingo_002_Adult.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    EventCamera.EventSendImmediateUpdatePosEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 1})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    ChallengeSystemActor.EventExecuteRollbackChallengeStep({'IsIgnoreChallengeProgressUI': True, 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'MiniGame_GambleRace', 'ChallengeStep': 'Ready'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_Ingo_Adult_FallOff', 'Value': False})
    Npc_Hylia_Ingo_002_Adult.EventTriggerAIScheduleSelectSchedule()
    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    if !Player_Event.EventQueryPlayerIsRideHorseOnce() {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_Ingo_Adult_NoMoney'}) {
            Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': '', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_41'})
        } else {
            Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_23', 'ASName': '', 'MaintainPerformanceState': 0})
        }
    } else {
        Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_51', 'MaintainPerformanceState': 0})
    }
}

void Sub_Get_Epona_GambleRace_Start() {

    call Sub_Get_Epona_RambleRace_Ready()

    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreChallengeProgressUI': True, 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'StepName': 'GambleRacePlaying', 'ChallengeName': 'MiniGame_GambleRace'})
    LastRiddenAnimal_ForEvent.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    Npc_Hylia_Malon_Adult.EventAIScheduleWarpToAnchor({'AnchorType': 12, 'IsWaitEnd': True, 'InstanceName': '', 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'ClothWarpMode': -1})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'LonLonRanch_GambleRaceAfterFirstDemo', 'Index': -1}) {
        Event517:
        Player_Event.EventPlayerPlayASForFlowchart({'IsAllSlot': True, 'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0, 'ASCommand': 'HorseWait'})
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': True})
        Animal_Horse_For_Ingo.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        Animal_Horse_For_Ingo.EventTriggerRequestRideMe({'TargetActorName': 'Npc_Hylia_Ingo_003_Adult', 'TargetActorInstanceName': '', 'RidingMode': 1, 'SeatIndex': 0})
        if Npc_Hylia_Ingo_003_Adult.EventQueryIsPlayingSameAS({'ASName': 'HorseWait', 'Partial': ''}) {
            Npc_Hylia_Ingo_003_Adult.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'HorseWait'})
        }

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'PosVector': [-88.95024871826172, 154.82009887695312, 229.2100067138672], 'AtVector': [-84.54000854492188, 153.5399932861328, 230.0800018310547], 'Actor1ActorName': '', 'IsEnableRevertFast': False})
        } {

            call Common_Camera_Pln.CameraDoF_Default()

        }

        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'LonLonRanch_HavePlayedGambleRace', 'Index': -1}) {

            call NaviEventCommon.NaviWarp_PlayerHomePos({'IsLookAtPlayer': False})

            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            Event131:

            fork {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'LonLonRanch_HavePlayedGambleRace', 'Index': -1}) {
                    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                }
            } {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 35})

                fork {
                    Npc_Hylia_Ingo_003_Adult.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'HorseLetsgo'})
                } {
                    Animal_Horse_For_Ingo.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Letsgo2'})
                }

            }

            SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Horse', 'IsReleaseDucking': True, 'CommandLife': 2})

            fork {
                ChallengeSystemActor.EventTriggerShowReady({'MiniGameType': 8})
            } {
                LastRiddenAnimal_ForEvent.EventPlayAS({'ASName': 'Letsgo', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 166})
                Animal_Horse_For_Ingo.EventTraceRailForGambleRace({'IsWaitEnd': False})
            } {
                Player_Event.EventPlayerPlayASForFlowchart({'IsAllSlot': True, 'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0, 'ASCommand': 'HorseWaitLetsgo'})
            }


            fork {
                ChallengeSystemActor.EventTriggerShowGo({'MiniGameType': 8})
            } {
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 26})
            }

        } else {
            goto Event131
        }
    } else {
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'GambleRacePlayerStartPos', 'IsWaitEnd': True, 'UseDemoWait': True, 'NotChangeRot': False, 'ASCommand': 'EvtWait'})
        Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': False, 'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'OffsetType': -1, 'IsHomePosition': True, 'IsNearOffset': True})
        goto Event517
    }
}

void Sub_Get_Epona_HorseRidingStart_Common() {
    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreChallengeProgressUI': True, 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'StepName': 'HorseRidingPlaying', 'ChallengeName': 'MiniGame_GambleRace'})
    GameSystemActor.EventRemoveProjectiles({'IsWaitEnd': True})
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'Get_Epona_HorseRiding_PlayerPos', 'ASCommand': 'EvtWait'})

    call NaviEventCommon.NaviWarp_PlayerHomePos({'IsLookAtPlayer': False})

    GameSystemActor.EventWaitForActorPresence({'ActorName': 'Npc_Hylia_Ingo_002_Adult', 'IsWaitEnd': True, 'InstanceName': '', 'IsActorCreateRequest': True})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    Npc_Hylia_Ingo_002_Adult.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'ClothWarpMode': -1, 'AnchorType': 6, 'InstanceName': ''})
    Npc_Hylia_Ingo_002_Adult.EventTriggerAIScheduleSelectSchedule()
    Npc_Hylia_Ingo_002_Adult.EventPlayAS({'ASName': 'Act_SitChair_Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    Player_Event.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Hylia_Ingo_002_Adult', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'IsWaitEnd': False, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': False})
    Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'ActorName': 'Npc_Hylia_Ingo_002_Adult', 'Target': 3})
    GameSystemActor.EventTriggerRequestHorsesWarpToAnchorAction()
    GameSystemActor.EventTriggerRequestHorsesUpdateForceEquipSaddle({'ForceEquip': True})
    EventCamera.EventMoveToTargetPosCamera({'AtVector': [-107.0, 153.0, 239.0], 'PosVector': [-111.0, 154.0, 234.0], 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void Sub_Get_Epona_RambleRace_Ready() {
    GameSystemActor.EventRemoveProjectiles({'IsWaitEnd': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'LonLonRanch_PlayingGambleRace', 'Value': True, 'Index': -1})
    GameSystemActor.EventWaitForActorPresence({'IsWaitEnd': True, 'InstanceName': '', 'IsActorCreateRequest': True, 'ActorName': 'Animal_Horse_For_Ingo'})
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'LonLonRanch_GambleRaceWinCount', 'Value': 0, 'Index': -1}) {
      case [0, 1]:
        Animal_Horse_For_Ingo.EventTriggerChangeASVariationType({'Type': 3})
      case 2:
        Animal_Horse_For_Ingo.EventTriggerChangeASVariationType({'Type': 3})
    }
}

void Sub_Get_Epona_GambleRace_End() {
    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 0})
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 0, 'IsImmediateOnAutoOff': True, 'CommandLife': 0, 'WithPlayableEvent': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
    Player_Event.EventTriggerPlayerEventStartWithoutStopRidingTarget()

    fork {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'LonLonRanch_GambleRaceGoaledIngo', 'Index': -1}) {
            Npc_Hylia_Ingo_003_Adult.EventPlayASHorseRideIngo({'ASCommand': 'HorseWin', 'IsWaitEnd': False})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            Npc_Hylia_Ingo_003_Adult.EventPlayerSetExtraOrderDecelerateToStop({'StopToTime': 120, 'IsWaitEnd': True, 'WaitUntilStable': False})
        } else {
            Npc_Hylia_Ingo_003_Adult.EventPlayerSetExtraOrderDecelerateToStop({'StopToTime': 120, 'IsWaitEnd': True, 'WaitUntilStable': False})
        }
    } {
        UISystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': False, 'Type': 1, 'MiniGameType': 8})
    } {
        Player_Event.EventPlayerSetExtraOrderDecelerateToStop({'IsWaitEnd': True, 'StopToTime': 120, 'WaitUntilStable': False})
        Player_Event.EventPlayerPlayASFollowRideHorse({'IsWaitEnd': False})
    }

    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'LonLonRanch_HavePlayedGambleRace', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'LonLonRanch_HavePlayedGambleRace', 'Index': -1, 'Value': True})
    }

    call Sub_Get_Epona_GambleRaceAfter()

}

void Sub_Get_Epona_GambleRaceAfter() {
    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call Sub_Get_Epona_RambleRace_Clean()

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'LonLonRanch_GambleRaceGoaledPlayer', 'Index': -1}) {
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'LonLonRanch_GambleRaceWinCount', 'Value': 0, 'Index': -1}) {
          case [0, 1]:
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreChallengeProgressUI': True, 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'MiniGame_GambleRace', 'StepName': 'Ready'})
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_LonLon_0030', 'FadeInTypeEventEnd': 2})

            call Sub_Get_Epona_RidingAndRambleRace_Clean()

            GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'LonLonRanch_GambleRaceWinCount', 'Value': 1, 'Index': -1})
            UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            Player_Event.EventTriggerPlayerRideOnLastRiddenAnimal()
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'LonLonRanch_GambleRaceAfterFirstDemo', 'Index': -1, 'Value': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Get_Epona_Sub_Get_Epona_GambleRaceAfter_Event103', 'Index': -1, 'Value': False})

            call Sub_Get_Epona_GambleRace_Start()

          case 2:
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'LonLonRanch_GambleRaceLoseOtherThanEpona', 'Value': False, 'Index': -1})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'LonLonRanch_PlayingGambleRace', 'Value': False, 'Index': -1})
            Npc_Hylia_Malon_Adult.EventAIScheduleWarpToAnchor({'AnchorType': 0, 'IsWaitEnd': True, 'InstanceName': '', 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'ClothWarpMode': -1})
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreChallengeProgressUI': True, 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'MiniGame_GambleRace', 'StepName': 'Ready'})
            GameSystemActor.EventTriggerRequestHorsesUpdateForceEquipSaddle({'ForceEquip': False})
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_LonLon_0040'})

            call Sub_Get_Epona_RidingAndRambleRace_Clean()

        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'LonLonRanch_GambleRaceGoaledIngo', 'Index': -1}) {

        call Sub_Get_Epona_RidingAndRambleRace_Clean()


        call Sub_Get_Epona_GambleRace_AfterEnd()

        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreChallengeProgressUI': True, 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'MiniGame_GambleRace', 'StepName': 'Ready'})
        SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'ResumeDelay': 0})
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_Ingo_Adult_Happy'}) {
            Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0, 'ASName': 'Act_Win_Wait', 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_12'})
            Event580:
            Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_13', 'EndDialogOption': 0, 'IsCloseDialog': True})
            UISystemActor.EventOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': False, 'IsWaitEnd': True, 'IsWaitOpenAnim': False})
            PouchSystemActor.EventTriggerIncreaseRupee({'Value': -20})
            UISystemActor.EventWaitStableNumDisplay({'IsWaitEnd': True})
            UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Get_Epona_Sub_Get_Epona_GambleRaceAfter_Event103', 'Value': True, 'Index': -1})
            Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Hylia_Ingo_002_Adult', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Get_Epona_RidingEpona'}) {

                fork {
                    UISystemActor.EventOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True, 'IsWaitEnd': True, 'IsWaitOpenAnim': False})
                } {
                    Npc_Hylia_Ingo_002_Adult.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_19', 'ChoiceNumber': 2, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'MaintainPerformanceState': 0})
                }

                if !GameSystemActor.EventQueryTalkChoice2() {
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})
                    UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                    if !PouchSystemActor.EventQueryHasRuppe({'Value': 20}) {
                        Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_38', 'MaintainPerformanceState': 0})
                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HavePlayedEvent.Dm_LonLon_0020', 'Index': -1}) {

                            fork {
                                UISystemActor.EventEventFadeOut({'Color': 0, 'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False})
                            } {
                                SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 3, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsForceFadeTime': False, 'IsImmediateOnAutoOff': False, 'WaitingResumeInGameBgm': False})
                            }

                            Player_Event.EventTriggerPlayerRideOnLastRiddenAnimal()
                            GameSystemActor.EventTriggerRequestHorsesUpdateForceEquipSaddle({'ForceEquip': True})
                            Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'HorseWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'KeepOneTimeAnm': True, 'ClothWarpMode': 0})
                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'LonLonRanch_GambleRaceAfterFirstDemo', 'Index': -1, 'Value': False})

                            call Sub_Get_Epona_GambleRace_Start()

                        } else {
                            UISystemActor.EventEventFadeOut({'Color': 0, 'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': True})

                            call Sub_Get_Epona_RambleRace_Ready()

                            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_LonLon_0020'})
                            Player_Event.EventTriggerPlayerRideOnLastRiddenAnimal()
                            GameSystemActor.EventTriggerRequestHorsesUpdateForceEquipSaddle({'ForceEquip': True})
                            Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'HorseWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'KeepOneTimeAnm': True, 'ClothWarpMode': 0})
                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'LonLonRanch_GambleRaceAfterFirstDemo', 'Index': -1, 'Value': True})

                            call Sub_Get_Epona_GambleRace_Start()

                        }
                    } else {
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_Ingo_Adult_NoMoney', 'Value': True})
                        Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_09', 'MaintainPerformanceState': 0})
                        Event208:
                        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'LonLonRanch_GambleRaceWinCount', 'Index': -1, 'Value': 0})
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Get_Epona_RidingEpona', 'Value': False})
                    }
                } else {
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
                    UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                    Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_18', 'MaintainPerformanceState': 0})
                    goto Event208
                }
            } else {
                Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_124', 'MaintainPerformanceState': 0})
                Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_18', 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'LonLonRanch_GambleRaceWinCount', 'Index': -1, 'Value': 0})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Get_Epona_RidingEpona', 'Value': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'LonLonRanch_GambleRaceLoseOtherThanEpona', 'Value': True})
                GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                Npc_Hylia_Malon_Adult.EventAIScheduleWarpToAnchor({'AnchorType': 8, 'IsWaitEnd': True, 'InstanceName': '', 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'ClothWarpMode': -1})
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Hylia_Ingo_Adult_Happy'})
            Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0, 'ASName': 'Act_Win_Wait', 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_11'})
            goto Event580
        }
    } else {
        GameSystemActor.EventTriggerSendErrorToEventResource({'Title': ''})
    }
}

void Sub_Get_Epona_RambleRace_Clean() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'LonLonRanch_PlayingGambleRace', 'Index': -1, 'Value': False})
}

void Sub_Get_Epona_RidingAndRambleRace_Clean() {
    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'LonLonRanch_GambleRaceProgressPlayer', 'Index': -1, 'Value': 0})
    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'LonLonRanch_GambleRaceProgressIngo', 'Index': -1, 'Value': 0})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'LonLonRanch_GambleRaceGoaledPlayer'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'LonLonRanch_GambleRaceGoaledIngo'})
}

void Sub_Get_Epona_GambleRace_AfterEnd() {
    Player_Event.EventPlayerHorseGetOff({'IsWaitEnd': True})
    Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'GambleRace_PlayerHomePos', 'ASCommand': 'EvtWait'})
    GameSystemActor.EventWaitForActorPresence({'ActorName': 'Npc_Hylia_Ingo_002_Adult', 'IsWaitEnd': True, 'InstanceName': '', 'IsActorCreateRequest': True})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    GameSystemActor.EventTriggerRequestHorsesUpdateForceEquipSaddle({'ForceEquip': False})
    Player_Event.EventTriggerParticipateEvent()
    Npc_Hylia_Ingo_002_Adult.EventTriggerParticipateEvent()
    Npc_Hylia_Ingo_002_Adult.EventWarpToHomeMatrix({'IsWaitEnd': True})
    Player_Event.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Hylia_Ingo_002_Adult', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'IsWaitEnd': False, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})
    Npc_Hylia_Ingo_002_Adult.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_Hylia_Ingo_002_Adult.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Act_Win_Wait'})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-2.809999942779541, 2.119999885559082, -1.5399999618530273], 'AtVector': [-0.019999999552965164, 1.1699999570846558, 0.949999988079071], 'TargetFovy': 37.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventCamera.EventSendImmediateUpdatePosEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalk', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreChallengeProgressUI': True, 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'MiniGame_GambleRace', 'StepName': 'Ready'})
    Npc_Hylia_Ingo_002_Adult.EventTriggerAIScheduleSelectSchedule()
    LastRiddenAnimal_ForEvent.EventWarpToHomeMatrix({'IsWaitEnd': True})
    LastRiddenAnimal_ForEvent.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void AfterWonGambleRace_Npc_Hylia_Ingo_002_Adult_Talk() {

    call Mask_All()

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'LonLonRanch_GambleRace_IsInsideFence'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'LonLonRanch_GambleRace_RideSideFence', 'Index': -1}) {
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'TargetPoint', 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsWaitEnd': False, 'Actor1InstanceName': 'ViewPointLeft', 'MoveTime': 0, 'IsEnableRevertFast': False})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'TargetPoint', 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsWaitEnd': False, 'Actor1InstanceName': 'ViewPointRight', 'MoveTime': 0, 'IsEnableRevertFast': False})
        }
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Get_Epona_AfterWonGambleRace_Npc_Hylia_Ingo_002_Adult_Talk_Event313', 'Index': -1}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Get_Epona_AfterWonGambleRace_Npc_Hylia_Ingo_002_Adult_Talk_Event320', 'Index': -1}) {
                if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                    Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_122', 'MaintainPerformanceState': 0})
                } else {
                    Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_46', 'MaintainPerformanceState': 0})
                }
            } else {
                Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_123', 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Get_Epona_AfterWonGambleRace_Npc_Hylia_Ingo_002_Adult_Talk_Event320', 'Value': True, 'Index': -1})
            }
        } else {
            Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_46', 'MaintainPerformanceState': 0})
            Npc_Navi.EventNaviMovePosTalkToPlayer({'IsWaitEnd': True, 'ASCommand': '', 'IsUseDisguiseSpeakerPos': False, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'DistPassThrough': 0.0})
            Npc_Navi.EventTriggerBecomeSpeaker()
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'MaintainPerformanceState': 0, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Get_Epona:Navi_Talk'})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Get_Epona_AfterWonGambleRace_Npc_Hylia_Ingo_002_Adult_Talk_Event313', 'Index': -1}) {
        if !GameSystemActor.EventQueryRandomChoice2() {
            Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_120', 'MaintainPerformanceState': 0})
        } else {
            Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_121', 'MaintainPerformanceState': 0})
        }
    } else {
        Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_119', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Get_Epona_AfterWonGambleRace_Npc_Hylia_Ingo_002_Adult_Talk_Event313', 'Value': True, 'Index': -1})
    }
}

void Sub_Get_Epona_EscapeRanch_EscapeFromA() {
    Obj_LonLon_Gate_A_01.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithoutStopRidingTarget()

    call Common.AirStartUp_OnlyStopInAir()

    SoundSystemActor.EventTriggerSoundStopBGM({'IsUseSuspendFade': False, 'BGMName': 'BGM_Dm_LonLon_0040'})
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 0, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
    UISystemActor.EventEventFadeOut({'IsNoPlayAnime': False, 'Color': 0, 'IsWaitEnd': True, 'Length': 3})
    Npc_Hylia_Ingo_002_Adult.EventAIScheduleWarpToAnchor({'AnchorType': 10, 'IsWaitEnd': True, 'InstanceName': '', 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'ClothWarpMode': -1})
    Player_Event.EventPlayerHorseGetOff({'IsWaitEnd': True})

    call Sub_Get_Epona_EscapeRanch_EscapeFromA_Warp()

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_HrlField_0070', 'FadeInTypeEventEnd': 2})
    Event61:
    Player_Event.EventPlayerTransferToOwnedHorse({'IsWaitEnd': True})
    EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'HorseWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Skullchild_JustAfterGetEpona'})
    SoundSystemActor.EventTriggerSoundStartAreaBgm({'BgmName': ''})
    SoundSystemActor.EventTriggerSoundStartSceneBgm({'StartType': 2, 'BgmName': 'BGM_HyruleField'})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Get_Epona', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'StepName': 'Complete', 'IsIgnoreChallengeProgressUI': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
    Npc_Navi.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'PositionOffset': [0.4099999964237213, 0.20000000298023224, -0.17000000178813934], 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'ClothWarpMode': -1})
    Npc_Navi.EventNaviWarpToPlayerHomePosition({'Type': 1, 'IsNearOffset': True, 'IsWaitEnd': True, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_Navi.EventNaviRequestBallonMessage({'Index': 285})
}

void Sub_Get_Epona_EscapeRanch_EscapeFromB() {
    Obj_LonLon_Gate_A_01.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithoutStopRidingTarget()

    call Common.AirStartUp_OnlyStopInAir()

    SoundSystemActor.EventTriggerSoundStopBGM({'IsUseSuspendFade': False, 'BGMName': 'BGM_Dm_LonLon_0040'})
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 0, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
    UISystemActor.EventEventFadeOut({'IsNoPlayAnime': False, 'Color': 0, 'IsWaitEnd': True, 'Length': 3})
    Npc_Hylia_Ingo_002_Adult.EventAIScheduleWarpToAnchor({'AnchorType': 10, 'IsWaitEnd': True, 'InstanceName': '', 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'ClothWarpMode': -1})
    Player_Event.EventPlayerHorseGetOff({'IsWaitEnd': True})

    call Sub_Get_Epona_EscapeRanch_EscapeFromB_Warp()

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_HrlField_0072', 'FadeInTypeEventEnd': 2})
    goto Event61
}

void Sub_Get_Epona_EscapeRanch_EscapeFromC() {
    Obj_LonLon_Gate_A_01.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithoutStopRidingTarget()

    call Common.AirStartUp_OnlyStopInAir()

    SoundSystemActor.EventTriggerSoundStopBGM({'IsUseSuspendFade': False, 'BGMName': 'BGM_Dm_LonLon_0040'})
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 0, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
    UISystemActor.EventEventFadeOut({'IsNoPlayAnime': False, 'Color': 0, 'Length': 3, 'IsWaitEnd': True})
    Npc_Hylia_Ingo_002_Adult.EventAIScheduleWarpToAnchor({'AnchorType': 10, 'IsWaitEnd': True, 'InstanceName': '', 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'ClothWarpMode': -1})
    Player_Event.EventPlayerHorseGetOff({'IsWaitEnd': True})

    call Sub_Get_Epona_EscapeRanch_EscapeFromC_Warp()

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_HrlField_0071', 'FadeInTypeEventEnd': 2})
    goto Event61
}

void Sub_Get_Epona_EscapeRanch_EscapeFromMainGate() {
    Obj_LonLon_Gate_A_01.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithoutStopRidingTarget()

    call Common.AirStartUp_OnlyStopInAir()

    SoundSystemActor.EventTriggerSoundStopBGM({'IsUseSuspendFade': False, 'BGMName': 'BGM_Dm_LonLon_0040'})
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 0, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
    UISystemActor.EventEventFadeOut({'IsNoPlayAnime': False, 'Color': 0, 'IsWaitEnd': True, 'Length': 3})
    Npc_Hylia_Ingo_002_Adult.EventAIScheduleWarpToAnchor({'AnchorType': 10, 'IsWaitEnd': True, 'InstanceName': '', 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'ClothWarpMode': -1})
    Player_Event.EventPlayerHorseGetOff({'IsWaitEnd': True})

    call Sub_Get_Epona_EscapeRanch_EscapeFromMainGate_Warp()

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_HrlField_0073', 'FadeInTypeEventEnd': 2})
    goto Event61
}

void ReadyForGambleRace_HorseRiding() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Get_Epona_Sub_Get_Epona_GambleRaceAfter_Event103', 'Index': -1}) {
        UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_30'})
        goto Event242
    } else {
        UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_29', 'ChoiceLabel1': 0, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'MaintainPerformanceState': 0})
        goto Event242
    }
}

void HorseRidingPlaying_FallOffFromEpona() {
    Npc_Hylia_Ingo_002_Adult.EventTriggerParticipateEvent()
    Player_Event.EventTriggerParticipateEvent()
    Animal_Epona_Adult.EventTriggerParticipateEvent()
    EventCamera.EventTriggerCameraSavePoint()
    Npc_Hylia_Ingo_002_Adult.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
    EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'Npc_Hylia_Ingo_002_Adult', 'TargetOffset': [0.0, 1.0, 0.0], 'IsWaitEnd': True, 'TargetActorInstanceName': '', 'ToleranceDistance': 3.0, 'LookAtVectorXZ': 1, 'ToleranceXZAngle': 10.0, 'LookAtVectorY': 0, 'ToleranceYUpwardAngle': 30.0, 'ToleranceYDownwardAngle': -5.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IdealDistance': 3.5})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_Ingo_Adult_FallOff'}) {
        switch GameSystemActor.EventQueryRandomChoice3() {
          case 0:
            Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_102', 'MaintainPerformanceState': 0})
            Event285:
            Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_103', 'MaintainPerformanceState': 0})
            EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})
          case 1:
            Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_104', 'MaintainPerformanceState': 0})
            goto Event285
          case 2:
            Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_101', 'MaintainPerformanceState': 0})
            goto Event285
        }
    } else {
        Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_99', 'MaintainPerformanceState': 0})
        Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_100', 'MaintainPerformanceState': 0})
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_Hylia_Ingo_Adult_FallOff'})
    }
}

void Mask_Talk() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'LonLonRanch_GambleRace_IsInsideFence'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'LonLonRanch_GambleRace_RideSideFence', 'Index': -1}) {
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'TargetPoint', 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'MoveTime': 45, 'IsWaitEnd': False, 'Actor1InstanceName': 'ViewPointLeft', 'IsEnableRevertFast': False})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'TargetPoint', 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'MoveTime': 45, 'IsWaitEnd': False, 'Actor1InstanceName': 'ViewPointRight', 'IsEnableRevertFast': False})
        }
        Event529:
        switchcall NpcCommon.CheckEquipmentMask() {
          case [3745441359, 1844135360]:

            call NpcCommon.Sub_Mask_Talk_OtherTruthMask_Message({'ASName': '', 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Mask_04', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Mask_08', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Mask_103'})

            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Mask_09'})
            Event499:
            return 2799305849
          case 3362507297:
            goto Event499
          case 488279774:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': True, 'OverrideStyle': 8, 'NotPlayLipSyncAnim': True, 'ASName': 'TalkMonolog', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Mask_05'})
            Npc_EventStarter.EventTriggerForceSetMaskTalkFlag({'value': True})
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            return 4151362380
        }
    } else {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

        goto Event529
    }
}

void Mask_All() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Adult_GlassTruth'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'LonLonRanch_GambleRace_IsInsideFence'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'LonLonRanch_GambleRace_RideSideFence', 'Index': -1}) {
                EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'TargetPoint', 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'MoveTime': 45, 'IsWaitEnd': False, 'Actor1InstanceName': 'ViewPointLeft', 'IsEnableRevertFast': False})
            } else {
                EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'TargetPoint', 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'MoveTime': 45, 'IsWaitEnd': False, 'Actor1InstanceName': 'ViewPointRight', 'IsEnableRevertFast': False})
            }
            Event211:
            if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_Ingo_Adult_GlassTruth'}) {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Hylia_Ingo_Adult_GlassTruth'})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:GlassTruth', 'MaintainPerformanceState': 0})
            }
        } else {

            call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

            goto Event211
        }
    } else {
        switchcall Mask_Talk() {
          case 4151362380:
            Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsConfront': False, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Mask_10', 'MaintainPerformanceState': 0})
        }
    }
}

void AfterWonGambleRace_Npc_Hylia_Malon_Adult_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    Player_Event.EventTriggerParticipateEvent()
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Get_Epona_AfterWonGambleRace_Npc_Hylia_Malon_Adult_Talk_Event327', 'Index': -1})
    && !Npc_Hylia_Malon_Adult.EventQueryIsOnRecentTalkFlag() {
        Event332:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Get_Epona_AfterWonGambleRace_Npc_Hylia_Malon_Adult_Talk_Event327', 'Index': -1}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Get_Epona_AfterWonGambleRace_Npc_Hylia_Malon_Adult_Talk_Event330', 'Index': -1}) {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Adult:Talk_104', 'ChoiceNumber': 3, 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'ChoiceLabel3': 10, 'MaintainPerformanceState': 0})
                switch GameSystemActor.EventQueryTalkChoice3() {
                  case 0:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'ChoiceLabel3': 10, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Adult:Talk_105', 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 10, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Adult:Talk_106', 'ChoiceNumber': 2, 'ChoiceLabel2': 10, 'ChoiceLabel1': 9, 'MaintainPerformanceState': 0})
                    if !GameSystemActor.EventQueryTalkChoice2() {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'ChoiceLabel3': 10, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Adult:Talk_103', 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
                    } else {
                        Event457:
                        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})
                    }
                    Event378:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'ChoiceLabel3': 10, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Adult:Talk_107', 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
                  case 1:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'ChoiceLabel3': 10, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Adult:Talk_103', 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 10, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Adult:Talk_106', 'ChoiceNumber': 2, 'ChoiceLabel1': 8, 'ChoiceLabel2': 10, 'MaintainPerformanceState': 0})
                    if !GameSystemActor.EventQueryTalkChoice2() {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'ChoiceLabel3': 10, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Adult:Talk_105', 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
                    } else {
                        goto Event457
                    }
                    goto Event378
                  case 2:
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'ChoiceLabel3': 10, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Adult:Talk_107', 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
                }
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Adult:Talk_102', 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Get_Epona_AfterWonGambleRace_Npc_Hylia_Malon_Adult_Talk_Event330', 'Value': True, 'Index': -1})
            }
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Adult:Talk_100', 'MaintainPerformanceState': 0})

            call NpcCommon.NpcCommon_PlayerEvtTalking_NpcWait({'Player_AS': 'EvtTalkingL', 'Player_IsWaitEnd': True, 'Npc_ActorName': ActorIdentifier(name="Npc_Hylia_Malon_Adult")})

            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Adult:Talk_101', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Get_Epona_AfterWonGambleRace_Npc_Hylia_Malon_Adult_Talk_Event327', 'Value': True, 'Index': -1})
        }
    } else
    if !EventWorldManagerController.EventQueryTimeDivision() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Adult:Talk_14', 'MaintainPerformanceState': 0})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Adult:Talk_13', 'MaintainPerformanceState': 0})
    }
    goto Event332
}

void SubEvent_AfterWonGambleRace_OcarinaWarp() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'LonLonRanch_GambleRace_IsInsideFence'}) {
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 3, 'ChoiceLabel3': 0, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/SubEvent_GetSwordBigGoron:Talk_66', 'ChoiceLabel1': 13, 'ChoiceLabel2': 14, 'MaintainPerformanceState': 0})
        if !GameSystemActor.EventQueryTalkChoice2() {
            return 1303515621
        } else {
            return 184981848
        }
    } else {
        return 1303515621
    }
}

void Get_Epona_LonLonRanchGuide() {

    call SubEvent_GetEponaSong.GuideToLonLonRanch_Npc_Hylia_Malon_Child_Talk()

    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True, 'StepName': 'GuideToLonLonRanch', 'ChallengeName': 'Get_Epona'})
}

void Get_Epona_ReadyForGetEponaSong() {
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True, 'ChallengeName': 'Get_Epona', 'StepName': 'ReadyForGetEponaSong'})
}

void AfterTalkMalon_IngoTalk() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Get_Epona_Ingo_IsTalkAboutLonLonRanch'}) {

        call ReadyForGambleRace_Npc_Hylia_Ingo_002_Adult_Talk()

    } else {

        call Npc_Hylia_Ingo_002_Adult.Talk()

    }
}

void Sub_Get_Epona_EscapeRanch_EscapeFromMainGate_Warp() {
    Animal_Epona_Adult.EventWarpToTargetPosAndRot({'Position': [36.38999938964844, 162.16000366210938, 187.9600067138672], 'YAngle': 20.440000534057617, 'IsWaitEnd': True, 'ClothWarpMode': -1})
    Animal_Epona_Adult.EventCopyAndRegisterOwnedHorse({'IsWaitEnd': True})
    Animal_Epona_Adult.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
}

void Sub_Get_Epona_EscapeRanch_EscapeFromA_Warp() {
    Animal_Epona_Adult.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'ClothWarpMode': -1, 'Position': [56.650001525878906, 159.3699951171875, 238.8300018310547], 'YAngle': 163.9499969482422})
    Animal_Epona_Adult.EventCopyAndRegisterOwnedHorse({'IsWaitEnd': True})
    Animal_Epona_Adult.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
}

void Sub_Get_Epona_EscapeRanch_EscapeFromC_Warp() {
    Animal_Epona_Adult.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'ClothWarpMode': -1, 'Position': [-17.6200008392334, 145.80999755859375, 335.30999755859375], 'YAngle': 153.072998046875})
    Animal_Epona_Adult.EventCopyAndRegisterOwnedHorse({'IsWaitEnd': True})
    Animal_Epona_Adult.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
}

void Sub_Get_Epona_EscapeRanch_EscapeFromB_Warp() {
    Animal_Epona_Adult.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'ClothWarpMode': -1, 'Position': [-202.75, 137.25, 258.0299987792969], 'YAngle': 12.119999885559082})
    Animal_Epona_Adult.EventCopyAndRegisterOwnedHorse({'IsWaitEnd': True})
    Animal_Epona_Adult.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
}

void Get_Epona_LonLonRanchGuide_Market() {

    call SubEvent_GetEponaSong.GuideToLonLonRanch_Npc_Hylia_Malon_Child_Talk_Market()

    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True, 'StepName': 'GuideToLonLonRanch', 'ChallengeName': 'Get_Epona'})
}

void HorseRidingPlaying_RideOnEpona() {

    call Common.AirStartUp()

    Npc_Hylia_Ingo_002_Adult.EventTriggerParticipateEvent()
    Player_Event.EventTriggerParticipateEvent()
    Animal_Epona_Adult.EventTriggerParticipateEvent()
    EventCamera.EventTriggerCameraSavePoint()
    Npc_Hylia_Ingo_002_Adult.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'Npc_Hylia_Ingo_002_Adult', 'TargetOffset': [0.0, 1.0, 0.0], 'IsWaitEnd': True, 'TargetActorInstanceName': '', 'ToleranceDistance': 3.0, 'LookAtVectorXZ': 1, 'ToleranceXZAngle': 10.0, 'LookAtVectorY': 0, 'ToleranceYUpwardAngle': 30.0, 'ToleranceYDownwardAngle': -5.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IdealDistance': 3.5})
    Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ASName': '', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_126'})
    Npc_Hylia_Ingo_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ASName': '', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_127'})
    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})
}

void AfterWonGambleRace_Npc_Hylia_Ingo_002_Adult_Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'LonLonRanch_GambleRace_IsInsideFence'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Near_10', 'IsIgnoreDisplayKeepDepth': True, 'IsDisplayInTerror': True, 'DisplayFrame': 300})
    }
}

void HorseRiding_End() {
    if !Npc_Hylia_Ingo_002_Adult.EventQueryAIScheduleIsArrived() {

        call InitTalk.InitTalk_OnEvent_NoCamera({'InstanceName': '', 'ActorName': 'Npc_Hylia_Ingo_002_Adult', 'FirstGreeting_MesageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_129', 'Arg_Turn': 1, 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_Ingo_002_Adult")})

        Event531:
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        Player_Event.EventPlayerHorseGetOff({'IsWaitEnd': True})
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'Get_Epona_HorseRiding_StartPlayerPos', 'ASCommand': 'EvtWait'})
        Npc_Hylia_Ingo_002_Adult.EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_Hylia_Ingo_002_Adult.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-79.62999725341797, 150.60000610351562, 231.00999450683594], 'YAngle': 41.0, 'ClothWarpMode': -1})
        GameSystemActor.EventTriggerRequestHorsesUpdateForceEquipSaddle({'ForceEquip': False})
        Player_Event.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Hylia_Ingo_002_Adult', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'IsWaitEnd': False, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})
        Npc_Hylia_Ingo_002_Adult.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': False})
        ChallengeSystemActor.EventExecuteRollbackChallengeStep({'IsIgnoreChallengeProgressUI': True, 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'MiniGame_GambleRace', 'ChallengeStep': 'Ready'})
        EventCamera.EventMoveToTargetPosCamera({'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'Player_Event', 'Actor1InstanceName': '', 'Actor2ActorName': 'Player_Event', 'Actor2InstanceName': '', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'TargetFovy': 50.0, 'PosVector': [0.0, 2.1500000953674316, -4.5], 'AtVector': [0.0, 1.75, 0.0], 'IsEnableRevertFast': False})
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
        Npc_Hylia_Ingo_002_Adult.EventTriggerAIScheduleSelectSchedule()
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    } else {
        Npc_Hylia_Ingo_002_Adult.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

        call InitTalk.InitTalk_OnEvent_NoCamera({'InstanceName': '', 'ActorName': 'Npc_Hylia_Ingo_002_Adult', 'FirstGreeting_MesageId': 'EventFlowMsg/Npc_Hylia_Ingo_001_Adult:Talk_129', 'Arg_Turn': 3, 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_Ingo_002_Adult")})

        goto Event531
    }
}

void Sleep1Move() {
    goto Event302
}
