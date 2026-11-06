-------- EventFlow: SubEvent_GetEponaSong --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLook', 'EventTriggerPlayerLookAtObject']
queries: ['EventQueryPlayerIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryTalkChoice4', 'EventQueryRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_Malon_Child
entrypoint: None()
actions: ['EventTalk', 'EventTriggerLookAtObject', 'EventTriggerSetModelLodManual']
queries: ['EventNPCQueryCheckFrontToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerLookAtObject', 'EventTriggerForceSetMaskTalkFlag']
queries: ['EventQueryAvoidDuplicationRandomChoice2', 'EventQueryIsOnRecentTalkFlag', 'EventQueryIsPlayingSameAS']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_Talon_Child_SecondTime
entrypoint: None()
actions: ['EventTalk', 'EventTriggerParticipateEvent', 'EventTriggerLookAtObject', 'EventTriggerAIScheduleSetAwaken']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventSendMultiEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

void GetEponaSong_MelodyGet_Epona() {
    Player_Event.EventTriggerParticipateEvent()
    Npc_Hylia_Malon_Child.EventTriggerSetModelLodManual({'LodLevel': 0})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_MelodyGet_Epona', 'FadeInTypeEventEnd': 0})
}

void GuideToLonLonRanch_Npc_Hylia_Malon_Child_Talk() {

    call Mask_All()


    call SayHello()

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.SubEvent_GetEponaSong_GuideToLonLonRanch_Npc_Hylia_Malon_Child_Talk_Event7', 'Index': -1}) {
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 4, 'ChoiceLabel1': 0, 'ChoiceLabel2': 7, 'ChoiceLabel3': 8, 'ChoiceLabel4': 9, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_214', 'MaintainPerformanceState': 0})
        } else {
            Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 4, 'ChoiceLabel1': 0, 'ChoiceLabel2': 7, 'ChoiceLabel3': 8, 'ChoiceLabel4': 9, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_215', 'MaintainPerformanceState': 0})
        }
        switch GameSystemActor.EventQueryTalkChoice4() {
          case 0:
            Event2:
            Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            if !GameSystemActor.EventQueryRandomChoice2() {
                Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_201', 'MaintainPerformanceState': 0})
            } else {
                Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_202', 'MaintainPerformanceState': 0})
            }
          case 1:
            Event20:
            if !GameSystemActor.EventQueryRandomChoice2() {
                Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_203', 'MaintainPerformanceState': 0})
            } else {
                Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_204', 'MaintainPerformanceState': 0})
            }
          case 2:
            Event84:
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkWonder', 'ClothWarpMode': 0})
            if !GameSystemActor.EventQueryRandomChoice2() {
                Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_205', 'MaintainPerformanceState': 0})
            } else {
                Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_206', 'MaintainPerformanceState': 0})
            }
            Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_207', 'MaintainPerformanceState': 0})
          case 3:
            Event28:
            if !GameSystemActor.EventQueryRandomChoice2() {
                Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_208', 'MaintainPerformanceState': 0, 'ASName': 'Act_SitChair_Hello'})
            } else {
                Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_209', 'MaintainPerformanceState': 0, 'ASName': 'Act_SitChair_Hello'})
            }
        }
    } else {
        Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_212', 'MaintainPerformanceState': 0})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HavePlayedEvent.Get_StoneOfWater_TalkWithImpa', 'Index': -1}) {

            call GuideToLonLonRanch_Npc_Hylia_Malon_Child_Talk_MarketAfterTalkMalon({'ShitenZahyo': [-2.0799999237060547, 2.25, 6.059999942779541], 'ChuitenZahyo': [-0.7099999785423279, 1.3600000143051147, 4.070000171661377], 'GameDataName': 'IsMalonAppear_HyruleCastleSecondTime'})

        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.SubEvent_GetEponaSong_GuideToLonLonRanch_Npc_Hylia_Malon_Child_Talk_Event7', 'Value': True, 'Index': -1})
            Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 4, 'ChoiceLabel1': 10, 'ChoiceLabel2': 7, 'ChoiceLabel3': 8, 'ChoiceLabel4': 9, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_213', 'MaintainPerformanceState': 0})
            switch GameSystemActor.EventQueryTalkChoice4() {
              case 0:
                goto Event2
              case 1:
                goto Event20
              case 2:
                goto Event84
              case 3:
                goto Event28
            }
        }
    }
}

void GetEponaSong_StepCheck() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsArrived_LonLonRanch_AfterMalonAppear'})
    && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfFire_IsCompleted_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfWater_IsCompleted_Exp'}) {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'IsMalonAppear_HyruleCastleSecondTime', 'Index': -1, 'Value': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'IsMalonAppear_Market', 'Value': True})
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'IsMalonAppear_HyruleCastleSecondTime', 'Index': -1, 'Value': True})
        }
    }
}

void Mask_Talk() {
    if !Npc_Hylia_Malon_Child.EventNPCQueryCheckFrontToTarget({'AngleThreshold': 120.0, 'Target': 2, 'ActorName': '', 'InstanceName': ''}) {
        if !EventWorldManagerController.EventQueryTimeDivision() {
            switchcall Mask_Talk_Common_With_InitTalk_Malon_Child_Only({'Arg_Turn_For_IgnoreMaskTalk': 4, 'Arg_Turn_For_MaskTalk': 4, 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_04', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_08', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_09', 'ASName': 'TalkMonolog', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_103', 'Arg_Greeting': 4, 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_05_01'}) {
              case 4155567800:
                Event42:
                return 2799305849
              case 4205900657:
                Event33:
                return 4151362380
            }
        } else {
            switchcall Mask_Talk_Common_With_InitTalk_Malon_Child_Only({'Arg_Turn_For_IgnoreMaskTalk': 4, 'Arg_Turn_For_MaskTalk': 4, 'ASName': 'TalkMonolog', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_05_02', 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_01_02', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_02_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_03_02', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_04_02', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_06_02', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_07_02', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_08_02', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_09_02', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_101_02', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_102_02', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_103_02', 'Arg_Greeting': 3}) {
              case 4155567800:
                goto Event42
              case 4205900657:
                goto Event33
            }
        }
    } else
    if !EventWorldManagerController.EventQueryTimeDivision() {
        switchcall Mask_Talk_Common_With_InitTalk_Malon_Child_Only({'Arg_Turn_For_IgnoreMaskTalk': 4, 'Arg_Turn_For_MaskTalk': 4, 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_04', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_05', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_08', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_09', 'ASName': 'TalkMonolog', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_103', 'Arg_Greeting': 3}) {
          case 4155567800:
            Event32:
            return 2799305849
          case 4205900657:
            Event43:
            return 4151362380
        }
    } else {
        switchcall Mask_Talk_Common_With_InitTalk_Malon_Child_Only({'Arg_Turn_For_IgnoreMaskTalk': 4, 'Arg_Turn_For_MaskTalk': 4, 'ASName': 'TalkMonolog', 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_01_02', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_02_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_03_02', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_04_02', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_06_02', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_07_02', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_08_02', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_09_02', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_101_02', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_102_02', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_103_02', 'Arg_Greeting': 3, 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_05'}) {
          case 4155567800:
            goto Event32
          case 4205900657:
            goto Event43
        }
    }
}

void Mask_All() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorName': 'Armor_Child_GlassTruth', 'ArmorSlot': 0}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_Malon_Child_GlassTruth'}) {
            if !Npc_Hylia_Malon_Child.EventNPCQueryCheckFrontToTarget({'AngleThreshold': 120.0, 'Target': 2, 'ActorName': '', 'InstanceName': ''}) {

                call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

            } else {

                call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 3})

            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_Hylia_Malon_Child_GlassTruth'})
            if !Npc_Hylia_Malon_Child.EventNPCQueryCheckFrontToTarget({'AngleThreshold': 120.0, 'Target': 2, 'ActorName': '', 'InstanceName': ''}) {

                call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

            } else {

                call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 3})

            }
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:GlassTruth', 'MaintainPerformanceState': 0})
        }
    } else {
        switchcall Mask_Talk() {
          case 4151362380:
            Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Mask_10', 'MaintainPerformanceState': 0})
        }
    }
}

void SayHello() {
    switchcall NpcCommon.CheckAlreadyMaskTalked() {
      case 1307241100:
        if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            if !EventWorldManagerController.EventQueryTimeDivision() {
                Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_211', 'MaintainPerformanceState': 0, 'ASName': 'Act_SitChair_Hello'})
            } else {
                Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_226', 'MaintainPerformanceState': 0, 'ASName': 'Act_SitChair_Hello'})
            }
        }
    }
}

void GuideToLonLonRanch_Npc_Hylia_Malon_Child_Talk_Market() {

    call Mask_All()


    call SayHello()

    Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_212', 'MaintainPerformanceState': 0})

    call GuideToLonLonRanch_Npc_Hylia_Malon_Child_Talk_MarketAfterTalkMalon({'ShitenZahyo': [0.44999998807907104, 2.119999885559082, 5.03000020980835], 'ChuitenZahyo': [-0.4099999964237213, 1.0399999618530273, 1.809999942779541], 'GameDataName': 'IsMalonAppear_Market'})

}

void GuideToLonLonRanch_Npc_Hylia_Malon_Child_Talk_MarketAfterTalkMalon() {
    Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 9, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_218', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MaintainPerformanceState': 0})
    Npc_Hylia_Talon_Child_SecondTime.EventTriggerParticipateEvent()

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})

        fork {
            Npc_Hylia_Talon_Child_SecondTime.EventTriggerAIScheduleSetAwaken({'Bool': True})
            Npc_Hylia_Talon_Child_SecondTime.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 9, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_62', 'ASName': 'Wakeup', 'EndDialogOption': 1, 'IsCloseDialog': False, 'MaintainPerformanceState': 0})
        } {
            Npc_Hylia_Malon_Child.EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_Hylia_Talon_Child_SecondTime', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Direction': 200.0})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            Player_Event.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Hylia_Talon_Child_SecondTime', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 60.0, 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})
        }

    } {
        EventCamera.EventSendMultiEventTalkMessageToPlayerCamera({'Spearker1ActorName': 'Npc_Hylia_Malon_Child', 'Spearker2ActorName': 'Npc_Hylia_Talon_Child_SecondTime', 'IsWaitEnd': False, 'Spearker1InstanceName': '', 'Spearker2InstanceName': '', 'Speaker3SetType': 0, 'Spearker3ActorName': '', 'Spearker3InstanceName': '', 'Speaker4SetType': 0, 'Spearker4ActorName': '', 'Spearker4InstanceName': '', 'EventTalkCameraType': 0, 'Speaker1SetType': 1, 'Speaker2SetType': 1})
    }

    EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    Npc_Hylia_Talon_Child_SecondTime.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 9, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_63', 'MaintainPerformanceState': 0, 'ASName': 'Wait'})

    fork {
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 60.0, 'ActorName': 'Npc_Hylia_Malon_Child'})
    } {
        Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 9, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_220', 'ASName': '', 'MaintainPerformanceState': 0})
    }

    Npc_Hylia_Talon_Child_SecondTime.EventTriggerLookAtObject({'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Direction': 60.0, 'ActorName': 'Npc_Hylia_Malon_Child'})

    fork {
        Npc_Hylia_Talon_Child_SecondTime.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 9, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_66', 'MaintainPerformanceState': 0, 'ASName': 'Wait'})
    } {
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Hylia_Talon_Child_SecondTime', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 60.0})
    }

    Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 9, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_221', 'ASName': '', 'MaintainPerformanceState': 0})
    Npc_Hylia_Talon_Child_SecondTime.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 9, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_64', 'MaintainPerformanceState': 0, 'ASName': 'Wait'})
    Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 9, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_222', 'ASName': '', 'MaintainPerformanceState': 0})
    Npc_Hylia_Talon_Child_SecondTime.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 9, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_65', 'MaintainPerformanceState': 0, 'ASName': 'Wait'})
    Npc_Hylia_Malon_Child.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Npc_Hylia_Talon_Child_SecondTime.EventTriggerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Direction': 60.0, 'Target': 2, 'ActorName': ''})
    Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 60.0, 'ActorName': 'Npc_Hylia_Malon_Child'})
    Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 9, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_223', 'ASName': '', 'MaintainPerformanceState': 0})
    Npc_Hylia_Malon_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 9, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_224', 'IsWaitEnd': True, 'MaintainPerformanceState': 0, 'ASName': 'Act_SitChair_Hello'})
    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'GameDataName'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void Mask_Talk_Common_With_InitTalk_Malon_Child_Only() {
    switchcall NpcCommon.CheckEquipmentMask() {
      case [3745441359, 1844135360]:

        call InitTalk.InitTalk({'Arg_Turn': 'Arg_Turn_For_MaskTalk', 'Arg_Greeting': 'Arg_Greeting'})


        call NpcCommon.Sub_Mask_Talk_OtherTruthMask_Message({'ASName': '', 'Mask_Keaton_Talk': 'Mask_Keaton_Talk', 'Mask_Skull_Talk': 'Mask_Skull_Talk', 'Mask_Spooky_Talk': 'Mask_Spooky_Talk', 'Mask_Bunny_Talk': 'Mask_Bunny_Talk', 'Mask_Goron_Talk': 'Mask_Goron_Talk', 'Mask_Zora_Talk': 'Mask_Zora_Talk', 'Mask_Gerudo_Talk': 'Mask_Gerudo_Talk', 'Mask_Amiibo00_Talk': 'Mask_Amiibo00_Talk', 'Mask_Amiibo01_Talk': 'Mask_Amiibo01_Talk', 'Mask_Amiibo02_Talk': 'Mask_Amiibo02_Talk'})

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'MessageId': 'ChangeTheTopic_Talk', 'MaintainPerformanceState': 0})
        Event140:
        return 4155567800
      case 3362507297:

        call InitTalk.InitTalk({'Arg_Turn': 'Arg_Turn_For_IgnoreMaskTalk', 'Arg_Greeting': 'Arg_Greeting'})

        goto Event140
      case 488279774:

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'Arg_Greeting'})

        if !Npc_EventStarter.EventQueryIsPlayingSameAS({'Partial': '', 'ASName': 'ASName'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': True, 'OverrideStyle': 8, 'NotPlayLipSyncAnim': True, 'MessageId': 'Mask_Truth_Talk', 'ASName': 'ASName', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': True, 'OverrideStyle': 8, 'NotPlayLipSyncAnim': True, 'ASName': 'TalkMonolog', 'MessageId': 'Mask_Truth_Talk', 'MaintainPerformanceState': 0})
        }
        Npc_EventStarter.EventTriggerForceSetMaskTalkFlag({'value': True})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        return 4205900657
    }
}
