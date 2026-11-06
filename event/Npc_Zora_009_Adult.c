-------- EventFlow: Npc_Zora_009_Adult --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: Npc_Zora_009_Adult
entrypoint: None()
actions: ['EventPlayAS']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryIsPlayingSameAS']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: []
queries: ['EventQueryPlayerIsEquipArmor', 'EventQueryPlayerIsEquipMask']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

void Talk() {
    if !Npc_Zora_009_Adult.EventQueryIsPlayingSameAS({'Partial': '', 'ASName': 'Act_Dive'}) {
        Npc_Zora_009_Adult.EventPlayAS({'ASName': 'Swim_Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
    }

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Npc_Zora_009_Adult', 'Index': -1}) {
        if !Npc_Zora_009_Adult.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_009_Adult:Talk_01', 'MaintainPerformanceState': 0})
            if !Player_Event.EventQueryPlayerIsEquipMask() {
                if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Zora'}) {
                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_009_Adult:Mask_104', 'MaintainPerformanceState': 0, 'ASName': 'TalkMonolog', 'IsOverrideStyle': False, 'NotPlayLipSyncAnim': True})
                } else
                if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Bunny'}) {
                    Event42:
                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_009_Adult:Talk_03', 'MaintainPerformanceState': 0, 'ASName': 'TalkMonolog', 'NotPlayLipSyncAnim': True})
                } else {
                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_009_Adult:Mask_105', 'MaintainPerformanceState': 0, 'ASName': 'TalkMonolog', 'NotPlayLipSyncAnim': True})
                    Event25:
                    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
                        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'OverrideStyle': 8, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Npc_Zora_009_Adult:Mask_11', 'MaintainPerformanceState': 0, 'NotPlayLipSyncAnim': True, 'ASName': 'TalkMonolog'})
                    }
                }
            } else
            if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Adult_GlassTruth'}) {
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_009_Adult:Mask_102', 'MaintainPerformanceState': 0, 'NotPlayLipSyncAnim': True, 'ASName': 'TalkMonolog'})
            } else {
                goto Event42
            }
        } else
        if !Player_Event.EventQueryPlayerIsEquipMask() {
            if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Zora'}) {
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_009_Adult:Mask_107', 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_009_Adult:Mask_109', 'MaintainPerformanceState': 0})
                goto Event25
            }
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Adult_GlassTruth'}) {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_009_Adult:Mask_103', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_009_Adult:Talk_02', 'MaintainPerformanceState': 0})
            goto Event25
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Npc_Zora_009_Adult', 'Index': -1, 'Value': True})
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Zora_009_Adult:Talk_00', 'ChoiceLabel2': 0, 'ChoiceNumber': 1, 'MaintainPerformanceState': 0})
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_009_Adult:Talk_04', 'MaintainPerformanceState': 0})
        if !Player_Event.EventQueryPlayerIsEquipMask() {
            if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Zora'}) {
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_009_Adult:Mask_108', 'MaintainPerformanceState': 0, 'ASName': 'TalkMonolog', 'NotPlayLipSyncAnim': True})
            } else {
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_009_Adult:Talk_05', 'MaintainPerformanceState': 0, 'ASName': 'TalkMonolog', 'NotPlayLipSyncAnim': True})
                if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Zora_009_Adult:Mask_05', 'OverrideStyle': 8, 'IsOverrideStyle': True, 'MaintainPerformanceState': 0, 'NotPlayLipSyncAnim': True, 'ASName': 'TalkMonolog'})
                }
            }
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Adult_GlassTruth'}) {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_009_Adult:Mask_106', 'MaintainPerformanceState': 0, 'NotPlayLipSyncAnim': True, 'ASName': 'TalkMonolog'})
        } else {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_009_Adult:Talk_05', 'MaintainPerformanceState': 0, 'ASName': 'TalkMonolog', 'NotPlayLipSyncAnim': True})
        }
    }
}
