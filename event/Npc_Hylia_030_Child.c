-------- EventFlow: Npc_Hylia_030_Child --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventTriggerForceSetMaskTalkFlag', 'EventTriggerForceSetAmiiboMaskTalkFlag', 'EventNPCTurnToTarget']
queries: ['EventQueryHaveTalked', 'EventQueryAIScheduleCheckActorActionAll', 'EventQueryAIScheduleGetChaseState', 'EventQueryAvoidDuplicationRandomChoice3', 'EventQueryAvoidDuplicationRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventBasedOnLookAtCamera']
queries: ['EventQueryCameraCheckRayCastForBasedOnLookAt']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: ['EventQueryTalkChoice2', 'EventQueryRandomChoice2', 'EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventCloseRupeeDisplay', 'EventTriggerOpenRupeeDisplay']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryCheckLoseMoneyIfSellSome']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_030_Child
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventTriggerSetHaveTalked', 'EventSetIsNotSelledMask', 'EventPlayAS', 'EventTriggerChangeEmotion']
queries: ['EventQueryAvoidDuplicationRandomChoice3', 'EventNpcQueryIsEquippedWithMask', 'EventQueryIsFindFeverMask']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerEventStartWithGrab', 'EventPlayerTurnAndLook', 'EventPlayerOnStopMode', 'EventPlayerOffStopMode']
queries: ['EventQueryPlayerIsEquipArmor', 'EventQueryPlayerIsEquipMask', 'EventQueryIsDirToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk', 'EventNaviRequestBallonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryIsCurrentTimeInSpecifiedTimeRange']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Talk_Move() {

    call InitTalk.InitTalk_NpcDesireMask({'Arg_Turn': 4, 'Arg_Greeting': 4, 'NpcDesireMask': ActorIdentifier(name="Npc_Hylia_030_Child")})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'CanEquippedWithMask.Npc_Hylia_030_Child'}) {

        call Npc_Hylia_030_MaskCheck()

        Event152:
        switch Npc_EventStarter.EventQueryAIScheduleCheckActorActionAll() {
          case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 23, 24, 25, 26]:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_Hylia_030_AngerModeKeep'}) {
                Event171:
                switch Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice3() {
                  case 0:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_53', 'MaintainPerformanceState': 0})
                  case 1:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_54', 'MaintainPerformanceState': 0})
                  case 2:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_55', 'MaintainPerformanceState': 0})
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_030_Child_Talk_Move_Event23', 'Index': -1}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_030_Child_Talk_Move_Event174', 'Index': -1}) {
                    Event287:
                    switch Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice3() {
                      case 0:
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_51', 'MaintainPerformanceState': 0})
                      case 1:
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_70', 'MaintainPerformanceState': 0})
                      case 2:
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_71', 'MaintainPerformanceState': 0})
                    }
                } else {
                    Npc_Hylia_030_Child.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_50', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_030_Child_Talk_Move_Event174', 'Value': True, 'Index': -1})
                }
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_49', 'MaintainPerformanceState': 0})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_04', 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_030_Child_Talk_Move_Event23', 'Value': True, 'Index': -1})
            }
          case 22:
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_030_Child_Talk_Move_Event145', 'Index': -1}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_030_Child_Talk_Move_Event154', 'Index': -1}) {
                    goto Event287
                } else {
                    Npc_Hylia_030_Child.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_50', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_030_Child_Talk_Move_Event154', 'Value': True, 'Index': -1})
                }
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_48', 'MaintainPerformanceState': 0})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_03', 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_030_Child_Talk_Move_Event145', 'Value': True, 'Index': -1})
            }
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_MaskSalesman_IsAfter_Step05_Exp'}) {

        call Npc_Hylia_030_MaskCheck()

        Event104:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_Hylia_030_AngerModeKeep'}) {

            call AngerModeTalk()

        } else
        if !Npc_EventStarter.EventQueryHaveTalked() {
            goto Event152
        } else {
            switchcall NpcCommon.CheckAlreadyMaskTalked() {
              case 0x4deaea8c:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceCancelNo': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_79', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0})
                Event262:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceCancelNo': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_80', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 3, 'ChoiceLabel1': 2, 'ChoiceCancelNo': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_81'})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_030_Child_Talk_PlayGround_Arrival_Event143', 'Value': True, 'Index': -1})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_57', 'MaintainPerformanceState': 0})
                    goto Event152
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_45', 'MaintainPerformanceState': 0})
                }
              case 0x2fe33985:
                goto Event262
            }
        }
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Spooky'}) {

        call MaskReaction()

    } else {

        call Npc_Hylia_030_MaskCheck()

        goto Event104
    }
}

void Near_Move() {
    if Npc_Hylia_030_Child.EventQueryIsFindFeverMask() {
        switch Npc_EventStarter.EventQueryAIScheduleCheckActorActionAll() {
          case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 23, 24, 25, 26]:
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_030_Child:Near_02'})
          case 22:
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_030_Child:Near_01'})
        }
    }
}

void Talk_PlayGround_Arrival() {

    call InitTalk.InitTalk_NpcDesireMask({'Arg_Turn': 4, 'Arg_Greeting': 4, 'NpcDesireMask': ActorIdentifier(name="Npc_Hylia_030_Child")})

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_MaskSalesman_IsAfter_Step05_Exp'}) {

        call Npc_Hylia_030_MaskCheck()

        Event41:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'CanEquippedWithMask.Npc_Hylia_030_Child'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_Hylia_030_AngerModeKeep'}) {

                call AngerModeTalk()

            } else
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_030_Child_Talk_PlayGround_Arrival_Event34', 'Index': -1}) {
                switch Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice3() {
                  case 0:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_14', 'MaintainPerformanceState': 0})
                  case 1:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_37', 'MaintainPerformanceState': 0})
                  case 2:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_52', 'MaintainPerformanceState': 0})
                }
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_13', 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_030_Child_Talk_PlayGround_Arrival_Event34', 'Value': True, 'Index': -1})
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_Hylia_030_AngerModeKeep'}) {

            call AngerModeTalk()

        } else
        if !Npc_EventStarter.EventQueryHaveTalked() {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GraveYard_Hylia_030_DampeDoorLock', 'Index': -1}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_030_Child_Talk_PlayGround_Arrival_Event58', 'Index': -1}) {
                    if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_46', 'MaintainPerformanceState': 0})
                    } else {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_67', 'MaintainPerformanceState': 0})
                    }
                    if !GameSystemActor.EventQueryRandomChoice2() {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_68', 'MaintainPerformanceState': 0})
                    } else {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_69', 'MaintainPerformanceState': 0})
                    }
                } else {
                    switchcall NpcCommon.CheckAlreadyMaskTalked() {
                      case 0x4deaea8c:
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_09', 'MaintainPerformanceState': 0})
                        Event58:
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_23', 'MaintainPerformanceState': 0})
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_24', 'MaintainPerformanceState': 0})
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_030_Child_Talk_PlayGround_Arrival_Event58', 'Value': True, 'Index': -1})
                      case 0x2fe33985:
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_74', 'MaintainPerformanceState': 0})
                        goto Event58
                    }
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_030_Child_Talk_PlayGround_Arrival_Event143', 'Index': -1}) {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_02', 'MaintainPerformanceState': 0})
                Event314:
                EventCamera.EventTriggerCameraSavePoint()
                EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
                Npc_EventStarter.EventNPCTurnToTarget({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'DampeiHouseDoor', 'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

                fork {
                    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'DampeiHouseDoor', 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'PosVector': [0.0, 4.0, 0.0], 'TargetFovy': 40.0, 'MoveTotargetPosType': 1, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'MoveTime': 90, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 2, 'IsEnableRevertFast': False})
                } {
                    Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'DampeiHouseDoor', 'UseNormalTurn': True, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'IsDoNavi': True})
                }

                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_07', 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GraveYard_Hylia_030_DampeDoorLock', 'Index': -1, 'Value': True})

                call NpcCommon.SuggestCamera_Reset({'NpcActor': ActorIdentifier(name="Npc_Hylia_030_Child"), 'TurnTargetActorName': 'Npc_Hylia_030_Child', 'TurnTargetInstanceName': ''})

                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_08', 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_02', 'ChoiceNumber': 2, 'ChoiceLabel1': 2, 'ChoiceLabel2': 4, 'ChoiceCancelNo': 1, 'MaintainPerformanceState': 0})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_030_Child_Talk_PlayGround_Arrival_Event143', 'Value': True, 'Index': -1})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_57', 'MaintainPerformanceState': 0})
                    goto Event314
                } else {
                    goto Event314
                }
            }
        } else {
            switchcall NpcCommon.CheckAlreadyMaskTalked() {
              case 0x4deaea8c:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceCancelNo': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_79', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0})
                Event124:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceCancelNo': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_80', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 3, 'ChoiceLabel1': 2, 'ChoiceCancelNo': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_81'})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_030_Child_Talk_PlayGround_Arrival_Event143', 'Value': True, 'Index': -1})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_57', 'MaintainPerformanceState': 0})
                    Event143:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_01', 'MaintainPerformanceState': 0})
                    goto Event314
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_47', 'MaintainPerformanceState': 0})
                    goto Event143
                }
              case 0x2fe33985:
                goto Event124
            }
        }
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Spooky'}) {

        call MaskReaction()

    } else {

        call Npc_Hylia_030_MaskCheck()

        goto Event41
    }
}

void Near_PlayGround_Arrival() {
    if Npc_Hylia_030_Child.EventQueryIsFindFeverMask() {
        switch Npc_EventStarter.EventQueryAIScheduleCheckActorActionAll() {
          case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 25, 26]:
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_030_Child:Near_00'})
          case 24:
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_030_Child:Near_01'})
        }
    }
}

void ItemExchangeEvent() {
    Npc_Hylia_030_Child.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HappyMaskSaleMan_Npc_Hylia_030_Child_FirstTalk'}) {

        fork {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_06', 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'MaintainPerformanceState': 0})
        } {
            UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
        }

        Event220:
        if !GameSystemActor.EventQueryTalkChoice2() {
            switch PouchSystemActor.EventQueryCheckLoseMoneyIfSellSome({'Price': 50}) {
              case 0:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_62', 'ChoiceNumber': 2, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'MaintainPerformanceState': 0})
                if !GameSystemActor.EventQueryTalkChoice2() {

                    call Sell_MaskOfSpooky_FullMoney()

                    Npc_Hylia_030_Child.EventSetIsNotSelledMask({'IsNotSelledMask': False, 'IsWaitEnd': True})
                    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SubEvent_MaskSalesman', 'IsIgnoreCompletedChallenge': True, 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step06'})
                } else {
                    Event260:
                    UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                    Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SubEvent_MaskSalesman:Talk_04', 'MaintainPerformanceState': 0})
                    Npc_Hylia_030_Child.EventSetIsNotSelledMask({'IsNotSelledMask': True, 'IsWaitEnd': True})
                }
              case 1:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_63', 'ChoiceNumber': 2, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'MaintainPerformanceState': 0})
                if !GameSystemActor.EventQueryTalkChoice2() {

                    call Sell_MaskOfSpooky_1()

                    Npc_Hylia_030_Child.EventSetIsNotSelledMask({'IsNotSelledMask': False, 'IsWaitEnd': True})
                    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SubEvent_MaskSalesman', 'IsIgnoreCompletedChallenge': True, 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step06'})
                } else {
                    goto Event260
                }
              case 2:

                call Sell_MaskOfSpooky()

                Npc_Hylia_030_Child.EventSetIsNotSelledMask({'IsNotSelledMask': False, 'IsWaitEnd': True})
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SubEvent_MaskSalesman', 'IsIgnoreCompletedChallenge': True, 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step06'})
            }
        } else {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
            UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_12', 'MaintainPerformanceState': 0})
            Npc_Hylia_030_Child.EventSetIsNotSelledMask({'IsNotSelledMask': True, 'IsWaitEnd': True})
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HappyMaskSaleMan_Npc_Hylia_030_Child_FirstTalk'})

        fork {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_05', 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'MaintainPerformanceState': 0})
        } {
            UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
        }

        goto Event220
    }
}

void MaskReaction() {
    Npc_Hylia_030_Child.EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_Hylia_030_AngerModeKeep'}) {

        call Mask_Reaction_AngryTalk()

    } else {

        call Mask_Reaction_NormalTalk()

    }
}

void GraveYard_Hylia_030_Anger_ChaseTalk() {
    Player_Event.EventPlayerOnStopMode({'StopAnm': False, 'ResetLookIK': False})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_MaskSalesman_IsAfter_Step05_Exp'}) {

        call InitTalk.InitTalk_NpcDesireMask({'Arg_Turn': 4, 'Arg_Greeting': 4, 'NpcDesireMask': ActorIdentifier(name="Npc_Hylia_030_Child")})


        call Npc_Hylia_030_MaskCheck()

        Event225:
        switch Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice3() {
          case 0:
            Npc_Hylia_030_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_29', 'MaintainPerformanceState': 0})
            Event227:
            if !GameSystemActor.EventQueryRandomChoice2() {
                Npc_Hylia_030_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_31', 'MaintainPerformanceState': 0})
            } else {
                Npc_Hylia_030_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_65', 'MaintainPerformanceState': 0})
            }
            Event108:
            Npc_Hylia_030_Child.EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
            Player_Event.EventPlayerOffStopMode()
          case 1:
            Npc_Hylia_030_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_64', 'MaintainPerformanceState': 0})
            goto Event227
          case 2:
            Npc_Hylia_030_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_66', 'MaintainPerformanceState': 0})
            Npc_Hylia_030_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_30', 'MaintainPerformanceState': 0})
            goto Event108
        }
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Spooky'}) {
        Npc_Hylia_030_Child.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})

        call InitTalk.InitTalk_NpcDesireMask({'Arg_Turn': 4, 'Arg_Greeting': 4, 'NpcDesireMask': ActorIdentifier(name="Npc_Hylia_030_Child")})


        call MaskReaction()

        Player_Event.EventPlayerOffStopMode()
    } else {

        call InitTalk.InitTalk_NpcDesireMask({'Arg_Turn': 4, 'Arg_Greeting': 4, 'NpcDesireMask': ActorIdentifier(name="Npc_Hylia_030_Child")})


        call Npc_Hylia_030_MaskCheck()

        goto Event225
    }
}

void GraveYard_Hylia_030_Anger_ChaseNear() {
    if Npc_Hylia_030_Child.EventQueryIsFindFeverMask() {
        switch Npc_EventStarter.EventQueryAIScheduleGetChaseState() {
          case [0, 1]:
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_030_Child:Near_03', 'DisplayFrame': 270})
          case 2:
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_030_Child:Near_04', 'DisplayFrame': 270})
          case 3:
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_MaskSalesman_IsAfter_Step05_Exp'}) {
                Event84:
                Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_030_Child:Near_05', 'DisplayFrame': 270})
            } else
            if Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Spooky'}) {
                goto Event84
            }
          case 4:
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_030_Child:Near_06', 'DisplayFrame': 270})
        }
    }
}

void NoMove_TombStorn() {
    Player_Event.EventTriggerPlayerEventStartWithGrab()
    Player_Event.EventTriggerParticipateEvent()
    Npc_Hylia_030_Child.EventNPCTurnToTarget({'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'Target': 2, 'ActorName': '', 'EnableAutomaticallyPlayWaitASAfterTurn': False, 'IsConfront': True, 'FaceControlType': 1})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'FovySetType': 0, 'IsAtVectorReferenceActorPosOnce': True, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTotargetPosType': 1, 'IsLinearMove': False, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 1, 'MoveTime': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'Actor1ActorName': '', 'Actor2ActorName': '', 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'TargetFovy': 50.0, 'IsEnableRevertFast': False})
    if !EventWorldManagerController.EventQueryIsCurrentTimeInSpecifiedTimeRange({'StartTime': 6, 'EndTme': 18}) {

        fork {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_Hylia_030_WarningMessage_01'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_Hylia_030_WarningMessage_02'}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_Hylia_030_WarningMessage_03'}) {
                        Npc_Hylia_030_Child.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_58', 'MaintainPerformanceState': 0, 'IsWaitEnd': True, 'IsCloseDialog': True})
                    } else {
                        Npc_Hylia_030_Child.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_28', 'MaintainPerformanceState': 0, 'IsWaitEnd': True, 'IsCloseDialog': True})
                    }
                } else
                if !Player_Event.EventQueryPlayerIsEquipMask() {
                    Npc_Hylia_030_Child.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_43', 'MaintainPerformanceState': 0, 'IsWaitEnd': True, 'IsCloseDialog': True})
                } else {
                    Npc_Hylia_030_Child.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_27', 'MaintainPerformanceState': 0, 'IsWaitEnd': True, 'IsCloseDialog': True})
                }
            } else {
                Npc_Hylia_030_Child.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_22', 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': True, 'MaintainPerformanceState': 0, 'IsWaitEnd': True, 'IsCloseDialog': True})
            }
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            Player_Event.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Hylia_030_Child', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': True, 'IsDoNavi': True})
        }

        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'Npc_Hylia_030_Child', 'InstanceNameA': '', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'CheckDistance': 8.0}) {
            if !Player_Event.EventQueryIsDirToTarget({'Target': 3, 'ActorName': 'Npc_Hylia_030_Child', 'AngleThreshold': 90.0, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0]}) {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Hylia_030_Child', 'AtVector': [0.0, 0.5, 0.0], 'IsIgnorePosVectorReferenceActorRot': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'FovySetType': 0, 'AtVectorSetType': 3, 'IsAtVectorReferenceActorPosOnce': True, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTotargetPosType': 1, 'Actor2ActorName': 'Player_Event', 'IsLinearMove': False, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 1, 'TargetFovy': 45.0, 'MoveTime': 30, 'PosVectorSetType': 1, 'PosVector': [0.0, 0.0, 0.0], 'IsEnableRevertFast': False})
            } else {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Hylia_030_Child', 'AtVector': [0.0, 0.5, 0.0], 'IsIgnorePosVectorReferenceActorRot': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'FovySetType': 0, 'AtVectorSetType': 3, 'IsAtVectorReferenceActorPosOnce': True, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTotargetPosType': 1, 'Actor2ActorName': 'Player_Event', 'IsLinearMove': False, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 1, 'TargetFovy': 45.0, 'MoveTime': 60, 'PosVectorSetType': 1, 'PosVector': [0.0, 0.0, 0.0], 'IsEnableRevertFast': False})
            }
            Event95:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_Hylia_030_WarningMessage_01'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_Hylia_030_WarningMessage_02'}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_Hylia_030_WarningMessage_03'}) {
                        switch Npc_Hylia_030_Child.EventQueryAvoidDuplicationRandomChoice3() {
                          case 0:
                            Npc_Hylia_030_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_32', 'MaintainPerformanceState': 0})
                          case 1:
                            Npc_Hylia_030_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_33', 'MaintainPerformanceState': 0})
                          case 2:
                            Npc_Hylia_030_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_34', 'MaintainPerformanceState': 0})
                        }
                    } else {
                        Npc_Hylia_030_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_78'})
                        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GraveYard_Hylia_030_WarningMessage_03'})
                        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GraveYard_Hylia_030_Anger'})
                        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GraveYard_Hylia_030_AngerModeKeep'})
                    }
                } else {
                    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 1.0, 'CameraResetPolicy': 0})
                    if !Player_Event.EventQueryPlayerIsEquipMask() {
                        Npc_Hylia_030_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_77'})
                    } else {
                        Npc_Hylia_030_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_76'})
                    }
                    Npc_Hylia_030_Child.EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GraveYard_Hylia_030_WarningMessage_02'})
                }
            } else {
                EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 1.0, 'CameraResetPolicy': 0})
                Npc_Hylia_030_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': True, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_44'})
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GraveYard_Hylia_030_WarningMessage_01'})
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GraveYard_Hylia_030_PosCheck', 'Index': -1}) {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Hylia_030_Child', 'IsPosVectorReferenceActorPosOnce': True, 'FovySetType': 0, 'AtVectorSetType': 3, 'IsAtVectorReferenceActorPosOnce': True, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTotargetPosType': 1, 'Actor2ActorName': 'Player_Event', 'IsLinearMove': False, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 1, 'TargetFovy': 45.0, 'PosVectorSetType': 3, 'MoveTime': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVector': [0.0, 0.0, 5.0], 'PosVector': [0.0, 1.0, -1.25], 'IsEnableRevertFast': False})
            Event277:
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
            goto Event95
        } else
        if !EventCamera.EventQueryCameraCheckRayCastForBasedOnLookAt({'TargetActorLink': 'Npc_Hylia_030_Child', 'TargetActorInstanceName': '', 'LookAtVectorXZ': 1, 'LookAtVectorY': 0, 'TargetOffset': [0.0, 0.0, 0.0], 'IdealDistance': 0.5, 'ToleranceDistance': 0.0, 'ToleranceXZAngle': 0.0, 'ToleranceYDownwardAngle': 15.0, 'ToleranceYUpwardAngle': 15.0}) {
            EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsLinearMove': False, 'CameraCollisionMode': 2, 'TargetActorName': 'Npc_Hylia_030_Child', 'MoveTime': 0, 'TargetActorInstanceName': '', 'LookAtVectorY': 0, 'ToleranceDistance': 0.25, 'LookAtVectorXZ': 0, 'ToleranceXZAngle': 45.0, 'IdealDistance': 2.5, 'ToleranceYDownwardAngle': 25.0, 'ToleranceYUpwardAngle': 40.0, 'TargetOffset': [0.0, 0.32499998807907104, 0.0]})
        } else {
            EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsLinearMove': False, 'CameraCollisionMode': 2, 'TargetActorName': 'Npc_Hylia_030_Child', 'MoveTime': 0, 'TargetActorInstanceName': '', 'LookAtVectorY': 0, 'ToleranceDistance': 1.0, 'IdealDistance': 2.0, 'TargetOffset': [0.0, 0.5, 0.0], 'ToleranceXZAngle': 45.0, 'ToleranceYDownwardAngle': 5.0, 'ToleranceYUpwardAngle': 30.0, 'LookAtVectorXZ': 0})
        }
        goto Event277
    } else {

        fork {
            Npc_Hylia_030_Child.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_22', 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': True, 'MaintainPerformanceState': 0, 'IsWaitEnd': True, 'IsCloseDialog': True})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            Player_Event.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Hylia_030_Child', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': True, 'IsDoNavi': True})
        }

    }
}

void MaskRepeat() {
    if !Npc_Hylia_030_Child.EventNpcQueryIsEquippedWithMask() {
        Event86:
        Npc_Hylia_030_Child.EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
    } else
    switch Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice3() {
      case 0:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_38', 'MaintainPerformanceState': 0})
        goto Event86
      case 1:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_39', 'MaintainPerformanceState': 0})
        goto Event86
      case 2:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_40', 'MaintainPerformanceState': 0})
        goto Event86
    }
}

void Npc_Hylia_030_MaskCheck() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'LookedMask_Npc_Hylia_030_Child'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'CanEquippedWithMask.Npc_Hylia_030_Child'}) {
            Event199:
            if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_GlassTruth'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_030_Child_GlassTruth'}) {
                    Event80:
                    if !Player_Event.EventQueryPlayerIsEquipMask() {
                        switchcall NpcCommon.CheckAlreadyMaskTalked() {
                          case 0x4deaea8c:
                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'CanEquippedWithMask_Player', 'Index': -1, 'Value': True})

                            call MaskReaction()

                            switchcall NpcCommon.CheckEquipmentMask() {
                              case [0xdf3ee64f, 0x1d1a8ede]:
                                Npc_EventStarter.EventTriggerForceSetMaskTalkFlag({'value': True})
                              case 0x6deb45c0:
                                Npc_EventStarter.EventTriggerForceSetAmiiboMaskTalkFlag({'value': True})
                            }
                        }
                    } else {
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'CanEquippedWithMask_Player', 'Index': -1, 'Value': False})
                        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                    }
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Hylia_030_Child_GlassTruth'})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:GlassTruth', 'MaintainPerformanceState': 0})
                }
            } else
            goto Event80
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_35'})
        }
    } else
    goto Event199
}

void Mask_Reaction_NormalTalk() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Spooky'}) {
        if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_MaskSalesman_IsAfter_Step05_Exp'}) {

            call ItemExchangeEvent()

        }
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorName': 'Armor_Child_Mask_Keaton', 'ArmorSlot': 0}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_030_Child_MaskReaction_Event25', 'Index': -1}) {
            Event133:

            call MaskRepeat()

        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_15', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_030_Child_MaskReaction_Event25', 'Value': True, 'Index': -1})
            Event138:
            Npc_Hylia_030_Child.EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_73', 'MaintainPerformanceState': 0})
        }
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Skull'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_030_Child_MaskReaction_Event37', 'Index': -1}) {

            call MaskRepeat_Mask_Skull()

        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_16', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_030_Child_MaskReaction_Event37', 'Value': True, 'Index': -1})
            goto Event138
        }
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Bunny'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_030_Child_MaskReaction_Event46', 'Index': -1}) {
            goto Event133
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_17', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_030_Child_MaskReaction_Event46', 'Value': True, 'Index': -1})
            goto Event138
        }
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_030_Child_Mask_Reaction_NormalTalk_Event182', 'Index': -1}) {
            goto Event133
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_21', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_030_Child_Mask_Reaction_NormalTalk_Event182', 'Value': True, 'Index': -1})
            goto Event138
        }
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Goron'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_030_Child_Mask_Reaction_NormalTalk_Event183', 'Index': -1}) {
            goto Event133
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_20', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_030_Child_Mask_Reaction_NormalTalk_Event183', 'Value': True, 'Index': -1})
            goto Event138
        }
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Zora'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_030_Child_Mask_Reaction_NormalTalk_Event185', 'Index': -1}) {
            goto Event133
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_18', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_030_Child_Mask_Reaction_NormalTalk_Event185', 'Value': True, 'Index': -1})
            goto Event138
        }
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Gerudo'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_030_Child_Mask_Reaction_NormalTalk_Event184', 'Index': -1}) {
            goto Event133
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_19', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_030_Child_Mask_Reaction_NormalTalk_Event184', 'Value': True, 'Index': -1})
            goto Event138
        }
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Amiibo1'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_030_Child_Mask_Reaction_NormalTalk_Event39', 'Index': -1}) {
            goto Event133
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Mask_101', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_030_Child_Mask_Reaction_NormalTalk_Event39', 'Value': True, 'Index': -1})
            goto Event138
        }
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Amiibo0'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_030_Child_Mask_Reaction_NormalTalk_Event40', 'Index': -1}) {
            goto Event133
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Mask_102', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_030_Child_Mask_Reaction_NormalTalk_Event40', 'Value': True, 'Index': -1})
            goto Event138
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_030_Child_Mask_Reaction_NormalTalk_Event43', 'Index': -1}) {
        goto Event133
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Mask_103', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_030_Child_Mask_Reaction_NormalTalk_Event43', 'Value': True, 'Index': -1})
        goto Event138
    }
}

void Mask_Reaction_AngryTalk() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Spooky'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_MaskSalesman_IsAfter_Step05_Exp'}) {
            Event135:
            switch Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice3() {
              case 0:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_36', 'MaintainPerformanceState': 0})
              case 1:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_41', 'MaintainPerformanceState': 0})
              case 2:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_42', 'MaintainPerformanceState': 0})
            }
        } else {

            call ItemExchangeEvent()

        }
    } else
    goto Event135
}

void MaskRepeat_Mask_Skull() {
    switch Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice3() {
      case 0:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_59', 'MaintainPerformanceState': 0})
        Event248:
        Npc_Hylia_030_Child.EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
      case 1:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_60', 'MaintainPerformanceState': 0})
        goto Event248
      case 2:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_61', 'MaintainPerformanceState': 0})
        goto Event248
    }
}

void Sell_MaskOfSpooky() {
    EventCamera.EventTriggerCameraSavePoint()
    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

    call SubEvent_MaskSalesman.AddMoney_2({'MessageId_Thanks': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_10', 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_56', 'MessageId_1': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_75', 'NpcActor': ActorIdentifier(name="Npc_Hylia_030_Child"), 'Rupee': 50})

    Event293:

    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    }


    fork {

        call NpcCommon.SellMask({'ReceiveItem': 'Armor_Child_Mask_Spooky', 'NpcActor': ActorIdentifier(name="Npc_Hylia_030_Child"), 'Frames': 80})

    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Npc_Hylia_030_Child', 'TargetFovy': 37.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [-0.05000000074505806, 1.5, 1.190000057220459], 'AtVector': [0.0, 1.1699999570846558, -0.12999999523162842], 'IsEnableRevertFast': False})

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTime': 230, 'Actor1ActorName': 'Npc_Hylia_030_Child', 'PosVector': [-0.05000000074505806, 0.8399999737739563, 1.2000000476837158], 'AtVector': [0.0, 0.5099999904632568, -0.11999999731779099], 'TargetFovy': 37.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
        } {

            call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 230})

        }

        Npc_Hylia_030_Child.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Wait'})
    }


    call NpcCommon.SellMask_1({'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_26', 'NpcActor': ActorIdentifier(name="Npc_Hylia_030_Child")})

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'HappyMaskSaleMan_Npc_Hylia_030_Child_FirstTalk'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'GraveYard_Hylia_030_Anger'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'GraveYard_Hylia_030_AngerModeKeep'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_Hylia_030_WarningMessage_01', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_Hylia_030_WarningMessage_02', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_Hylia_030_WarningMessage_03', 'Value': False})
    EventSystemActor.EventWait({'Frames': 2, 'IsWaitEnd': True})
    Npc_Navi.EventNaviRequestBallonMessage({'Index': 20})
}

void AngerModeTalk() {
    goto Event171
}

void Sell_MaskOfSpooky_FullMoney() {
    EventCamera.EventTriggerCameraSavePoint()
    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

    call SubEvent_MaskSalesman.AddMoney_NoSpace({'NpcActor': ActorIdentifier(name="Npc_Hylia_030_Child"), 'MessageId_Thanks': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_10'})

    goto Event293
}

void Sell_MaskOfSpooky_1() {
    EventCamera.EventTriggerCameraSavePoint()
    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

    call SubEvent_MaskSalesman.AddMoney({'MessageId_Thanks': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_10', 'MessageId': 'EventFlowMsg/Npc_Hylia_030_Child:Talk_75', 'NpcActor': ActorIdentifier(name="Npc_Hylia_030_Child"), 'Rupee': 50})

    goto Event293
}
