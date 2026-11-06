-------- EventFlow: Npc_Goron_007_Child --------

Actor: Npc_Goron_007_Child
entrypoint: None()
actions: ['EventTalk', 'EventTriggerChangeEmotion', 'EventTriggerBalloonMessage', 'EventPlayAS', 'EventNPCTurnToObjectGreeting', 'EventTriggerLookAtObject']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventNPCQueryCheckFrontToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryTalkChoice3', 'EventQueryTalkChoice2', 'EventQueryTalkChoice4', 'EventQueryRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_EventStarter
entrypoint: None()
actions: []
queries: ['EventQueryAvoidDuplicationRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

void Talk() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfFire_IsCompleted_Exp'}) {

        call MaskTalk()

        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Goron_007_Child_Talk_Event4', 'Index': -1}) {
            if Npc_Goron_007_Child.EventQueryIsOnRecentTalkFlag() {
                Npc_Goron_007_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_007_Child:Talk_204', 'MaintainPerformanceState': 0})
            }
            Event99:
            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_Goron_007_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_007_Child:Talk_202', 'MaintainPerformanceState': 0})
            } else {
                Npc_Goron_007_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_007_Child:Talk_203', 'MaintainPerformanceState': 0})
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Goron_007_Child_Talk_Event4', 'Value': True, 'Index': -1})
            Npc_Goron_007_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_007_Child:Talk_201', 'MaintainPerformanceState': 0})
            goto Event99
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfFire_IsAfter_DodongoCavernOpne_Exp'}) {

        call MaskTalk()

        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Goron_007_HaveTalked_DodongoCaveOpen'}) {
            if !Npc_Goron_007_Child.EventQueryIsOnRecentTalkFlag() {
                if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                    Npc_Goron_007_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_007_Child:Talk_101', 'MaintainPerformanceState': 0})
                } else {
                    Npc_Goron_007_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_007_Child:Talk_102', 'MaintainPerformanceState': 0})
                }
            } else {
                Event55:
                Npc_Goron_007_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_007_Child:Talk_100', 'MaintainPerformanceState': 0})
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_Goron_007_HaveTalked_DodongoCaveOpen'})
            goto Event55
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.Dm_Goron_0030'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Goron_007_HaveTalkedBefore'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Goron_007_NoMaskTalk'})
            && !Npc_Goron_007_Child.EventNPCQueryCheckFrontToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'AngleThreshold': 90.0}) {

                call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

            } else {

                call MaskTalk()

            }
            Npc_Goron_007_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_007_Child:Talk_23', 'ChoiceNumber': 3, 'ChoiceLabel3': 2, 'ChoiceLabel1': 0, 'ChoiceLabel2': 3, 'MaintainPerformanceState': 0})
            Event2:
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:

                call DodongoDungeon_Direction()

                Npc_Goron_007_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 2, 'ChoiceLabel1': 3, 'MessageId': 'EventFlowMsg/Npc_Goron_007_Child:Talk_18', 'MaintainPerformanceState': 0})
                if !GameSystemActor.EventQueryTalkChoice2() {

                    call BombFlower()

                    Event103:
                    Npc_Goron_007_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_007_Child:Talk_08', 'MaintainPerformanceState': 0})
                    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_Goron_007_NoMaskTalk'})
                } else {
                    Event5:

                    call Goron_007_Goodbye()

                }
              case 1:

                call BombFlower()

                Npc_Goron_007_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 2, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_007_Child:Talk_18', 'MaintainPerformanceState': 0})
                if !GameSystemActor.EventQueryTalkChoice2() {

                    call DodongoDungeon_Direction()

                    goto Event103
                } else {
                    goto Event5
                }
              case 2:
                Event18:
                Npc_Goron_007_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_007_Child:Talk_29', 'ASName': '', 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_Goron_007_NoMaskTalk'})
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_Goron_007_HaveTalkedBefore'})

            call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

            Npc_Goron_007_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_007_Child:Talk_04', 'MaintainPerformanceState': 0, 'ASName': 'Act_Look_Cave'})
            Npc_Goron_007_Child.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})

            call LookAtTurn({'TurnType': 2})


            call MaskTalk()

            Npc_Goron_007_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 2, 'ChoiceLabel3': 2, 'ChoiceLabel1': 0, 'ChoiceNumber': 3, 'ChoiceLabel2': 3, 'MessageId': 'EventFlowMsg/Npc_Goron_007_Child:Talk_01', 'MaintainPerformanceState': 0})
            goto Event2
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Goron_007_HaveTalkedBefore'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Goron_007_NoMaskTalk'})
        && !Npc_Goron_007_Child.EventNPCQueryCheckFrontToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'AngleThreshold': 90.0}) {

            call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

        } else {

            call MaskTalk()

        }
        Npc_Goron_007_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 2, 'ChoiceLabel3': 5, 'ChoiceLabel1': 4, 'ChoiceLabel2': 0, 'ChoiceNumber': 4, 'MessageId': 'EventFlowMsg/Npc_Goron_007_Child:Talk_02', 'MaintainPerformanceState': 0})
        Event108:
        switch GameSystemActor.EventQueryTalkChoice4() {
          case 0:

            call AskGoronRuby()

            Npc_Goron_007_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 0, 'ChoiceLabel2': 5, 'ChoiceLabel3': 2, 'MessageId': 'EventFlowMsg/Npc_Goron_007_Child:Talk_18', 'MaintainPerformanceState': 0})
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:

                call DodongoDungeon_Direction()

                Event144:
                Npc_Goron_007_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 2, 'ChoiceLabel1': 5, 'ChoiceLabel2': 2, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Npc_Goron_007_Child:Talk_18', 'MaintainPerformanceState': 0})
                if !GameSystemActor.EventQueryTalkChoice2() {

                    call AskAboutGoron()

                    Event54:
                    Npc_Goron_007_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_007_Child:Talk_30', 'MaintainPerformanceState': 0})
                    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_Goron_007_NoMaskTalk'})
                } else {
                    Event184:

                    call Goron_007_Goodbye()

                }
              case 1:

                call AskAboutGoron()

                Event13:
                Npc_Goron_007_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 2, 'ChoiceNumber': 2, 'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/Npc_Goron_007_Child:Talk_18', 'MaintainPerformanceState': 0})
                if !GameSystemActor.EventQueryTalkChoice2() {

                    call DodongoDungeon_Direction()

                    goto Event54
                } else {
                    goto Event184
                }
              case 2:
                Event180:

                call Goron_007_Goodbye()

            }
          case 1:

            call DodongoDungeon_Direction()

            Npc_Goron_007_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 5, 'ChoiceLabel3': 2, 'ChoiceNumber': 3, 'ChoiceLabel1': 4, 'MessageId': 'EventFlowMsg/Npc_Goron_007_Child:Talk_18', 'MaintainPerformanceState': 0})
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:

                call AskGoronRuby()

                goto Event144
              case 1:

                call AskAboutGoron()

                Event85:
                Npc_Goron_007_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 2, 'ChoiceLabel1': 4, 'ChoiceNumber': 2, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/Npc_Goron_007_Child:Talk_18', 'MaintainPerformanceState': 0})
                if !GameSystemActor.EventQueryTalkChoice2() {

                    call AskGoronRuby()

                    goto Event54
                } else {
                    goto Event184
                }
              case 2:
                goto Event180
            }
          case 2:

            call AskAboutGoron()

            Npc_Goron_007_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 2, 'ChoiceNumber': 3, 'ChoiceLabel1': 4, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_007_Child:Talk_18', 'MaintainPerformanceState': 0})
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:

                call AskGoronRuby()

                goto Event13
              case 1:

                call DodongoDungeon_Direction()

                goto Event85
              case 2:
                goto Event180
            }
          case 3:
            goto Event18
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_Goron_007_HaveTalkedBefore'})

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

        Npc_Goron_007_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_007_Child:Talk_04', 'ASName': 'Ball_Wait', 'MaintainPerformanceState': 0})

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkSurprise', 'ClothWarpMode': 0})
        } {
            Npc_Goron_007_Child.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
            Npc_Goron_007_Child.EventPlayAS({'ASName': 'Ball_To_Stand', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        }


        call LookAtTurn({'TurnType': 2})


        call MaskTalk()

        Npc_Goron_007_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 2, 'ChoiceLabel3': 5, 'ChoiceLabel1': 4, 'ChoiceLabel2': 0, 'ChoiceNumber': 4, 'MessageId': 'EventFlowMsg/Npc_Goron_007_Child:Talk_07', 'MaintainPerformanceState': 0})
        goto Event108
    }
}

void Near() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfFire_IsAfter_DodongoCavernOpne_Exp'}) {
        Npc_Goron_007_Child.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Goron_007_Child:Near_01'})
    }
}

void GoronCity_Direction() {
    Npc_Goron_007_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_007_Child:Talk_28', 'MaintainPerformanceState': 0})

    call Npc_Hylia_004_Child.SuggestCamera_Start_Modified({'NpcActor': ActorIdentifier(name="Npc_Goron_007_Child"), 'TurnTarget': 5, 'TurnTargetActorName': 'DestinationAnchor', 'TurnTargetInstanceName': 'CityLookAt', 'CameraTargetActorName': 'DestinationAnchor', 'CameraTargetInstanceName': 'goron007_mod_camPos01', 'MoveTotargetPosType': 1, 'CameraAtActorName': 'DestinationAnchor', 'CameraAtInstanceName': 'goron007_mod_atPos01', 'IsNpcLookOnly': False, 'FrmMove_Normal': 60, 'FrmMove_Slow': 120, 'IsSlowMoveEnable': True, 'IsNeedCameraSave': True})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'NPC_Goron_007_HaveTalkedGoronCity'}) {
        Npc_Goron_007_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_007_Child:Talk_15', 'MaintainPerformanceState': 0})
        Event123:

        call NpcCommon.SuggestCamera_Reset({'TurnTargetActorName': 'Npc_EventStarter', 'NpcActor': ActorIdentifier(name="Npc_EventStarter"), 'TurnTargetInstanceName': ''})

    } else {
        Npc_Goron_007_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_007_Child:Talk_21', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'NPC_Goron_007_HaveTalkedGoronCity'})
        goto Event123
    }
}

void DodongoDungeon_Direction() {
    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'EvtTalkWonder', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Goron_007_HaveTalked_DodongoCave'}) {
        Npc_Goron_007_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_007_Child:Talk_17', 'MaintainPerformanceState': 0})
    }

    call Npc_Hylia_004_Child.SuggestCamera_Start_Modified({'TurnTarget': 5, 'TurnTargetActorName': 'DestinationAnchor', 'TurnTargetInstanceName': 'CaveLookAt', 'CameraTargetActorName': 'DestinationAnchor', 'CameraTargetInstanceName': 'goron007_mod_camPos02', 'NpcActor': ActorIdentifier(name="Npc_EventStarter"), 'MoveTotargetPosType': 1, 'CameraAtActorName': 'DestinationAnchor', 'CameraAtInstanceName': 'goron007_mod_atPos02', 'IsNpcLookOnly': False, 'FrmMove_Normal': 60, 'FrmMove_Slow': 120, 'IsSlowMoveEnable': True, 'IsNeedCameraSave': True})

    Npc_Goron_007_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_007_Child:Talk_25', 'MaintainPerformanceState': 0})

    call NpcCommon.SuggestCamera_Reset({'TurnTargetActorName': 'Npc_EventStarter', 'NpcActor': ActorIdentifier(name="Npc_EventStarter"), 'TurnTargetInstanceName': ''})

    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_Goron_007_HaveTalked_DodongoCave'})
}

void AskGoronRuby() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveAsked_GoronRuby'}) {
        Npc_Goron_007_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_007_Child:Talk_14', 'MaintainPerformanceState': 0})
    } else {
        Npc_Goron_007_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_007_Child:Talk_22', 'MaintainPerformanceState': 0})
    }
    Npc_Goron_007_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_007_Child:Talk_26', 'MaintainPerformanceState': 0})

    call GoronCity_Direction()

    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'HaveAsked_GoronRuby'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'NPC_Goron_007_HaveTalkedGoronCity'})
}

void AskAboutGoron() {
    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'EvtTalkWonder', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Goron_007_HaveTalkedAboutGoro'}) {
        Npc_Goron_007_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_007_Child:Talk_16', 'MaintainPerformanceState': 0})
        Event41:

        call NpcCommon.Npc_IsConfront({'NpcActor': ActorIdentifier(name="Npc_Goron_007_Child")})

        Npc_Goron_007_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_007_Child:Talk_10', 'MaintainPerformanceState': 0})
    } else {
        Npc_Goron_007_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_007_Child:Talk_06', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_Goron_007_HaveTalkedAboutGoro'})
        goto Event41
    }
}

void Goron_007_Goodbye() {
    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
    if !GameSystemActor.EventQueryRandomChoice2() {
        Npc_Goron_007_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_007_Child:Talk_09', 'MaintainPerformanceState': 0})
    } else {
        Npc_Goron_007_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_007_Child:Talk_19', 'MaintainPerformanceState': 0})
    }
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_Goron_007_NoMaskTalk'})
}

void BombFlower() {
    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'EvtTalkWonder', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

    call NpcCommon.Npc_IsConfront({'NpcActor': ActorIdentifier(name="Npc_Goron_007_Child")})

    Npc_Goron_007_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_007_Child:Talk_20', 'MaintainPerformanceState': 0})
}

void LookAtTurn() {
    Npc_Goron_007_Child.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Npc_Goron_007_Child.EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 4, 'TurnType': 'TurnType'})
}

void MaskTalk() {
    switchcall NpcCommon.Mask_Talk_Common_With_InitTalk({'ASName': 'Act_Look_Cave', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Goron_007_Child:Mask_103', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Goron_007_Child:Mask_102', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Goron_007_Child:Mask_101', 'Arg_Turn_For_IgnoreMaskTalk': 4, 'Arg_Turn_For_MaskTalk': 4, 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Goron_007_Child:Mask_09', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Goron_007_Child:Mask_05', 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Goron_007_Child:Mask_103', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Goron_007_Child:Mask_103', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Goron_007_Child:Mask_103', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Goron_007_Child:Mask_103', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Goron_007_Child:Mask_103', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Goron_007_Child:Mask_103', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Goron_007_Child:Mask_06'}) {
      case 0xfab0f371:

        call LookAtTurn({'TurnType': 2})

        Npc_Goron_007_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_007_Child:Mask_10', 'MaintainPerformanceState': 0})
    }
}
