-------- EventFlow: Npc_Bonooru --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk', 'EventTriggerForceSetMaskTalkFlag']
queries: ['EventQueryIsPlayingSameAS']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerSetScarecrowMelodyGameData', 'EventWait', 'EventWaitForActorPresence', 'EventCloseMessageDialog', 'EventTriggerControllerRumble', 'EventTriggerResetPlayedNoteAppliedPitch']
queries: ['EventQueryMelodyTypeForNormal', 'EventQueryCheckForRecordingBonooru', 'EventQueryRandomChoice2', 'EventQueryIsRecommendedMelody', 'EventQueryIsDistanceBetweenActorsClose', 'EventQueryListenedScarecrowPfmUntilEnd']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerAddOrSubGameDataInt', 'EventTriggerSetGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayOcarinaFree', 'EventPlayerTurnAndLook', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerLookAtObject', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerSeparatedFromSpeaker', 'EventTriggerParticipateEvent', 'EventPlayerWarpToTargetActor', 'EventGoOffstageForUser']
queries: ['EventQueryPlayerIsChild']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventModelAnime': 'Work/Model/Event/Npc_Bonooru_BlewOcarinaByPlayer/Npc_Bonooru_BlewOcarinaByPlayer_Player_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Npc_Bonooru_BlewOcarinaByPlayer_Player_Adult.root.as'}

Actor: Npc_Bonooru
entrypoint: None()
actions: ['EventTalk', 'EventTriggerSetRecentTalkFlag', 'EventPlayAS', 'EventTriggerBecomeSpeaker', 'EventTriggerParticipateEvent', 'EventTriggerSetModelLodManual']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAvoidDuplicationRandomChoice2', 'EventQueryHaveTalked', 'EventNPCQueryCheckFrontToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Npc_Bonooru_BlewOcarinaByPlayer/Npc_Bonooru_BlewOcarinaByPlayer_Npc_Bonooru/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Npc_Bonooru_BlewOcarinaByPlayer.root.as'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventSendEventTalkMessageToPlayerCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventBasedOnLookAtCamera', 'EventChangeTemporarilyToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': '使用しない', 'ExceptionalBindType': 3, 'UseEventModelAnime': 'Work/Model/Event/Npc_Bonooru_BlewOcarinaByPlayer/Npc_Bonooru_BlewOcarinaByPlayer/workspace.pp__ModelProject.gyml'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventSetUIMessageDialogScreenSLinkIsKakashiPlayProperty']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Pierre_CallOcarina[Right]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Npc_Bonooru_BlewOcarinaByPlayer/Npc_Bonooru_BlewOcarinaByPlayer_Npc_U_Pierre/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/BlewOcarinaByPlayer_Adult_Npc_U_Pierre.root.as'}

Actor: Npc_Pierre_CallOcarina[Left]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Npc_Bonooru_BlewOcarinaByPlayer/Npc_Bonooru_BlewOcarinaByPlayer_Npc_U_Pierre/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/BlewOcarinaByPlayer_Adult_Npc_U_Pierre.root.as'}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryGreetingTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS', 'EventNaviLookAtObject', 'EventNaviWarpToPlayerHomePosition', 'EventNaviRequestBallonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventSoundReleaseDucking', 'EventTriggerStopInGameBgm', 'EventTriggerStartInGameBgm', 'EventSoundRequestDucking']
queries: ['EventQueryIsPlayingBgmName']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Invisible_Pierre
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Item_Ocarina_Time
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Bonooru_wait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Ocarina_FX]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart', 'EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_ScarecrowMarker_B_00[RightMarker]
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_ScarecrowMarker_B_00[LeftMarker]
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Pierre_CallOcarina[BlewOcarinaByPlayer_Adult(Npc_Pierre_Actor)]
entrypoint: BlewOcarinaByPlayer_Adult(Npc_Pierre_Actor)
actions: []
queries: []
params: None

Actor: Npc_Pierre_CallOcarina[PierreApperedFlow(Npc_Pierre_Actor)]
entrypoint: PierreApperedFlow(Npc_Pierre_Actor)
actions: ['EventPlayAS', 'EventNPCTurnToObjectNow', 'EventTalk', 'EventGoOffstageForUser']
queries: []
params: None

void Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})


    call Mask_Bonooru()

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Sequence_IsChildhood', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Bonooru_Talked_Child'})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'AskBonooru_listentothesong', 'Index': -1}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveTalked_Npc_Bonooru_Child'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveTalked_Npc_Bonooru_MaskTalk'}) {
                    if !Npc_Bonooru.EventQueryAvoidDuplicationRandomChoice2() {
                        Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_112', 'MaintainPerformanceState': 0})
                        Event180:
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SubEvent_GetScarecrow_CloseToScarecrow'}) {

                            call NearScarecrow()

                            Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_51', 'MaintainPerformanceState': 0})
                            Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_67', 'MaintainPerformanceState': 0})
                            Event25:

                            call Dm_SY_Ocarina_Scarecrow.PlayAutoBonooru()

                            UISystemActor.EventSetUIMessageDialogScreenSLinkIsKakashiPlayProperty({'Bool': True})
                            GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
                            UISystemActor.EventSetUIMessageDialogScreenSLinkIsKakashiPlayProperty({'Bool': False})
                            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                            SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'Dm:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
                            if !GameSystemActor.EventQueryListenedScarecrowPfmUntilEnd() {
                                Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_13', 'MaintainPerformanceState': 0})
                            } else {
                                Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_48', 'ASName': 'Act_Failure'})
                            }
                            Event194:

                            call MaskTalkFlagReset()

                        } else {
                            Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_67', 'MaintainPerformanceState': 0})
                            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': '', 'Actor1ActorName': 'Npc_Bonooru', 'PosVector': [-0.699999988079071, 1.3600000143051147, 5.789999961853027], 'AtVector': [-0.3100000023841858, 1.190000057220459, 2.619999885559082], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 20, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                            goto Event25
                        }
                    } else {
                        Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_144', 'MaintainPerformanceState': 0})
                        Event311:
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SubEvent_GetScarecrow_CloseToScarecrow'}) {

                            call NearScarecrow()

                            Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_51', 'MaintainPerformanceState': 0})
                            Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_68', 'MaintainPerformanceState': 0})
                            goto Event25
                        } else {
                            Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_66', 'MaintainPerformanceState': 0})
                            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': '', 'Actor1ActorName': 'Npc_Bonooru', 'PosVector': [-0.699999988079071, 1.3600000143051147, 5.789999961853027], 'AtVector': [-0.3100000023841858, 1.190000057220459, 2.619999885559082], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 20, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                            goto Event25
                        }
                    }
                } else
                if !Npc_Bonooru.EventQueryAvoidDuplicationRandomChoice2() {
                    Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_12', 'MaintainPerformanceState': 0})
                    goto Event180
                } else {
                    Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_44', 'MaintainPerformanceState': 0})
                    goto Event311
                }
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HaveTalked_Npc_Bonooru_Child'})
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveTalked_Npc_Bonooru_MaskTalk'}) {
                    Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_101', 'MaintainPerformanceState': 0})
                } else {
                    Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_01', 'MaintainPerformanceState': 0})
                }
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SubEvent_GetScarecrow_CloseToScarecrow'}) {

                    call NearScarecrow()

                    Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_51', 'MaintainPerformanceState': 0})
                    Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_65', 'MaintainPerformanceState': 0})
                    goto Event25
                } else {
                    Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_65', 'MaintainPerformanceState': 0})
                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': '', 'Actor1ActorName': 'Npc_Bonooru', 'PosVector': [-0.699999988079071, 1.3600000143051147, 5.789999961853027], 'AtVector': [-0.3100000023841858, 1.190000057220459, 2.619999885559082], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 20, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                    goto Event25
                }
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'AskBonooru_listentothesong_Miss'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveTalked_Npc_Bonooru_MaskTalk'}) {
                Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_111', 'MaintainPerformanceState': 0})
            } else {
                Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_11', 'MaintainPerformanceState': 0})
            }
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'AskBonooru_listentothesong_Miss', 'Value': False})
        } else
        if !Npc_Bonooru.EventQueryIsOnRecentTalkFlag() {
            if !Npc_Bonooru.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_14', 'MaintainPerformanceState': 0})
            } else {
                Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_40', 'MaintainPerformanceState': 0})
            }
            goto Event194
        } else {

            call FirstTalk()

            goto Event194
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Bonooru_Talked_Adult', 'Index': -1, 'Value': True})
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetScarecrow_IsCompleted_Exp'}) {
            if !Npc_Bonooru.EventQueryIsOnRecentTalkFlag() {
                if !Npc_Bonooru.EventQueryAvoidDuplicationRandomChoice2() {
                    Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_36', 'MaintainPerformanceState': 0})
                } else {
                    Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_39', 'MaintainPerformanceState': 0})
                }
                goto Event194
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveTalked_Npc_Bonooru_MaskTalk'}) {
                Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_124', 'MaintainPerformanceState': 0})
            } else {
                Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_24', 'MaintainPerformanceState': 0})
            }
            goto Event194
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'AskBonooru_listentothesong', 'Index': -1}) {
            if !Npc_Bonooru.EventQueryIsOnRecentTalkFlag() {
                if !Npc_Bonooru.EventQueryAvoidDuplicationRandomChoice2() {
                    Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_29', 'MaintainPerformanceState': 0})
                } else {
                    Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_38', 'MaintainPerformanceState': 0})
                }
                goto Event194
            } else {
                Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_15', 'MaintainPerformanceState': 0})
                if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetScarecrow_IsAfter_PlayScarecrowSong_Exp'}) {
                    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SubEvent_GetScarecrow', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'IntoTheFuture'})
                }
                goto Event194
            }
        } else
        if !Npc_Bonooru.EventQueryIsOnRecentTalkFlag() {
            Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_62', 'MaintainPerformanceState': 0})
        } else {

            call LookAtLink()

        }
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetScarecrow_IsAfter_MeetPierre_Exp'}) {
            Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Navi', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
            Npc_Navi.EventNaviLookAtObject({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_58', 'MaintainPerformanceState': 0, 'IsNotBecomeSpeaker': True})
            Event225:
            if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetScarecrow_IsAfter_IntoThePast_Exp'}) {
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SubEvent_GetScarecrow', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'IntoThePast'})
            }
            goto Event194
        } else {
            Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Navi', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
            Npc_Navi.EventNaviLookAtObject({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_57', 'MaintainPerformanceState': 0, 'IsNotBecomeSpeaker': True})
            goto Event225
        }
    }
}

void BlewOcarinaByPlayer() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'BlowingOcarinaForBonooru'})

    fork {

        call NaviEventCommon.NaviMove_PlayerHomePos_PassThrough({'IsOffCenterCamera': True, 'PassThrough': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsLookAtObject': True, 'LookAtTarget': 3, 'LookAtActorName': 'Npc_Bonooru', 'IsTurnLooking': True, 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtInstanceName': ''})

    } {
        Player_Event.EventTriggerParticipateEvent()
        Npc_Bonooru.EventTriggerParticipateEvent()
        Npc_Bonooru.EventTriggerSetModelLodManual({'LodLevel': 0})
    }

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Sequence_IsChildhood', 'Index': -1}) {
        EventSystemActor.EventTransition({'EventName': 'BlewOcarinaByPlayer_Child', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
    } else {
        EventSystemActor.EventTransition({'EventName': 'BlewOcarinaByPlayer_Adult', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
    }
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'BlowingOcarinaForBonooru'})
}

void BlewOcarinaByPlayer_Child() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Bonooru_Talked_Child'}) {
        Npc_Bonooru.EventTriggerBecomeSpeaker()
        GameSystemActor.EventTriggerResetPlayedNoteAppliedPitch()
        Player_Event.EventPlayerPlayOcarinaFree({'IsWaitEnd': True})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'AskBonooru_listentothesong', 'Index': -1}) {
            if !GameSystemActor.EventQueryRandomChoice2() {

                fork {
                    Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_08', 'MaintainPerformanceState': 0})
                } {
                    EventSystemActor.EventWait({'Frames': 45, 'IsWaitEnd': True})
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': True, 'IsAllSlot': True, 'ForceFadeFrame': 10.0, 'ASCommand': 'C01_Child_St', 'KeepOneTimeAnm': False, 'ClothWarpMode': 0})
                }

            } else {

                fork {
                    EventSystemActor.EventWait({'Frames': 45, 'IsWaitEnd': True})
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': True, 'IsAllSlot': True, 'ForceFadeFrame': 10.0, 'ASCommand': 'C01_Child_St', 'KeepOneTimeAnm': False, 'ClothWarpMode': 0})
                } {
                    Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_45', 'MaintainPerformanceState': 0})
                }

            }

            call NearScarecrow()

            Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_10', 'MaintainPerformanceState': 0})
            Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ASCommand': 'C01_Child_end', 'ForceFadeFrame': -1.0, 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False})
            Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'C01_Child_OcaWait', 'ForceFadeFrame': 10.0})

            call Dm_SY_Ocarina_Scarecrow.RecordingOcarinaPlayForScarecrowSong()

            GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
            switch GameSystemActor.EventQueryCheckForRecordingBonooru() {
              case 0:
                GameSystemActor.EventTriggerSetScarecrowMelodyGameData()
                Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_09', 'ASName': 'Act_Success', 'MaintainPerformanceState': 0})
              case 1:
                Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_05', 'ASName': 'Act_Failure', 'MaintainPerformanceState': 0})
              case 2:

                fork {
                    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ForceFadeFrame': 30.0, 'IsWaitEnd': True, 'ASCommand': 'C01_Child_OcaEnd'})
                    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ASCommand': 'Wait', 'IsWaitEnd': False, 'ForceFadeFrame': 30.0})
                } {
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
                    Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_07', 'ASName': 'Act_Failure', 'MaintainPerformanceState': 0})
                }

            }
        } else
        if !Npc_Bonooru.EventQueryHaveTalked() {
            if !GameSystemActor.EventQueryRandomChoice2() {

                fork {
                    Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_41', 'MaintainPerformanceState': 0})
                } {
                    EventSystemActor.EventWait({'Frames': 45, 'IsWaitEnd': True})
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': True, 'IsAllSlot': True, 'ForceFadeFrame': 10.0, 'ASCommand': 'C01_Child_St', 'KeepOneTimeAnm': False, 'ClothWarpMode': 0})
                }

            } else {

                fork {
                    EventSystemActor.EventWait({'Frames': 45, 'IsWaitEnd': True})
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': True, 'IsAllSlot': True, 'ForceFadeFrame': 10.0, 'ASCommand': 'C01_Child_St', 'KeepOneTimeAnm': False, 'ClothWarpMode': 0})
                } {
                    Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_06', 'MaintainPerformanceState': 0})
                }

            }
            Event173:

            call NearScarecrow()

            Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_03', 'MaintainPerformanceState': 0})
            Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ASCommand': 'C01_Child_end', 'ForceFadeFrame': -1.0, 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': True})
            Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'C01_Child_OcaWait', 'ForceFadeFrame': 10.0})

            call Dm_SY_Ocarina_Scarecrow.RecordingOcarinaPlayForScarecrowSong()

            GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
            switch GameSystemActor.EventQueryCheckForRecordingBonooru() {
              case 0:
                GameSystemActor.EventTriggerSetScarecrowMelodyGameData()
                if !Npc_Bonooru.EventQueryAvoidDuplicationRandomChoice2() {
                    Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Success', 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_42', 'MaintainPerformanceState': 0})
                } else {
                    Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Success', 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_43', 'MaintainPerformanceState': 0})
                }
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'AskBonooru_listentothesong', 'Index': -1, 'Value': True})
                if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetScarecrow_IsAfter_IntoThePast_Exp'}) {
                    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SubEvent_GetScarecrow', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'PlayScarecrowSong'})
                }
              case 1:
                Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_05', 'ASName': 'Act_Failure', 'MaintainPerformanceState': 0})
                Event64:
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'AskBonooru_listentothesong_Miss'})
              case 2:

                fork {
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
                    Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_07', 'ASName': 'Act_Failure', 'MaintainPerformanceState': 0})
                } {
                    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'IsWaitEnd': True, 'ASCommand': 'C01_Child_OcaEnd', 'ForceFadeFrame': 30.0})
                    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ASCommand': 'Wait', 'IsWaitEnd': False, 'ForceFadeFrame': 30.0})
                }

                goto Event64
            }
        } else {

            call FirstTalk()

            goto Event173
        }
    } else {

        call Dm_SY_Ocarina.PlayOcarinaFree({'HasRecommendedMelody': False, 'MelodyType': 12})

    }
}

void BlewOcarinaByPlayer_Adult() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'AskBonooru_listentothesong', 'Index': -1})
    && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Bonooru_Talked_Adult', 'Index': -1}) {
        EventCamera.EventTriggerCameraSavePoint()
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetScarecrow_IsCompleted_Exp'}) {
            Npc_Bonooru.EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})

            call Dm_SY_Ocarina.PlayOcarinaFree({'MelodyType': 12, 'HasRecommendedMelody': True})

            if GameSystemActor.EventQueryMelodyTypeForNormal() in [0, 1, 3, 4, 5, 12] {
                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0, 'ASCommand': 'EvtWait'})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

                call InitTalk.InitTalk_OnEvent({'Arg_Turn': 4, 'Arg_Greeting': 4, 'ActorNameA': 'Npc_Bonooru', 'Arg_Actor': ActorIdentifier(name="Npc_Bonooru"), 'InstanceNameA': ''})

                if !GameSystemActor.EventQueryIsRecommendedMelody() {
                    Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_27', 'ASName': 'Slow_Dance', 'MaintainPerformanceState': 0})
                } else {
                    Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Bonooru', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
                    Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Failure', 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_26', 'MaintainPerformanceState': 0})
                }
            }
        } else {
            Npc_Bonooru.EventTriggerBecomeSpeaker()
            GameSystemActor.EventTriggerResetPlayedNoteAppliedPitch()
            EventCamera.EventSendEventTalkMessageToPlayerCamera({'EventTalkCameraType': 2, 'IsWaitEnd': False})
            Player_Event.EventPlayerPlayOcarinaFree({'IsWaitEnd': True})
            Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'IsWaitEnd': False, 'ASCommand': 'C01_OcarinaWait', 'ForceFadeFrame': 10.0, 'IsAllSlot': False, 'UseAnmDriven': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
            if !Npc_Bonooru.EventQueryIsOnRecentTalkFlag() {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Bonooru_ThatsIt'}) {
                    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'IsAllSlot': True, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ASCommand': 'C01_Link_St', 'IsWaitEnd': False, 'ForceFadeFrame': 20.0})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
                    Event284:

                    call StartSetUp()

                    Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_23', 'MaintainPerformanceState': 0})
                    Event232:
                    EventCamera.EventBasedOnLookAtCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'MoveTime': 45, 'ToleranceDistance': 0.0, 'ToleranceYDownwardAngle': 15.0, 'TargetActorName': 'Player_Event', 'TargetActorInstanceName': '', 'LookAtVectorXZ': 1, 'LookAtVectorY': 0, 'IdealDistance': 1.2000000476837158, 'ToleranceXZAngle': 10.0, 'ToleranceYUpwardAngle': 15.0, 'IsWaitEnd': False, 'TargetOffset': [0.0, 1.2000000476837158, 0.0]})
                    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                    Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0, 'ASCommand': 'C01_Link_end', 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': True})
                    Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'IsAllSlot': False, 'UseAnmDriven': False, 'IsWaitEnd': False, 'ForceFadeFrame': 10.0, 'ASCommand': 'C01_OcarinaWait'})

                    call Dm_SY_Ocarina_Scarecrow.LearningOcarinaPlayForScarecrowSong()

                    switch GameSystemActor.EventQueryMelodyTypeForNormal() {
                      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 13]:
                        GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})

                        fork {
                            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Bonooru', 'TargetFovy': 50.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTime': 0, 'Actor2ActorName': 'Player_Event', 'AtVectorSetType': 3, 'AtVector': [0.0, 1.0, 0.0], 'PosVectorSetType': 1, 'PosVector': [-1.0, 0.5, 2.5], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                        } {
                            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'IsAllSlot': True, 'ASCommand': 'C10_Link_st', 'IsWaitEnd': False, 'ForceFadeFrame': 30.0})
                            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ASCommand': 'C03_Link_Ed', 'IsAllSlot': True, 'IsWaitEnd': True, 'ForceFadeFrame': 20.0})
                            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ASCommand': 'Wait', 'IsWaitEnd': False, 'ForceFadeFrame': 15.0})
                        } {
                            EventSystemActor[Bonooru_wait].EventWait({'IsWaitEnd': True, 'Frames': 60})

                            call Common_Camera_Pln.CameraDoF_Default()

                            SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'Dm:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
                            Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Failure', 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_53', 'MaintainPerformanceState': 0})
                        }

                        if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetScarecrow_IsAfter_PlayScarecrowSong_Exp'}) {
                            ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SubEvent_GetScarecrow', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'IntoTheFuture'})
                        }
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                      case 12:
                        SoundSystemActor.EventTriggerStopInGameBgm({'CommandLife': 2, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'FadeType': 0, 'WaitingResumeInGameBgm': False})

                        call Dm_SY_Ocarina.LearningOcarinaPlayAuto()


                        fork {
                            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'CameraName': '', 'RootType': 3, 'TargetActorName': 'Npc_Bonooru', 'SceneName': 'Dm_C04-0'})
                        } {
                            SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_FinaleJingle', 'CommandLife': 2, 'IsReleaseDucking': True})
                        } {
                            Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ForceFadeFrame': 0.0, 'UseAnmDriven': True, 'IsAllSlot': True, 'ASCommand': 'C03_Link_St', 'IsWaitEnd': False})
                            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 180})
                            Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'UseAnmDriven': True, 'IsAllSlot': True, 'IsWaitEnd': False, 'ASCommand': 'C03_Link_Loop', 'ForceFadeFrame': 60.0})
                            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 420})
                        } {
                            EventSystemActor[Ocarina_FX].EventWait({'IsWaitEnd': True, 'Frames': 70})
                            Item_Ocarina_Time.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Npc_Bonooru_BlewOcarinaByPlayer_Shine'})
                        } {
                            Npc_Bonooru.EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAllSlot': True, 'ASName': 'C04', 'IsAnimeDriven': True, 'IsWaitEnd': True})
                            Npc_Bonooru.EventPlayAS({'Partial': '', 'IsAllSlot': True, 'IsWaitEnd': False, 'IsAnimeDriven': True, 'ASName': 'Act_Success', 'ForceFadeInFrame': 184.0})
                        } {
                            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'StartDistance': 3.0, 'EndDistance': 5.0, 'StartFNumber': 20.0, 'StartBluarLevel': 3.0, 'EndBluarLevel': 3.0, 'RequiredFrame': 500, 'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsEnableNear': True, 'IsAutoFocalDist': True, 'EndFNumber': 20.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
                        }

                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})

                        call GetPouchContent.GetPouchContentByActorName({'ActorName': 'Item_Melody_ScarecrowSong'})


                        fork {
                            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
                            Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'UseAnmDriven': True, 'IsAllSlot': True, 'ASCommand': 'C03_Link_Ed', 'ForceFadeFrame': 0.0, 'IsWaitEnd': True})
                            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'IsAllSlot': True, 'ASCommand': 'Wait', 'ClothWarpMode': 0})
                        } {
                            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': False, 'SceneName': 'Dm_C05-0', 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
                        } {
                            SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'ResumeDelay': 0})
                            Npc_Bonooru.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_18', 'MaintainPerformanceState': 0, 'ASName': 'Act_Success'})
                        } {
                            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'EndDistance': 5.0, 'EndFNumber': 24.0, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'IsEnableNear': False, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 60, 'StartDistance': 7.0, 'StartFNumber': 40.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
                        }

                        if SoundSystemActor.EventQueryIsPlayingBgmName({'BgmName': 'BGM_HyruleField'}) {
                            SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'FadeType': 0, 'WaitingResumeInGameBgm': True, 'CommandLife': 0})
                        }

                        call Common_Camera_Pln.CameraDoF_Default()

                        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'LatShiftRange': 60.0, 'LongShiftRange': 180.0, 'FovySetType': 0, 'IsWaitEnd': False, 'Actor1InstanceName': '', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'MoveTime': 0, 'TargetFovy': 50.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'PosVector': [-111.90460205078125, 135.22900390625, 445.447998046875], 'AtVector': [-108.13770294189453, 132.95179748535156, 438.3374938964844], 'Actor1ActorName': '', 'CameraCollisionLookAtActor': 0, 'IsEnableRevertFast': False})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

                        fork {
                            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
                            Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ClothWarpMode': 0, 'ASCommand': 'EvtLookAround', 'ForceFadeFrame': 10.0})
                        } {
                            Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'EvtLookAroundAttention'})
                        } {
                            Npc_Invisible_Pierre.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': '', 'IsAnonymous': True, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_19', 'MaintainPerformanceState': 0})
                        }

                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SubEvent_GetScarecrow_ScarecrowMarker_Appear'})
                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SubEvent_GetScarecrow_Link_RightPosition', 'Index': -1}) {
                            GameSystemActor.EventWaitForActorPresence({'IsWaitEnd': True, 'IsActorCreateRequest': True, 'ActorName': 'Obj_ScarecrowMarker_B_00', 'InstanceName': 'LeftMarker'})
                            Obj_ScarecrowMarker_B_00[LeftMarker].EventTriggerEmitXLink({'SLinkKey': 'Dm_Marker_Wind', 'ELinkKey': ''})

                            call PierreApperedFlow({'CameraActorName': 'Npc_Pierre_CallOcarina', 'CameraActorInstanceName': 'Left', 'PlayerTurnToActorInstanceName': 'LinkAtLeft', 'Npc_Pierre_Actor': ActorIdentifier(name="Npc_Pierre_CallOcarina", sub_name="Left")})

                            Event42:
                            Npc_Navi.EventNaviRequestBallonMessage({'Index': 486})
                        } else {
                            GameSystemActor.EventWaitForActorPresence({'IsWaitEnd': True, 'IsActorCreateRequest': True, 'ActorName': 'Obj_ScarecrowMarker_B_00', 'InstanceName': 'RightMarker'})
                            Obj_ScarecrowMarker_B_00[RightMarker].EventTriggerEmitXLink({'SLinkKey': 'Dm_Marker_Wind', 'ELinkKey': ''})

                            call PierreApperedFlow({'CameraActorName': 'Npc_Pierre_CallOcarina', 'CameraActorInstanceName': 'Right', 'PlayerTurnToActorInstanceName': 'LinkAtRight', 'Npc_Pierre_Actor': ActorIdentifier(name="Npc_Pierre_CallOcarina", sub_name="Right")})

                            goto Event42
                        }
                    }
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Bonooru_ThatsIt'})

                    fork {
                        Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_28', 'MaintainPerformanceState': 0})
                    } {
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
                        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'IsAllSlot': True, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'IsWaitEnd': False, 'ASCommand': 'C01_Link_St', 'ForceFadeFrame': 20.0})
                    }

                    goto Event284
                }
            } else {

                fork {
                    Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_30', 'MaintainPerformanceState': 0})
                } {
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
                    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'IsAllSlot': True, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'IsWaitEnd': False, 'ASCommand': 'C01_Link_St', 'ForceFadeFrame': 20.0})
                }


                call StartSetUp()

                Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_31', 'MaintainPerformanceState': 0})
                Npc_Bonooru.EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
                goto Event232
            }
        }
    } else {

        call Dm_SY_Ocarina.PlayOcarinaFree({'HasRecommendedMelody': False, 'MelodyType': 12})

    }
}

void PierreApperedFlow() {
    Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 5, 'WorldPos': [0.0, 0.0, 0.0], 'ActorName': 'DestinationAnchor', 'InstanceName': 'PlayerTurnToActorInstanceName'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkSurprise', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ForceFadeFrame': 20.0})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': False, 'MoveTime': 0, 'IsAtVectorReferenceActorPosOnce': True, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsIgnorePosVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'PosVectorSetType': 4, 'IsPosVectorReferenceActorPosOnce': True, 'Actor1ActorName': '', 'AtVectorSetType': 4, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'AtVector': [0.0, 1.5, 0.0], 'EnableCameraAlpha': True, 'PosVector': [0.0, 1.5, 2.5], 'Actor2ActorName': 'CameraActorName', 'Actor2InstanceName': 'CameraActorInstanceName', 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'Target': 5, 'WorldPos': [0.0, 0.0, 0.0], 'ActorName': 'DestinationAnchor', 'IgnoreTargetPosMove': False, 'IsWaitEnd': True, 'SlowTurn': False, 'UseNormalTurn': False, 'KeepTalkWait': True, 'InstanceName': 'PlayerTurnToActorInstanceName', 'IsDoNavi': True})
    }

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SubEvent_GetScarecrow_Pierre_Appear'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'SubEvent_GetScarecrow_ScarecrowMarker_Appear'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})

    fork {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SubEvent_GetScarecrow_Link_RightPosition', 'Index': -1}) {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'CameraName': '', 'RootType': 3, 'TargetActorName': 'Npc_Bonooru', 'SceneName': 'Dm_C07-0-L'})
        } else {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'CameraName': '', 'RootType': 3, 'TargetActorName': 'Npc_Bonooru', 'SceneName': 'Dm_C07-0'})
        }
    } {
        GameSystemActor.EventWaitForActorPresence({'ActorName': 'Npc_Pierre_CallOcarina', 'IsWaitEnd': True, 'IsActorCreateRequest': True, 'InstanceName': 'CameraActorInstanceName'})
        Npc_Pierre_CallOcarina[PierreApperedFlow(Npc_Pierre_Actor)].EventPlayAS({'ASName': 'Act_Getup', 'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsAllSlot': False})
    } {
        Player_Event.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Bonooru.EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAllSlot': True, 'IsAnimeDriven': True, 'ASName': 'C07_Def_Nomal_Talk', 'IsWaitEnd': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 16})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Doon', 'Length': 0.5})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsEnableNear': False, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'EndDistance': 3.0, 'RequiredFrame': 60, 'StartDistance': 4.0, 'StartFNumber': 46.0, 'EndFNumber': 24.0, 'StartBluarLevel': 0.5, 'EndBluarLevel': 0.5, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    Npc_Pierre_CallOcarina[PierreApperedFlow(Npc_Pierre_Actor)].EventNPCTurnToObjectNow({'TurnType': 3, 'IsWaitEnd': True})
    Npc_Pierre_CallOcarina[PierreApperedFlow(Npc_Pierre_Actor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Success', 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_21', 'MaintainPerformanceState': 0, 'IsAnonymous': True})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Pierre_First'}) {
        Npc_Pierre_CallOcarina[PierreApperedFlow(Npc_Pierre_Actor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Success', 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_55', 'MaintainPerformanceState': 0})
    } else {
        Npc_Pierre_CallOcarina[PierreApperedFlow(Npc_Pierre_Actor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Success', 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_54', 'MaintainPerformanceState': 0})
    }
    Npc_Pierre_CallOcarina[PierreApperedFlow(Npc_Pierre_Actor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Success', 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_56', 'MaintainPerformanceState': 0})

    fork {
        Npc_Pierre_CallOcarina[PierreApperedFlow(Npc_Pierre_Actor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_47', 'ASName': 'Act_Success'})
    } {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SubEvent_GetScarecrow_Link_RightPosition', 'Index': -1}) {
            EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'LatShiftRange': 60.0, 'LongShiftRange': 180.0, 'FovySetType': 0, 'Actor1InstanceName': '', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsWaitEnd': False, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'MoveTime': 0, 'Actor1ActorName': 'Npc_Bonooru', 'PosVector': [-2.049999952316284, 1.5399999618530273, 5.119999885559082], 'AtVector': [-0.8100000023841858, 1.2300000190734863, 0.25], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'LatShiftRange': 60.0, 'LongShiftRange': 180.0, 'FovySetType': 0, 'Actor1InstanceName': '', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsWaitEnd': False, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'MoveTime': 0, 'Actor1ActorName': 'Npc_Bonooru', 'PosVector': [1.309999942779541, 1.2899999618530273, 5.130000114440918], 'AtVector': [0.8600000143051147, 1.2300000190734863, 0.10999999940395355], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        }
        EventCamera.EventTriggerCameraSavePoint()
    } {
        Player_Event.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'Target': 5, 'WorldPos': [0.0, 0.0, 0.0], 'ActorName': 'DestinationAnchor', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsWaitEnd': False, 'KeepTalkWait': True, 'InstanceName': 'PlayerTurnToActorInstanceName', 'IsDoNavi': True})
    } {
        Npc_Bonooru.EventPlayAS({'Partial': '', 'IsAllSlot': True, 'IsWaitEnd': False, 'IsAnimeDriven': True, 'ForceFadeInFrame': 0.0, 'ASName': 'C07_Def_Nomal_Talk'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsEnableNear': False, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 3.0, 'EndDistance': 3.0, 'StartFNumber': 17.0, 'EndFNumber': 17.0, 'StartBluarLevel': 0.5, 'EndBluarLevel': 0.5, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }


    fork {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SubEvent_GetScarecrow_Link_RightPosition', 'Index': -1}) {
            Npc_Pierre_CallOcarina[PierreApperedFlow(Npc_Pierre_Actor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_22', 'MaintainPerformanceState': 0, 'IsPlayASAllSlot': False, 'ASName': 'C09_Pie_L_St'})
        } else {
            Npc_Pierre_CallOcarina[PierreApperedFlow(Npc_Pierre_Actor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_22', 'MaintainPerformanceState': 0, 'ASName': 'C09_Pie_St', 'IsPlayASAllSlot': False})
        }
    } {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SubEvent_GetScarecrow_Link_RightPosition', 'Index': -1}) {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'CameraName': '', 'RootType': 3, 'TargetActorName': 'Npc_Bonooru', 'SceneName': 'Dm_C09-0-L'})
        } else {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'CameraName': '', 'RootType': 3, 'TargetActorName': 'Npc_Bonooru', 'SceneName': 'Dm_C09-0'})
        }
    } {
        Player_Event.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Bonooru.EventPlayAS({'Partial': '', 'IsAllSlot': True, 'IsWaitEnd': False, 'IsAnimeDriven': True, 'ForceFadeInFrame': 0.0, 'ASName': 'C07_Def_Nomal_Talk'})
    } {
        Npc_Navi.EventNaviWarpToPlayerHomePosition({'Type': 0, 'IsNearOffset': True, 'IsWaitEnd': False, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsEnableNear': True, 'StartDistance': 4.0, 'EndDistance': 4.0, 'StartFNumber': 30.0, 'EndFNumber': 30.0, 'StartBluarLevel': 0.5, 'EndBluarLevel': 0.5, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 2})
    Npc_Pierre_CallOcarina[PierreApperedFlow(Npc_Pierre_Actor)].EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'SubEvent_GetScarecrow_Pierre_Appear'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SubEvent_GetScarecrow_ScarecrowMarker_Appear', 'Value': False})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SubEvent_GetScarecrow', 'StepName': 'Complete', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
    Npc_Bonooru.EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'Wait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Npc_Navi.EventPlayAS({'ASName': 'EvtWait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})

    call Common_Camera_Pln.CameraDoF_Default()

    EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
}

void Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Bonooru:Near_01'})
}

void FirstTalk() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveTalked_Npc_Bonooru_MaskTalk'}) {
        Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_102', 'MaintainPerformanceState': 0})
    } else {
        Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_02', 'MaintainPerformanceState': 0})
    }
    if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetScarecrow_IsAfter_MeetPierre_Exp'}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SubEvent_GetScarecrow', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'MeetBonooru'})
    }
}

void NearScarecrow() {
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'ActorNameB': 'Npc_Bonooru', 'InstanceNameB': '', 'IsAnchorActorB': False, 'CheckDistance': 2.0}) {
        if !Player_Event.EventQueryPlayerIsChild() {
            Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_49', 'MaintainPerformanceState': 0})
        }
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'SubEvent_GetScarecrow_SafetyCounter', 'Index': -1, 'Value': 0})

        fork {
            Player_Event.EventPlayerSeparatedFromSpeaker({'MoveSpeed': 0.6000000238418579, 'IsWaitEnd': False, 'SeparatedDIstance': 2.5})
            Event242:
            if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'CheckDistance': 2.0, 'ActorNameB': 'Npc_Bonooru'}) {
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
                GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'SubEvent_GetScarecrow_SafetyCounter', 'Value': 1, 'Index': -1})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                switch GameDataActor.EventQueryIsGameDataInt({'Value': 30, 'Index': -1, 'GameDataName': 'SubEvent_GetScarecrow_SafetyCounter'}) {
                  case 0:
                    goto Event242
                  case [1, 2]:
                    Event237:
                    Player_Event.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'ActorName': 'Npc_Bonooru', 'IsDoNavi': False})
                }
            } else {
                goto Event237
            }
        } {

            call NaviEventCommon.Navi_followPlayer2()

        } {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': '', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [-0.699999988079071, 1.5, 5.789999961853027], 'AtVector': [-0.3100000023841858, 0.8999999761581421, 2.619999885559082], 'MoveTime': 40, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Npc_Bonooru', 'IsEnableRevertFast': False})
        }

    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': '', 'Actor1ActorName': 'Npc_Bonooru', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [-0.699999988079071, 1.5, 5.789999961853027], 'AtVector': [-0.3100000023841858, 0.8999999761581421, 2.619999885559082], 'MoveTime': 40, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }
}

void MaskTalkFlagReset() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Npc_Bonooru_MaskTalk', 'Index': -1, 'Value': False})
}

void Mask_Bonooru() {
    switchcall NpcCommon.CheckEquipmentMask() {
      case [0xdf3ee64f, 0x6deb45c0]:

        call NpcCommon.Sub_Mask_Talk_OtherTruthMask_Message({'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Bonooru:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Bonooru:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Bonooru:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Bonooru:Mask_04', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Bonooru:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Bonooru:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Bonooru:Mask_08', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Bonooru:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Bonooru:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Bonooru:Mask_103', 'ASName': 'Wait'})

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Bonooru:Mask_09', 'MaintainPerformanceState': 0})
        Event252:
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Npc_Bonooru_MaskTalk', 'Index': -1, 'Value': True})
        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
      case 0x1d1a8ede:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfWater_IsCompleted_Exp'}) {
            if !Npc_EventStarter.EventQueryIsPlayingSameAS({'Partial': '', 'ASName': 'Slow_Dance'}) {
                switch EventWorldManagerController.EventQueryGreetingTimeDivision() {
                  case 0:

                    call Mask_Truth_Talk({'ASName': 'Slow_Dance', 'MessageId': 'EventFlowMsg/Npc_Bonooru:Mask_05_01'})

                    Event261:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Bonooru:Mask_10', 'MaintainPerformanceState': 0})
                    Npc_EventStarter.EventTriggerForceSetMaskTalkFlag({'value': True})
                    goto Event252
                  case 1:

                    call Mask_Truth_Talk({'ASName': 'Slow_Dance', 'MessageId': 'EventFlowMsg/Npc_Bonooru:Mask_05_02'})

                    goto Event261
                  case 2:

                    call Mask_Truth_Talk({'MessageId': 'EventFlowMsg/Npc_Bonooru:Mask_05_03', 'ASName': 'Slow_Dance'})

                    goto Event261
                }
            } else
            switch EventWorldManagerController.EventQueryGreetingTimeDivision() {
              case 0:

                call Mask_Truth_Talk({'ASName': 'Wait', 'MessageId': 'EventFlowMsg/Npc_Bonooru:Mask_05_01'})

                goto Event261
              case 1:

                call Mask_Truth_Talk({'ASName': 'Wait', 'MessageId': 'EventFlowMsg/Npc_Bonooru:Mask_05_02'})

                goto Event261
              case 2:

                call Mask_Truth_Talk({'MessageId': 'EventFlowMsg/Npc_Bonooru:Mask_05_03', 'ASName': 'Wait'})

                goto Event261
            }
        } else
        if !Npc_EventStarter.EventQueryIsPlayingSameAS({'Partial': '', 'ASName': 'Slow_Dance'}) {
            switch EventWorldManagerController.EventQueryGreetingTimeDivision() {
              case 0:

                call Mask_Truth_Talk({'ASName': 'Slow_Dance', 'MessageId': 'EventFlowMsg/Npc_Bonooru:Mask_05_04'})

                goto Event261
              case 1:

                call Mask_Truth_Talk({'ASName': 'Slow_Dance', 'MessageId': 'EventFlowMsg/Npc_Bonooru:Mask_05_05'})

                goto Event261
              case 2:

                call Mask_Truth_Talk({'ASName': 'Slow_Dance', 'MessageId': 'EventFlowMsg/Npc_Bonooru:Mask_05_06'})

                goto Event261
            }
        } else
        switch EventWorldManagerController.EventQueryGreetingTimeDivision() {
          case 0:

            call Mask_Truth_Talk({'ASName': 'Wait', 'MessageId': 'EventFlowMsg/Npc_Bonooru:Mask_05_04'})

            goto Event261
          case 1:

            call Mask_Truth_Talk({'ASName': 'Wait', 'MessageId': 'EventFlowMsg/Npc_Bonooru:Mask_05_05'})

            goto Event261
          case 2:

            call Mask_Truth_Talk({'ASName': 'Wait', 'MessageId': 'EventFlowMsg/Npc_Bonooru:Mask_05_06'})

            goto Event261
        }
    }
}

void LookAtLink() {
    Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_60', 'MaintainPerformanceState': 0})
    Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_63', 'MaintainPerformanceState': 0})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': '', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTime': 0, 'Actor1ActorName': 'Npc_Bonooru', 'PosVector': [-0.15000000596046448, 1.7200000286102295, 2.4100000858306885], 'AtVector': [0.05999999865889549, 1.4700000286102295, -0.8100000023841858], 'TargetFovy': 37.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': '', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTime': 15, 'Actor1ActorName': 'Npc_Bonooru', 'PosVector': [-0.11999999731779099, 1.690000057220459, 1.9500000476837158], 'AtVector': [0.05999999865889549, 1.4700000286102295, -0.8100000023841858], 'TargetFovy': 37.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_64', 'MaintainPerformanceState': 0})
    }

    EventCamera.EventSendEventTalkMessageToPlayerCamera({'EventTalkCameraType': 1, 'IsWaitEnd': False})
    Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_46'})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetScarecrow_IsAfter_MeetPierre_Exp'}) {
        Event214:
        Npc_Bonooru.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_34', 'MaintainPerformanceState': 0})
    } else {
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Navi', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        Npc_Navi.EventNaviLookAtObject({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Bonooru:Talk_69', 'IsNotBecomeSpeaker': True})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Bonooru', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'Target': 1})
        goto Event214
    }
}

void StartSetUp() {
    Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})

    fork {
        Player_Event.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        Player_Event.EventPlayerWarpToTargetActor({'UseDemoWait': True, 'ASCommand': 'EvtWait', 'TargetActorKind': 1, 'ActorName': 'Npc_Bonooru', 'OffsetBase': 1, 'IsWaitEnd': False, 'InstanceName': '', 'PositionOffset': [0.0, 0.0, 2.5], 'YAngle': 170.0})
    } {
        if !Npc_Bonooru.EventNPCQueryCheckFrontToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'AngleThreshold': 10.0}) {
            PostProcessingActor.EventNorifyCutChangeForGraphics()
        } else {
            PostProcessingActor.EventNorifyCutChangeForGraphics()
        }
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'LatShiftRange': 60.0, 'LongShiftRange': 180.0, 'FovySetType': 0, 'Actor1InstanceName': '', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsWaitEnd': False, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Npc_Bonooru', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'EnableCameraAlpha': True, 'AtVector': [0.0, 1.2430000305175781, 1.4220000505447388], 'PosVector': [0.0, 1.2430000305175781, 2.5], 'IsEnableRevertFast': False})
    }

}

void Mask_Truth_Talk() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': True, 'NotPlayLipSyncAnim': True, 'OverrideStyle': 8, 'MessageId': 'MessageId', 'ASName': 'ASName', 'MaintainPerformanceState': 0})
}
