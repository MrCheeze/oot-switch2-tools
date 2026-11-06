-------- EventFlow: Npc_Hylia_Zelda_Child --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetGameDataInt']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool', 'EventQueryGameDataIntBranch']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_Impa_Child
entrypoint: None()
actions: ['EventTalk', 'EventTriggerChangeEmotion', 'EventAIScheduleWarpToAnchor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToStarterLinkAnchor', 'EventPlayerPlayASForFlowchart', 'EventPlayerUnequip', 'EventTriggerPlayerEventStartWithDrawn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventBustShotCamera', 'EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventSendEventTalkMessageToPlayerCamera', 'EventSendImmediateUpdatePosEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerSendErrorToEventResource']
queries: ['EventQueryTalkChoice3', 'EventQueryTalkChoice4', 'EventQueryRandomChoice2', 'EventQueryRandomChoice3', 'EventQueryRandomChoice4']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_Zelda_Child
entrypoint: None()
actions: ['EventTalk', 'EventExecuteAIScheduleReceiveInterestInfo']
queries: ['EventQueryAvoidDuplicationRandomChoice2', 'EventQueryAIScheduleGetReceiveInterestTypeAll', 'EventQueryAvoidDuplicationRandomChoice3']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventOverwriteSceneShadingParams', 'EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Talk() {

    call Mask_All()

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DoorOfTime_IsAfter_Step01_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfFire_IsCompleted_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_Zelda_Child_Talk_Event54', 'Index': -1}) {
                Event82:
                if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {

                    call InterestTalk_Zelda_Child()

                    Event155:
                    switch GameSystemActor.EventQueryRandomChoice3() {
                      case 0:

                        call aboutGeneral({'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_15'})

                      case 1:

                        call aboutGeneral({'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_14'})

                      case 2:

                        call aboutGeneral({'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_34'})

                    }
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_17', 'MaintainPerformanceState': 0})

                    call InterestTalk_Zelda_Child()


                    call aboutGeneral({'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_00'})

                }
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_Zelda_Child_Talk_Event54', 'Value': True, 'Index': -1})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_18', 'MaintainPerformanceState': 0})

                call AboutWaterStone()

                Event113:

                call InterestTalk_Zelda_Child_ChangeTheTopic()

            }
        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfWater_IsCompleted_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_Zelda_Child_Talk_Event52', 'Index': -1}) {
                goto Event82
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_Zelda_Child_Talk_Event52', 'Value': True, 'Index': -1})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_18', 'MaintainPerformanceState': 0})

                call AboutFireStone()

                goto Event113
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_Zelda_Child_Talk_Event50', 'Index': -1}) {
            goto Event82
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_Zelda_Child_Talk_Event50', 'Value': True, 'Index': -1})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_17', 'MaintainPerformanceState': 0})

            call InterestTalk_Zelda_Child()

            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_02', 'MaintainPerformanceState': 0})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.Dm_MelodyGet_Zelda'}) {
        Event49:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_Zelda_Child_Talk_Event29', 'Index': -1}) {

            call InterestTalk_Zelda_Child()

            goto Event155
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_Zelda_Child_Talk_Event29', 'Value': True, 'Index': -1})

            call InterestTalk_Zelda_Child()


            call aboutGeneral({'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_03'})

        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_Zelda_Child_Talk_Event5', 'Index': -1}) {
        goto Event49
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_Zelda_Child_Talk_Event5', 'Value': True, 'Index': -1})
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})

        call aboutGeneral({'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_19'})

    }
}

void Zelda_CanbeStopped_Impa_01() {
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HavePlayedEvent.HyruleCastle_Zelda_CanbeStopped_Impa_01', 'Index': -1}) {
        Event44:
        Player_Event.EventTriggerPlayerEventStartWithDrawn()

        call Common.AirStartUp_WaitForAttack()


        call InitTalk.InitTalk_OnEvent_NoCamera_PlayerTriggerActionOnly({'Arg_Turn': 4, 'FirstGreeting_MesageId': 'EventFlowMsg/Npc_Hylia_Impa_Child:Talk_06', 'ActorName': 'Npc_Hylia_Impa_Child', 'InstanceName': '', 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_Impa_Child")})

        EventCamera.EventBustShotCamera({'TargetActorName': 'Npc_Hylia_Impa_Child', 'IsWaitEnd': True, 'TargetActorInstanceName': '', 'Latitude': 0.0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Longitude': 5.0, 'MoveTime': 0, 'Radius': 1.2000000476837158, 'TargetOffset': [0.0, -0.4000000059604645, 2.0]})

        fork {
            if !GameSystemActor.EventQueryRandomChoice2() {
                Npc_Hylia_Impa_Child.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_Impa_Child:Talk_07', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
            } else {
                Npc_Hylia_Impa_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Impa_Child:Talk_14', 'MaintainPerformanceState': 0})
            }
            UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        } {

            call Sub_CanbeStopped_Impa_Camera({'MoveTime': 120})

        }

        Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'NotChangeRot': False, 'InstanceName': 'Zelda_CanbeStopped_Impa_LinkWarpPosition', 'UseDemoWait': False, 'ASCommand': 'EvtWait'})

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            EventCamera.EventMoveToTargetPosCamera({'PosVector': [6.320000171661377, 127.55000305175781, -236.4600067138672], 'AtVector': [5.139999866485596, 128.02000427246094, -234.4600067138672], 'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {

            call Common_Camera_Pln.CameraDoF_Event_Common()

        }

        Npc_Hylia_Impa_Child.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_Hylia_Impa_Child.EventAIScheduleWarpToAnchor({'AnchorType': 0, 'IsWaitEnd': True, 'InstanceName': '', 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'ClothWarpMode': -1})
        EventSystemActor.EventWait({'Frames': 120, 'IsWaitEnd': True})
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 0})
        EventCamera.EventSendImmediateUpdatePosEventTalkMessageToPlayerCamera({'IsWaitEnd': True})
        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_Hylia_Impa_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Impa_Child:Talk_16', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HavePlayedEvent.HyruleCastle_Zelda_CanbeStopped_Impa_01', 'Index': -1, 'Value': False})
    } else {
        Player_Event.EventTriggerPlayerEventStartWithDrawn()

        call Common.AirStartUp_WaitForAttack()


        call InitTalk.InitTalk_OnEvent_NoCamera_PlayerTriggerActionOnly({'Arg_Turn': 4, 'FirstGreeting_MesageId': 'EventFlowMsg/Npc_Hylia_Impa_Child:Talk_04', 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_Impa_Child"), 'ActorName': 'Npc_Hylia_Impa_Child', 'InstanceName': ''})


        call Sub_CanbeStopped_Impa_Camera({'MoveTime': 60})

        if !GameSystemActor.EventQueryRandomChoice2() {
            Npc_Hylia_Impa_Child.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_Impa_Child:Talk_05', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
        } else {
            Npc_Hylia_Impa_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Impa_Child:Talk_13', 'MaintainPerformanceState': 0})
        }

        fork {
            PostProcessingActor.EventNorifyCutChangeForGraphics()
        } {
            PostProcessingActor.EventOverwriteSceneShadingParams({'IsOverwriteInnerRatio': True, 'IsOverwriteShadowRatio': True, 'IsOverwriteBakeLightLuminanceRatio': True, 'InnerRatio': 0.0, 'ShadowRatio': 0.0, 'BakeLightLuminanceRatio': 1.0})
        }

        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HavePlayedEvent.HyruleCastle_Zelda_CanbeStopped_Impa_01', 'Index': -1, 'Value': True})
    }
}

void Sub_CanbeStopped_Impa_Camera() {
    EventCamera.EventBustShotCamera({'TargetActorName': 'Npc_Hylia_Impa_Child', 'IsWaitEnd': True, 'TargetActorInstanceName': '', 'Latitude': 0.0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Longitude': 5.0, 'MoveTime': 'MoveTime', 'Radius': 1.2000000476837158, 'TargetOffset': [0.0, -0.4000000059604645, 1.0]})
}

void Zelda_CanbeStopped_Impa_02() {
    goto Event44
}

void AboutFireStone() {
    if !Npc_Hylia_Zelda_Child.EventQueryAvoidDuplicationRandomChoice2() {
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_22', 'MaintainPerformanceState': 0})
    } else {
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_25', 'MaintainPerformanceState': 0})
    }
    if !GameSystemActor.EventQueryRandomChoice2() {
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_23', 'MaintainPerformanceState': 0})
    } else {
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_26', 'MaintainPerformanceState': 0})
    }
    if !GameSystemActor.EventQueryRandomChoice2() {
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_24', 'MaintainPerformanceState': 0})
    } else {
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_27', 'MaintainPerformanceState': 0})
    }
}

void AboutWaterStone() {
    if !Npc_Hylia_Zelda_Child.EventQueryAvoidDuplicationRandomChoice2() {
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_28', 'MaintainPerformanceState': 0})
    } else {
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_31', 'MaintainPerformanceState': 0})
    }
    if !GameSystemActor.EventQueryRandomChoice2() {
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_29', 'MaintainPerformanceState': 0})
    } else {
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_32', 'MaintainPerformanceState': 0})
    }
    if !GameSystemActor.EventQueryRandomChoice2() {
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_30', 'MaintainPerformanceState': 0})
    } else {
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_33', 'MaintainPerformanceState': 0})
    }
    if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfWater_IsAfter_Ready_Exp'}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'DoorOfTime', 'IsIgnoreChallengeProgressUI': True, 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'StepName': 'Srep2_1_1'})
    }
}

void Mask_Talk() {
    switchcall NpcCommon.Mask_Talk_Common_With_InitTalk({'Arg_Turn_For_IgnoreMaskTalk': 4, 'Arg_Turn_For_MaskTalk': 4, 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Mask_04', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Mask_05', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Mask_08', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Mask_09', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Mask_103', 'ASName': 'TalkMonolog'}) {
      case 0xfab0f371:
        return fnv1a("Mask_Talk")
      case 0xf7b0eeb8:
        return 0xa6da0479
    }
}

void Mask_All() {
    switchcall Mask_Talk() {
      case fnv1a("Mask_Talk"):
        GameSystemActor.EventTriggerSendErrorToEventResource({'Title': 'まことのお面入手とゼルダ姫の会話は両立しません'})
    }
}

void InterestTalk_Zelda_Child() {
    if Npc_Hylia_Zelda_Child.EventQueryAIScheduleGetReceiveInterestTypeAll() == 29 {
        Event114:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_Zelda_Child_Sub_InterestTalk_Zelda_Child_Event102', 'Index': -1}) {
            switch Npc_Hylia_Zelda_Child.EventQueryAvoidDuplicationRandomChoice3() {
              case 0:
                Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:ZeldaLullabyTalk_03', 'MaintainPerformanceState': 0})
                Event100:
                Npc_Hylia_Zelda_Child.EventExecuteAIScheduleReceiveInterestInfo({'IsWaitEnd': True})
              case 1:
                Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:ZeldaLullabyTalk_04'})
                goto Event100
              case 2:
                Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:ZeldaLullabyTalk_05'})
                goto Event100
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_Zelda_Child_Sub_InterestTalk_Zelda_Child_Event102', 'Value': True, 'Index': -1})
            Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:ZeldaLullabyTalk_01', 'MaintainPerformanceState': 0})
            goto Event100
        }
    }
}

void InterestTalk_Zelda_Child_ChangeTheTopic() {
    if Npc_Hylia_Zelda_Child.EventQueryAIScheduleGetReceiveInterestTypeAll() == 29 {
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:ZeldaLullabyTalk_00'})
        goto Event114
    }
}

void aboutGeneral() {
    Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 7, 'ChoiceLabel3': 5, 'ChoiceLabel1': 6, 'MaintainPerformanceState': 0, 'MessageId': 'MessageId'})
    switch GameSystemActor.EventQueryTalkChoice3() {
      case 0:

        call NpcCommon.Npc_IsConfront({'NpcActor': ActorIdentifier(name="Npc_Hylia_Zelda_Child")})

        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 4, 'ChoiceLabel1': 0, 'ChoiceLabel3': 2, 'ChoiceLabel4': 8, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_05', 'ChoiceLabel2': 1})
        Event36:
        switch GameSystemActor.EventQueryTalkChoice4() {
          case 0:

            call Intro({'MessageId01': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_43', 'MessageId02': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_44', 'MessageId03': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_45'})

            Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_07', 'MaintainPerformanceState': 0})
            Event168:

            call ThatsAll({'ThatsallTalk_GameDateName': 'Hylia_Zelda_ThatsallTalk_Int'})

            switch Npc_Hylia_Zelda_Child.EventQueryAvoidDuplicationRandomChoice3() {
              case 0:
                Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 4, 'ChoiceLabel1': 0, 'ChoiceLabel3': 2, 'ChoiceLabel4': 8, 'MaintainPerformanceState': 0, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_15'})
                goto Event36
              case 1:
                Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 4, 'ChoiceLabel1': 0, 'ChoiceLabel3': 2, 'ChoiceLabel4': 8, 'MaintainPerformanceState': 0, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_34'})
                goto Event36
              case 2:
                Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 4, 'ChoiceLabel1': 0, 'ChoiceLabel3': 2, 'ChoiceLabel4': 8, 'MaintainPerformanceState': 0, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_35'})
                goto Event36
            }
          case 1:

            call Intro({'MessageId01': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_47', 'MessageId02': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_48', 'MessageId03': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_49'})

            Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_08', 'MaintainPerformanceState': 0})
            goto Event168
          case 2:

            call Intro({'MessageId01': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_51', 'MessageId02': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_52', 'MessageId03': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_53'})

            Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_09', 'MaintainPerformanceState': 0})
            goto Event168
          case 3:
            Event120:
            switch GameSystemActor.EventQueryRandomChoice3() {
              case 0:

                call aboutGeneral({'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_20'})

              case 1:

                call aboutGeneral({'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_37'})

              case 2:

                call aboutGeneral({'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_38'})

            }
        }
      case 1:

        call NpcCommon.Npc_IsConfront({'NpcActor': ActorIdentifier(name="Npc_Hylia_Zelda_Child")})

        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 4, 'ChoiceNumber': 3, 'ChoiceLabel3': 8, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_06', 'ChoiceLabel1': 3})
        Event145:
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:

            call Intro({'MessageId01': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_55', 'MessageId02': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_56', 'MessageId03': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_57'})

            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfFire_IsCompleted_Exp'}) {

                call AboutWaterStone()

                Event104:

                call ThatsAll({'ThatsallTalk_GameDateName': 'Hylia_Zelda_ThatsallTalk_Int'})

                switch Npc_Hylia_Zelda_Child.EventQueryAvoidDuplicationRandomChoice3() {
                  case 0:
                    Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 4, 'ChoiceNumber': 3, 'ChoiceLabel3': 8, 'MaintainPerformanceState': 0, 'ChoiceLabel1': 3, 'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_15'})
                    goto Event145
                  case 1:
                    Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 4, 'ChoiceNumber': 3, 'ChoiceLabel3': 8, 'MaintainPerformanceState': 0, 'ChoiceLabel1': 3, 'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_34'})
                    goto Event145
                  case 2:
                    Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 4, 'ChoiceNumber': 3, 'ChoiceLabel3': 8, 'MaintainPerformanceState': 0, 'ChoiceLabel1': 3, 'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_35'})
                    goto Event145
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfWater_IsCompleted_Exp'}) {

                call AboutFireStone()

            } else {
                Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_10', 'MaintainPerformanceState': 0})
            }
            goto Event104
          case 1:

            call Intro({'MessageId01': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_59', 'MessageId02': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_60', 'MessageId03': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_61'})

            Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_11', 'MaintainPerformanceState': 0})
            goto Event104
          case 2:
            goto Event120
        }
      case 2:
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': True, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
        if !Npc_Hylia_Zelda_Child.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_13', 'MaintainPerformanceState': 0})
        } else {
            Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_36'})
        }
    }
}

void ThatsAll() {
    switch GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'ThatsallTalk_GameDateName'}) {
      case 0:
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_39', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0})
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'ThatsallTalk_GameDateName', 'Value': 1})
      case 1:
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_41', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0})
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'ThatsallTalk_GameDateName', 'Value': 2})
      case 2:
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_40', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0})
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'ThatsallTalk_GameDateName', 'Value': 3})
      case 3:
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_41', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0})
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'ThatsallTalk_GameDateName', 'Value': 0})
      case [4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15]:
        GameSystemActor.EventTriggerSendErrorToEventResource({'Title': 'ゼルダ伝承話 終了時の指定値がおかしい'})
    }
}

void Intro() {
    switch GameSystemActor.EventQueryRandomChoice4() {
      case 0:
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Zelda_Child:Talk_21'})
      case 1:
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'MessageId01'})
      case 2:
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'MessageId02'})
      case 3:
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'MessageId03'})
    }
}
