-------- EventFlow: Npc_Hylia_Soldier_009_Child --------

Actor: Npc_Hylia_Soldier_009_Child
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventTriggerSetVolatileGeneralPurposeFlag']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryHaveTalked', 'EventQueryVolatileGeneralPurposeFlagOn']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryTalkChoice2', 'EventQueryRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventCloseRupeeDisplay', 'EventTriggerOpenRupeeDisplay']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryHasRuppe']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget']
queries: ['EventQueryAvoidDuplicationRandomChoice2', 'EventQueryIsOnRecentTalkFlag', 'EventNPCQueryCheckTargetActorForLookIK']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviRequestBallonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart']
queries: ['EventQueryPlayerIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

void Talk() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'NaviChat_HyruleCastle_FoundBySecurity', 'Value': False})

    call Mask_All()

    if !Npc_Hylia_Soldier_009_Child.EventQueryHaveTalked() {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.Dm_HrlCastle_0070'}) {
            if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_Hylia_Soldier_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Talk_15', 'MaintainPerformanceState': 0})
            }
            if !EventWorldManagerController.EventQueryTimeDivision() {
                if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                    Npc_Hylia_Soldier_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Talk_20', 'MaintainPerformanceState': 0})
                } else {
                    Npc_Hylia_Soldier_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Talk_21', 'MaintainPerformanceState': 0})
                }
                Event95:
                if Npc_Hylia_Soldier_009_Child.EventQueryVolatileGeneralPurposeFlagOn() {
                    Npc_Hylia_Soldier_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Talk_37', 'MaintainPerformanceState': 0})
                    Npc_Hylia_Soldier_009_Child.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                    Npc_Hylia_Soldier_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Talk_06', 'ASName': 'Act_SecretTalk', 'MaintainPerformanceState': 0})
                    Npc_Hylia_Soldier_009_Child.EventTriggerSetVolatileGeneralPurposeFlag({'Value': True})
                }
            } else
            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_Hylia_Soldier_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Talk_40', 'MaintainPerformanceState': 0})
            } else {
                Npc_Hylia_Soldier_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Talk_41', 'MaintainPerformanceState': 0})
            }
            goto Event95
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_WeirdEgg'})
        && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.HyruleCastle_FoundBySecurity'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_Soldier_009_Child_Talk_Event2', 'Index': -1}) {
                Npc_Hylia_Soldier_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Talk_08', 'MaintainPerformanceState': 0})
                UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
                Npc_Hylia_Soldier_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Talk_11', 'ChoiceNumber': 2, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 0, 'MaintainPerformanceState': 0})
                Event8:
                if !GameSystemActor.EventQueryTalkChoice2() {

                    call NpcCommon.Npc_IsConfront_WithLinkAS_ForReceive({'NpcActor': ActorIdentifier(name="Npc_Hylia_Soldier_009_Child"), 'LinkAS': 'EvtTalkYes'})

                    if !PouchSystemActor.EventQueryHasRuppe({'Value': 10}) {

                        call NpcCommon.NpcCommon_Receive_PlayerToNpc({'NpcReceiveASName': 'Receive', 'PaidRupee': -10, 'BeforeReceiveFrames': 0, 'NpcActor': ActorIdentifier(name="Npc_EventStarter"), 'IsTurn': True})

                        Npc_Hylia_Soldier_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Talk_05', 'MaintainPerformanceState': 0})
                        UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_Hylia_Soldier_009_Child_OpenTheGate'})
                        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_HrlCastle_0070'})
                    } else {
                        UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                        Npc_Hylia_Soldier_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Talk_07', 'ASName': '', 'MaintainPerformanceState': 0})
                        Npc_Hylia_Soldier_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'Act_Shoo', 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Talk_42', 'MaintainPerformanceState': 0})
                    }
                } else {
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
                    UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                    Npc_Hylia_Soldier_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Talk_04', 'ASName': 'Act_Shoo', 'MaintainPerformanceState': 0})
                }
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_Soldier_009_Child_Talk_Event2', 'Value': True, 'Index': -1})
                Npc_Hylia_Soldier_009_Child.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Talk_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})

                call NpcCommon.Npc_IsConfront_ForReceive({'NpcActor': ActorIdentifier(name="Npc_Hylia_Soldier_009_Child")})

                UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
                Npc_Hylia_Soldier_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Talk_02', 'ChoiceNumber': 2, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'MaintainPerformanceState': 0})
                goto Event8
            }
        } else
        Event41:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_Soldier_009_Child_FirstTalk'}) {
            if Npc_Hylia_Soldier_009_Child.EventQueryIsOnRecentTalkFlag() {
                Npc_Hylia_Soldier_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Talk_15', 'MaintainPerformanceState': 0})
            }
            if !EventWorldManagerController.EventQueryTimeDivision() {
                Npc_Hylia_Soldier_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Talk_16', 'MaintainPerformanceState': 0})
            } else {
                Npc_Hylia_Soldier_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Talk_03', 'MaintainPerformanceState': 0})
            }
            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_Hylia_Soldier_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Talk_14', 'ASName': 'Act_Shoo', 'MaintainPerformanceState': 0})
            } else {
                Npc_Hylia_Soldier_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Talk_10', 'ASName': 'Act_Shoo', 'MaintainPerformanceState': 0})
            }
        } else
        if !Npc_Hylia_Soldier_009_Child.EventQueryIsOnRecentTalkFlag() {
            Npc_Hylia_Soldier_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 6, 'ChoiceLabel1': 5, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Talk_34', 'MaintainPerformanceState': 0})
            if !GameSystemActor.EventQueryTalkChoice2() {
                Event127:
                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkWonder', 'ClothWarpMode': 0})

                call NpcCommon.Npc_IsConfront({'NpcActor': ActorIdentifier(name="Npc_Hylia_Soldier_009_Child")})

                Npc_Hylia_Soldier_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Talk_31', 'MaintainPerformanceState': 0})
                Npc_Hylia_Soldier_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Shoo', 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Talk_33', 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_Hylia_Soldier_009_Child_FirstTalk'})
                Npc_Navi.EventNaviRequestBallonMessage({'Index': 164})
            } else {
                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
                Npc_Hylia_Soldier_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Shoo', 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Talk_35', 'MaintainPerformanceState': 0})
            }
        } else
        if !EventWorldManagerController.EventQueryTimeDivision() {
            Npc_Hylia_Soldier_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Talk_17', 'MaintainPerformanceState': 0})
        } else {
            Npc_Hylia_Soldier_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Talk_18', 'MaintainPerformanceState': 0})
        }
        Npc_Hylia_Soldier_009_Child.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Talk_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 6, 'ChoiceLabel1': 5, 'MaintainPerformanceState': 0})
        if !GameSystemActor.EventQueryTalkChoice2() {
            goto Event127
        } else {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
            Npc_Hylia_Soldier_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Talk_32', 'MaintainPerformanceState': 0})
            Npc_Hylia_Soldier_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Shoo', 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Talk_36', 'MaintainPerformanceState': 0})
        }
    } else
    goto Event41
}

void HavePlayedEvent.HyruleField_DoorOfTime_Escape_Talk() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'NaviChat_HyruleCastle_FoundBySecurity', 'Value': False})

    call Mask_All0()

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_Soldier_009_Child_SecondTalk'}) {
        Event38:
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_Hylia_Soldier_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Talk_26', 'MaintainPerformanceState': 0})
            Event57:
            if !GameSystemActor.EventQueryTalkChoice2() {
                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkWonder', 'ClothWarpMode': 0})
                if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                    Npc_Hylia_Soldier_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Talk_24', 'MaintainPerformanceState': 0})
                } else {
                    Npc_Hylia_Soldier_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Talk_25', 'MaintainPerformanceState': 0})
                }
                Event68:
                if !GameSystemActor.EventQueryRandomChoice2() {
                    Npc_Hylia_Soldier_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Talk_28', 'ASName': 'Act_Shoo', 'MaintainPerformanceState': 0})
                } else {
                    Npc_Hylia_Soldier_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Talk_30', 'ASName': 'Act_Shoo', 'MaintainPerformanceState': 0})
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_Soldier_009_Child_OpenTheGate'}) {
                Npc_Hylia_Soldier_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Talk_29', 'MaintainPerformanceState': 0})
            } else {
                Npc_Hylia_Soldier_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Talk_27', 'MaintainPerformanceState': 0})
            }
            goto Event68
        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DoorOfTime_IsAfterStep03_AND_SageOfForest_NotCompleted_Exp'}) {
            Npc_Hylia_Soldier_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Talk_13', 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'MaintainPerformanceState': 0})
        } else {
            Npc_Hylia_Soldier_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Talk_38', 'MaintainPerformanceState': 0})
        }
        goto Event57
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_Soldier_009_Child_FirstTalk'}) {
        Npc_Hylia_Soldier_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Talk_22', 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
    }
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_Hylia_Soldier_009_Child_SecondTalk'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_Hylia_Soldier_009_Child_FirstTalk'})
    goto Event38
}

void HrlCastle_CanbeStopped_Npc_Hylia_Soldier_009_01() {

    call Common.AirStartUp()


    call NpcCommon.Sub_CanbeStopped_Npc_01({'InstanceNameB': '', 'ActorNameB': 'Npc_Hylia_Soldier_009_Child', 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_Soldier_009_Child"), 'FirstGreeting_MesageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Talk_100', 'SecondMessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Talk_101'})

    Event98:
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'NaviChat_HyruleCastle_FoundBySecurity', 'Value': False})
}

void HrlCastle_CanbeStopped_Npc_Hylia_Soldier_009_02() {

    call Common.AirStartUp()


    call NpcCommon.Sub_CanbeStopped_Npc_02({'InstanceNameB': '', 'ActorNameB': 'Npc_Hylia_Soldier_009_Child', 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_Soldier_009_Child"), 'FirstGreeting_MesageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Talk_102', 'SecondMessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Talk_103'})

    goto Event98
}

void Mask_All() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_GlassTruth'}) {
        Event109:

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_Soldier009_GlassTruth'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Hylia_Soldier009_GlassTruth'})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:GlassTruth', 'MaintainPerformanceState': 0})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_09', 'MaintainPerformanceState': 0})
        }
    } else {
        switchcall Mask_Talk() {
          case 4151362380:
            if !Npc_EventStarter.EventNPCQueryCheckTargetActorForLookIK({'InstanceName': '', 'ActorName': 'Player_Event'}) {
                Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsConfront': False, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            } else {
                Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsConfront': False, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_10', 'MaintainPerformanceState': 0})
            }
        }
    }
}

void Mask_Talk() {
    if !Npc_EventStarter.EventNPCQueryCheckTargetActorForLookIK({'InstanceName': '', 'ActorName': 'Player_Event'}) {
        switchcall NpcCommon.Mask_Talk_Common_With_InitTalk({'Arg_Turn_For_IgnoreMaskTalk': 4, 'Arg_Turn_For_MaskTalk': 4, 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_04', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_08', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_09', 'ASName': 'TalkMonolog', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_103', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_05_01'}) {
          case 4205900657:
            Event118:
            return 4151362380
          case 4155567800:
            Event119:
            return 2799305849
        }
    } else {
        switchcall NpcCommon.Mask_Talk_Common_With_InitTalk({'Arg_Turn_For_IgnoreMaskTalk': 4, 'Arg_Turn_For_MaskTalk': 4, 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_04', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_05', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_08', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_09', 'ASName': 'TalkMonolog', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_103'}) {
          case 4205900657:
            goto Event118
          case 4155567800:
            goto Event119
        }
    }
}

void Mask_All0() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_GlassTruth'}) {
        goto Event109
    } else {
        switchcall Mask_Talk0() {
          case 4151362380:
            if !Npc_EventStarter.EventNPCQueryCheckTargetActorForLookIK({'InstanceName': '', 'ActorName': 'Player_Event'}) {
                Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsConfront': False, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            } else {
                Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsConfront': False, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_10', 'MaintainPerformanceState': 0})
            }
        }
    }
}

void Mask_Talk0() {
    if !Npc_EventStarter.EventNPCQueryCheckTargetActorForLookIK({'InstanceName': '', 'ActorName': 'Player_Event'}) {
        switchcall NpcCommon.Mask_Talk_Common_With_InitTalk({'Arg_Turn_For_IgnoreMaskTalk': 4, 'Arg_Turn_For_MaskTalk': 4, 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_04', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_07', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_09', 'ASName': 'TalkMonolog', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_103', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_08_02', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_05_01'}) {
          case 4205900657:
            Event100:
            return 4151362380
          case 4155567800:
            Event101:
            return 2799305849
        }
    } else {
        switchcall NpcCommon.Mask_Talk_Common_With_InitTalk({'Arg_Turn_For_IgnoreMaskTalk': 4, 'Arg_Turn_For_MaskTalk': 4, 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_04', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_07', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_09', 'ASName': 'TalkMonolog', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_103', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_05_02', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_009_Child:Mask_08_02'}) {
          case 4205900657:
            goto Event100
          case 4155567800:
            goto Event101
        }
    }
}
