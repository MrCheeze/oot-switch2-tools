-------- EventFlow: MiniGame_DampeRace --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventAIScheduleWarpToAnchor', 'EventNPCTurnToTarget', 'EventNPCSwitchTemporarilyLookIKVariationStart', 'EventTriggerChangeEmotion']
queries: ['EventQueryHaveTalked', 'EventQueryIsOnRecentTalkFlag', 'EventQueryAvoidDuplicationRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventReserveBancChange']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice3', 'EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep', 'EventTriggerMiniGameTimerSetting', 'EventTriggerMiniGameTimerStart', 'EventTriggerMiniGameTimerStop', 'EventExecuteRollbackChallengeStep', 'EventTriggerShowTimerUI', 'EventTriggerUnshowTimerUI', 'EventShowReadyGo', 'EventTriggerShowChallengeProgressUI']
queries: ['EventQueryMiniGameTimerIsCounting']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetGameDataBoolArrayAllOnce', 'EventTriggerAddOrSubGameDataInt', 'EventTriggerCopyGameDataInt', 'EventTriggerSetGameDataEnum']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool', 'EventQueryCheckIsGet', 'EventQueryCompareGameDataInt', 'EventQueryIsGameDataInt', 'EventQueryGameDataIntBranch', 'EventQueryIsGameDataEnum']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventSuspend', 'EventWait', 'EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_Dampe_002
entrypoint: None()
actions: ['EventTriggerMiniGameNPCPerceptionSetEnableOrDisable', 'EventAIScheduleWarpToAnchor', 'EventTalk', 'EventNPCTurnToTarget', 'EventPlayAS', 'EventTriggerStartFadeOut', 'EventTriggerSetEnableAutoFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventBustShotCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventAbyssCamera']
queries: ['EventQueryCameraCheckRayCastForMoveToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerMoveToAnchor', 'EventPlayerWarpToStarterLinkAnchor', 'EventTriggerHealLife', 'EventTriggerParticipateEvent', 'EventPlayerDie', 'EventPlayerTurnAndLook', 'EventTriggerPlayerLookAtObject', 'EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetPosAndRot', 'EventTriggerPlayerEventStartWithDrawn', 'EventTriggerPlayerResetMaxFloatBuoyancyAccelGravityUnit', 'EventPlayerMoveToOffsetAnchor', 'EventTriggerPlayerEventStartWithClimb']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventShowFinish']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: MiniGame_Supporter
entrypoint: None()
actions: ['EventTriggerMiniGameBeforehandLoadEventRequestRegister']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTriggerBecomeSpeaker', 'EventWarpToTargetActor', 'EventNaviFollowPlayer', 'EventNaviWarpToPlayerHomePosition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Ready_Npc_Hylia_Dampe_002_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})


    call TreasureBoxStateReset()

    if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Item_Longshot'}) {
        Event243:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'UnderTheGrave_DampeRace_HeartGeted', 'Index': -1}) {
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_Hylia_Dampe_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_44', 'MaintainPerformanceState': 0})
            } else {
                Npc_Hylia_Dampe_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_50', 'MaintainPerformanceState': 0})
            }
            Npc_Hylia_Dampe_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_45', 'MaintainPerformanceState': 0})
            Event57:
            if !GameSystemActor.EventQueryTalkChoice2() {
                Event120:

                call SubEvent_GetSwordBigGoron.SubEvent_TimerCheck()

                if ChallengeSystemActor.EventQueryMiniGameTimerIsCounting() {
                    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_Hookshot', 'Num': 1}) {
                        Npc_Hylia_Dampe_002.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_33', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                    } else {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_01', 'MaintainPerformanceState': 0})
                    }
                    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'UnderTheGrave_Hylia_Dampe_002_Talked_ToPlayer'})

                    call MiniGame_DampeRace_NextMainChallengeStep()


                    call MovetoStartPoint()


                    call MiniGame_DampeRace_Ready()

                }
            } else
            if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_Hookshot', 'Num': 1}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'UnderTheGrave_DampeRace_HeartGeted', 'Index': -1}) {
                    Npc_Hylia_Dampe_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_41', 'MaintainPerformanceState': 0})
                } else {
                    Npc_Hylia_Dampe_002.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_08', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                }
                Event47:
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'UnderTheGrave_Hylia_Dampe_002_Talked_ToPlayer'})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_18', 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'UnderTheGrave_Hylia_Dampe_002_Talked_ToPlayer'})

                call MiniGame_DampeRace_NextMainChallengeStep()

            }
        } else
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_Hylia_Dampe_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_42', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0})
            Event250:
            Npc_Hylia_Dampe_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_43', 'MaintainPerformanceState': 0})
            goto Event57
        } else {
            switchcall NpcCommon.CheckAlreadyMaskTalked() {
              case 1307241100:
                Npc_Hylia_Dampe_002.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_06', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0})
                Event269:
                Npc_Hylia_Dampe_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_49', 'MaintainPerformanceState': 0})
                goto Event250
              case 803420549:
                goto Event269
            }
        }
    } else
    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_Hookshot', 'Num': 1}) {
        goto Event243
    } else
    if !Npc_EventStarter.EventQueryHaveTalked() {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.MiniGame_DampeRace_Ready_Npc_Hylia_Dampe_002_Talk_Event6', 'Index': -1}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'UnderTheGrave_DampeRace_Gameover'}) {
                Npc_Hylia_Dampe_002.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_20', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'MaintainPerformanceState': 0})
            } else {
                Npc_Hylia_Dampe_002.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_07', 'ChoiceNumber': 3, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
            }
            Event2:
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                goto Event120
              case 1:
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.MiniGame_DampeRace_Ready_Npc_Hylia_Dampe_002_Talk_Event52', 'Index': -1}) {
                    Npc_Hylia_Dampe_002.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_21', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                    Event351:
                    Npc_Hylia_Dampe_002.EventAIScheduleWarpToAnchor({'InstanceName': 'Hookshot', 'AnchorType': 23, 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'ClothWarpMode': -1, 'IsWaitEnd': False})

                    fork {
                        EventCamera.EventBustShotCamera({'TargetActorName': 'Npc_Hylia_Dampe_002', 'Longitude': 45.0, 'IsWaitEnd': True, 'TargetActorInstanceName': '', 'Latitude': 0.0, 'MoveTime': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetOffset': [0.5, -0.5, 0.699999988079071], 'Radius': 1.2000000476837158})
                        Npc_Hylia_Dampe_002.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_14', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Talk_01', 'EndDialogOption': 1, 'IsCloseDialog': False, 'MaintainPerformanceState': 0})
                        GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
                        EventCamera.EventBustShotCamera({'TargetActorName': 'Npc_Hylia_Dampe_002', 'Longitude': -45.0, 'IsWaitEnd': True, 'TargetActorInstanceName': '', 'Latitude': 0.0, 'MoveTime': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetOffset': [0.0, -0.5, 0.699999988079071], 'Radius': 1.2000000476837158})
                    } {
                        Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'ActorName': 'StartPos', 'InstanceName': '6'})
                    } {
                        Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsDisguisedPlayerPos': True, 'Target': 3, 'ActorName': 'StartPos', 'InstanceName': '6', 'IsWaitEnd': True, 'IsNearOffset': False, 'WorldPos': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'OffsetBase': 1, 'Type': 2, 'PosOffset': [0.0, -1.0, 0.0]})
                    }

                    Npc_Hylia_Dampe_002.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_15', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Talk_02', 'EndDialogOption': 1, 'IsCloseDialog': False, 'MaintainPerformanceState': 0})
                    GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
                    EventCamera.EventBustShotCamera({'TargetActorName': 'Npc_Hylia_Dampe_002', 'Longitude': 0.0, 'IsWaitEnd': True, 'TargetActorInstanceName': '', 'Latitude': 0.0, 'MoveTime': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetOffset': [0.0, -0.30000001192092896, 0.699999988079071], 'Radius': 2.5})
                    Npc_Hylia_Dampe_002.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_16', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Talk_03', 'EndDialogOption': 1, 'IsWaitEnd': True, 'IsCloseDialog': False, 'MaintainPerformanceState': 0})
                    GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})

                    fork {
                        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'PosVector': [21.666000366210938, 79.41300201416016, -12.138999938964844], 'AtVector': [24.32699966430664, 80.18800354003906, -10.89799976348877], 'TargetFovy': 37.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                    } {
                        Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsDisguisedPlayerPos': True, 'Target': 3, 'ActorName': 'StartPos', 'InstanceName': '6', 'IsWaitEnd': True, 'IsNearOffset': False, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'OffsetBase': 1, 'Type': 2})
                    }

                    Npc_Hylia_Dampe_002.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_17', 'ChoiceNumber': 2, 'ChoiceLabel2': 2, 'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                    goto Event57
                } else {
                    Npc_Hylia_Dampe_002.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_13', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.MiniGame_DampeRace_Ready_Npc_Hylia_Dampe_002_Talk_Event52', 'Value': True, 'Index': -1})
                    goto Event351
                }
              case 2:
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.MiniGame_DampeRace_Ready_Npc_Hylia_Dampe_002_Talk_Event58', 'Index': -1}) {
                    Npc_Hylia_Dampe_002.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_19', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                    goto Event47
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_02', 'MaintainPerformanceState': 0})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.MiniGame_DampeRace_Ready_Npc_Hylia_Dampe_002_Talk_Event58', 'Value': True, 'Index': -1})
                    goto Event47
                }
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.MiniGame_DampeRace_Ready_Npc_Hylia_Dampe_002_Talk_Event6', 'Value': True, 'Index': -1})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_04', 'ChoiceNumber': 3, 'ChoiceLabel3': 2, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'MaintainPerformanceState': 0})
            goto Event2
        }
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_00', 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'MaintainPerformanceState': 0})
        PostProcessingActor.EventSetDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'EndDistance': 10.0, 'EndFNumber': 7.0, 'EndBluarLevel': 1.5})
        EventCamera.EventTriggerCameraSavePoint()
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'MoveTime': 1, 'IsAtVectorReferenceActorPosOnce': True, 'IsWaitEnd': False, 'Actor1InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'TargetFovy': 30.0, 'PosVector': [11.489999771118164, 81.80000305175781, -10.989999771118164], 'AtVector': [23.6200008392334, 80.80000305175781, -10.949999809265137], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsLinearMove': False, 'EndRecelerateRate': 0.0, 'IsEnableRevertFast': False})
        Npc_Hylia_Dampe_002.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_25', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'MoveFrame': 1, 'IsRestoreDoF': False})

        call Common_Camera_Pln.CameraDoF_Event_Common()

        GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        Npc_Hylia_Dampe_002.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_26', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MaintainPerformanceState': 0})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': 'Step02', 'ChallengeName': 'SageOfForest', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
        Npc_Hylia_Dampe_002.EventTalk({'ChoiceNumber': 3, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_35', 'MaintainPerformanceState': 0})
        goto Event2
    }
}

void MiniGame_DampeRace_NextMainChallengeStep() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfForest_IsAfter_Ready_Exp'})
    && GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfForest_IsAfter_Step01_Exp'}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SageOfForest', 'StepName': 'Step02', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
    }
}

void MiniGame_DampeRace_Ready() {
    ChallengeSystemActor.EventTriggerMiniGameTimerSetting({'IsCountDown': False, 'TimerLimit': 108000})

    call MiniGame_DampeRace_Start()

    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
}

void Ready_Npc_Hylia_Dampe_002_Near() {
    if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Item_Longshot'}) {
        Event261:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'UnderTheGrave_DampeRace_HeartGeted', 'Index': -1}) {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'DisplayFrame': 180, 'MessageID': 'EventFlowMsg/Npc_Hylia_Dampe_002:Near_06'})
        } else {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'DisplayFrame': 180, 'MessageID': 'EventFlowMsg/Npc_Hylia_Dampe_002:Near_04'})
        }
    } else
    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_Hookshot', 'Num': 1}) {
        goto Event261
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_Dampe_002:Near_00', 'DisplayFrame': 180})
    }
}

void Playing_Npc_Hylia_Dampe_002_EachFrame() {
    Event15:
    EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
    goto Event15
}

void Finish_Npc_Hylia_Dampe_002_StepStart() {
    ChallengeSystemActor.EventTriggerMiniGameTimerStop()
    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_Hookshot', 'Num': 1}) {

        call MiniGame_DampeRace_Clear()

    }
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'UnderTheGrave_DampeRace_SecondRace_More'}) {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_Hylia_Dampe_002', 'AtVectorSetType': 3, 'AtVector': [0.0, 1.0, 0.0], 'FovySetType': 1, 'TargetFovy': 0.0, 'MoveTotargetPosType': 1, 'MoveTime': 45, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'PosVectorSetType': 0, 'PosVector': [4.75, 82.63999938964844, 77.62999725341797], 'IsEnableRevertFast': False})
        switch GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'MiniGame_DampeRace_BestTime_Minutes'}) {
          case [0, 1, 2, 3, 4, 5, 6, 7, 8, 10, 11, 12, 13, 15]:
            if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerMinute', 'Operator': 4, 'GameDataB': 'MiniGame_DampeRace_BestTime_Minutes'}) {
                Event317:

                fork {
                    Npc_Hylia_Dampe_002.EventPlayAS({'ASName': 'Act_Goal', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
                } {
                    UISystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': True, 'Type': 0, 'MiniGameType': 0})
                }

                Event337:
                UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

                call MiniGame_DampeRace_Goal()

            } else
            if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerMinute', 'Operator': 0, 'GameDataB': 'MiniGame_DampeRace_BestTime_Minutes'}) {
                if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerSecond', 'Operator': 4, 'GameDataB': 'MiniGame_DampeRace_BestTime_Second'}) {
                    goto Event317
                } else
                if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerSecond', 'GameDataB': 'MiniGame_DampeRace_BestTime_Second', 'Operator': 0})
                && !GameDataActor.EventQueryCompareGameDataInt({'Operator': 4, 'GameDataA': 'MiniGame_TimerMilliSecond', 'GameDataB': 'MiniGame_DampeRace_BestTime_MilliSecond'}) {
                    goto Event317
                } else {
                    Event319:

                    fork {
                        Npc_Hylia_Dampe_002.EventPlayAS({'ASName': 'Act_Goal', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
                    } {
                        UISystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': False, 'Type': 0, 'MiniGameType': 0})
                    }

                }
                goto Event337
            } else {
                goto Event319
            }
          case 9:

            fork {
                Npc_Hylia_Dampe_002.EventPlayAS({'ASName': 'Act_Goal', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
            } {
                UISystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': False, 'Type': 0, 'MiniGameType': 0})
            }

            goto Event337
        }
    } else {

        fork {
            EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
            Npc_Hylia_Dampe_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_51', 'MaintainPerformanceState': 0, 'ASName': 'Act_Goal'})
        } {
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_Hylia_Dampe_002', 'AtVectorSetType': 3, 'AtVector': [0.0, 1.0, 0.0], 'FovySetType': 1, 'TargetFovy': 0.0, 'MoveTotargetPosType': 1, 'MoveTime': 45, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'PosVectorSetType': 0, 'PosVector': [4.75, 82.63999938964844, 77.62999725341797], 'IsEnableRevertFast': False})
        }

        goto Event337
    }
}

void MiniGame_DampeRace_End() {
    Npc_Hylia_Dampe_002.EventTriggerMiniGameNPCPerceptionSetEnableOrDisable({'IsEnable': True, 'Type': 3})
    ChallengeSystemActor.EventExecuteRollbackChallengeStep({'IsWaitEnd': True, 'ChallengeName': 'MiniGame_DampeRace', 'ChallengeStep': 'Ready', 'IsIgnoreChallengeProgressUI': True, 'IsIgnoreCompletedChallenge': False})
    ChallengeSystemActor.EventTriggerMiniGameTimerStop()
    if !GameDataActor.EventQueryCheckIsGet({'ActorName': 'Item_Hookshot'}) {
        ChallengeSystemActor.EventTriggerUnshowTimerUI()
    }
}

void MiniGame_DampeRace_Start() {
    MiniGame_Supporter.EventTriggerMiniGameBeforehandLoadEventRequestRegister({'Type': 0})
    Npc_Hylia_Dampe_002.EventTriggerMiniGameNPCPerceptionSetEnableOrDisable({'IsEnable': False, 'Type': 3})
    GameDataActor.EventTriggerSetGameDataBoolArrayAllOnce({'Value': False, 'GameDataName': 'MiniGame_DampeRace_PlayerPassedCheckpoints'})
    GameDataActor.EventTriggerSetGameDataBoolArrayAllOnce({'Value': False, 'GameDataName': 'MiniGame_DampeRace_PlayerPassedShutterClosepoints'})
    GameDataActor.EventTriggerSetGameDataBoolArrayAllOnce({'Value': False, 'GameDataName': 'MiniGame_DampeRace_NPCPassedCheckpoints'})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_DampeRace_IsAppearTreasureBox', 'Index': -1, 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'UnderTheGrave_DampeRace_NPC_GoalStop'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_DampeRace_Failed_Navi', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.MiniGame_DampeRace_Result_Event427', 'Index': -1, 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.MiniGame_DampeRace_Result_Event398', 'Index': -1, 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.MiniGame_DampeRace_Result_Event393', 'Index': -1, 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.MiniGame_DampeRace_Result_Event394', 'Index': -1, 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.MiniGame_DampeRace_Result_Event451', 'Index': -1, 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.MiniGame_DampeRace_Result_Event452', 'Index': -1, 'Value': False})
    if !GameDataActor.EventQueryCheckIsGet({'ActorName': 'Item_Hookshot'}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'MiniGame_DampeRace', 'StepName': 'PlayingSecond'})
        ChallengeSystemActor.EventTriggerShowTimerUI()
        ChallengeSystemActor.EventShowReadyGo({'IsWaitEnd': True, 'MiniGameType': 0})
        ChallengeSystemActor.EventTriggerMiniGameTimerStart()
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'UnderTheGrave_DampeRace_SecondRace_More'})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_52', 'MaintainPerformanceState': 0, 'IsPlayASAllSlot': False, 'ASName': ''})
        Npc_Hylia_Dampe_002.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'IsPlayASAllSlot': False, 'ASName': 'Act_Start', 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_61', 'EndDialogOption': 1, 'IsCloseDialog': False})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'MiniGame_DampeRace', 'StepName': 'Playing'})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'SageOfForest', 'StepName': 'Step03', 'IsIgnoreChallengeProgressUI': True})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'HaveTalked_Special.MiniGame_DampeRace_HookShot_Event63', 'Value': False})
        ChallengeSystemActor.EventTriggerMiniGameTimerStart()
    }
}

void Dropout_Npc_Hylia_Dampe_002_StepStart() {
    Player_Event.EventTriggerPlayerEventStartWithClimb()
    if !Player_Event.EventQueryCheckPlayerState({'State': 2}) {
        ChallengeSystemActor.EventTriggerMiniGameTimerStop()
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 0})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_11', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'UnderTheGrave_DampeRace_Gameover'})
        Event27:

        call MiniGame_DampeRace_End()

        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'UnderTheGrave_MinigameIconON'})

        call MiniGame_DampeRace_ReturnToStartPos()

        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    } else {
        ChallengeSystemActor.EventTriggerMiniGameTimerStop()
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_11', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'UnderTheGrave_DampeRace_Gameover'})
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        goto Event27
    }
}

void MiniGame_DampeRace_Clear() {
    GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'MiniGame_DampeRace_ClearCount', 'Value': 1, 'Index': -1})
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
}

void MiniGame_DampeRace_ReturnToStartPos() {
    Npc_EventStarter.EventAIScheduleWarpToAnchor({'AnchorType': 0, 'IsWaitEnd': True, 'InstanceName': '', 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'ClothWarpMode': -1})
    Player_Event.EventPlayerWarpToStarterLinkAnchor({'InstanceName': '4', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'ActorName': 'StartPos', 'ASCommand': 'EvtWait'})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [22.229999542236328, 80.31999969482422, -10.869999885559082], 'PosVector': [17.75, 80.70999908447266, -10.869999885559082], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventSystemActor.EventWait({'Frames': 180, 'IsWaitEnd': True})
}

void Courseout_Npc_Hylia_Dampe_002_StepStart() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_12', 'MaintainPerformanceState': 0})
    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call MiniGame_DampeRace_End()

    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'UnderTheGrave_MinigameIconON'})

    call MiniGame_DampeRace_ReturnToStartPos()

    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void UnderTheGrave_DampeRace_NPC_IsGoal_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_Dampe_002:Near_03'})
}

void UnderTheGrave_DampeRace_NPC_IsGoa_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataEnum({'GameDataName': 'Minigame_DampeRace_TreasureBoxState', 'Index': -1, 'Value': 'None'}) {
        Event409:

        call Result()

    } else
    if !GameDataActor.EventQueryIsGameDataEnum({'GameDataName': 'Minigame_DampeRace_TreasureBoxState', 'Index': -1, 'Value': 'AppearHookShot'}) {
        goto Event409
    } else
    if !GameDataActor.EventQueryIsGameDataEnum({'GameDataName': 'Minigame_DampeRace_TreasureBoxState', 'Index': -1, 'Value': 'AppearHeartPiece'}) {
        goto Event409
    } else
    if !GameDataActor.EventQueryIsGameDataEnum({'GameDataName': 'Minigame_DampeRace_TreasureBoxState', 'Index': -1, 'Value': 'AppearRupee'}) {
        goto Event409
    } else
    if !GameDataActor.EventQueryIsGameDataEnum({'GameDataName': 'Minigame_DampeRace_TreasureBoxState', 'Index': -1, 'Value': 'AppearRupeeLow'}) {
        goto Event409
    } else
    if !GameDataActor.EventQueryIsGameDataEnum({'GameDataName': 'Minigame_DampeRace_TreasureBoxState', 'Index': -1, 'Value': 'OpenedHookShot'}) {

        call SuggestExit()

    } else
    if !GameDataActor.EventQueryIsGameDataEnum({'GameDataName': 'Minigame_DampeRace_TreasureBoxState', 'Index': -1, 'Value': 'OpenedHeartPiece'}) {
        Event423:

        call RetryCheck_Npc_Hylia_Dampe_002_Talk()

    } else
    if !GameDataActor.EventQueryIsGameDataEnum({'GameDataName': 'Minigame_DampeRace_TreasureBoxState', 'Index': -1, 'Value': 'OpenRupee'}) {
        goto Event423
    } else
    if GameDataActor.EventQueryIsGameDataEnum({'GameDataName': 'Minigame_DampeRace_TreasureBoxState', 'Index': -1, 'Value': 'OpenedRupeeLow'}) in [0, 1] {
        goto Event423
    }
}

void MiniGame_DampeRace_GameOver() {

    fork {
        Player_Event.EventTriggerPlayerEventStartWithDrawn()
        Player_Event.EventTriggerPlayerResetMaxFloatBuoyancyAccelGravityUnit()
        Player_Event.EventPlayerDie({'IsWaitEnd': True, 'SkipResetDebugMode': True})
    } {
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        UISystemActor.EventEventFadeOut({'Color': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 0})
    } {
        EventCamera.EventAbyssCamera({'IsWaitEnd': True, 'MinRadius': 1.0, 'Fovy': 65.0, 'JudgeTooCloseHeight': -0.30000001192092896, 'IsReferenceTargetPosOnce': True, 'TargetApproachRate': 0.10000000149011612, 'FovyApproachRate': 0.05000000074505806, 'LatitudeCushionRate': 0.20000000298023224})
    }

    Npc_Hylia_Dampe_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_24', 'MaintainPerformanceState': 0})
    Player_Event.EventTriggerHealLife({'Value': 4})
    GameSystemActor.EventReserveBancChange({'NextStartPos': '4', 'FadePattern': 1, 'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'BootEventName': '', 'IsStartOnEvent': False, 'NextBanc': 'Graveyard_Adult', 'EventStarterName': '', 'IsItemWarp': False})

    call MiniGame_DampeRace_End()

    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'UnderTheGrave_MinigameIconON'})
}

void MiniGame_DampeRace_OpenGoalTBox() {
    Player_Event.EventTriggerParticipateEvent()
    if !GameDataActor.EventQueryIsGameDataEnum({'GameDataName': 'Minigame_DampeRace_TreasureBoxState', 'Value': 'AppearHookShot', 'Index': -1}) {
        Event66:
        EventSystemActor.EventTransition({'EventName': 'Dm_SY_Treasurebox', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2})
        Event121:
        if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MiniGame_DampeRace_IsClearLeastOnce'}) {

            call MiniGame_DampeRace_NaviRepeat()

        }
        if !GameDataActor.EventQueryIsGameDataEnum({'GameDataName': 'Minigame_DampeRace_TreasureBoxState', 'Value': 'AppearHookShot', 'Index': -1}) {
            GameDataActor.EventTriggerSetGameDataEnum({'Index': -1, 'GameDataName': 'Minigame_DampeRace_TreasureBoxState', 'Value': 'OpenedHookShot'})
            Event95:
            GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            if GameDataActor.EventQueryIsGameDataEnum({'GameDataName': 'Minigame_DampeRace_TreasureBoxState', 'Index': -1, 'Value': 'OpenedHookShot'}) {
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'MiniGame_DampeRace', 'StepName': 'RetryCheck', 'IsIgnoreChallengeProgressUI': True})
            }
            GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        } else
        if !GameDataActor.EventQueryIsGameDataEnum({'GameDataName': 'Minigame_DampeRace_TreasureBoxState', 'Value': 'AppearHeartPiece', 'Index': -1}) {
            GameDataActor.EventTriggerSetGameDataEnum({'Index': -1, 'GameDataName': 'Minigame_DampeRace_TreasureBoxState', 'Value': 'OpenedHeartPiece'})
            goto Event95
        } else
        if !GameDataActor.EventQueryIsGameDataEnum({'GameDataName': 'Minigame_DampeRace_TreasureBoxState', 'Index': -1, 'Value': 'AppearRupee'}) {
            GameDataActor.EventTriggerSetGameDataEnum({'Index': -1, 'GameDataName': 'Minigame_DampeRace_TreasureBoxState', 'Value': 'OpenedRupee'})
        } else {
            GameDataActor.EventTriggerSetGameDataEnum({'Index': -1, 'GameDataName': 'Minigame_DampeRace_TreasureBoxState', 'Value': 'OpenedRupeeLow'})
        }
        goto Event95
    } else
    if !GameDataActor.EventQueryIsGameDataEnum({'GameDataName': 'Minigame_DampeRace_TreasureBoxState', 'Value': 'AppearHeartPiece', 'Index': -1}) {
        goto Event66
    } else {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_SY_TreasureboxSmall'})
    }
    goto Event121
}

void MiniGame_DampeRace_Goal() {
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'MiniGame_DampeRace', 'IsIgnoreChallengeProgressUI': True, 'IsIgnoreCompletedChallenge': True, 'IsWaitEnd': True, 'StepName': 'FinishAfterTalk'})
    ChallengeSystemActor.EventTriggerMiniGameTimerStop()
    if !GameDataActor.EventQueryCheckIsGet({'ActorName': 'Item_Hookshot'}) {
        ChallengeSystemActor.EventTriggerUnshowTimerUI()
    }
    Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'InstanceName': 'PlayerPos1', 'ActorName': 'DestinationAnchor', 'ASCommand': 'EvtWait'})
    Npc_Hylia_Dampe_002.EventAIScheduleWarpToAnchor({'AnchorType': 2, 'IsWaitEnd': True, 'InstanceName': '', 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'ClothWarpMode': -1})
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    Npc_Hylia_Dampe_002.EventPlayAS({'ASName': 'Walk', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call Result()

}

void MiniGame_DampeRace_NaviRepeat() {
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

    call Common_Camera_Pln.CameraDoF_Default()


    fork {
        Npc_Navi.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'ClothWarpMode': -1, 'PositionOffset': [0.0, 1.4210000038146973, 0.699999988079071], 'YAngle': 180.0})
        Npc_Navi.EventTriggerBecomeSpeaker()
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [1.600000023841858, 1.2699999809265137, 1.7599999904632568], 'AtVector': [0.33000001311302185, 1.2599999904632568, 0.7200000286102295], 'TargetFovy': 38.5, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'ForceFadeFrame': 0.0, 'ClothWarpMode': -1, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ASCommand': 'EvtTalk', 'IsAllSlot': True})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Navi', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})

    call NaviEventCommon.EventTalk_Navi_WithPlayerTalk({'MessageId': 'EventFlowMsg/SageOfForest:NaviRepeat_00_00'})


    call NaviChat.NaviEmotionChange({'EmotionType': 1})

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'NaviRepeat_Minigame_DampeRace_End', 'Value': True})
    ChallengeSystemActor.EventTriggerShowChallengeProgressUI({'ChallengeName': 'SageOfForest', 'IsFirstStep': False})
}

void TreasureBoxStateReset() {
    GameDataActor.EventTriggerSetGameDataEnum({'Index': -1, 'GameDataName': 'Minigame_DampeRace_TreasureBoxState', 'Value': 'None'})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UnderTheGrave_DampeRace_TreasureAppear', 'Value': False, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_DampeRace_TalkAfterRaceWithD', 'Value': False, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'MiniGame_DampeRace_TreasureBoxOpened'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'HavePlayedEvent.MiniGame_DampeRace_OpenGoalTBox'})
}

void RetryCheck_Npc_Hylia_Dampe_002_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    Npc_Hylia_Dampe_002.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_37', 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
    if !GameSystemActor.EventQueryTalkChoice2() {
        Npc_Hylia_Dampe_002.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_38', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_EventStarter.EventAIScheduleWarpToAnchor({'AnchorType': 0, 'IsWaitEnd': True, 'InstanceName': '', 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'ClothWarpMode': -1})
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'ActorName': 'StartPos', 'InstanceName': '5', 'ASCommand': 'EvtWait'})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'Actor2ActorName': '', 'MoveTime': 90, 'PosVector': [19.450000762939453, 80.9000015258789, -10.890000343322754], 'AtVector': [25.15999984741211, 79.8499984741211, -10.869999885559082], 'TargetFovy': 37.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
        EventSystemActor.EventWait({'Frames': 180, 'IsWaitEnd': True})
        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        call TreasureBoxStateReset()


        call MiniGame_DampeRace_NextMainChallengeStep()


        call MiniGame_DampeRace_Ready()

    } else {
        Npc_Hylia_Dampe_002.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_39', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
        Npc_Hylia_Dampe_002.EventTriggerSetEnableAutoFadeIn({'IsEnableAutoFadeIn': False})
        Npc_Hylia_Dampe_002.EventTriggerStartFadeOut({'FadeFrame': 60})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'MiniGame_DampeRace_NoRetry'})
    }
}

void UnderTheGrave_DampeReset() {
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'MiniGame_DampeRace', 'IsIgnoreChallengeProgressUI': True, 'StepName': 'Ready', 'IsWaitEnd': False})

    call Dm_SY_BancChangeGo.EntryPoint0({'NextBanc': 'NextBanc', 'NextStartPos': 'NextStartPos', 'BootEventName': 'BootEventName', 'IsCheckAir': 'IsCheckAir', 'NextStartPosAir': 'NextStartPosAir'})

}

void MovetoStartPoint() {

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player_Event.EventPlayerMoveToAnchor({'IsWaitEnd': True, 'IsKeepSpeed': False, 'AnchorActorName': 'StartPos', 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'MoveSpeed': 3.0, 'DecSpeedDistance': 2.0, 'IsMoveAnchorFrontDir': False, 'AnchorInstanceName': '5', 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'ApplySlowMove': False, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0})
        Npc_Navi.EventNaviFollowPlayer({'IsHomePosition': True, 'IsNearOffset': True, 'IsWaitEnd': True, 'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'OffsetType': -1})
        Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Direction': 0.0, 'OffsetBase': 0, 'KeepTalkWait': False, 'PosOffset': [0.0, 0.0, 0.0], 'UpperASCommand': '', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'IgnoreTargetPosMove': False, 'Target': 3, 'ActorName': 'Npc_Hylia_Dampe_002', 'InstanceName': '', 'SlowTurn': False, 'UseNormalTurn': True, 'IsDoNavi': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'Actor2ActorName': '', 'MoveTime': 90, 'PosVector': [19.5, 80.87000274658203, -10.539999961853027], 'TargetFovy': 37.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsWaitEnd': True, 'EnableCameraAlpha': True, 'AtVector': [25.209999084472656, 80.43000030517578, -10.640000343322754], 'IsEnableRevertFast': False})
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
}

void UnderTheGrave_Dampe_FarBalloon_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'DisplayFrame': 180, 'MessageID': 'EventFlowMsg/Npc_Hylia_Dampe_002:Near_07'})
}

void TreasureBox_Appearance() {
    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_DampeRace_TalkAfterRaceWithD', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_DampeRace_TalkAfterRaceWithD', 'Index': -1, 'Value': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Npc_Hylia_Dampe_002.EventNPCTurnToTarget({'Target': 5, 'ActorName': 'DestinationAnchor', 'PosOffset': [0.0, -4.0, 0.0], 'OffsetBase': 1, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'InstanceName': 'PL_Point01', 'IsWaitEnd': False})
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'InstanceNameB': 'TBox', 'CheckDistance': 1.5, 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False}) {
            Event335:
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'PL_Point01', 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'Player_Event', 'PosVectorSetType': 3, 'AtVector': [0.0, -2.0, 0.0], 'PosVector': [0.0, -1.0, 8.0], 'MoveTotargetPosType': 1, 'CameraCollisionLookAtActor': 2, 'EnableCameraAlpha': True, 'MoveTime': 0, 'IsEnableRevertFast': False})
            Event178:
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
            Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'KeepOneTimeAnm': True, 'ClothWarpMode': 0})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UnderTheGrave_DampeRace_TreasureAppear', 'Index': -1, 'Value': True})

            fork {
                if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'InstanceNameB': 'TBox', 'CheckDistance': 1.5, 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False}) {
                    Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'PosOffset': [0.0, -2.0, 0.0], 'InstanceName': 'TBox'})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
                    Player_Event.EventPlayerMoveToOffsetAnchor({'MoveSpeed': 5.0, 'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'PlayerPos2', 'IsWaitEnd': True, 'DecSpeedDistance': 0.0, 'ApplySlowMove': False, 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'IsOffsetBasedOnAnchorDir': False, 'Offset': [0.0, 0.0, 0.0]})
                    Npc_Navi.EventNaviFollowPlayer({'IsHomePosition': True, 'IsNearOffset': True, 'IsWaitEnd': True, 'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'OffsetType': -1})
                    Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'PL_Point01', 'PosOffset': [0.0, -3.0, 0.0], 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'KeepTalkWait': False, 'UpperASCommand': 'EvtWait', 'UseNormalTurn': True, 'IsDoNavi': True})
                    Event161:
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                    Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'PL_Point01', 'PosOffset': [0.0, -3.0, 0.0], 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'KeepTalkWait': False, 'UpperASCommand': 'EvtWait', 'UseNormalTurn': True, 'IsDoNavi': True})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 180})
                } else {
                    Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'PosOffset': [0.0, -2.0, 0.0], 'InstanceName': 'TBox'})
                    goto Event161
                }
            } {
                EventSystemActor.EventWait({'Frames': 210, 'IsWaitEnd': True})
                SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
            }

            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_DampeRace_TreasureBoxOpened'})
            if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_Hookshot', 'Num': 1}) {

                call BestRecord_UpDate()

            }
        } else
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'DestinationAnchor', 'VectorSetType': 3, 'Vector': [0.0, -1.0, 8.0], 'ActorInstanceName': 'PL_Point01', 'IsIgnoreVectorReferenceActorRot': False}) {
            goto Event335
        } else {
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'PL_Point01', 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'Player_Event', 'PosVectorSetType': 3, 'AtVector': [0.0, -2.0, 0.0], 'PosVector': [0.0, -1.0, 8.0], 'MoveTotargetPosType': 1, 'CameraCollisionLookAtActor': 2, 'EnableCameraAlpha': True, 'MoveTime': 60, 'IsEnableRevertFast': False})
            goto Event178
        }
    }
}

void Result() {
    switch GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'MiniGame_DampeRace_ClearCount'}) {
      case 0:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.MiniGame_DampeRace_HookShot_Event63', 'Index': -1}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_10', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_03', 'MaintainPerformanceState': 0})
            Npc_Hylia_Dampe_002.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_14', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Talk_01', 'EndDialogOption': 1, 'IsCloseDialog': False, 'MaintainPerformanceState': 0})
            GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
            Npc_Hylia_Dampe_002.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_15', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Talk_02', 'EndDialogOption': 1, 'IsWaitEnd': True, 'IsCloseDialog': False, 'MaintainPerformanceState': 0})
            GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
            Npc_Hylia_Dampe_002.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_16', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Talk_03', 'EndDialogOption': 1, 'IsCloseDialog': False, 'MaintainPerformanceState': 0})
            GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_55', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_DampeRace_IsAppearTreasureBox', 'Index': -1, 'Value': True})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.MiniGame_DampeRace_HookShot_Event63', 'Value': True, 'Index': -1})
            GameDataActor.EventTriggerSetGameDataEnum({'Index': -1, 'GameDataName': 'Minigame_DampeRace_TreasureBoxState', 'Value': 'AppearHookShot'})
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'UnderTheGrave_MinigameIconON'})
            EventSystemActor.EventTransition({'EventName': 'MiniGame_DampeRace_TreasureBoxAppear', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
        }
      case 1:
        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'MiniGame_TimerMinute', 'Value': 1}) {
          case 0:
            Npc_Hylia_Dampe_002.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_34', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
            Event381:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_DampeRace_HeartResultSuccessTalked'}) {
                if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                    Npc_Hylia_Dampe_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_47', 'MaintainPerformanceState': 0})
                } else {
                    Npc_Hylia_Dampe_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_53', 'MaintainPerformanceState': 0})
                }
                Event372:

                call DampeRace_TreasureBoxHeartPiece()

                EventSystemActor.EventTransition({'EventName': 'MiniGame_DampeRace_TreasureBoxAppear', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'MiniGame_DampeRace_HeartResultSuccessTalked'})
                Npc_Hylia_Dampe_002.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_27', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                goto Event372
            }
          case 1:
            switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 0, 'GameDataName': 'MiniGame_TimerSecond'}) {
              case [0, 1]:
                switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'MiniGame_TimerMilliSecond', 'Value': 0}) {
                  case [0, 1]:
                    Npc_Hylia_Dampe_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_46', 'MaintainPerformanceState': 0})
                    goto Event381
                  case 2:
                    Event375:
                    Npc_Hylia_Dampe_002.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_34', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_DampeRace_HeartResultFailTalked'}) {
                        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                            Npc_Hylia_Dampe_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_54', 'MaintainPerformanceState': 0})
                        } else {
                            Npc_Hylia_Dampe_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_48', 'MaintainPerformanceState': 0})
                        }
                        Event373:

                        call DampeRace_TreasureBoxRupeeLow()

                        EventSystemActor.EventTransition({'EventName': 'MiniGame_DampeRace_TreasureBoxAppear', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
                    } else {
                        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'MiniGame_DampeRace_HeartResultFailTalked'})
                        Npc_Hylia_Dampe_002.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_31', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                        goto Event373
                    }
                }
              case 2:
                goto Event375
            }
          case 2:
            goto Event375
        }
      case [2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15]:
        Npc_Hylia_Dampe_002.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_34', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.MiniGame_DampeRace_Result_Event427', 'Index': -1}) {

            call ToEvent427()

        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.MiniGame_DampeRace_Result_Event398', 'Index': -1}) {

            call ToEvent395()

        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.MiniGame_DampeRace_Result_Event393', 'Index': -1}) {

            call ToEvent393()

        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.MiniGame_DampeRace_Result_Event394', 'Index': -1}) {

            call ToEvent394()

        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.MiniGame_DampeRace_Result_Event451', 'Index': -1}) {

            call ToEvent451()

        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.MiniGame_DampeRace_Result_Event452', 'Index': -1}) {

            call ToEvent452()

        } else
        if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerMinute', 'Operator': 4, 'GameDataB': 'MiniGame_DampeRace_BestTime_Minutes'}) {
            Event395:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'UnderTheGrave_DampeRace_HeartGeted'}) {
                Event393:
                Npc_Hylia_Dampe_002.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_28', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.MiniGame_DampeRace_Result_Event393', 'Value': True, 'Index': -1})

                call DampeRace_TreasureBoxRupeeHigh()

                Event171:
                EventSystemActor.EventTransition({'EventName': 'MiniGame_DampeRace_TreasureBoxAppear', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
            } else
            switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'MiniGame_TimerMinute', 'Value': 1}) {
              case 0:
                Event427:
                Npc_Hylia_Dampe_002.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_32', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.MiniGame_DampeRace_Result_Event427', 'Value': True, 'Index': -1})

                call DampeRace_TreasureBoxHeartPiece()

                goto Event171
              case 1:
                switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 0, 'GameDataName': 'MiniGame_TimerSecond'}) {
                  case [0, 1]:
                    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'MiniGame_TimerMilliSecond', 'Value': 0}) {
                      case [0, 1]:
                        goto Event427
                      case 2:
                        Event398:
                        Npc_Hylia_Dampe_002.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_30', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.MiniGame_DampeRace_Result_Event398', 'Value': True, 'Index': -1})

                        call DampeRace_TreasureBoxRupeeLow()

                        goto Event171
                    }
                  case 2:
                    goto Event398
                }
              case 2:
                goto Event398
            }
        } else
        if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerMinute', 'Operator': 0, 'GameDataB': 'MiniGame_DampeRace_BestTime_Minutes'}) {
            if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerSecond', 'Operator': 4, 'GameDataB': 'MiniGame_DampeRace_BestTime_Second'}) {
                goto Event395
            } else
            if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerSecond', 'GameDataB': 'MiniGame_DampeRace_BestTime_Second', 'Operator': 0})
            && !GameDataActor.EventQueryCompareGameDataInt({'Operator': 4, 'GameDataA': 'MiniGame_TimerMilliSecond', 'GameDataB': 'MiniGame_DampeRace_BestTime_MilliSecond'}) {
                goto Event395
            } else
            Event342:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'UnderTheGrave_DampeRace_HeartGeted'}) {
                Event394:
                Npc_Hylia_Dampe_002.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_29', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.MiniGame_DampeRace_Result_Event394', 'Value': True, 'Index': -1})

                call DampeRace_TreasureBoxRupeeLow()

                goto Event171
            } else
            switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'MiniGame_TimerMinute', 'Value': 1}) {
              case 0:
                Event451:
                Npc_Hylia_Dampe_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_63'})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.MiniGame_DampeRace_Result_Event451', 'Value': True, 'Index': -1})

                call DampeRace_TreasureBoxHeartPiece()

                goto Event171
              case 1:
                switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 0, 'GameDataName': 'MiniGame_TimerSecond'}) {
                  case [0, 1]:
                    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'MiniGame_TimerMilliSecond', 'Value': 0}) {
                      case [0, 1]:
                        goto Event451
                      case 2:
                        Event452:
                        Npc_Hylia_Dampe_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_48', 'MaintainPerformanceState': 0})
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.MiniGame_DampeRace_Result_Event452', 'Value': True, 'Index': -1})

                        call DampeRace_TreasureBoxRupeeLow()

                        goto Event171
                    }
                  case 2:
                    goto Event452
                }
              case 2:
                goto Event452
            }
        } else
        goto Event342
    }
}

void DampeRace_TreasureBoxHeartPiece() {
    if GameDataActor.EventQueryIsGameDataEnum({'GameDataName': 'Minigame_DampeRace_TreasureBoxState', 'Value': 'AppearHeartPiece', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataEnum({'Index': -1, 'GameDataName': 'Minigame_DampeRace_TreasureBoxState', 'Value': 'AppearHeartPiece'})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_DampeRace_IsAppearTreasureBox', 'Index': -1, 'Value': True})
    }
}

void DampeRace_TreasureBoxRupeeHigh() {
    if GameDataActor.EventQueryIsGameDataEnum({'GameDataName': 'Minigame_DampeRace_TreasureBoxState', 'Value': 'AppearRupee', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataEnum({'Index': -1, 'GameDataName': 'Minigame_DampeRace_TreasureBoxState', 'Value': 'AppearRupee'})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_DampeRace_IsAppearTreasureBox', 'Index': -1, 'Value': True})
    }
}

void DampeRace_TreasureBoxRupeeLow() {
    if GameDataActor.EventQueryIsGameDataEnum({'GameDataName': 'Minigame_DampeRace_TreasureBoxState', 'Index': -1, 'Value': 'AppearRupeeLow'}) {
        GameDataActor.EventTriggerSetGameDataEnum({'Index': -1, 'GameDataName': 'Minigame_DampeRace_TreasureBoxState', 'Value': 'AppearRupeeLow'})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_DampeRace_IsAppearTreasureBox', 'Index': -1, 'Value': True})
    }
}

void SuggestExit() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.MiniGame_DampeRace_HookShot_Event21', 'Index': -1}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_56', 'MaintainPerformanceState': 0})
        EventCamera.EventTriggerCameraSavePoint()
        Npc_EventStarter.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_EventStarter.EventNPCSwitchTemporarilyLookIKVariationStart({'IsWaitEnd': True})

        fork {
            Npc_EventStarter.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'WorldPos': [0.0, 0.0, 0.0], 'IsConfront': False, 'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'ExitLookPos'})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

            fork {
                Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'WorldPos': [0.0, 0.0, 0.0], 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'InstanceName': 'ExitLookPos', 'ActorName': 'DestinationAnchor', 'Target': 5, 'IsDoNavi': False})
            } {

                call NaviEventCommon.Navi_ActorWatch({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'ExitLookPos'})

            } {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
                EventCamera.EventMoveToTargetPosCamera({'IsIgnorePosVectorReferenceActorRot': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 1, 'PosVector': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'PosVectorSetType': 3, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'CameraCollisionMode': 1, 'EndRecelerateRate': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'ExitCameraPos', 'MoveTotargetPosType': 1, 'AtVector': [-26.219999313354492, 89.40499877929688, 77.80000305175781], 'MoveTime': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            }

        }

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_58', 'MaintainPerformanceState': 0})
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'InstanceName': 'PlayerPos1', 'ActorName': 'DestinationAnchor'})

        call NaviEventCommon.NaviWarp_PlayerHomePos_Choice({'IsLookAtPlayer': False, 'IsLeft': False})

        Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Direction': 0.0, 'OffsetBase': 0, 'KeepTalkWait': False, 'PosOffset': [0.0, 0.0, 0.0], 'UpperASCommand': '', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'IgnoreTargetPosMove': False, 'Target': 3, 'ActorName': 'Npc_Hylia_Dampe_002', 'InstanceName': '', 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})
        EventCamera.EventMoveToTargetPosCamera({'IsIgnorePosVectorReferenceActorRot': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'CameraCollisionLookAtActor': 1, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'CameraCollisionMode': 1, 'EndRecelerateRate': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTotargetPosType': 1, 'Actor1InstanceName': '', 'PosVectorSetType': 0, 'PosVector': [0.53329998254776, 83.38700103759766, 78.4469985961914], 'AtVector': [-2.486999988555908, 84.18399810791016, 79.62799835205078], 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 37.0, 'MoveTime': 60, 'Actor1ActorName': '', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})

        fork {
            Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'IsConfront': False, 'IsWaitEnd': True, 'FaceControlType': 1})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            Player_Event.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'IsWaitEnd': False, 'Target': 3, 'SlowTurn': False, 'UseNormalTurn': False, 'ActorName': 'Npc_Hylia_Dampe_002', 'InstanceName': '', 'IsDoNavi': True})
        }

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_59', 'MaintainPerformanceState': 0})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_05', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.MiniGame_DampeRace_HookShot_Event21', 'Value': True, 'Index': -1})
    }
}

void OutOfGoalArea() {
    Npc_Hylia_Dampe_002.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_002:Talk_60', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Player_Event.EventPlayerWarpToTargetPosAndRot({'Position': [3.7899999618530273, 81.01000213623047, 77.7300033569336], 'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'YAngle': -90.0, 'ClothWarpMode': 0, 'EnableInAir': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor2InstanceName': '', 'TargetFovy': 37.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVectorSetType': 1, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'ExitLookPos', 'AtVectorSetType': 3, 'AtVector': [0.0, 0.0, 0.0], 'MoveTime': 1, 'Actor2ActorName': '', 'PosVector': [0.0, -2.0, 0.0], 'IsEnableRevertFast': False})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call MiniGame_DampeRace_Goal()

}

void BestRecord_UpDate() {
    if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerMinute', 'Operator': 4, 'GameDataB': 'MiniGame_DampeRace_BestTime_Minutes'}) {
        Event88:
        GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'MiniGame_TimerMinute', 'DstGameDataName': 'MiniGame_DampeRace_BestTime_Minutes'})
        GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'MiniGame_TimerSecond', 'DstGameDataName': 'MiniGame_DampeRace_BestTime_Second'})
        GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'MiniGame_TimerMilliSecond', 'DstGameDataName': 'MiniGame_DampeRace_BestTime_MilliSecond'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    } else
    if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerMinute', 'Operator': 0, 'GameDataB': 'MiniGame_DampeRace_BestTime_Minutes'}) {
        if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerSecond', 'Operator': 4, 'GameDataB': 'MiniGame_DampeRace_BestTime_Second'}) {
            goto Event88
        } else
        if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerSecond', 'GameDataB': 'MiniGame_DampeRace_BestTime_Second', 'Operator': 0})
        && !GameDataActor.EventQueryCompareGameDataInt({'Operator': 4, 'GameDataA': 'MiniGame_TimerMilliSecond', 'GameDataB': 'MiniGame_DampeRace_BestTime_MilliSecond'}) {
            goto Event88
        }
    }
}

void ToEvent427() {
    goto Event427
}

void ToEvent395() {
    goto Event398
}

void ToEvent393() {
    goto Event393
}

void ToEvent394() {
    goto Event394
}

void ToEvent451() {
    goto Event451
}

void ToEvent452() {
    goto Event452
}
