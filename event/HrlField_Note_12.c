-------- EventFlow: HrlField_Note_12 --------

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: []
queries: ['EventQueryPlayerIsChild']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

void Talk() {

    call HrlField_Note_00.InitTalk_Note()

    if !Player_Event.EventQueryPlayerIsChild() {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsRead_FairyNote_FirstTime', 'Index': -1}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveReadHrlField_Note12'}) {

                call HrlField_Note_00.HaveReadThisFairyNote()

                Event9:
                Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MaintainPerformanceState': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/HrlField_Note_00:Note_12_00', 'IsNotBecomeSpeaker': True})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HaveReadHrlField_Note12'})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HaveReadHrlField_Note12_3'})
                Event1:

                call HrlField_Note_00.Datte()

            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveReadHrlField_Note12_2'}) {
                Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/HrlField_Note_00:Talk_14', 'IsAnonymous': False, 'IsNotBecomeSpeaker': True})
                goto Event9
            } else {
                switchcall HrlField_Note_00.NotReadThisFairyNote({'GameDataNameAtode': 'FairyAfter_Note12'}) {
                  case 1303515621:
                    goto Event9
                }
            }
        } else {

            call HrlField_Note_00.IsReadFairyNote_FirstTime()

            goto Event9
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsRead_FairyNote_FirstTime', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveReadHrlField_Note12'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveReadHrlField_Note12_1'}) {

                call HrlField_Note_00.HaveReadThisFairyNote()

                Event23:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveReadHrlField_Note12_Enemy'}) {
                    Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MaintainPerformanceState': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/HrlField_Note_00:Note_12_02', 'IsNotBecomeSpeaker': True})
                } else {
                    Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MaintainPerformanceState': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/HrlField_Note_00:Note_12_01', 'IsNotBecomeSpeaker': True})
                }
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HaveReadHrlField_Note12_2'})
                goto Event1
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HaveReadHrlField_Note12_1'})
                Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/HrlField_Note_00:Talk_10', 'IsAnonymous': False, 'IsNotBecomeSpeaker': True})
                goto Event23
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveReadHrlField_Note12_2'}) {

            call HrlField_Note_00.HaveReadThisFairyNote()

            goto Event23
        } else {
            switchcall HrlField_Note_00.NotReadThisFairyNote({'GameDataNameAtode': 'FairyAfter_Note12'}) {
              case 1303515621:
                goto Event23
            }
        }
    } else {

        call HrlField_Note_00.IsReadFairyNote_FirstTime()

        goto Event23
    }
}
