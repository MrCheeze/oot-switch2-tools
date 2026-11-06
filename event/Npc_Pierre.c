-------- EventFlow: Npc_Pierre --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerSetPierreMelodyGameData', 'EventWait', 'EventCloseMessageDialog', 'EventTriggerResetPlayedNoteAppliedPitch']
queries: ['EventQueryCheckForRecordingPierre', 'EventQueryRandomChoice2', 'EventQueryTalkChoice2', 'EventQueryIsDistanceBetweenActorsClose', 'EventQueryListenedScarecrowPfmUntilEnd']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerAddOrSubGameDataInt', 'EventTriggerSetGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Pierre
entrypoint: None()
actions: ['EventTalk', 'EventTriggerSetModelLodManual']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAvoidDuplicationRandomChoice2', 'EventNPCQueryCheckFrontToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Bonooru
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerTurnAndLook', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerPlayASForFlowchart', 'EventPlayerSeparatedFromSpeaker', 'EventTriggerParticipateEvent', 'EventPlayerPlayOcarinaFree']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventModelAnime': 'Work/Model/Event/Npc_Pierre_BlewOcarinaByPlayer/Npc_Pierre_BlewOcarinaByPlayer_Player_Child/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Npc_Pierre_BlewOcarinaByPlayer_Player_Child.root.as'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventSetUIMessageDialogScreenSLinkIsKakashiPlayProperty']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Talk() {

    call Mask_All()

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Pierre_First'})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Askpierre_listentothesong', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Askpierre_listentothesong_Justafter', 'Index': -1}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'NPC_Pierre_TalkFlag'}) {
                Event14:
                Npc_Pierre.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Pierre:Talk_06', 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'MaintainPerformanceState': 0})
                Event31:
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SubEvent_GetScarecrow_CloseToScarecrow'}) {
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Pierre_KeepAway'}) {
                            Event84:
                            if !Npc_Pierre.EventNPCQueryCheckFrontToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'AngleThreshold': 15.0}) {
                                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': '', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTime': 40, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Npc_Pierre', 'AtVector': [0.0, 0.8999999761581421, 0.0], 'PosVector': [-2.0, 1.5, 5.300000190734863], 'IsEnableRevertFast': False})
                            } else {
                                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': '', 'PosVector': [-0.699999988079071, 1.3600000143051147, 5.789999961853027], 'AtVector': [-0.3100000023841858, 1.190000057220459, 2.619999885559082], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Npc_Pierre', 'MoveTime': 60, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                            }

                            call NearScarecrow()

                            Npc_Pierre.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Pierre:Talk_51', 'MaintainPerformanceState': 0})
                            Event71:

                            call Dm_SY_Ocarina_Scarecrow.PlayAutoPierre()

                            SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'Dm:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
                            UISystemActor.EventSetUIMessageDialogScreenSLinkIsKakashiPlayProperty({'Bool': True})
                            if !GameSystemActor.EventQueryListenedScarecrowPfmUntilEnd() {
                                Npc_Pierre.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Pierre:Talk_03', 'MaintainPerformanceState': 0})
                            } else {
                                Npc_Pierre.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Pierre:Talk_10', 'ASName': 'Act_Failure', 'IsPlayASAllSlot': True})
                            }
                            UISystemActor.EventSetUIMessageDialogScreenSLinkIsKakashiPlayProperty({'Bool': False})
                        } else {
                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Pierre_KeepAway'})
                            Npc_Pierre.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Pierre:Talk_50', 'MaintainPerformanceState': 0})
                            goto Event84
                        }
                    } else {
                        Npc_Pierre.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Pierre:Talk_12', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0})
                        if !Npc_Pierre.EventNPCQueryCheckFrontToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'AngleThreshold': 15.0}) {
                            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': '', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTime': 40, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Npc_Pierre', 'AtVector': [0.0, 0.8999999761581421, 0.0], 'PosVector': [-2.0, 1.5, 5.300000190734863], 'IsEnableRevertFast': False})
                        } else {
                            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': '', 'PosVector': [-0.699999988079071, 1.3600000143051147, 5.789999961853027], 'AtVector': [-0.3100000023841858, 1.190000057220459, 2.619999885559082], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Npc_Pierre', 'MoveTime': 60, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                        }
                        goto Event71
                    }
                } else {
                    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkNo', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                    if !GameSystemActor.EventQueryRandomChoice2() {
                        Npc_Pierre.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Pierre:Talk_14', 'MaintainPerformanceState': 0})
                    } else {
                        Npc_Pierre.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Pierre:Talk_15', 'MaintainPerformanceState': 0})
                    }
                }
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'NPC_Pierre_TalkFlag', 'Index': -1, 'Value': True})
                Npc_Pierre.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Pierre:Talk_05', 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'MaintainPerformanceState': 0})
                goto Event31
            }
        } else
        if !Npc_Pierre.EventQueryIsOnRecentTalkFlag() {
            goto Event14
        } else {
            Npc_Pierre.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Pierre:Talk_04', 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'MaintainPerformanceState': 0})
        }
        goto Event31
    } else
    if !Npc_Pierre.EventQueryIsOnRecentTalkFlag() {
        if !Npc_Pierre.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_Pierre.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Pierre:Talk_07', 'MaintainPerformanceState': 0})
        } else {
            Npc_Pierre.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Pierre:Talk_11', 'MaintainPerformanceState': 0})
        }
    } else {
        Npc_Pierre.EventTalk({'MessageId': 'EventFlowMsg/Npc_Pierre:Talk_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
    }
}

void BlewOcarinaByPlayer() {
    Npc_Bonooru.EventTriggerParticipateEvent()
    Player_Event.EventTriggerParticipateEvent()
    Npc_Pierre.EventTriggerSetModelLodManual({'LodLevel': 0})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Pierre_First'}) {
        GameSystemActor.EventTriggerResetPlayedNoteAppliedPitch()

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': '', 'PosVector': [-0.699999988079071, 1.3600000143051147, 5.789999961853027], 'AtVector': [-0.3100000023841858, 1.190000057220459, 2.619999885559082], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 20, 'Actor1ActorName': 'Npc_Pierre', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {
            Player_Event.EventPlayerPlayOcarinaFree({'IsWaitEnd': True})
        } {

            call NaviEventCommon.Sub_InitTalkNavi_NPC2({'IsLookAtObject': True, 'LookAtTarget': 3, 'LookAtActorName': 'Npc_Pierre', 'LookAtInstanceName': ''})

        }

        if !Npc_Pierre.EventQueryAvoidDuplicationRandomChoice2() {

            fork {
                Npc_Pierre.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Pierre:Talk_09', 'MaintainPerformanceState': 0})
            } {
                EventSystemActor.EventWait({'Frames': 45, 'IsWaitEnd': True})
                Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'IsAllSlot': True, 'UseAnmDriven': True, 'ForceFadeFrame': -1.0, 'ASCommand': 'C01_Child_St', 'IsWaitEnd': False})
            }

        } else {

            fork {
                EventSystemActor.EventWait({'Frames': 45, 'IsWaitEnd': True})
                Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ForceFadeFrame': -1.0, 'ASCommand': 'C01_Child_St', 'IsWaitEnd': False, 'UseAnmDriven': True, 'IsAllSlot': True})
            } {
                Npc_Pierre.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Pierre:Talk_16', 'MaintainPerformanceState': 0})
            }

        }
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'CheckDistance': 2.0, 'ActorNameB': 'Npc_Pierre'}) {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

            call NearScarecrow()

            Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ForceFadeFrame': -1.0, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'C01_Child_Ed', 'IsWaitEnd': True})
            Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': 10.0, 'ASCommand': 'C01_Child_OW'})
            Event70:

            call Dm_SY_Ocarina_Scarecrow.RecordingOcarinaPlayForPierre()

            if !GameSystemActor.EventQueryCheckForRecordingPierre() {
                GameSystemActor.EventTriggerSetPierreMelodyGameData()
                Npc_Pierre.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Pierre:Talk_02', 'ASName': 'Act_Success', 'MaintainPerformanceState': 0})
                Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'IsAllSlot': True, 'ASCommand': 'Wait', 'ClothWarpMode': 0})

                call Dm_SY_Ocarina_Scarecrow.PlayAutoPierre()

                SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'Dm:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
                UISystemActor.EventSetUIMessageDialogScreenSLinkIsKakashiPlayProperty({'Bool': True})
                Npc_Pierre.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Success', 'MessageId': 'EventFlowMsg/Npc_Pierre:Talk_18', 'MaintainPerformanceState': 0})
                UISystemActor.EventSetUIMessageDialogScreenSLinkIsKakashiPlayProperty({'Bool': False})
                Npc_Pierre.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Pierre:Talk_03', 'MaintainPerformanceState': 0})
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'AskBonooru_listentothesong'}) {
                    Event6:
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Askpierre_listentothesong', 'Index': -1, 'Value': True})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Pierre_First'})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Askpierre_listentothesong_Justafter', 'Index': -1, 'Value': True})
                } else {
                    Npc_Pierre.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Pierre:Talk_08', 'MaintainPerformanceState': 0})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

                    fork {
                        Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'WorldPos': [0.0, 0.0, 0.0], 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'BonooruCamera', 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': False})
                    } {
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 60, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 1, 'PosVector': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'PosVectorSetType': 3, 'CameraCollisionMode': 1, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor2ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'PierreViewPoint', 'Actor2InstanceName': 'PierreTargetPoint', 'AtVectorSetType': 4, 'AtVector': [0.0, 0.0, 0.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                    }

                    Npc_Pierre.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Pierre:Talk_19', 'MaintainPerformanceState': 0})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                    Player_Event.EventPlayerTurnAndLook({'ActorName': 'Npc_Pierre', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'Target': 3, 'IsDoNavi': False})
                    Npc_Pierre.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Pierre:Talk_20', 'MaintainPerformanceState': 0})
                    if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetScarecrow_IsAfter_Ready_Exp'}) {
                        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SubEvent_GetScarecrow', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'MeetPierre'})
                    }
                    goto Event6
                }
            } else {
                GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})

                fork {
                    Player_Event.EventPlayerPlayASForFlowchart({'ForceFadeFrame': 30.0, 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ASCommand': 'C01_Child_OcaEnd'})
                    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ASCommand': 'Wait', 'IsWaitEnd': False, 'ForceFadeFrame': 30.0})
                } {
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
                    if !GameSystemActor.EventQueryRandomChoice2() {
                        Npc_Pierre.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Failure', 'MessageId': 'EventFlowMsg/Npc_Pierre:Talk_17', 'MaintainPerformanceState': 0})
                    } else {
                        Npc_Pierre.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Pierre:Talk_10', 'ASName': 'Act_Failure', 'MaintainPerformanceState': 0})
                    }
                }

            }
        } else {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ForceFadeFrame': -1.0, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'C01_Child_Ed', 'IsWaitEnd': True})
            Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': 10.0, 'ASCommand': 'C01_Child_OW'})
            goto Event70
        }
    } else {

        call Dm_SY_Ocarina.PlayOcarinaFree({'HasRecommendedMelody': False, 'MelodyType': 12})

    }
}

void Mask_All() {
    switchcall Mask_Talk() {
      case 4151362380:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Pierre:Mask_10', 'MaintainPerformanceState': 0})
    }
}

void Mask_Talk() {
    switchcall NpcCommon.Mask_Talk_Common_With_InitTalk({'Arg_Turn_For_IgnoreMaskTalk': 4, 'Arg_Turn_For_MaskTalk': 4, 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Pierre:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Pierre:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Pierre:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Pierre:Mask_04', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Pierre:Mask_05', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Pierre:Mask_07', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Pierre:Mask_06', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Pierre:Mask_08', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Pierre:Mask_09', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Pierre:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Pierre:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Pierre:Mask_103', 'ASName': 'Wait'}) {
      case 4205900657:
        return 4151362380
      case 4155567800:
        return 2799305849
    }
}

void Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Pierre:Near_04'})
}

void NearScarecrow() {
    Npc_Pierre.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Pierre:Talk_49', 'MaintainPerformanceState': 0})
    Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'SubEvent_GetScarecrow_SafetyCounter', 'Index': -1, 'Value': 0})

    fork {
        Player_Event.EventPlayerSeparatedFromSpeaker({'MoveSpeed': 0.6000000238418579, 'IsWaitEnd': False, 'SeparatedDIstance': 2.5})
        Event79:
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'CheckDistance': 2.0, 'ActorNameB': 'Npc_Pierre'}) {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
            GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'SubEvent_GetScarecrow_SafetyCounter', 'Value': 1, 'Index': -1})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            switch GameDataActor.EventQueryIsGameDataInt({'Value': 30, 'Index': -1, 'GameDataName': 'SubEvent_GetScarecrow_SafetyCounter'}) {
              case 0:
                goto Event79
              case [1, 2]:
                Event76:
                Player_Event.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'ActorName': 'Npc_Pierre', 'IsDoNavi': False})
            }
        } else {
            goto Event76
        }
    } {

        call NaviEventCommon.Navi_followPlayer2()

    }

}
