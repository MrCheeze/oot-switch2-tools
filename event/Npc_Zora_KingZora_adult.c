-------- EventFlow: Npc_Zora_KingZora_adult --------

Actor: Npc_Zora_KingZora_adult
entrypoint: None()
actions: ['EventTalk', 'EventTriggerSetVolatileGeneralPurposeFlag', 'EventTriggerLookAtObject', 'EventTriggerChangeEmotion']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryVolatileGeneralPurposeFlagOn']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent']
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToStarterLinkAnchor', 'EventTriggerParticipateEvent', 'EventPlayerTurnAndLook']
queries: ['EventQueryPlayerIsEquipArmor', 'EventQueryPlayerIsEquipMask', 'EventQueryIsDirToTarget', 'EventQueryPlayerIsChild']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice3']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviRequestBallonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_EventStarter[ShowItem_KingZoraOnly(NpcActor)]
entrypoint: ShowItem_KingZoraOnly(NpcActor)
actions: ['EventTriggerBecomeSpeaker']
queries: []
params: None

void Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Zora_KingZora_SageOfWaterClearedTalk'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Npc_Zora_KingZora_adult:Near_02'})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Npc_Zora_KingZora_adult:Near_01'})
    }
}

void Talk() {

    call Get_StoneOfWater.Test_InitTalk_KingZora({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Zora_KingZora_SageOfWaterClearedTalk'}) {
        Event103:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetSwordBigGoron_IsAfter_Step08_01_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetSwordBigGoron_IsAfter_Step09_Exp'}) {
                Event176:
                if !Player_Event.EventQueryPlayerIsEquipMask() {
                    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
                        Event0:
                        if Npc_Zora_KingZora_adult.EventQueryIsOnRecentTalkFlag() {
                            Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_11', 'MaintainPerformanceState': 0})
                        }
                        Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_08', 'MaintainPerformanceState': 0})
                        Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_09', 'MaintainPerformanceState': 0})
                        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
                            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                            Npc_Zora_KingZora_adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'OverrideStyle': 8, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Mask_11', 'MaintainPerformanceState': 0})
                        }
                    } else {
                        Event99:

                        call Mask()

                    }
                } else
                if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Adult_GlassTruth'}) {
                    goto Event99
                } else
                goto Event0
            } else
            if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Item_EyeballFrog'}) {

                call SubEvent_GetSwordBigGoron_Step09Retry()

            } else
            Event49:
            if Npc_Zora_KingZora_adult.EventQueryIsOnRecentTalkFlag() {
                Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_11', 'MaintainPerformanceState': 0})
            }
            Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_130', 'MaintainPerformanceState': 0})

            call EyeballFrogFailed()

        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetSwordBigGoron_IsAfter_Step08_Exp'}) {
            goto Event49
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GetSwordBigGoron_Step09_GiveUp', 'Index': -1}) {
            goto Event49
        } else
        goto Event176
    } else {
        Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_00', 'MaintainPerformanceState': 0})
        Event28:
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkingL', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        EventSystemActor.EventWait({'Frames': 120, 'IsWaitEnd': True})
        Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_01', 'MaintainPerformanceState': 0})
        Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_13', 'ASName': 'Act_LookAround', 'MaintainPerformanceState': 0})
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'EvtTalkingS', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        EventSystemActor.EventWait({'Frames': 120, 'IsWaitEnd': True})
        Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_02', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Zora_KingZora_SageOfWaterClearedTalk', 'Index': -1, 'Value': True})
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            Npc_Zora_KingZora_adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Mask_05', 'OverrideStyle': 8, 'IsOverrideStyle': True, 'MaintainPerformanceState': 0})
            Event184:
            if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Armor_Adult_Zora', 'Num': 1}) {
                Event7:
                if !Npc_Zora_KingZora_adult.EventQueryVolatileGeneralPurposeFlagOn() {
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'EvtTalkingS', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                }
            } else {
                Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_300', 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_Zora_011_Shop_Adult_CanGetZoraArmor', 'Value': True})
                goto Event7
            }
        } else
        goto Event184
    }
}

void IrregularTalk() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Zora_KingZora_SageOfWaterClearedTalk'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Zora_KingZora_adult_IrregularTalk_Event116', 'Index': -1}) {

            call Get_StoneOfWater.Test_InitTalk_KingZora02({'Arg_Turn': 4, 'Arg_Greeting': 4})

            goto Event103
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {

            call Get_StoneOfWater.Test_InitTalk_KingZora02({'Arg_Greeting': 4, 'Arg_Turn': 0})

            Npc_Zora_KingZora_adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'OverrideStyle': 8, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Mask_11', 'MaintainPerformanceState': 0})
            Npc_Zora_KingZora_adult.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
            Npc_Zora_KingZora_adult.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
            Event121:
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Zora_KingZora_adult_IrregularTalk_Event98', 'Index': -1}) {
                if !Npc_Zora_KingZora_adult.EventQueryIsOnRecentTalkFlag() {
                    Npc_Zora_KingZora_adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'ChoiceNumber': 2, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_IrregularTalk_06', 'MaintainPerformanceState': 0})
                } else {
                    Event98:
                    Npc_Zora_KingZora_adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_IrregularTalk_01', 'ChoiceNumber': 2, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'MaintainPerformanceState': 0})
                }
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Npc_Zora_KingZora_adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_IrregularTalk_05', 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Zora_KingZora_adult_IrregularTalk_Event116', 'Value': True, 'Index': -1})
                } else {
                    Npc_Zora_KingZora_adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_IrregularTalk_04', 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
                }
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Zora_KingZora_adult_IrregularTalk_Event98', 'Value': True, 'Index': -1})
                goto Event98
            }
        } else {

            call Get_StoneOfWater.Test_InitTalk_KingZora02({'Arg_Turn': 4, 'Arg_Greeting': 4})

            goto Event121
        }
    } else {

        call Get_StoneOfWater.Test_InitTalk_KingZora02({'Arg_Turn': 4, 'Arg_Greeting': 4})

        Npc_Zora_KingZora_adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_00', 'MaintainPerformanceState': 0})
        Npc_Zora_KingZora_adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_12', 'MaintainPerformanceState': 0})
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'InstanceName': 'KingZora_IsMelted_Ice_LinkPosition02', 'ASCommand': 'EvtWait'})
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsWaitEnd': False, 'PosVector': [-1.840000033378601, 0.6000000238418579, -1.0800000429153442], 'AtVector': [1.0800000429153442, 2.5, 3.0], 'MoveTime': 0, 'IsEnableRevertFast': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        goto Event28
    }
}

void SubEvent_GetSwordBigGoron_Step08() {

    call ShowItem_KingZoraOnly({'NpcActor': ActorIdentifier(name="Npc_Zora_KingZora_adult"), 'ActorName': 'Npc_Zora_KingZora_adult', 'InstanceName': ''})


    call SubEvent_GetSwordBigGoron.ShowItemSuccess_NoCamera_SwordBigGoron({'AssignableItem': 41, 'ItemPos_Adult': [0.07500000298023224, -0.5899999737739563, 0.6200000047683716], 'LookAtActorName': 'Npc_Zora_KingZora_adult'})

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfWater_IsCompleted_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Zora_KingZora_SageOfWaterClearedTalk'}) {
            Event81:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GetSwordBigGoron_IsAfterFirstShowPrescription_KingZora'}) {
                Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_102', 'MaintainPerformanceState': 0})
                Event95:
                Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_107', 'MaintainPerformanceState': 0})
                Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_103', 'MaintainPerformanceState': 0})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_124', 'ASName': '', 'MaintainPerformanceState': 0})

                    call SubEvent_GetSwordBigGoron.GetSwordBiggoron_HandOver_PlayerToNpc_ForYou({'NpcActor': ActorIdentifier(name="Npc_Zora_KingZora_adult"), 'EmotionType': 0})

                    Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_122', 'MaintainPerformanceState': 0, 'ASName': 'Talk'})

                    call Dm_SY_GetInEvent.GetInEvent_NotTurn_PosCamera({'ActorName': 'Item_EyeballFrog', 'Target': 3, 'NpcActorName': 'Npc_Zora_KingZora_adult', 'NpcInstanceName': ''})

                    PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': -1, 'IsEquipDIrect': False, 'IsSetMessageTargetActorName': True, 'Actor': 'Item_Prescription', 'IsGetEvent': False})

                    fork {
                        Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_118', 'MaintainPerformanceState': 0})
                    } {

                        call SubEvent_GetSwordBigGoron.BigGoronTimer_Step09()

                    }

                    Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_129', 'MaintainPerformanceState': 0})
                    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'SubEvent_GetSwordBigGoron', 'IsWaitEnd': True, 'StepName': 'Step09', 'IsIgnoreCompletedChallenge': True})
                    Npc_Navi.EventNaviRequestBallonMessage({'Index': 52})
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Zora_KingZora_SageOfWaterClearedTalk'}) {

                    call NpcCommon.NpcCommon_HandOver_ShowItem_Cancel({'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_104', 'NpcActor': ActorIdentifier(name="Npc_Zora_KingZora_adult")})

                } else {

                    call NpcCommon.NpcCommon_HandOver_ShowItem_Cancel({'NpcActor': ActorIdentifier(name="Npc_Zora_KingZora_adult"), 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_119'})

                }
            } else {
                Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_101', 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GetSwordBigGoron_IsAfterFirstShowPrescription_KingZora'})
                Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_123', 'MaintainPerformanceState': 0})
                goto Event95
            }
        } else {

            call CancelBigGoronEvent()

        }
    } else
    goto Event81
}

void SubEvent_GetSwordBigGoron_Step09Retry() {
    Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_111', 'ChoiceNumber': 3, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'ChoiceLabel3': 7, 'MaintainPerformanceState': 0})
    switch GameSystemActor.EventQueryTalkChoice3() {
      case 0:

        call SubEvent_GetSwordBigGoron.BigGoronTimerStop()


        call SubEvent_GetSwordBigGoron.ShowItemSuccess_NoCamera_SwordBigGoron({'AssignableItem': 42, 'ItemPos_Adult': [0.07500000298023224, -0.6000000238418579, 0.6499999761581421], 'LookAtActorName': 'Npc_Zora_KingZora_adult'})

        Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_112', 'MaintainPerformanceState': 0})

        call SubEvent_GetSwordBigGoron.GetSwordBiggoron_HandOver_PlayerToNpc_ForYou({'NpcActor': ActorIdentifier(name="Npc_Zora_KingZora_adult"), 'EmotionType': 0})

        Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_117', 'MaintainPerformanceState': 0})
        PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': -1, 'IsEquipDIrect': False, 'IsSetMessageTargetActorName': True, 'Actor': 'Item_EyeballFrog', 'IsGetEvent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GetSwordBigGoron_Step09_GiveUp'})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SubEvent_GetSwordBigGoron', 'IsIgnoreCompletedChallenge': True, 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step08_01'})
      case 1:

        call SubEvent_GetSwordBigGoron.BigGoronTimerStop()

        Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_113', 'MaintainPerformanceState': 0})
        Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_115', 'ASName': 'Talk'})
        Event87:

        call Dm_SY_GetInEvent.GetInEvent_NotTurn_PosCamera({'ActorName': 'Item_EyeballFrog', 'Target': 3, 'NpcActorName': 'Npc_Zora_KingZora_adult', 'NpcInstanceName': ''})


        fork {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Zora_KingZora_SageOfWaterClearedTalk'}) {
                Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_118', 'MaintainPerformanceState': 0})
            } else {
                Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_128', 'MaintainPerformanceState': 0})
            }
        } {

            call SubEvent_GetSwordBigGoron.BigGoronTimer_Step09()

        }

        Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_129', 'MaintainPerformanceState': 0})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'SubEvent_GetSwordBigGoron', 'IsWaitEnd': True, 'StepName': 'Step09'})
      case 2:
        Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_116', 'MaintainPerformanceState': 0})
    }
}

void CancelBigGoronEvent() {
    if !Npc_Zora_KingZora_adult.EventQueryVolatileGeneralPurposeFlagOn() {
        Npc_Zora_KingZora_adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_202', 'MaintainPerformanceState': 0})
        Event101:

        call NpcCommon.ShowItem_Close()

    } else {
        Npc_Zora_KingZora_adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_200', 'MaintainPerformanceState': 0})
        Npc_Zora_KingZora_adult.EventTriggerSetVolatileGeneralPurposeFlag({'Value': True})
        goto Event101
    }
}

void EyeballFrogFailed() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GetSwordBigGoron_Step09_GiveUp', 'Index': -1}) {
        Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_114', 'ChoiceNumber': 2, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'MaintainPerformanceState': 0})
        if !GameSystemActor.EventQueryTalkChoice2() {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GetSwordBigGoron_Step09_GiveUp', 'Value': False})
            Event133:
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GetSwordBigGoron_RejectDeliveryAfterSpoiled_KingZora'}) {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'GetSwordBigGoron_RejectDeliveryAfterSpoiled_KingZora'})
            }
            Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_105', 'MaintainPerformanceState': 0, 'ASName': 'Talk'})
            goto Event87
        } else {
            Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_117', 'MaintainPerformanceState': 0})
        }
    } else
    if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Item_EyeballFrog'}) {

        call SubEvent_GetSwordBigGoron_Step09Retry()

    } else {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkingL', 'IsWaitEnd': True, 'ClothWarpMode': 0})
        if !Npc_Zora_KingZora_adult.EventQueryIsOnRecentTalkFlag() {
            if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GetSwordBigGoron_RejectDeliveryAfterSpoiled_KingZora'}) {
                Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_109', 'MaintainPerformanceState': 0})
            }
            Event127:
            Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_110', 'ChoiceLabel1': 4, 'ChoiceNumber': 2, 'MaintainPerformanceState': 0})
            if !GameSystemActor.EventQueryTalkChoice2() {
                goto Event133
            } else {
                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Zora_KingZora_SageOfWaterClearedTalk'}) {
                    Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_104', 'MaintainPerformanceState': 0})
                } else {
                    Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_119', 'MaintainPerformanceState': 0})
                }
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GetSwordBigGoron_RejectDeliveryAfterSpoiled_KingZora'})
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Zora_KingZora_SageOfWaterClearedTalk'}) {
            Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_106', 'MaintainPerformanceState': 0})
        } else {
            Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_126', 'MaintainPerformanceState': 0})
        }
        goto Event127
    }
}

void ShowEyeballFrog_KingZora_Adult() {

    call ShowItem_KingZoraOnly({'NpcActor': ActorIdentifier(name="Npc_Zora_KingZora_adult"), 'ActorName': 'Npc_Zora_KingZora_adult', 'InstanceName': ''})


    call SubEvent_GetSwordBigGoron.ShowItemSuccess_NoCamera_SwordBigGoron({'AssignableItem': 42, 'ItemPos_Adult': [0.07500000298023224, -0.6000000238418579, 0.6499999761581421], 'LookAtActorName': 'Npc_Zora_KingZora_adult'})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GetSwordBigGoron_IsAfterShowEyeballFrog_KingZora_Adult'}) {
        Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_121', 'MaintainPerformanceState': 0})
        Event75:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfWater_IsCompleted_Exp'}) {
            Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_127', 'MaintainPerformanceState': 0})
        } else {
            Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_125', 'MaintainPerformanceState': 0})
        }

        call NpcCommon.ShowItem_Close()

    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GetSwordBigGoron_IsAfterShowEyeballFrog_KingZora_Adult'})
        Npc_Zora_KingZora_adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Talk_120', 'MaintainPerformanceState': 0})
        goto Event75
    }
}

void Mask() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Gerudo'}) {
        Npc_Zora_KingZora_adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'OverrideStyle': 8, 'IsOverrideStyle': False, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Mask_08', 'MaintainPerformanceState': 0})
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Amiibo1'}) {
        Npc_Zora_KingZora_adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'OverrideStyle': 8, 'IsOverrideStyle': False, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Mask_101', 'MaintainPerformanceState': 0})
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Amiibo0'}) {
        Npc_Zora_KingZora_adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'OverrideStyle': 8, 'IsOverrideStyle': False, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Mask_102', 'MaintainPerformanceState': 0})
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Zora'}) {
        Npc_Zora_KingZora_adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'OverrideStyle': 8, 'IsOverrideStyle': False, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Mask_07', 'MaintainPerformanceState': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
        Npc_Zora_KingZora_adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'OverrideStyle': 8, 'IsOverrideStyle': False, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Mask_12', 'MaintainPerformanceState': 0})
    } else
    if Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Adult_GlassTruth'}) in [0, 1] {
        Npc_Zora_KingZora_adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'OverrideStyle': 8, 'IsOverrideStyle': False, 'MessageId': 'EventFlowMsg/Npc_Zora_KingZora_adult:Mask_103', 'MaintainPerformanceState': 0})
    }
}

void ShowItem_KingZoraOnly() {
    Npc_EventStarter[ShowItem_KingZoraOnly(NpcActor)].EventTriggerBecomeSpeaker()
    Player_Event.EventTriggerParticipateEvent()
    if Player_Event.EventQueryIsDirToTarget({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'AngleThreshold': 15.0, 'ActorName': 'ActorName', 'InstanceName': 'InstanceName'}) {
        Player_Event.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'IsDoNavi': True, 'UseNormalTurn': True, 'KeepTalkWait': False, 'ActorName': 'ActorName', 'InstanceName': 'InstanceName'})
    }
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Zora_KingZora_IrregularTalk', 'Index': -1}) {
        if !Player_Event.EventQueryPlayerIsChild() {
            EventCamera.EventMoveToTargetPosCamera({'MoveTime': 60, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [6.880000114440918, 1.6299999952316284, 6.099999904632568], 'AtVector': [2.690000057220459, 1.6799999475479126, 1.590000033378601], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsWaitEnd': False, 'Actor1ActorName': 'ActorName', 'IsEnableRevertFast': False})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'MoveTime': 60, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [4.630000114440918, 3.25, 3.5899999141693115], 'AtVector': [2.5199999809265137, 2.1700000762939453, -0.25], 'TargetFovy': 59.72999954223633, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsWaitEnd': False, 'Actor1ActorName': 'ActorName', 'Actor1InstanceName': 'InstanceName', 'IsEnableRevertFast': False})
        }
    } else {

        call Get_StoneOfWater.KingZoraCamera()

    }
}
