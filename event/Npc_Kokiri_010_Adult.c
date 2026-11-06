-------- EventFlow: Npc_Kokiri_010_Adult --------

Actor: Npc_Kokiri_010_Adult
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventTriggerSetMaskTalkFlag', 'EventTriggerBalloonMessage', 'EventTriggerKokiriRequestComeCloserFairy', 'EventTriggerForceSetAmiiboMaskTalkFlag', 'EventTriggerLookAtObject']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAvoidDuplicationRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Kokiri_009_Adult
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerLookAtObject', 'EventTriggerKokiriRequestComeCloserFairy']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: []
queries: ['EventQueryPlayerIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

void Talk() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_010_Adult_Talk_Event1', 'Index': -1}) {

        call Mask_All()

        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_Kokiri_010_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Adult:Talk_03', 'MaintainPerformanceState': 0})
        } else {
            Npc_Kokiri_010_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Adult:Talk_02', 'MaintainPerformanceState': 0})
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_010_Adult_Talk_Event1', 'Value': True, 'Index': -1})

        call MaskTalk_FirstTalk()

        Npc_Kokiri_010_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Adult:Talk_00', 'MaintainPerformanceState': 0})
    }
}

void BossBattle_PhantomGanon_IsCompleted_Exp_Talk() {
    Event63:

    fork {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_010_Adult_BossBattle_PhantomGanon_IsCompleted_Exp_Talk_Event2', 'Index': -1}) {

            call Mask_All0()

            if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {

                call Hello()

            }
            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_Kokiri_010_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Adult:Talk_106', 'MaintainPerformanceState': 0})
            } else {
                Npc_Kokiri_010_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Adult:Talk_101', 'MaintainPerformanceState': 0})
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_010_Adult_BossBattle_PhantomGanon_IsCompleted_Exp_Talk_Event2', 'Value': True, 'Index': -1})
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_010_Adult_Talk_Event1', 'Index': -1}) {

                call Mask_All0()


                call Hello()

                Npc_Kokiri_010_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Adult:Talk_104', 'MaintainPerformanceState': 0})
                Event19:
                Npc_Kokiri_010_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Adult:Talk_103', 'MaintainPerformanceState': 0})
            } else {

                call MaskTalk_FirstTalk()

                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_010_Adult_Talk_Event1', 'Value': True, 'Index': -1})
                Npc_Kokiri_010_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Adult:Talk_100', 'MaintainPerformanceState': 0})
                goto Event19
            }
        }
    } {

        call InitTalk.Sub_NoticeEd_WaitForPlayFinished({'Npc_EventStarter': ActorIdentifier(name="Npc_Kokiri_009_Adult"), 'EndTerrorCheck': True})

        Npc_Kokiri_009_Adult.EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
        Npc_Kokiri_009_Adult.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_Kokiri_009_Adult.EventTriggerKokiriRequestComeCloserFairy()
    }

}

void Mask_All() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Adult_GlassTruth'}) {
        Event57:

        call InitTalk.InitTalk_KokiriOnly({'Arg_Greeting': 4, 'Arg_Turn': 4, 'NpcFairy_MovingFlag': True})

        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Kokiri_010_Adult_GlassTruth'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Kokiri_010_Adult_GlassTruth'})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Adult:GlassTruth', 'MaintainPerformanceState': 0})
        }
    } else {
        switchcall Mask_Talk() {
          case 4151362380:
            Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            Npc_EventStarter.EventTriggerKokiriRequestComeCloserFairy()
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Adult:Mask_10', 'MaintainPerformanceState': 0})
        }
    }
}

void Mask_Talk() {
    switchcall NpcCommon.Mask_Talk_Common_With_InitTalk_NoChangeTheTopic_KokiryOnly({'Arg_Turn_For_IgnoreMaskTalk': 4, 'Arg_Turn_For_MaskTalk': 4, 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Kokiri_010_Adult:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Kokiri_010_Adult:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Kokiri_010_Adult:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Kokiri_010_Adult:Mask_04', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Kokiri_010_Adult:Mask_05', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Kokiri_010_Adult:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Kokiri_010_Adult:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Kokiri_010_Adult:Mask_08', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Kokiri_010_Adult:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Kokiri_010_Adult:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Kokiri_010_Adult:Mask_103', 'ASName': 'Def_Wait_Shield'}) {
      case 1183930306:
        return 4151362380
      case 1530789637:
        return 2799305849
    }
}

void MaskTalk_FirstTalk() {

    call InitTalk.InitTalk_KokiriOnly({'Arg_Turn': 4, 'Arg_Greeting': 4, 'NpcFairy_MovingFlag': True})

    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Adult_GlassTruth'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Kokiri_010_Adult_GlassTruth'})
        Event38:
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Adult:Mask_00', 'MaintainPerformanceState': 0})
    } else {
        switchcall NpcCommon.CheckEquipmentMask() {
          case [488279774, 3745441359]:
            Npc_EventStarter.EventTriggerSetMaskTalkFlag({'value': True, 'IsReflectWhenSleep': False})
            goto Event38
          case 1844135360:
            Npc_EventStarter.EventTriggerForceSetAmiiboMaskTalkFlag({'value': True})
            goto Event38
        }
    }
}

void Hello() {
    if !EventWorldManagerController.EventQueryTimeDivision() {
        Npc_Kokiri_010_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Adult:Talk_01', 'MaintainPerformanceState': 0})
    } else {
        Npc_Kokiri_010_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Adult:Talk_06', 'MaintainPerformanceState': 0})
    }
}

void SageOfForest_IsAfter_Step08_Exp_NearActorsTalk() {
    goto Event63
}

void Mask_All0() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Adult_GlassTruth'}) {
        goto Event57
    } else {
        switchcall Mask_Talk0() {
          case 4151362380:
            Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsConfront': False, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_EventStarter.EventTriggerKokiriRequestComeCloserFairy()
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_010_Adult:Mask_10', 'MaintainPerformanceState': 0})
        }
    }
}

void Mask_Talk0() {
    switchcall NpcCommon.Mask_Talk_Common_With_InitTalk_NoChangeTheTopic_KokiryOnly({'Arg_Turn_For_IgnoreMaskTalk': 4, 'Arg_Turn_For_MaskTalk': 4, 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Kokiri_010_Adult:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Kokiri_010_Adult:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Kokiri_010_Adult:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Kokiri_010_Adult:Mask_04', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Kokiri_010_Adult:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Kokiri_010_Adult:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Kokiri_010_Adult:Mask_08', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Kokiri_010_Adult:Mask_05_02', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Kokiri_010_Adult:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Kokiri_010_Adult:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Kokiri_010_Adult:Mask_103', 'ASName': 'TalkMonolog'}) {
      case 1183930306:
        return 4151362380
      case 1530789637:
        return 2799305849
    }
}

void Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_010_Adult_SuprisedFlag'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_010_Adult_IsSuprisedNearEvent'}) {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Kokiri_010_Adult:Near_02'})
        } else {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Kokiri_010_Adult:Near_01'})
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_010_Adult_IsSuprisedNearEvent'})
        }
    }
}
