-------- EventFlow: Npc_SkullKid_Child_03 --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAvoidDuplicationRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: Npc_SkullKid_Child_02[SkullKid1]
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

void Near() {

    call Npc_SkullKid_Child_02.Near()

}

void Talk_Npc_SkullKid_Child_03() {

    call InitTalk.InitTalk_Pair({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Spearker2ActorName': 'Npc_SkullKid_Child_02', 'Spearker2InstanceName': 'SkullKid1', 'Actor2': ActorIdentifier(name="Npc_SkullKid_Child_02", sub_name="SkullKid1")})

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_SkullKid_Child_02_Talked'})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_SkullKid_Child_02_PlayOcarinaForSkullKidSession_Event78', 'Index': -1}) {
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Minigame_SkullKidSession_CurrentGradeSoundNumForSession', 'Index': -1, 'Value': 6}) {
          case 0:

            call Npc_SkullKid_Child_02.Mask_All()

            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child_02:Talk_07', 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child_02:Talk_16', 'MaintainPerformanceState': 0})
            }
          case [1, 2]:
            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child_02:Talk_08', 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child_02:Talk_20', 'MaintainPerformanceState': 0})
            }
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Minigame_SkullKidSession_IsGetHeartPiece'}) {
                Npc_SkullKid_Child_02[SkullKid1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child_02:Talk_22', 'MaintainPerformanceState': 0})
            } else {
                Npc_SkullKid_Child_02[SkullKid1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child_02:Talk_09', 'MaintainPerformanceState': 0})
            }
        }
    } else {

        call Npc_SkullKid_Child_02.Mask_All()

        if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child_02:Talk_05', 'MaintainPerformanceState': 0})
        }
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child_02:Talk_15', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child_02:Talk_10', 'MaintainPerformanceState': 0})
        }
    }
}
