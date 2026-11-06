-------- EventFlow: Npc_Hylia_004_Child --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventTriggerChangeEmotion']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAvoidDuplicationRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool', 'EventQueryIsBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_004_Child
entrypoint: None()
actions: []
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerTurnAndLook']
queries: ['EventQueryIsDirToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraToSavePoint', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventTriggerCameraSavePoint']
queries: ['EventQueryCameraCheckRayCastForMoveToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_EventStarter[SuggestCamera_Start_Modified(NpcActor)]
entrypoint: SuggestCamera_Start_Modified(NpcActor)
actions: ['EventTriggerChangeEmotion', 'EventNPCSwitchTemporarilyLookIKVariationStart', 'EventTriggerLookAtObject', 'EventNPCTurnToTarget']
queries: []
params: None

void Talk() {

    call InitTalk_OnEvent_FixCamera_Npc_Hylia_004_Only()


    call Reset()

    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DoorOfTime_IsAfter_Step03_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfForest_IsCompleted_Exp'}) {
            Event22:

            call NormalTalk()

        } else {

            call GetStones()

        }
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': True, 'KeepManualModeFrame': 120.0, 'AfterKeepEndInterpolateCountScale': 3.0, 'IsKeepWithRelativePos': False})
    } else {
        goto Event22
    }
}

void Near() {

    call Reset()

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DoorOfTime_IsAfter_Step03_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfForest_IsCompleted_Exp'}) {
            Event51:
            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_004_Child:Near_07'})
            } else {
                Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_004_Child:Near_06'})
            }
        } else
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_004_Child:Near_02'})
        } else {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_004_Child:Near_05'})
        }
    } else
    goto Event51
}

void NormalTalk() {

    call NpcCommon.Mask_Truth({'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_004_Child:Mask_05', 'ASName': 'Act_Look_Sunrise'})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveTalked_Special.Npc_Hylia_004_Child_NormalTalk_Event8'}) {
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_004_Child:Talk_23', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_004_Child:Talk_24', 'MaintainPerformanceState': 0})
        }
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_004_Child:Talk_20', 'MaintainPerformanceState': 0})
        EventCamera.EventTriggerCameraSavePoint()
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

        fork {
            Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'WorldPos': [0.0, 0.0, 0.0], 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'Hylia004_TurnTarget', 'IsDoNavi': True})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})

            fork {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'Hylia004_mod_atPos', 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'Actor1InstanceName': 'Hylia004_mod_camPos01', 'IsEnableRevertFast': False})
            } {

                call Common_Camera_Pln.CameraDoF_Default()

            }


            fork {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'Hylia004_mod_atPos', 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'Actor1InstanceName': 'Hylia004_mod_camPos02', 'MoveTime': 180, 'IsEnableRevertFast': False})
            } {

                call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 180})

            }

        }

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_004_Child:Talk_21', 'MaintainPerformanceState': 0})

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})
            Npc_EventStarter.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            Player_Event.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'IsWaitEnd': False, 'Target': 3, 'ActorName': 'Npc_Hylia_004_Child', 'InstanceName': '', 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': False})

            call NaviEventCommon.Navi_ActorWatch({'InstanceName': '', 'Target': 2, 'ActorName': 'Player_Event'})

        } {

            call Common_Camera_Pln.CameraDoF_Default()

        }

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_004_Child:Talk_22', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'HaveTalked_Special.Npc_Hylia_004_Child_NormalTalk_Event8'})
    }
}

void GetStones() {

    call NpcCommon.Mask_Truth({'ASName': 'Act_Look_Sunrise', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_004_Child:Mask_05_02'})

    if !Npc_Hylia_004_Child.EventQueryIsOnRecentTalkFlag()
    && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_004_Child_GetStones_Event24', 'Index': -1}) {
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_004_Child:Talk_12', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_004_Child:Talk_13', 'MaintainPerformanceState': 0})
        }
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_004_Child:Talk_10', 'MaintainPerformanceState': 0})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_004_Child:Talk_11', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_004_Child_GetStones_Event24', 'Value': True, 'Index': -1})
    }
}

void Reset() {
    if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_004_Child_GetStones_Event24', 'Index': -1, 'Value': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_004_Child_NormalTalk_Event8', 'Index': -1, 'Value': False})
    }
}

void InitTalk_OnEvent_FixCamera_Npc_Hylia_004_Only() {

    fork {

        call InitTalk.InitTalk_OnEvent_NoCamera_NoTalk({'Arg_Greeting': 4, 'Arg_Turn': 0, 'Arg_Actor': ActorIdentifier(name="Npc_EventStarter"), 'ActorName': 'Npc_EventStarter', 'InstanceName': ''})

    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVector': [0.36000001430511475, 0.49000000953674316, -2.109999895095825], 'TargetFovy': 50.4900016784668, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 45, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'AtVector': [0.0, 1.5, 0.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }

}

void SuggestCamera_Start_Modified() {
    if !GameDataActor.EventQueryIsBool({'BoolValue': 'IsNeedCameraSave'}) {
        EventCamera.EventTriggerCameraSavePoint()
    }
    Npc_EventStarter[SuggestCamera_Start_Modified(NpcActor)].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    Npc_EventStarter[SuggestCamera_Start_Modified(NpcActor)].EventNPCSwitchTemporarilyLookIKVariationStart({'IsWaitEnd': True})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'FovySetType': 1, 'TargetFovy': 0.0, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'IsEnableRevertFast': False})
    } {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Hylia_011_Child_Guide', 'Index': -1}) {

            call Common_Camera_Pln.CameraDoF_Default()

        } else {

            call Common_Camera_Pln.CameraDoF_Event_Common()

        }
    }


    fork {
        if !GameDataActor.EventQueryIsBool({'BoolValue': 'IsNpcLookOnly'}) {
            Npc_EventStarter[SuggestCamera_Start_Modified(NpcActor)].EventTriggerLookAtObject({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'WorldPos': [0.0, 0.0, 0.0], 'ResetArriveTransformFixed': False, 'Target': 'TurnTarget', 'ActorName': 'TurnTargetActorName', 'InstanceName': 'TurnTargetInstanceName'})
        } else {
            Npc_EventStarter[SuggestCamera_Start_Modified(NpcActor)].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'WorldPos': [0.0, 0.0, 0.0], 'IsConfront': False, 'Target': 'TurnTarget', 'ActorName': 'TurnTargetActorName', 'InstanceName': 'TurnTargetInstanceName'})
        }
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'CameraTargetActorName', 'ActorInstanceName': 'CameraTargetInstanceName', 'VectorSetType': 3, 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [0.0, 0.0, 0.0]}) {

            fork {
                Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'WorldPos': [0.0, 0.0, 0.0], 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'Target': 'TurnTarget', 'ActorName': 'TurnTargetActorName', 'InstanceName': 'TurnTargetInstanceName', 'IsDoNavi': True})
            } {

                fork {
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                    EventCamera.EventMoveToTargetPosCamera({'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'PosVector': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'PosVectorSetType': 3, 'EndRecelerateRate': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 4, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1ActorName': 'CameraTargetActorName', 'Actor1InstanceName': 'CameraTargetInstanceName', 'MoveTotargetPosType': 'MoveTotargetPosType', 'Actor2ActorName': 'CameraAtActorName', 'Actor2InstanceName': 'CameraAtInstanceName', 'CameraCollisionMode': 0, 'MoveTime': 0, 'CameraCollisionLookAtActor': 0, 'IsEnableRevertFast': False})
                } {

                    call Common_Camera_Pln.CameraDoF_Default()

                }

                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            }

        } else
        if !GameDataActor.EventQueryIsBool({'BoolValue': 'IsSlowMoveEnable'}) {
            if !Player_Event.EventQueryIsDirToTarget({'Target': 5, 'WorldPos': [0.0, 0.0, 0.0], 'ActorName': 'DestinationAnchor', 'AngleThreshold': 90.0, 'InstanceName': 'CameraAtInstanceName'}) {
                if !Player_Event.EventQueryIsDirToTarget({'WorldPos': [0.0, 0.0, 0.0], 'AngleThreshold': 90.0, 'InstanceName': '', 'Target': 3, 'ActorName': 'PlayerCamera'}) {
                    Event69:

                    fork {
                        Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'WorldPos': [0.0, 0.0, 0.0], 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'Target': 'TurnTarget', 'ActorName': 'TurnTargetActorName', 'InstanceName': 'TurnTargetInstanceName', 'IsDoNavi': True})
                    } {
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

                        fork {
                            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                            EventCamera.EventMoveToTargetPosCamera({'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'PosVector': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'PosVectorSetType': 3, 'EndRecelerateRate': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 4, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1ActorName': 'CameraTargetActorName', 'Actor1InstanceName': 'CameraTargetInstanceName', 'MoveTotargetPosType': 'MoveTotargetPosType', 'Actor2ActorName': 'CameraAtActorName', 'Actor2InstanceName': 'CameraAtInstanceName', 'MoveTime': 'FrmMove_Slow', 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'IsEnableRevertFast': False})
                        } {

                            call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 'FrmMove_Slow'})

                        }

                    }

                } else {
                    Event58:

                    fork {
                        Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'WorldPos': [0.0, 0.0, 0.0], 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'Target': 'TurnTarget', 'ActorName': 'TurnTargetActorName', 'InstanceName': 'TurnTargetInstanceName', 'IsDoNavi': True})
                    } {
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

                        fork {
                            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                            EventCamera.EventMoveToTargetPosCamera({'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'PosVector': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'PosVectorSetType': 3, 'EndRecelerateRate': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 4, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1ActorName': 'CameraTargetActorName', 'Actor1InstanceName': 'CameraTargetInstanceName', 'MoveTotargetPosType': 'MoveTotargetPosType', 'Actor2ActorName': 'CameraAtActorName', 'Actor2InstanceName': 'CameraAtInstanceName', 'MoveTime': 'FrmMove_Normal', 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'IsEnableRevertFast': False})
                        } {

                            call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 'FrmMove_Normal'})

                        }

                    }

                }
            } else
            if !Player_Event.EventQueryIsDirToTarget({'WorldPos': [0.0, 0.0, 0.0], 'AngleThreshold': 90.0, 'InstanceName': '', 'Target': 3, 'ActorName': 'PlayerCamera'}) {
                goto Event58
            } else {
                goto Event69
            }
        } else {
            goto Event58
        }
    }

}
