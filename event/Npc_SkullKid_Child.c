-------- EventFlow: Npc_SkullKid_Child --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerResetPlayedNoteAppliedPitch', 'EventTriggerZeldaNotesAddNPCTalkCountNeedOtherFlag']
queries: ['EventQueryIsRecommendedMelody', 'EventQueryTalkChoice2', 'EventQueryMelodyTypeForNormal']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_SkullKid_Child
entrypoint: None()
actions: ['EventTalk', 'EventTriggerParticipateEvent', 'EventTriggerSetRecentTalkFlag', 'EventTriggerLookAtObject', 'EventTriggerBalloonMessage', 'EventPlayAS', 'EventTriggerSetModelLodManual']
queries: ['EventQueryAvoidDuplicationRandomChoice2', 'EventQueryIsOnRecentTalkFlag', 'EventQueryAvoidDuplicationRandomChoice3']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAvoidDuplicationRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerCameraSavePoint', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerPlayOcarinaFree', 'EventPlayerConversate', 'EventPlayerMove']
queries: ['EventQueryPlayerIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviFollowPlayer']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_EventStarter[Sub_InitTalk_SkullKid_Child_Settings(Arg_Actor)]
entrypoint: Sub_InitTalk_SkullKid_Child_Settings(Arg_Actor)
actions: []
queries: []
params: None

void Talk() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_MaskSalesman_IsAfter_Step03_Exp'}) {

        call InitTalk_SkullKid_Child({'Arg_Turn': 3, 'Arg_Greeting': 3})


        call Mask_All()

        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_SkullKid_Child_IsGetHeartPiece'}) {
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child:Talk_27', 'MaintainPerformanceState': 0})
                } else {
                    Event40:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child:Talk_26', 'MaintainPerformanceState': 0})
                }
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child:Talk_28', 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child:Talk_23', 'MaintainPerformanceState': 0})
                goto Event40
            }
        } else
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag()
        && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_SkullKid_Child_Talk_Event47', 'Index': -1}) {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_SkullKid_Child_Talk_Event47', 'Index': -1, 'Value': False})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child:Talk_30', 'MaintainPerformanceState': 0})
            Event18:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child:Talk_13', 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'MaintainPerformanceState': 0})
            if !GameSystemActor.EventQueryTalkChoice2() {
                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkWonder', 'ClothWarpMode': 0})
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_SkullKid_Child_Talked'}) {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child:Talk_16', 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_SkullKid_Child_Talked'})
                }
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child:Talk_15', 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child:Talk_14', 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_SkullKid_Child_Talk_Event47', 'Value': True, 'Index': -1})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child:Talk_31', 'MaintainPerformanceState': 0})
            goto Event18
        }
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Skull'}) {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Step03_Npc_SkullKid_Child_Talk'})
    } else {

        call InitTalk_SkullKid_Child({'Arg_Turn': 3, 'Arg_Greeting': 3})

        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'LookedMask_Npc_SkullKid_Child'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child:Talk_10'})
        } else {

            call Mask_All()

        }
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_SkullKid_Child_IsGetHeartPiece'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_SkullKid_Child_Talk_Event6', 'Index': -1}) {
                if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                    if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child:Talk_18', 'MaintainPerformanceState': 0})
                    } else {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child:Talk_19', 'MaintainPerformanceState': 0})
                    }
                } else {
                    Event6:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child:Talk_03', 'MaintainPerformanceState': 0})
                }
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_SkullKid_Child_Talk_Event6', 'Value': True, 'Index': -1})
                goto Event6
            }
        } else
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag()
        && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_SkullKid_Child_Talk_Event14', 'Index': -1}) {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_SkullKid_Child_Talk_Event14', 'Index': -1, 'Value': False})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child:Talk_12', 'MaintainPerformanceState': 0})
            goto Event18
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_SkullKid_Child_Talk_Event14', 'Value': True, 'Index': -1})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child:Talk_11', 'MaintainPerformanceState': 0})
            goto Event18
        }
    }
}

void Near() {
    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_SkullKid_Child_SkipNearBalloonMsg', 'Index': -1}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_SkullKid_Child:Near_01'})
    }
}

void Npc_SkullKid_Child_PlayOcarinaSequence() {
    Npc_SkullKid_Child.EventTriggerSetModelLodManual({'LodLevel': 0})
    EventCamera.EventTriggerCameraSavePoint()
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_SkullKid_Child_IsGetHeartPiece'}) {

        fork {

            call Dm_SY_Ocarina.PlayOcarinaFree({'MelodyType': 2, 'HasRecommendedMelody': True})

        } {
            Npc_SkullKid_Child.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        }

        if GameSystemActor.EventQueryMelodyTypeForNormal() in [0, 1, 2, 3, 4, 5, 12] {

            call Common_Camera_Pln.CameraDoF_Event_Common()

            Event1:
            if !GameSystemActor.EventQueryIsRecommendedMelody() {

                fork {
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0, 'ASCommand': 'EvtWait'})
                    EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})

                    call InitTalk.InitTalk_OnEvent_NoCamera_NoTalk({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Arg_Actor': ActorIdentifier(name="Npc_SkullKid_Child"), 'ActorName': 'Npc_SkullKid_Child', 'InstanceName': ''})

                } {
                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'PosVector': [-25.170000076293945, 101.05999755859375, 2.069999933242798], 'AtVector': [-31.010000228881836, 102.22000122070312, -0.14000000059604645], 'TargetFovy': 50.0, 'IsEnableRevertFast': False})
                }

                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_SkullKid_Child_IsGetHeartPiece'}) {
                    if !Npc_SkullKid_Child.EventQueryAvoidDuplicationRandomChoice2() {

                        fork {
                            Npc_SkullKid_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child:Talk_04', 'ASName': 'Saria_True', 'MaintainPerformanceState': 0})
                        } {

                            call NaviEventCommon.Navi_followPlayer()

                        }

                    } else {

                        fork {
                            Npc_SkullKid_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child:Talk_20', 'ASName': 'Saria_True', 'MaintainPerformanceState': 0})
                        } {

                            call NaviEventCommon.Navi_followPlayer()

                        }

                    }
                } else {
                    Npc_SkullKid_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child:Talk_02', 'ASName': 'Saria_True', 'MaintainPerformanceState': 0})

                    call Dm_SY_GetInEvent.GetInEvent_NotTurn_NotNpc({'ActorName': 'Obj_Heart_Piece', 'IsNpcEventStarter': False})

                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_SkullKid_Child_IsGetHeartPiece'})
                }
            } else {

                fork {
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0, 'ASCommand': 'EvtWait'})
                    EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})

                    call InitTalk.InitTalk_OnEvent_NoCamera_NoTalk({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Arg_Actor': ActorIdentifier(name="Npc_SkullKid_Child"), 'ActorName': 'Npc_SkullKid_Child', 'InstanceName': ''})

                } {
                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'PosVector': [-25.170000076293945, 101.05999755859375, 2.069999933242798], 'AtVector': [-31.010000228881836, 102.22000122070312, -0.14000000059604645], 'TargetFovy': 50.0, 'IsEnableRevertFast': False})
                }

                if !Npc_SkullKid_Child.EventQueryAvoidDuplicationRandomChoice2() {

                    fork {
                        Npc_SkullKid_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child:Talk_01', 'ASName': 'Saria_False', 'MaintainPerformanceState': 0})
                    } {

                        call NaviEventCommon.Navi_followPlayer()

                    }

                } else {

                    fork {
                        Npc_SkullKid_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child:Talk_21', 'ASName': 'Saria_False', 'MaintainPerformanceState': 0})
                    } {

                        call NaviEventCommon.Navi_followPlayer()

                    }

                }
            }
        }
    } else
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SkullKid_OnCenter'}) {

        fork {
            Player_Event.EventPlayerMove({'MoveSpeed': 0.10000000149011612, 'IsWaitEnd': True, 'DecSpeedDistance': 0.0, 'ApplySlowMove': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsInertiaMove': False, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'IsContinueMoveAnimeAfterFinish': False, 'WorldPos': [-28.56999969482422, 101.02799987792969, 1.6089999675750732]})
        } {
            Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': False, 'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'IsHomePosition': True, 'OffsetType': 1, 'IsNearOffset': False})
        }

    }

    call NpcCommon.NpcCommon_PlayOcarina_BeginningTalk_SkullKidOnly({'Npc_PlayOcarina_IsReactedFlag': 'Npc_SkullKid_Child_PlayOcarina_IsReacted', 'MessageId_IsFirst': 'EventFlowMsg/Npc_SkullKid_Child:Talk_34', 'MessageId_IsSecond': 'EventFlowMsg/Npc_SkullKid_Child:Talk_35', 'IsLookAtPlayer': True, 'Arg_Actor': ActorIdentifier(name="Npc_SkullKid_Child"), 'Arg_Turn': 0})

    GameSystemActor.EventTriggerZeldaNotesAddNPCTalkCountNeedOtherFlag({'OnlyUseOtherFlag': True, 'ActorName': 'Npc_SkullKid_Child', 'Frame': 0})

    fork {
        Npc_SkullKid_Child.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    } {

        call Dm_SY_Ocarina.PlayOcarinaSequence_NpcBeginningTalk({'MelodyType': 2, 'IsNeedMessageDialogOpenAnim': True})

    }

    if GameSystemActor.EventQueryMelodyTypeForNormal() in [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12] {
        goto Event1
    }
}

void InitTalk_SkullKid_Child() {

    call Sub_InitTalk_SkullKid_Child_Settings({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Arg_Actor': ActorIdentifier(name="Npc_EventStarter")})

    EventCamera.EventMoveToTargetPosCamera({'MoveTime': 60, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'AtVector': [-0.4300000071525574, -1.1200000047683716, 5.980000019073486], 'TargetFovy': 37.0, 'PosVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor2ActorName': 'Npc_SkullKid_Child', 'Actor1ActorName': 'Player_Event', 'AtVectorSetType': 4, 'PosVector': [-0.8100000023841858, 0.6700000166893005, -1.2699999809265137], 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
}

void Mask_All() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_GlassTruth'}) {
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_SkullKid_Child_GlassTruth'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_SkullKid_Child_GlassTruth'})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child:GlassTruth', 'MaintainPerformanceState': 0})
        }
    } else {

        call NpcCommon.Mask_Talk_Common_NoChangeTheTopic_NotTalkMonolog({'Mask_Keaton_Talk': 'EventFlowMsg/Npc_SkullKid_Child:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_SkullKid_Child:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_SkullKid_Child:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_SkullKid_Child:Mask_04', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_SkullKid_Child:Mask_05', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_SkullKid_Child:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_SkullKid_Child:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_SkullKid_Child:Mask_08', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_SkullKid_Child:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_SkullKid_Child:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_SkullKid_Child:Mask_103'})

    }
}

void OcarinaInduction() {
    Npc_SkullKid_Child.EventTriggerParticipateEvent()
    GameSystemActor.EventTriggerResetPlayedNoteAppliedPitch()
    Player_Event.EventPlayerPlayOcarinaFree({'IsWaitEnd': True})

    call NaviEventCommon.NaviMove_PlayerHomePos_PassThrough({'IsOffCenterCamera': True, 'PassThrough': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsLookAtObject': True, 'LookAtTarget': 3, 'IsTurnLooking': True, 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtInstanceName': '', 'LookAtActorName': 'Npc_SkullKid_Child'})

    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'MoveTime': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'LookAtDis': -1.0, 'TargetFovy': 50.0, 'PosVector': [-29.716699600219727, 102.5093002319336, -2.1226999759674072], 'AtVector': [-36.242801666259766, 104.46849822998047, -4.549099922180176], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})

    fork {
        Npc_SkullKid_Child.EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
    } {
        Npc_SkullKid_Child.EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'ResetArriveTransformFixed': False})
    }

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_SkullKid_Child_Talk_Event14', 'Index': -1}) {
        if !Npc_SkullKid_Child.EventQueryIsOnRecentTalkFlag() {
            Npc_SkullKid_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 4, 'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'ChoiceLabel3': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child:Talk_40', 'MaintainPerformanceState': 0, 'IsNotBecomeSpeaker': True})
        } else {
            Npc_SkullKid_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 4, 'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'ChoiceLabel3': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child:Talk_41', 'MaintainPerformanceState': 0, 'IsNotBecomeSpeaker': True})
        }
        Event87:

        call Dm_SY_Ocarina.PlayOcarinaFree({'HasRecommendedMelody': False, 'MelodyType': 0})

        if GameSystemActor.EventQueryMelodyTypeForNormal() in [0, 1, 2, 4, 6, 7, 8, 9, 10, 11, 12] {
            switch Npc_SkullKid_Child.EventQueryAvoidDuplicationRandomChoice3() {
              case 0:
                Npc_SkullKid_Child.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_SkullKid_Child:OcarinaMelodyZeldaLullaby_00', 'DisplayFrame': 180, 'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
              case 1:
                Npc_SkullKid_Child.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_SkullKid_Child:OcarinaMelodyZeldaLullaby_01', 'DisplayFrame': 180, 'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
              case 2:
                Npc_SkullKid_Child.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_SkullKid_Child:OcarinaMelodyZeldaLullaby_02', 'DisplayFrame': 180, 'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
            }
        }
    } else {
        Npc_SkullKid_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 4, 'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'ChoiceLabel3': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child:Talk_42', 'MaintainPerformanceState': 0, 'IsNotBecomeSpeaker': True})
        goto Event87
    }
}

void Sub_InitTalk_SkullKid_Child_Settings() {

    fork {
        Player_Event.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 'Arg_Greeting'})
    } {

        call InitTalk.Sub_InitTalk_Npc({'Arg_Turn': 'Arg_Turn', 'Arg_Greeting': 'Arg_Greeting', 'Arg_Actor': 'Arg_Actor'})

    } {

        call NaviEventCommon.NaviMove_PlayerHomePos_Choice({'IsLeft': True, 'IsTurnLooking': True, 'LookAtOffsetBase': 0, 'IsUseDisguiseSpeakerPos': False, 'LookAtDirection': 0.0, 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'IsLookAtObject': True, 'LookAtTarget': 1, 'LookAtActorName': 'Npc_EventStarter', 'PassThrough': 0.699999988079071, 'IsWaitEnd': False})

    }

}
