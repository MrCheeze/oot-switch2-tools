-------- EventFlow: Dm_SY_Ocarina --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWaitOcarinaInputForNormal', 'EventWaitOcarinaInputForLearning', 'EventWaitOcarinaInputForSequence', 'EventTriggerPlayAutoFixedTune', 'EventTriggerPlayExample', 'EventWait', 'EventTriggerPreparePlayExample', 'EventCloseMessageDialog', 'EventReserveBancChange', 'EventTriggerRequestAutoSave', 'EventTriggerRequestCreateConditionSensor', 'EventWaitFrameOrSkip', 'EventTriggerSetCurrentMelodyBtnIndexForCursor', 'EventTriggerFadeOcarinaMelodyHandle', 'EventTriggerShortFadeOcarinaMelodyHandle']
queries: ['EventQueryIsRecommendedMelody', 'EventQueryMelodyTypeForNormal', 'EventQueryTalkChoice2', 'EventQueryCheckContactAreaCanCallPierre']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayOcarinaSuccess', 'EventPlayerPlayOcarinaFree', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventTriggerSetOwnAsInstrumentPlayer', 'EventTriggerParticipateEvent', 'EventPlayerWait']
queries: ['EventQueryPlayerIsChild', 'EventQueryPlayerIsAbleWarp']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'UseEventModelAnime': 'Work/Model/Event/Dm_SY_Ocarina/Dm_SY_Ocarina_EK_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_SY_Ocarina.root.as', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventSendEventSingleMessageToPlayerCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventOcarinaResultCamera']
queries: ['EventQueryCameraCheckRayCastForMoveToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: SystemTextNPC
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerRequestOpenSimpleInfo', 'EventTriggerRequestOpenVanishExchangeItemSimpleInfo', 'EventTriggerRequestOpenLoseRunningRaceSimpleInfo', 'EventEventFadeOut', 'EventTriggerSetTimerUnvisibleEvent']
queries: ['EventQueryIsRequestLoseRunningRaceAfterBancChanged', 'EventQueryIsRequestVanishExchangeItemAfterBancChanged', 'EventQueryHaveOpenedActionGuide']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryCheckIsGet', 'EventQueryIsBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[cam_position]
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventPlayAS', 'EventNaviRequestBallonMessage', 'EventNaviMoveOcarinaPlayPosition', 'EventNaviChangeAttentionTypeToNone']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': '', 'UseEventModelAnime': '', 'ExceptionalBindType': 3}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle', 'EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor[Light]
entrypoint: None()
actions: ['EventCreateLocationalLightToTargetActor', 'EventEditLocationalLight']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['Event_SetDemoPaletteTransitionForTimeline', 'EventTriggerSetDemoPaletteForFlowchart', 'EventTriggerResetDemoPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor[Capture]
entrypoint: None()
actions: ['EventNorifyCutChangeForGraphics', 'EventSetDynamicResolutionLoadThreshold']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    call PlayOcarinaFree({'MelodyType': 0, 'HasRecommendedMelody': False})

}

void PlayAuto() {

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        GameSystemActor.EventTriggerPlayAutoFixedTune({'IsLearningWarpMelodyDemo': False})
    } {
        Player_Event.EventPlayerPlayOcarinaSuccess({'IsWaitEnd': True})
    } {
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'IsOverrideStyle': True, 'IsCloseDialog': False, 'MessageId': '', 'OverrideStyle': 3, 'MaintainPerformanceState': 0})
        SystemTextNPC.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'IsOverrideStyle': True, 'IsCloseDialog': True, 'IsWaitEnd': False, 'MessageId': 'EventFlowMsg/Dm_SY_Ocarina:Talk_00', 'OverrideStyle': 3, 'MaintainPerformanceState': 0})
    } {
        Npc_Navi.EventPlayAS({'ASName': 'DemoOcarinaCorrectNavi', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': 10.0})
    } {
        if !Player_Event.EventQueryPlayerIsChild() {
            PostProcessingActor[Light].EventCreateLocationalLightToTargetActor({'LightType': 1, 'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'InstanceName': '', 'LightHash': 'SpotLight001', 'Direction': [0.5, -1.0, -0.5], 'PositionOffset': [-1.0, 2.0, 1.0], 'InnerAngle': 25.0, 'OuterAngle': 50.0})
            PostProcessingActor[Light].EventEditLocationalLight({'LocationalLightCreateType': 0, 'EditColor': True, 'EditIntensity': True, 'EditSourceRadius': True, 'Color': [1.0, 0.800000011920929, 0.6000000238418579], 'LightHash': 'SpotLight001', 'FrameTransitionCount': 0, 'Intensity': 0.0, 'IsFrameTransition': True, 'SourceRadius': 5.0})
            PostProcessingActor[Light].EventEditLocationalLight({'LocationalLightCreateType': 0, 'EditColor': True, 'EditIntensity': True, 'EditSourceRadius': True, 'Color': [1.0, 0.800000011920929, 0.6000000238418579], 'LightHash': 'SpotLight001', 'IsFrameTransition': True, 'FrameTransitionCount': 30, 'SourceRadius': 5.0, 'Intensity': 20.0})
        } else {
            PostProcessingActor[Light].EventCreateLocationalLightToTargetActor({'LightType': 1, 'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'InstanceName': '', 'LightHash': 'SpotLight001', 'Direction': [0.5, -1.0, -0.5], 'PositionOffset': [-1.0, 3.0, 1.0], 'InnerAngle': 25.0, 'OuterAngle': 50.0})
            PostProcessingActor[Light].EventEditLocationalLight({'LocationalLightCreateType': 0, 'EditColor': True, 'EditIntensity': True, 'EditSourceRadius': True, 'Color': [1.0, 0.800000011920929, 0.6000000238418579], 'LightHash': 'SpotLight001', 'FrameTransitionCount': 0, 'Intensity': 0.0, 'IsFrameTransition': True, 'SourceRadius': 5.0})
            PostProcessingActor[Light].EventEditLocationalLight({'LocationalLightCreateType': 0, 'EditColor': True, 'EditIntensity': True, 'EditSourceRadius': True, 'Color': [1.0, 0.800000011920929, 0.6000000238418579], 'LightHash': 'SpotLight001', 'IsFrameTransition': True, 'FrameTransitionCount': 30, 'SourceRadius': 5.0, 'Intensity': 20.0})
        }
    } {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsOcarinaEvent_BottomOfTheWell_Level_Room_01_Ocarina', 'Index': -1}) {
            EventWorldManagerController.Event_SetDemoPaletteTransitionForTimeline({'RateStart': 0.0, 'RateEnd': 1.0, 'IsWaitEnd': False, 'RateFrame': 30.0, 'PrevDemoPaletteName': 'Dm_SY_Ocarina_FreeCam', 'CurrDemoPaletteName': 'Dm_SY_Ocarina_CorrectCam_BottomOfTheWell'})
        } else {
            EventWorldManagerController.Event_SetDemoPaletteTransitionForTimeline({'RateStart': 0.0, 'RateEnd': 1.0, 'IsWaitEnd': False, 'CurrDemoPaletteName': 'Dm_SY_Ocarina_CorrectCam', 'RateFrame': 30.0, 'PrevDemoPaletteName': 'Dm_SY_Ocarina_FreeCam'})
        }
    } {
        PostProcessingActor[Capture].EventSetDynamicResolutionLoadThreshold({'Threshold': 98.0})
    }

}

void LearningOcarinaPlayExample() {
    GameSystemActor.EventTriggerPreparePlayExample({'MelodyType': 'MelodyType'})

    fork {
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'IsOverrideStyle': True, 'MessageId': 'MessageId', 'OverrideStyle': 3, 'MaintainPerformanceState': 0})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        GameSystemActor.EventTriggerPlayExample()
    }

}

void PlayOcarinaSequence() {
    Player_Event.EventTriggerSetOwnAsInstrumentPlayer()

    fork {
        Player_Event.EventPlayerPlayOcarinaFree({'IsWaitEnd': True})
    } {
        GameSystemActor.EventWaitOcarinaInputForSequence({'IsWaitEnd': True, 'IsNeedMessageDialogOpenAnim': True, 'MelodyType': 'MelodyType'})
    } {
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'IsOverrideStyle': True, 'IsCloseDialog': False, 'MessageId': '', 'OverrideStyle': 3, 'MaintainPerformanceState': 0})
    } {
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 1})
    } {
        if !Player_Event.EventQueryPlayerIsChild() {

            fork {
                EventCamera.EventOcarinaResultCamera({'Actor1InstanceName': '', 'LookAtDis': -1.0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 2, 'LongShiftRange': 180.0, 'FovySetType': 0, 'LatShiftRange': 60.0, 'MoveTime': 30, 'CameraCollisionLookAtActorOffset': [0.0, 1.0, 0.0], 'Actor1ActorName': 'Player_Event', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'CameraCollisionMode': 1, 'OnetimeShiftRange': 10.0, 'ExtraCheckSaftyPos': True, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'IsWaitEnd': True, 'Actor1ActorBone': 'Spine_1', 'PosVector': [-0.20000000298023224, 0.22612999379634857, 0.8999999761581421], 'AtVector': [0.009999999776482582, 0.18613000214099884, 0.0]})
                EventCamera.EventOcarinaResultCamera({'Actor1InstanceName': '', 'LookAtDis': -1.0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 2, 'LongShiftRange': 180.0, 'FovySetType': 0, 'LatShiftRange': 60.0, 'IsWaitEnd': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.0, 0.0], 'Actor1ActorName': 'Player_Event', 'TargetFovy': 50.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'CameraCollisionMode': 1, 'OnetimeShiftRange': 10.0, 'MoveTime': 0, 'Actor1ActorBone': 'Spine_1', 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'ExtraCheckSaftyPos': False})
            } {
                PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'IsWaitEnd': False, 'IsAutoFocalDist': False, 'RequiredFrame': 30, 'EndBluarLevel': 2.0, 'EndFNumber': 115.0, 'EndDistance': 0.4000000059604645, 'StartDistance': 0.6100000143051147, 'StartFNumber': 135.0, 'StartBluarLevel': 0.0, 'IsEnableDofFarCancel': False, 'NearDepthBlurAdd': 3.0, 'IsEnableNearDepthBlur': False, 'IsEnableNear': False})
            }

        } else {

            fork {
                EventCamera.EventOcarinaResultCamera({'Actor1InstanceName': '', 'LookAtDis': -1.0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 2, 'LatShiftRange': 60.0, 'LongShiftRange': 180.0, 'FovySetType': 0, 'MoveTime': 30, 'Actor1ActorName': 'Player_Event', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'OnetimeShiftRange': 10.0, 'ExtraCheckSaftyPos': True, 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'Actor1ActorBone': 'Spine_1', 'AtVector': [0.05000000074505806, 0.3141700029373169, 0.0], 'PosVector': [-0.1899999976158142, 0.5041700005531311, 1.0399999618530273]})
                EventCamera.EventOcarinaResultCamera({'Actor1InstanceName': '', 'LookAtDis': -1.0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 2, 'LatShiftRange': 60.0, 'LongShiftRange': 180.0, 'FovySetType': 0, 'Actor1ActorName': 'Player_Event', 'TargetFovy': 50.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'CameraCollisionMode': 1, 'OnetimeShiftRange': 10.0, 'MoveTime': 0, 'Actor1ActorBone': 'Spine_1', 'PosVectorSetType': 1, 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'AtVectorSetType': 1, 'ExtraCheckSaftyPos': False, 'IsWaitEnd': False})
            } {
                PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'IsWaitEnd': False, 'IsAutoFocalDist': False, 'RequiredFrame': 30, 'EndBluarLevel': 2.0, 'StartDistance': 0.550000011920929, 'EndDistance': 0.36000001430511475, 'EndFNumber': 144.0, 'StartFNumber': 155.0, 'StartBluarLevel': 0.0, 'IsEnableDofFarCancel': False, 'NearDepthBlurAdd': 3.0, 'IsEnableNear': False, 'IsEnableNearDepthBlur': False})
            }

        }
    } {
        Npc_Navi.EventNaviMoveOcarinaPlayPosition({'ArrivedASCommand': 'DemoOcarinaNavi', 'IsWaitEnd': False})
    }

    if GameSystemActor.EventQueryMelodyTypeForNormal() in [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12] {

        call PlayAuto()

        if !GameSystemActor.EventQueryIsRecommendedMelody() {
            switch GameSystemActor.EventQueryMelodyTypeForNormal() {
              case 0:
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 180})
                Event193:

                call RequestCreateConditionSensor({'IsNotNeedSensor': False})


                call LightOff()

              case 1:
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 210})
                goto Event193
              case 2:
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 250})
                goto Event193
              case 3:
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
                goto Event193
              case 4:
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 360})

                call RequestCreateConditionSensor({'IsNotNeedSensor': False})


                call LightPaletteOff_NoCapture()

              case 5:
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 180})
                goto Event193
              case [6, 7, 8, 9, 10, 11]:
                Event14:
                switch GameSystemActor.EventQueryMelodyTypeForNormal() {
                  case 0:
                    GameSystemActor.EventWaitFrameOrSkip({'IsWaitEnd': True, 'Frames': 360})
                    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
                    GameSystemActor.EventTriggerShortFadeOcarinaMelodyHandle()
                    Event189:

                    call RequestCreateConditionSensor({'IsNotNeedSensor': False})


                    fork {
                        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 1, 'CameraResetInterpolateCountScale': 0.0})
                    } {

                        call Common_Camera_Pln.CameraDoF_Event_Common()

                    } {

                        call LightOff()

                    }

                  case 1:
                    GameSystemActor.EventWaitFrameOrSkip({'IsWaitEnd': True, 'Frames': 285})
                    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})

                    call Dm_SY_Ocarina_EponaSong.EponaSong()

                    GameSystemActor.EventTriggerShortFadeOcarinaMelodyHandle()
                  case 2:
                    GameSystemActor.EventWaitFrameOrSkip({'IsWaitEnd': True, 'Frames': 210})
                    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})

                    call Dm_SY_Ocarina_SariaSong.SariaSong()

                    GameSystemActor.EventTriggerShortFadeOcarinaMelodyHandle()
                  case 3:
                    GameSystemActor.EventWaitFrameOrSkip({'Frames': 150, 'IsWaitEnd': True})
                    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})

                    call Dm_SY_Ocarina_SunSong.SunSong()

                    GameSystemActor.EventTriggerShortFadeOcarinaMelodyHandle()

                    call RequestCreateConditionSensor({'IsNotNeedSensor': False})


                    fork {
                        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 1, 'CameraResetInterpolateCountScale': 0.0})
                    } {

                        call LightPaletteOff_NoCapture()

                    }

                  case 4:
                    GameSystemActor.EventWaitFrameOrSkip({'IsWaitEnd': True, 'Frames': 360})
                    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
                    GameSystemActor.EventTriggerShortFadeOcarinaMelodyHandle()
                    Event95:

                    fork {
                        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 1, 'CameraResetInterpolateCountScale': 0.0})
                    } {

                        call LightOff()

                    }

                  case 5:
                    GameSystemActor.EventWaitFrameOrSkip({'Frames': 180, 'IsWaitEnd': True})
                    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
                    GameSystemActor.EventTriggerShortFadeOcarinaMelodyHandle()
                    goto Event189
                  case 6:
                    SoundSystemActor.EventSoundRequestDucking({'CommandLife': 0, 'DuckingName2': '', 'DuckingName3': '', 'DuckingName': 'Dm:Bgmミュート(即フェード)'})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

                    call OcarinaWarp({'ChildBanc': 'SacredForestMeadow_Child', 'AdultBanc': 'SacredForestMeadow_Adult', 'NextStartPos': 'ForestMinuet', 'MessageId': 'EventFlowMsg/Dm_SY_Ocarina:Talk_02'})

                    goto Event95
                  case 7:
                    SoundSystemActor.EventSoundRequestDucking({'CommandLife': 0, 'DuckingName': 'Dm:Bgmミュート(即フェード)', 'DuckingName2': '', 'DuckingName3': ''})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

                    call OcarinaWarp({'ChildBanc': 'DeathMountainCrater_Child', 'AdultBanc': 'DeathMountainCrater_Adult', 'NextStartPos': 'FireBolero', 'MessageId': 'EventFlowMsg/Dm_SY_Ocarina:Talk_03'})

                    goto Event95
                  case 8:
                    SoundSystemActor.EventSoundRequestDucking({'CommandLife': 0, 'DuckingName': 'Dm:Bgmミュート(即フェード)', 'DuckingName2': '', 'DuckingName3': ''})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

                    call OcarinaWarp({'NextStartPos': 'WaterSerenade', 'MessageId': 'EventFlowMsg/Dm_SY_Ocarina:Talk_04', 'ChildBanc': 'HyruleField_Child', 'AdultBanc': 'HyruleField_Adult'})

                    goto Event95
                  case 9:
                    SoundSystemActor.EventSoundRequestDucking({'CommandLife': 0, 'DuckingName': 'Dm:Bgmミュート(即フェード)', 'DuckingName2': '', 'DuckingName3': ''})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

                    call OcarinaWarp({'ChildBanc': 'DesertColossus_Child', 'AdultBanc': 'DesertColossus_Adult', 'NextStartPos': 'SpiritRequiem', 'MessageId': 'EventFlowMsg/Dm_SY_Ocarina:Talk_05'})

                    goto Event95
                  case 10:
                    SoundSystemActor.EventSoundRequestDucking({'CommandLife': 0, 'DuckingName': 'Dm:Bgmミュート(即フェード)', 'DuckingName2': '', 'DuckingName3': ''})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

                    call OcarinaWarp({'NextStartPos': 'ShadowNocturne', 'AdultBanc': 'Graveyard_Adult', 'ChildBanc': 'Graveyard_Child', 'MessageId': 'EventFlowMsg/Dm_SY_Ocarina:Talk_06'})

                    goto Event95
                  case 11:
                    SoundSystemActor.EventSoundRequestDucking({'CommandLife': 0, 'DuckingName': 'Dm:Bgmミュート(即フェード)', 'DuckingName2': '', 'DuckingName3': ''})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

                    call OcarinaWarp({'ChildBanc': 'Market_Child', 'AdultBanc': 'Market_Adult', 'NextStartPos': 'LightPrelude', 'MessageId': 'EventFlowMsg/Dm_SY_Ocarina:Talk_07'})


                    call SubEvent_FindRichard.FindRichard_ResetTimeCheck()

                    goto Event95
                  case 12:
                    GameSystemActor.EventWaitFrameOrSkip({'IsWaitEnd': True, 'Frames': 80})
                    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
                    GameSystemActor.EventTriggerShortFadeOcarinaMelodyHandle()
                    goto Event189
                }
              case 12:
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
                goto Event193
            }
        } else
        goto Event14
    }
}

void LearningOcarinaFollowExample() {
    Player_Event.EventTriggerSetOwnAsInstrumentPlayer()

    fork {
        GameSystemActor.EventWaitOcarinaInputForLearning({'IsWaitEnd': True, 'MelodyType': 'MelodyType'})
    } {
        SystemTextNPC.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'IsOverrideStyle': True, 'IsCloseDialog': False, 'MessageId': '', 'IsWaitEnd': False, 'OverrideStyle': 3, 'MaintainPerformanceState': 0})
    } {
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
        Player_Event.EventPlayerPlayOcarinaFree({'IsWaitEnd': True})
    }

}

void LearningOcarinaPlayAutoForSeek() {
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    switch GameSystemActor.EventQueryMelodyTypeForNormal() {
      case 6:
        PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': 1, 'IsEquipDIrect': False, 'Actor': 'Item_Melody_ForestMinuet', 'IsSetMessageTargetActorName': True, 'IsGetEvent': False})
        Event55:
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        GameSystemActor.EventTriggerPlayAutoFixedTune({'IsLearningWarpMelodyDemo': True})
      case 7:
        PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': 1, 'IsEquipDIrect': False, 'Actor': 'Item_Melody_FireBolero', 'IsSetMessageTargetActorName': True, 'IsGetEvent': False})
        goto Event55
      case 8:
        PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': 1, 'IsEquipDIrect': False, 'Actor': 'Item_Melody_WaterSerenade', 'IsSetMessageTargetActorName': True, 'IsGetEvent': False})
        goto Event55
      case 9:
        PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': 1, 'IsEquipDIrect': False, 'Actor': 'Item_Melody_SpiritRequiem', 'IsSetMessageTargetActorName': True, 'IsGetEvent': False})
        goto Event55
      case 10:
        PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': 1, 'IsEquipDIrect': False, 'Actor': 'Item_Melody_ShadowNocturne', 'IsSetMessageTargetActorName': True, 'IsGetEvent': False})
        goto Event55
      case 11:
        PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': 1, 'IsEquipDIrect': False, 'Actor': 'Item_Melody_LightPrelude', 'IsSetMessageTargetActorName': True, 'IsGetEvent': False})
        goto Event55
    }
}

void LearningOcarinaPlayAuto() {

    call PlayAuto_MelodyGet()

    switch GameSystemActor.EventQueryMelodyTypeForNormal() {
      case 0:
        PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Actor': 'Item_Melody_ZeldaLullaby', 'Num': 1, 'IsEquipDIrect': False, 'IsSetMessageTargetActorName': True, 'IsGetEvent': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 330})
        Event86:
        GameSystemActor.EventTriggerSetCurrentMelodyBtnIndexForCursor()

        call LightOff_NoPalette()

      case 1:
        PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': 1, 'Actor': 'Item_Melody_EponaSong', 'IsEquipDIrect': False, 'IsSetMessageTargetActorName': True, 'IsGetEvent': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 270})
        goto Event86
      case 2:
        PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': 1, 'IsEquipDIrect': False, 'Actor': 'Item_Melody_SariaSong', 'IsSetMessageTargetActorName': True, 'IsGetEvent': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 250})
        goto Event86
      case 3:
        PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': 1, 'IsEquipDIrect': False, 'Actor': 'Item_Melody_SunSong', 'IsSetMessageTargetActorName': True, 'IsGetEvent': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
        goto Event86
      case 4:
        PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': 1, 'IsEquipDIrect': False, 'Actor': 'Item_Melody_TimeSong', 'IsSetMessageTargetActorName': True, 'IsGetEvent': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 380})
        goto Event86
      case 5:
        PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': 1, 'IsEquipDIrect': False, 'Actor': 'Item_Melody_StormSong', 'IsSetMessageTargetActorName': True, 'IsGetEvent': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 180})
        goto Event86
      case 12:
        PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': 1, 'IsEquipDIrect': False, 'IsSetMessageTargetActorName': True, 'Actor': 'Item_Melody_ScarecrowSong', 'IsGetEvent': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        goto Event86
    }
}

void PlayOcarinaFree() {
    if !GameDataActor.EventQueryCheckIsGet({'ActorName': 'Item_Melody_ZeldaLullaby'}) {
        Npc_Navi.EventNaviChangeAttentionTypeToNone({'IsWaitEnd': True})
        if UISystemActor.EventQueryHaveOpenedActionGuide({'ActionGuideType': 64}) {

            fork {

                call ActionGuide.OpenActionGuideSceen({'ActionGuideType': 64})

            } {
                Player_Event.EventPlayerWait({'IsWaitEnd': True})
            }

        }
        Event195:
        Player_Event.EventTriggerSetOwnAsInstrumentPlayer()

        fork {
            Player_Event.EventPlayerPlayOcarinaFree({'IsWaitEnd': False})
        } {
            GameSystemActor.EventWaitOcarinaInputForNormal({'IsWaitEnd': True, 'HasRecommendedMelody': 'HasRecommendedMelody', 'MelodyType': 'MelodyType'})
        } {
            if !Player_Event.EventQueryPlayerIsChild() {
                PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'StartBluarLevel': 0.0, 'IsAutoFocalDist': False, 'EndBluarLevel': 2.0, 'IsWaitEnd': False, 'RequiredFrame': 30, 'StartDistance': 0.6100000143051147, 'EndDistance': 0.6100000143051147, 'StartFNumber': 135.0, 'EndFNumber': 135.0, 'IsEnableDofFarCancel': False, 'NearDepthBlurAdd': 3.0, 'IsEnableNearDepthBlur': False, 'IsEnableNear': False})
            } else {
                PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'StartBluarLevel': 0.0, 'IsAutoFocalDist': False, 'EndBluarLevel': 2.0, 'IsWaitEnd': False, 'StartDistance': 0.550000011920929, 'EndDistance': 0.550000011920929, 'RequiredFrame': 30, 'StartFNumber': 155.0, 'EndFNumber': 155.0, 'IsEnableDofFarCancel': False, 'NearDepthBlurAdd': 3.0, 'IsEnableNearDepthBlur': False, 'IsEnableNear': False})
            }
        } {
            Npc_Navi.EventNaviMoveOcarinaPlayPosition({'ArrivedASCommand': 'DemoOcarinaNavi', 'IsWaitEnd': False})
            EventSystemActor.EventWait({'Frames': 20, 'IsWaitEnd': True})
        } {
            Dm_Locator[cam_position].EventWarpToTargetActor({'TargetActorKind': 1, 'InstanceName': '', 'YAngle': 0.0, 'IsWaitEnd': True, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'PositionOffset': [0.0, 0.699999988079071, 0.0], 'ClothWarpMode': -1})
        } {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HavePreparedToPlayOcarina', 'Index': -1}) {
                Event268:
                EventCamera.EventSendEventSingleMessageToPlayerCamera({'IsWaitEnd': False})
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HavePreparedToPlayOcarina', 'Index': -1, 'Value': True})
                if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_Melody_ZeldaLullaby'}) {
                    EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'LongShiftRange': 180.0, 'FovySetType': 0, 'LatShiftRange': 60.0, 'MoveTime': 30, 'IsWaitEnd': True, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'PosVector': [-0.5699999928474426, 0.9200000166893005, 2.430000066757202], 'AtVector': [0.0, 0.8100000023841858, 0.0], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': True})
                }
                goto Event268
            }
        }

        switch GameSystemActor.EventQueryMelodyTypeForNormal() {
          case [0, 2, 4, 5, 6, 7, 8, 9, 10, 11, 12]:
            Event171:
            if !Player_Event.EventQueryPlayerIsChild() {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsOcarinaEvent_Cow_GiveMilk_Ocarina'})
                && !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'Vector': [-0.20000000298023224, 0.8100000023841858, 0.8999999761581421], 'ActorName': 'Player_Event', 'VectorSetType': 3, 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False}) {
                    EventCamera.EventOcarinaResultCamera({'Actor1InstanceName': '', 'LookAtDis': -1.0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 2, 'LongShiftRange': 180.0, 'FovySetType': 0, 'LatShiftRange': 60.0, 'IsWaitEnd': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.0, 0.0], 'Actor1ActorName': 'Player_Event', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'CameraCollisionMode': 1, 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'TargetFovy': 40.0, 'Actor1ActorBone': '', 'OnetimeShiftRange': 10.0, 'ExtraCheckSaftyPos': False, 'MoveTime': 30})
                    Event12:

                    call PlayAuto()

                    switch GameSystemActor.EventQueryMelodyTypeForNormal() {
                      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 13]:
                        Event10:
                        if !GameSystemActor.EventQueryIsRecommendedMelody() {
                            switch GameSystemActor.EventQueryMelodyTypeForNormal() {
                              case 0:
                                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 180})
                                Event188:

                                call RequestCreateConditionSensor({'IsNotNeedSensor': False})


                                call LightOff()

                              case 1:
                                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
                                goto Event188
                              case 2:
                                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 250})
                                goto Event188
                              case 3:
                                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
                                goto Event188
                              case 4:
                                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
                                goto Event188
                              case 5:
                                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 180})
                                goto Event188
                              case [6, 7, 8, 9, 10, 11]:
                                goto Event14
                              case 12:
                                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
                                goto Event188
                            }
                        } else
                        goto Event14
                      case 12:
                        switch GameSystemActor.EventQueryCheckContactAreaCanCallPierre() {
                          case 0:
                            goto Event10
                          case [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16]:
                            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})

                            call AppearPierreEventTransition()

                        }
                    }
                } else {
                    EventCamera.EventOcarinaResultCamera({'Actor1InstanceName': '', 'LookAtDis': -1.0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 2, 'LongShiftRange': 180.0, 'FovySetType': 0, 'LatShiftRange': 60.0, 'IsWaitEnd': False, 'MoveTime': 30, 'CameraCollisionLookAtActorOffset': [0.0, 1.0, 0.0], 'Actor1ActorName': 'Player_Event', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'Actor1ActorBone': 'Head', 'PosVector': [-0.20000000298023224, -0.10636000335216522, 0.8999999761581421], 'AtVector': [0.009999999776482582, -0.14635999500751495, 0.0], 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'CameraCollisionMode': 1, 'ExtraCheckSaftyPos': True, 'OnetimeShiftRange': 20.0})
                    PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'IsWaitEnd': False, 'IsAutoFocalDist': False, 'RequiredFrame': 30, 'EndBluarLevel': 2.0, 'StartBluarLevel': 2.0, 'EndFNumber': 115.0, 'EndDistance': 0.4000000059604645, 'StartDistance': 0.6100000143051147, 'StartFNumber': 135.0, 'IsEnableDofFarCancel': False, 'NearDepthBlurAdd': 3.0, 'IsEnableNear': False, 'IsEnableNearDepthBlur': False})
                    goto Event12
                }
            } else {
                EventCamera.EventOcarinaResultCamera({'Actor1InstanceName': '', 'LookAtDis': -1.0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 2, 'LatShiftRange': 60.0, 'LongShiftRange': 180.0, 'FovySetType': 0, 'IsWaitEnd': False, 'MoveTime': 30, 'Actor1ActorName': 'Player_Event', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'PosVector': [-0.1899999976158142, -0.014870000071823597, 1.0399999618530273], 'AtVector': [0.05000000074505806, -0.20487000048160553, 0.0], 'Actor1ActorBone': 'Head', 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'CameraCollisionMode': 1, 'OnetimeShiftRange': 10.0, 'ExtraCheckSaftyPos': True})
                PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'IsWaitEnd': False, 'StartBluarLevel': 2.0, 'IsAutoFocalDist': False, 'RequiredFrame': 30, 'EndBluarLevel': 2.0, 'StartDistance': 0.550000011920929, 'EndDistance': 0.36000001430511475, 'EndFNumber': 144.0, 'StartFNumber': 155.0, 'IsEnableDofFarCancel': False, 'NearDepthBlurAdd': 3.0, 'IsEnableNear': False, 'IsEnableNearDepthBlur': False})
                goto Event12
            }
          case 1:

            call Dm_SY_Ocarina_EponaSong.StartToPrepareCallOwnedHorse()

            goto Event171
          case 3:

            call Npc_Hylia_Talon_Adult_Kakariko.SunSong_Talon_TurnOverInBed()

            goto Event171
        }
    } else {
        goto Event195
    }
}

void OcarinaWarp() {
    if !Player_Event.EventQueryPlayerIsAbleWarp() {
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'OverrideStyle': 0, 'ChoiceNumber': 2, 'MessageId': 'MessageId', 'ChoiceLabel1': 2, 'ChoiceLabel2': 1, 'IsCloseDialog': True, 'EndDialogOption': 2, 'IsOverrideStyle': False, 'MaintainPerformanceState': 0})
        if !GameSystemActor.EventQueryTalkChoice2() {
            switchcall SubEvent_GetSwordBigGoron.SubEvent_TimerCheck_Warp({'IsFaroreWind': False}) {
              case 1303515621:
                switchcall Get_Epona.SubEvent_AfterWonGambleRace_OcarinaWarp() {
                  case 1303515621:
                    EventSystemActor.EventTransition({'EventName': 'Dm_SY_Ocarina_move', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MapIconDeactivateByAreaActor'})
                    if !Player_Event.EventQueryPlayerIsChild() {
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_DiggingHole_SetDoPlate', 'Value': False})
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_DiggingHoleTour_Start', 'Value': False})
                        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'MiniGame_DiggingHole', 'StepName': 'Wait', 'IsIgnoreChallengeProgressUI': True, 'IsIgnoreCompletedChallenge': False, 'IsWaitEnd': False})
                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HavePlayedEvent.Dm_DesertColossus_0030', 'Index': -1}) {
                            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HavePlayedEvent.Dm_TimeTemple_0087', 'Index': -1}) {
                                Event22:
                                GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'NextBanc': 'ChildBanc', 'NextStartPos': 'NextStartPos', 'BootEventName': 'OcarinaWarp_Arrive', 'IsStartOnEvent': False, 'EventStarterName': '', 'IsItemWarp': True, 'FadePattern': 2})
                                Event76:
                                GameSystemActor.EventTriggerRequestAutoSave()
                            } else
                            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HavePlayedEvent.Dm_TimeTemple_0086', 'Index': -1}) {
                                goto Event22
                            } else
                            switch GameSystemActor.EventQueryMelodyTypeForNormal() {
                              case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13]:
                                goto Event22
                              case 11:
                                GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'NextBanc': 'ChildBanc', 'NextStartPos': 'NextStartPos', 'IsStartOnEvent': False, 'EventStarterName': '', 'BootEventName': 'SageOfSpirit_OcarinaBackTimeTemple', 'IsItemWarp': True, 'FadePattern': 2})
                                goto Event76
                            }
                        } else {
                            goto Event22
                        }
                    } else {
                        GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'IsStartOnEvent': False, 'NextBanc': 'AdultBanc', 'NextStartPos': 'NextStartPos', 'BootEventName': 'OcarinaWarp_Arrive', 'EventStarterName': '', 'IsItemWarp': True, 'FadePattern': 2})
                        goto Event76
                    }
                  case 184981848:
                    Event209:
                    GameSystemActor.EventTriggerFadeOcarinaMelodyHandle()
                }
              case 184981848:
                goto Event209
            }
        } else {
            goto Event209
        }
    } else {
        UISystemActor.EventTriggerRequestOpenSimpleInfo({'Type': 11})
        goto Event209
    }
}

void RequestCreateConditionSensor() {
    if GameDataActor.EventQueryIsBool({'BoolValue': 'IsNotNeedSensor'}) {
        switch GameSystemActor.EventQueryMelodyTypeForNormal() {
          case 3:
            GameSystemActor.EventTriggerRequestCreateConditionSensor({'ActorName': 'SongOfTheSunSensorActor'})
          case 5:
            GameSystemActor.EventTriggerRequestCreateConditionSensor({'ActorName': 'SongOfTheStormSensorActor'})
        }
    }
}

void LearnedMelody() {
    SystemTextNPC.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'IsCloseDialog': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_SY_Ocarina:Talk_01', 'MaintainPerformanceState': 0})
}

void OcarinaWarp_Arrive() {
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'EventName': 'Dm_SY_Ocarina_move_Ed', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
    if !UISystemActor.EventQueryIsRequestLoseRunningRaceAfterBancChanged() {
        UISystemActor.EventTriggerRequestOpenLoseRunningRaceSimpleInfo()
    }
    if !UISystemActor.EventQueryIsRequestVanishExchangeItemAfterBancChanged() {
        UISystemActor.EventTriggerRequestOpenVanishExchangeItemSimpleInfo()
    }
    switch GameSystemActor.EventQueryMelodyTypeForNormal() {
      case 8:
        Npc_Navi.EventNaviRequestBallonMessage({'Index': 135})
        Event229:
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HidingHole_AFK_ON'})
      case 9:
        goto Event229
      case 11:
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'IsSettingMapPlayerIconAnchor', 'Index': -1, 'Value': True})
        if Player_Event.EventQueryPlayerIsChild()
        && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.Dm_SageRoom_0010'})
        && GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.Dm_TimeTemple_0090'}) {
            UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            UISystemActor.EventTriggerSetTimerUnvisibleEvent({'IsUnvisible': True})
            EventSystemActor.EventTransition({'EventName': 'GetArrowLight_OcarinaBackTimeTemple', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
        }
    }
}

void PlayOcarinaSequence_NpcBeginningTalk(bool IsNotNeedSensor = False) {
    Event178:

    fork {
        Player_Event.EventPlayerPlayOcarinaFree({'IsWaitEnd': True})
    } {
        GameSystemActor.EventWaitOcarinaInputForSequence({'IsWaitEnd': True, 'MelodyType': 'MelodyType', 'IsNeedMessageDialogOpenAnim': 'IsNeedMessageDialogOpenAnim'})
    } {
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'IsOverrideStyle': True, 'IsCloseDialog': False, 'MessageId': '', 'OverrideStyle': 3, 'MaintainPerformanceState': 0})
    } {
        if !Player_Event.EventQueryPlayerIsChild() {

            fork {
                EventCamera.EventOcarinaResultCamera({'Actor1InstanceName': '', 'LookAtDis': -1.0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 2, 'LongShiftRange': 180.0, 'FovySetType': 0, 'LatShiftRange': 60.0, 'CameraCollisionLookAtActorOffset': [0.0, 1.0, 0.0], 'Actor1ActorName': 'Player_Event', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'MoveTime': 40, 'CameraCollisionMode': 1, 'OnetimeShiftRange': 10.0, 'ExtraCheckSaftyPos': True, 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'Actor1ActorBone': 'Spine_1', 'PosVector': [-0.20000000298023224, 0.22612999379634857, 0.8999999761581421], 'AtVector': [0.009999999776482582, 0.18613000214099884, 0.0]})
                EventCamera.EventOcarinaResultCamera({'Actor1InstanceName': '', 'LookAtDis': -1.0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 2, 'LongShiftRange': 180.0, 'FovySetType': 0, 'LatShiftRange': 60.0, 'IsWaitEnd': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.0, 0.0], 'Actor1ActorName': 'Player_Event', 'TargetFovy': 50.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'CameraCollisionMode': 1, 'OnetimeShiftRange': 10.0, 'MoveTime': 0, 'Actor1ActorBone': 'Spine_1', 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'ExtraCheckSaftyPos': False})
            } {
                PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'IsWaitEnd': False, 'IsAutoFocalDist': False, 'EndBluarLevel': 2.0, 'EndFNumber': 115.0, 'EndDistance': 0.4000000059604645, 'StartBluarLevel': 0.0, 'RequiredFrame': 40, 'StartDistance': 0.4000000059604645, 'StartFNumber': 300.0, 'IsEnableDofFarCancel': False, 'NearDepthBlurAdd': 3.0, 'IsEnableNear': False, 'IsEnableNearDepthBlur': False})
            }

        } else {

            fork {
                EventCamera.EventOcarinaResultCamera({'Actor1InstanceName': '', 'LookAtDis': -1.0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 2, 'LatShiftRange': 60.0, 'LongShiftRange': 180.0, 'FovySetType': 0, 'Actor1ActorName': 'Player_Event', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveTime': 40, 'CameraCollisionMode': 1, 'OnetimeShiftRange': 10.0, 'ExtraCheckSaftyPos': True, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'IsWaitEnd': True, 'Actor1ActorBone': 'Spine_1', 'PosVector': [-0.1899999976158142, 0.5041700005531311, 1.0399999618530273], 'AtVector': [0.05000000074505806, 0.3141700029373169, 0.0]})
                EventCamera.EventOcarinaResultCamera({'Actor1InstanceName': '', 'LookAtDis': -1.0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 2, 'LatShiftRange': 60.0, 'LongShiftRange': 180.0, 'FovySetType': 0, 'Actor1ActorName': 'Player_Event', 'TargetFovy': 50.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'CameraCollisionMode': 1, 'OnetimeShiftRange': 10.0, 'MoveTime': 0, 'Actor1ActorBone': 'Spine_1', 'PosVectorSetType': 1, 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'AtVectorSetType': 1, 'ExtraCheckSaftyPos': False, 'IsWaitEnd': False})
            } {
                PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'IsWaitEnd': False, 'EndBluarLevel': 2.0, 'EndDistance': 0.36000001430511475, 'EndFNumber': 144.0, 'StartBluarLevel': 0.0, 'RequiredFrame': 40, 'IsAutoFocalDist': False, 'StartFNumber': 300.0, 'StartDistance': 0.5, 'IsEnableDofFarCancel': False, 'NearDepthBlurAdd': 3.0, 'IsEnableNear': False, 'IsEnableNearDepthBlur': False})
            }

        }
    } {
        if !GameDataActor.EventQueryIsBool({'BoolValue': 'IsNeedMessageDialogOpenAnim'}) {
            SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 1})
        }
    }

    if GameSystemActor.EventQueryMelodyTypeForNormal() in [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12] {

        call PlayAuto()

        switch GameSystemActor.EventQueryMelodyTypeForNormal() {
          case 0:
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 180})
            Event184:

            fork {

                call Common_Camera_Pln.CameraDoF_Event_Common()

            } {

                call LightOff()

            }


            call RequestCreateConditionSensor({'IsNotNeedSensor': 'IsNotNeedSensor'})

            Event215:
            if GameSystemActor.EventQueryMelodyTypeForNormal() in [6, 7, 8, 9, 10, 11] {
                GameSystemActor.EventTriggerFadeOcarinaMelodyHandle()
            }
          case 1:
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 210})
            goto Event184
          case 2:
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 250})
            goto Event184
          case [3, 7, 10, 11, 12]:
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
            goto Event184
          case 4:
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 270})
            goto Event184
          case 5:
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 180})
            goto Event184
          case [6, 8]:
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
            Event219:

            call Common_Camera_Pln.CameraDoF_Event_Common()

            goto Event215
          case 9:
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
            goto Event219
        }
    }
}

void AppearPierreEventTransition() {
    switch GameSystemActor.EventQueryCheckContactAreaCanCallPierre() {
      case 1:
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'AppearPierre_GerudoTrainingGround_01'})
      case 2:
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'AppearPierre_GerudoFortress_01'})
      case 3:
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'AppearPierre_ZoraFountain_01'})
      case 4:
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'AppearPierre_DeathMountainCrater_01'})
      case 5:
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'AppearPierre_DeathMountainCrater_02'})
      case 6:
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'AppearPierre_DodongoCavern_01'})
      case 7:
        EventSystemActor.EventTransition({'EventName': 'AppearPierre_ByScarecrowSong', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
      case 8:
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'AppearPierre_LakeHylia_02'})
      case 9:
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'AppearPierre_LakeHylia_03'})
      case 10:
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'AppearPierre_ForestTemple_01'})
      case 11:
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'AppearPierre_SacredForestMeadow_01'})
      case 12:
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'AppearPierre_WaterTemple_01'})
      case 13:
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'AppearPierre_FireTemple_01'})
      case 14:
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'AppearPierre_ShadowTemple_01'})
      case 15:
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'AppearPierre_ShadowTemple_02'})
      case 16:
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'AppearPierre_SpiritTemple_01'})
    }
}

void LightOff() {

    fork {
        PostProcessingActor[Light].EventEditLocationalLight({'LocationalLightCreateType': 0, 'EditColor': True, 'EditIntensity': True, 'EditSourceRadius': True, 'Color': [1.0, 0.800000011920929, 0.6000000238418579], 'SourceRadius': 60.0, 'LightHash': 'SpotLight001', 'Intensity': 0.0, 'IsFrameTransition': True, 'FrameTransitionCount': 15})
    } {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsOcarinaEvent_BottomOfTheWell_Level_Room_01_Ocarina', 'Index': -1}) {
            EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': True, 'Frames': 15, 'CurrDemoPaletteName': 'Dm_SY_Ocarina_FreeCam', 'PrevDemoPaletteName': 'Dm_SY_Ocarina_CorrectCam_BottomOfTheWell'})
            PostProcessingActor[Capture].EventNorifyCutChangeForGraphics()
        } else {
            EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': True, 'PrevDemoPaletteName': 'Dm_SY_Ocarina_CorrectCam', 'Frames': 15, 'CurrDemoPaletteName': 'Dm_SY_Ocarina_FreeCam'})
            PostProcessingActor[Capture].EventNorifyCutChangeForGraphics()
        }
    }

}

void PlayOcarinaSequence_NpcBeginningTalk_NotCreateSensor(bool IsNotNeedSensor = True) {
    goto Event178
}

void PlayAuto_MelodyGet() {

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        GameSystemActor.EventTriggerPlayAutoFixedTune({'IsLearningWarpMelodyDemo': False})
    } {
        Player_Event.EventPlayerPlayOcarinaSuccess({'IsWaitEnd': True})
    } {
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'IsOverrideStyle': True, 'IsCloseDialog': False, 'MessageId': '', 'OverrideStyle': 3, 'MaintainPerformanceState': 0})
        SystemTextNPC.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'IsOverrideStyle': True, 'IsCloseDialog': True, 'IsWaitEnd': False, 'MessageId': 'EventFlowMsg/Dm_SY_Ocarina:Talk_00', 'OverrideStyle': 3, 'MaintainPerformanceState': 0})
    } {
        Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': 10.0, 'ASName': 'DemoOcarinaCorrectNavi_MelodyGet'})
    } {
        PostProcessingActor[Light].EventCreateLocationalLightToTargetActor({'LightType': 1, 'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'InstanceName': '', 'InnerAngle': 15.0, 'OuterAngle': 45.0, 'LightHash': 'SpotLight001', 'Direction': [0.5, -1.0, -0.5], 'PositionOffset': [-1.0, 2.0, 1.0]})
        PostProcessingActor[Light].EventEditLocationalLight({'LocationalLightCreateType': 0, 'EditColor': True, 'EditIntensity': True, 'EditSourceRadius': True, 'Color': [1.0, 0.800000011920929, 0.6000000238418579], 'SourceRadius': 60.0, 'LightHash': 'SpotLight001', 'FrameTransitionCount': 0, 'Intensity': 0.0, 'IsFrameTransition': True})
        PostProcessingActor[Light].EventEditLocationalLight({'LocationalLightCreateType': 0, 'EditColor': True, 'EditIntensity': True, 'EditSourceRadius': True, 'Color': [1.0, 0.800000011920929, 0.6000000238418579], 'SourceRadius': 60.0, 'LightHash': 'SpotLight001', 'IsFrameTransition': True, 'FrameTransitionCount': 30, 'Intensity': 20.0})
    } {
        PostProcessingActor[Capture].EventSetDynamicResolutionLoadThreshold({'Threshold': 98.0})
    }

}

void LightOff_NoPalette() {
    PostProcessingActor[Light].EventEditLocationalLight({'LocationalLightCreateType': 0, 'EditColor': True, 'EditIntensity': True, 'EditSourceRadius': True, 'Color': [1.0, 0.800000011920929, 0.6000000238418579], 'SourceRadius': 60.0, 'LightHash': 'SpotLight001', 'Intensity': 0.0, 'IsFrameTransition': True, 'FrameTransitionCount': 15})
}

void PaletteRelease_ScreenCap() {

    fork {
        EventWorldManagerController.EventTriggerResetDemoPaletteForFlowchart({'IsWaitEnd': True})
    } {
        PostProcessingActor[Capture].EventNorifyCutChangeForGraphics()
    } {
        PostProcessingActor[Light].EventEditLocationalLight({'LocationalLightCreateType': 0, 'EditColor': True, 'EditIntensity': True, 'EditSourceRadius': True, 'Color': [1.0, 0.800000011920929, 0.6000000238418579], 'SourceRadius': 60.0, 'LightHash': 'SpotLight001', 'Intensity': 0.0, 'IsFrameTransition': True, 'FrameTransitionCount': 15})
    }

}

void LightPaletteOff_NoCapture() {

    fork {
        PostProcessingActor[Light].EventEditLocationalLight({'LocationalLightCreateType': 0, 'EditColor': True, 'EditIntensity': True, 'EditSourceRadius': True, 'Color': [1.0, 0.800000011920929, 0.6000000238418579], 'SourceRadius': 60.0, 'LightHash': 'SpotLight001', 'Intensity': 0.0, 'IsFrameTransition': True, 'FrameTransitionCount': 15})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': True, 'PrevDemoPaletteName': 'Dm_SY_Ocarina_CorrectCam', 'Frames': 15, 'CurrDemoPaletteName': 'Dm_SY_Ocarina_FreeCam'})
    }

}
